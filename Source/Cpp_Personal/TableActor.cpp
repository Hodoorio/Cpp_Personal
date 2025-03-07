#include "TableActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "CardActor.h"
#include "Deck.h"

ATableActor::ATableActor()
{
    PrimaryActorTick.bCanEverTick = false;

    // 테이블 메시 생성 & 루트 설정
    TableMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TableMesh"));
    RootComponent = TableMesh;

    // ✅ 플레이어 카드 영역 (테이블 아래쪽으로 넓게 조정)
    PlayerCardArea = CreateDefaultSubobject<USceneComponent>(TEXT("PlayerCardArea"));
    PlayerCardArea->SetupAttachment(RootComponent);
    PlayerCardArea->SetRelativeLocation(FVector(0, -200, 50));  // Y 방향으로 더 아래 배치

    // ✅ 딜러 카드 영역 (테이블 위쪽으로 넓게 조정)
    DealerCardArea = CreateDefaultSubobject<USceneComponent>(TEXT("DealerCardArea"));
    DealerCardArea->SetupAttachment(RootComponent);
    DealerCardArea->SetRelativeLocation(FVector(0, 200, 50));  // Y 방향으로 더 위쪽 배치
}

void ATableActor::BeginPlay()
{
    Super::BeginPlay();
}

void SpawnPlayerCard(ATableActor* Table, UDeck* Deck, int32 CardIndex)
{
    if (!Table || !Deck) return;

    // 🎯 덱에서 카드 뽑기!
    UCard* DrawnCard = Deck->DrawCard();
    if (!DrawnCard) return;  // 덱이 비었으면 종료

    // ✅ 첫 카드는 Y = 0, 이후 카드는 X += 50
    FVector SpawnLocation = Table->PlayerCardArea->GetComponentLocation();
    SpawnLocation.X += CardIndex * 50;  // 오른쪽으로 정렬

    // 카드 스폰
    UWorld* World = Table->GetWorld();
    ACardActor* NewCard = World->SpawnActor<ACardActor>(ACardActor::StaticClass(), SpawnLocation, FRotator::ZeroRotator);

    if (NewCard)
    {
        // ✅ 덱에서 뽑은 카드 설정!
        NewCard->SetCard(DrawnCard->Suit, DrawnCard->Rank);
    }
}

void SpawnDealerCard(ATableActor* Table, UDeck* Deck, int32 CardIndex)
{
    if (!Table || !Deck) return;

    // 🎯 덱에서 카드 뽑기!
    UCard* DrawnCard = Deck->DrawCard();
    if (!DrawnCard) return;  // 덱이 비었으면 종료

    // ✅ 첫 카드는 Y = 0, 이후 카드는 X += 50
    FVector SpawnLocation = Table->DealerCardArea->GetComponentLocation();
    SpawnLocation.X += CardIndex * 50;  // 오른쪽으로 정렬

    // 카드 스폰
    UWorld* World = Table->GetWorld();
    ACardActor* NewCard = World->SpawnActor<ACardActor>(ACardActor::StaticClass(), SpawnLocation, FRotator::ZeroRotator);

    if (NewCard)
    {
        // ✅ 덱에서 뽑은 카드 설정!
        NewCard->SetCard(DrawnCard->Suit, DrawnCard->Rank);
    }
}

