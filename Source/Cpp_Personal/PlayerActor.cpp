#include "PlayerActor.h"

APlayerActor::APlayerActor()
{
    PrimaryActorTick.bCanEverTick = false;
    Coins = 1000;
    CurrentBet = 0;
    bIsSplitActive = false;

    // 🎲 두 개의 핸드 공간을 미리 생성
    Hands.AddDefaulted(2);  // 기본 핸드와 스플릿 핸드 공간을 미리 생성
}

void APlayerActor::BeginPlay()
{
    Super::BeginPlay();
}

// 🎲 플레이어 코인 초기화
void APlayerActor::InitializeCoins(int32 StartingCoins)
{
    Coins = StartingCoins;
}

// 💰 배팅 함수
bool APlayerActor::PlaceBet(int32 BetAmount)
{
    if (BetAmount > 0 && BetAmount <= Coins)
    {
        Coins -= BetAmount;
        CurrentBet = BetAmount;
        return true;
    }
    return false;
}

// 🎉 승리 시 배팅 금액의 2배 획득
void APlayerActor::WinBet()
{
    Coins += CurrentBet * 2;
    CurrentBet = 0;
}

// ❌ 패배 시 배팅 금액 잃음
void APlayerActor::LoseBet()
{
    CurrentBet = 0;
}

// 🃏 카드 받기 함수 (핸드 선택 가능)
void APlayerActor::GiveCardToHand(UCard* NewCard, int32 HandIndex)
{
    if (NewCard && HandIndex >= 0 && HandIndex < Hands.Num())
    {
        Hands[HandIndex].Cards.Add(NewCard);
    }
}

// 🏆 현재 핸드의 총 점수 계산
int32 APlayerActor::GetHandValue(int32 HandIndex) const
{
    if (HandIndex < 0 || HandIndex >= Hands.Num()) return 0;

    int32 TotalValue = 0;
    int32 AceCount = 0;

    for (const UCard* Card : Hands[HandIndex].Cards)
    {
        if (Card)
        {
            int32 CardValue = Card->GetCardValue();
            TotalValue += CardValue;

            if (Card->Rank == ERank::Ace)
            {
                AceCount++;
            }
        }
    }

    while (TotalValue > 21 && AceCount > 0)
    {
        TotalValue -= 10;
        AceCount--;
    }

    return TotalValue;
}

// ✂ 스플릿 가능 여부 확인
bool APlayerActor::CanSplit() const
{
    return Hands[0].Cards.Num() == 2 && Hands[0].Cards[0]->Rank == Hands[0].Cards[1]->Rank;
}

// ✂ 스플릿 실행
bool APlayerActor::Split()
{
    if (!CanSplit()) return false;

    // 🎲 스플릿 활성화
    bIsSplitActive = true;

    // 🎴 두 번째 핸드에 한 장 이동
    Hands[1].Cards.Add(Hands[0].Cards[1]);
    Hands[0].Cards.RemoveAt(1);

    return true;
}


