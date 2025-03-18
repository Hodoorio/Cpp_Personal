#include "BlackjackHUD.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "BlackjackGameMode.h"
#include "PlayerActor.h"
#include "Kismet/GameplayStatics.h"
#include "GameFramework/Character.h"  // ACharacter 클래스 정의 포함

void UBlackjackHUD::NativeConstruct()
{
    Super::NativeConstruct();

    if (BTN_Hit) BTN_Hit->OnClicked.AddDynamic(this, &UBlackjackHUD::OnHitClicked);
    if (BTN_Stand) BTN_Stand->OnClicked.AddDynamic(this, &UBlackjackHUD::OnStandClicked);
    if (BTN_Split) BTN_Split->OnClicked.AddDynamic(this, &UBlackjackHUD::OnSplitClicked);
    if (BTN_Bet10) BTN_Bet10->OnClicked.AddDynamic(this, &UBlackjackHUD::OnBet10Clicked);
    if (BTN_Bet50) BTN_Bet50->OnClicked.AddDynamic(this, &UBlackjackHUD::OnBet50Clicked);
    if (BTN_Bet100) BTN_Bet100->OnClicked.AddDynamic(this, &UBlackjackHUD::OnBet100Clicked);
    if (BTN_BetMax) BTN_BetMax->OnClicked.AddDynamic(this, &UBlackjackHUD::OnBetMaxClicked);
    if (BTN_Bet) BTN_Bet->OnClicked.AddDynamic(this, &UBlackjackHUD::OnBetClicked);

    if (TXT_Message)
    {
        TXT_Message->SetText(FText::FromString(TEXT("")));
        TXT_Message->SetVisibility(ESlateVisibility::Hidden); // ✅ 기본적으로 숨김
    }

    // ✅ GameMode에서 UI 업데이트 이벤트 바인딩
    ABlackjackGameMode* GameMode = Cast<ABlackjackGameMode>(UGameplayStatics::GetGameMode(this));
    if (GameMode)
    {
        GameMode->OnPlayerInfoUpdated.AddDynamic(this, &UBlackjackHUD::UpdatePlayerInfo);
    }

}

void UBlackjackHUD::UpdateMessageText(const FString& NewMessage)
{
    if (TXT_Message)
    {
        TXT_Message->SetText(FText::FromString(NewMessage));

        // ✅ 메시지가 변경되었을 때만 표시
        TXT_Message->SetVisibility(ESlateVisibility::Visible);
    }
}

void UBlackjackHUD::UpdatePlayerInfo(int32 Coins, int32 BetAmount)
{
    if (TXT_PlayerCoins)
    {
        TXT_PlayerCoins->SetText(FText::FromString(FString::Printf(TEXT("%d"), Coins)));
    }

    if (TXT_BetAmount)
    {
        TXT_BetAmount->SetText(FText::FromString(FString::Printf(TEXT("%d"), BetAmount)));
    }
}

void UBlackjackHUD::OnHitClicked()
{
    ABlackjackGameMode* GameMode = Cast<ABlackjackGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
    if (GameMode)
    {
        GameMode->PlayerHit();
    }
}

void UBlackjackHUD::OnStandClicked()
{
    ABlackjackGameMode* GameMode = Cast<ABlackjackGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
    if (GameMode)
    {
        GameMode->PlayerStand();
    }
}

void UBlackjackHUD::OnSplitClicked()
{
    ABlackjackGameMode* GameMode = Cast<ABlackjackGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
    if (GameMode)
    {
        GameMode->PlayerSplit();  // ✅ 다시 호출 가능하도록 수정됨
    }
}

void UBlackjackHUD::OnBet10Clicked()
{
    APlayerActor* Player = Cast<APlayerActor>(UGameplayStatics::GetPlayerCharacter(this, 0));

    if (Player)
    {
        Player->PlaceBet(10);
    }
}

void UBlackjackHUD::OnBet50Clicked()
{
    APlayerActor* Player = Cast<APlayerActor>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
    if (Player)
    {
        Player->PlaceBet(50);
    }
}

void UBlackjackHUD::OnBet100Clicked()
{
    APlayerActor* Player = Cast<APlayerActor>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
    if (Player)
    {
        Player->PlaceBet(100);
    }
}

void UBlackjackHUD::OnBetMaxClicked()
{
    APlayerActor* Player = Cast<APlayerActor>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
    if (Player)
    {
        Player->MaxBet();
    }
}

void UBlackjackHUD::OnBetClicked()
{
    ABlackjackGameMode* GameMode = Cast<ABlackjackGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
    if (GameMode)
    {
        GameMode->StartGame();
    }
}

