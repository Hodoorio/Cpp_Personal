// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cpp_Personal/UI/GameOverHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameOverHUD() {}

// Begin Cross Module References
CPP_PERSONAL_API UClass* Z_Construct_UClass_UGameOverHUD();
CPP_PERSONAL_API UClass* Z_Construct_UClass_UGameOverHUD_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Cpp_Personal();
// End Cross Module References

// Begin Class UGameOverHUD Function OnExitClicked
struct Z_Construct_UFunction_UGameOverHUD_OnExitClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/GameOverHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameOverHUD_OnExitClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameOverHUD, nullptr, "OnExitClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameOverHUD_OnExitClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameOverHUD_OnExitClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGameOverHUD_OnExitClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameOverHUD_OnExitClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameOverHUD::execOnExitClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnExitClicked();
	P_NATIVE_END;
}
// End Class UGameOverHUD Function OnExitClicked

// Begin Class UGameOverHUD Function OnRestartClicked
struct Z_Construct_UFunction_UGameOverHUD_OnRestartClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xb2\x84\xed\x8a\xbc \xed\x81\xb4\xeb\xa6\xad \xed\x95\xb8\xeb\x93\xa4\xeb\x9f\xac\n" },
#endif
		{ "ModuleRelativePath", "UI/GameOverHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb2\x84\xed\x8a\xbc \xed\x81\xb4\xeb\xa6\xad \xed\x95\xb8\xeb\x93\xa4\xeb\x9f\xac" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameOverHUD_OnRestartClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameOverHUD, nullptr, "OnRestartClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UGameOverHUD_OnRestartClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UGameOverHUD_OnRestartClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UGameOverHUD_OnRestartClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UGameOverHUD_OnRestartClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UGameOverHUD::execOnRestartClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRestartClicked();
	P_NATIVE_END;
}
// End Class UGameOverHUD Function OnRestartClicked

// Begin Class UGameOverHUD
void UGameOverHUD::StaticRegisterNativesUGameOverHUD()
{
	UClass* Class = UGameOverHUD::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnExitClicked", &UGameOverHUD::execOnExitClicked },
		{ "OnRestartClicked", &UGameOverHUD::execOnRestartClicked },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGameOverHUD);
UClass* Z_Construct_UClass_UGameOverHUD_NoRegister()
{
	return UGameOverHUD::StaticClass();
}
struct Z_Construct_UClass_UGameOverHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "UI/GameOverHUD.h" },
		{ "ModuleRelativePath", "UI/GameOverHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestartLevelName_MetaData[] = {
		{ "Category", "Level" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xec\x84\xa4\xec\xa0\x95\xed\x95\xa0 \xeb\xa0\x88\xeb\xb2\xa8 \xec\x9d\xb4\xeb\xa6\x84\n" },
#endif
		{ "ModuleRelativePath", "UI/GameOverHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xec\x84\xa4\xec\xa0\x95\xed\x95\xa0 \xeb\xa0\x88\xeb\xb2\xa8 \xec\x9d\xb4\xeb\xa6\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BTN_ReStart_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xb2\x84\xed\x8a\xbc \xec\xb0\xb8\xec\xa1\xb0\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/GameOverHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb2\x84\xed\x8a\xbc \xec\xb0\xb8\xec\xa1\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BTN_Exit_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/GameOverHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_RestartLevelName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BTN_ReStart;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BTN_Exit;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameOverHUD_OnExitClicked, "OnExitClicked" }, // 49927311
		{ &Z_Construct_UFunction_UGameOverHUD_OnRestartClicked, "OnRestartClicked" }, // 3343822276
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameOverHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGameOverHUD_Statics::NewProp_RestartLevelName = { "RestartLevelName", nullptr, (EPropertyFlags)0x0020080000010005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameOverHUD, RestartLevelName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestartLevelName_MetaData), NewProp_RestartLevelName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameOverHUD_Statics::NewProp_BTN_ReStart = { "BTN_ReStart", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameOverHUD, BTN_ReStart), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BTN_ReStart_MetaData), NewProp_BTN_ReStart_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameOverHUD_Statics::NewProp_BTN_Exit = { "BTN_Exit", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UGameOverHUD, BTN_Exit), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BTN_Exit_MetaData), NewProp_BTN_Exit_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameOverHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameOverHUD_Statics::NewProp_RestartLevelName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameOverHUD_Statics::NewProp_BTN_ReStart,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameOverHUD_Statics::NewProp_BTN_Exit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UGameOverHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Cpp_Personal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGameOverHUD_Statics::ClassParams = {
	&UGameOverHUD::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UGameOverHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverHUD_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGameOverHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_UGameOverHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGameOverHUD()
{
	if (!Z_Registration_Info_UClass_UGameOverHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGameOverHUD.OuterSingleton, Z_Construct_UClass_UGameOverHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGameOverHUD.OuterSingleton;
}
template<> CPP_PERSONAL_API UClass* StaticClass<UGameOverHUD>()
{
	return UGameOverHUD::StaticClass();
}
UGameOverHUD::UGameOverHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGameOverHUD);
UGameOverHUD::~UGameOverHUD() {}
// End Class UGameOverHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_UI_GameOverHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGameOverHUD, UGameOverHUD::StaticClass, TEXT("UGameOverHUD"), &Z_Registration_Info_UClass_UGameOverHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGameOverHUD), 1570671812U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_UI_GameOverHUD_h_2814548682(TEXT("/Script/Cpp_Personal"),
	Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_UI_GameOverHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_UI_GameOverHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
