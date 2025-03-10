#pragma once

#include "CoreMinimal.h"
#include "GameStateEnum.generated.h"

// 게임 상태 Enum
UENUM(BlueprintType)
enum class EGameState : uint8
{
    WaitingForBet   UMETA(DisplayName = "Waiting For Bet"),
    PlayerTurn      UMETA(DisplayName = "Player Turn"),
    DealerTurn      UMETA(DisplayName = "Dealer Turn"),
    GameOver        UMETA(DisplayName = "Game Over")
};
