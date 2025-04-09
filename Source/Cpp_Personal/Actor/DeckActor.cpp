#include "DeckActor.h"
#include "../Deck.h"

ADeckActor::ADeckActor()
{
    PrimaryActorTick.bCanEverTick = false;

    // 덱 서브오브젝트 생성
    //Deck = CreateDefaultSubobject<UDeck>(TEXT("Deck"));

    // 덱 초기화는 생성자 밖에서 수행
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
    // Deck 객체가 유효한지 확인
    if (!Deck)
    {
        UE_LOG(LogTemp, Error, TEXT("DrawCard(): Deck 객체가 NULL입니다!"));
        return nullptr;
    }

    return Deck->DrawCard();
}
