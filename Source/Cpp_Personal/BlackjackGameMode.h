#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PlayerActor.h"
#include "DealerActor.h"
#include "GameStateEnum.h"
#include "BlackjackGameMode.generated.h"

UCLASS()
class CPP_PERSONAL_API ABlackjackGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    ABlackjackGameMode();

protected:
    virtual void BeginPlay() override;

public:
    // 현재 게임 상태
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Game")
    EGameState CurrentState;

    // 플레이어 & 딜러 레퍼런스
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Game")
    APlayerActor* Player;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Game")
    ADealerActor* Dealer;

    // 게임 시작 함수
    UFUNCTION(BlueprintCallable, Category = "Game")
    void StartGame();

    // 플레이어 행동 (Hit / Stand)
    UFUNCTION(BlueprintCallable, Category = "Game")
    void PlayerHit();

    UFUNCTION(BlueprintCallable, Category = "Game")
    void PlayerStand();

    // 승패 판정
    UFUNCTION(BlueprintCallable, Category = "Game")
    void CheckWinner();
};
