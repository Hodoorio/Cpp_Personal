#include "BlackjackGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Engine.h"
#include "PlayerActor.h"
#include "DealerActor.h"
#include "TableActor.h"
#include "Deck.h"
#include "BlackjackHUD.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerController.h"

ABlackjackGameMode::ABlackjackGameMode()
{
    PrimaryActorTick.bCanEverTick = false;
    Deck = CreateDefaultSubobject<UDeck>(TEXT("Deck"));
}

void ABlackjackGameMode::BeginPlay()
{
    Super::BeginPlay();

    UWorld* World = GetWorld();
    if (!World) return;

    // UI 모드로 설정
    SetInputModeUIOnly();

    // 플레이어, 딜러, 테이블 생성
    if (!Player && PlayerClass)
    {
        Player = World->SpawnActor<APlayerActor>(PlayerClass, FVector(0, 400, 0), FRotator::ZeroRotator);
    }

    if (!Dealer && DealerClass)
    {
        Dealer = World->SpawnActor<ADealerActor>(DealerClass, FVector(0, -400, 0), FRotator::ZeroRotator);
    }

    if (!Table && TableClass)
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
    // 객체 유효성 검사
    if (!Player || !Dealer || !Table || !Deck)
    {
        UE_LOG(LogTemp, Error, TEXT("StartGame(): 필수 객체가 설정되지 않았습니다!"));
        return;
    }

    // 플레이어와 딜러의 핸드 초기화
    Player->ClearHand();
    Dealer->ClearDealerHand();

    // 점수 초기화
    PlayerScore = 0;
    DealerScore = 0;
    PlayerAces = 0;
    DealerAces = 0;

    // 초기 카드 분배
    DealInitialCards();

    // 점수 업데이트 및 UI 갱신
    AdjustForAces(PlayerScore, PlayerAces);
    AdjustForAces(DealerScore, DealerAces);
    UpdateScoresUI();

    // 게임 상태 설정
    CurrentState = EGameState::PlayerTurn;

    UE_LOG(LogTemp, Warning, TEXT("StartGame(): 게임이 성공적으로 시작되었습니다."));
}

void ABlackjackGameMode::PlayerHit()
{
    // 기본 객체 유효성 검사
    if (!Player || !Dealer || !Table)
    {
        UE_LOG(LogTemp, Error, TEXT("PlayerHit(): Player, Dealer, 또는 Table이 NULL입니다!"));
        return;
    }

    const TArray<FDealerHand>& DealerHands = Dealer->GetHands();
    if (DealerHands.Num() == 0 || DealerHands[0].Cards.Num() == 0)
    {
        UE_LOG(LogTemp, Error, TEXT("PlayerHit(): DealerHands 또는 Cards 배열이 비어 있습니다!"));
        return;
    }

    UCard* NewCard = Dealer->DrawCard(Deck);
    if (!NewCard)
    {
        UE_LOG(LogTemp, Error, TEXT("PlayerHit(): 카드 드로우 실패. 덱이 비어있을 가능성이 있습니다!"));
        return;
    }

    if (Player->Hands.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("PlayerHit(): Player의 Hands 배열이 비어 있습니다. 새 Hand를 생성합니다."));
        Player->Hands.Add(FPlayerHand());
    }

    Player->GiveCardToHand(NewCard, 0);
    PlayerScore += NewCard->GetCardValue();

    // Ace 점수 처리
    if (NewCard->Rank == ERank::Ace)
    {
        PlayerAces++;
        if (BlackjackHUD)
        {
            BlackjackHUD->ShowAceChoice(); // Ace 선택 옵션 표시
        }
    }

    AdjustForAces(PlayerScore, PlayerAces);
    UE_LOG(LogTemp, Warning, TEXT("AdjustForAces 호출 완료. 현재 점수: %d"), PlayerScore);

    int32 CardIndex = Player->Hands[0].Cards.Num() - 1;
    if (CardIndex < 0)
    {
        UE_LOG(LogTemp, Error, TEXT("PlayerHit(): 카드 인덱스가 유효하지 않습니다."));
        return;
    }

    ACardActor* NewCardActor = Table->SpawnCard(NewCard, true, CardIndex);
    if (!NewCardActor)
    {
        UE_LOG(LogTemp, Error, TEXT("PlayerHit(): NewCardActor 생성 실패!"));
        return;
    }

    NewCardActor->SetFaceUp(true);

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

    // 플레이어가 21점을 초과했는지 확인
    if (PlayerScore > 21)
    {
        UE_LOG(LogTemp, Warning, TEXT("PlayerHit(): 플레이어 점수가 21점을 초과했습니다!"));
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("Player Busts! Dealer Wins."));
        PlayerStand();
    }

    UpdateScoresUI();
}

