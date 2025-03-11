#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Card.h"
#include "DeckActor.h"
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
    // 딜러의 카드 목록
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Dealer")
    TArray<UCard*> Hand;

    // 카드 받기 함수
    UFUNCTION(BlueprintCallable, Category = "Dealer")
    void GiveCardToHand(UCard* NewCard);

    // 현재 딜러의 총 점수 계산
    UFUNCTION(BlueprintCallable, Category = "Dealer")
    int32 GetHandValue() const;

    // 딜러가 카드 한 장 뽑기 (더미 함수)
    UFUNCTION(BlueprintCallable, Category = "Dealer")
    UCard* DrawCard();

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Dealer")
    ADeckActor* DeckActor;

};
