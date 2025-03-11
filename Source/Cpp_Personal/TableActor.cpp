#include "TableActor.h"
#include "Kismet/GameplayStatics.h"

ATableActor::ATableActor()
{
    PrimaryActorTick.bCanEverTick = false;

    // 플레이어 카드 배치 영역
    PlayerCardArea = CreateDefaultSubobject<USceneComponent>(TEXT("PlayerCardArea"));
    PlayerCardArea->SetupAttachment(RootComponent);

    // 딜러 카드 배치 영역
    DealerCardArea = CreateDefaultSubobject<USceneComponent>(TEXT("DealerCardArea"));
    DealerCardArea->SetupAttachment(RootComponent);
}

void ATableActor::BeginPlay()
{
    Super::BeginPlay();
}

// 🎲 카드 생성 및 배치
void ATableActor::SpawnCard(UCard* NewCard, bool bIsPlayer, int32 CardIndex)
{
    if (!NewCard)
    {
        UE_LOG(LogTemp, Error, TEXT("SpawnCard(): NewCard is NULL!"));
        return;
    }

    UWorld* World = GetWorld();
    if (!World)
    {
        UE_LOG(LogTemp, Error, TEXT("SpawnCard(): World is NULL!"));
        return;
    }

    FVector SpawnLocation = FVector(0, 0, 310); // 기본 위치
    FRotator SpawnRotation = FRotator::ZeroRotator;

    // 📌 카드 액터 스폰
    //ACardActor* CardActor = World->SpawnActor<ACardActor>(ACardActor::StaticClass(), SpawnLocation, SpawnRotation);

    if (!CardActor)
    {
        UE_LOG(LogTemp, Error, TEXT("SpawnCard(): Failed to spawn CardActor!"));
        return;
    }

    // 카드 설정
    CardActor->SetCard(NewCard->Suit, NewCard->Rank);
    UE_LOG(LogTemp, Warning, TEXT("SpawnCard(): CardActor spawned successfully!"));

    // RootComponent 설정
    if (!CardActor->GetRootComponent())
    {
        USceneComponent* DefaultRootComponent = NewObject<USceneComponent>(CardActor, TEXT("RootComponent"));
        CardActor->SetRootComponent(DefaultRootComponent);
        DefaultRootComponent->RegisterComponent();
    }

    // 카드 배치
    if (bIsPlayer && PlayerCardArea)
    {
        CardActor->AttachToComponent(PlayerCardArea, FAttachmentTransformRules::KeepRelativeTransform);
        CardActor->SetActorRelativeLocation(FVector(CardIndex * 50.0f, 0, 0));
    }
    else if (!bIsPlayer && DealerCardArea)
    {
        CardActor->AttachToComponent(DealerCardArea, FAttachmentTransformRules::KeepRelativeTransform);
        CardActor->SetActorRelativeLocation(FVector(CardIndex * 50.0f, 0, 0));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("SpawnCard(): Invalid card area!"));
    }
}

