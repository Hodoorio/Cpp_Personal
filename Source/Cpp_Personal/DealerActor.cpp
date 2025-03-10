#include "DealerActor.h"

ADealerActor::ADealerActor()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ADealerActor::BeginPlay()
{
    Super::BeginPlay();
}

// 🃏 카드 받기
void ADealerActor::GiveCardToHand(UCard* NewCard)
{
    if (NewCard)
    {
        Hand.Add(NewCard);
    }
}

// 현재 점수 계산
int32 ADealerActor::GetHandValue() const
{
    int32 TotalValue = 0;
    int32 AceCount = 0;

    for (const UCard* Card : Hand)
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

// 카드 한 장 뽑기 (더미 함수, 나중에 덱과 연결 필요)
UCard* ADealerActor::DrawCard()
{
    return nullptr;  // 나중에 덱에서 카드 뽑는 기능 연결 예정
}
