// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cpp_Personal/Gamemode/GameOverGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameOverGameMode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
CPP_PERSONAL_API UClass* Z_Construct_UClass_AGameOverGameMode();
CPP_PERSONAL_API UClass* Z_Construct_UClass_AGameOverGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_Cpp_Personal();
// End Cross Module References

// Begin Class AGameOverGameMode
void AGameOverGameMode::StaticRegisterNativesAGameOverGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGameOverGameMode);
UClass* Z_Construct_UClass_AGameOverGameMode_NoRegister()
{
	return AGameOverGameMode::StaticClass();
}
struct Z_Construct_UClass_AGameOverGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Gamemode/GameOverGameMode.h" },
		{ "ModuleRelativePath", "Gamemode/GameOverGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameOverWidgetClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xec\x84\xa4\xec\xa0\x95\xed\x95\xa0 \xec\x82\xac\xec\x9a\xa9\xec\x9e\x90 \xec\x9c\x84\xec\xa0\xaf \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4\n" },
#endif
		{ "ModuleRelativePath", "Gamemode/GameOverGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xec\x84\xa4\xec\xa0\x95\xed\x95\xa0 \xec\x82\xac\xec\x9a\xa9\xec\x9e\x90 \xec\x9c\x84\xec\xa0\xaf \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameOverWidget_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x83\x9d\xec\x84\xb1\xeb\x90\x9c \xec\x82\xac\xec\x9a\xa9\xec\x9e\x90 \xec\x9c\x84\xec\xa0\xaf\xec\x9d\x98 \xec\xb0\xb8\xec\xa1\xb0\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Gamemode/GameOverGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x83\x9d\xec\x84\xb1\xeb\x90\x9c \xec\x82\xac\xec\x9a\xa9\xec\x9e\x90 \xec\x9c\x84\xec\xa0\xaf\xec\x9d\x98 \xec\xb0\xb8\xec\xa1\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_GameOverWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_GameOverWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGameOverGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGameOverGameMode_Statics::NewProp_GameOverWidgetClass = { "GameOverWidgetClass", nullptr, (EPropertyFlags)0x0024080000010005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameOverGameMode, GameOverWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameOverWidgetClass_MetaData), NewProp_GameOverWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGameOverGameMode_Statics::NewProp_GameOverWidget = { "GameOverWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AGameOverGameMode, GameOverWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameOverWidget_MetaData), NewProp_GameOverWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGameOverGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameOverGameMode_Statics::NewProp_GameOverWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGameOverGameMode_Statics::NewProp_GameOverWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameOverGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AGameOverGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Cpp_Personal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGameOverGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGameOverGameMode_Statics::ClassParams = {
	&AGameOverGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AGameOverGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AGameOverGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGameOverGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGameOverGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGameOverGameMode()
{
	if (!Z_Registration_Info_UClass_AGameOverGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGameOverGameMode.OuterSingleton, Z_Construct_UClass_AGameOverGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGameOverGameMode.OuterSingleton;
}
template<> CPP_PERSONAL_API UClass* StaticClass<AGameOverGameMode>()
{
	return AGameOverGameMode::StaticClass();
}
AGameOverGameMode::AGameOverGameMode(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGameOverGameMode);
AGameOverGameMode::~AGameOverGameMode() {}
// End Class AGameOverGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_Gamemode_GameOverGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGameOverGameMode, AGameOverGameMode::StaticClass, TEXT("AGameOverGameMode"), &Z_Registration_Info_UClass_AGameOverGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGameOverGameMode), 3723316350U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_Gamemode_GameOverGameMode_h_4084131324(TEXT("/Script/Cpp_Personal"),
	Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_Gamemode_GameOverGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_Gamemode_GameOverGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
