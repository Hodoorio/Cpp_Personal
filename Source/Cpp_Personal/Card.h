#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CardEnums.h"  // 카드 관련 Enum 추가
#include "Card.generated.h"



UCLASS(Blueprintable)
class CPP_PERSONAL_API UCard : public UObject
{
    GENERATED_BODY()

public:
    // 생성자
    UCard();

    // 카드 정보
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Card")
    ESuit Suit;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Card")
    ERank Rank;

    // 🔹 카드의 현재 값 (1~11)
    UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Card")
    int32 Value;

    // 블랙잭 점수 반환 함수
    UFUNCTION(BlueprintCallable, Category = "Card")
    int32 GetCardValue() const;

    // 카드 정보를 문자열로 변환하는 함수
    UFUNCTION(BlueprintCallable, Category = "Card")
    FString ToString() const;

    // 🔹 카드의 기본 점수 계산
    void InitializeValue();
};
