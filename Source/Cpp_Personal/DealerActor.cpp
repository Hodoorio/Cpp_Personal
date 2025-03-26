#include "DealerActor.h"
#include "Deck.h" // UDeck 클래스 포함
#include "CardActor.h" // ACardActor 클래스 포함
#include "EngineUtils.h" // TActorIterator 정의 포함

ADealerActor::ADealerActor()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ADealerActor::BeginPlay()
{
    Super::BeginPlay();
}

// 🎴 카드 드로우 함수
UCard* ADealerActor::DrawCard(UDeck* Deck)
{
    if (!Deck)
    {
        UE_LOG(LogTemp, Error, TEXT("DrawCard(): Deck이 NULL입니다!"));
        return nullptr;
    }

    UCard* NewCard = Deck->DrawCard();
    if (!NewCard)
    {
        UE_LOG(LogTemp, Error, TEXT("DrawCard(): Deck에서 카드를 가져올 수 없습니다."));
        return nullptr;
    }

    if (Hands.Num() == 0)
    {
        Hands.Add(FDealerHand()); // 첫 번째 핸드 생성
    }

    Hands[0].Cards.Add(NewCard); // 카드 추가
    UE_LOG(LogTemp, Warning, TEXT("DrawCard(): 딜러가 카드를 뽑았습니다 -> Suit: %d, Rank: %d"),
        static_cast<int32>(NewCard->Suit), static_cast<int32>(NewCard->Rank));
    return NewCard;
}

// 🃏 카드 추가 함수
void ADealerActor::GiveCardToHand(UCard* NewCard)
{
    if (!NewCard)
    {
        UE_LOG(LogTemp, Warning, TEXT("GiveCardToHand(): NewCard가 NULL입니다."));
        return;
    }

    if (Hands.Num() == 0)
    {
        Hands.Add(FDealerHand()); // 첫 번째 핸드 생성
    }

    Hands[0].Cards.Add(NewCard);
    UE_LOG(LogTemp, Warning, TEXT("GiveCardToHand(): 딜러 핸드에 새 카드 추가 -> %s"), *NewCard->GetCardName());
}

// 🏆 핸드 점수 계산
int32 ADealerActor::GetHandValue(bool bIncludeHiddenCard) const
{
    int32 TotalValue = 0;
    int32 AceCount = 0;

    for (int32 i = 0; i < Hands[0].Cards.Num(); ++i)
    {
        if (!bIncludeHiddenCard && i == 0) // 첫 번째 카드 숨김 처리
        {
            UE_LOG(LogTemp, Warning, TEXT("GetHandValue(): 첫 번째 카드는 숨김 처리됨."));
            continue;
        }

        UCard* Card = Hands[0].Cards[i];
        if (!Card) continue;

        int32 CardValue = (Card->Rank >= ERank::Jack) ? 10 : static_cast<int32>(Card->Rank) + 1;

        if (Card->Rank == ERank::Ace)
        {
            CardValue = 11;
            AceCount++;
        }

        TotalValue += CardValue;
    }

    // Ace 조정
    while (TotalValue > 21 && AceCount > 0)
    {
        TotalValue -= 10;
        AceCount--;
    }

    UE_LOG(LogTemp, Warning, TEXT("딜러 점수 계산 완료 (공개 여부 %s): %d"),
        bIncludeHiddenCard ? TEXT("포함됨") : TEXT("숨김"), TotalValue);
    return TotalValue;
}

// 🃏 카드 공개 처리 함수
void ADealerActor::SetAllCardsFaceUp()
{
    if (Hands.Num() == 0 || Hands[0].Cards.Num() == 0)
    {
        UE_LOG(LogTemp, Warning, TEXT("SetAllCardsFaceUp(): 딜러의 손패가 비어 있습니다."));
        return;
    }

    for (UCard* Card : Hands[0].Cards)
    {
        if (!Card)
        {
            UE_LOG(LogTemp, Warning, TEXT("SetAllCardsFaceUp(): NULL 카드를 발견했습니다."));
            continue;
        }

        // FindCardActor를 활용하여 액터 검색 및 처리
        ACardActor* CardActor = FindCardActor(Card);
        if (CardActor)
        {
            CardActor->SetFaceUp(true); // 카드 공개
            UE_LOG(LogTemp, Warning, TEXT("SetAllCardsFaceUp(): 카드 %s가 공개되었습니다."), *Card->GetCardName());
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("SetAllCardsFaceUp(): 대상 카드 액터를 찾지 못했습니다 -> %s"), *Card->GetCardName());
        }
    }
}
const TArray<FDealerHand>& ADealerActor::GetHands() const
{
    return Hands;
}

// 손패 초기화
void ADealerActor::ClearDealerHand()
{
    Hands.Empty();
    UE_LOG(LogTemp, Warning, TEXT("ClearDealerHand(): 딜러 손패 초기화 완료."));
}

ACardActor* ADealerActor::FindCardActor(UCard* TargetCard) const
{
    if (!GetWorld())
    {
        UE_LOG(LogTemp, Error, TEXT("FindCardActor(): GetWorld()가 NULL입니다. 액터 검색이 불가능합니다."));
        return nullptr;
    }

    for (TActorIterator<ACardActor> It(GetWorld()); It; ++It)
    {
        ACardActor* CardActor = *It;
        if (CardActor && CardActor->GetCard() == TargetCard)
        {
            return CardActor; // 카드와 연결된 액터 반환
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("FindCardActor(): 대상 카드를 가진 액터를 찾지 못했습니다 -> %s"), *TargetCard->GetCardName());
    return nullptr;
}