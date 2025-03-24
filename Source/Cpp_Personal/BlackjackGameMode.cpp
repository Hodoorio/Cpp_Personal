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

    SetInputModeUIOnly();

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

    Player->ClearHand();
    Dealer->ClearDealerHand();

    Player->Hands.Add(FPlayerHand());
    Dealer->Hands.Emplace();

    PlayerScore = 0;
    DealerScore = 0;
    PlayerAces = 0;
    DealerAces = 0;

    for (int i = 0; i < 2; i++)
    {
        UCard* PlayerCard = Dealer->DrawCard();
        if (PlayerCard)
        {
            Player->GiveCardToHand(PlayerCard, 0);
            PlayerScore += PlayerCard->GetCardValue();
            if (PlayerCard->Rank == ERank::Ace)
            {
                PlayerAces++;
            }

            ACardActor* PlayerCardActor = Table->SpawnCard(PlayerCard, true, i);
            if (PlayerCardActor) PlayerCardActor->SetFaceUp(true);
        }

        UCard* DealerCard = Dealer->DrawCard();
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
                DealerCardActor->SetFaceUp(i != 0);
            }
        }
    }

    AdjustForAces(PlayerScore, PlayerAces);
    AdjustForAces(DealerScore, DealerAces);
    UpdateScoresUI();

    CurrentState = EGameState::PlayerTurn;
}

void ABlackjackGameMode::PlayerHit()
{
    if (!Player || !Dealer || !Table) return;

    if (Player->Hands.Num() == 0)
    {
        Player->Hands.Add(FPlayerHand());
    }

    UCard* NewCard = Dealer->DrawCard();
    if (NewCard)
    {
        Player->GiveCardToHand(NewCard, 0);
        PlayerScore += NewCard->GetCardValue();

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

    while (Dealer->GetHandValue() < 17)
    {
        UCard* DealerCard = Dealer->DrawCard();
        if (!DealerCard) return;

        Dealer->GiveCardToHand(DealerCard);
        ACardActor* CardActor = Table->SpawnCard(DealerCard, false, Dealer->Hands[0].Cards.Num());
        if (CardActor) CardActor->SetFaceUp(true);
    }

    CalculateDealerScore();
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
        GameOver();
        return;
    }

    if (BlackjackHUD)
    {
        BlackjackHUD->UpdateMessageText("Place Your Bets!", 100.0f);
        BlackjackHUD->SetBetButtonsEnabled(true);
        BlackjackHUD->SetActionButtonsEnabled(false);
    }

    Player->ClearHand();
    Dealer->ClearDealerHand();
    ClearTableCards();

    if (!Deck)
    {
        Deck = NewObject<UDeck>(this);
    }

    Deck->InitializeDeck();
    Deck->ShuffleDeck();

    CurrentState = EGameState::Betting;
}

void ABlackjackGameMode::CalculateDealerScore()
{
    DealerScore = 0; // 딜러 점수 초기화

    if (!Dealer || Dealer->Hands.Num() == 0)
    {
        UE_LOG(LogTemp, Error, TEXT("CalculateDealerScore(): 딜러 핸드가 없습니다!"));
        return;
    }

    for (const FDealerHand& Hand : Dealer->Hands)
    {
        for (UCard* Card : Hand.Cards)
        {
            if (Card)
            {
                int32 CardValue = Card->GetCardValue();
                DealerScore += CardValue;

                UE_LOG(LogTemp, Warning, TEXT("딜러 카드: %s -> 점수: %d"), *Card->GetCardName(), CardValue);
            }
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("딜러 총 점수: %d"), DealerScore);
}

void ABlackjackGameMode::EndGame()
{
    GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Yellow, TEXT("The game has ended."));

    ResetForNextRound();

    if (BlackjackHUD)
    {
        BlackjackHUD->UpdateMessageText("Game Ended. Play Again?", 100.0f);
        BlackjackHUD->SetActionButtonsEnabled(false);
        BlackjackHUD->SetBetButtonsEnabled(true);
    }
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
    if (!BlackjackHUD) return;

    FString PlayerScoreText = FString::Printf(TEXT("Player: %d"), PlayerScore);
    FString DealerScoreText = TEXT("Dealer: ?");

    if (Dealer->Hands.Num() > 0 && Dealer->Hands[0].Cards.Num() > 0)
    {
        if (CurrentState == EGameState::PlayerTurn)
        {
            int32 DealerFirstCardValue = Dealer->Hands[0].Cards[0]->GetCardValue();
            DealerScoreText = FString::Printf(TEXT("Dealer: %d"), DealerFirstCardValue);
        }
        else
        {
            CalculateDealerScore();
            DealerScoreText = FString::Printf(TEXT("Dealer: %d"), DealerScore);
        }
    }

    BlackjackHUD->UpdateScores(PlayerScoreText, DealerScoreText);
}
