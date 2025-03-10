#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PlayerActor.h"
#include "DealerActor.h"
#include "PlayerCameraActor.h"  // 카메라 액터 추가
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

    // 카메라 레퍼런스
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Game")
    APlayerCameraActor* PlayerCamera;

    // 게임 시작 함수 (카드 지급 & 카메라 변경)
    UFUNCTION(BlueprintCallable, Category = "Game")
    void StartGame();
};
