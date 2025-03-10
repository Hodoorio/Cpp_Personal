#include "TableActor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"

ATableActor::ATableActor()
{
    PrimaryActorTick.bCanEverTick = false;

    RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));

    // 테이블 메시 컴포넌트 추가
    TableMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("TableMesh"));
    TableMesh->SetupAttachment(RootComponent);

    // 스케일 3배 적용
    TableMesh->SetRelativeScale3D(FVector(4.0f, 4.0f, 4.0f));

    // 플레이어 카드 영역 (Z = 310)
    PlayerCardArea = CreateDefaultSubobject<USceneComponent>(TEXT("PlayerCardArea"));
    PlayerCardArea->SetupAttachment(RootComponent);
    PlayerCardArea->SetRelativeLocation(FVector(0, -200, 310));

    // 딜러 카드 영역 (Z = 310)
    DealerCardArea = CreateDefaultSubobject<USceneComponent>(TEXT("DealerCardArea"));
    DealerCardArea->SetupAttachment(RootComponent);
    DealerCardArea->SetRelativeLocation(FVector(0, 200, 310));
}

void ATableActor::BeginPlay()
{
    Super::BeginPlay();
}
