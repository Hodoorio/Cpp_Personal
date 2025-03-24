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

    // ✅ 핸드가 비어 있으면 추가
    if (Hands.Num() == 0)
    {
        Hands.Add(FDealerHand());
    }

    // ✅ 딜러 핸드에 카드 추가
    Hands[0].Cards.Add(NewCard);
    return NewCard;
}


// 🃏 카드 추가 함수
void ADealerActor::GiveCardToHand(UCard* NewCard)
{
    if (NewCard)
    {
        if (Hands.Num() == 0)
        {
            Hands.Add(FDealerHand());  // ✅ 첫 번째 핸드 생성
        }
        Hands[0].Cards.Add(NewCard);
    }
}

// 🏆 현재 핸드의 총 점수 계산
int32 ADealerActor::GetHandValue(bool bIncludeHiddenCard) const
{
    if (Hands.Num() == 0 || Hands[0].Cards.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("GetHandValue(): Dealer has no cards."));
        return 0;
    }

    int32 TotalValue = 0;
    int32 AceCount = 0;

    UE_LOG(LogTemp, Warning, TEXT("===== 딜러 핸드 점수 계산 ====="));

    const FDealerHand& Hand = Hands[0];

    for (int32 i = 0; i < Hand.Cards.Num(); i++)
    {
        if (!bIncludeHiddenCard && i == 0)  // 첫 번째 카드는 숨김
        {
            UE_LOG(LogTemp, Warning, TEXT("딜러 첫 번째 카드는 숨겨짐"));
            continue;
        }

        UCard* Card = Hand.Cards[i];
        if (!Card) continue; // NULL 체크

        int32 CardValue = (Card->Rank >= ERank::Jack) ? 10 : static_cast<int32>(Card->Rank) + 1;

        if (Card->Rank == ERank::Ace)
        {
            CardValue = 11;
            AceCount++;
        }

        TotalValue += CardValue;

        // ✅ 카드 정보 로그 출력
        FString SuitString;
        switch (Card->Suit)
        {
        case ESuit::Hearts:   SuitString = "Hearts"; break;
        case ESuit::Diamonds: SuitString = "Diamonds"; break;
        case ESuit::Clubs:    SuitString = "Clubs"; break;
        case ESuit::Spades:   SuitString = "Spades"; break;
        }
        UE_LOG(LogTemp, Warning, TEXT("딜러 카드: %s %d -> 점수: %d , %d줄"), *SuitString, static_cast<int32>(Card->Rank) + 1, CardValue, i);
    }

    // 🎯 Ace 조정 (21 초과 시 1로 변환)
    while (TotalValue > 21 && AceCount > 0)
    {
        TotalValue -= 10;
        AceCount--;
    }

    UE_LOG(LogTemp, Warning, TEXT("총 점수: %d"), TotalValue);
    return TotalValue;
}




void ADealerActor::ClearDealerHand()
{
    Hands.Empty();  // ✅ 딜러 카드 초기화
    UE_LOG(LogTemp, Warning, TEXT("ClearDealerHand(): 딜러 손패 초기화 완료"));
}