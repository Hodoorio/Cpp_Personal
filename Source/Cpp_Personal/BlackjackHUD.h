#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "BlackjackHUD.generated.h"

UCLASS()
class CPP_PERSONAL_API UBlackjackHUD : public UUserWidget
{
    GENERATED_BODY()

public:
    // 🟢 코인 및 베팅 정보 표시
    UPROPERTY(meta = (BindWidget))
    class UTextBlock* TXT_PlayerCoins;

    UPROPERTY(meta = (BindWidget))
    class UTextBlock* TXT_BetAmount;

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

    UPROPERTY(meta = (BindWidget))
    class UButton* BTN_Bet;

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
    void OnBetClicked();
};
