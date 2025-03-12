#include "DealerActor.h"

ADealerActor::ADealerActor()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ADealerActor::BeginPlay()
{
    Super::BeginPlay();
}

// 🎴 카드 드로우 함수
UCard* ADealerActor::DrawCard()
{
    UCard* NewCard = nullptr;  // 덱에서 카드 가져오는 로직 (추후 구현)
    if (NewCard)
    {
        Hands.Add(NewCard);
    }
    return NewCard;
}

// 🃏 카드 추가 함수
void ADealerActor::GiveCardToHand(UCard* NewCard)
{
    if (NewCard)
    {
        Hands.Add(NewCard);
    }
}

// 🏆 현재 핸드의 총 점수 계산
int32 ADealerActor::GetHandValue() const
{
    int32 TotalValue = 0;
    int32 AceCount = 0;

    for (const UCard* Card : Hands)
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
