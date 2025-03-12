#include "CardActor.h"

ACardActor::ACardActor()
{
    PrimaryActorTick.bCanEverTick = false;

    // 🎴 카드 메시 생성
    CardMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CardMesh"));
    RootComponent = CardMesh;

    // 기본 머티리얼 설정
    FaceMaterial = nullptr;
    BackMaterial = nullptr;

    // 기본 카드 설정 (예: 하트 A)
    Suit = ESuit::Hearts;
    Rank = ERank::Ace;
}

void ACardActor::BeginPlay()
{
    Super::BeginPlay();

    SetCard(Suit, Rank);
}

// 🔹 카드 정보 설정 (문양 & 숫자)
void ACardActor::SetCard(ESuit NewSuit, ERank NewRank)
{
    Suit = NewSuit;
    Rank = NewRank;

    // 🎴 텍스처 인덱스 계산
    int32 TextureIndex = GetTextureIndex(Suit, Rank);

    // 🔄 텍스처 적용
    FString TexturePath = FString::Printf(TEXT("/Game/Textures/Cards/T_Card_%d"), TextureIndex);
    UTexture2D* CardTexture = LoadObject<UTexture2D>(nullptr, *TexturePath);

    if (CardTexture)
    {
        SetCardTexture(CardTexture);
    }
}

// 🔹 텍스처 인덱스 계산 함수 (0~51 범위)
int32 ACardActor::GetTextureIndex(ESuit InSuit, ERank InRank)
{
    return (static_cast<int32>(InSuit) * 13) + static_cast<int32>(InRank);
}

// 🔹 카드 텍스처 적용 함수
void ACardActor::SetCardTexture(UTexture2D* NewTexture)
{
    if (CardMesh && NewTexture)
    {
        UMaterialInstanceDynamic* DynamicMaterial = CardMesh->CreateDynamicMaterialInstance(0);
        if (DynamicMaterial)
        {
            DynamicMaterial->SetTextureParameterValue(FName("CardTexture"), NewTexture);
        }
    }
}

// 🔄 카드 앞/뒷면 설정 함수
void ACardActor::SetFaceUp(bool bIsFaceUp)
{
    if (bIsFaceUp && FaceMaterial)
    {
        CardMesh->SetMaterial(0, FaceMaterial);
    }
    else if (!bIsFaceUp && BackMaterial)
    {
        CardMesh->SetMaterial(0, BackMaterial);
    }
}
