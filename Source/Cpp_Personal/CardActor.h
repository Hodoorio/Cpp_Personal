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
    // 🎴 카드 메시
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Card")
    UStaticMeshComponent* CardMesh;

    // 📌 카드 머티리얼 (앞면, 뒷면)
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Card")
    UMaterialInterface* FaceMaterial;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Card")
    UMaterialInterface* BackMaterial;

    // ✅ 개별적인 머티리얼 인스턴스 (각 카드마다 따로 생성)
    UPROPERTY()
    UMaterialInstanceDynamic* MID;

    // 카드 정보
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Card")
    ESuit Suit;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Card")
    ERank Rank;

    // 카드 설정 함수 (문양 & 숫자 설정)
    UFUNCTION(BlueprintCallable, Category = "Card")
    void SetCard(ESuit NewSuit, ERank NewRank);

    // 🔄 카드 앞/뒷면 설정 함수
    UFUNCTION(BlueprintCallable, Category = "Card")
    void SetFaceUp(bool bIsFaceUp);

private:
    // 텍스처를 설정하는 함수
    void SetCardTexture(UTexture2D* NewTexture);

    // 문양과 숫자를 기반으로 텍스처 인덱스를 계산하는 함수
    int32 GetTextureIndex(ESuit InSuit, ERank InRank);
};
