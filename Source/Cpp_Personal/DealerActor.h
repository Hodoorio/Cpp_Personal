#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Card.h" // UCard 클래스
#include "DealerActor.generated.h"

class UDeck;
class ACardActor;

USTRUCT(BlueprintType)
struct FDealerHand
{
    GENERATED_BODY()

public:
    // 딜러 핸드에 포함된 카드 배열
    UPROPERTY(BlueprintReadWrite, Category = "Dealer")
    TArray<UCard*> Cards;
};


UCLASS()
class CPP_PERSONAL_API ADealerActor : public AActor
{
    GENERATED_BODY()

public:
    ADealerActor();

    // 게임 시작 시 호출
    virtual void BeginPlay() override;

    // 카드 드로우 함수
    UFUNCTION(BlueprintCallable, Category = "Dealer")
    UCard* DrawCard(UDeck* Deck);

    // 카드 추가 함수
    void GiveCardToHand(UCard* NewCard);

    // 핸드 점수 계산
    UFUNCTION(BlueprintCallable, Category = "Dealer")
    int32 GetHandValue(bool bIncludeHiddenCard = false) const;

    void SetAllCardsFaceUp();

    UFUNCTION(BlueprintCallable, Category = "Dealer")
    const TArray<FDealerHand>& GetHands() const;

    // 딜러의 손패 초기화
    void ClearDealerHand();

    ACardActor* FindCardActor(UCard* TargetCard) const;

private:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Dealer", meta = (AllowPrivateAccess = "true"))
    TArray<FDealerHand> Hands;
};