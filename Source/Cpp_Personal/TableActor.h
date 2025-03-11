#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Card.h"
#include "CardActor.h"
#include "PlayerActor.h"
#include "DealerActor.h"
#include "DeckActor.h"
#include "TableActor.generated.h"

UCLASS()
class CPP_PERSONAL_API ATableActor : public AActor
{
    GENERATED_BODY()

public:
    ATableActor();

protected:
    virtual void BeginPlay() override;

public:
    // 🎲 카드 배치 영역 (플레이어 & 딜러)
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Table")
    USceneComponent* PlayerCardArea;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Table")
    USceneComponent* DealerCardArea;

    // 🔹 카드 배치 함수
    UFUNCTION(BlueprintCallable, Category = "Table")
    void SpawnCard(UCard* NewCard, bool bIsPlayer, int32 CardIndex);

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Card")
    ACardActor* CardActor = nullptr;
};
