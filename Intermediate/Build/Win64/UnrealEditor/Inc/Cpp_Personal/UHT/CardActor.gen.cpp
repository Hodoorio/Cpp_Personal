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
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_Cpp_Personal();
// End Cross Module References

// Begin Class ACardActor Function SetFaceUp
struct Z_Construct_UFunction_ACardActor_SetFaceUp_Statics
{
	struct CardActor_eventSetFaceUp_Parms
	{
		bool bIsFaceUp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Card" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x9c\x85 \xec\xb9\xb4\xeb\x93\x9c \xec\x95\x9e/\xeb\x92\xb7\xeb\xa9\xb4 \xec\x84\xa4\xec\xa0\x95 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "CardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x9c\x85 \xec\xb9\xb4\xeb\x93\x9c \xec\x95\x9e/\xeb\x92\xb7\xeb\xa9\xb4 \xec\x84\xa4\xec\xa0\x95 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIsFaceUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsFaceUp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ACardActor_SetFaceUp_Statics::NewProp_bIsFaceUp_SetBit(void* Obj)
{
	((CardActor_eventSetFaceUp_Parms*)Obj)->bIsFaceUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACardActor_SetFaceUp_Statics::NewProp_bIsFaceUp = { "bIsFaceUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(CardActor_eventSetFaceUp_Parms), &Z_Construct_UFunction_ACardActor_SetFaceUp_Statics::NewProp_bIsFaceUp_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACardActor_SetFaceUp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACardActor_SetFaceUp_Statics::NewProp_bIsFaceUp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACardActor_SetFaceUp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACardActor_SetFaceUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACardActor, nullptr, "SetFaceUp", nullptr, nullptr, Z_Construct_UFunction_ACardActor_SetFaceUp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACardActor_SetFaceUp_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACardActor_SetFaceUp_Statics::CardActor_eventSetFaceUp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACardActor_SetFaceUp_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACardActor_SetFaceUp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACardActor_SetFaceUp_Statics::CardActor_eventSetFaceUp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACardActor_SetFaceUp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACardActor_SetFaceUp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACardActor::execSetFaceUp)
{
	P_GET_UBOOL(Z_Param_bIsFaceUp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFaceUp(Z_Param_bIsFaceUp);
	P_NATIVE_END;
}
// End Class ACardActor Function SetFaceUp

// Begin Class ACardActor
void ACardActor::StaticRegisterNativesACardActor()
{
	UClass* Class = ACardActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetFaceUp", &ACardActor::execSetFaceUp },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardDataTable_MetaData[] = {
		{ "Category", "Card" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x9c\x85 \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0 \xed\x85\x8c\xec\x9d\xb4\xeb\xb8\x94 \xec\xb0\xb8\xec\xa1\xb0\n" },
#endif
		{ "ModuleRelativePath", "CardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x9c\x85 \xeb\x8d\xb0\xec\x9d\xb4\xed\x84\xb0 \xed\x85\x8c\xec\x9d\xb4\xeb\xb8\x94 \xec\xb0\xb8\xec\xa1\xb0" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardMesh_MetaData[] = {
		{ "Category", "Card" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x9c\x85 \xec\xb9\xb4\xeb\x93\x9c \xeb\xa9\x94\xec\x8b\x9c \xeb\xb0\x8f \xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x9c\x85 \xec\xb9\xb4\xeb\x93\x9c \xeb\xa9\x94\xec\x8b\x9c \xeb\xb0\x8f \xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FaceMaterial_MetaData[] = {
		{ "Category", "Card" },
		{ "ModuleRelativePath", "CardActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackMaterial_MetaData[] = {
		{ "Category", "Card" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb9\xb4\xeb\x93\x9c \xec\x95\x9e\xeb\xa9\xb4 \xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc\n" },
#endif
		{ "ModuleRelativePath", "CardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb9\xb4\xeb\x93\x9c \xec\x95\x9e\xeb\xa9\xb4 \xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MID_MetaData[] = {
		{ "Category", "Card" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb9\xb4\xeb\x93\x9c \xeb\x92\xb7\xeb\xa9\xb4 \xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc\n" },
#endif
		{ "ModuleRelativePath", "CardActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb9\xb4\xeb\x93\x9c \xeb\x92\xb7\xeb\xa9\xb4 \xeb\xa8\xb8\xed\x8b\xb0\xeb\xa6\xac\xec\x96\xbc" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CardDataTable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CardMesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FaceMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BackMaterial;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACardActor_SetFaceUp, "SetFaceUp" }, // 2777368398
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACardActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACardActor_Statics::NewProp_CardDataTable = { "CardDataTable", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACardActor, CardDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardDataTable_MetaData), NewProp_CardDataTable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACardActor_Statics::NewProp_CardMesh = { "CardMesh", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACardActor, CardMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardMesh_MetaData), NewProp_CardMesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACardActor_Statics::NewProp_FaceMaterial = { "FaceMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACardActor, FaceMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FaceMaterial_MetaData), NewProp_FaceMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACardActor_Statics::NewProp_BackMaterial = { "BackMaterial", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACardActor, BackMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackMaterial_MetaData), NewProp_BackMaterial_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACardActor_Statics::NewProp_MID = { "MID", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACardActor, MID), Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MID_MetaData), NewProp_MID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACardActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardActor_Statics::NewProp_CardDataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardActor_Statics::NewProp_CardMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardActor_Statics::NewProp_FaceMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardActor_Statics::NewProp_BackMaterial,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACardActor_Statics::NewProp_MID,
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
		{ Z_Construct_UClass_ACardActor, ACardActor::StaticClass, TEXT("ACardActor"), &Z_Registration_Info_UClass_ACardActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACardActor), 1537988403U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_CardActor_h_151439946(TEXT("/Script/Cpp_Personal"),
	Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_CardActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_CardActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
