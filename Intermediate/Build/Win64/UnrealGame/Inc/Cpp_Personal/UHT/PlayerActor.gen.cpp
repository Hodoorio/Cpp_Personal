// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cpp_Personal/Actor/PlayerActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerActor() {}

// Begin Cross Module References
CPP_PERSONAL_API UClass* Z_Construct_UClass_APlayerActor();
CPP_PERSONAL_API UClass* Z_Construct_UClass_APlayerActor_NoRegister();
CPP_PERSONAL_API UClass* Z_Construct_UClass_UBlackjackHUD_NoRegister();
CPP_PERSONAL_API UClass* Z_Construct_UClass_UCard_NoRegister();
CPP_PERSONAL_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerHand();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Cpp_Personal();
// End Cross Module References

// Begin ScriptStruct FPlayerHand
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PlayerHand;
class UScriptStruct* FPlayerHand::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerHand.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PlayerHand.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerHand, (UObject*)Z_Construct_UPackage__Script_Cpp_Personal(), TEXT("PlayerHand"));
	}
	return Z_Registration_Info_UScriptStruct_PlayerHand.OuterSingleton;
}
template<> CPP_PERSONAL_API UScriptStruct* StaticStruct<FPlayerHand>()
{
	return FPlayerHand::StaticStruct();
}
struct Z_Construct_UScriptStruct_FPlayerHand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xed\x95\xb8\xeb\x93\x9c \xea\xb5\xac\xec\xa1\xb0\xec\xb2\xb4 \xec\xa0\x95\xec\x9d\x98\n" },
#endif
		{ "ModuleRelativePath", "Actor/PlayerActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xed\x95\xb8\xeb\x93\x9c \xea\xb5\xac\xec\xa1\xb0\xec\xb2\xb4 \xec\xa0\x95\xec\x9d\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Cards_MetaData[] = {
		{ "Category", "Hand" },
		{ "ModuleRelativePath", "Actor/PlayerActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Cards_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Cards;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerHand>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FPlayerHand_Statics::NewProp_Cards_Inner = { "Cards", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPlayerHand_Statics::NewProp_Cards = { "Cards", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPlayerHand, Cards), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Cards_MetaData), NewProp_Cards_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerHand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerHand_Statics::NewProp_Cards_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerHand_Statics::NewProp_Cards,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerHand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerHand_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Cpp_Personal,
	nullptr,
	&NewStructOps,
	"PlayerHand",
	Z_Construct_UScriptStruct_FPlayerHand_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerHand_Statics::PropPointers),
	sizeof(FPlayerHand),
	alignof(FPlayerHand),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerHand_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPlayerHand_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FPlayerHand()
{
	if (!Z_Registration_Info_UScriptStruct_PlayerHand.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PlayerHand.InnerSingleton, Z_Construct_UScriptStruct_FPlayerHand_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_PlayerHand.InnerSingleton;
}
// End ScriptStruct FPlayerHand

// Begin Class APlayerActor Function CanSplit
struct Z_Construct_UFunction_APlayerActor_CanSplit_Statics
{
	struct PlayerActor_eventCanSplit_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x9c\x82 \xec\x8a\xa4\xed\x94\x8c\xeb\xa6\xbf \xea\xb4\x80\xeb\xa0\xa8 \xea\xb8\xb0\xeb\x8a\xa5\n" },
#endif
		{ "ModuleRelativePath", "Actor/PlayerActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x9c\x82 \xec\x8a\xa4\xed\x94\x8c\xeb\xa6\xbf \xea\xb4\x80\xeb\xa0\xa8 \xea\xb8\xb0\xeb\x8a\xa5" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APlayerActor_CanSplit_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerActor_eventCanSplit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerActor_CanSplit_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerActor_eventCanSplit_Parms), &Z_Construct_UFunction_APlayerActor_CanSplit_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerActor_CanSplit_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerActor_CanSplit_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerActor_CanSplit_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerActor_CanSplit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerActor, nullptr, "CanSplit", nullptr, nullptr, Z_Construct_UFunction_APlayerActor_CanSplit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerActor_CanSplit_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerActor_CanSplit_Statics::PlayerActor_eventCanSplit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerActor_CanSplit_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerActor_CanSplit_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerActor_CanSplit_Statics::PlayerActor_eventCanSplit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerActor_CanSplit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerActor_CanSplit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerActor::execCanSplit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanSplit();
	P_NATIVE_END;
}
// End Class APlayerActor Function CanSplit

// Begin Class APlayerActor Function ClearHand
struct Z_Construct_UFunction_APlayerActor_ClearHand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Actor/PlayerActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerActor_ClearHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerActor, nullptr, "ClearHand", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerActor_ClearHand_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerActor_ClearHand_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerActor_ClearHand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerActor_ClearHand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerActor::execClearHand)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearHand();
	P_NATIVE_END;
}
// End Class APlayerActor Function ClearHand

