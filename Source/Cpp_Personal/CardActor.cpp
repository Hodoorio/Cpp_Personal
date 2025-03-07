#include "CardActor.h"
#include "Components/StaticMeshComponent.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Engine/Texture2D.h"

ACardActor::ACardActor()
{
    PrimaryActorTick.bCanEverTick = false;

    // 메시 컴포넌트 생성 & 루트 설정
    CardMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CardMesh"));
    RootComponent = CardMesh;

    // 기본 카드 설정 (Hearts, Ace)
    Suit = ESuit::Hearts;
    Rank = ERank::Ace;
}

void ACardActor::BeginPlay()
{
    Super::BeginPlay();

    // 블루프린트에서 설정한 머티리얼을 기반으로 동적 머티리얼 생성
    if (BaseMaterial)
    {
        CardMaterial = UMaterialInstanceDynamic::Create(BaseMaterial, this);
        if (CardMaterial)
        {
            CardMesh->SetMaterial(0, CardMaterial);
        }
    }

    // 초기 카드 설정
    SetCard(Suit, Rank);
}

void ACardActor::SetCard(ESuit NewSuit, ERank NewRank)
{
    // 새로운 카드 정보 저장
    Suit = NewSuit;
    Rank = NewRank;

    // 텍스처 인덱스 계산
    int32 TextureIndex = GetTextureIndex(Suit, Rank);

    // 텍스처 로드
    FString TexturePath = FString::Printf(TEXT("/Game/Textures/Cards/T_Card_%d"), TextureIndex);
    UTexture2D* CardTexture = LoadObject<UTexture2D>(nullptr, *TexturePath);

    if (CardTexture)
    {
        SetCardTexture(CardTexture);
    }
}

// 텍스처 인덱스 계산 함수
int32 ACardActor::GetTextureIndex(ESuit InSuit, ERank InRank)
{
    return (static_cast<int32>(InSuit) * 13) + static_cast<int32>(InRank);
}

// 머티리얼의 "Card_Image" 파라미터에 텍스처 적용
void ACardActor::SetCardTexture(UTexture2D* NewTexture)
{
    if (CardMaterial && NewTexture)
    {
        CardMaterial->SetTextureParameterValue(FName("Card_Image"), NewTexture);
    }
}
