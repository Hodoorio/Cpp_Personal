#include "BlackjackHUD.h"
#include "BlackjackGameMode.h"
#include "PlayerActor.h"
#include "Components/TextBlock.h"
#include "Components/Button.h"
#include "Components/Image.h"
#include "Kismet/GameplayStatics.h"

void UBlackjackHUD::NativeConstruct()
{
    Super::NativeConstruct();

    // ✅ 버튼 클릭 이벤트 바인딩
    if (BTN_Hit) BTN_Hit->OnClicked.AddDynamic(this, &UBlackjackHUD::OnHitClicked);
    if (BTN_Stand) BTN_Stand->OnClicked.AddDynamic(this, &UBlackjackHUD::OnStandClicked);
    if (BTN_Split) BTN_Split->OnClicked.AddDynamic(this, &UBlackjackHUD::OnSplitClicked);
    if (BTN_Bet10) BTN_Bet10->OnClicked.AddDynamic(this, &UBlackjackHUD::OnBet10Clicked);
    if (BTN_Bet50) BTN_Bet50->OnClicked.AddDynamic(this, &UBlackjackHUD::OnBet50Clicked);
    if (BTN_Bet100) BTN_Bet100->OnClicked.AddDynamic(this, &UBlackjackHUD::OnBet100Clicked);
    if (BTN_BetMax) BTN_BetMax->OnClicked.AddDynamic(this, &UBlackjackHUD::OnBetMaxClicked);
    if (BTN_Bet) BTN_Bet->OnClicked.AddDynamic(this, &UBlackjackHUD::OnBetClicked);

    // ✅ 게임 모드 가져오기
    GameMode = Cast<ABlackjackGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
   
    UpdateMessageText("Place Your Bets!", 120.0f);

    // 🔹 A 선택 버튼 바인딩
    if (BTN_AceAsOne) BTN_AceAsOne->OnClicked.AddDynamic(this, &UBlackjackHUD::OnAceAsOneClicked);
    if (BTN_AceAsEleven) BTN_AceAsEleven->OnClicked.AddDynamic(this, &UBlackjackHUD::OnAceAsElevenClicked);

    // A 선택 버튼은 기본적으로 숨김
    HideAceChoice();
}

  // Add this include at the top of the file

void UBlackjackHUD::ShowAceChoice()
{
    /*BTN_AceAsOne->SetVisibility(ESlateVisibility::Visible);
    BTN_AceAsEleven->SetVisibility(ESlateVisibility::Visible);
    Ace_Image->SetVisibility(ESlateVisibility::Visible);*/

    BTN_AceAsOne->SetIsEnabled(true);
    BTN_AceAsEleven->SetIsEnabled(true);
    Ace_Image->SetIsEnabled(true);

    // 🎲 A 선택하는 동안 다른 버튼 비활성화
    SetActionButtonsEnabled(false);

    UE_LOG(LogTemp, Warning, TEXT("A 선택지 활성화"));
}

void UBlackjackHUD::HideAceChoice()
{
    /*BTN_AceAsOne->SetVisibility(ESlateVisibility::Hidden);
    BTN_AceAsEleven->SetVisibility(ESlateVisibility::Hidden);
    Ace_Image->SetVisibility(ESlateVisibility::Hidden);*/

    BTN_AceAsOne->SetIsEnabled(false);
    BTN_AceAsEleven->SetIsEnabled(false);
    Ace_Image->SetIsEnabled(false);

    // 🎲 선택 후 액션 버튼 다시 활성화
    SetActionButtonsEnabled(true);

    UE_LOG(LogTemp, Warning, TEXT("A 선택지 비활성화"));
}

void UBlackjackHUD::UpdateScores(const FString& PlayerScore, const FString& DealerScore)
{
    if (TXT_PlayerScore)
    {
        TXT_PlayerScore->SetText(FText::FromString(PlayerScore));
    }

    if (TXT_DealerScore)
    {
        TXT_DealerScore->SetText(FText::FromString(DealerScore));
    }
}




void UBlackjackHUD::UpdatePlayerInfo(int32 PlayerCoins, int32 CurrentBet)
{
    if (TXT_PlayerCoins)
    {
        TXT_PlayerCoins->SetText(FText::FromString(FString::Printf(TEXT("%d"), PlayerCoins)));
    }

    if (TXT_BetAmount)
    {
        TXT_BetAmount->SetText(FText::FromString(FString::Printf(TEXT("%d"), CurrentBet)));
    }
}

