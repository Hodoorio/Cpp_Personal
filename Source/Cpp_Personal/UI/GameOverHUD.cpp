// Fill out your copyright notice in the Description page of Project Settings.


#include "GameOverHUD.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

void UGameOverHUD::NativeConstruct()
{
    Super::NativeConstruct();

    // 버튼 클릭 이벤트 바인딩
    if (BTN_ReStart)
    {
        BTN_ReStart->OnClicked.AddDynamic(this, &UGameOverHUD::OnRestartClicked);
    }

    if (BTN_Exit)
    {
        BTN_Exit->OnClicked.AddDynamic(this, &UGameOverHUD::OnExitClicked);
    }
}

void UGameOverHUD::OnRestartClicked()
{
    if (!RestartLevelName.IsNone())
    {
        UGameplayStatics::OpenLevel(GetWorld(), RestartLevelName);
        UE_LOG(LogTemp, Warning, TEXT("레벨 재시작 -> %s"), *RestartLevelName.ToString());
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("RestartLevelName이 지정되지 않았습니다!"));
    }
}

void UGameOverHUD::OnExitClicked()
{
    UKismetSystemLibrary::QuitGame(GetWorld(), nullptr, EQuitPreference::Quit, false);
    UE_LOG(LogTemp, Warning, TEXT("게임 종료 명령 실행."));
}

