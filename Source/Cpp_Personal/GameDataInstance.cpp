// Fill out your copyright notice in the Description page of Project Settings.


#include "GameDataInstance.h"

void UGameDataInstance::SaveHighScore(int32 CurrentScore)
{
    if (CurrentScore > HighScore)
    {
        HighScore = CurrentScore; // 최고 점수 갱신
        UE_LOG(LogTemp, Warning, TEXT("SaveHighScore(): 새로운 최고 점수 -> %d"), HighScore);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("SaveHighScore(): 기존 최고 점수 유지 -> %d"), HighScore);
    }
}

int32 UGameDataInstance::GetHighScore() const
{
    UE_LOG(LogTemp, Warning, TEXT("GetHighScore(): 현재 최고 점수 -> %d"), HighScore);
    return HighScore; // 최고 점수 반환
}

