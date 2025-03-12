#include "PlayerCameraPawn.h"
#include "Camera/CameraComponent.h"

APlayerCameraPawn::APlayerCameraPawn()
{
    PrimaryActorTick.bCanEverTick = false;

    // 🎥 카메라 컴포넌트 생성
    CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComponent"));
    RootComponent = CameraComponent;

    // 🔹 카메라 위치 설정 (테이블을 수직으로 내려다보게 배치)
    SetActorLocation(FVector(0, 0, 610));  // (기존 카메라 위치 유지)
    SetActorRotation(FRotator(-90, 90, 0)); // 수직으로 아래를 바라보게 설정
}

void APlayerCameraPawn::BeginPlay()
{
    Super::BeginPlay();
}
