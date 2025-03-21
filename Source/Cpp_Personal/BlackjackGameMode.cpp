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

    // ✅ Hands 배열 초기화
    Player->Hands.Empty();
    Dealer->Hands.Empty();

    Player->Hands.Add(FHand()); // ✅ Player의 첫 번째 핸드 추가
    if (Player->Hands.Num() == 0)
    {
        UE_LOG(LogTemp, Error, TEXT("StartGame(): Player의 Hands 배열이 정상적으로 초기화되지 않았습니다!"));
        return;
    }

    // ✅ 점수 초기화
    PlayerScore = 0;
    DealerScore = 0;
    PlayerAces = 0;
    DealerAces = 0;

    for (int i = 0; i < 2; i++)
    {
        // 🎲 플레이어 카드 지급
        UCard* PlayerCard = Dealer->DrawCard();
        if (PlayerCard)
        {
            Player->GiveCardToHand(PlayerCard, 0);
            PlayerScore += PlayerCard->Value;

            if (PlayerCard->Rank == ERank::Ace)
            {
                PlayerAces++;
            }

            ACardActor* PlayerCardActor = Table->SpawnCard(PlayerCard, true, i);
            if (PlayerCardActor) PlayerCardActor->SetFaceUp(true);
        }
    }

    AdjustForAces(PlayerScore, PlayerAces);
    UpdateScoresUI();

    CurrentState = EGameState::PlayerTurn;
}






void ABlackjackGameMode::PlayerHit()
{
    if (!Player || !Dealer || !Table) return;

    // ✅ Hands 배열이 비어있는지 체크
    if (Player->Hands.Num() == 0)
    {
        UE_LOG(LogTemp, Error, TEXT("PlayerHit(): Player의 Hands 배열이 비어 있습니다! 카드 지급이 올바르게 되었는지 확인하세요."));
        return;
    }

    UCard* NewCard = Dealer->DrawCard();
    if (NewCard)
    {
        Player->GiveCardToHand(NewCard, 0); // ✅ 여기에서 Hands[0]을 사용하므로, 위에서 체크해야 함
        PlayerScore += NewCard->Value;

        if (NewCard->Rank == ERank::Ace)
        {
            PlayerAces++;
        }

        AdjustForAces(PlayerScore, PlayerAces);

        ACardActor* NewCardActor = Table->SpawnCard(NewCard, true, Player->Hands[0].Cards.Num() - 1);
        if (NewCardActor) NewCardActor->SetFaceUp(true);

        UpdateScoresUI();

        if (PlayerScore > 21)
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

    // ✅ 딜러 턴 종료 후 점수 업데이트 (최종적으로 한 번만 실행)
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

    if (ChosenValue == 1 && PlayerScore > 11)
    {
        PlayerScore -= 10;
        PlayerAces--;
    }

    UpdateScoresUI();

    if (PlayerScore > 21)
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, TEXT("Player Busts! Dealer Wins."));
        PlayerStand();
    }
}


void ABlackjackGameMode::AdjustForAces(int32& Score, int32& Aces)
{
    while (Score > 21 && Aces > 0)
    {
        Score -= 10;
        Aces--;
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

    if (PlayerValue > 21)
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

    // ✅ 카드 액터 제거 및 손패 초기화 추가
    ClearTableCards();
    Player->ClearHand();
    Dealer->ClearDealerHand();

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
        return;
    }

    if (BlackjackHUD)
    {
        BlackjackHUD->UpdateMessageText("Place Your Bets!", 100.0f);
        BlackjackHUD->SetBetButtonsEnabled(true);
        BlackjackHUD->SetActionButtonsEnabled(false);
    }

    // ✅ 플레이어와 딜러 핸드 초기화
    Player->Hands.Empty();
    Dealer->Hands.Empty();

    // ✅ 테이블 위의 카드 제거
    ClearTableCards();

    // ✅ 덱을 다시 생성하고 셔플
    Deck->InitializeDeck();
    Deck->ShuffleDeck();

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
    if (!BlackjackHUD) return;

    FString PlayerScoreText = FString::Printf(TEXT("Player: %d"), PlayerScore);
    FString DealerScoreText = CurrentState == EGameState::PlayerTurn
        ? TEXT("Dealer: ?")
        : FString::Printf(TEXT("Dealer: %d"), DealerScore);

    BlackjackHUD->UpdateScores(PlayerScoreText, DealerScoreText);
}










