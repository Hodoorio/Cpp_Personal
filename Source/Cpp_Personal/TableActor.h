#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
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
    // 테이블 메시
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Table")
    UStaticMeshComponent* TableMesh;

    // 플레이어 카드가 놓일 영역
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Table")
    USceneComponent* PlayerCardArea;

    // 딜러 카드가 놓일 영역
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Table")
    USceneComponent* DealerCardArea;
};
