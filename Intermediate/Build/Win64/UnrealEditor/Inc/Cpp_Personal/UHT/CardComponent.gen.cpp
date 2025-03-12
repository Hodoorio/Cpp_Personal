// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cpp_Personal/CardComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCardComponent() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
CPP_PERSONAL_API UClass* Z_Construct_UClass_ACardActor_NoRegister();
CPP_PERSONAL_API UClass* Z_Construct_UClass_UCardComponent();
CPP_PERSONAL_API UClass* Z_Construct_UClass_UCardComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
UPackage* Z_Construct_UPackage__Script_Cpp_Personal();
// End Cross Module References

// Begin Class UCardComponent
void UCardComponent::StaticRegisterNativesUCardComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCardComponent);
UClass* Z_Construct_UClass_UCardComponent_NoRegister()
{
	return UCardComponent::StaticClass();
}
struct Z_Construct_UClass_UCardComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "CardComponent.h" },
		{ "ModuleRelativePath", "CardComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardActor_MetaData[] = {
		{ "Category", "Card" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xf0\x9f\x8e\xb2 \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xec\x84\xa4\xec\xa0\x95\xed\x95\xa0 \xec\xb9\xb4\xeb\x93\x9c \xec\x95\xa1\xed\x84\xb0 (BP_CardActor)\n" },
#endif
		{ "ModuleRelativePath", "CardComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xf0\x9f\x8e\xb2 \xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xec\x84\xa4\xec\xa0\x95\xed\x95\xa0 \xec\xb9\xb4\xeb\x93\x9c \xec\x95\xa1\xed\x84\xb0 (BP_CardActor)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CardActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCardComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UCardComponent_Statics::NewProp_CardActor = { "CardActor", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCardComponent, CardActor), Z_Construct_UClass_UClass, Z_Construct_UClass_ACardActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardActor_MetaData), NewProp_CardActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCardComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCardComponent_Statics::NewProp_CardActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCardComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCardComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_Cpp_Personal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCardComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCardComponent_Statics::ClassParams = {
	&UCardComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UCardComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UCardComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCardComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UCardComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCardComponent()
{
	if (!Z_Registration_Info_UClass_UCardComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCardComponent.OuterSingleton, Z_Construct_UClass_UCardComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCardComponent.OuterSingleton;
}
template<> CPP_PERSONAL_API UClass* StaticClass<UCardComponent>()
{
	return UCardComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCardComponent);
UCardComponent::~UCardComponent() {}
// End Class UCardComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_CardComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCardComponent, UCardComponent::StaticClass, TEXT("UCardComponent"), &Z_Registration_Info_UClass_UCardComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCardComponent), 2290711302U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_CardComponent_h_1839850177(TEXT("/Script/Cpp_Personal"),
	Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_CardComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_CardComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
