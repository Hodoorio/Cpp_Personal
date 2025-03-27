#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Card.h"
#include "BlackjackHUD.h"
#include "PlayerActor.generated.h"

class UDeck;
class ATableActor;

USTRUCT(BlueprintType)
struct FPlayerHand
{
    GENERATED_BODY()

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hand")
    TArray<UCard*> Cards;  // ✅ 플레이어 카드 리스트
};

UCLASS()
class CPP_PERSONAL_API APlayerActor : public AActor
{
    GENERATED_BODY()

public:
    APlayerActor();

protected:
    virtual void BeginPlay() override;

public:

    void InitialDeal(UDeck* Deck, ATableActor* Table);

    // 🔹 플레이어 기능
    UFUNCTION(BlueprintCallable, Category = "Player")
    void InitializeCoins(int32 StartingCoins = 1000);

    UFUNCTION(BlueprintCallable, Category = "Player")
    bool PlaceBet(int32 BetAmount);

    UFUNCTION(BlueprintCallable, Category = "Player")
    void MaxBet();

    void ResetBet();

    UFUNCTION(BlueprintCallable, Category = "Player")
    void WinBet();

    UFUNCTION(BlueprintCallable, Category = "Player")
    void LoseBet();

    // 🔹 카드 기능
    UFUNCTION(BlueprintCallable, Category = "Player")
    void GiveCardToHand(UCard* NewCard, int32 HandIndex = 0);

    UFUNCTION(BlueprintCallable, Category = "Player")
    int32 GetHandValue(int32 HandIndex = 0) const;

    // ✂ 스플릿 관련 기능
    UFUNCTION(BlueprintCallable, Category = "Player")
    bool CanSplit() const;

    UFUNCTION(BlueprintCallable, Category = "Player")
    bool Split();

    UFUNCTION(BlueprintCallable, Category = "Player")
    void SetAceValue(int32 NewValue);

    UFUNCTION(BlueprintCallable, Category = "Player")
    void ClearHand();


public:
    // 🎲 플레이어 코인 시스템
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player")
    int32 Coins;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player")
    int32 CurrentBet;

    // 🃏 플레이어의 핸드 (기본 & 스플릿)
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player")
    TArray<FPlayerHand> Hands;

    // ✂ 스플릿 활성화 여부
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Player")
    bool bIsSplitActive;

    // UI 타입 변수 선언 (베팅 금액 업데이트를 위한)
    UPROPERTY(BlueprintReadOnly, Category = "UI", meta = (AllowPrivateAccess = "true"))
    UBlackjackHUD* BlackjackHUD;

    ABlackjackGameMode* GameMode = nullptr;

};
