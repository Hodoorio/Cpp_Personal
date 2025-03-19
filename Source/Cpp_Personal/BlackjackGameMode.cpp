#include "BlackjackGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Engine.h"
#include "PlayerActor.h"
#include "DealerActor.h"
#include "TableActor.h"
#include "BlackjackHUD.h"
#include "GameFramework/Character.h"
#include "GameFramework/PlayerController.h"

ABlackjackGameMode::ABlackjackGameMode()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ABlackjackGameMode::BeginPlay()
{
    Super::BeginPlay();

    UWorld* World = GetWorld();
    if (!World) return;

    // ✅ 게임 시작 시 UI 모드로 설정
    SetInputModeUIOnly();

    // 🎲 플레이어, 딜러, 테이블 스폰
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

    // ✅ 스폰된 액터 정상 확인
    if (!Player || !Dealer || !Table)
    {
        UE_LOG(LogTemp, Error, TEXT("BeginPlay(): Player, Dealer 또는 Table을 스폰할 수 없습니다!"));
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("BeginPlay(): Player, Dealer, Table 스폰 성공"));

    // 🎲 UI 생성
    CreateHUD();
    if (BlackjackHUD)
    {
        BlackjackHUD->InitializeUI(Player->Coins);
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
    if (!Player || !Dealer || !Table)
    {
        UE_LOG(LogTemp, Error, TEXT("StartGame(): Player, Dealer 또는 Table이 설정되지 않았습니다!"));
        return;
    }

    if (!Dealer->Deck)
    {
        UE_LOG(LogTemp, Error, TEXT("StartGame(): Dealer->Deck is NULL! Cannot start the game."));
        return;
    }

    // ✅ UI 버튼 상태 변경
    if (BlackjackHUD)
    {
        BlackjackHUD->SetActionButtonsEnabled(true);
        BlackjackHUD->SetBetButtonsEnabled(false);
        BlackjackHUD->UpdatePlayerInfo(Player->Coins, Player->CurrentBet);
    }

    if (BlackjackHUD)
    {
        BlackjackHUD->UpdateScores(TEXT("0"), TEXT("0"));
    }

    // ✅ 카드 2장씩 지급
    for (int i = 0; i < 2; i++)
    {
        UCard* PlayerCard = Dealer->DrawCard();
        if (PlayerCard)
        {
            Player->GiveCardToHand(PlayerCard, 0);
            ACardActor* PlayerCardActor = Table->SpawnCard(PlayerCard, true, i);
            if (PlayerCardActor)
            {
                PlayerCardActor->SetFaceUp(true);
            }
        }

        UCard* DealerCard = Dealer->DrawCard();
        if (DealerCard)
        {
            Dealer->GiveCardToHand(DealerCard);
            ACardActor* DealerCardActor = Table->SpawnCard(DealerCard, false, i);
            if (DealerCardActor)
            {
                DealerCardActor->SetFaceUp(i != 0); // 첫 번째 딜러 카드만 뒷면
            }
        }
    }
    UpdateScoresUI();

    CurrentState = EGameState::PlayerTurn;
}

void ABlackjackGameMode::PlayerHit()
{
    if (!Player || !Dealer || !Table) return;

    UCard* NewCard = Dealer->DrawCard();
    if (NewCard)
    {
        Player->GiveCardToHand(NewCard, 0);
        ACardActor* NewCardActor = Table->SpawnCard(NewCard, true, Player->Hands[0].Cards.Num() - 1);
        if (NewCardActor)
        {
            NewCardActor->SetFaceUp(true);
        }

        UpdateScoresUI();

        // ✅ 새 카드가 A라면 선택할 기회 제공
        if (NewCard->Rank == ERank::Ace)
        {
            if (BlackjackHUD)
            {
                BlackjackHUD->ShowAceChoice();  // A 선택 버튼 표시
            }
            return;
        }

        // ✅ 21 초과 시 자동으로 Stand
        if (Player->GetHandValue(0) > 21)
        {
            GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("Player Busts! Dealer Wins."));
            PlayerStand();
        }
    }
}

void ABlackjackGameMode::PlayerStand()
{
    if (!Player || !Dealer || !Table) return;

    GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, TEXT("Player Stands. Dealer's Turn Begins."));

    // ✅ 딜러 첫 번째 카드 공개
    if (Dealer->Hands.Num() > 0)
    {
        Table->SpawnCard(Dealer->Hands[0], false, 0)->SetFaceUp(true);
    }

    // ✅ 딜러 턴 진행
    while (Dealer->GetHandValue() < 17)
    {
        UCard* DealerCard = Dealer->DrawCard();
        if (!DealerCard) return;

        Dealer->GiveCardToHand(DealerCard);
        Table->SpawnCard(DealerCard, false, Dealer->Hands.Num() - 1)->SetFaceUp(true);
    }

    // ✅ 점수 갱신
    UpdateScoresUI();  

    EndGame();
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

    Player->SetAceValue(ChosenValue); // 🎲 플레이어가 선택한 값으로 A 처리

    if (BlackjackHUD)
    {
        BlackjackHUD->HideAceChoice(); // 🎲 선택 후 UI 숨김
    }

    // ✅ 선택 후 즉시 점수 확인
    if (Player->GetHandValue(0) > 21)
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, TEXT("Player Busts! Dealer Wins."));
        PlayerStand();
    }
}

