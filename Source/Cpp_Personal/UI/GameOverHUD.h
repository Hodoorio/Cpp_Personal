// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameOverHUD.generated.h"

/**
 * 
 */
UCLASS()
class CPP_PERSONAL_API UGameOverHUD : public UUserWidget
{
	GENERATED_BODY()
	
protected:
    // 블루프린트에서 설정할 레벨 이름
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Level")
    FName RestartLevelName;

    virtual void NativeConstruct() override;

    // 버튼 클릭 핸들러
    UFUNCTION()
    void OnRestartClicked();

    UFUNCTION()
    void OnExitClicked();

public:
    // 버튼 참조
    UPROPERTY(meta = (BindWidget))
    class UButton* BTN_ReStart;

    UPROPERTY(meta = (BindWidget))
    class UButton* BTN_Exit;


};
