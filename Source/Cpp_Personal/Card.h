#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Card.generated.h"

// 카드 문양을 Enum으로 정의
UENUM(BlueprintType)
enum class ESuit : uint8
{
    Hearts   UMETA(DisplayName = "Hearts"),
    Diamonds UMETA(DisplayName = "Diamonds"),
    Clubs    UMETA(DisplayName = "Clubs"),
    Spades   UMETA(DisplayName = "Spades")
};

// 카드의 랭크 정의 (1~13)
UENUM(BlueprintType)
enum class ERank : uint8
{
    Ace   UMETA(DisplayName = "Ace"),
    Two   UMETA(DisplayName = "2"),
    Three UMETA(DisplayName = "3"),
    Four  UMETA(DisplayName = "4"),
    Five  UMETA(DisplayName = "5"),
    Six   UMETA(DisplayName = "6"),
    Seven UMETA(DisplayName = "7"),
    Eight UMETA(DisplayName = "8"),
    Nine  UMETA(DisplayName = "9"),
    Ten   UMETA(DisplayName = "10"),
    Jack  UMETA(DisplayName = "Jack"),
    Queen UMETA(DisplayName = "Queen"),
    King  UMETA(DisplayName = "King")
};

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

    // 블랙잭 점수 반환 함수
    UFUNCTION(BlueprintCallable, Category = "Card")
    int32 GetCardValue() const;

    // 카드 정보를 문자열로 변환하는 함수
    UFUNCTION(BlueprintCallable, Category = "Card")
    FString ToString() const;
};
