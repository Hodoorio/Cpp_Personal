#include "BlackjackGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Engine.h"
#include "../Actor/PlayerActor.h"
#include "../Actor/DealerActor.h"
#include "../Actor/TableActor.h"
#include "../Actor/CardActor.h"
#include "../Deck.h"
#include "../UI/BlackjackHUD.h"
#include "../GameDataInstance.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerController.h"
#include "Kismet/GameplayStatics.h"

ABlackjackGameMode::ABlackjackGameMode()
{
    PrimaryActorTick.bCanEverTick = false;
    //Deck = CreateDefaultSubobject<UDeck>(TEXT("Deck"));
    CurrentState = EGameState::Betting;
    BlackjackHUD = nullptr;

    // 덱 초기화
    Deck = CreateDefaultSubobject<UDeck>(TEXT("Deck")); 

    // 테이블 초기화
    Table = CreateDefaultSubobject<ATableActor>(TEXT("Table"));

    // 플레이어와 딜러 초기화
    Player = CreateDefaultSubobject<APlayerActor>(TEXT("Player"));
    Dealer = CreateDefaultSubobject<ADealerActor>(TEXT("Dealer"));

    // 기본 상태 설정
    CurrentState = EGameState::Betting;
}


void ABlackjackGameMode::BeginPlay()
{
    Super::BeginPlay();

    UWorld* World = GetWorld();
    if (!World) return;

    // UI 모드로 설정
    SetInputModeUIOnly();

    // 플레이어, 딜러, 테이블 생성
    if (!Player && !PlayerClass)
    {
        Player = World->SpawnActor<APlayerActor>(PlayerClass, FVector(0, 400, 0), FRotator::ZeroRotator);
    }

    if (!Dealer && !DealerClass)
    {
        Dealer = World->SpawnActor<ADealerActor>(DealerClass, FVector(0, -400, 0), FRotator::ZeroRotator);
    }

    if (!Table && !TableClass)
    {
        Table = World->SpawnActor<ATableActor>(TableClass, FVector(0, 0, 0), FRotator::ZeroRotator);
    }

    if (!Player || !Dealer || !Table)
    {
        UE_LOG(LogTemp, Error, TEXT("BeginPlay(): Player, Dealer 또는 Table을 스폰할 수 없습니다!"));
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("BeginPlay(): Player, Dealer, Table 스폰 성공"));

    // HUD 생성 및 초기화
    CreateHUD();
    if (BlackjackHUD)
    {
        BlackjackHUD->InitializeUI(Player->Coins);
    }

    // 덱 초기화
    if (!Deck)
    {
        Deck = CreateDefaultSubobject<UDeck>(TEXT("Deck"));
    }

    if (Deck && Deck->Cards.Num() == 0)
    {
        Deck->InitializeDeck();
        Deck->ShuffleDeck();
        UE_LOG(LogTemp, Warning, TEXT("BeginPlay(): 덱 초기화 및 셔플 완료."));
    }
}

void ABlackjackGameMode::CreateHUD()
{
    if (BlackjackHUDClass)
    {
        BlackjackHUD = CreateWidget<UBlackjackHUD>(GetWorld(), BlackjackHUDClass);
        if (BlackjackHUD)
        {
            BlackjackHUD->AddToViewport();
        }
    }
}


void ABlackjackGameMode::StartGame()
{
    // 주요 객체 유효성 검사
    if (!Player || !Dealer || !Deck || !Table || !BlackjackHUD)
    {
        UE_LOG(LogTemp, Error, TEXT("StartGame(): 주요 객체가 NULL입니다!"));
        return;
    }

    // 딜러와 플레이어의 초기 카드 배분
    Dealer->InitialDeal(Deck, Table);
    Player->InitialDeal(Deck, Table);


    int32 PlayerScore = Player->GetHandValue();
    FString  PlayerScoreText = FString::FromInt(PlayerScore); // 플레이어 점수를 문자열로 변환

    // 딜러 점수를 '?'로 설정
    FString DealerScoreText = "?";

    // UI 업데이트
    BlackjackHUD->UpdateScores(PlayerScoreText, DealerScoreText);

    // 블랙잭 처리
    if (PlayerScore == 21)
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Green, TEXT("Black Jack! Player Wins."));
        if (BlackjackHUD)
        {
            BlackjackHUD->UpdateMessageText("Black Jack! Player Wins.");
        }
        EndGame();
        return;
    }

    // 게임 상태 설정
    CurrentState = EGameState::PlayerTurn;

    UE_LOG(LogTemp, Warning, TEXT("StartGame(): 게임이 시작되었습니다. PlayerScore: %s"), *PlayerScoreText);
	Player->SetPlayerScore(Player->GetHandValue()); // 플레이어 점수 설정
}

