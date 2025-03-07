#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Card.h"
#include "Deck.generated.h"

UCLASS(Blueprintable)
class CPP_PERSONAL_API UDeck : public UObject
{
    GENERATED_BODY()

public:
    // 생성자
    UDeck();

    // 덱에 들어있는 카드 리스트
    UPROPERTY(BlueprintReadOnly, Category = "Deck")
    TArray<UCard*> Cards;

    // 덱 초기화 (52장 생성)
    UFUNCTION(BlueprintCallable, Category = "Deck")
    void InitializeDeck();

    // 카드 섞기
    UFUNCTION(BlueprintCallable, Category = "Deck")
    void ShuffleDeck();

    // 카드 뽑기
    UFUNCTION(BlueprintCallable, Category = "Deck")
    UCard* DrawCard();
};
