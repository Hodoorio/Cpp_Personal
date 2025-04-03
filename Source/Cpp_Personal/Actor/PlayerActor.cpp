#include "PlayerActor.h"
#include "../UI/BlackjackHUD.h"
#include "../Gamemode/BlackjackGameMode.h"
#include "TableActor.h"
#include "../Deck.h"
#include "Kismet/GameplayStatics.h"
#include "CardActor.h"

APlayerActor::APlayerActor()
{
    PrimaryActorTick.bCanEverTick = false;
    Coins = 1000;
    CurrentBet = 0;
    bIsSplitActive = false;
    PlayerScore = 0;

    // 🎲 두 개의 핸드 공간을 미리 생성
    Hands.AddDefaulted(2);  // 기본 핸드와 스플릿 핸드 공간을 미리 생성
}

void APlayerActor::BeginPlay()
{
    Super::BeginPlay();

    // ✅ 게임모드에서 BlackjackHUD 가져오기
    GameMode = Cast<ABlackjackGameMode>(UGameplayStatics::GetGameMode(this));
    if (GameMode && GameMode->BlackjackHUD)
    {
        BlackjackHUD = Cast<UBlackjackHUD>(GameMode->BlackjackHUD);
    }
}


void APlayerActor::InitialDeal(UDeck* Deck, ATableActor* Table)
{
    if (!Deck || !Table)
    {
        UE_LOG(LogTemp, Error, TEXT("InitialDeal(): Deck 또는 Table이 NULL입니다!"));
        return;
    }

    if (Hands.Num() == 0)
    {
        Hands.Add(FPlayerHand()); // 첫 번째 손패 생성
    }

    for (int32 i = 0; i < 2; ++i)
    {
        UCard* NewCard = Deck->DrawCard();
        if (NewCard)
        {
            GiveCardToHand(NewCard, 0);
            UE_LOG(LogTemp, Warning, TEXT("Dealer GiveCardToHand() 완료 SpawnCard실행 전"));
            ACardActor* CardActor = Table->SpawnCard(NewCard, true, i);
            if (CardActor)
            {
                CardActor->SetFaceUp(true); // 앞면 표시
            }
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("InitialDeal(): 플레이어가 초기 카드를 배분했습니다. 총 카드 수: %d"), Hands[0].Cards.Num());
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

    
}


void APlayerActor::ResetBet()
{
	Coins += CurrentBet; // 코인에 베팅 금액 추가
    CurrentBet = 0; // 베팅 금액을 0으로 초기화

    // UI 업데이트 (베팅 금액 표시를 0으로 설정)
        
    if (GameMode && GameMode->BlackjackHUD)
    {
        GameMode->BlackjackHUD->UpdatePlayerInfo(Coins, CurrentBet);
    }

    UE_LOG(LogTemp, Warning, TEXT("ResetBet(): 베팅 금액이 0으로 초기화되었습니다."));
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


void APlayerActor::GiveCardToHand(UCard* NewCard, int32 HandIndex)
{
    // 기본 유효성 검사
    if (!NewCard)
    {
        UE_LOG(LogTemp, Error, TEXT("GiveCardToHand(): NewCard가 NULL입니다."));
        return;
    }

    // Hands 배열 초기화 확인 및 카드 추가
    if (Hands.Num() <= HandIndex)
    {
        UE_LOG(LogTemp, Warning, TEXT("GiveCardToHand(): 지정된 HandIndex(%d)가 유효하지 않으므로 새 Hand를 생성합니다."), HandIndex);
        Hands.Add(FPlayerHand());
    }

    Hands[HandIndex].Cards.Add(NewCard); // 카드 추가
    UE_LOG(LogTemp, Warning, TEXT("PlayerActor GiveCardToHand(): 핸드(%d)에 카드 추가 완료 -> %s"), HandIndex, *NewCard->GetCardName());
    UE_LOG(LogTemp, Warning, TEXT("현재 핸드(%d)의 카드 수: %d"), HandIndex, Hands[HandIndex].Cards.Num());
}

// 🏆 현재 핸드의 총 점수 계산
int32 APlayerActor::GetHandValue(int32 HandIndex) const
{
    // 핸드 리스트가 없거나, 유효하지 않은 인덱스인 경우
    if (Hands.Num() == 0 || HandIndex >= Hands.Num())
    {
        UE_LOG(LogTemp, Warning, TEXT("GetHandValue(): 유효하지 않은 핸드 인덱스입니다. 반환값: 0"));
        return 0;
    }

    int32 TotalValue = 0;
    int32 AceCount = 0;

    const FPlayerHand& Hand = Hands[HandIndex];
    UE_LOG(LogTemp, Warning, TEXT("===== 핸드 점수 계산 시작 ====="));

    for (UCard* Card : Hand.Cards)
    {
        if (!Card)
        {
            UE_LOG(LogTemp, Warning, TEXT("GetHandValue(): NULL 카드 발견. 무시합니다."));
            continue;
        }

        int32 CardValue = 0;

        switch (Card->Rank)
        {
        case ERank::Jack:
        case ERank::Queen:
        case ERank::King:
            CardValue = 10; // J, Q, K는 점수 10
            break;
        case ERank::Ace:
            CardValue = 11; // Ace는 기본적으로 11
            AceCount++;
            break;
        default:
            CardValue = static_cast<int32>(Card->Rank) + 1; // 그 외 숫자 카드
            break;
        }

        TotalValue += CardValue;

        // ✅ 개별 카드 점수 로그 출력
        FString SuitString;
        switch (Card->Suit)
        {
        case ESuit::Hearts:   SuitString = "Hearts";   break;
        case ESuit::Diamonds: SuitString = "Diamonds"; break;
        case ESuit::Clubs:    SuitString = "Clubs";    break;
        case ESuit::Spades:   SuitString = "Spades";   break;
        default:              SuitString = "Unknown";  break;
        }

        UE_LOG(LogTemp, Warning, TEXT("카드: %s %d -> 점수: %d"), *SuitString, static_cast<int32>(Card->Rank) + 1, CardValue);
    }

    // ✅ Ace(에이스) 조정
    while (TotalValue > 21 && AceCount > 0)
    {
        TotalValue -= 10; // Ace를 1로 조정
        AceCount--;
        UE_LOG(LogTemp, Warning, TEXT("GetHandValue(): Ace 조정 -> 총 점수: %d, 남은 Ace 개수: %d"), TotalValue, AceCount);
    }

    UE_LOG(LogTemp, Warning, TEXT("GetHandValue(): 계산 완료 -> 총 점수: %d"), TotalValue);
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