void ABlackjackGameMode::PlayerHit()
{
    // 기본 객체 유효성 검사
    if (!Player || !Dealer || !Table)
    {
        UE_LOG(LogTemp, Error, TEXT("PlayerHit(): Player, Dealer, 또는 Table이 NULL입니다!"));
        return;
    }

    // 딜러의 손 확인
    const TArray<FDealerHand>& DealerHands = Dealer->GetHands();
    if (DealerHands.IsEmpty() || DealerHands[0].Cards.IsEmpty())
    {
        UE_LOG(LogTemp, Error, TEXT("PlayerHit(): DealerHands 또는 Cards 배열이 비어 있습니다!"));
        return;
    }

    // 카드 드로우
    UCard* NewCard = Dealer->DrawCard(Deck);
    if (!NewCard)
    {
        UE_LOG(LogTemp, Error, TEXT("PlayerHit(): 카드 드로우 실패. 덱이 비어있을 가능성이 있습니다!"));
        return;
    }

    // 플레이어의 Hands 배열이 비어 있다면 새 Hand 생성
    if (Player->Hands.IsEmpty())
    {
        UE_LOG(LogTemp, Warning, TEXT("PlayerHit(): Player의 Hands 배열이 비어 있습니다. 새 Hand를 생성합니다."));
        Player->Hands.Add(FPlayerHand());
    }

    // 카드를 플레이어 손에 추가
    
    Player->GiveCardToHand(NewCard, 0);
    UE_LOG(LogTemp, Warning, TEXT("PlayerHit(): 계산 전 플레이어 점수 PlayerScore -> %d, NewCard_Value -> %d "), Player->GetPlayerScore(), NewCard->GetCardValue());
    Player->AddToPlayerScore(NewCard->GetCardValue());
    UE_LOG(LogTemp, Warning, TEXT("PlayerHit(): 계산 후 플레이어 점수 PlayerScore -> %d, NewCard_Value -> %d "), Player->GetPlayerScore(), NewCard->GetCardValue());

    // 에이스 처리 및 선택 UI
    if (NewCard->Rank == ERank::Ace)
    {
		Player->AddToPlayerAces(1);
        if (BlackjackHUD)
        {
            BlackjackHUD->ShowAceChoice(); // Ace 선택 UI 표시
        }
    }

    // 카드 스폰 처리
    int32 CardIndex = Player->Hands[0].Cards.Num() - 1;
    if (CardIndex < 0)
    {
        UE_LOG(LogTemp, Error, TEXT("PlayerHit(): 카드 인덱스가 유효하지 않습니다."));
        return;
    }

    ACardActor* NewCardActor = Table->SpawnCard(NewCard, true, CardIndex);
    if (NewCardActor)
    {
        NewCardActor->SetFaceUp(true);
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("PlayerHit(): NewCardActor 생성 실패!"));
        return;
    }

    // 블랙잭 처리
    if (Player->GetPlayerScore() == 21)
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Green, TEXT("Black Jack! Player Wins."));
        if (BlackjackHUD)
        {
            BlackjackHUD->UpdateMessageText("Black Jack! Player Wins.");
        }
        EndGame();
        return;
    }

    // 플레이어 버스트 처리
    if (Player->GetPlayerScore() > 21)
    {
        UE_LOG(LogTemp, Warning, TEXT("PlayerHit(): 플레이어 점수가 21점을 초과했습니다!"));
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("Player Busts! Dealer Wins."));
        PlayerStand(); // 딜러 턴으로 전환
        return;
    }

    // 점수 업데이트
    UpdateScoresUI();
    UE_LOG(LogTemp, Warning, TEXT("PlayerHit(): 점수 업데이트 완료. 현재 점수: %d"), Player->GetPlayerScore());
    
}


