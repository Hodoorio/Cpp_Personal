// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cpp_Personal/TableActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTableActor() {}

// Begin Cross Module References
CPP_PERSONAL_API UClass* Z_Construct_UClass_ACardActor_NoRegister();
CPP_PERSONAL_API UClass* Z_Construct_UClass_ATableActor();
CPP_PERSONAL_API UClass* Z_Construct_UClass_ATableActor_NoRegister();
CPP_PERSONAL_API UClass* Z_Construct_UClass_UCard_NoRegister();
CPP_PERSONAL_API UClass* Z_Construct_UClass_UCardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Cpp_Personal();
// End Cross Module References

// Begin Class ATableActor Function ClearTableCards
struct Z_Construct_UFunction_ATableActor_ClearTableCards_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Table" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xf0\x9f\x8e\xb2 \xed\x85\x8c\xec\x9d\xb4\xeb\xb8\x94 \xec\xb4\x88\xea\xb8\xb0\xed\x99\x94 (\xec\xb9\xb4\xeb\x93\x9c \xec\x95\xa1\xed\x84\xb0 \xec\xa0\x9c\xea\xb1\xb0)\n" },
#endif
		{ "ModuleRelativePath", "TableActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xf0\x9f\x8e\xb2 \xed\x85\x8c\xec\x9d\xb4\xeb\xb8\x94 \xec\xb4\x88\xea\xb8\xb0\xed\x99\x94 (\xec\xb9\xb4\xeb\x93\x9c \xec\x95\xa1\xed\x84\xb0 \xec\xa0\x9c\xea\xb1\xb0)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATableActor_ClearTableCards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATableActor, nullptr, "ClearTableCards", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATableActor_ClearTableCards_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATableActor_ClearTableCards_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATableActor_ClearTableCards()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATableActor_ClearTableCards_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATableActor::execClearTableCards)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearTableCards();
	P_NATIVE_END;
}
// End Class ATableActor Function ClearTableCards

