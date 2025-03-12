#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "PlayerActor.h"
#include "DealerActor.h"
#include "TableActor.h"
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
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GameState")
    EGameState CurrentState;

    // 🎲 블루프린트에서 직접 설정할 변수들
    UPROPERTY(EditDefaultsOnly, Category = "BlackjackActor")
    TSubclassOf<APlayerActor> PlayerClass = nullptr;

    UPROPERTY(EditDefaultsOnly, Category = "BlackjackActor")
    TSubclassOf<ADealerActor> DealerClass = nullptr;

    UPROPERTY(EditDefaultsOnly, Category = "BlackjackActor")
    TSubclassOf<ATableActor> TableClass = nullptr;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "BlackjackActor")
    APlayerActor* Player = nullptr;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "BlackjackActor")
    ADealerActor* Dealer = nullptr;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "BlackjackActor")
    ATableActor* Table = nullptr;


    // 게임 시작 함수
    UFUNCTION(BlueprintCallable, Category = "Game")
    void StartGame();

    UFUNCTION(BlueprintCallable, Category = "Game")
    void PlayerHit();

    UFUNCTION(BlueprintCallable, Category = "Game")
    void PlayerStand();

};
