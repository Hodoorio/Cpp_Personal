#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Card.h" // UCard 클래스
#include "DealerActor.generated.h"

class UDeck;
class ACardActor;
class ATableActor;
class UCard;

USTRUCT(BlueprintType)
struct FDealerHand
{
    GENERATED_BODY()

public:
    // 딜러 핸드에 포함된 카드 배열
    UPROPERTY(BlueprintReadWrite, Category = "Dealer")
    TArray<UCard*> Cards;
};


UCLASS()
class CPP_PERSONAL_API ADealerActor : public AActor
{
    GENERATED_BODY()

public:
    ADealerActor();

    // 게임 시작 시 호출
    virtual void BeginPlay() override;

    void InitialDeal(UDeck* Deck, ATableActor* Table);

    // 카드 드로우 함수
    UFUNCTION(BlueprintCallable, Category = "Dealer")
    UCard* DrawCard(UDeck* Deck);

    // 카드 추가 함수
    void GiveCardToHand(UCard* NewCard);

    // 핸드 점수 계산
    UFUNCTION(BlueprintCallable, Category = "Dealer")
    int32 GetHandValue(bool bIncludeHiddenCard = false);

    void SetAllCardsFaceUp();

    UFUNCTION(BlueprintCallable, Category = "Dealer")
    const TArray<FDealerHand>& GetHands() const;

    // 딜러의 손패 초기화
    void ClearDealerHand();

    ACardActor* FindCardActor(UCard* TargetCard) const;


    // DealerAceCount 관련 메서드
    FORCEINLINE int32 GetDealerAceCount() const { return DealerAceCount; }
    FORCEINLINE int32* GetDealerAceCountPtr() { return &DealerAceCount; }
    FORCEINLINE void SetDealerAceCount(int32 NewAceCount) { DealerAceCount = NewAceCount; }
    FORCEINLINE void AddDealerAceCount(int32 Delta) { DealerAceCount += Delta; }

    // DealerScore 관련 메서드
    FORCEINLINE int32 GetDealerScore() const { return DealerScore; }
    FORCEINLINE int32* GetDealerScorePtr() { return &DealerScore; }
    FORCEINLINE void SetDealerScore(int32 NewScore) { DealerScore = NewScore; }
    FORCEINLINE void AddDealerScore(int32 Delta) { DealerScore += Delta; }

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Dealer", meta = (AllowPrivateAccess = "true"))
    TArray<FDealerHand> Hands;
private:    

	int32 DealerAceCount; // Aces의 개수
    int32 DealerScore;
};