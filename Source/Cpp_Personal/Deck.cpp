#include "Deck.h"
#include "Card.h"
#include "Kismet/KismetMathLibrary.h"

//UDeck::UDeck(const FObjectInitializer& ObjectInitializer)
//    : Super(ObjectInitializer)
//{
//    // 생성자는 객체 생성만 처리
//    UE_LOG(LogTemp, Warning, TEXT("UDeck 생성자 호출됨."));
//}

UDeck::UDeck()
{
	// 생성자는 객체 생성만 처리
	UE_LOG(LogTemp, Warning, TEXT("UDeck 생성자 호출됨."));
}

// 덱 초기화 (52장 생성)
void UDeck::InitializeDeck()
{
    Cards.Empty(); // 기존 카드 리스트 초기화

    for (int Suit = 0; Suit < 4; ++Suit)
    {
        for (int Rank = 0; Rank < 13; ++Rank)
        {
            FName CardName = FName(*FString::Printf(TEXT("Card_%d_%d"), Suit, Rank));
            UCard* NewCard = NewObject<UCard>(this, UCard::StaticClass(), CardName);
            if (NewCard)
            {
                NewCard->SetCard(static_cast<ESuit>(Suit), static_cast<ERank>(Rank));
                Cards.Add(NewCard);
            }
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("덱 초기화 완료, 총 카드 수: %d"), Cards.Num());
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