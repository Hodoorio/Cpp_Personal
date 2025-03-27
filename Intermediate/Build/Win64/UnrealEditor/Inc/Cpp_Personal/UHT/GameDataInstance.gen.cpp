// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cpp_Personal/GameDataInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameDataInstance() {}

// Begin Cross Module References
CPP_PERSONAL_API UClass* Z_Construct_UClass_UGameDataInstance();
CPP_PERSONAL_API UClass* Z_Construct_UClass_UGameDataInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
UPackage* Z_Construct_UPackage__Script_Cpp_Personal();
// End Cross Module References

// Begin Class UGameDataInstance Function GetHighScore
struct Z_Construct_UFunction_UGameDataInstance_GetHighScore_Statics
{
	struct GameDataInstance_eventGetHighScore_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayerData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb5\x9c\xea\xb3\xa0 \xec\xa0\x90\xec\x88\x98\xeb\xa5\xbc \xeb\xb0\x98\xed\x99\x98\xed\x95\x98\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "GameDataInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb5\x9c\xea\xb3\xa0 \xec\xa0\x90\xec\x88\x98\xeb\xa5\xbc \xeb\xb0\x98\xed\x99\x98\xed\x95\x98\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameDataInstance_GetHighScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameDataInstance_eventGetHighScore_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameDataInstance_GetHighScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDataInstance_GetHighScore_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDataInstance_GetHighScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameDataInstance_GetHighScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameDataInstance, nullptr, "GetHighScore", nullptr, nullptr, Z_Construct_UFunction_UGameDataInstance_GetHighScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDataInstance_GetHighScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameDataInstance_GetHighScore_Statics::GameDataInstance_eventGetHighScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDataInstance_GetHighScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameDataInstance_GetHighScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameDataInstance_GetHighScore_Statics::GameDataInstance_eventGetHighScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameDataInstance_GetHighScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameDataInstance_GetHighScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameDataInstance::execGetHighScore)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetHighScore();
	P_NATIVE_END;
}
// End Class UGameDataInstance Function GetHighScore

// Begin Class UGameDataInstance Function SaveHighScore
struct Z_Construct_UFunction_UGameDataInstance_SaveHighScore_Statics
{
	struct GameDataInstance_eventSaveHighScore_Parms
	{
		int32 CurrentScore;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "PlayerData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb5\x9c\xea\xb3\xa0 \xec\xa0\x90\xec\x88\x98\xeb\xa5\xbc \xec\xa0\x80\xec\x9e\xa5\xed\x95\x98\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "GameDataInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb5\x9c\xea\xb3\xa0 \xec\xa0\x90\xec\x88\x98\xeb\xa5\xbc \xec\xa0\x80\xec\x9e\xa5\xed\x95\x98\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameDataInstance_SaveHighScore_Statics::NewProp_CurrentScore = { "CurrentScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(GameDataInstance_eventSaveHighScore_Parms, CurrentScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameDataInstance_SaveHighScore_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameDataInstance_SaveHighScore_Statics::NewProp_CurrentScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDataInstance_SaveHighScore_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameDataInstance_SaveHighScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameDataInstance, nullptr, "SaveHighScore", nullptr, nullptr, Z_Construct_UFunction_UGameDataInstance_SaveHighScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDataInstance_SaveHighScore_Statics::PropPointers), sizeof(Z_Construct_UFunction_UGameDataInstance_SaveHighScore_Statics::GameDataInstance_eventSaveHighScore_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameDataInstance_SaveHighScore_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameDataInstance_SaveHighScore_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UGameDataInstance_SaveHighScore_Statics::GameDataInstance_eventSaveHighScore_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UGameDataInstance_SaveHighScore()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameDataInstance_SaveHighScore_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameDataInstance::execSaveHighScore)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_CurrentScore);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveHighScore(Z_Param_CurrentScore);
	P_NATIVE_END;
}
// End Class UGameDataInstance Function SaveHighScore

// Begin Class UGameDataInstance
void UGameDataInstance::StaticRegisterNativesUGameDataInstance()
{
	UClass* Class = UGameDataInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetHighScore", &UGameDataInstance::execGetHighScore },
		{ "SaveHighScore", &UGameDataInstance::execSaveHighScore },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameDataInstance);
UClass* Z_Construct_UClass_UGameDataInstance_NoRegister()
{
	return UGameDataInstance::StaticClass();
}
struct Z_Construct_UClass_UGameDataInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "GameDataInstance.h" },
		{ "ModuleRelativePath", "GameDataInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCoins_MetaData[] = {
		{ "Category", "PlayerData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x98\x84\xec\x9e\xac \xec\xbd\x94\xec\x9d\xb8 \xea\xb0\x92\n" },
#endif
		{ "ModuleRelativePath", "GameDataInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x98\x84\xec\x9e\xac \xec\xbd\x94\xec\x9d\xb8 \xea\xb0\x92" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HighScore_MetaData[] = {
		{ "Category", "PlayerData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb5\x9c\xea\xb3\xa0 \xec\xa0\x90\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "GameDataInstance.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb5\x9c\xea\xb3\xa0 \xec\xa0\x90\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerCoins;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HighScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameDataInstance_GetHighScore, "GetHighScore" }, // 2776656482
		{ &Z_Construct_UFunction_UGameDataInstance_SaveHighScore, "SaveHighScore" }, // 700285286
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameDataInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameDataInstance_Statics::NewProp_PlayerCoins = { "PlayerCoins", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameDataInstance, PlayerCoins), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCoins_MetaData), NewProp_PlayerCoins_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UGameDataInstance_Statics::NewProp_HighScore = { "HighScore", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameDataInstance, HighScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HighScore_MetaData), NewProp_HighScore_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameDataInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameDataInstance_Statics::NewProp_PlayerCoins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameDataInstance_Statics::NewProp_HighScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameDataInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameDataInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Cpp_Personal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameDataInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameDataInstance_Statics::ClassParams = {
	&UGameDataInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGameDataInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameDataInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameDataInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameDataInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameDataInstance()
{
	if (!Z_Registration_Info_UClass_UGameDataInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameDataInstance.OuterSingleton, Z_Construct_UClass_UGameDataInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameDataInstance.OuterSingleton;
}
template<> CPP_PERSONAL_API UClass* StaticClass<UGameDataInstance>()
{
	return UGameDataInstance::StaticClass();
}
UGameDataInstance::UGameDataInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameDataInstance);
UGameDataInstance::~UGameDataInstance() {}
// End Class UGameDataInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_GameDataInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameDataInstance, UGameDataInstance::StaticClass, TEXT("UGameDataInstance"), &Z_Registration_Info_UClass_UGameDataInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameDataInstance), 815729213U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_GameDataInstance_h_3405738383(TEXT("/Script/Cpp_Personal"),
	Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_GameDataInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_GameDataInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
