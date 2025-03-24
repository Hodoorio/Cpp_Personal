// Fill out your copyright notice in the Description page of Project Settings.


#include "MainMenuGameMode.h"
#include "Blueprint/UserWidget.h"
#include "Engine/GameViewportClient.h"

void AMainMenuGameMode::BeginPlay()
{

    Super::BeginPlay();

    SetInputModeUIOnly();

    // 기존 위젯 제거
    ClearAllWidgets();

    // MainMenuWidgetClass로부터 위젯 생성
    if (MainMenuWidgetClass)
    {
        UUserWidget* NewWidget = CreateWidget<UUserWidget>(GetWorld(), MainMenuWidgetClass);
        if (NewWidget)
        {
            MainMenuWidget = NewWidget; // 멤버 변수에 저장
            MainMenuWidget->AddToViewport();
        }
    }

}

void AMainMenuGameMode::SetInputModeUIOnly()
{
    if (APlayerController* PlayerController = GetWorld()->GetFirstPlayerController())
    {
        FInputModeUIOnly InputMode;
        InputMode.SetWidgetToFocus(nullptr); // 기본적으로 포커스할 위젯 없음
        PlayerController->SetInputMode(InputMode);
        PlayerController->bShowMouseCursor = true; // 마우스 커서 표시
    }
}

void AMainMenuGameMode::ClearAllWidgets()
{
    UGameViewportClient* ViewportClient = GetWorld()->GetGameViewport();
    if (ViewportClient)
    {
        ViewportClient->RemoveAllViewportWidgets(); // 뷰포트의 모든 위젯 제거
    }
}


