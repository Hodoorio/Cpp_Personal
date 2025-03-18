#include "BlackjackGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Engine.h"
#include "Engine/GameInstance.h"
#include "BlackjackHUD.h"
#include "GameFramework/Character.h"  // ACharacter 클래스 정의 포함

ABlackjackGameMode::ABlackjackGameMode()
{
    PrimaryActorTick.bCanEverTick = false;
}

void ABlackjackGameMode::BeginPlay()
{
    Super::BeginPlay();

    UWorld* World = GetWorld();
    if (!World) return;

    // 🎲 플레이어 스폰
    if (!Player && PlayerClass)
    {
        Player = World->SpawnActor<APlayerActor>(PlayerClass, FVector(0, 400, 0), FRotator::ZeroRotator);
    }

    // 🎲 딜러 스폰
    if (!Dealer && DealerClass)
    {
        Dealer = World->SpawnActor<ADealerActor>(DealerClass, FVector(0, -400, 0), FRotator::ZeroRotator);
    }

    // 🎲 테이블 스폰
    if (!Table && TableClass)
    {
        Table = World->SpawnActor<ATableActor>(TableClass, FVector(0, 0, 0), FRotator::ZeroRotator);
    }

    // 🎲 정상적으로 생성되었는지 확인
    if (!Player || !Dealer || !Table)
    {
        UE_LOG(LogTemp, Error, TEXT("BeginPlay(): Player, Dealer 또는 Table을 스폰할 수 없습니다!"));
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("BeginPlay(): Player, Dealer, Table 스폰 성공"));
    }

    UE_LOG(LogTemp, Warning, TEXT("StartGame(): Player=%s, Dealer=%s, Table=%s"),
        *GetNameSafe(Player), *GetNameSafe(Dealer), *GetNameSafe(Table));

    CreateHUD();

}

void ABlackjackGameMode::StartGame()
{
    UE_LOG(LogTemp, Warning, TEXT("StartGame(): Player=%s, Dealer=%s, Table=%s"),
        *GetNameSafe(Player), *GetNameSafe(Dealer), *GetNameSafe(Table));

    if (!Player || !Dealer || !Table)
    {
        UE_LOG(LogTemp, Error, TEXT("StartGame(): Player, Dealer 또는 Table이 설정되지 않았습니다!"));
        return;
    }

    if (!Dealer->Deck)
    {
        UE_LOG(LogTemp, Error, TEXT("StartGame(): Dealer->Deck is NULL! Cannot start the game."));
        return;
    }

    if (BlackjackHUD)
    {
        BlackjackHUD->UpdatePlayerInfo(Player->Coins, Player->CurrentBet);
    }

    for (int i = 0; i < 2; i++)
    {
        UCard* PlayerCard = Dealer->DrawCard();
        if (!PlayerCard)
        {
            UE_LOG(LogTemp, Error, TEXT("StartGame(): PlayerCard is NULL! Dealer->DrawCard() failed!"));
            continue;
        }
        Player->GiveCardToHand(PlayerCard, 0);
        ACardActor* PlayerCardActor = Table->SpawnCard(PlayerCard, true, i);
        if (PlayerCardActor)
        {
            PlayerCardActor->SetFaceUp(true);
        }

        UCard* DealerCard = Dealer->DrawCard();
        if (!DealerCard)
        {
            UE_LOG(LogTemp, Error, TEXT("StartGame(): DealerCard is NULL! Dealer->DrawCard() failed!"));
            continue;
        }
        Dealer->GiveCardToHand(DealerCard);
        ACardActor* DealerCardActor = Table->SpawnCard(DealerCard, false, i);
        if (DealerCardActor)
        {
            if (i == 0)
            {
                DealerCardActor->SetFaceUp(false); // 첫 번째 딜러 카드는 뒷면
            }
            else
            {
                DealerCardActor->SetFaceUp(true); // 두 번째 딜러 카드는 앞면
            }
        }
    }

    CurrentState = EGameState::PlayerTurn;
}

