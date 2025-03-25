#include "Deck.h"
#include "Card.h"
#include "Kismet/KismetMathLibrary.h"

UDeck::UDeck(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    // 생성자에서 아무런 추가 로직을 호출하지 않습니다.
}


// 덱 초기화 (52장 생성)
void UDeck::InitializeDeck()
{
    if (Cards.Num() > 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("InitializeDeck(): 덱이 이미 초기화되었습니다."));
        return;
    }

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
            else
            {
                UE_LOG(LogTemp, Error, TEXT("InitializeDeck(): NewObject<UCard> 실패! Suit: %d, Rank: %d"), Suit, Rank);
            }
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("InitializeDeck(): 덱 초기화 완료, 총 카드 수: %d"), Cards.Num());
}

// 덱 섞기
void UDeck::ShuffleDeck()
{
    if (Cards.Num() <= 1)
    {
        UE_LOG(LogTemp, Warning, TEXT("ShuffleDeck(): 카드가 1장 이하이므로 셔플을 생략합니다."));
        return;
    }

    int32 LastIndex = Cards.Num() - 1;
    for (int32 i = LastIndex; i > 0; --i)
    {
        int32 SwapIndex = UKismetMathLibrary::RandomIntegerInRange(0, i);
        Cards.Swap(i, SwapIndex); // 카드 교환
    }

    UE_LOG(LogTemp, Warning, TEXT("ShuffleDeck(): 덱이 섞였습니다."));
}

// 카드 뽑기
UCard* UDeck::DrawCard()
{
    if (Cards.Num() == 0)
    {
        UE_LOG(LogTemp, Error, TEXT("DrawCard(): 덱이 비어있습니다! 카드를 뽑을 수 없습니다."));
        return nullptr;
    }

    // 덱의 첫 번째 카드를 가져옴
    UCard* DrawnCard = Cards[0];
    Cards.RemoveAt(0);

    UE_LOG(LogTemp, Warning, TEXT("DrawCard(): 카드 뽑기 성공 -> Suit: %d, Rank: %d"),
        static_cast<int32>(DrawnCard->Suit), static_cast<int32>(DrawnCard->Rank));

    return DrawnCard;
}