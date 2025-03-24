// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cpp_Personal/Card.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCard() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
CPP_PERSONAL_API UClass* Z_Construct_UClass_UCard();
CPP_PERSONAL_API UClass* Z_Construct_UClass_UCard_NoRegister();
CPP_PERSONAL_API UEnum* Z_Construct_UEnum_Cpp_Personal_ERank();
CPP_PERSONAL_API UEnum* Z_Construct_UEnum_Cpp_Personal_ESuit();
UPackage* Z_Construct_UPackage__Script_Cpp_Personal();
// End Cross Module References

// Begin Class UCard Function GetCardValue
struct Z_Construct_UFunction_UCard_GetCardValue_Statics
{
	struct Card_eventGetCardValue_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Card" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xf0\x9f\x94\xb9 \xec\xb9\xb4\xeb\x93\x9c \xec\xa0\x90\xec\x88\x98 \xeb\xb0\x98\xed\x99\x98 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Card.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xf0\x9f\x94\xb9 \xec\xb9\xb4\xeb\x93\x9c \xec\xa0\x90\xec\x88\x98 \xeb\xb0\x98\xed\x99\x98 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCard_GetCardValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Card_eventGetCardValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCard_GetCardValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCard_GetCardValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCard_GetCardValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCard_GetCardValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCard, nullptr, "GetCardValue", nullptr, nullptr, Z_Construct_UFunction_UCard_GetCardValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCard_GetCardValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCard_GetCardValue_Statics::Card_eventGetCardValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCard_GetCardValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCard_GetCardValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCard_GetCardValue_Statics::Card_eventGetCardValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCard_GetCardValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCard_GetCardValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCard::execGetCardValue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetCardValue();
	P_NATIVE_END;
}
// End Class UCard Function GetCardValue

