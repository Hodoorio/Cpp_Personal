#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "../Card.h"
#include "../UI/BlackjackHUD.h"
#include "PlayerActor.generated.h"

// 전방 선언
class UDeck;
class ATableActor;

// 플레이어 핸드 구조체 정의
USTRUCT(BlueprintType)
struct FPlayerHand
{
    GENERATED_BODY()

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Hand")
    TArray<UCard*> Cards; // 플레이어 카드 리스트
};

UCLASS()
class CPP_PERSONAL_API APlayerActor : public AActor
{
    GENERATED_BODY()

public:
    // 생성자
    APlayerActor();

protected:
    // BeginPlay 오버라이드
    virtual void BeginPlay() override;

public:
    // 초기 카드 분배
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

    // ✂ 스플릿 관련 기능
    UFUNCTION(BlueprintCallable, Category = "Player")
    bool CanSplit() const;

    UFUNCTION(BlueprintCallable, Category = "Player")
    bool Split();

    UFUNCTION(BlueprintCallable, Category = "Player")
    void SetAceValue(int32 NewValue);

    UFUNCTION(BlueprintCallable, Category = "Player")
    void ClearHand();

    // 🏆 플레이어 점수 계산
    // 점수 Getter
    FORCEINLINE int32 GetPlayerScore() const { return PlayerScore; }

    // 점수 Setter
    FORCEINLINE void SetPlayerScore(int32 NewScore) { PlayerScore = NewScore; }

    // 점수 추가
    FORCEINLINE void AddToPlayerScore(int32 ValueToAdd) { PlayerScore += ValueToAdd; }

    // 에이스 Getter
    FORCEINLINE int32 GetPlayerAces() const { return PlayerAces; }

    // 에이스 Setter
    FORCEINLINE void SetPlayerAces(int32 NewAces) { PlayerAces = NewAces; }

    // 에이스 추가
    FORCEINLINE void AddToPlayerAces(int32 ValueToAdd) { PlayerAces += ValueToAdd; }

public:
    UFUNCTION(BlueprintCallable, Category = "Player")
    int32 GetHandValue(int32 HandIndex = 0) const;

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

    // 게임 모드 참조
    ABlackjackGameMode* GameMode = nullptr;

private:
    // 플레이어 점수
    int32 PlayerScore = 0;
    
    // 플레이어 에이스
    int32 PlayerAces = 0;
    
};