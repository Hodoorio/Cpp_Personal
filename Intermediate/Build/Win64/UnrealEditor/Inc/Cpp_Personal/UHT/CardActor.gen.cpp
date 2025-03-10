// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cpp_Personal/CardActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCardActor() {}

// Begin Cross Module References
CPP_PERSONAL_API UClass* Z_Construct_UClass_ACardActor();
CPP_PERSONAL_API UClass* Z_Construct_UClass_ACardActor_NoRegister();
CPP_PERSONAL_API UEnum* Z_Construct_UEnum_Cpp_Personal_ERank();
CPP_PERSONAL_API UEnum* Z_Construct_UEnum_Cpp_Personal_ESuit();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Cpp_Personal();
// End Cross Module References

// Begin Class ACardActor Function SetCard
struct Z_Construct_UFunction_ACardActor_SetCard_Statics
{
	struct CardActor_eventSetCard_Parms
	{
		ESuit NewSuit;
		ERank NewRank;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Card" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb9\xb4\xeb\x93\x9c \xec\x84\xa4\xec\xa0\x95 \xed\x95\xa8\xec\x88\x98 (\xeb\xac\xb8\xec\x96\x91 & \xec\x88\xab\xec\x9e\x90 \xec\x84\xa4\xec\xa0\x95)\n" },
#endif
		{ "ModuleRelativePath", "CardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb9\xb4\xeb\x93\x9c \xec\x84\xa4\xec\xa0\x95 \xed\x95\xa8\xec\x88\x98 (\xeb\xac\xb8\xec\x96\x91 & \xec\x88\xab\xec\x9e\x90 \xec\x84\xa4\xec\xa0\x95)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewSuit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewSuit;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewRank_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewRank;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACardActor_SetCard_Statics::NewProp_NewSuit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACardActor_SetCard_Statics::NewProp_NewSuit = { "NewSuit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CardActor_eventSetCard_Parms, NewSuit), Z_Construct_UEnum_Cpp_Personal_ESuit, METADATA_PARAMS(0, nullptr) }; // 3875573809
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ACardActor_SetCard_Statics::NewProp_NewRank_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ACardActor_SetCard_Statics::NewProp_NewRank = { "NewRank", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CardActor_eventSetCard_Parms, NewRank), Z_Construct_UEnum_Cpp_Personal_ERank, METADATA_PARAMS(0, nullptr) }; // 4190879128
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACardActor_SetCard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACardActor_SetCard_Statics::NewProp_NewSuit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACardActor_SetCard_Statics::NewProp_NewSuit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACardActor_SetCard_Statics::NewProp_NewRank_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACardActor_SetCard_Statics::NewProp_NewRank,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACardActor_SetCard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACardActor_SetCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACardActor, nullptr, "SetCard", nullptr, nullptr, Z_Construct_UFunction_ACardActor_SetCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACardActor_SetCard_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACardActor_SetCard_Statics::CardActor_eventSetCard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACardActor_SetCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACardActor_SetCard_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACardActor_SetCard_Statics::CardActor_eventSetCard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACardActor_SetCard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACardActor_SetCard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACardActor::execSetCard)
{
	P_GET_ENUM(ESuit,Z_Param_NewSuit);
	P_GET_ENUM(ERank,Z_Param_NewRank);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCard(ESuit(Z_Param_NewSuit),ERank(Z_Param_NewRank));
	P_NATIVE_END;
}
// End Class ACardActor Function SetCard

