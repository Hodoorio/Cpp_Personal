// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cpp_Personal/Actor/DealerActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDealerActor() {}

// Begin Cross Module References
CPP_PERSONAL_API UClass* Z_Construct_UClass_ADealerActor();
CPP_PERSONAL_API UClass* Z_Construct_UClass_ADealerActor_NoRegister();
CPP_PERSONAL_API UClass* Z_Construct_UClass_UCard_NoRegister();
CPP_PERSONAL_API UClass* Z_Construct_UClass_UDeck_NoRegister();
CPP_PERSONAL_API UScriptStruct* Z_Construct_UScriptStruct_FDealerHand();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Cpp_Personal();
// End Cross Module References

// Begin ScriptStruct FDealerHand
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DealerHand;
class UScriptStruct* FDealerHand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DealerHand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DealerHand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDealerHand, (UObject*)Z_Construct_UPackage__Script_Cpp_Personal(), TEXT("DealerHand"));
	}
	return Z_Registration_Info_UScriptStruct_DealerHand.OuterSingleton;
}
template<> CPP_PERSONAL_API UScriptStruct* StaticStruct<FDealerHand>()
{
	return FDealerHand::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDealerHand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Actor/DealerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cards_MetaData[] = {
		{ "Category", "Dealer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\x94\x9c\xeb\x9f\xac \xed\x95\xb8\xeb\x93\x9c\xec\x97\x90 \xed\x8f\xac\xed\x95\xa8\xeb\x90\x9c \xec\xb9\xb4\xeb\x93\x9c \xeb\xb0\xb0\xec\x97\xb4\n" },
#endif
		{ "ModuleRelativePath", "Actor/DealerActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x94\x9c\xeb\x9f\xac \xed\x95\xb8\xeb\x93\x9c\xec\x97\x90 \xed\x8f\xac\xed\x95\xa8\xeb\x90\x9c \xec\xb9\xb4\xeb\x93\x9c \xeb\xb0\xb0\xec\x97\xb4" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Cards_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Cards;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDealerHand>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDealerHand_Statics::NewProp_Cards_Inner = { "Cards", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDealerHand_Statics::NewProp_Cards = { "Cards", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDealerHand, Cards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cards_MetaData), NewProp_Cards_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDealerHand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDealerHand_Statics::NewProp_Cards_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDealerHand_Statics::NewProp_Cards,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDealerHand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDealerHand_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Cpp_Personal,
	nullptr,
	&NewStructOps,
	"DealerHand",
	Z_Construct_UScriptStruct_FDealerHand_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDealerHand_Statics::PropPointers),
	sizeof(FDealerHand),
	alignof(FDealerHand),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDealerHand_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDealerHand_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDealerHand()
{
	if (!Z_Registration_Info_UScriptStruct_DealerHand.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DealerHand.InnerSingleton, Z_Construct_UScriptStruct_FDealerHand_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DealerHand.InnerSingleton;
}
// End ScriptStruct FDealerHand

// Begin Class ADealerActor Function DrawCard
struct Z_Construct_UFunction_ADealerActor_DrawCard_Statics
{
	struct DealerActor_eventDrawCard_Parms
	{
		UDeck* Deck;
		UCard* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dealer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb9\xb4\xeb\x93\x9c \xeb\x93\x9c\xeb\xa1\x9c\xec\x9a\xb0 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Actor/DealerActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb9\xb4\xeb\x93\x9c \xeb\x93\x9c\xeb\xa1\x9c\xec\x9a\xb0 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Deck;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADealerActor_DrawCard_Statics::NewProp_Deck = { "Deck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DealerActor_eventDrawCard_Parms, Deck), Z_Construct_UClass_UDeck_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADealerActor_DrawCard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DealerActor_eventDrawCard_Parms, ReturnValue), Z_Construct_UClass_UCard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADealerActor_DrawCard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADealerActor_DrawCard_Statics::NewProp_Deck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADealerActor_DrawCard_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADealerActor_DrawCard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADealerActor_DrawCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADealerActor, nullptr, "DrawCard", nullptr, nullptr, Z_Construct_UFunction_ADealerActor_DrawCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADealerActor_DrawCard_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADealerActor_DrawCard_Statics::DealerActor_eventDrawCard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADealerActor_DrawCard_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADealerActor_DrawCard_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADealerActor_DrawCard_Statics::DealerActor_eventDrawCard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADealerActor_DrawCard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADealerActor_DrawCard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADealerActor::execDrawCard)
{
	P_GET_OBJECT(UDeck,Z_Param_Deck);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCard**)Z_Param__Result=P_THIS->DrawCard(Z_Param_Deck);
	P_NATIVE_END;
}
// End Class ADealerActor Function DrawCard

// Begin Class ADealerActor Function GetHands
struct Z_Construct_UFunction_ADealerActor_GetHands_Statics
{
	struct DealerActor_eventGetHands_Parms
	{
		TArray<FDealerHand> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dealer" },
		{ "ModuleRelativePath", "Actor/DealerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADealerActor_GetHands_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDealerHand, METADATA_PARAMS(0, nullptr) }; // 1076350826
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ADealerActor_GetHands_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DealerActor_eventGetHands_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) }; // 1076350826
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADealerActor_GetHands_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADealerActor_GetHands_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADealerActor_GetHands_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADealerActor_GetHands_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADealerActor_GetHands_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADealerActor, nullptr, "GetHands", nullptr, nullptr, Z_Construct_UFunction_ADealerActor_GetHands_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADealerActor_GetHands_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADealerActor_GetHands_Statics::DealerActor_eventGetHands_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADealerActor_GetHands_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADealerActor_GetHands_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADealerActor_GetHands_Statics::DealerActor_eventGetHands_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADealerActor_GetHands()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADealerActor_GetHands_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADealerActor::execGetHands)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FDealerHand>*)Z_Param__Result=P_THIS->GetHands();
	P_NATIVE_END;
}
// End Class ADealerActor Function GetHands

// Begin Class ADealerActor Function GetHandValue
struct Z_Construct_UFunction_ADealerActor_GetHandValue_Statics
{
	struct DealerActor_eventGetHandValue_Parms
	{
		bool bIncludeHiddenCard;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dealer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x95\xb8\xeb\x93\x9c \xec\xa0\x90\xec\x88\x98 \xea\xb3\x84\xec\x82\xb0\n" },
#endif
		{ "CPP_Default_bIncludeHiddenCard", "false" },
		{ "ModuleRelativePath", "Actor/DealerActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x95\xb8\xeb\x93\x9c \xec\xa0\x90\xec\x88\x98 \xea\xb3\x84\xec\x82\xb0" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bIncludeHiddenCard_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIncludeHiddenCard;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_ADealerActor_GetHandValue_Statics::NewProp_bIncludeHiddenCard_SetBit(void* Obj)
{
	((DealerActor_eventGetHandValue_Parms*)Obj)->bIncludeHiddenCard = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADealerActor_GetHandValue_Statics::NewProp_bIncludeHiddenCard = { "bIncludeHiddenCard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(DealerActor_eventGetHandValue_Parms), &Z_Construct_UFunction_ADealerActor_GetHandValue_Statics::NewProp_bIncludeHiddenCard_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADealerActor_GetHandValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DealerActor_eventGetHandValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADealerActor_GetHandValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADealerActor_GetHandValue_Statics::NewProp_bIncludeHiddenCard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADealerActor_GetHandValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADealerActor_GetHandValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADealerActor_GetHandValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADealerActor, nullptr, "GetHandValue", nullptr, nullptr, Z_Construct_UFunction_ADealerActor_GetHandValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADealerActor_GetHandValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADealerActor_GetHandValue_Statics::DealerActor_eventGetHandValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADealerActor_GetHandValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADealerActor_GetHandValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADealerActor_GetHandValue_Statics::DealerActor_eventGetHandValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADealerActor_GetHandValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADealerActor_GetHandValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADealerActor::execGetHandValue)
{
	P_GET_UBOOL(Z_Param_bIncludeHiddenCard);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetHandValue(Z_Param_bIncludeHiddenCard);
	P_NATIVE_END;
}
// End Class ADealerActor Function GetHandValue

// Begin Class ADealerActor
void ADealerActor::StaticRegisterNativesADealerActor()
{
	UClass* Class = ADealerActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DrawCard", &ADealerActor::execDrawCard },
		{ "GetHands", &ADealerActor::execGetHands },
		{ "GetHandValue", &ADealerActor::execGetHandValue },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADealerActor);
UClass* Z_Construct_UClass_ADealerActor_NoRegister()
{
	return ADealerActor::StaticClass();
}
struct Z_Construct_UClass_ADealerActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/DealerActor.h" },
		{ "ModuleRelativePath", "Actor/DealerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hands_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Dealer" },
		{ "ModuleRelativePath", "Actor/DealerActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hands_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Hands;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADealerActor_DrawCard, "DrawCard" }, // 2874183838
		{ &Z_Construct_UFunction_ADealerActor_GetHands, "GetHands" }, // 74663885
		{ &Z_Construct_UFunction_ADealerActor_GetHandValue, "GetHandValue" }, // 3019423606
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADealerActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADealerActor_Statics::NewProp_Hands_Inner = { "Hands", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDealerHand, METADATA_PARAMS(0, nullptr) }; // 1076350826
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADealerActor_Statics::NewProp_Hands = { "Hands", nullptr, (EPropertyFlags)0x0040000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADealerActor, Hands), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hands_MetaData), NewProp_Hands_MetaData) }; // 1076350826
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADealerActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADealerActor_Statics::NewProp_Hands_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADealerActor_Statics::NewProp_Hands,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADealerActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ADealerActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Cpp_Personal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ADealerActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ADealerActor_Statics::ClassParams = {
	&ADealerActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ADealerActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ADealerActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ADealerActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ADealerActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ADealerActor()
{
	if (!Z_Registration_Info_UClass_ADealerActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADealerActor.OuterSingleton, Z_Construct_UClass_ADealerActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ADealerActor.OuterSingleton;
}
template<> CPP_PERSONAL_API UClass* StaticClass<ADealerActor>()
{
	return ADealerActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ADealerActor);
ADealerActor::~ADealerActor() {}
// End Class ADealerActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_Actor_DealerActor_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDealerHand::StaticStruct, Z_Construct_UScriptStruct_FDealerHand_Statics::NewStructOps, TEXT("DealerHand"), &Z_Registration_Info_UScriptStruct_DealerHand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDealerHand), 1076350826U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADealerActor, ADealerActor::StaticClass, TEXT("ADealerActor"), &Z_Registration_Info_UClass_ADealerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADealerActor), 1397470501U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_Actor_DealerActor_h_523433891(TEXT("/Script/Cpp_Personal"),
	Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_Actor_DealerActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_Actor_DealerActor_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_Actor_DealerActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_Actor_DealerActor_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
