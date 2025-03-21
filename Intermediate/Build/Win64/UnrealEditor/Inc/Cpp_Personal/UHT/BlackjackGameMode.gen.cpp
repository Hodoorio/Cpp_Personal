// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cpp_Personal/BlackjackGameMode.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackjackGameMode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
CPP_PERSONAL_API UClass* Z_Construct_UClass_ABlackjackGameMode();
CPP_PERSONAL_API UClass* Z_Construct_UClass_ABlackjackGameMode_NoRegister();
CPP_PERSONAL_API UClass* Z_Construct_UClass_ADealerActor_NoRegister();
CPP_PERSONAL_API UClass* Z_Construct_UClass_APlayerActor_NoRegister();
CPP_PERSONAL_API UClass* Z_Construct_UClass_ATableActor_NoRegister();
CPP_PERSONAL_API UClass* Z_Construct_UClass_UBlackjackHUD_NoRegister();
CPP_PERSONAL_API UClass* Z_Construct_UClass_UDeck_NoRegister();
CPP_PERSONAL_API UEnum* Z_Construct_UEnum_Cpp_Personal_EGameState();
CPP_PERSONAL_API UFunction* Z_Construct_UDelegateFunction_Cpp_Personal_OnPlayerInfoUpdated__DelegateSignature();
CPP_PERSONAL_API UFunction* Z_Construct_UDelegateFunction_Cpp_Personal_OnScoreUpdated__DelegateSignature();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
UPackage* Z_Construct_UPackage__Script_Cpp_Personal();
// End Cross Module References

