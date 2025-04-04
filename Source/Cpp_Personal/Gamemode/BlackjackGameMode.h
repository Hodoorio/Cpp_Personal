#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "../GameStateEnum.h"
#include "BlackjackGameMode.generated.h"

// 🟢 **전방 선언 (Forward Declaration)** → #include 제거
class APlayerActor;
class ADealerActor;
class ATableActor;
class UBlackjackHUD;
class UUserWidget;
class UDeck;

// 🎲 UI 업데이트 이벤트
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPlayerInfoUpdated, int32, Coins, int32, BetAmount);

// 플레이어와 딜러 점수 이벤트
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnScoreUpdated, int32, PlayerScore, int32, DealerScore);
UCLASS()
class CPP_PERSONAL_API ABlackjackGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    ABlackjackGameMode();

protected:
    virtual void BeginPlay() override;

public:
    // 🔹 **UI 관련 메서드**
    void CreateHUD();
    //void UpdatePlayerInfo(int32 NewCoins, int32 NewBet);

    // 🔹 **게임 흐름 관련 메서드**
    UFUNCTION(BlueprintCallable, Category = "Game")
    void StartGame();

    UFUNCTION(BlueprintCallable, Category = "Game")
    void PlayerHit();

    UFUNCTION(BlueprintCallable, Category = "Game")
    void PlayerStand();

    UFUNCTION(BlueprintCallable, Category = "Game")
    void PlayerSplit();

    UFUNCTION(BlueprintCallable, Category = "Game")
    void ConfirmBet();

    UFUNCTION()
    void HandleAceChoice(int32 ChosenValue);

    void AdjustForAces(int32& Score, int32& AcesCount, int32 ChosenAceValue = 0);
    
    // 게임이 끝날 때마다 카드 정리
    void ClearTableCards();

    // 다음 게임을 위한 리셋 처리
    void ResetForNextRound();

    // 게임 종료(프로젝트 종료 x) 처리 
    void EndGame();

    // 딜러 점수 계산 처리
    void CalculateDealerScore();

    // 게임 오버(코인이 0개 일시) 처리
    void GameOver();

    // 입력 비활성화 처리
    void DisablePlayerInput();

    // 입력을 UI모드로 설정
    void SetInputModeUIOnly();

    // UI 카드 점수 업데이트
    void UpdateScoresUI();

    void DealInitialCards();

    void SaveCoins();

    void RestoreCoins();

    void RestartGame();

    void UpdateHighScore();

    void DetermineWinner();

    void ProcessEndGame(const FString& ResultMessage);

public:
    // **현재 게임 상태**
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "GameState")
    EGameState CurrentState;

    // **블루프린트에서 설정할 수 있는 클래스 변수**
    UPROPERTY(EditDefaultsOnly, Category = "BlackjackActor")
    TSubclassOf<APlayerActor> PlayerClass = nullptr;

    UPROPERTY(EditDefaultsOnly, Category = "BlackjackActor")
    TSubclassOf<ADealerActor> DealerClass = nullptr;

    UPROPERTY(EditDefaultsOnly, Category = "BlackjackActor")
    TSubclassOf<ATableActor> TableClass = nullptr;

    // **실제 인스턴스**
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BlackjackActor")
    APlayerActor* Player = nullptr;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BlackjackActor")
    ADealerActor* Dealer = nullptr;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "BlackjackActor")
    ATableActor* Table = nullptr;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Deck")
    UDeck* Deck = nullptr;

	FName GameOverLevelName = "GameOver";

public:
    // 🎲 **플레이어 정보 업데이트 이벤트 (UI 연동)**
    UPROPERTY(BlueprintAssignable, Category = "GameMode|Events")
    FOnPlayerInfoUpdated OnPlayerInfoUpdated;

    // **플레이어와 딜러 점수 출력 업데이트 이벤트 (UI 연동)**
    UPROPERTY(BlueprintAssignable, Category = "GameMode|Events")
    FOnScoreUpdated OnScoreUpdated;

    // 🔹 **UI 관련 변수**
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "UI")
    TSubclassOf<UBlackjackHUD> BlackjackHUDClass;  // ✅ `UUserWidget` → `UBlackjackHUD`로 변경

    UPROPERTY()
    UBlackjackHUD* BlackjackHUD;  // ✅ 명확한 타입 지정

    UPROPERTY()
    FTimerHandle RestartTimerHandle;

    // 블루프린트에서 설정할 수 있는 GameOver 레벨
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Game Over")
    TSoftObjectPtr<UWorld> GameOverLevel;


private:
    //int32 PlayerScore = 0;
    //int32 DealerScore = 0;
    //int32 PlayerAces = 0; // A 개수 추적
    //int32 DealerAces = 0;

    

};
