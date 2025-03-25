#include "MainMenuHUD.h"
#include "Components/Button.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetSystemLibrary.h"

void UMainMenuHUD::NativeConstruct()
{
    Super::NativeConstruct();

    // 버튼 이벤트 바인딩
    if (BTN_Start)
    {
        BTN_Start->OnClicked.AddDynamic(this, &UMainMenuHUD::OnStartClicked);
    }

    if (BTN_End)
    {
        BTN_End->OnClicked.AddDynamic(this, &UMainMenuHUD::OnEndClicked);
    }
}

void UMainMenuHUD::OnStartClicked()
{
    // 레벨 로드 (예: StartMap으로 이동)
    LoadTargetLevel();
}

void UMainMenuHUD::OnEndClicked()
{
    // 게임 종료
    UKismetSystemLibrary::ExecuteConsoleCommand(GetWorld(), "exit");
}

void UMainMenuHUD::LoadTargetLevel()
{
    if (TargetLevel.IsValid())
    {
        UE_LOG(LogTemp, Warning, TEXT("TargetLevel 유효: %s"), *TargetLevel.GetAssetName());
        UGameplayStatics::OpenLevelBySoftObjectPtr(this, TargetLevel);
    }
    else
    {
        UE_LOG(LogTemp, Warning, TEXT("TargetLevel이 설정되지 않았습니다. 레벨 이동이 생략됩니다."));
    }
}
