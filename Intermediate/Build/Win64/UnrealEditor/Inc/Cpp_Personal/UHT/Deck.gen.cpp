// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cpp_Personal/Deck.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeck() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
CPP_PERSONAL_API UClass* Z_Construct_UClass_UCard_NoRegister();
CPP_PERSONAL_API UClass* Z_Construct_UClass_UDeck();
CPP_PERSONAL_API UClass* Z_Construct_UClass_UDeck_NoRegister();
UPackage* Z_Construct_UPackage__Script_Cpp_Personal();
// End Cross Module References

// Begin Class UDeck Function DrawCard
struct Z_Construct_UFunction_UDeck_DrawCard_Statics
{
	struct Deck_eventDrawCard_Parms
	{
		UCard* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deck" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb9\xb4\xeb\x93\x9c \xeb\xbd\x91\xea\xb8\xb0\n" },
#endif
		{ "ModuleRelativePath", "Deck.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb9\xb4\xeb\x93\x9c \xeb\xbd\x91\xea\xb8\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDeck_DrawCard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Deck_eventDrawCard_Parms, ReturnValue), Z_Construct_UClass_UCard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDeck_DrawCard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDeck_DrawCard_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UDeck_DrawCard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeck_DrawCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeck, nullptr, "DrawCard", nullptr, nullptr, Z_Construct_UFunction_UDeck_DrawCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDeck_DrawCard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UDeck_DrawCard_Statics::Deck_eventDrawCard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDeck_DrawCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDeck_DrawCard_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UDeck_DrawCard_Statics::Deck_eventDrawCard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UDeck_DrawCard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDeck_DrawCard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDeck::execDrawCard)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCard**)Z_Param__Result=P_THIS->DrawCard();
	P_NATIVE_END;
}
// End Class UDeck Function DrawCard

// Begin Class UDeck Function InitializeDeck
struct Z_Construct_UFunction_UDeck_InitializeDeck_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deck" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\x8d\xb1 \xec\xb4\x88\xea\xb8\xb0\xed\x99\x94 (52\xec\x9e\xa5 \xec\x83\x9d\xec\x84\xb1)\n" },
#endif
		{ "ModuleRelativePath", "Deck.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x8d\xb1 \xec\xb4\x88\xea\xb8\xb0\xed\x99\x94 (52\xec\x9e\xa5 \xec\x83\x9d\xec\x84\xb1)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeck_InitializeDeck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeck, nullptr, "InitializeDeck", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDeck_InitializeDeck_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDeck_InitializeDeck_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDeck_InitializeDeck()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDeck_InitializeDeck_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDeck::execInitializeDeck)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeDeck();
	P_NATIVE_END;
}
// End Class UDeck Function InitializeDeck

// Begin Class UDeck Function ShuffleDeck
struct Z_Construct_UFunction_UDeck_ShuffleDeck_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Deck" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb9\xb4\xeb\x93\x9c \xec\x84\x9e\xea\xb8\xb0\n" },
#endif
		{ "ModuleRelativePath", "Deck.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb9\xb4\xeb\x93\x9c \xec\x84\x9e\xea\xb8\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UDeck_ShuffleDeck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDeck, nullptr, "ShuffleDeck", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UDeck_ShuffleDeck_Statics::Function_MetaDataParams), Z_Construct_UFunction_UDeck_ShuffleDeck_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UDeck_ShuffleDeck()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UDeck_ShuffleDeck_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UDeck::execShuffleDeck)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShuffleDeck();
	P_NATIVE_END;
}
// End Class UDeck Function ShuffleDeck

// Begin Class UDeck
void UDeck::StaticRegisterNativesUDeck()
{
	UClass* Class = UDeck::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DrawCard", &UDeck::execDrawCard },
		{ "InitializeDeck", &UDeck::execInitializeDeck },
		{ "ShuffleDeck", &UDeck::execShuffleDeck },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDeck);
UClass* Z_Construct_UClass_UDeck_NoRegister()
{
	return UDeck::StaticClass();
}
struct Z_Construct_UClass_UDeck_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Deck.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Deck.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cards_MetaData[] = {
		{ "Category", "Deck" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\x8d\xb1\xec\x97\x90 \xeb\x93\xa4\xec\x96\xb4\xec\x9e\x88\xeb\x8a\x94 \xec\xb9\xb4\xeb\x93\x9c \xeb\xa6\xac\xec\x8a\xa4\xed\x8a\xb8\n" },
#endif
		{ "ModuleRelativePath", "Deck.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x8d\xb1\xec\x97\x90 \xeb\x93\xa4\xec\x96\xb4\xec\x9e\x88\xeb\x8a\x94 \xec\xb9\xb4\xeb\x93\x9c \xeb\xa6\xac\xec\x8a\xa4\xed\x8a\xb8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Cards_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Cards;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UDeck_DrawCard, "DrawCard" }, // 218555451
		{ &Z_Construct_UFunction_UDeck_InitializeDeck, "InitializeDeck" }, // 3698955152
		{ &Z_Construct_UFunction_UDeck_ShuffleDeck, "ShuffleDeck" }, // 3763718107
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeck>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UDeck_Statics::NewProp_Cards_Inner = { "Cards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDeck_Statics::NewProp_Cards = { "Cards", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UDeck, Cards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cards_MetaData), NewProp_Cards_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeck_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeck_Statics::NewProp_Cards_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeck_Statics::NewProp_Cards,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeck_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UDeck_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Cpp_Personal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDeck_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDeck_Statics::ClassParams = {
	&UDeck::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UDeck_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UDeck_Statics::PropPointers),
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDeck_Statics::Class_MetaDataParams), Z_Construct_UClass_UDeck_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDeck()
{
	if (!Z_Registration_Info_UClass_UDeck.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDeck.OuterSingleton, Z_Construct_UClass_UDeck_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDeck.OuterSingleton;
}
template<> CPP_PERSONAL_API UClass* StaticClass<UDeck>()
{
	return UDeck::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDeck);
UDeck::~UDeck() {}
// End Class UDeck

// Begin Registration
struct Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_Deck_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDeck, UDeck::StaticClass, TEXT("UDeck"), &Z_Registration_Info_UClass_UDeck, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDeck), 81003634U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_Deck_h_1224015677(TEXT("/Script/Cpp_Personal"),
	Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_Deck_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_Deck_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