void ABlackjackGameMode::PlayerStand()
{
    // 기본 객체 유효성 검사
    if (!Player || !Dealer || !Table || !Deck)
    {
        UE_LOG(LogTemp, Error, TEXT("PlayerStand(): 필수 객체가 NULL입니다!"));
        return;
    }

    // 딜러의 첫 번째 비공개 카드 공개
    const TArray<FDealerHand>& DealerHands = Dealer->GetHands();
    if (DealerHands.Num() > 0 && DealerHands[0].Cards.Num() > 0)
    {
        UCard* FirstCard = DealerHands[0].Cards[0];
        if (FirstCard)
        {
            ACardActor* FirstCardActor = Table->FindCardActor(FirstCard);
            if (FirstCardActor)
            {
                FirstCardActor->SetFaceUp(true); // 카드 공개
                UE_LOG(LogTemp, Warning, TEXT("PlayerStand(): 딜러의 비공개 카드가 공개되었습니다."));
            }
        }
    }

    // 딜러 턴 처리: 점수가 17 이상일 때까지 카드 드로우
    while (Dealer->GetDealerScore() < 17)
    {
        UCard* NewCard = Deck->DrawCard();
        UE_LOG(LogTemp, Warning, TEXT("PlayerStand():  New 카드 생성"));
        if (!NewCard)
        {
            UE_LOG(LogTemp, Error, TEXT("PlayerStand(): 덱이 비어있어 딜러가 더 이상 카드를 드로우할 수 없습니다."));
            break;
        }

        Dealer->GiveCardToHand(NewCard);

        // 카드 생성 및 공개
        int32 CardIndex = Dealer->GetHands()[0].Cards.Num() - 1;
        if (CardIndex >= 0)
        {
            ACardActor* NewCardActor = Table->SpawnCard(NewCard, true, CardIndex);
            if (NewCardActor)
            {
                NewCardActor->SetFaceUp(true); // 카드 공개
                UE_LOG(LogTemp, Warning, TEXT("PlayerStand(): 딜러가 새 카드를 드로우 -> Suit: %d, Rank: %d"), NewCard->Suit, NewCard->Rank);
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("PlayerStand(): NewCardActor 생성 실패."));
            }
        }

        int32 DealerScore = Dealer->GetDealerScore(); // 숨겨진 카드 제외 점수 계산
        int32 DealerAces = Dealer->GetDealerAces();      // 딜러의 Ace 개수 가져오기

        // AdjustForAces 호출을 통해 점수 및 Ace 조정
        AdjustForAces(Dealer, 0); // 선택 값 없음으로 자동 처리

        // 점수 로그 출력
        UE_LOG(LogTemp, Warning, TEXT("PlayerStand(): 딜러 현재 점수 -> %d"), Dealer->GetDealerScore());

    }

    // 최종 점수 계산
    int DealerScore = Dealer->GetDealerScore(); // 딜러 점수 계산
    int PlayerScore = Player->GetHandValue(false); // 플레이어 점수 계산

    UE_LOG(LogTemp, Warning, TEXT("PlayerStand(): 최종 점수 계산 완료 -> PlayerScore: %d, DealerScore: %d"), PlayerScore, DealerScore);

    // 승패 판정
    EndGame();
}

void ABlackjackGameMode::PlayerSplit()
{
    if (!Player) return;

    if (!Player->CanSplit())
    {
        UE_LOG(LogTemp, Warning, TEXT("PlayerSplit(): Split is not allowed!"));
        return;
    }

    Player->Split();
    GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, TEXT("Player Split!"));
}

void ABlackjackGameMode::EndGame()
{
    UpdateHighScore(); // 최고 점수 갱신
    DetermineWinner(); // 승패 판정 및 결과 처리
    UE_LOG(LogTemp, Warning, TEXT("EndGame(): 게임 종료 및 다음 라운드 준비 완료."));
}

void ABlackjackGameMode::DisablePlayerInput()
{
    APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
    if (PlayerController)
    {
        PlayerController->SetIgnoreMoveInput(true);
        PlayerController->SetIgnoreLookInput(true);
        PlayerController->bShowMouseCursor = false;
    }

    GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, TEXT("Player input has been disabled."));
}

void ABlackjackGameMode::SetInputModeUIOnly()
{
    APlayerController* PC = GetWorld()->GetFirstPlayerController();
    if (PC)
    {
        PC->SetInputMode(FInputModeUIOnly());
        PC->bShowMouseCursor = true;
    }
}

