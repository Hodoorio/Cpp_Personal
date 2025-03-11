// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"
#include "PlayerCameraPawn.generated.h"

UCLASS()
class CPP_PERSONAL_API APlayerCameraPawn : public APawn
{
    GENERATED_BODY()

public:
    APlayerCameraPawn();

protected:
    virtual void BeginPlay() override;

public:
    // 🎥 카메라 컴포넌트
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
    UCameraComponent* CameraComponent;
};
