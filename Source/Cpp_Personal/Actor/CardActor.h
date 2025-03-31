#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "../CardEnums.h"
#include "../FCardDataTableRow.h"
#include "Components/StaticMeshComponent.h"
#include "CardActor.generated.h"

class UCard;
UCLASS()
class CPP_PERSONAL_API ACardActor : public AActor
{
    GENERATED_BODY()

public:
    ACardActor();

protected:
    virtual void BeginPlay() override;

public:
    // ✅ 데이터 테이블 참조
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Card")
    UDataTable* CardDataTable;

    // ✅ 카드 메시 및 머티리얼
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Card")
    UStaticMeshComponent* CardMesh;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Card")
    UMaterialInterface* FaceMaterial; // 카드 앞면 머티리얼

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Card")
    UMaterialInterface* BackMaterial; // 카드 뒷면 머티리얼

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Card")
    UMaterialInstanceDynamic* MID;

    // ✅ 카드 정보
    void SetCard(ESuit NewSuit, ERank NewRank);

    // ✅ 카드 앞/뒷면 설정 함수
    UFUNCTION(BlueprintCallable, Category = "Card")
    void SetFaceUp(bool bIsFaceUp);

    // 카드 데이터 가져오기
    UCard* GetCard() const;

    bool GetIsFaceUp() const
    {
        return bIsFaceUp;
    }

private:
    ESuit Suit = ESuit::Clubs;
    ERank Rank = ERank::Ace;
    bool bIsFaceUp = false;
};
