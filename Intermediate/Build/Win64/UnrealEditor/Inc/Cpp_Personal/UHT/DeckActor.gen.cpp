// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cpp_Personal/Actor/DeckActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeckActor() {}

// Begin Cross Module References
CPP_PERSONAL_API UClass* Z_Construct_UClass_ADeckActor();
CPP_PERSONAL_API UClass* Z_Construct_UClass_ADeckActor_NoRegister();
CPP_PERSONAL_API UClass* Z_Construct_UClass_UCard_NoRegister();
CPP_PERSONAL_API UClass* Z_Construct_UClass_UDeck_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Cpp_Personal();
// End Cross Module References

// Begin Class ADeckActor Function DrawCard
struct Z_Construct_UFunction_ADeckActor_DrawCard_Statics
{
	struct DeckActor_eventDrawCard_Parms
	{
		UCard* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deck" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb9\xb4\xeb\x93\x9c \xed\x95\x9c \xec\x9e\xa5 \xeb\xbd\x91\xea\xb8\xb0\n" },
#endif
		{ "ModuleRelativePath", "Actor/DeckActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb9\xb4\xeb\x93\x9c \xed\x95\x9c \xec\x9e\xa5 \xeb\xbd\x91\xea\xb8\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADeckActor_DrawCard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DeckActor_eventDrawCard_Parms, ReturnValue), Z_Construct_UClass_UCard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADeckActor_DrawCard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADeckActor_DrawCard_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADeckActor_DrawCard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADeckActor_DrawCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADeckActor, nullptr, "DrawCard", nullptr, nullptr, Z_Construct_UFunction_ADeckActor_DrawCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADeckActor_DrawCard_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADeckActor_DrawCard_Statics::DeckActor_eventDrawCard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADeckActor_DrawCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADeckActor_DrawCard_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADeckActor_DrawCard_Statics::DeckActor_eventDrawCard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADeckActor_DrawCard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADeckActor_DrawCard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADeckActor::execDrawCard)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCard**)Z_Param__Result=P_THIS->DrawCard();
	P_NATIVE_END;
}
// End Class ADeckActor Function DrawCard

// Begin Class ADeckActor
void ADeckActor::StaticRegisterNativesADeckActor()
{
	UClass* Class = ADeckActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DrawCard", &ADeckActor::execDrawCard },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADeckActor);
UClass* Z_Construct_UClass_ADeckActor_NoRegister()
{
	return ADeckActor::StaticClass();
}
struct Z_Construct_UClass_ADeckActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/DeckActor.h" },
		{ "ModuleRelativePath", "Actor/DeckActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Deck_MetaData[] = {
		{ "Category", "Deck" },
		{ "ModuleRelativePath", "Actor/DeckActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Deck;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADeckActor_DrawCard, "DrawCard" }, // 1599798045
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADeckActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADeckActor_Statics::NewProp_Deck = { "Deck", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADeckActor, Deck), Z_Construct_UClass_UDeck_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Deck_MetaData), NewProp_Deck_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADeckActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADeckActor_Statics::NewProp_Deck,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADeckActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADeckActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Cpp_Personal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADeckActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADeckActor_Statics::ClassParams = {
	&ADeckActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADeckActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADeckActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADeckActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ADeckActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADeckActor()
{
	if (!Z_Registration_Info_UClass_ADeckActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADeckActor.OuterSingleton, Z_Construct_UClass_ADeckActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADeckActor.OuterSingleton;
}
template<> CPP_PERSONAL_API UClass* StaticClass<ADeckActor>()
{
	return ADeckActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADeckActor);
ADeckActor::~ADeckActor() {}
// End Class ADeckActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_Actor_DeckActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADeckActor, ADeckActor::StaticClass, TEXT("ADeckActor"), &Z_Registration_Info_UClass_ADeckActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADeckActor), 1013746321U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_Actor_DeckActor_h_1903255426(TEXT("/Script/Cpp_Personal"),
	Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_Actor_DeckActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_Actor_DeckActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