// Begin Class APlayerActor Function GetHandValue
struct Z_Construct_UFunction_APlayerActor_GetHandValue_Statics
{
	struct PlayerActor_eventGetHandValue_Parms
	{
		int32 HandIndex;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "CPP_Default_HandIndex", "0" },
		{ "ModuleRelativePath", "Actor/PlayerActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_HandIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerActor_GetHandValue_Statics::NewProp_HandIndex = { "HandIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerActor_eventGetHandValue_Parms, HandIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerActor_GetHandValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerActor_eventGetHandValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerActor_GetHandValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerActor_GetHandValue_Statics::NewProp_HandIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerActor_GetHandValue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerActor_GetHandValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerActor_GetHandValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerActor, nullptr, "GetHandValue", nullptr, nullptr, Z_Construct_UFunction_APlayerActor_GetHandValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerActor_GetHandValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerActor_GetHandValue_Statics::PlayerActor_eventGetHandValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerActor_GetHandValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerActor_GetHandValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerActor_GetHandValue_Statics::PlayerActor_eventGetHandValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerActor_GetHandValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerActor_GetHandValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerActor::execGetHandValue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_HandIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetHandValue(Z_Param_HandIndex);
	P_NATIVE_END;
}
// End Class APlayerActor Function GetHandValue

// Begin Class APlayerActor Function GiveCardToHand
struct Z_Construct_UFunction_APlayerActor_GiveCardToHand_Statics
{
	struct PlayerActor_eventGiveCardToHand_Parms
	{
		UCard* NewCard;
		int32 HandIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xf0\x9f\x94\xb9 \xec\xb9\xb4\xeb\x93\x9c \xea\xb8\xb0\xeb\x8a\xa5\n" },
#endif
		{ "CPP_Default_HandIndex", "0" },
		{ "ModuleRelativePath", "Actor/PlayerActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xf0\x9f\x94\xb9 \xec\xb9\xb4\xeb\x93\x9c \xea\xb8\xb0\xeb\x8a\xa5" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCard;
	static const UECodeGen_Private::FIntPropertyParams NewProp_HandIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APlayerActor_GiveCardToHand_Statics::NewProp_NewCard = { "NewCard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerActor_eventGiveCardToHand_Parms, NewCard), Z_Construct_UClass_UCard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerActor_GiveCardToHand_Statics::NewProp_HandIndex = { "HandIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerActor_eventGiveCardToHand_Parms, HandIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerActor_GiveCardToHand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerActor_GiveCardToHand_Statics::NewProp_NewCard,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerActor_GiveCardToHand_Statics::NewProp_HandIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerActor_GiveCardToHand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerActor_GiveCardToHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerActor, nullptr, "GiveCardToHand", nullptr, nullptr, Z_Construct_UFunction_APlayerActor_GiveCardToHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerActor_GiveCardToHand_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerActor_GiveCardToHand_Statics::PlayerActor_eventGiveCardToHand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerActor_GiveCardToHand_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerActor_GiveCardToHand_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerActor_GiveCardToHand_Statics::PlayerActor_eventGiveCardToHand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerActor_GiveCardToHand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerActor_GiveCardToHand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerActor::execGiveCardToHand)
{
	P_GET_OBJECT(UCard,Z_Param_NewCard);
	P_GET_PROPERTY(FIntProperty,Z_Param_HandIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GiveCardToHand(Z_Param_NewCard,Z_Param_HandIndex);
	P_NATIVE_END;
}
// End Class APlayerActor Function GiveCardToHand

// Begin Class APlayerActor Function InitializeCoins
struct Z_Construct_UFunction_APlayerActor_InitializeCoins_Statics
{
	struct PlayerActor_eventInitializeCoins_Parms
	{
		int32 StartingCoins;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xf0\x9f\x94\xb9 \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xea\xb8\xb0\xeb\x8a\xa5\n" },
#endif
		{ "CPP_Default_StartingCoins", "1000" },
		{ "ModuleRelativePath", "Actor/PlayerActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xf0\x9f\x94\xb9 \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xea\xb8\xb0\xeb\x8a\xa5" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartingCoins;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerActor_InitializeCoins_Statics::NewProp_StartingCoins = { "StartingCoins", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerActor_eventInitializeCoins_Parms, StartingCoins), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerActor_InitializeCoins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerActor_InitializeCoins_Statics::NewProp_StartingCoins,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerActor_InitializeCoins_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerActor_InitializeCoins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerActor, nullptr, "InitializeCoins", nullptr, nullptr, Z_Construct_UFunction_APlayerActor_InitializeCoins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerActor_InitializeCoins_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerActor_InitializeCoins_Statics::PlayerActor_eventInitializeCoins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerActor_InitializeCoins_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerActor_InitializeCoins_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerActor_InitializeCoins_Statics::PlayerActor_eventInitializeCoins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerActor_InitializeCoins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerActor_InitializeCoins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerActor::execInitializeCoins)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_StartingCoins);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeCoins(Z_Param_StartingCoins);
	P_NATIVE_END;
}
// End Class APlayerActor Function InitializeCoins

// Begin Class APlayerActor Function LoseBet
struct Z_Construct_UFunction_APlayerActor_LoseBet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Actor/PlayerActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerActor_LoseBet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerActor, nullptr, "LoseBet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerActor_LoseBet_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerActor_LoseBet_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerActor_LoseBet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerActor_LoseBet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerActor::execLoseBet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->LoseBet();
	P_NATIVE_END;
}
// End Class APlayerActor Function LoseBet

// Begin Class APlayerActor Function MaxBet
struct Z_Construct_UFunction_APlayerActor_MaxBet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Actor/PlayerActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerActor_MaxBet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerActor, nullptr, "MaxBet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerActor_MaxBet_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerActor_MaxBet_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerActor_MaxBet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerActor_MaxBet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerActor::execMaxBet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->MaxBet();
	P_NATIVE_END;
}
// End Class APlayerActor Function MaxBet

// Begin Class APlayerActor Function PlaceBet
struct Z_Construct_UFunction_APlayerActor_PlaceBet_Statics
{
	struct PlayerActor_eventPlaceBet_Parms
	{
		int32 BetAmount;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Actor/PlayerActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_BetAmount;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerActor_PlaceBet_Statics::NewProp_BetAmount = { "BetAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerActor_eventPlaceBet_Parms, BetAmount), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APlayerActor_PlaceBet_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerActor_eventPlaceBet_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerActor_PlaceBet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerActor_eventPlaceBet_Parms), &Z_Construct_UFunction_APlayerActor_PlaceBet_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerActor_PlaceBet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerActor_PlaceBet_Statics::NewProp_BetAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerActor_PlaceBet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerActor_PlaceBet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerActor_PlaceBet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerActor, nullptr, "PlaceBet", nullptr, nullptr, Z_Construct_UFunction_APlayerActor_PlaceBet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerActor_PlaceBet_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerActor_PlaceBet_Statics::PlayerActor_eventPlaceBet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerActor_PlaceBet_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerActor_PlaceBet_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerActor_PlaceBet_Statics::PlayerActor_eventPlaceBet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerActor_PlaceBet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerActor_PlaceBet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerActor::execPlaceBet)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_BetAmount);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PlaceBet(Z_Param_BetAmount);
	P_NATIVE_END;
}
// End Class APlayerActor Function PlaceBet

// Begin Class APlayerActor Function SetAceValue
struct Z_Construct_UFunction_APlayerActor_SetAceValue_Statics
{
	struct PlayerActor_eventSetAceValue_Parms
	{
		int32 NewValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Actor/PlayerActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APlayerActor_SetAceValue_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PlayerActor_eventSetAceValue_Parms, NewValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerActor_SetAceValue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerActor_SetAceValue_Statics::NewProp_NewValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerActor_SetAceValue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerActor_SetAceValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerActor, nullptr, "SetAceValue", nullptr, nullptr, Z_Construct_UFunction_APlayerActor_SetAceValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerActor_SetAceValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerActor_SetAceValue_Statics::PlayerActor_eventSetAceValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerActor_SetAceValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerActor_SetAceValue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerActor_SetAceValue_Statics::PlayerActor_eventSetAceValue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerActor_SetAceValue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerActor_SetAceValue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerActor::execSetAceValue)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAceValue(Z_Param_NewValue);
	P_NATIVE_END;
}
// End Class APlayerActor Function SetAceValue

// Begin Class APlayerActor Function Split
struct Z_Construct_UFunction_APlayerActor_Split_Statics
{
	struct PlayerActor_eventSplit_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Actor/PlayerActor.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_APlayerActor_Split_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((PlayerActor_eventSplit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APlayerActor_Split_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PlayerActor_eventSplit_Parms), &Z_Construct_UFunction_APlayerActor_Split_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APlayerActor_Split_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APlayerActor_Split_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerActor_Split_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerActor_Split_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerActor, nullptr, "Split", nullptr, nullptr, Z_Construct_UFunction_APlayerActor_Split_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerActor_Split_Statics::PropPointers), sizeof(Z_Construct_UFunction_APlayerActor_Split_Statics::PlayerActor_eventSplit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerActor_Split_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerActor_Split_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APlayerActor_Split_Statics::PlayerActor_eventSplit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APlayerActor_Split()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerActor_Split_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerActor::execSplit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->Split();
	P_NATIVE_END;
}
// End Class APlayerActor Function Split

// Begin Class APlayerActor Function WinBet
struct Z_Construct_UFunction_APlayerActor_WinBet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Actor/PlayerActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APlayerActor_WinBet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APlayerActor, nullptr, "WinBet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APlayerActor_WinBet_Statics::Function_MetaDataParams), Z_Construct_UFunction_APlayerActor_WinBet_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APlayerActor_WinBet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APlayerActor_WinBet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APlayerActor::execWinBet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->WinBet();
	P_NATIVE_END;
}
// End Class APlayerActor Function WinBet

// Begin Class APlayerActor
void APlayerActor::StaticRegisterNativesAPlayerActor()
{
	UClass* Class = APlayerActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanSplit", &APlayerActor::execCanSplit },
		{ "ClearHand", &APlayerActor::execClearHand },
		{ "GetHandValue", &APlayerActor::execGetHandValue },
		{ "GiveCardToHand", &APlayerActor::execGiveCardToHand },
		{ "InitializeCoins", &APlayerActor::execInitializeCoins },
		{ "LoseBet", &APlayerActor::execLoseBet },
		{ "MaxBet", &APlayerActor::execMaxBet },
		{ "PlaceBet", &APlayerActor::execPlaceBet },
		{ "SetAceValue", &APlayerActor::execSetAceValue },
		{ "Split", &APlayerActor::execSplit },
		{ "WinBet", &APlayerActor::execWinBet },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APlayerActor);
UClass* Z_Construct_UClass_APlayerActor_NoRegister()
{
	return APlayerActor::StaticClass();
}
struct Z_Construct_UClass_APlayerActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/PlayerActor.h" },
		{ "ModuleRelativePath", "Actor/PlayerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Coins_MetaData[] = {
		{ "Category", "Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xf0\x9f\x8e\xb2 \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xec\xbd\x94\xec\x9d\xb8 \xec\x8b\x9c\xec\x8a\xa4\xed\x85\x9c\n" },
#endif
		{ "ModuleRelativePath", "Actor/PlayerActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xf0\x9f\x8e\xb2 \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xec\xbd\x94\xec\x9d\xb8 \xec\x8b\x9c\xec\x8a\xa4\xed\x85\x9c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentBet_MetaData[] = {
		{ "Category", "Player" },
		{ "ModuleRelativePath", "Actor/PlayerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hands_MetaData[] = {
		{ "Category", "Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xf0\x9f\x83\x8f \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4\xec\x9d\x98 \xed\x95\xb8\xeb\x93\x9c (\xea\xb8\xb0\xeb\xb3\xb8 & \xec\x8a\xa4\xed\x94\x8c\xeb\xa6\xbf)\n" },
#endif
		{ "ModuleRelativePath", "Actor/PlayerActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xf0\x9f\x83\x8f \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4\xec\x9d\x98 \xed\x95\xb8\xeb\x93\x9c (\xea\xb8\xb0\xeb\xb3\xb8 & \xec\x8a\xa4\xed\x94\x8c\xeb\xa6\xbf)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsSplitActive_MetaData[] = {
		{ "Category", "Player" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x9c\x82 \xec\x8a\xa4\xed\x94\x8c\xeb\xa6\xbf \xed\x99\x9c\xec\x84\xb1\xed\x99\x94 \xec\x97\xac\xeb\xb6\x80\n" },
#endif
		{ "ModuleRelativePath", "Actor/PlayerActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x9c\x82 \xec\x8a\xa4\xed\x94\x8c\xeb\xa6\xbf \xed\x99\x9c\xec\x84\xb1\xed\x99\x94 \xec\x97\xac\xeb\xb6\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackjackHUD_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UI \xed\x83\x80\xec\x9e\x85 \xeb\xb3\x80\xec\x88\x98 \xec\x84\xa0\xec\x96\xb8 (\xeb\xb2\xa0\xed\x8c\x85 \xea\xb8\x88\xec\x95\xa1 \xec\x97\x85\xeb\x8d\xb0\xec\x9d\xb4\xed\x8a\xb8\xeb\xa5\xbc \xec\x9c\x84\xed\x95\x9c)\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Actor/PlayerActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI \xed\x83\x80\xec\x9e\x85 \xeb\xb3\x80\xec\x88\x98 \xec\x84\xa0\xec\x96\xb8 (\xeb\xb2\xa0\xed\x8c\x85 \xea\xb8\x88\xec\x95\xa1 \xec\x97\x85\xeb\x8d\xb0\xec\x9d\xb4\xed\x8a\xb8\xeb\xa5\xbc \xec\x9c\x84\xed\x95\x9c)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Coins;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentBet;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Hands_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Hands;
	static void NewProp_bIsSplitActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsSplitActive;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackjackHUD;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APlayerActor_CanSplit, "CanSplit" }, // 735112562
		{ &Z_Construct_UFunction_APlayerActor_ClearHand, "ClearHand" }, // 2424794459
		{ &Z_Construct_UFunction_APlayerActor_GetHandValue, "GetHandValue" }, // 3059359123
		{ &Z_Construct_UFunction_APlayerActor_GiveCardToHand, "GiveCardToHand" }, // 3639646567
		{ &Z_Construct_UFunction_APlayerActor_InitializeCoins, "InitializeCoins" }, // 2577641633
		{ &Z_Construct_UFunction_APlayerActor_LoseBet, "LoseBet" }, // 966519781
		{ &Z_Construct_UFunction_APlayerActor_MaxBet, "MaxBet" }, // 1220784061
		{ &Z_Construct_UFunction_APlayerActor_PlaceBet, "PlaceBet" }, // 2138338647
		{ &Z_Construct_UFunction_APlayerActor_SetAceValue, "SetAceValue" }, // 3906627471
		{ &Z_Construct_UFunction_APlayerActor_Split, "Split" }, // 3829268391
		{ &Z_Construct_UFunction_APlayerActor_WinBet, "WinBet" }, // 1239165851
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerActor_Statics::NewProp_Coins = { "Coins", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerActor, Coins), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Coins_MetaData), NewProp_Coins_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerActor_Statics::NewProp_CurrentBet = { "CurrentBet", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerActor, CurrentBet), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentBet_MetaData), NewProp_CurrentBet_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerActor_Statics::NewProp_Hands_Inner = { "Hands", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FPlayerHand, METADATA_PARAMS(0, nullptr) }; // 337208193
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerActor_Statics::NewProp_Hands = { "Hands", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerActor, Hands), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hands_MetaData), NewProp_Hands_MetaData) }; // 337208193
void Z_Construct_UClass_APlayerActor_Statics::NewProp_bIsSplitActive_SetBit(void* Obj)
{
	((APlayerActor*)Obj)->bIsSplitActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerActor_Statics::NewProp_bIsSplitActive = { "bIsSplitActive", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(APlayerActor), &Z_Construct_UClass_APlayerActor_Statics::NewProp_bIsSplitActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsSplitActive_MetaData), NewProp_bIsSplitActive_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerActor_Statics::NewProp_BlackjackHUD = { "BlackjackHUD", nullptr, (EPropertyFlags)0x001000000008001c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APlayerActor, BlackjackHUD), Z_Construct_UClass_UBlackjackHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackjackHUD_MetaData), NewProp_BlackjackHUD_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerActor_Statics::NewProp_Coins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerActor_Statics::NewProp_CurrentBet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerActor_Statics::NewProp_Hands_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerActor_Statics::NewProp_Hands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerActor_Statics::NewProp_bIsSplitActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerActor_Statics::NewProp_BlackjackHUD,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APlayerActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_Cpp_Personal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APlayerActor_Statics::ClassParams = {
	&APlayerActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APlayerActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APlayerActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APlayerActor_Statics::Class_MetaDataParams), Z_Construct_UClass_APlayerActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APlayerActor()
{
	if (!Z_Registration_Info_UClass_APlayerActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APlayerActor.OuterSingleton, Z_Construct_UClass_APlayerActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APlayerActor.OuterSingleton;
}
template<> CPP_PERSONAL_API UClass* StaticClass<APlayerActor>()
{
	return APlayerActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerActor);
APlayerActor::~APlayerActor() {}
// End Class APlayerActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_Actor_PlayerActor_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FPlayerHand::StaticStruct, Z_Construct_UScriptStruct_FPlayerHand_Statics::NewStructOps, TEXT("PlayerHand"), &Z_Registration_Info_UScriptStruct_PlayerHand, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPlayerHand), 337208193U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APlayerActor, APlayerActor::StaticClass, TEXT("APlayerActor"), &Z_Registration_Info_UClass_APlayerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APlayerActor), 204473344U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_Actor_PlayerActor_h_131169062(TEXT("/Script/Cpp_Personal"),
	Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_Actor_PlayerActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_Actor_PlayerActor_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_Actor_PlayerActor_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_Actor_PlayerActor_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