// Begin Class UCard Function SetAceValue
struct Z_Construct_UFunction_UCard_SetAceValue_Statics
{
	struct Card_eventSetAceValue_Parms
	{
		int32 NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Card" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xf0\x9f\x94\xb9 A \xec\xb9\xb4\xeb\x93\x9c \xea\xb0\x92 \xec\x84\xa4\xec\xa0\x95(1 \xeb\x98\x90\xeb\x8a\x94 11)\n" },
#endif
		{ "ModuleRelativePath", "Card.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xf0\x9f\x94\xb9 A \xec\xb9\xb4\xeb\x93\x9c \xea\xb0\x92 \xec\x84\xa4\xec\xa0\x95(1 \xeb\x98\x90\xeb\x8a\x94 11)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UCard_SetAceValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Card_eventSetAceValue_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCard_SetAceValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCard_SetAceValue_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCard_SetAceValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCard_SetAceValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCard, nullptr, "SetAceValue", nullptr, nullptr, Z_Construct_UFunction_UCard_SetAceValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCard_SetAceValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCard_SetAceValue_Statics::Card_eventSetAceValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCard_SetAceValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCard_SetAceValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCard_SetAceValue_Statics::Card_eventSetAceValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCard_SetAceValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCard_SetAceValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCard::execSetAceValue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAceValue(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class UCard Function SetAceValue

// Begin Class UCard Function SetCard
struct Z_Construct_UFunction_UCard_SetCard_Statics
{
	struct Card_eventSetCard_Parms
	{
		ESuit NewSuit;
		ERank NewRank;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Card" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xf0\x9f\x94\xb9 \xec\xb9\xb4\xeb\x93\x9c \xec\x84\xa4\xec\xa0\x95 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Card.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xf0\x9f\x94\xb9 \xec\xb9\xb4\xeb\x93\x9c \xec\x84\xa4\xec\xa0\x95 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewSuit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewSuit;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewRank_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewRank;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCard_SetCard_Statics::NewProp_NewSuit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCard_SetCard_Statics::NewProp_NewSuit = { "NewSuit", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Card_eventSetCard_Parms, NewSuit), Z_Construct_UEnum_Cpp_Personal_ESuit, METADATA_PARAMS(0, nullptr) }; // 3875573809
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UCard_SetCard_Statics::NewProp_NewRank_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UCard_SetCard_Statics::NewProp_NewRank = { "NewRank", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Card_eventSetCard_Parms, NewRank), Z_Construct_UEnum_Cpp_Personal_ERank, METADATA_PARAMS(0, nullptr) }; // 4190879128
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCard_SetCard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCard_SetCard_Statics::NewProp_NewSuit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCard_SetCard_Statics::NewProp_NewSuit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCard_SetCard_Statics::NewProp_NewRank_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCard_SetCard_Statics::NewProp_NewRank,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCard_SetCard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCard_SetCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCard, nullptr, "SetCard", nullptr, nullptr, Z_Construct_UFunction_UCard_SetCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCard_SetCard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCard_SetCard_Statics::Card_eventSetCard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCard_SetCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCard_SetCard_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCard_SetCard_Statics::Card_eventSetCard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCard_SetCard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCard_SetCard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCard::execSetCard)
{
	P_GET_ENUM(ESuit,Z_Param_NewSuit);
	P_GET_ENUM(ERank,Z_Param_NewRank);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetCard(ESuit(Z_Param_NewSuit),ERank(Z_Param_NewRank));
	P_NATIVE_END;
}
// End Class UCard Function SetCard

// Begin Class UCard Function ToString
struct Z_Construct_UFunction_UCard_ToString_Statics
{
	struct Card_eventToString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Card" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xf0\x9f\x94\xb9 \xec\xb9\xb4\xeb\x93\x9c \xec\xa0\x95\xeb\xb3\xb4\xeb\xa5\xbc \xeb\xac\xb8\xec\x9e\x90\xec\x97\xb4\xeb\xa1\x9c \xeb\xb3\x80\xed\x99\x98\xed\x95\x98\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Card.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xf0\x9f\x94\xb9 \xec\xb9\xb4\xeb\x93\x9c \xec\xa0\x95\xeb\xb3\xb4\xeb\xa5\xbc \xeb\xac\xb8\xec\x9e\x90\xec\x97\xb4\xeb\xa1\x9c \xeb\xb3\x80\xed\x99\x98\xed\x95\x98\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UCard_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Card_eventToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UCard_ToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UCard_ToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UCard_ToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UCard_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UCard, nullptr, "ToString", nullptr, nullptr, Z_Construct_UFunction_UCard_ToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UCard_ToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UCard_ToString_Statics::Card_eventToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UCard_ToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UCard_ToString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UCard_ToString_Statics::Card_eventToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UCard_ToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UCard_ToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UCard::execToString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ToString();
	P_NATIVE_END;
}
// End Class UCard Function ToString

// Begin Class UCard
void UCard::StaticRegisterNativesUCard()
{
	UClass* Class = UCard::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetCardValue", &UCard::execGetCardValue },
		{ "SetAceValue", &UCard::execSetAceValue },
		{ "SetCard", &UCard::execSetCard },
		{ "ToString", &UCard::execToString },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCard);
UClass* Z_Construct_UClass_UCard_NoRegister()
{
	return UCard::StaticClass();
}
struct Z_Construct_UClass_UCard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Card.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Card.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Suit_MetaData[] = {
		{ "Category", "Card" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb9\xb4\xeb\x93\x9c \xec\xa0\x95\xeb\xb3\xb4\n" },
#endif
		{ "ModuleRelativePath", "Card.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb9\xb4\xeb\x93\x9c \xec\xa0\x95\xeb\xb3\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rank_MetaData[] = {
		{ "Category", "Card" },
		{ "ModuleRelativePath", "Card.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "Category", "Card" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xf0\x9f\x94\xb9 \xec\xb9\xb4\xeb\x93\x9c \xea\xb0\x92 \xec\xa0\x80\xec\x9e\xa5\n" },
#endif
		{ "ModuleRelativePath", "Card.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xf0\x9f\x94\xb9 \xec\xb9\xb4\xeb\x93\x9c \xea\xb0\x92 \xec\xa0\x80\xec\x9e\xa5" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Suit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Suit;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Rank_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Rank;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCard_GetCardValue, "GetCardValue" }, // 3589341601
		{ &Z_Construct_UFunction_UCard_SetAceValue, "SetAceValue" }, // 1030477468
		{ &Z_Construct_UFunction_UCard_SetCard, "SetCard" }, // 4030878076
		{ &Z_Construct_UFunction_UCard_ToString, "ToString" }, // 680644061
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCard_Statics::NewProp_Suit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCard_Statics::NewProp_Suit = { "Suit", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCard, Suit), Z_Construct_UEnum_Cpp_Personal_ESuit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Suit_MetaData), NewProp_Suit_MetaData) }; // 3875573809
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCard_Statics::NewProp_Rank_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCard_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCard, Rank), Z_Construct_UEnum_Cpp_Personal_ERank, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rank_MetaData), NewProp_Rank_MetaData) }; // 4190879128
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCard_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCard, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCard_Statics::NewProp_Suit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCard_Statics::NewProp_Suit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCard_Statics::NewProp_Rank_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCard_Statics::NewProp_Rank,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCard_Statics::NewProp_Value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCard_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UCard_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_Cpp_Personal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCard_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UCard_Statics::ClassParams = {
	&UCard::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UCard_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UCard_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCard_Statics::Class_MetaDataParams), Z_Construct_UClass_UCard_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UCard()
{
	if (!Z_Registration_Info_UClass_UCard.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCard.OuterSingleton, Z_Construct_UClass_UCard_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UCard.OuterSingleton;
}
template<> CPP_PERSONAL_API UClass* StaticClass<UCard>()
{
	return UCard::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UCard);
UCard::~UCard() {}
// End Class UCard

// Begin Registration
struct Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_Card_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCard, UCard::StaticClass, TEXT("UCard"), &Z_Registration_Info_UClass_UCard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCard), 572068417U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_Card_h_2097134574(TEXT("/Script/Cpp_Personal"),
	Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_Card_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_Card_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
