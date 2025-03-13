#include "DealerActor.h"
#include "Kismet/GameplayStatics.h"

ADealerActor::ADealerActor()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ADealerActor::BeginPlay()
{
    Super::BeginPlay();

    // 레벨에서 자동으로 `DeckActor` 찾기
    if (!Deck)
    {
        Deck = Cast<ADeckActor>(UGameplayStatics::GetActorOfClass(this, ADeckActor::StaticClass()));
        if (!Deck)
        {
            UE_LOG(LogTemp, Error, TEXT("BeginPlay(): Deck not found! Dealer cannot draw cards."));
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("BeginPlay(): Deck successfully assigned to Dealer."));
        }
    }
}


// 🎴 카드 드로우 함수
UCard* ADealerActor::DrawCard()
{
    if (!Deck)
    {
        UE_LOG(LogTemp, Error, TEXT("DrawCard(): Deck is NULL! Dealer cannot draw a card."));
        return nullptr;
    }

    UCard* NewCard = Deck->DrawCard();
    if (!NewCard)
    {
        UE_LOG(LogTemp, Error, TEXT("DrawCard(): Failed to draw a card from the deck! Deck may be empty."));
        return nullptr;
    }

    Hands.Add(NewCard);
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
