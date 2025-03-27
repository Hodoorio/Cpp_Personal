// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "GameDataInstance.generated.h"

/**
 * 
 */
UCLASS()
class CPP_PERSONAL_API UGameDataInstance : public UGameInstance
{
	GENERATED_BODY()
	
public:
    // 현재 코인 값
    UPROPERTY(BlueprintReadWrite, Category = "PlayerData")
    int32 PlayerCoins = 0;

    // 최고 점수
    UPROPERTY(BlueprintReadWrite, Category = "PlayerData")
    int32 HighScore = 0;

    // 최고 점수를 저장하는 함수
    UFUNCTION(BlueprintCallable, Category = "PlayerData")
    void SaveHighScore(int32 CurrentScore);

    // 최고 점수를 반환하는 함수
    UFUNCTION(BlueprintCallable, Category = "PlayerData")
    int32 GetHighScore() const;

};