void ABlackjackGameMode::PlayerStand()
{
    if (!Player || !Dealer || !Table)
    {
        UE_LOG(LogTemp, Error, TEXT("PlayerStand(): Player, Dealer, 또는 Table이 NULL입니다."));
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
                UE_LOG(LogTemp, Warning, TEXT("딜러의 비공개 카드가 공개되었습니다."));
            }
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("PlayerStand(): 딜러의 첫 번째 카드가 NULL입니다."));
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("PlayerStand(): 딜러의 핸드에 카드가 없습니다."));
    }

    // 딜러 턴 처리 (점수 기준으로 카드 드로우)
    while (Dealer->GetHandValue(false) < 17) // 비공개 카드 제외 점수 기준
    {
        UCard* NewCard = Dealer->DrawCard(Deck);
        if (!NewCard)
        {
            UE_LOG(LogTemp, Error, TEXT("PlayerStand(): Dealer가 덱에서 카드를 가져오지 못했습니다."));
            return;
        }

        Dealer->GiveCardToHand(NewCard);
        Table->SpawnCard(NewCard, false, Dealer->GetHands()[0].Cards.Num() - 1)->SetFaceUp(true);

        UpdateScoresUI(); // 점수 업데이트
        UE_LOG(LogTemp, Warning, TEXT("PlayerStand(): 딜러가 새로운 카드를 드로우했습니다 -> %s"), *NewCard->GetCardName());
    }

    // 딜러 최종 점수 계산 (비공개 카드 포함)
    int32 FinalDealerScore = Dealer->GetHandValue(true);
    UE_LOG(LogTemp, Warning, TEXT("PlayerStand(): 딜러 최종 점수 (비공개 카드 포함): %d"), FinalDealerScore);

    // 점수 업데이트
    UpdateScoresUI();

    // 승패 판정
    if (FinalDealerScore > 21)
    {
        UE_LOG(LogTemp, Warning, TEXT("PlayerStand(): 딜러가 버스트했습니다! 플레이어 승리!"));
        EndGame(); // 플레이어 승리
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("PlayerStand(): 플레이어와 딜러의 점수를 비교하여 승자 결정."));
        EndGame(); // 결과 판정
    }
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

void ABlackjackGameMode::HandleAceChoice(int32 ChosenValue)
{
    if (!Player) return;

    // 선택된 값에 따라 점수 업데이트
    if (ChosenValue == 1)
    {
        PlayerScore -= 10; // Ace를 1로 사용하여 점수 조정
        PlayerAces--;
    }

    UpdateScoresUI();

    // 플레이어가 버스트했는지 확인
    if (PlayerScore > 21)
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, TEXT("Player Busts! Dealer Wins."));
        PlayerStand();
    }
}

void ABlackjackGameMode::AdjustForAces(int32& Score, int32& AcesCount)
{
    while (Score > 21 && AcesCount > 0)
    {
        Score -= 10; // Ace를 11에서 1로 조정
        AcesCount--;
        UE_LOG(LogTemp, Warning, TEXT("AdjustForAces(): 점수를 21 이하로 조정. 현재 점수: %d, 남은 Ace: %d"), Score, AcesCount);
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
    }

    // 플레이어와 딜러의 핸드 초기화
    Player->ClearHand();
    Dealer->ClearDealerHand();
    ClearTableCards();

    // 덱이 없는 경우 새로 생성
    if (!Deck)
    {
        // 새로운 덱 객체 생성
        Deck = CreateDefaultSubobject<UDeck>(TEXT("Deck"));

        if (!Deck)
        {
            UE_LOG(LogTemp, Error, TEXT("ResetForNextRound(): Deck 생성 실패!"));
            return;
        }
    }

    // 덱 초기화 및 셔플
    Deck->InitializeDeck();
    Deck->ShuffleDeck();
    UE_LOG(LogTemp, Warning, TEXT("덱 초기화 및 셔플 완료."));


    // 플레이어와 딜러 점수 초기화
    PlayerScore = 0;
    DealerScore = 0;
    PlayerAces = 0;
    DealerAces = 0;

    // 게임 상태를 Betting으로 설정
    CurrentState = EGameState::Betting;

    UE_LOG(LogTemp, Warning, TEXT("ResetForNextRound(): 게임이 다음 라운드로 초기화되었습니다."));
}

