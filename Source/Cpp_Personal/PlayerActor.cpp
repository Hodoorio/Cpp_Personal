#include "PlayerActor.h"
#include "BlackjackHUD.h"
#include "Kismet/GameplayStatics.h"
#include "BlackjackGameMode.h"

APlayerActor::APlayerActor()
{
    PrimaryActorTick.bCanEverTick = false;
    Coins = 1000;
    CurrentBet = 0;
    bIsSplitActive = false;

    // 🎲 두 개의 핸드 공간을 미리 생성
    Hands.AddDefaulted(2);  // 기본 핸드와 스플릿 핸드 공간을 미리 생성
}

void APlayerActor::BeginPlay()
{
    Super::BeginPlay();

    // ✅ 게임모드에서 BlackjackHUD 가져오기
    ABlackjackGameMode* GameMode = Cast<ABlackjackGameMode>(UGameplayStatics::GetGameMode(this));
    if (GameMode && GameMode->BlackjackHUD)
    {
        BlackjackHUD = Cast<UBlackjackHUD>(GameMode->BlackjackHUD);
    }
}


// 🎲 플레이어 코인 초기화
void APlayerActor::InitializeCoins(int32 StartingCoins)
{
    Coins = StartingCoins;
}

// 💰 배팅 함수
bool APlayerActor::PlaceBet(int32 BetAmount)
{
    if (BetAmount > 0 && BetAmount <= Coins)
    {
        Coins -= BetAmount;
        CurrentBet += BetAmount;

        // ✅ GameMode의 이벤트를 호출하여 UI 업데이트
        ABlackjackGameMode* GameMode = Cast<ABlackjackGameMode>(UGameplayStatics::GetGameMode(this));
        if (GameMode && GameMode->BlackjackHUD)
        {
            GameMode->BlackjackHUD->UpdatePlayerInfo(Coins, CurrentBet);
        }

        return true;
    }
    return false;
}


void APlayerActor::MaxBet()
{
    CurrentBet += Coins;
    Coins = 0;

    ABlackjackGameMode* GameMode = Cast<ABlackjackGameMode>(UGameplayStatics::GetGameMode(this));
    if (GameMode && GameMode->BlackjackHUD)
    {
        GameMode->BlackjackHUD->UpdatePlayerInfo(Coins, CurrentBet);
    }
}

// 🎉 승리 시 배팅 금액의 2배 획득
void APlayerActor::WinBet()
{
    Coins += CurrentBet * 2;
    CurrentBet = 0;
}

// ❌ 패배 시 배팅 금액 잃음
void APlayerActor::LoseBet()
{
    CurrentBet = 0;
}

// 🃏 카드 받기 함수 (핸드 선택 가능)

//void APlayerActor::GiveCardToHand(UCard* Card, int32 HandIndex)
//{
//    if (!Card) return;
//
//    // ✅ Hands 배열 체크
//    if (HandIndex < 0 || HandIndex >= Hands.Num())
//    {
//        UE_LOG(LogTemp, Error, TEXT("GiveCardToHand(): 유효하지 않은 HandIndex (%d)! Hands 배열 크기: %d"), HandIndex, Hands.Num());
//        return;
//    }
//
//    Hands[HandIndex].Cards.Add(Card);
//}

void APlayerActor::GiveCardToHand(UCard* NewCard, int32 HandIndex)
{
    if (!NewCard || HandIndex >= Hands.Num()) return;

    if (!Hands[HandIndex].Cards.Contains(NewCard)) // 중복 추가 방지
    {
        Hands[HandIndex].Cards.Add(NewCard);
        UE_LOG(LogTemp, Warning, TEXT("플레이어가 새로운 카드를 받았습니다: %s"), *NewCard->GetCardName());
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("플레이어 핸드에 이미 포함된 카드입니다: %s"), *NewCard->GetCardName());
    }
}


// 🏆 현재 핸드의 총 점수 계산
int32 APlayerActor::GetHandValue(int32 HandIndex) const
{
    if (Hands.Num() == 0 || HandIndex >= Hands.Num()) return 0;

    int32 TotalValue = 0;
    int32 AceCount = 0;

    const FPlayerHand& Hand = Hands[HandIndex];

    UE_LOG(LogTemp, Warning, TEXT("===== 플레이어 핸드 점수 계산 ====="));

    for (UCard* Card : Hand.Cards)
    {
        if (!Card) continue;

        int32 CardValue = 0;

        if (Card->Rank >= ERank::Jack)
        {
            CardValue = 10;
        }
        else if (Card->Rank == ERank::Ace)
        {
            CardValue = 11;
            AceCount++;
        }
        else
        {
            CardValue = static_cast<int32>(Card->Rank) + 1;
        }

        TotalValue += CardValue;

        // ✅ 개별 카드 점수 로그 출력
        FString SuitString;
        switch (Card->Suit)
        {
        case ESuit::Hearts:   SuitString = "Hearts"; break;
        case ESuit::Diamonds: SuitString = "Diamonds"; break;
        case ESuit::Clubs:    SuitString = "Clubs"; break;
        case ESuit::Spades:   SuitString = "Spades"; break;
        }
        UE_LOG(LogTemp, Warning, TEXT("카드: %s %d -> 점수: %d"), *SuitString, static_cast<int32>(Card->Rank) + 1, CardValue);
    }

    // ✅ Ace(에이스) 조정
    while (TotalValue > 21 && AceCount > 0)
    {
        TotalValue -= 10;
        AceCount--;
    }

    UE_LOG(LogTemp, Warning, TEXT("총 점수: %d"), TotalValue);
    return TotalValue;
}



// ✂ 스플릿 가능 여부 확인
bool APlayerActor::CanSplit() const
{
    return Hands[0].Cards.Num() == 2 && Hands[0].Cards[0]->Rank == Hands[0].Cards[1]->Rank;
}

// ✂ 스플릿 실행
bool APlayerActor::Split()
{
    if (!CanSplit()) return false;

    // 🎲 스플릿 활성화
    bIsSplitActive = true;

    // 🎴 두 번째 핸드에 한 장 이동
    Hands[1].Cards.Add(Hands[0].Cards[1]);
    Hands[0].Cards.RemoveAt(1);

    return true;
}

void APlayerActor::SetAceValue(int32 NewValue)
{
    for (UCard* Card : Hands[0].Cards)
    {
        if (Card->Rank == ERank::Ace)
        {
            Card->SetAceValue(NewValue);  // ✅ A 카드 값 설정
            return;
        }
    }
}


void APlayerActor::ClearHand()
{
    Hands.Empty();  // ✅ 플레이어 카드 초기화
    UE_LOG(LogTemp, Warning, TEXT("ClearHand(): 플레이어 손패 초기화 완료"));
}
