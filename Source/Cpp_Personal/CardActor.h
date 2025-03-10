#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Card.h"  // 카드 정보 (ESuit, ERank) 포함
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Engine/Texture2D.h"
#include "CardActor.generated.h"

UCLASS()
class CPP_PERSONAL_API ACardActor : public AActor
{
    GENERATED_BODY()

public:
    ACardActor();

protected:
    virtual void BeginPlay() override;

public:
    // 카드의 메시 컴포넌트 (블루프린트에서 메시 설정 가능)
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Card")
    UStaticMeshComponent* CardMesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Card")
    UStaticMeshComponent* CardBack;

    // 블루프린트에서 설정 가능한 머티리얼 (동적 변경 가능)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card")
    UMaterialInterface* BaseMaterial;

    // 동적 머티리얼 인스턴스 (텍스처 변경 가능)
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Card")
    UMaterialInstanceDynamic* CardMaterial;

    // 카드 정보
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Card")
    ESuit Suit;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Card")
    ERank Rank;

    // 카드 설정 함수 (문양 & 숫자 설정)
    UFUNCTION(BlueprintCallable, Category = "Card")
    void SetCard(ESuit NewSuit, ERank NewRank);

private:
    // 텍스처를 설정하는 함수
    void SetCardTexture(UTexture2D* NewTexture);

    // 문양과 숫자를 기반으로 텍스처 인덱스를 계산하는 함수
    int32 GetTextureIndex(ESuit InSuit, ERank InRank);
};
