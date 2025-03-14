#include "CardActor.h"
#include "Engine/Texture2D.h"

ACardActor::ACardActor()
{
    PrimaryActorTick.bCanEverTick = false;

    // 카드 메시 생성
    CardMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CardMesh"));
    RootComponent = CardMesh;

    FaceMaterial = nullptr;
    MID = nullptr;
}

void ACardActor::BeginPlay()
{
    Super::BeginPlay();

    // ✅ 다이나믹 머티리얼 인스턴스 생성
    if (FaceMaterial)
    {
        MID = UMaterialInstanceDynamic::Create(FaceMaterial, this);
        if (MID)
        {
            CardMesh->SetMaterial(0, MID);
            UE_LOG(LogTemp, Warning, TEXT("BeginPlay(): DynamicMaterialInstance created and applied to CardMesh."));
        }
    }
}

// ✅ Suit과 Rank에 맞는 텍스처를 찾아서 적용
void ACardActor::SetCard(ESuit NewSuit, ERank NewRank)
{
    UE_LOG(LogTemp, Warning, TEXT("SetCard() 실행됨: Suit=%d, Rank=%d"), (int32)NewSuit, (int32)NewRank);

    Suit = NewSuit;
    Rank = NewRank;

    if (!CardDataTable)
    {
        UE_LOG(LogTemp, Error, TEXT("SetCard(): CardDataTable이 NULL입니다!"));
        return;
    }

    // Row Key 생성
    FString RowKey = FString::Printf(TEXT("%d_%d"), (int32)Suit, (int32)Rank);
    FName RowName = FName(*RowKey);
    UE_LOG(LogTemp, Warning, TEXT("SetCard(): 찾는 RowKey = %s"), *RowKey);

    FString ContextString;
    FCardDataTableRow* CardData = CardDataTable->FindRow<FCardDataTableRow>(RowName, ContextString);

    if (!CardData)
    {
        UE_LOG(LogTemp, Error, TEXT("SetCard(): RowKey %s 에 대한 데이터를 찾을 수 없습니다!"), *RowKey);
        return;
    }

    if (!CardData->CardTexture)
    {
        UE_LOG(LogTemp, Error, TEXT("SetCard(): RowKey %s 의 CardTexture가 NULL입니다!"), *RowKey);
        return;
    }

    // ✅ 텍스처 적용
    if (MID)
    {
        MID->SetTextureParameterValue(FName("Card_Image"), CardData->CardTexture);
        CardMesh->SetMaterial(0, MID);
        UE_LOG(LogTemp, Warning, TEXT("SetCard(): 텍스처 적용 완료! Texture = %s"), *CardData->CardTexture->GetName());
    }
}



// ✅ 카드 앞/뒷면 설정 함수
void ACardActor::SetFaceUp(bool bInIsFaceUp)
{
    bIsFaceUp = bInIsFaceUp;

    if (bIsFaceUp && FaceMaterial)
    {
        CardMesh->SetMaterial(0, MID);
        UE_LOG(LogTemp, Warning, TEXT("SetFaceUp(): Card is now FACE UP."));
    }
    else if (!bIsFaceUp && BackMaterial)
    {
        CardMesh->SetMaterial(0, BackMaterial);
        UE_LOG(LogTemp, Warning, TEXT("SetFaceUp(): Card is now FACE DOWN."));
    }
}
