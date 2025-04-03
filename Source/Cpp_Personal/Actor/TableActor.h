#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TableActor.generated.h"

class ACard;
class UCardComponent;
UCLASS()
class CPP_PERSONAL_API ATableActor : public AActor
{
    GENERATED_BODY()

public:
    ATableActor();

    virtual void BeginPlay() override;

    // 🔹 카드 배치 함수
    UFUNCTION(BlueprintCallable, Category = "Table")
    ACardActor* SpawnCard(UCard* NewCard, bool bIsPlayer, int32 CardIndex);

    UFUNCTION(BlueprintCallable, Category = "Cards")
    ACardActor* FindCardActor(const UCard* Card) const;

    // 🎲 테이블 초기화 (카드 액터 제거)
    UFUNCTION(BlueprintCallable, Category = "Table")
    void ClearTableCards();
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

    //ACardActor* CardActor;

private:
    // 테이블 위에 있는 카드 액터 목록
    UPROPERTY()
    TArray<ACardActor*> CardActors;

};