void UBlackjackHUD::UpdateMessageText(const FString& NewMessage, float TextSize)
{
    if (TXT_Message)
    {
        TXT_Message->SetText(FText::FromString(NewMessage));

        // ✅ 텍스트 크기 설정
        TXT_Message->SetRenderScale(FVector2D(TextSize / 250.0f, TextSize / 250.0f));

        // ✅ 메시지가 변경되었을 때만 표시
        TXT_Message->SetVisibility(ESlateVisibility::Visible);
    }
}

void UBlackjackHUD::InitializeUI(int32 StartingCoins)
{
    if (TXT_PlayerCoins)
    {
        TXT_PlayerCoins->SetText(FText::FromString(FString::Printf(TEXT("%d"), StartingCoins)));
    }

    if (TXT_BetAmount)
    {
        TXT_BetAmount->SetText(FText::FromString(TEXT("0")));  // 초기 베팅 금액 0
    }

    // 🎲 초기에는 베팅 버튼만 활성화, 액션 버튼 비활성화
    SetActionButtonsEnabled(false);
    SetBetButtonsEnabled(true);
}

void UBlackjackHUD::SetActionButtonsEnabled(bool bEnabled)
{
    if (BTN_Hit) BTN_Hit->SetIsEnabled(bEnabled);
    if (BTN_Stand) BTN_Stand->SetIsEnabled(bEnabled);
    if (BTN_Split) BTN_Split->SetIsEnabled(bEnabled);
}

void UBlackjackHUD::SetBetButtonsEnabled(bool bEnabled)
{
    BTN_Bet10->SetIsEnabled(bEnabled);
    BTN_Bet50->SetIsEnabled(bEnabled);
    BTN_Bet100->SetIsEnabled(bEnabled);
    BTN_BetMax->SetIsEnabled(bEnabled);
    BTN_Bet->SetIsEnabled(bEnabled);
}

void UBlackjackHUD::NextGame()
{
    if (GameMode)
    {
        GameMode->ResetForNextRound();
    }
}

void UBlackjackHUD::OnHitClicked()
{
    
    if (GameMode)
    {
        GameMode->PlayerHit();
    }
}

void UBlackjackHUD::OnStandClicked()
{
    
    if (GameMode)
    {
        GameMode->PlayerStand();
    }
}

void UBlackjackHUD::OnSplitClicked()
{
    
    if (GameMode)
    {
        GameMode->PlayerSplit();  // ✅ 다시 호출 가능하도록 수정됨
    }
}

void UBlackjackHUD::OnBet10Clicked()
{
    if (GameMode && GameMode->Player)
    {
        if (GameMode->Player->PlaceBet(10)) // 🎲 10 코인 배팅
        {
            UpdatePlayerInfo(GameMode->Player->Coins, GameMode->Player->CurrentBet);
        }
    }
}

void UBlackjackHUD::OnBet50Clicked()
{
    if (GameMode && GameMode->Player)
    {
        if (GameMode->Player->PlaceBet(50)) // 🎲 50 코인 배팅
        {
            UpdatePlayerInfo(GameMode->Player->Coins, GameMode->Player->CurrentBet);
        }
    }
}

void UBlackjackHUD::OnBet100Clicked()
{
    if (GameMode && GameMode->Player)
    {
        if (GameMode->Player->PlaceBet(100)) // 🎲 100 코인 배팅
        {
            UpdatePlayerInfo(GameMode->Player->Coins, GameMode->Player->CurrentBet);
        }
    }
}

void UBlackjackHUD::OnBetMaxClicked()
{
    if (GameMode && GameMode->Player)
    {
        if (GameMode->Player->PlaceBet(GameMode->Player->Coins)) // 🎲 최대 코인 배팅
        {
            UpdatePlayerInfo(GameMode->Player->Coins, GameMode->Player->CurrentBet);
        }
    }
}


void UBlackjackHUD::OnBetClicked()
{
    TXT_Message->SetVisibility(ESlateVisibility::Hidden);
    if (GameMode)
    {
        GameMode->ConfirmBet(); // 🟢 "베팅 완료" 처리
        GameMode->StartGame();
    }
}

void UBlackjackHUD::OnAceAsOneClicked()
{
    GameMode = Cast<ABlackjackGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
    if (GameMode)
    {
        GameMode->HandleAceChoice(1);
    }
}

void UBlackjackHUD::OnAceAsElevenClicked()
{
    GameMode = Cast<ABlackjackGameMode>(UGameplayStatics::GetGameMode(GetWorld()));
    if (GameMode)
    {
        GameMode->HandleAceChoice(11);
    }
}