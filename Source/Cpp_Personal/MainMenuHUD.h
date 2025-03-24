// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "MainMenuHUD.generated.h"

/**
 * 
 */
UCLASS()
class CPP_PERSONAL_API UMainMenuHUD : public UUserWidget
{
    GENERATED_BODY()

protected:
    virtual void NativeConstruct() override;

public:
    // 버튼을 참조할 변수 선언
    UPROPERTY(meta = (BindWidget))
    class UButton* BTN_Start;

    UPROPERTY(meta = (BindWidget))
    class UButton* BTN_End;

    // 블루프린트에서 설정할 수 있는 레벨 변수
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Level")
    TSoftObjectPtr<UWorld> TargetLevel;


    // 버튼 클릭 시 호출될 함수
    UFUNCTION()
    void OnStartClicked();

    UFUNCTION()
    void OnEndClicked();

    // 레벨 로드 함수
    UFUNCTION(BlueprintCallable, Category = "Level")
    void LoadTargetLevel();

};