void ABlackjackGameMode::UpdateScoresUI()
{
    FString PlayerScoreText = FString::Printf(TEXT("Player: %d"), Player->GetPlayerScore());
    FString DealerScoreText;

    // 딜러의 첫 번째 카드 상태 확인 및 점수 처리
    const TArray<FDealerHand>& DealerHands = Dealer->GetHands();
    if (!DealerHands.IsEmpty() && !DealerHands[0].Cards.IsEmpty())
    {
        const UCard* FirstCard = DealerHands[0].Cards[0];
        ACardActor* CardActor = Table->FindCardActor(FirstCard);

        if (CardActor && CardActor->GetIsFaceUp()) // Getter를 통해 카드 앞면 여부 확인
        {
            DealerScoreText = FString::Printf(TEXT("Dealer: %d"), Dealer->GetDealerScore());
        }
        else
        {
            DealerScoreText = TEXT("?");
        }
    }
    else
    {
        DealerScoreText = TEXT("Dealer: ?");
    }

    // HUD 업데이트
    if (BlackjackHUD)
    {
        BlackjackHUD->UpdateScores(PlayerScoreText, DealerScoreText);
    }

    UE_LOG(LogTemp, Warning, TEXT("UpdateScoresUI(): 점수 UI 업데이트 완료. Player: %s, Dealer: %s"), *PlayerScoreText, *DealerScoreText);
}
void ABlackjackGameMode::DealInitialCards()
{
    for (int i = 0; i < 2; i++)
    {
        // 플레이어 카드 드로우
        UCard* PlayerCard = Deck->DrawCard();
        if (PlayerCard)
        {
            Player->GiveCardToHand(PlayerCard, 0);
			Player->AddToPlayerScore(PlayerCard->GetCardValue());

            if (PlayerCard->Rank == ERank::Ace)
            {
				Player->AddToPlayerAces(1);
                if (BlackjackHUD)
                {
                    BlackjackHUD->ShowAceChoice(); // Ace 선택지 표시
                }
            }

            ACardActor* PlayerCardActor = Table->SpawnCard(PlayerCard, true, i);
            if (PlayerCardActor)
            {
                PlayerCardActor->SetFaceUp(true);
            }
        }

        // 딜러 카드 드로우
        UCard* DealerCard = Deck->DrawCard();
        if (DealerCard)
        {
            Dealer->GiveCardToHand(DealerCard);
            Dealer->AddToDealerScore(DealerCard->GetCardValue());

            if (DealerCard->Rank == ERank::Ace)
            {
                Dealer->AddToDealerAces(1);
            }

            ACardActor* DealerCardActor = Table->SpawnCard(DealerCard, false, i);
            if (DealerCardActor)
            {
                DealerCardActor->SetFaceUp(i != 0); // 첫 번째 카드는 비공개
            }
        }
    }
}

void ABlackjackGameMode::ConfirmBet()
{
    if (!Player || !BlackjackHUD) return;

    if (Player->CurrentBet > 0)
    {
        BlackjackHUD->SetActionButtonsEnabled(true);
        BlackjackHUD->SetBetButtonsEnabled(false);
        BlackjackHUD->UpdatePlayerInfo(Player->Coins, Player->CurrentBet);

        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, TEXT("Bet Confirmed! You can now play."));
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("You must place a bet first!"));
    }
}



void ABlackjackGameMode::ClearTableCards()
{
    if (Table)
    {
        TArray<AActor*> ChildActors;
        Table->GetAttachedActors(ChildActors, true);

        for (AActor* ChildActor : ChildActors)
        {
            if (ChildActor)
            {
                ChildActor->Destroy();
            }
        }

        UE_LOG(LogTemp, Warning, TEXT("ClearTableCards(): 사용된 카드 제거 완료"));
    }
}

