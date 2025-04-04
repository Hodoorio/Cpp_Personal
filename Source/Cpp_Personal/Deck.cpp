#include "Deck.h"
#include "Card.h"
#include "Kismet/KismetMathLibrary.h"

UDeck::UDeck(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    // 생성자는 객체 생성만 처리
    UE_LOG(LogTemp, Warning, TEXT("UDeck 생성자 호출됨."));
}


void UDeck::InitializeDeck()
{
    if (bIsInitialized) // 초기화 여부 확인 플래그
    {
        UE_LOG(LogTemp, Warning, TEXT("덱이 이미 초기화되었습니다."));
        return;
    }

    bIsInitialized = true; // 초기화 완료 플래그 설정
    Cards.Empty();

    for (int Suit = static_cast<int32>(ESuit::Hearts); Suit <= static_cast<int32>(ESuit::Spades); ++Suit) // Hearts~Spades
    {
        for (int Rank = static_cast<int32>(ERank::Ace); Rank <= static_cast<int32>(ERank::King); ++Rank) // Ace~King
        {
            // 명확한 이름 지정
            FName CardName = FName(*FString::Printf(TEXT("Card_%d_%d"), Suit, Rank));

            // 카드 객체 생성 및 초기화
            UCard* NewCard = NewObject<UCard>(this, UCard::StaticClass(), CardName);

            if (NewCard)
            {
                NewCard->SetCard(static_cast<ESuit>(Suit), static_cast<ERank>(Rank));
                Cards.Add(NewCard);
                //UE_LOG(LogTemp, Warning, TEXT("InitializeDeck(): 카드 생성 완료 -> %s"), *CardName.ToString());
            }
            else
            {
                //UE_LOG(LogTemp, Error, TEXT("InitializeDeck(): 카드 생성 실패 -> Suit: %d, Rank: %d"), Suit, Rank);
            }
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("덱 초기화 완료, 카드 수: %d"), Cards.Num());
}




void UDeck::ShuffleDeck()
{
    int32 LastIndex = Cards.Num() - 1;
    for (int32 i = LastIndex; i > 0; --i)
    {
        int32 SwapIndex = FMath::RandRange(0, i);
        Cards.Swap(i, SwapIndex);
    }

    UE_LOG(LogTemp, Warning, TEXT("ShuffleDeck(): 덱 섞기 완료."));
}

UCard* UDeck::DrawCard()
{
    if (Cards.Num() == 0)
    {
        UE_LOG(LogTemp, Error, TEXT("DrawCard(): 덱이 비어 있습니다."));
        return nullptr;
    }

    UCard* DrawnCard = Cards[0];
    Cards.RemoveAt(0);

    UE_LOG(LogTemp, Warning, TEXT("DrawCard(): 카드 뽑기 성공 -> Suit: %d, Rank: %d"),
        static_cast<int32>(DrawnCard->Suit), static_cast<int32>(DrawnCard->Rank));

    return DrawnCard;
}