#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CardComponent.h"
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
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Table")
    UStaticMeshComponent* TableMesh;

    // 🎲 카드 배치 영역 (플레이어 & 딜러)
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Table")
    USceneComponent* PlayerCardArea;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Table")
    USceneComponent* DealerCardArea;

    // 🎲 카드 관리 컴포넌트
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Card")
    UCardComponent* CardComponent;

    // 🔹 카드 배치 함수
    UFUNCTION(BlueprintCallable, Category = "Table")
    ACardActor* SpawnCard(UCard* NewCard, bool bIsPlayer, int32 CardIndex);

};
