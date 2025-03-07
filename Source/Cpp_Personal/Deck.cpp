#include "Deck.h"
#include "Kismet/KismetMathLibrary.h"

UDeck::UDeck()
{
    InitializeDeck();
}

// 덱을 초기화하는 함수
void UDeck::InitializeDeck()
{
    Cards.Empty(); // 기존 카드 삭제

    // 모든 조합의 카드 생성
    for (int32 SuitIndex = 0; SuitIndex < 4; ++SuitIndex)
    {
        for (int32 RankIndex = 0; RankIndex < 13; ++RankIndex)
        {
            UCard* NewCard = NewObject<UCard>();
            NewCard->Suit = static_cast<ESuit>(SuitIndex);
            NewCard->Rank = static_cast<ERank>(RankIndex);
            Cards.Add(NewCard);
        }
    }
}

// 덱을 섞는 함수
void UDeck::ShuffleDeck()
{
    int32 LastIndex = Cards.Num() - 1;
    for (int32 i = LastIndex; i > 0; --i)
    {
        int32 SwapIndex = UKismetMathLibrary::RandomIntegerInRange(0, i);
        Cards.Swap(i, SwapIndex);
    }
}

// 카드 뽑기 함수
UCard* UDeck::DrawCard()
{
    if (Cards.Num() == 0)
    {
        return nullptr; // 덱이 비어있으면 nullptr 반환
    }

    UCard* DrawnCard = Cards[0];
    Cards.RemoveAt(0);
    return DrawnCard;
}