void ABlackjackGameMode::CalculateDealerScore()
{
    DealerScore = 0; // 딜러 점수 초기화
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
                    DealerScore += CardValue;

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

    UE_LOG(LogTemp, Warning, TEXT("딜러 총 점수: %d"), DealerScore);
}

void ABlackjackGameMode::EndGame()
{
    FString ResultMessage;

    if (PlayerScore > 21)
    {
        ResultMessage = "Player Busts! Dealer Wins.";
    }
    else if (DealerScore > 21 || PlayerScore > DealerScore)
    {
        ResultMessage = "Player Wins!";
    }
    else if (PlayerScore < DealerScore)
    {
        ResultMessage = "Dealer Wins!";
    }
    else
    {
        ResultMessage = "It's a Tie!";
    }



    // HUD 업데이트
    if (BlackjackHUD)
    {
        BlackjackHUD->UpdateMessageText(ResultMessage, 100.0f);
        BlackjackHUD->SetActionButtonsEnabled(false);
        BlackjackHUD->SetBetButtonsEnabled(true);
    }

    // 디버그 메시지 출력
    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Green, *ResultMessage);

    ResetForNextRound();
}

void ABlackjackGameMode::GameOver()
{
    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Game Over! GameOver 레벨로 이동합니다."));

    // HUD 상태 업데이트
    if (BlackjackHUD)
    {
        BlackjackHUD->UpdateMessageText("Game Over! Transitioning to GameOver level...", 100.0f);
        BlackjackHUD->SetActionButtonsEnabled(false);
        BlackjackHUD->SetBetButtonsEnabled(false);
    }

    // GameOver 레벨로 이동
    if (GameOverLevel.IsValid())
    {
        UGameplayStatics::OpenLevelBySoftObjectPtr(this, GameOverLevel);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("GameOverLevel이 설정되지 않았습니다. 레벨 이동이 생략됩니다."));
    }

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
    // HUD 객체 확인
    if (!BlackjackHUD)
    {
        UE_LOG(LogTemp, Error, TEXT("UpdateScoresUI(): BlackjackHUD가 NULL입니다!"));
        return;
    }

    // 플레이어 점수 텍스트 생성
    FString PlayerScoreText = FString::Printf(TEXT("Player: %d"), PlayerScore);

    // 딜러 점수 텍스트 초기화 (플레이어 턴 중에는 카드 숨김 처리)
    FString DealerScoreText = TEXT("Dealer: ?");

    // 딜러 핸드 확인
    const TArray<FDealerHand>& DealerHands = Dealer->GetHands();
    if (DealerHands.Num() > 0 && DealerHands[0].Cards.Num() > 0)
    {
        if (CurrentState == EGameState::PlayerTurn)
        {
            // 플레이어 턴일 경우 첫 번째 카드만 표시
            UCard* DealerFirstCard = DealerHands[0].Cards[0];
            if (DealerFirstCard)
            {
                int32 DealerFirstCardValue = DealerFirstCard->GetCardValue();
                DealerScoreText = FString::Printf(TEXT("Dealer: %d"), DealerFirstCardValue);
            }
            else
            {
                UE_LOG(LogTemp, Warning, TEXT("UpdateScoresUI(): 딜러의 첫 번째 카드가 NULL입니다."));
            }
        }
        else
        {
            // 플레이어 턴이 아닐 때 딜러 총 점수 계산
            CalculateDealerScore();
            DealerScoreText = FString::Printf(TEXT("Dealer: %d"), DealerScore);
        }
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("UpdateScoresUI(): 딜러 핸드에 카드가 없습니다."));
    }

    // HUD 점수 업데이트
    BlackjackHUD->UpdateScores(PlayerScoreText, DealerScoreText);
    UE_LOG(LogTemp, Warning, TEXT("UpdateScoresUI(): 점수 UI 업데이트 완료. Player: %d, Dealer: %s"), PlayerScore, *DealerScoreText);
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
            PlayerScore += PlayerCard->GetCardValue();

            if (PlayerCard->Rank == ERank::Ace)
            {
                PlayerAces++;
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
            DealerScore += DealerCard->GetCardValue();

            if (DealerCard->Rank == ERank::Ace)
            {
                DealerAces++;
            }

            ACardActor* DealerCardActor = Table->SpawnCard(DealerCard, false, i);
            if (DealerCardActor)
            {
                DealerCardActor->SetFaceUp(i != 0); // 첫 번째 카드는 비공개
            }
        }
    }
}