// Begin Delegate FOnPlayerInfoUpdated
struct Z_Construct_UDelegateFunction_Cpp_Personal_OnPlayerInfoUpdated__DelegateSignature_Statics
{
	struct _Script_Cpp_Personal_eventOnPlayerInfoUpdated_Parms
	{
		int32 Coins;
		int32 BetAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xf0\x9f\x8e\xb2 UI \xec\x97\x85\xeb\x8d\xb0\xec\x9d\xb4\xed\x8a\xb8 \xec\x9d\xb4\xeb\xb2\xa4\xed\x8a\xb8\n" },
#endif
		{ "ModuleRelativePath", "BlackjackGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xf0\x9f\x8e\xb2 UI \xec\x97\x85\xeb\x8d\xb0\xec\x9d\xb4\xed\x8a\xb8 \xec\x9d\xb4\xeb\xb2\xa4\xed\x8a\xb8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Coins;
	static const UECodeGen_Private::FIntPropertyParams NewProp_BetAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Cpp_Personal_OnPlayerInfoUpdated__DelegateSignature_Statics::NewProp_Coins = { "Coins", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Cpp_Personal_eventOnPlayerInfoUpdated_Parms, Coins), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Cpp_Personal_OnPlayerInfoUpdated__DelegateSignature_Statics::NewProp_BetAmount = { "BetAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Cpp_Personal_eventOnPlayerInfoUpdated_Parms, BetAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Cpp_Personal_OnPlayerInfoUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Cpp_Personal_OnPlayerInfoUpdated__DelegateSignature_Statics::NewProp_Coins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Cpp_Personal_OnPlayerInfoUpdated__DelegateSignature_Statics::NewProp_BetAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Cpp_Personal_OnPlayerInfoUpdated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Cpp_Personal_OnPlayerInfoUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Cpp_Personal, nullptr, "OnPlayerInfoUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Cpp_Personal_OnPlayerInfoUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Cpp_Personal_OnPlayerInfoUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Cpp_Personal_OnPlayerInfoUpdated__DelegateSignature_Statics::_Script_Cpp_Personal_eventOnPlayerInfoUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Cpp_Personal_OnPlayerInfoUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Cpp_Personal_OnPlayerInfoUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Cpp_Personal_OnPlayerInfoUpdated__DelegateSignature_Statics::_Script_Cpp_Personal_eventOnPlayerInfoUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Cpp_Personal_OnPlayerInfoUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Cpp_Personal_OnPlayerInfoUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPlayerInfoUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnPlayerInfoUpdated, int32 Coins, int32 BetAmount)
{
	struct _Script_Cpp_Personal_eventOnPlayerInfoUpdated_Parms
	{
		int32 Coins;
		int32 BetAmount;
	};
	_Script_Cpp_Personal_eventOnPlayerInfoUpdated_Parms Parms;
	Parms.Coins=Coins;
	Parms.BetAmount=BetAmount;
	OnPlayerInfoUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPlayerInfoUpdated

// Begin Delegate FOnScoreUpdated
struct Z_Construct_UDelegateFunction_Cpp_Personal_OnScoreUpdated__DelegateSignature_Statics
{
	struct _Script_Cpp_Personal_eventOnScoreUpdated_Parms
	{
		int32 PlayerScore;
		int32 DealerScore;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4\xec\x99\x80 \xeb\x94\x9c\xeb\x9f\xac \xec\xa0\x90\xec\x88\x98 \xec\x9d\xb4\xeb\xb2\xa4\xed\x8a\xb8\n" },
#endif
		{ "ModuleRelativePath", "BlackjackGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4\xec\x99\x80 \xeb\x94\x9c\xeb\x9f\xac \xec\xa0\x90\xec\x88\x98 \xec\x9d\xb4\xeb\xb2\xa4\xed\x8a\xb8" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerScore;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DealerScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Cpp_Personal_OnScoreUpdated__DelegateSignature_Statics::NewProp_PlayerScore = { "PlayerScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Cpp_Personal_eventOnScoreUpdated_Parms, PlayerScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Cpp_Personal_OnScoreUpdated__DelegateSignature_Statics::NewProp_DealerScore = { "DealerScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Cpp_Personal_eventOnScoreUpdated_Parms, DealerScore), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Cpp_Personal_OnScoreUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Cpp_Personal_OnScoreUpdated__DelegateSignature_Statics::NewProp_PlayerScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Cpp_Personal_OnScoreUpdated__DelegateSignature_Statics::NewProp_DealerScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Cpp_Personal_OnScoreUpdated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Cpp_Personal_OnScoreUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Cpp_Personal, nullptr, "OnScoreUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Cpp_Personal_OnScoreUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Cpp_Personal_OnScoreUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Cpp_Personal_OnScoreUpdated__DelegateSignature_Statics::_Script_Cpp_Personal_eventOnScoreUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Cpp_Personal_OnScoreUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Cpp_Personal_OnScoreUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_Cpp_Personal_OnScoreUpdated__DelegateSignature_Statics::_Script_Cpp_Personal_eventOnScoreUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_Cpp_Personal_OnScoreUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Cpp_Personal_OnScoreUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnScoreUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnScoreUpdated, int32 PlayerScore, int32 DealerScore)
{
	struct _Script_Cpp_Personal_eventOnScoreUpdated_Parms
	{
		int32 PlayerScore;
		int32 DealerScore;
	};
	_Script_Cpp_Personal_eventOnScoreUpdated_Parms Parms;
	Parms.PlayerScore=PlayerScore;
	Parms.DealerScore=DealerScore;
	OnScoreUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnScoreUpdated

// Begin Class ABlackjackGameMode Function ConfirmBet
struct Z_Construct_UFunction_ABlackjackGameMode_ConfirmBet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "BlackjackGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlackjackGameMode_ConfirmBet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlackjackGameMode, nullptr, "ConfirmBet", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlackjackGameMode_ConfirmBet_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlackjackGameMode_ConfirmBet_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABlackjackGameMode_ConfirmBet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlackjackGameMode_ConfirmBet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlackjackGameMode::execConfirmBet)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ConfirmBet();
	P_NATIVE_END;
}
// End Class ABlackjackGameMode Function ConfirmBet

// Begin Class ABlackjackGameMode Function HandleAceChoice
struct Z_Construct_UFunction_ABlackjackGameMode_HandleAceChoice_Statics
{
	struct BlackjackGameMode_eventHandleAceChoice_Parms
	{
		int32 ChosenValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "BlackjackGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ChosenValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ABlackjackGameMode_HandleAceChoice_Statics::NewProp_ChosenValue = { "ChosenValue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackjackGameMode_eventHandleAceChoice_Parms, ChosenValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ABlackjackGameMode_HandleAceChoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ABlackjackGameMode_HandleAceChoice_Statics::NewProp_ChosenValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlackjackGameMode_HandleAceChoice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlackjackGameMode_HandleAceChoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlackjackGameMode, nullptr, "HandleAceChoice", nullptr, nullptr, Z_Construct_UFunction_ABlackjackGameMode_HandleAceChoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ABlackjackGameMode_HandleAceChoice_Statics::PropPointers), sizeof(Z_Construct_UFunction_ABlackjackGameMode_HandleAceChoice_Statics::BlackjackGameMode_eventHandleAceChoice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlackjackGameMode_HandleAceChoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlackjackGameMode_HandleAceChoice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ABlackjackGameMode_HandleAceChoice_Statics::BlackjackGameMode_eventHandleAceChoice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ABlackjackGameMode_HandleAceChoice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlackjackGameMode_HandleAceChoice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlackjackGameMode::execHandleAceChoice)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_ChosenValue);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleAceChoice(Z_Param_ChosenValue);
	P_NATIVE_END;
}
// End Class ABlackjackGameMode Function HandleAceChoice

// Begin Class ABlackjackGameMode Function PlayerHit
struct Z_Construct_UFunction_ABlackjackGameMode_PlayerHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "BlackjackGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlackjackGameMode_PlayerHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlackjackGameMode, nullptr, "PlayerHit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlackjackGameMode_PlayerHit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlackjackGameMode_PlayerHit_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABlackjackGameMode_PlayerHit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlackjackGameMode_PlayerHit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlackjackGameMode::execPlayerHit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerHit();
	P_NATIVE_END;
}
// End Class ABlackjackGameMode Function PlayerHit

// Begin Class ABlackjackGameMode Function PlayerSplit
struct Z_Construct_UFunction_ABlackjackGameMode_PlayerSplit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "BlackjackGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlackjackGameMode_PlayerSplit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlackjackGameMode, nullptr, "PlayerSplit", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlackjackGameMode_PlayerSplit_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlackjackGameMode_PlayerSplit_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABlackjackGameMode_PlayerSplit()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlackjackGameMode_PlayerSplit_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlackjackGameMode::execPlayerSplit)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerSplit();
	P_NATIVE_END;
}
// End Class ABlackjackGameMode Function PlayerSplit

// Begin Class ABlackjackGameMode Function PlayerStand
struct Z_Construct_UFunction_ABlackjackGameMode_PlayerStand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "BlackjackGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlackjackGameMode_PlayerStand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlackjackGameMode, nullptr, "PlayerStand", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlackjackGameMode_PlayerStand_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlackjackGameMode_PlayerStand_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABlackjackGameMode_PlayerStand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlackjackGameMode_PlayerStand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlackjackGameMode::execPlayerStand)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayerStand();
	P_NATIVE_END;
}
// End Class ABlackjackGameMode Function PlayerStand

// Begin Class ABlackjackGameMode Function StartGame
struct Z_Construct_UFunction_ABlackjackGameMode_StartGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xf0\x9f\x94\xb9 **\xea\xb2\x8c\xec\x9e\x84 \xed\x9d\x90\xeb\xa6\x84 \xea\xb4\x80\xeb\xa0\xa8 \xeb\xa9\x94\xec\x84\x9c\xeb\x93\x9c**\n" },
#endif
		{ "ModuleRelativePath", "BlackjackGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xf0\x9f\x94\xb9 **\xea\xb2\x8c\xec\x9e\x84 \xed\x9d\x90\xeb\xa6\x84 \xea\xb4\x80\xeb\xa0\xa8 \xeb\xa9\x94\xec\x84\x9c\xeb\x93\x9c**" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlackjackGameMode_StartGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlackjackGameMode, nullptr, "StartGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlackjackGameMode_StartGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlackjackGameMode_StartGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABlackjackGameMode_StartGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlackjackGameMode_StartGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlackjackGameMode::execStartGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartGame();
	P_NATIVE_END;
}
// End Class ABlackjackGameMode Function StartGame

// Begin Class ABlackjackGameMode
void ABlackjackGameMode::StaticRegisterNativesABlackjackGameMode()
{
	UClass* Class = ABlackjackGameMode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ConfirmBet", &ABlackjackGameMode::execConfirmBet },
		{ "HandleAceChoice", &ABlackjackGameMode::execHandleAceChoice },
		{ "PlayerHit", &ABlackjackGameMode::execPlayerHit },
		{ "PlayerSplit", &ABlackjackGameMode::execPlayerSplit },
		{ "PlayerStand", &ABlackjackGameMode::execPlayerStand },
		{ "StartGame", &ABlackjackGameMode::execStartGame },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABlackjackGameMode);
UClass* Z_Construct_UClass_ABlackjackGameMode_NoRegister()
{
	return ABlackjackGameMode::StaticClass();
}
struct Z_Construct_UClass_ABlackjackGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "BlackjackGameMode.h" },
		{ "ModuleRelativePath", "BlackjackGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentState_MetaData[] = {
		{ "Category", "GameState" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// **\xed\x98\x84\xec\x9e\xac \xea\xb2\x8c\xec\x9e\x84 \xec\x83\x81\xed\x83\x9c**\n" },
#endif
		{ "ModuleRelativePath", "BlackjackGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "**\xed\x98\x84\xec\x9e\xac \xea\xb2\x8c\xec\x9e\x84 \xec\x83\x81\xed\x83\x9c**" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerClass_MetaData[] = {
		{ "Category", "BlackjackActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// **\xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xec\x84\xa4\xec\xa0\x95\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xeb\x8a\x94 \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4 \xeb\xb3\x80\xec\x88\x98**\n" },
#endif
		{ "ModuleRelativePath", "BlackjackGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "**\xeb\xb8\x94\xeb\xa3\xa8\xed\x94\x84\xeb\xa6\xb0\xed\x8a\xb8\xec\x97\x90\xec\x84\x9c \xec\x84\xa4\xec\xa0\x95\xed\x95\xa0 \xec\x88\x98 \xec\x9e\x88\xeb\x8a\x94 \xed\x81\xb4\xeb\x9e\x98\xec\x8a\xa4 \xeb\xb3\x80\xec\x88\x98**" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DealerClass_MetaData[] = {
		{ "Category", "BlackjackActor" },
		{ "ModuleRelativePath", "BlackjackGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TableClass_MetaData[] = {
		{ "Category", "BlackjackActor" },
		{ "ModuleRelativePath", "BlackjackGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[] = {
		{ "Category", "BlackjackActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// **\xec\x8b\xa4\xec\xa0\x9c \xec\x9d\xb8\xec\x8a\xa4\xed\x84\xb4\xec\x8a\xa4**\n" },
#endif
		{ "ModuleRelativePath", "BlackjackGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "**\xec\x8b\xa4\xec\xa0\x9c \xec\x9d\xb8\xec\x8a\xa4\xed\x84\xb4\xec\x8a\xa4**" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dealer_MetaData[] = {
		{ "Category", "BlackjackActor" },
		{ "ModuleRelativePath", "BlackjackGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Table_MetaData[] = {
		{ "Category", "BlackjackActor" },
		{ "ModuleRelativePath", "BlackjackGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Deck_MetaData[] = {
		{ "Category", "BlackjackActor" },
		{ "ModuleRelativePath", "BlackjackGameMode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPlayerInfoUpdated_MetaData[] = {
		{ "Category", "GameMode|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xf0\x9f\x8e\xb2 **\xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xec\xa0\x95\xeb\xb3\xb4 \xec\x97\x85\xeb\x8d\xb0\xec\x9d\xb4\xed\x8a\xb8 \xec\x9d\xb4\xeb\xb2\xa4\xed\x8a\xb8 (UI \xec\x97\xb0\xeb\x8f\x99)**\n" },
#endif
		{ "ModuleRelativePath", "BlackjackGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xf0\x9f\x8e\xb2 **\xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xec\xa0\x95\xeb\xb3\xb4 \xec\x97\x85\xeb\x8d\xb0\xec\x9d\xb4\xed\x8a\xb8 \xec\x9d\xb4\xeb\xb2\xa4\xed\x8a\xb8 (UI \xec\x97\xb0\xeb\x8f\x99)**" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnScoreUpdated_MetaData[] = {
		{ "Category", "GameMode|Events" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// **\xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4\xec\x99\x80 \xeb\x94\x9c\xeb\x9f\xac \xec\xa0\x90\xec\x88\x98 \xec\xb6\x9c\xeb\xa0\xa5 \xec\x97\x85\xeb\x8d\xb0\xec\x9d\xb4\xed\x8a\xb8 \xec\x9d\xb4\xeb\xb2\xa4\xed\x8a\xb8 (UI \xec\x97\xb0\xeb\x8f\x99)**\n" },
#endif
		{ "ModuleRelativePath", "BlackjackGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "**\xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4\xec\x99\x80 \xeb\x94\x9c\xeb\x9f\xac \xec\xa0\x90\xec\x88\x98 \xec\xb6\x9c\xeb\xa0\xa5 \xec\x97\x85\xeb\x8d\xb0\xec\x9d\xb4\xed\x8a\xb8 \xec\x9d\xb4\xeb\xb2\xa4\xed\x8a\xb8 (UI \xec\x97\xb0\xeb\x8f\x99)**" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackjackHUDClass_MetaData[] = {
		{ "Category", "UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xf0\x9f\x94\xb9 **UI \xea\xb4\x80\xeb\xa0\xa8 \xeb\xb3\x80\xec\x88\x98**\n" },
#endif
		{ "ModuleRelativePath", "BlackjackGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xf0\x9f\x94\xb9 **UI \xea\xb4\x80\xeb\xa0\xa8 \xeb\xb3\x80\xec\x88\x98**" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackjackHUD_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x9c\x85 `UUserWidget` \xe2\x86\x92 `UBlackjackHUD`\xeb\xa1\x9c \xeb\xb3\x80\xea\xb2\xbd\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BlackjackGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x9c\x85 `UUserWidget` \xe2\x86\x92 `UBlackjackHUD`\xeb\xa1\x9c \xeb\xb3\x80\xea\xb2\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RestartTimerHandle_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x9c\x85 \xeb\xaa\x85\xed\x99\x95\xed\x95\x9c \xed\x83\x80\xec\x9e\x85 \xec\xa7\x80\xec\xa0\x95\n" },
#endif
		{ "ModuleRelativePath", "BlackjackGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x9c\x85 \xeb\xaa\x85\xed\x99\x95\xed\x95\x9c \xed\x83\x80\xec\x9e\x85 \xec\xa7\x80\xec\xa0\x95" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FClassPropertyParams NewProp_PlayerClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DealerClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_TableClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dealer;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Table;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Deck;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerInfoUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnScoreUpdated;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BlackjackHUDClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackjackHUD;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RestartTimerHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlackjackGameMode_ConfirmBet, "ConfirmBet" }, // 3228921421
		{ &Z_Construct_UFunction_ABlackjackGameMode_HandleAceChoice, "HandleAceChoice" }, // 904791562
		{ &Z_Construct_UFunction_ABlackjackGameMode_PlayerHit, "PlayerHit" }, // 2606702037
		{ &Z_Construct_UFunction_ABlackjackGameMode_PlayerSplit, "PlayerSplit" }, // 1913210306
		{ &Z_Construct_UFunction_ABlackjackGameMode_PlayerStand, "PlayerStand" }, // 4248726134
		{ &Z_Construct_UFunction_ABlackjackGameMode_StartGame, "StartGame" }, // 384935422
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlackjackGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlackjackGameMode, CurrentState), Z_Construct_UEnum_Cpp_Personal_EGameState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 3021376259
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_PlayerClass = { "PlayerClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlackjackGameMode, PlayerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_APlayerActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerClass_MetaData), NewProp_PlayerClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_DealerClass = { "DealerClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlackjackGameMode, DealerClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ADealerActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DealerClass_MetaData), NewProp_DealerClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_TableClass = { "TableClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlackjackGameMode, TableClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ATableActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TableClass_MetaData), NewProp_TableClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlackjackGameMode, Player), Z_Construct_UClass_APlayerActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Player_MetaData), NewProp_Player_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_Dealer = { "Dealer", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlackjackGameMode, Dealer), Z_Construct_UClass_ADealerActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dealer_MetaData), NewProp_Dealer_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlackjackGameMode, Table), Z_Construct_UClass_ATableActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Table_MetaData), NewProp_Table_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_Deck = { "Deck", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlackjackGameMode, Deck), Z_Construct_UClass_UDeck_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Deck_MetaData), NewProp_Deck_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_OnPlayerInfoUpdated = { "OnPlayerInfoUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlackjackGameMode, OnPlayerInfoUpdated), Z_Construct_UDelegateFunction_Cpp_Personal_OnPlayerInfoUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPlayerInfoUpdated_MetaData), NewProp_OnPlayerInfoUpdated_MetaData) }; // 1292802319
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_OnScoreUpdated = { "OnScoreUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlackjackGameMode, OnScoreUpdated), Z_Construct_UDelegateFunction_Cpp_Personal_OnScoreUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnScoreUpdated_MetaData), NewProp_OnScoreUpdated_MetaData) }; // 3551236112
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_BlackjackHUDClass = { "BlackjackHUDClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlackjackGameMode, BlackjackHUDClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UBlackjackHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackjackHUDClass_MetaData), NewProp_BlackjackHUDClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_BlackjackHUD = { "BlackjackHUD", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlackjackGameMode, BlackjackHUD), Z_Construct_UClass_UBlackjackHUD_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackjackHUD_MetaData), NewProp_BlackjackHUD_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_RestartTimerHandle = { "RestartTimerHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlackjackGameMode, RestartTimerHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RestartTimerHandle_MetaData), NewProp_RestartTimerHandle_MetaData) }; // 756291145
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlackjackGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_PlayerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_DealerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_TableClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_Dealer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_Table,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_Deck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_OnPlayerInfoUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_OnScoreUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_BlackjackHUDClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_BlackjackHUD,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_RestartTimerHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlackjackGameMode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ABlackjackGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Cpp_Personal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ABlackjackGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ABlackjackGameMode_Statics::ClassParams = {
	&ABlackjackGameMode::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ABlackjackGameMode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ABlackjackGameMode_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ABlackjackGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ABlackjackGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ABlackjackGameMode()
{
	if (!Z_Registration_Info_UClass_ABlackjackGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABlackjackGameMode.OuterSingleton, Z_Construct_UClass_ABlackjackGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ABlackjackGameMode.OuterSingleton;
}
template<> CPP_PERSONAL_API UClass* StaticClass<ABlackjackGameMode>()
{
	return ABlackjackGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ABlackjackGameMode);
ABlackjackGameMode::~ABlackjackGameMode() {}
// End Class ABlackjackGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_BlackjackGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ABlackjackGameMode, ABlackjackGameMode::StaticClass, TEXT("ABlackjackGameMode"), &Z_Registration_Info_UClass_ABlackjackGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlackjackGameMode), 155311174U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_BlackjackGameMode_h_474511816(TEXT("/Script/Cpp_Personal"),
	Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_BlackjackGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_BlackjackGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