// Begin Class ACardActor
void ACardActor::StaticRegisterNativesACardActor()
{
	UClass* Class = ACardActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetCard", &ACardActor::execSetCard },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACardActor);
UClass* Z_Construct_UClass_ACardActor_NoRegister()
{
	return ACardActor::StaticClass();
}
struct Z_Construct_UClass_ACardActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "CardActor.h" },
		{ "ModuleRelativePath", "CardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardMesh_MetaData[] = {
		{ "Category", "Card" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb9\xb4\xeb\x93\x9c\xec\x9d\x98 \xeb\xa9\x94\xec\x8b\x9c \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8 (\xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xeb\xa9\x94\xec\x8b\x9c \xec\x84\xa4\xec\xa0\x95 \xea\xb0\x80\xeb\x8a\xa5)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb9\xb4\xeb\x93\x9c\xec\x9d\x98 \xeb\xa9\x94\xec\x8b\x9c \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8 (\xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xeb\xa9\x94\xec\x8b\x9c \xec\x84\xa4\xec\xa0\x95 \xea\xb0\x80\xeb\x8a\xa5)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardBack_MetaData[] = {
		{ "Category", "Card" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BaseMaterial_MetaData[] = {
		{ "Category", "Card" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xec\x84\xa4\xec\xa0\x95 \xea\xb0\x80\xeb\x8a\xa5\xed\x95\x9c \xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc (\xeb\x8f\x99\xec\xa0\x81 \xeb\xb3\x80\xea\xb2\xbd \xea\xb0\x80\xeb\x8a\xa5)\n" },
#endif
		{ "ModuleRelativePath", "CardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xec\x84\xa4\xec\xa0\x95 \xea\xb0\x80\xeb\x8a\xa5\xed\x95\x9c \xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc (\xeb\x8f\x99\xec\xa0\x81 \xeb\xb3\x80\xea\xb2\xbd \xea\xb0\x80\xeb\x8a\xa5)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardMaterial_MetaData[] = {
		{ "Category", "Card" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\x8f\x99\xec\xa0\x81 \xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc \xec\x9d\xb8\xec\x8a\xa4\xed\x84\xb4\xec\x8a\xa4 (\xed\x85\x8d\xec\x8a\xa4\xec\xb2\x98 \xeb\xb3\x80\xea\xb2\xbd \xea\xb0\x80\xeb\x8a\xa5)\n" },
#endif
		{ "ModuleRelativePath", "CardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x8f\x99\xec\xa0\x81 \xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc \xec\x9d\xb8\xec\x8a\xa4\xed\x84\xb4\xec\x8a\xa4 (\xed\x85\x8d\xec\x8a\xa4\xec\xb2\x98 \xeb\xb3\x80\xea\xb2\xbd \xea\xb0\x80\xeb\x8a\xa5)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Suit_MetaData[] = {
		{ "Category", "Card" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb9\xb4\xeb\x93\x9c \xec\xa0\x95\xeb\xb3\xb4\n" },
#endif
		{ "ModuleRelativePath", "CardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb9\xb4\xeb\x93\x9c \xec\xa0\x95\xeb\xb3\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rank_MetaData[] = {
		{ "Category", "Card" },
		{ "ModuleRelativePath", "CardActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CardMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CardBack;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BaseMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CardMaterial;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Suit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Suit;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Rank_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Rank;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACardActor_SetCard, "SetCard" }, // 2759751780
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACardActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACardActor_Statics::NewProp_CardMesh = { "CardMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACardActor, CardMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardMesh_MetaData), NewProp_CardMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACardActor_Statics::NewProp_CardBack = { "CardBack", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACardActor, CardBack), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardBack_MetaData), NewProp_CardBack_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACardActor_Statics::NewProp_BaseMaterial = { "BaseMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACardActor, BaseMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BaseMaterial_MetaData), NewProp_BaseMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACardActor_Statics::NewProp_CardMaterial = { "CardMaterial", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACardActor, CardMaterial), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardMaterial_MetaData), NewProp_CardMaterial_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACardActor_Statics::NewProp_Suit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACardActor_Statics::NewProp_Suit = { "Suit", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACardActor, Suit), Z_Construct_UEnum_Cpp_Personal_ESuit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Suit_MetaData), NewProp_Suit_MetaData) }; // 3875573809
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ACardActor_Statics::NewProp_Rank_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ACardActor_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACardActor, Rank), Z_Construct_UEnum_Cpp_Personal_ERank, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rank_MetaData), NewProp_Rank_MetaData) }; // 4190879128
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACardActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardActor_Statics::NewProp_CardMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardActor_Statics::NewProp_CardBack,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardActor_Statics::NewProp_BaseMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardActor_Statics::NewProp_CardMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardActor_Statics::NewProp_Suit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardActor_Statics::NewProp_Suit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardActor_Statics::NewProp_Rank_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardActor_Statics::NewProp_Rank,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACardActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACardActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Cpp_Personal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACardActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACardActor_Statics::ClassParams = {
	&ACardActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACardActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACardActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACardActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ACardActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACardActor()
{
	if (!Z_Registration_Info_UClass_ACardActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACardActor.OuterSingleton, Z_Construct_UClass_ACardActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACardActor.OuterSingleton;
}
template<> CPP_PERSONAL_API UClass* StaticClass<ACardActor>()
{
	return ACardActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACardActor);
ACardActor::~ACardActor() {}
// End Class ACardActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_CardActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACardActor, ACardActor::StaticClass, TEXT("ACardActor"), &Z_Registration_Info_UClass_ACardActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACardActor), 846625605U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_CardActor_h_1628072542(TEXT("/Script/Cpp_Personal"),
	Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_CardActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_CardActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
