#include "PlayerCameraActor.h"
#include "Camera/CameraComponent.h"

APlayerCameraActor::APlayerCameraActor()
{
    PrimaryActorTick.bCanEverTick = false;

    // 🎥 카메라 컴포넌트 생성
    CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    RootComponent = CameraComponent;

    // 🔹 카메라 위치 설정 (카드 영역 중앙 + 300 높이)
    SetActorLocation(FVector(0, 0, 610));  // (310 + 300 = 610)

    // 🔹 카메라 회전 설정 (완전 수직으로 아래를 바라보게 설정)
    SetActorRotation(FRotator(-90, -90, 0));
}

void APlayerCameraActor::BeginPlay()
{
    Super::BeginPlay();
}
