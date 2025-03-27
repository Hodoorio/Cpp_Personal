#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BlackjackHUD.generated.h"

// 🟢 전방 선언: "BlackjackGameMode.h"를 직접 포함하지 않음
class ABlackjackGameMode;
class UCard;

UCLASS()
class CPP_PERSONAL_API UBlackjackHUD : public UUserWidget
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Blackjack UI")
    void UpdatePlayerInfo(int32 PlayerCoins, int32 CurrentBet);

    UFUNCTION(BlueprintCallable, Category = "Blackjack UI")
    void UpdateMessageText(const FString& Message, float TextSize = 250.0f);  // 텍스트 크기 파라미터 추가

    UFUNCTION(BlueprintCallable, Category = "Blackjack UI")
    void InitializeUI(int32 StartingCoins);

    void CheckAndEnableAceButton(UCard* Card);

    UFUNCTION(BlueprintCallable, Category = "Blackjack UI")
    void NextGame();

    // UI 버튼 활성화/비활성화 함수
    UFUNCTION(BlueprintCallable)
    void SetActionButtonsEnabled(bool bEnabled);

    UFUNCTION(BlueprintCallable)
    void SetBetButtonsEnabled(bool bEnabled);

    // 🔹 에이스 선택 버튼 UI 표시
    UFUNCTION(BlueprintCallable)
    void ShowAceChoice();

    // 🔹 에이스 버튼 숨김
    UFUNCTION(BlueprintCallable)
    void HideAceChoice();

    // 점수 업데이트 함수
    UFUNCTION(BlueprintCallable)
    void UpdateScores(const FString& PlayerScore, const FString& DealerScore);


public:
    // 🟢 코인 및 베팅 정보 표시
    UPROPERTY(meta = (BindWidget))
    class UTextBlock* TXT_PlayerCoins;

    UPROPERTY(meta = (BindWidget))
    class UTextBlock* TXT_BetAmount;

    UPROPERTY(meta = (BindWidget))
    class UTextBlock* TXT_Message;

    // 🟢 버튼들
    UPROPERTY(meta = (BindWidget))
    class UButton* BTN_Hit;

    UPROPERTY(meta = (BindWidget))
    class UButton* BTN_Stand;

    UPROPERTY(meta = (BindWidget))
    class UButton* BTN_Split;

    UPROPERTY(meta = (BindWidget))
    class UButton* BTN_Bet10;

    UPROPERTY(meta = (BindWidget))
    class UButton* BTN_Bet50;

    UPROPERTY(meta = (BindWidget))
    class UButton* BTN_Bet100;

    UPROPERTY(meta = (BindWidget))
    class UButton* BTN_BetMax;

    // 베팅 금액 리셋 버튼
    UPROPERTY(meta = (BindWidget))
    class UButton* BTN_BetReset;

    UPROPERTY(meta = (BindWidget))
    class UButton* BTN_Bet;

    // 🔹 A 선택 버튼
    UPROPERTY(meta = (BindWidget))
    class UButton* BTN_AceAsOne;

    UPROPERTY(meta = (BindWidget))
    class UButton* BTN_AceAsEleven;

    // A 예시 이미지
    UPROPERTY(meta = (BindWidget))
    class UImage* Ace_Image;

    // 플레이어 점수 UI
    UPROPERTY(meta = (BindWidget))
    class UTextBlock* TXT_PlayerScore;  

    // 딜러 점수 UI
    UPROPERTY(meta = (BindWidget))
    class UTextBlock* TXT_DealerScore; 

	// 다음 게임 이동 버튼
    UPROPERTY(meta = (BindWidget))
    class UButton* BTN_NextGame;
    
protected:
    virtual void NativeConstruct() override;

private:
    UFUNCTION()
    void OnHitClicked();

    UFUNCTION()
    void OnStandClicked();

    UFUNCTION()
    void OnSplitClicked();

    UFUNCTION()
    void OnBet10Clicked();

    UFUNCTION()
    void OnBet50Clicked();

    UFUNCTION()
    void OnBet100Clicked();

    UFUNCTION()
    void OnBetMaxClicked();

    UFUNCTION()
    void OnBetResetClicked();

    UFUNCTION()
    void OnBetClicked();

    UFUNCTION()
    void OnAceAsOneClicked();
    UFUNCTION()
    void OnAceAsElevenClicked();

    UFUNCTION()
    void OnNextGameClicked();

private:
    ABlackjackGameMode* GameMode;
};
