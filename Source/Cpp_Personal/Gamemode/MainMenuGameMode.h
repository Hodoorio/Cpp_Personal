// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MainMenuGameMode.generated.h"

/**
 * 
 */
UCLASS()
class CPP_PERSONAL_API AMainMenuGameMode : public AGameModeBase
{
	GENERATED_BODY()

protected:
    virtual void BeginPlay() override;

public:
    // 위젯 블루프린트를 참조하기 위한 변수
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "UI")
    TSubclassOf<UUserWidget> MainMenuWidgetClass;

private:
    void SetInputModeUIOnly();
    void ClearAllWidgets();

    UPROPERTY()
    UUserWidget* MainMenuWidget;


	
};
