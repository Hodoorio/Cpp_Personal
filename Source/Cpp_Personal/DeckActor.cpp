#include "DeckActor.h"

ADeckActor::ADeckActor()
{
    PrimaryActorTick.bCanEverTick = false;

    // 덱 생성
    Deck = CreateDefaultSubobject<UDeck>(TEXT("Deck"));
}

void ADeckActor::BeginPlay()
{
    Super::BeginPlay();

    // 덱을 초기화하고 섞기
    if (Deck)
    {
        Deck->InitializeDeck();
        Deck->ShuffleDeck();
    }
}

UCard* ADeckActor::DrawCard()
{
    if (Deck)
    {
        return Deck->DrawCard();
    }
    return nullptr;
}
