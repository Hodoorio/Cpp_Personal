#pragma once

#include "CoreMinimal.h"
#include "CardEnums.h"
#include "Engine/DataTable.h" // ✅ DataTable 사용을 위한 헤더 추가
#include "Engine/Texture2D.h"
#include "FCardDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FCardDataTableRow : public FTableRowBase // ✅ 반드시 FTableRowBase 상속!
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card Data")
    ESuit Suit;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card Data")
    ERank Rank;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card Data")
    UTexture2D* CardTexture;
};
