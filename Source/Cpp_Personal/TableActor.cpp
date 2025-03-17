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
    PlayerCardArea->SetRelativeLocation(FVector(0.0f, 100.0f, 320.0f));

    // 딜러 카드 배치 영역
    DealerCardArea = CreateDefaultSubobject<USceneComponent>(TEXT("DealerCardArea"));
    DealerCardArea->SetupAttachment(RootComponent);
    PlayerCardArea->SetRelativeLocation(FVector(0.0f, -100.0f, 320.0f));

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
        UE_LOG(LogTemp, Error, TEXT("SpawnCard(): NewCard가 NULL입니다!"));
        return nullptr;
    }

    UWorld* World = GetWorld();
    if (!World)
    {
        UE_LOG(LogTemp, Error, TEXT("SpawnCard(): World가 NULL입니다!"));
        return nullptr;
    }

    if (!CardComponent || !CardComponent->CardActor)
    {
        UE_LOG(LogTemp, Error, TEXT("SpawnCard(): CardComponent 또는 CardActor가 NULL입니다!"));
        return nullptr;
    }

    FVector SpawnLocation;
    FRotator SpawnRotator;
    float OffsetZ = 320.0f + (CardIndex * 2);

    if (bIsPlayer)
    {
        SpawnLocation = FVector(CardIndex * -50.0f, -180.0f, OffsetZ);
        SpawnRotator = FRotator(0.0f,180.0f,0.0f);
    }   
    else
    {        
        SpawnLocation = FVector(CardIndex * 50.0f, 180.0f, OffsetZ);
        SpawnRotator = FRotator::ZeroRotator;
    }
    CardActor = World->SpawnActor<ACardActor>(CardComponent->CardActor, SpawnLocation, SpawnRotator);

    if (!CardActor)
    {
        UE_LOG(LogTemp, Error, TEXT("SpawnCard(): CardActor 생성 실패!"));
        return nullptr;
    }

    UE_LOG(LogTemp, Warning, TEXT("SpawnCard(): 카드가 성공적으로 생성되었습니다. 위치 (%f, %f, %f)"),
        SpawnLocation.X, SpawnLocation.Y, SpawnLocation.Z);

    // ✅ SetCard() 호출 확인
    UE_LOG(LogTemp, Warning, TEXT("SpawnCard(): SetCard() 호출"));
    CardActor->SetCard(NewCard->Suit, NewCard->Rank);

    return CardActor;
}





