#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Card.h"
#include "DealerActor.generated.h"

UCLASS()
class CPP_PERSONAL_API ADealerActor : public AActor
{
    GENERATED_BODY()

public:
    ADealerActor();

protected:
    virtual void BeginPlay() override;

public:
    // 🔹 딜러의 카드 핸드
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Dealer")
    TArray<UCard*> Hands;

    // 🔹 카드 드로우 함수
    UFUNCTION(BlueprintCallable, Category = "Dealer")
    UCard* DrawCard();

    // 🔹 현재 핸드의 점수 계산 함수
    UFUNCTION(BlueprintCallable, Category = "Dealer")
    int32 GetHandValue() const;

    // 🃏 카드 추가 함수 (플레이어와 동일한 역할)
    UFUNCTION(BlueprintCallable, Category = "Dealer")
    void GiveCardToHand(UCard* NewCard);
};