void ABlackjackGameMode::PlayerHit()
{
    if (!Player || !Dealer || !Table) return;

    // 플레이어가 카드 한 장 받음
    UCard* NewCard = Dealer->DrawCard();
    if (NewCard)
    {
        Player->GiveCardToHand(NewCard, 0);
        ACardActor* NewCardActor = Table->SpawnCard(NewCard, true, Player->Hands[0].Cards.Num() - 1);
        if (NewCardActor)
        {
            NewCardActor->SetFaceUp(true);
        }

        // 플레이어가 버스트(21 초과)인지 확인
        if (Player->GetHandValue(0) > 21)
        {
            GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, TEXT("Player Busts! Dealer Wins."));
            PlayerStand();  // 자동으로 딜러 턴으로 넘어감
        }
    }
}

void ABlackjackGameMode::PlayerStand()
{
    if (!Player || !Dealer || !Table) return;

    GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, TEXT("Player Stands. Dealer's Turn Begins."));

    // ✅ 딜러의 첫 번째 카드 공개
    if (Dealer->Hands.Num() > 0)
    {
        UCard* FirstDealerCardData = Dealer->Hands[0];  // ✅ UCard* 데이터 가져오기
        ACardActor* FirstDealerCardActor = Table->SpawnCard(FirstDealerCardData, false, 0);
        if (FirstDealerCardActor)
        {
            FirstDealerCardActor->SetFaceUp(true);
        }
    }

    // 🔹 딜러 턴 시작
    while (Dealer->GetHandValue() < 17)
    {
        UCard* DealerCard = Dealer->DrawCard();
        if (!DealerCard)
        {
            GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("Error: Dealer tried to draw a NULL card!"));
            return;
        }

        Dealer->GiveCardToHand(DealerCard);

        // 🔹 올바른 카드 인덱스 계산
        int32 DealerCardIndex = Dealer->Hands.Num() - 1;
        ACardActor* DealerCardActor = Table->SpawnCard(DealerCard, false, DealerCardIndex);

        if (DealerCardActor)
        {
            DealerCardActor->SetFaceUp(true);
        }
    }

    // 🔹 결과 판정
    FString ResultMessage;
    int32 PlayerValue = Player->GetHandValue(0);
    int32 DealerValue = Dealer->GetHandValue();

    if (DealerValue > 21 || PlayerValue > DealerValue)
    {
        ResultMessage = "Player Wins!";
    }
    else if (PlayerValue == DealerValue)
    {
        ResultMessage = "It's a Tie!";
    }
    else
    {
        ResultMessage = "Dealer Wins!";
    }

    GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, *ResultMessage);

    if (BlackjackHUD)
    {
        BlackjackHUD->UpdateMessageText(ResultMessage); // ✅ UI 메시지 업데이트
    }
}

void ABlackjackGameMode::CreateHUD()
{
    if (BlackjackHUDClass)
    {
        BlackjackHUD = CreateWidget<UBlackjackHUD>(GetWorld(), BlackjackHUDClass);
        if (BlackjackHUD)
        {
            BlackjackHUD->AddToViewport();
        }
    }
}

void ABlackjackGameMode::PlayerSplit()
{
    if (!Player)
    {
        UE_LOG(LogTemp, Error, TEXT("PlayerSplit(): Player is NULL!"));
        return;
    }

    if (!Player->CanSplit())
    {
        UE_LOG(LogTemp, Warning, TEXT("PlayerSplit(): Split is not allowed!"));
        return;
    }

    // 🎲 스플릿 실행
    Player->Split();
    GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, TEXT("Player Split!"));
}

void ABlackjackGameMode::UpdatePlayerInfo(int32 NewCoins, int32 NewBet)
{
    OnPlayerInfoUpdated.Broadcast(NewCoins, NewBet);
}

