#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Deck.h"
#include "DeckActor.generated.h"

UCLASS()
class CPP_PERSONAL_API ADeckActor : public AActor
{
    GENERATED_BODY()

public:
    ADeckActor();

protected:
    virtual void BeginPlay() override;

public:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Deck")
    UDeck* Deck;

    // 카드 한 장 뽑기
    UFUNCTION(BlueprintCallable, Category = "Deck")
    UCard* DrawCard();
};
