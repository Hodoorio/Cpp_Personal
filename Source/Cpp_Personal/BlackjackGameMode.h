#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "Blueprint/UserWidget.h"
#include "PlayerActor.h"
#include "DealerActor.h"
#include "TableActor.h"
#include "BlackjackHUD.h"
#include "GameStateEnum.h"
#include "BlackjackGameMode.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerInfoUpdated, int32, Coins, int32, BetAmount);

UCLASS()
class CPP_PERSONAL_API ABlackjackGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    ABlackjackGameMode();

protected:
    virtual void BeginPlay() override;

public:
    // 🎲 플레이어 정보 갱신 (UI가 이걸 호출하도록 변경)
    void UpdatePlayerInfo(int32 NewCoins, int32 NewBet);

    // 🔹 UI 생성 함수
    void CreateHUD();

public:
    // 현재 턴 정보    
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

    UFUNCTION(BlueprintCallable, Category = "Game")
    void PlayerSplit();


public:
    // 🎲 플레이어 정보 업데이트 이벤트 (UI가 이를 감지)
    UPROPERTY(BlueprintAssignable, Category = "GameMode|Events")
    FOnPlayerInfoUpdated OnPlayerInfoUpdated;

    // 🔹 UI 위젯 클래스 (블루프린트에서 설정 가능)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    TSubclassOf<UUserWidget> BlackjackHUDClass;

    // 🔹 실제 UI 인스턴스
    UPROPERTY()
    UBlackjackHUD* BlackjackHUD;

};