void ABlackjackGameMode::ResetForNextRound()
{
    // 게임 종료 조건 검사
    if (Player->Coins <= 0)
    {
        GameOver();
        return;
    }

    // HUD 업데이트
    if (BlackjackHUD)
    {
        BlackjackHUD->SetBetButtonsEnabled(true);
        BlackjackHUD->SetActionButtonsEnabled(false);
        BlackjackHUD->UpdateMessageText(TEXT("Place Your Bets!"), 120.0f);
    }

    // 플레이어와 딜러의 핸드 초기화
    Player->ClearHand();
    Dealer->ClearDealerHand();
    ClearTableCards();

    // 덱 재초기화 (소멸자는 호출하지 않음)
    if (Deck)
    {
        Deck->InitializeDeck();
        Deck->ShuffleDeck();
        UE_LOG(LogTemp, Warning, TEXT("ResetForNextRound(): 덱 초기화 및 셔플 완료."));
    }

    // 게임 상태 설정
    CurrentState = EGameState::Betting;

    UE_LOG(LogTemp, Warning, TEXT("ResetForNextRound(): 게임이 다음 라운드로 초기화되었습니다."));
}

void ABlackjackGameMode::CalculateDealerScore()
{
    Dealer->SetDealerScore(0); // 딜러 점수 초기화
    TSet<UCard*> UniqueCards; // 중복 방지용 Set

    if (!Dealer)
    {
        UE_LOG(LogTemp, Error, TEXT("CalculateDealerScore(): Dealer 객체가 NULL입니다!"));
        return;
    }

    const TArray<FDealerHand>& DealerHands = Dealer->GetHands();
    if (DealerHands.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("CalculateDealerScore(): 딜러 핸드가 없습니다! 점수는 0으로 유지됩니다."));
        return;
    }

    for (const FDealerHand& Hand : DealerHands)
    {
        for (UCard* Card : Hand.Cards)
        {
            if (Card)
            {
                // 중복 카드 체크 및 점수 추가
                if (!UniqueCards.Contains(Card))
                {
                    UniqueCards.Add(Card);
                    int32 CardValue = Card->GetCardValue();
					Dealer->AddToDealerScore(CardValue);
                    
                    // 카드 정보 로그 출력
                    UE_LOG(LogTemp, Warning, TEXT("딜러 카드: %s -> 점수: %d"), *Card->GetCardName(), CardValue);
                }
                else
                {
                    UE_LOG(LogTemp, Warning, TEXT("중복된 카드 무시: %s"), *Card->GetCardName());
                }
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("핸드에서 NULL 카드가 발견되었습니다. 처리하지 않습니다."));
            }
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("딜러 총 점수: %d"), Dealer->GetDealerScore());
}

void ABlackjackGameMode::GameOver()
{
    UE_LOG(LogTemp, Warning, TEXT("GameOver(): 게임 오버 레벨로 이동 중."));

    // GameOverLevel로 레벨 전환
    UGameplayStatics::OpenLevel(this, GameOverLevelName);
}

void ABlackjackGameMode::SaveCoins()
{
    UGameDataInstance* GameInstance = Cast<UGameDataInstance>(GetGameInstance());
    if (GameInstance)
    {
        GameInstance->PlayerCoins = Player->Coins;
        UE_LOG(LogTemp, Warning, TEXT("SaveCoins(): 현재 코인을 저장했습니다 -> %d"), GameInstance->PlayerCoins);
    }
}

void ABlackjackGameMode::RestoreCoins()
{
    UGameDataInstance* GameInstance = Cast<UGameDataInstance>(GetGameInstance());
    if (GameInstance)
    {
        Player->Coins = GameInstance->PlayerCoins;
        UE_LOG(LogTemp, Warning, TEXT("RestoreCoins(): 저장된 코인을 복원했습니다 -> %d"), GameInstance->PlayerCoins);
    }
}

void ABlackjackGameMode::RestartGame()
{
    SaveCoins(); // 현재 코인 값을 저장
    FString CurrentLevelName = UGameplayStatics::GetCurrentLevelName(this); // 현재 레벨 이름 가져오기
    UGameplayStatics::OpenLevel(this, FName(*CurrentLevelName)); // 현재 레벨 다시 로드
}

void ABlackjackGameMode::UpdateHighScore()
{
    UGameDataInstance* GameInstance = Cast<UGameDataInstance>(GetGameInstance());
    if (GameInstance)
    {
        int32 CurrentCoins = Player->Coins;
        GameInstance->SaveHighScore(CurrentCoins); // 최고 점수 갱신
        UE_LOG(LogTemp, Warning, TEXT("UpdateHighScore(): 최고 점수가 갱신되었습니다."));
    }
}

