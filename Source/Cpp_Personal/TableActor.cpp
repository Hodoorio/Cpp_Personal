#include "TableActor.h"
#include "Kismet/GameplayStatics.h"

ATableActor::ATableActor()
{
    PrimaryActorTick.bCanEverTick = false;


    TableMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TableMesh"));
    TableMesh->SetupAttachment(RootComponent);

    // 플레이어 카드 배치 영역
    PlayerCardArea = CreateDefaultSubobject<USceneComponent>(TEXT("PlayerCardArea"));
    PlayerCardArea->SetupAttachment(RootComponent);

    // 딜러 카드 배치 영역
    DealerCardArea = CreateDefaultSubobject<USceneComponent>(TEXT("DealerCardArea"));
    DealerCardArea->SetupAttachment(RootComponent);

    // 🎲 카드 컴포넌트 생성
    CardComponent = CreateDefaultSubobject<UCardComponent>(TEXT("CardComponent"));
}

void ATableActor::BeginPlay()
{
    Super::BeginPlay();
}

// 🎲 카드 생성 및 배치
ACardActor* ATableActor::SpawnCard(UCard* NewCard, bool bIsPlayer, int32 CardIndex)
{
    if (!NewCard)
    {
        UE_LOG(LogTemp, Error, TEXT("SpawnCard(): NewCard is NULL!"));
        return nullptr;
    }

    UWorld* World = GetWorld();
    if (!World)
    {
        UE_LOG(LogTemp, Error, TEXT("SpawnCard(): World is NULL!"));
        return nullptr;
    }

    if (!CardComponent || !CardComponent->CardActor)
    {
        UE_LOG(LogTemp, Error, TEXT("SpawnCard(): CardComponent or CardActor is NULL!"));
        return nullptr;
    }

    FVector SpawnLocation = FVector(0, 0, 310);
    FRotator SpawnRotation = FRotator::ZeroRotator;

    ACardActor* CardActor = World->SpawnActor<ACardActor>(CardComponent->CardActor->GetClass(), SpawnLocation, SpawnRotation);
    if (!CardActor)
    {
        UE_LOG(LogTemp, Error, TEXT("SpawnCard(): Failed to spawn CardActor!"));
        return nullptr;
    }

    CardActor->SetCard(NewCard->Suit, NewCard->Rank);
    UE_LOG(LogTemp, Warning, TEXT("SpawnCard(): CardActor spawned successfully!"));

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

    return CardActor;
}


