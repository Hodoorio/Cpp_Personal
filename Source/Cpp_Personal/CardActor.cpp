#include "CardActor.h"
#include "Card.h"
#include "Engine/Texture2D.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Components/StaticMeshComponent.h"


ACardActor::ACardActor()
{
    PrimaryActorTick.bCanEverTick = false;

    // 카드 메시 생성
    CardMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("CardMesh"));
    RootComponent = CardMesh;

    BackMaterial = nullptr;
    CardDataTable = nullptr;
    Rank = ERank::Ace; // 기본값 설정
    Suit = ESuit::Hearts; // 기본값 설정
    bIsFaceUp = false;
    MID = nullptr; // 다이나믹 머티리얼 초기화

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
            CardMesh->SetMaterial(0, MID); // MID는 UMaterialInterface로 자동 캐스팅됩니다.
            UE_LOG(LogTemp, Warning, TEXT("BeginPlay(): DynamicMaterialInstance created and applied to CardMesh."));
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("BeginPlay(): DynamicMaterialInstance creation failed."));
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("BeginPlay(): FaceMaterial is NULL."));
    }
}
// ✅ Suit과 Rank에 맞는 텍스처를 찾아서 적용
void ACardActor::SetCard(ESuit NewSuit, ERank NewRank)
{
    // 카드 설정 로그
    UE_LOG(LogTemp, Warning, TEXT("SetCard(): 호출됨 - Suit: %d, Rank: %d"), static_cast<int32>(NewSuit), static_cast<int32>(NewRank));

    Suit = NewSuit;
    Rank = NewRank;

    // 데이터 테이블 초기화 여부 확인
    if (!CardDataTable)
    {
        UE_LOG(LogTemp, Error, TEXT("SetCard(): CardDataTable is NULL."));
        return;
    }

    // RowKey 생성 및 디버깅
    FString RowKey = FString::Printf(TEXT("%d_%d"), static_cast<int32>(Suit), static_cast<int32>(Rank));
    FName RowName = FName(*RowKey);
    UE_LOG(LogTemp, Warning, TEXT("SetCard(): 생성된 RowKey -> %s"), *RowKey);

    // 데이터 테이블 조회
    FString ContextString;
    FCardDataTableRow* CardData = CardDataTable->FindRow<FCardDataTableRow>(RowName, ContextString);

    if (!CardData)
    {
        UE_LOG(LogTemp, Error, TEXT("SetCard(): RowKey가 데이터 테이블에 없습니다 -> RowKey: %s"), *RowKey);
        return;
    }

    if (!CardData->CardTexture)
    {
        UE_LOG(LogTemp, Error, TEXT("SetCard(): RowKey는 유효하지만 텍스처가 없습니다 -> RowKey: %s"), *RowKey);
        return;
    }

    // 텍스처 적용 확인
    if (MID)
    {
        MID->SetTextureParameterValue(FName("Card_Image"), CardData->CardTexture);
        CardMesh->SetMaterial(0, MID);
        UE_LOG(LogTemp, Warning, TEXT("SetCard(): Texture applied successfully."));
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("SetCard(): MID(Material Instance Dynamic)이 NULL입니다."));
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

UCard* ACardActor::GetCard() const
{
    // Suit와 Rank가 유효하지 않은 경우를 검증
    if (Suit == ESuit::Hearts || Suit == ESuit::Diamonds || Suit == ESuit::Clubs || Suit == ESuit::Spades)
    {
        if (Rank >= ERank::Ace && Rank <= ERank::King) // Rank 범위 체크
        {
            UCard* Card = NewObject<UCard>();
            if (Card)
            {
                Card->Suit = Suit;
                Card->Rank = Rank;
            }
            return Card;
        }
    }

    // 유효하지 않은 경우 null 반환
    UE_LOG(LogTemp, Error, TEXT("GetCard(): Invalid Suit or Rank."));
    return nullptr;
}
