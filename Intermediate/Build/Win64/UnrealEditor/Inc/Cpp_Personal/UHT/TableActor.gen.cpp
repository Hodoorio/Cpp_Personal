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
CPP_PERSONAL_API UClass* Z_Construct_UClass_ATableActor();
CPP_PERSONAL_API UClass* Z_Construct_UClass_ATableActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Cpp_Personal();
// End Cross Module References

// Begin Class ATableActor
void ATableActor::StaticRegisterNativesATableActor()
{
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
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x85\x8c\xec\x9d\xb4\xeb\xb8\x94 \xeb\xa9\x94\xec\x8b\x9c\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TableActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x85\x8c\xec\x9d\xb4\xeb\xb8\x94 \xeb\xa9\x94\xec\x8b\x9c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerCardArea_MetaData[] = {
		{ "Category", "Table" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xec\xb9\xb4\xeb\x93\x9c\xea\xb0\x80 \xeb\x86\x93\xec\x9d\xbc \xec\x98\x81\xec\x97\xad\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TableActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xec\xb9\xb4\xeb\x93\x9c\xea\xb0\x80 \xeb\x86\x93\xec\x9d\xbc \xec\x98\x81\xec\x97\xad" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DealerCardArea_MetaData[] = {
		{ "Category", "Table" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\x94\x9c\xeb\x9f\xac \xec\xb9\xb4\xeb\x93\x9c\xea\xb0\x80 \xeb\x86\x93\xec\x9d\xbc \xec\x98\x81\xec\x97\xad\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "TableActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x94\x9c\xeb\x9f\xac \xec\xb9\xb4\xeb\x93\x9c\xea\xb0\x80 \xeb\x86\x93\xec\x9d\xbc \xec\x98\x81\xec\x97\xad" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TableMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerCardArea;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DealerCardArea;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATableActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATableActor_Statics::NewProp_TableMesh = { "TableMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATableActor, TableMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TableMesh_MetaData), NewProp_TableMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATableActor_Statics::NewProp_PlayerCardArea = { "PlayerCardArea", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATableActor, PlayerCardArea), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerCardArea_MetaData), NewProp_PlayerCardArea_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATableActor_Statics::NewProp_DealerCardArea = { "DealerCardArea", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATableActor, DealerCardArea), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DealerCardArea_MetaData), NewProp_DealerCardArea_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATableActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATableActor_Statics::NewProp_TableMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATableActor_Statics::NewProp_PlayerCardArea,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATableActor_Statics::NewProp_DealerCardArea,
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
	nullptr,
	Z_Construct_UClass_ATableActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
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
		{ Z_Construct_UClass_ATableActor, ATableActor::StaticClass, TEXT("ATableActor"), &Z_Registration_Info_UClass_ATableActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATableActor), 1922479339U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_TableActor_h_746730420(TEXT("/Script/Cpp_Personal"),
	Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_TableActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_TableActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
