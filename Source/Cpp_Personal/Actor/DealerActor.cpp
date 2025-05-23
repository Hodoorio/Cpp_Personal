#include "DealerActor.h"
#include "../Deck.h" // UDeck 클래스 포함
#include "CardActor.h" // ACardActor 클래스 포함
#include "TableActor.h" // ATableActor 클래스 포함
#include "EngineUtils.h" // TActorIterator 정의 포함

ADealerActor::ADealerActor()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ADealerActor::BeginPlay()
{
    Super::BeginPlay();
}

void ADealerActor::InitialDeal(UDeck* Deck, ATableActor* Table)
{
    if (!Deck || !Table)
    {
        UE_LOG(LogTemp, Error, TEXT("InitialDeal(): Deck 또는 Table이 NULL입니다!"));
        return;
    }

    Hands.Empty(); // 딜러의 손 초기화

    // 첫 번째 카드: 숨긴 상태로 추가
    UCard* FirstCard = DrawCard(Deck);
    if (FirstCard)
    {
        GiveCardToHand(FirstCard);

        ACardActor* CardActor = Table->SpawnCard(FirstCard, false, 0); // 숨긴 카드
        if (CardActor)
        {
            CardActor->SetFaceUp(false); // 앞면 숨김
        }
    }

    // 두 번째 카드: 공개 상태로 추가
    UCard* SecondCard = DrawCard(Deck);
    if (SecondCard)
    {
        GiveCardToHand(SecondCard);

        ACardActor* CardActor = Table->SpawnCard(SecondCard, false, 1); // 공개된 카드
        if (CardActor)
        {
            CardActor->SetFaceUp(true); // 앞면 표시
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("InitialDeal(): 딜러가 초기 카드를 배분했습니다. 총 카드 수: %d"), Hands.Num());
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
    UE_LOG(LogTemp, Warning, TEXT("DrawCard(): 카드를 뽑았습니다 -> Suit: %d, Rank: %d"),
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
    UE_LOG(LogTemp, Warning, TEXT("DealActor GiveCardToHand(): 딜러 핸드에 새 카드 추가 -> %s"), *NewCard->GetCardName());
}

// 🏆 핸드 점수 계산
int32 ADealerActor::GetHandValue(bool bIncludeHiddenCard)
{
    // 딜러 점수와 Ace 개수 초기화
    SetDealerScore(0);
    SetDealerAceCount(0);

    UE_LOG(LogTemp, Warning, TEXT("GetHandValue(): DealerScore 초기화 -> DealerScore : %d"), GetDealerScore());

    // Hands 배열 유효성 검사
    if (Hands.Num() == 0 || Hands[0].Cards.Num() == 0)
    {
        UE_LOG(LogTemp, Error, TEXT("GetHandValue(): Hands 배열 또는 Cards 배열이 비어 있습니다."));
        return GetDealerScore(); // 초기화된 0 반환
    }

    // 카드 추적용 Set 생성 (중복 처리 방지)
    TSet<UCard*> ProcessedCards;

    for (int32 i = 0; i < Hands[0].Cards.Num(); ++i)
    {
        if (!bIncludeHiddenCard && i == 0) // 첫 번째 카드 숨김 처리
        {
            UE_LOG(LogTemp, Warning, TEXT("GetHandValue(): 첫 번째 카드는 숨김 처리됨."));
            continue;
        }

        UCard* Card = Hands[0].Cards[i];
        if (!Card)
        {
            UE_LOG(LogTemp, Error, TEXT("GetHandValue(): 카드가 NULL입니다. 인덱스 %d를 건너뜀."), i);
            continue;
        }

        // 카드 중복 계산 방지
        if (ProcessedCards.Contains(Card))
        {
            UE_LOG(LogTemp, Warning, TEXT("GetHandValue(): 이미 처리된 카드입니다. Rank: %d"), static_cast<int32>(Card->Rank));
            continue;
        }
        ProcessedCards.Add(Card);

        // 카드 값 계산
        int32 CardValue = (Card->Rank >= ERank::Jack) ? 10 : static_cast<int32>(Card->Rank) + 1;

        if (Card->Rank == ERank::Ace)
        {
            CardValue = 11;
            AddDealerAceCount(1); // Ace 개수 증가
            UE_LOG(LogTemp, Warning, TEXT("GetHandValue(): Ace 추가됨. 현재 AceCount: %d"), GetDealerAceCount());
        }

        AddDealerScore(CardValue); // 점수 추가

        UE_LOG(LogTemp, Warning, TEXT("DealerActor GetHandValue(): Rank: %d, CardValue: %d, 현재 DealerScore: %d"),
            static_cast<int32>(Card->Rank), CardValue, GetDealerScore());
    }

    // Ace 조정 (21 초과 시 Ace 값 감소)
    while (GetDealerScore() > 21 && GetDealerAceCount() > 0)
    {
        AddDealerScore(-10); // Ace 값을 1로 변경
        AddDealerAceCount(-1); // Ace 개수 감소

        UE_LOG(LogTemp, Warning, TEXT("GetHandValue(): Ace 조정, 현재 DealerScore: %d, AceCount: %d"),
            GetDealerScore(), GetDealerAceCount());
    }

    // 최종 점수 저장 및 로그 출력
    int32 FinalDealerScore = GetDealerScore();
    UE_LOG(LogTemp, Warning, TEXT("GetHandValue(): DealerScore 출력 전 -> DealerScore : %d"), FinalDealerScore);
    UE_LOG(LogTemp, Warning, TEXT("딜러 점수 계산 완료 (공개 여부 %s): %d"),
        bIncludeHiddenCard ? TEXT("포함됨") : TEXT("숨김"), FinalDealerScore);

    return FinalDealerScore; // 최종 점수 반환
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