void ABlackjackGameMode::DetermineWinner()
{
	if (!Player || !Dealer || !BlackjackHUD) return;
	int32 PlayerScore = Player->GetPlayerScore();
	int DealerScore = Dealer->GetDealerScore();

    if (PlayerScore > 21)
    {
        // 플레이어 버스트 처리
        Player->LoseBet();
        FString ResultMessage = "Player Busts! Dealer Wins.";
        UE_LOG(LogTemp, Warning, TEXT("DetermineWinner(): %s"), *ResultMessage);
        ProcessEndGame(ResultMessage);
    }
    else if (DealerScore > 21 || PlayerScore > DealerScore)
    {
        // 플레이어 승리 처리
        Player->WinBet();
        FString ResultMessage = "Player Wins!";
        UE_LOG(LogTemp, Warning, TEXT("DetermineWinner(): %s"), *ResultMessage);
        ProcessEndGame(ResultMessage);
    }
    else if (PlayerScore < DealerScore)
    {
        // 딜러 승리 처리
        Player->LoseBet();
        FString ResultMessage = "Dealer Wins!";
        UE_LOG(LogTemp, Warning, TEXT("DetermineWinner(): %s"), *ResultMessage);
        ProcessEndGame(ResultMessage);
    }
    else
    {
        // 무승부 처리
        FString ResultMessage = "It's a Tie!";
        UE_LOG(LogTemp, Warning, TEXT("DetermineWinner(): %s"), *ResultMessage);
        ProcessEndGame(ResultMessage);
    }
}

void ABlackjackGameMode::ProcessEndGame(const FString& ResultMessage)
{
    if (BlackjackHUD)
    {
        BlackjackHUD->UpdateMessageText(ResultMessage, 100.0f);
        BlackjackHUD->SetActionButtonsEnabled(false);
        BlackjackHUD->SetBetButtonsEnabled(true);
    }

    // 디버그 메시지 출력
    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, *ResultMessage);

    ResetForNextRound();
    BlackjackHUD->ShowNextGameButton();
}



void ABlackjackGameMode::AdjustForAces(AActor* Actor, int32 ChosenAceValue /* = 0 */)
{
    if (!Actor)
    {
        UE_LOG(LogTemp, Error, TEXT("AdjustForAces(): Actor가 NULL입니다!"));
        return;
    }

    // Actor가 PlayerActor인지 DealerActor인지 확인
    int32 Score = 0;
    int32 AcesCount = 0;

    // PlayerActor일 경우
    if (APlayerActor* PlayerActor = Cast<APlayerActor>(Actor))
    {
        Score = PlayerActor->GetPlayerScore();
        AcesCount = PlayerActor->GetPlayerAces();
    }
    // DealerActor일 경우
    else if (ADealerActor* DealerActor = Cast<ADealerActor>(Actor))
    {
        Score = DealerActor->GetDealerScore();
        AcesCount = DealerActor->GetDealerAces();
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("AdjustForAces(): Actor는 PlayerActor 또는 DealerActor가 아닙니다!"));
        return;
    }

    // 플레이어 또는 딜러의 선택을 점수에 반영
    if (ChosenAceValue > 0)
    {
        Score += ChosenAceValue;
        AcesCount--;
        UE_LOG(LogTemp, Warning, TEXT("AdjustForAces(): Ace 선택 값 적용. Score: %d, AcesCount: %d"), Score, AcesCount);
    }

    // 점수가 21을 초과하면 Ace를 1로 조정
    while (Score > 21 && AcesCount > 0)
    {
        Score -= 10; // Ace를 11에서 1로 변경
        AcesCount--;
        UE_LOG(LogTemp, Warning, TEXT("AdjustForAces(): 자동 Ace 조정. Score: %d, AcesCount: %d"), Score, AcesCount);
    }

    // 변경된 점수 및 Ace 개수 업데이트
    if (APlayerActor* PlayerActor = Cast<APlayerActor>(Actor))
    {
        PlayerActor->SetPlayerScore(Score);
        PlayerActor->SetPlayerAces(AcesCount);
    }
    else if (ADealerActor* DealerActor = Cast<ADealerActor>(Actor))
    {
        DealerActor->SetDealerScore(Score);
        DealerActor->SetDealerAces(AcesCount);
    }

    UE_LOG(LogTemp, Warning, TEXT("AdjustForAces(): 최종 점수 계산 완료. Score: %d, AcesCount: %d"), Score, AcesCount);
}