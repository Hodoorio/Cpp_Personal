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
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Cpp_Personal();
// End Cross Module References

// Begin Class ATableActor Function SpawnCard
struct Z_Construct_UFunction_ATableActor_SpawnCard_Statics
{
	struct TableActor_eventSpawnCard_Parms
	{
		UCard* NewCard;
		bool bIsPlayer;
		int32 CardIndex;
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
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATableActor_SpawnCard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATableActor_SpawnCard_Statics::NewProp_NewCard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATableActor_SpawnCard_Statics::NewProp_bIsPlayer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATableActor_SpawnCard_Statics::NewProp_CardIndex,
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
	P_THIS->SpawnCard(Z_Param_NewCard,Z_Param_bIsPlayer,Z_Param_CardIndex);
	P_NATIVE_END;
}
// End Class ATableActor Function SpawnCard

// Begin Class ATableActor
void ATableActor::StaticRegisterNativesATableActor()
{
	UClass* Class = ATableActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardActor_MetaData[] = {
		{ "Category", "Card" },
		{ "ModuleRelativePath", "TableActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCardArea;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DealerCardArea;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CardActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATableActor_SpawnCard, "SpawnCard" }, // 1112702171
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATableActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATableActor_Statics::NewProp_PlayerCardArea = { "PlayerCardArea", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATableActor, PlayerCardArea), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCardArea_MetaData), NewProp_PlayerCardArea_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATableActor_Statics::NewProp_DealerCardArea = { "DealerCardArea", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATableActor, DealerCardArea), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DealerCardArea_MetaData), NewProp_DealerCardArea_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATableActor_Statics::NewProp_CardActor = { "CardActor", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATableActor, CardActor), Z_Construct_UClass_ACardActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardActor_MetaData), NewProp_CardActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATableActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATableActor_Statics::NewProp_PlayerCardArea,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATableActor_Statics::NewProp_DealerCardArea,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATableActor_Statics::NewProp_CardActor,
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
		{ Z_Construct_UClass_ATableActor, ATableActor::StaticClass, TEXT("ATableActor"), &Z_Registration_Info_UClass_ATableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATableActor), 2148187188U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_TableActor_h_3610876785(TEXT("/Script/Cpp_Personal"),
	Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_TableActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_TableActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
