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

    if (FaceMaterial)
    {
        MID = UMaterialInstanceDynamic::Create(FaceMaterial, this);
        if (MID)
        {
            CardMesh->SetMaterial(0, MID);
            UE_LOG(LogTemp, Warning, TEXT("BeginPlay(): DynamicMaterialInstance created and applied to CardMesh."));

            // ✅ 강제로 렌더링 업데이트 추가
            //CardMesh->MarkRenderStateDirty();
        }
    }
}





// 🔹 카드 정보 설정 (문양 & 숫자)
void ACardActor::SetCard(ESuit NewSuit, ERank NewRank)
{
    UE_LOG(LogTemp, Warning, TEXT("SetCard(): Called with Suit=%d, Rank=%d"), static_cast<int32>(NewSuit), static_cast<int32>(NewRank));

    Suit = NewSuit;
    Rank = NewRank;

    int32 TextureIndex = GetTextureIndex(Suit, Rank);
    FString TexturePath = FString::Printf(TEXT("/Game/Textures/Cards/T_Card_%d"), TextureIndex);

    UTexture2D* CardTexture = LoadObject<UTexture2D>(nullptr, *TexturePath);
    /*if (!CardTexture)
    {
        UE_LOG(LogTemp, Error, TEXT("SetCard(): Failed to load texture: %s"), *TexturePath);
        return;
    }*/

    // ✅ DMI가 없으면 새로 생성
    /*if (!MID && FaceMaterial)
    {
        MID = UMaterialInstanceDynamic::Create(FaceMaterial, this);
        CardMesh->SetMaterial(0, MID);
        UE_LOG(LogTemp, Warning, TEXT("SetCard(): Created new DynamicMaterialInstance"));
    }*/

    if (MID)
    {
        // ✅ 텍스처 적용
        MID->SetTextureParameterValue(TEXT("Card_Image"), CardTexture);
        //CardMesh->MarkRenderStateDirty();  // ✅ 렌더링 상태 업데이트

        UE_LOG(LogTemp, Warning, TEXT("SetCard(): Applied Texture = %s"), *TexturePath);

        // 🚨 **실제 적용된 텍스처를 확인하는 디버깅 코드 추가**
    /*    UTexture* AppliedTexture = nullptr;
        if (MID->GetTextureParameterValue(FName("Card_Image"), AppliedTexture))
        {
            if (AppliedTexture)
            {
                UE_LOG(LogTemp, Warning, TEXT("SetCard(): Confirmed Applied Texture = %s"), *AppliedTexture->GetName());
            }
            else
            {
                UE_LOG(LogTemp, Error, TEXT("SetCard(): AppliedTexture is NULL after setting!"));
            }
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("SetCard(): Failed to get texture parameter value!"));
        }*/
    }

    //UE_LOG(LogTemp, Warning, TEXT("SetCard(): Applying Dynamic Material Instance..."));
    CardMesh->SetMaterial(0, MID);

    //// 🚨 적용된 머티리얼 확인
    //UMaterialInterface* CurrentMat = CardMesh->GetMaterial(0);
    //if (CurrentMat)
    //{
    //    UE_LOG(LogTemp, Warning, TEXT("SetCard(): Current Material After Set = %s"), *CurrentMat->GetName());
    //}
    //else
    //{
    //    UE_LOG(LogTemp, Error, TEXT("SetCard(): Failed to retrieve material from CardMesh!"));
    //}


    /*UTexture* AppliedTexture;
    if (MID->GetTextureParameterValue(FName("Card_Image"), AppliedTexture))
    {
        if (AppliedTexture)
        {
            UE_LOG(LogTemp, Warning, TEXT("SetCard(): Confirmed Applied Texture (After Set) = %s"), *AppliedTexture->GetName());
        }
        else
        {
            UE_LOG(LogTemp, Error, TEXT("SetCard(): Applied Texture is NULL after SetTextureParameterValue!"));
        }
    }
    else
    {
        UE_LOG(LogTemp, Error, TEXT("SetCard(): GetTextureParameterValue failed for Card_Image"));
    }*/

}




// 🔹 텍스처 인덱스 계산 함수 (0~51 범위)
int32 ACardActor::GetTextureIndex(ESuit InSuit, ERank InRank)
{

    return (static_cast<int32>(InSuit) * 13) + static_cast<int32>(InRank);
}

void ACardActor::SetCardTexture(UTexture2D* NewTexture)
{
    if (!NewTexture)
    {
        UE_LOG(LogTemp, Error, TEXT("SetCardTexture(): NewTexture is NULL!"));
        return;
    }

    if (!MID)
    {
        UE_LOG(LogTemp, Error, TEXT("SetCardTexture(): DynamicMaterialInstance is NULL!"));
        return;
    }

    // ✅ 변경 전 현재 텍스처 확인
    UTexture* CurrentTexture = nullptr;
    MID->GetTextureParameterValue(FName("Card_Image"), CurrentTexture);
    UE_LOG(LogTemp, Warning, TEXT("SetCardTexture(): Current Texture Before Change = %s"), *GetNameSafe(CurrentTexture));

    // ✅ 새로운 텍스처 적용
    MID->SetTextureParameterValue(TEXT("Card_Image"), NewTexture);
    CardMesh->MarkRenderStateDirty();  // ✅ 렌더링 강제 업데이트

    // ✅ 적용 후 텍스처 확인
    MID->GetTextureParameterValue(FName("Card_Image"), CurrentTexture);
    UE_LOG(LogTemp, Warning, TEXT("SetCardTexture(): Current Texture After Change = %s"), *GetNameSafe(CurrentTexture));

    UE_LOG(LogTemp, Warning, TEXT("SetCardTexture(): Texture applied successfully! NewTexture = %s"), *GetNameSafe(NewTexture));
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