void ABlackjackGameMode::PlayerSplit()
{
    if (!Player)
    {
        UE_LOG(LogTemp, Error, TEXT("PlayerSplit(): Player is NULL!"));
        return;
    }

    if (!Player->CanSplit())
    {
        UE_LOG(LogTemp, Warning, TEXT("PlayerSplit(): Split is not allowed!"));
        return;
    }

    // 🎲 스플릿 실행
    Player->Split();
    GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, TEXT("Player Split!"));
}

void ABlackjackGameMode::UpdatePlayerInfo(int32 NewCoins, int32 NewBet)
{
    OnPlayerInfoUpdated.Broadcast(NewCoins, NewBet);
}

void ABlackjackGameMode::EndGame()
{
    FString ResultMessage;

    int32 PlayerValue = Player->GetHandValue(0);
    int32 DealerValue = Dealer->GetHandValue();

    if (PlayerValue > 21) // ✅ 플레이어가 버스트
    {
        ResultMessage = "Dealer Wins!";
    }
    else if (DealerValue > 21 || PlayerValue > DealerValue)
    {
        ResultMessage = "Player Wins!";
        Player->Coins += Player->CurrentBet * 2;
    }
    else if (PlayerValue == DealerValue)
    {
        ResultMessage = "It's a Tie!";
        Player->Coins += Player->CurrentBet;
    }
    else
    {
        ResultMessage = "Dealer Wins!";
    }

    GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, *ResultMessage);

    if (BlackjackHUD)
    {
        BlackjackHUD->UpdateMessageText(ResultMessage);
        BlackjackHUD->UpdatePlayerInfo(Player->Coins, 0);
    }

    Player->CurrentBet = 0;

    // ✅ 사용된 카드 정리
    ClearTableCards();

    GetWorldTimerManager().SetTimer(RestartTimerHandle, this, &ABlackjackGameMode::ResetForNextRound, 3.0f, false);
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
    if (Player->Coins <= 0)
    {

        BlackjackHUD->UpdateMessageText("Game Over! No more coins left.", 100.0f);
        //GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Game Over! No more coins left."));
        return;
    }

    if (BlackjackHUD)
    {
        BlackjackHUD->UpdateMessageText("Place Your Bets!", 100.0f);
        BlackjackHUD->SetBetButtonsEnabled(true);
        BlackjackHUD->SetActionButtonsEnabled(false);
    }

    Player->Hands.Empty();
    Dealer->Hands.Empty();
    CurrentState = EGameState::Betting;
}

void ABlackjackGameMode::GameOver()
{
    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Game Over! No more coins left."));

    // ✅ 입력 비활성화
    DisablePlayerInput();

    // ✅ 게임 오버 레벨이 존재하면 해당 레벨로 이동 (향후 추가 예정)
    /*if (!GameOverLevelName.IsNone())
    {
        UGameplayStatics::OpenLevel(this, GameOverLevelName);
    }*/
}


void ABlackjackGameMode::DisablePlayerInput()
{
    APlayerController* PC = GetWorld()->GetFirstPlayerController();
    if (PC)
    {
        PC->SetInputMode(FInputModeUIOnly());
        PC->bShowMouseCursor = true;
        PC->DisableInput(PC);  // ✅ 입력 비활성화
    }
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
    if (!BlackjackHUD || !Player || !Dealer) return;

    // 🎯 플레이어 점수 계산
    int32 PlayerScore = Player->GetHandValue(0);
    FString PlayerScoreText = FString::Printf(TEXT("Player: %d"), PlayerScore);

    // 🎯 딜러 점수 계산 (첫 번째 카드만 표시)
    FString DealerScoreText = TEXT("Dealer: ?");

    if (Dealer->Hands.Num() > 0)  // 🚨 배열 크기 체크 추가
    {
        int32 DealerFirstCardValue = Dealer->Hands[0]->Value;
        DealerScoreText = FString::Printf(TEXT("Dealer: %d"), DealerFirstCardValue);
    }

    // 🎯 UI 업데이트
    BlackjackHUD->UpdateScores(PlayerScoreText, DealerScoreText);
}



