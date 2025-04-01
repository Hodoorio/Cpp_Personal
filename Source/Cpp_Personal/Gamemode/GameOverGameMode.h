#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "GameOverGameMode.generated.h"

UCLASS()
class CPP_PERSONAL_API AGameOverGameMode : public AGameModeBase
{
    GENERATED_BODY()

protected:
    // 블루프린트에서 설정할 사용자 위젯 클래스
    UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "UI")
    TSubclassOf<UUserWidget> GameOverWidgetClass;

    // 생성된 사용자 위젯의 참조
    UPROPERTY()
    UUserWidget* GameOverWidget;

    virtual void BeginPlay() override;

public:
    // 게임오버 UI를 화면에 표시하는 함수
    void ShowGameOverScreen();
};