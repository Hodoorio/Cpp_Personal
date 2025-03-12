#include "BlackjackGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "Engine.h"

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
}



void ABlackjackGameMode::StartGame()
{
    if (!Player)
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("StartGame(): Player을 찾을 수 없습니다!"));
    }
    else if (!Dealer)
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("StartGame(): Dealer을 찾을 수 없습니다!"));
    }
    else if (!Table)
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("StartGame(): Table을 찾을 수 없습니다!"));
    }
    else
    {
        //UE_LOG(LogTemp, Warning, );
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("StartGame(): Player, Dealer, Table이 정상적으로 설정되었습니다."));
    }

    for (int i = 0; i < 2; i++)
    {
        // 🔹 플레이어 카드 지급
        UCard* PlayerCard = Dealer->DrawCard();
        Player->GiveCardToHand(PlayerCard, 0);
        ACardActor* PlayerCardActor = Table->SpawnCard(PlayerCard, true, i);
        if (PlayerCardActor)
        {
            PlayerCardActor->SetFaceUp(true);
        }

        // 🔹 딜러 카드 지급
        UCard* DealerCard = Dealer->DrawCard();
        Dealer->GiveCardToHand(DealerCard);  // ✅ 이제 정상 호출 가능
        ACardActor* DealerCardActor = Table->SpawnCard(DealerCard, false, i);
        if (DealerCardActor)
        {
            if (i == 0)
            {
                DealerCardActor->SetFaceUp(false);  // 첫 번째 딜러 카드는 뒷면
            }
            else
            {
                DealerCardActor->SetFaceUp(true);  // 두 번째 딜러 카드는 앞면
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
            //UE_LOG(LogTemp, Warning, TEXT("Player Busts! Dealer Wins."));
            GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, TEXT("Player Busts! Dealer Wins."));
            PlayerStand();  // 자동으로 딜러 턴으로 넘어감
        }
    }
}

void ABlackjackGameMode::PlayerStand()
{
    if (!Player || !Dealer || !Table) return;

    //UE_LOG(LogTemp, Warning,
    GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, TEXT("Player Stands. Dealer's Turn Begins."));

    // 🔹 딜러 턴 시작
    while (Dealer->GetHandValue() < 17)
    {
        UCard* DealerCard = Dealer->DrawCard();
        Dealer->GiveCardToHand(DealerCard); 
        ACardActor* DealerCardActor = Table->SpawnCard(DealerCard, false, Dealer->Hands.Num() - 1);      
        if (DealerCardActor)
        {
            DealerCardActor->SetFaceUp(true);
        }
    }

    // 결과 판정
    int32 PlayerValue = Player->GetHandValue(0);
    int32 DealerValue = Dealer->GetHandValue();

    if (DealerValue > 21 || PlayerValue > DealerValue)
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, TEXT("Player Wins!"));
    }
    else if (PlayerValue == DealerValue)
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Blue, TEXT("It's a Tie!"));
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("Dealer Wins!"));
    }
}
