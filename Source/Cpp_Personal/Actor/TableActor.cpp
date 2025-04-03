#include "TableActor.h"
#include "Kismet/GameplayStatics.h"
#include "CardActor.h"
#include "../CardComponent.h"
#include "../Card.h"
#include "Engine/World.h"



ATableActor::ATableActor()
{
    PrimaryActorTick.bCanEverTick = false;

    // 테이블 메쉬 초기화
    TableMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TableMesh"));
    TableMesh->SetupAttachment(RootComponent);

    // 플레이어 카드 배치 영역 초기화
    PlayerCardArea = CreateDefaultSubobject<USceneComponent>(TEXT("PlayerCardArea"));
    PlayerCardArea->SetupAttachment(RootComponent);
    PlayerCardArea->SetRelativeLocation(FVector(0.0f, 100.0f, 320.0f));

    // 딜러 카드 배치 영역 초기화
    DealerCardArea = CreateDefaultSubobject<USceneComponent>(TEXT("DealerCardArea"));
    DealerCardArea->SetupAttachment(RootComponent);
    DealerCardArea->SetRelativeLocation(FVector(0.0f, -100.0f, 320.0f));

    // 카드 컴포넌트 생성
    CardComponent = CreateDefaultSubobject<UCardComponent>(TEXT("CardComponent"));

    // 초기화를 강제하지 않고, 블루프린트 설정을 활용
}

void ATableActor::BeginPlay()
{
    Super::BeginPlay();

    // CardComponent가 NULL인지 확인
    if (!CardComponent)
    {
        UE_LOG(LogTemp, Error, TEXT("BeginPlay(): CardComponent가 NULL입니다! 초기화가 필요합니다."));
        return;
    }

    // CardActor가 블루프린트에서 설정되었는지 확인
    if (!CardComponent->CardActor)
    {
        UE_LOG(LogTemp, Warning, TEXT("BeginPlay(): CardActor가 NULL입니다! 블루프린트 설정을 확인하세요."));
        return;
    }

    UE_LOG(LogTemp, Warning, TEXT("BeginPlay(): CardActor가 정상적으로 설정되었습니다 -> %s"), *CardComponent->CardActor->GetName());
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

    if (!CardComponent)
    {
        UE_LOG(LogTemp, Error, TEXT("SpawnCard(): CardComponent가 NULL입니다!"));
        return nullptr;
    }
    if (CardComponent->CardActor == nullptr)
    {        
        FString ActorName = this->GetActorLabel();
        UE_LOG(LogTemp, Error, TEXT("%s : SpawnCard(): CardActor가 NULL입니다!"), *ActorName);
        return nullptr;
    }
    


    FVector SpawnLocation;
    FRotator SpawnRotation;
    float OffsetZ = 320.0f + (CardIndex * 2); // Z축 오프셋

    if (bIsPlayer)
    {
        SpawnLocation = FVector(CardIndex * -50.0f, -100.0f, OffsetZ);
        SpawnRotation = FRotator(0.0f, 180.0f, 0.0f);
    }
    else
    {
        SpawnLocation = FVector(CardIndex * 50.0f, 100.0f, OffsetZ);
        SpawnRotation = FRotator::ZeroRotator;
    }

    // 로컬 변수 이름 변경 (CardActor -> SpawnedCardActor)
    ACardActor* SpawnedCardActor = World->SpawnActor<ACardActor>(CardComponent->CardActor, SpawnLocation, SpawnRotation);

    if (!SpawnedCardActor)
    {
        UE_LOG(LogTemp, Error, TEXT("SpawnCard(): CardActor 생성 실패!"));
        return nullptr;
    }

    // 카드 설정
    SpawnedCardActor->SetCard(NewCard->Suit, NewCard->Rank);
    UE_LOG(LogTemp, Warning, TEXT("SpawnCard(): 카드 생성 완료 - 위치 (%f, %f, %f)"), SpawnLocation.X, SpawnLocation.Y, SpawnLocation.Z);

    // CardActors 리스트에 추가
    CardActors.Add(SpawnedCardActor);

    return SpawnedCardActor;
}

// 🎲 특정 카드를 가진 카드 액터 찾기
ACardActor* ATableActor::FindCardActor(const UCard* Card) const
{
    if (!Card)
    {
        UE_LOG(LogTemp, Error, TEXT("FindCardActor(): Provided Card is NULL."));
        return nullptr;
    }

    for (ACardActor* CurrentCardActor : CardActors) // 로컬 변수 이름 변경
    {
        if (!CurrentCardActor)
        {
            UE_LOG(LogTemp, Warning, TEXT("FindCardActor(): CardActor in list is NULL."));
            continue;
        }

        UCard* ActorCard = CurrentCardActor->GetCard();
        if (!ActorCard)
        {
            UE_LOG(LogTemp, Warning, TEXT("FindCardActor(): GetCard returned NULL for CardActor."));
            continue;
        }

        if (ActorCard->Suit == Card->Suit && ActorCard->Rank == Card->Rank)
        {
            return CurrentCardActor;
        }
    }

    UE_LOG(LogTemp, Warning, TEXT("FindCardActor(): No matching CardActor found."));
    return nullptr;
}

// 🎲 테이블 초기화 (카드 액터 제거)
void ATableActor::ClearTableCards()
{
    for (ACardActor* DisCardActor : CardActors)
    {
        if (DisCardActor)
        {
            DisCardActor->Destroy();
        }
    }

    CardActors.Empty(); // 리스트 초기화
    UE_LOG(LogTemp, Warning, TEXT("ClearTableCards(): 모든 카드가 삭제되었습니다."));
}