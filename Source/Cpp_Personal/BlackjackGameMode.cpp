#include "BlackjackGameMode.h"
#include "Kismet/GameplayStatics.h"

ABlackjackGameMode::ABlackjackGameMode()
{
    PrimaryActorTick.bCanEverTick = false;
    CurrentState = EGameState::WaitingForBet;
}

void ABlackjackGameMode::BeginPlay()
{
    Super::BeginPlay();

    // 플레이어 & 딜러 찾기
    Player = Cast<APlayerActor>(UGameplayStatics::GetActorOfClass(GetWorld(), APlayerActor::StaticClass()));
    Dealer = Cast<ADealerActor>(UGameplayStatics::GetActorOfClass(GetWorld(), ADealerActor::StaticClass()));

    // 🎥 카메라 찾기
    PlayerCamera = Cast<APlayerCameraActor>(UGameplayStatics::GetActorOfClass(GetWorld(), APlayerCameraActor::StaticClass()));
}

void ABlackjackGameMode::StartGame()
{
    if (!Player || !Dealer) return;

    // 🔹 카메라 전환 (게임 시작 시 카메라 변경)
    APlayerController* PlayerController = GetWorld()->GetFirstPlayerController();
    if (PlayerController && PlayerCamera)
    {
        PlayerController->SetViewTargetWithBlend(PlayerCamera, 1.0f);  // 1초 동안 부드럽게 전환
    }

    // 🔹 게임 시작 → 카드 2장씩 지급
    Player->GiveCardToHand(Dealer->DrawCard(), 0);
    Player->GiveCardToHand(Dealer->DrawCard(), 0);

    Dealer->GiveCardToHand(Dealer->DrawCard());
    Dealer->GiveCardToHand(Dealer->DrawCard());

    // 🔹 플레이어 턴으로 변경
    CurrentState = EGameState::PlayerTurn;
}
