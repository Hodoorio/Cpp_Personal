// Fill out your copyright notice in the Description page of Project Settings.


#include "GameOverGameMode.h"
#include "Blueprint/UserWidget.h"

void AGameOverGameMode::BeginPlay()
{
    Super::BeginPlay();

    // 게임오버 UI를 화면에 표시
    ShowGameOverScreen();
}

void AGameOverGameMode::ShowGameOverScreen()
{
    if (GameOverWidgetClass)
    {
        // 위젯 생성 및 뷰포트 추가
        GameOverWidget = CreateWidget<UUserWidget>(GetWorld(), GameOverWidgetClass);
        if (GameOverWidget)
        {
            GameOverWidget->AddToViewport();
            UE_LOG(LogTemp, Warning, TEXT("GameOverWidget이 뷰포트에 추가되었습니다."));
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("GameOverWidget 생성 실패! GameOverWidgetClass를 확인하세요."));
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("GameOverWidgetClass가 지정되지 않았습니다!"));
    }
}