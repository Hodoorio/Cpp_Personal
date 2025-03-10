// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cpp_Personal/PlayerCameraActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCameraActor() {}

// Begin Cross Module References
CPP_PERSONAL_API UClass* Z_Construct_UClass_APlayerCameraActor();
CPP_PERSONAL_API UClass* Z_Construct_UClass_APlayerCameraActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Cpp_Personal();
// End Cross Module References

// Begin Class APlayerCameraActor
void APlayerCameraActor::StaticRegisterNativesAPlayerCameraActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerCameraActor);
UClass* Z_Construct_UClass_APlayerCameraActor_NoRegister()
{
	return APlayerCameraActor::StaticClass();
}
struct Z_Construct_UClass_APlayerCameraActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PlayerCameraActor.h" },
		{ "ModuleRelativePath", "PlayerCameraActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComponent_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb9\xb4\xeb\xa9\x94\xeb\x9d\xbc \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerCameraActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb9\xb4\xeb\xa9\x94\xeb\x9d\xbc \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCameraActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerCameraActor_Statics::NewProp_CameraComponent = { "CameraComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerCameraActor, CameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComponent_MetaData), NewProp_CameraComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerCameraActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerCameraActor_Statics::NewProp_CameraComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerCameraActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Cpp_Personal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerCameraActor_Statics::ClassParams = {
	&APlayerCameraActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APlayerCameraActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerCameraActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerCameraActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerCameraActor()
{
	if (!Z_Registration_Info_UClass_APlayerCameraActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerCameraActor.OuterSingleton, Z_Construct_UClass_APlayerCameraActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerCameraActor.OuterSingleton;
}
template<> CPP_PERSONAL_API UClass* StaticClass<APlayerCameraActor>()
{
	return APlayerCameraActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCameraActor);
APlayerCameraActor::~APlayerCameraActor() {}
// End Class APlayerCameraActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_PlayerCameraActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerCameraActor, APlayerCameraActor::StaticClass, TEXT("APlayerCameraActor"), &Z_Registration_Info_UClass_APlayerCameraActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerCameraActor), 2068682144U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_PlayerCameraActor_h_2855323465(TEXT("/Script/Cpp_Personal"),
	Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_PlayerCameraActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_PlayerCameraActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
