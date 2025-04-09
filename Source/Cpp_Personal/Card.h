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

    // 🔹 카드 값 저장
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Card")
    int32 Value;

    // 🔹 카드 설정 함수
    UFUNCTION(BlueprintCallable, Category = "Card")
    void SetCard(ESuit NewSuit, ERank NewRank);

    // 🔹 카드 점수 반환 함수
    UFUNCTION(BlueprintCallable, Category = "Card")
    int32 GetCardValue() const;

    // 🔹 A 카드 값 설정(1 또는 11)
    UFUNCTION(BlueprintCallable, Category = "Card")
    void SetAceValue(int32 NewValue);

    // 🔹 카드 정보를 문자열로 변환하는 함수
    UFUNCTION(BlueprintCallable, Category = "Card")
    //FString ToString() const;

    // 카드 이름 반환
    FString GetCardName() const;

private:
    // 🔹 카드의 기본 점수 설정
    void InitializeValue();

    

};