// Begin Class ATableActor Function FindCardActor
struct Z_Construct_UFunction_ATableActor_FindCardActor_Statics
{
	struct TableActor_eventFindCardActor_Parms
	{
		const UCard* Card;
		ACardActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Cards" },
		{ "ModuleRelativePath", "TableActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Card_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Card;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATableActor_FindCardActor_Statics::NewProp_Card = { "Card", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TableActor_eventFindCardActor_Parms, Card), Z_Construct_UClass_UCard_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Card_MetaData), NewProp_Card_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATableActor_FindCardActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TableActor_eventFindCardActor_Parms, ReturnValue), Z_Construct_UClass_ACardActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATableActor_FindCardActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATableActor_FindCardActor_Statics::NewProp_Card,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATableActor_FindCardActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATableActor_FindCardActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATableActor_FindCardActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATableActor, nullptr, "FindCardActor", nullptr, nullptr, Z_Construct_UFunction_ATableActor_FindCardActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATableActor_FindCardActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATableActor_FindCardActor_Statics::TableActor_eventFindCardActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATableActor_FindCardActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATableActor_FindCardActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATableActor_FindCardActor_Statics::TableActor_eventFindCardActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATableActor_FindCardActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATableActor_FindCardActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATableActor::execFindCardActor)
{
	P_GET_OBJECT(UCard,Z_Param_Card);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACardActor**)Z_Param__Result=P_THIS->FindCardActor(Z_Param_Card);
	P_NATIVE_END;
}
// End Class ATableActor Function FindCardActor

// Begin Class ATableActor Function SpawnCard
struct Z_Construct_UFunction_ATableActor_SpawnCard_Statics
{
	struct TableActor_eventSpawnCard_Parms
	{
		UCard* NewCard;
		bool bIsPlayer;
		int32 CardIndex;
		ACardActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Table" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xf0\x9f\x94\xb9 \xec\xb9\xb4\xeb\x93\x9c \xeb\xb0\xb0\xec\xb9\x98 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "TableActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xf0\x9f\x94\xb9 \xec\xb9\xb4\xeb\x93\x9c \xeb\xb0\xb0\xec\xb9\x98 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCard;
	static void NewProp_bIsPlayer_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlayer;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CardIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATableActor_SpawnCard_Statics::NewProp_NewCard = { "NewCard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TableActor_eventSpawnCard_Parms, NewCard), Z_Construct_UClass_UCard_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ATableActor_SpawnCard_Statics::NewProp_bIsPlayer_SetBit(void* Obj)
{
	((TableActor_eventSpawnCard_Parms*)Obj)->bIsPlayer = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATableActor_SpawnCard_Statics::NewProp_bIsPlayer = { "bIsPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(TableActor_eventSpawnCard_Parms), &Z_Construct_UFunction_ATableActor_SpawnCard_Statics::NewProp_bIsPlayer_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATableActor_SpawnCard_Statics::NewProp_CardIndex = { "CardIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TableActor_eventSpawnCard_Parms, CardIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATableActor_SpawnCard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TableActor_eventSpawnCard_Parms, ReturnValue), Z_Construct_UClass_ACardActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATableActor_SpawnCard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATableActor_SpawnCard_Statics::NewProp_NewCard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATableActor_SpawnCard_Statics::NewProp_bIsPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATableActor_SpawnCard_Statics::NewProp_CardIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATableActor_SpawnCard_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATableActor_SpawnCard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATableActor_SpawnCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATableActor, nullptr, "SpawnCard", nullptr, nullptr, Z_Construct_UFunction_ATableActor_SpawnCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATableActor_SpawnCard_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATableActor_SpawnCard_Statics::TableActor_eventSpawnCard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATableActor_SpawnCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATableActor_SpawnCard_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATableActor_SpawnCard_Statics::TableActor_eventSpawnCard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATableActor_SpawnCard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATableActor_SpawnCard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATableActor::execSpawnCard)
{
	P_GET_OBJECT(UCard,Z_Param_NewCard);
	P_GET_UBOOL(Z_Param_bIsPlayer);
	P_GET_PROPERTY(FIntProperty,Z_Param_CardIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ACardActor**)Z_Param__Result=P_THIS->SpawnCard(Z_Param_NewCard,Z_Param_bIsPlayer,Z_Param_CardIndex);
	P_NATIVE_END;
}
// End Class ATableActor Function SpawnCard

// Begin Class ATableActor
void ATableActor::StaticRegisterNativesATableActor()
{
	UClass* Class = ATableActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearTableCards", &ATableActor::execClearTableCards },
		{ "FindCardActor", &ATableActor::execFindCardActor },
		{ "SpawnCard", &ATableActor::execSpawnCard },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATableActor);
UClass* Z_Construct_UClass_ATableActor_NoRegister()
{
	return ATableActor::StaticClass();
}
struct Z_Construct_UClass_ATableActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "TableActor.h" },
		{ "ModuleRelativePath", "TableActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TableMesh_MetaData[] = {
		{ "Category", "Table" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TableActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCardArea_MetaData[] = {
		{ "Category", "Table" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xf0\x9f\x8e\xb2 \xec\xb9\xb4\xeb\x93\x9c \xeb\xb0\xb0\xec\xb9\x98 \xec\x98\x81\xec\x97\xad (\xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 & \xeb\x94\x9c\xeb\x9f\xac)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TableActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xf0\x9f\x8e\xb2 \xec\xb9\xb4\xeb\x93\x9c \xeb\xb0\xb0\xec\xb9\x98 \xec\x98\x81\xec\x97\xad (\xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 & \xeb\x94\x9c\xeb\x9f\xac)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DealerCardArea_MetaData[] = {
		{ "Category", "Table" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TableActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardComponent_MetaData[] = {
		{ "Category", "Card" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xf0\x9f\x8e\xb2 \xec\xb9\xb4\xeb\x93\x9c \xea\xb4\x80\xeb\xa6\xac \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TableActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xf0\x9f\x8e\xb2 \xec\xb9\xb4\xeb\x93\x9c \xea\xb4\x80\xeb\xa6\xac \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardActors_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x85\x8c\xec\x9d\xb4\xeb\xb8\x94 \xec\x9c\x84\xec\x97\x90 \xec\x9e\x88\xeb\x8a\x94 \xec\xb9\xb4\xeb\x93\x9c \xec\x95\xa1\xed\x84\xb0 \xeb\xaa\xa9\xeb\xa1\x9d\n" },
#endif
		{ "ModuleRelativePath", "TableActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x85\x8c\xec\x9d\xb4\xeb\xb8\x94 \xec\x9c\x84\xec\x97\x90 \xec\x9e\x88\xeb\x8a\x94 \xec\xb9\xb4\xeb\x93\x9c \xec\x95\xa1\xed\x84\xb0 \xeb\xaa\xa9\xeb\xa1\x9d" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TableMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCardArea;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DealerCardArea;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CardComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CardActors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_CardActors;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATableActor_ClearTableCards, "ClearTableCards" }, // 3610400097
		{ &Z_Construct_UFunction_ATableActor_FindCardActor, "FindCardActor" }, // 2938523235
		{ &Z_Construct_UFunction_ATableActor_SpawnCard, "SpawnCard" }, // 2971779095
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATableActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATableActor_Statics::NewProp_TableMesh = { "TableMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATableActor, TableMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TableMesh_MetaData), NewProp_TableMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATableActor_Statics::NewProp_PlayerCardArea = { "PlayerCardArea", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATableActor, PlayerCardArea), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCardArea_MetaData), NewProp_PlayerCardArea_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATableActor_Statics::NewProp_DealerCardArea = { "DealerCardArea", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATableActor, DealerCardArea), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DealerCardArea_MetaData), NewProp_DealerCardArea_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATableActor_Statics::NewProp_CardComponent = { "CardComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATableActor, CardComponent), Z_Construct_UClass_UCardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardComponent_MetaData), NewProp_CardComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATableActor_Statics::NewProp_CardActors_Inner = { "CardActors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_ACardActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ATableActor_Statics::NewProp_CardActors = { "CardActors", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATableActor, CardActors), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardActors_MetaData), NewProp_CardActors_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATableActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATableActor_Statics::NewProp_TableMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATableActor_Statics::NewProp_PlayerCardArea,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATableActor_Statics::NewProp_DealerCardArea,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATableActor_Statics::NewProp_CardComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATableActor_Statics::NewProp_CardActors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATableActor_Statics::NewProp_CardActors,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATableActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATableActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Cpp_Personal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATableActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATableActor_Statics::ClassParams = {
	&ATableActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATableActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATableActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATableActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ATableActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATableActor()
{
	if (!Z_Registration_Info_UClass_ATableActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATableActor.OuterSingleton, Z_Construct_UClass_ATableActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATableActor.OuterSingleton;
}
template<> CPP_PERSONAL_API UClass* StaticClass<ATableActor>()
{
	return ATableActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATableActor);
ATableActor::~ATableActor() {}
// End Class ATableActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_TableActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATableActor, ATableActor::StaticClass, TEXT("ATableActor"), &Z_Registration_Info_UClass_ATableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATableActor), 1569173193U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_TableActor_h_1368179164(TEXT("/Script/Cpp_Personal"),
	Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_TableActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_TableActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
