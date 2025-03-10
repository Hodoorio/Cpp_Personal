#pragma once

#include "CoreMinimal.h"
#include "CardEnums.generated.h"

// 카드 문양 (스페이드, 하트, 다이아몬드, 클로버)
UENUM(BlueprintType)
enum class ESuit : uint8
{
    Hearts      UMETA(DisplayName = "Hearts"),
    Diamonds    UMETA(DisplayName = "Diamonds"),
    Clubs       UMETA(DisplayName = "Clubs"),
    Spades      UMETA(DisplayName = "Spades")
};

// 카드 숫자 (A, 2~10, J, Q, K)
UENUM(BlueprintType)
enum class ERank : uint8
{
    Ace     UMETA(DisplayName = "Ace"),
    Two     UMETA(DisplayName = "2"),
    Three   UMETA(DisplayName = "3"),
    Four    UMETA(DisplayName = "4"),
    Five    UMETA(DisplayName = "5"),
    Six     UMETA(DisplayName = "6"),
    Seven   UMETA(DisplayName = "7"),
    Eight   UMETA(DisplayName = "8"),
    Nine    UMETA(DisplayName = "9"),
    Ten     UMETA(DisplayName = "10"),
    Jack    UMETA(DisplayName = "Jack"),
    Queen   UMETA(DisplayName = "Queen"),
    King    UMETA(DisplayName = "King")
};
