#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Actor/CardActor.h"
#include "CardComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class CPP_PERSONAL_API UCardComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UCardComponent();

protected:
    virtual void BeginPlay() override;

public:
    // 🎲 블루프린트에서 설정할 카드 액터 (BP_CardActor)
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Card")
    TSubclassOf<ACardActor> CardActor;

};
