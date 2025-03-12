#include "CardComponent.h"

UCardComponent::UCardComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
}

void UCardComponent::BeginPlay()
{
    Super::BeginPlay();
}
