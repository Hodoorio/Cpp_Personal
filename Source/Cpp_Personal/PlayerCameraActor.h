#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Camera/CameraComponent.h"
#include "PlayerCameraActor.generated.h"

UCLASS()
class CPP_PERSONAL_API APlayerCameraActor : public AActor
{
    GENERATED_BODY()

public:
    APlayerCameraActor();

protected:
    virtual void BeginPlay() override;

public:
    // 카메라 컴포넌트
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
    UCameraComponent* CameraComponent;
};
