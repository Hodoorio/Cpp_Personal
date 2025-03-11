#include "BlackjackGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "TableActor.h"

ABlackjackGameMode::ABlackjackGameMode()
{
    PrimaryActorTick.bCanEverTick = false;
    CurrentState = EGameState::WaitingForBet;
}

void ABlackjackGameMode::BeginPlay()
{
    Super::BeginPlay();

    // 플레이어 & 딜러 찾기
    Player = Cast<APlayerActor>(UGameplayStatics::GetActorOfClass(GetWorld(), APlayerActor::StaticClass()));
    Dealer = Cast<ADealerActor>(UGameplayStatics::GetActorOfClass(GetWorld(), ADealerActor::StaticClass()));
}

void ABlackjackGameMode::StartGame()
{
    if (!Player || !Dealer)
    {
        UE_LOG(LogTemp, Error, TEXT("StartGame(): Player or Dealer is NULL!"));
        return;
    }

    // 🔹 TableActor 찾기 (널 체크 추가)
    ATableActor* Table = Cast<ATableActor>(UGameplayStatics::GetActorOfClass(this, ATableActor::StaticClass()));
    if (!Table)
    {
        UE_LOG(LogTemp, Error, TEXT("StartGame(): TableActor is NULL!"));
        return;
    }

    // 🔹 게임 시작 → 카드 2장씩 지급
    for (int i = 0; i < 2; i++)
    {
        UCard* PlayerCard = Dealer->DrawCard();
        if (PlayerCard)
        {
            Player->GiveCardToHand(PlayerCard, 0);
            Table->SpawnCard(PlayerCard, true, i);
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("StartGame(): PlayerCard is NULL!"));
        }

        UCard* DealerCard = Dealer->DrawCard();
        if (DealerCard)
        {
            Dealer->GiveCardToHand(DealerCard);
            Table->SpawnCard(DealerCard, false, i);
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("StartGame(): DealerCard is NULL!"));
        }
    }

    // 🔹 플레이어 턴으로 변경
    CurrentState = EGameState::PlayerTurn;
}




void ABlackjackGameMode::PlayerHit()
{
    if (CurrentState != EGameState::PlayerTurn || !Player || !Dealer) return;

    Player->GiveCardToHand(Dealer->DrawCard(), 0);

    // 21점 초과 시 자동으로 Stand 처리
    if (Player->GetHandValue(0) > 21)
    {
        PlayerStand();
    }
}

// 🎯 플레이어 Stand
void ABlackjackGameMode::PlayerStand()
{
    if (CurrentState != EGameState::PlayerTurn) return;

    // 🔹 딜러 턴 시작
    CurrentState = EGameState::DealerTurn;

    // 딜러는 16 이하일 경우 무조건 카드 받음
    while (Dealer->GetHandValue() <= 16)
    {
        Dealer->GiveCardToHand(Dealer->DrawCard());
    }

    // 🔹 게임 종료 후 승패 판정
    CurrentState = EGameState::GameOver;
    CheckWinner();
}

// 🏆 승패 판정
void ABlackjackGameMode::CheckWinner()
{
    int32 PlayerScore = Player->GetHandValue(0);
    int32 DealerScore = Dealer->GetHandValue();

    FString ResultMessage;

    if (PlayerScore > 21)
    {
        ResultMessage = TEXT("Bust! 딜러 승리");
    }
    else if (DealerScore > 21 || PlayerScore > DealerScore)
    {
        ResultMessage = TEXT("플레이어 승리!");
        Player->WinBet();
    }
    else if (PlayerScore < DealerScore)
    {
        ResultMessage = TEXT("딜러 승리...");
        Player->LoseBet();
    }
    else
    {
        ResultMessage = TEXT("무승부!");
        Player->Coins += Player->CurrentBet; // 배팅금 반환
    }

    // 콘솔에 결과 출력 (디버깅용)
    UE_LOG(LogTemp, Warning, TEXT("%s"), *ResultMessage);

    // 게임 다시 시작 가능하도록 상태 변경
    CurrentState = EGameState::WaitingForBet;
}