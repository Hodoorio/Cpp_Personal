// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cpp_Personal/UI/BlackjackHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackjackHUD() {}

// Begin Cross Module References
CPP_PERSONAL_API UClass* Z_Construct_UClass_UBlackjackHUD();
CPP_PERSONAL_API UClass* Z_Construct_UClass_UBlackjackHUD_NoRegister();
UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_Cpp_Personal();
// End Cross Module References

// Begin Class UBlackjackHUD Function HideAceChoice
struct Z_Construct_UFunction_UBlackjackHUD_HideAceChoice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xf0\x9f\x94\xb9 \xec\x97\x90\xec\x9d\xb4\xec\x8a\xa4 \xeb\xb2\x84\xed\x8a\xbc \xec\x88\xa8\xea\xb9\x80\n" },
#endif
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xf0\x9f\x94\xb9 \xec\x97\x90\xec\x9d\xb4\xec\x8a\xa4 \xeb\xb2\x84\xed\x8a\xbc \xec\x88\xa8\xea\xb9\x80" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackjackHUD_HideAceChoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackjackHUD, nullptr, "HideAceChoice", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_HideAceChoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackjackHUD_HideAceChoice_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBlackjackHUD_HideAceChoice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackjackHUD_HideAceChoice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackjackHUD::execHideAceChoice)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HideAceChoice();
	P_NATIVE_END;
}
// End Class UBlackjackHUD Function HideAceChoice

// Begin Class UBlackjackHUD Function InitializeUI
struct Z_Construct_UFunction_UBlackjackHUD_InitializeUI_Statics
{
	struct BlackjackHUD_eventInitializeUI_Parms
	{
		int32 StartingCoins;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Blackjack UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x85\x8d\xec\x8a\xa4\xed\x8a\xb8 \xed\x81\xac\xea\xb8\xb0 \xed\x8c\x8c\xeb\x9d\xbc\xeb\xaf\xb8\xed\x84\xb0 \xec\xb6\x94\xea\xb0\x80\n" },
#endif
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x85\x8d\xec\x8a\xa4\xed\x8a\xb8 \xed\x81\xac\xea\xb8\xb0 \xed\x8c\x8c\xeb\x9d\xbc\xeb\xaf\xb8\xed\x84\xb0 \xec\xb6\x94\xea\xb0\x80" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_StartingCoins;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlackjackHUD_InitializeUI_Statics::NewProp_StartingCoins = { "StartingCoins", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackjackHUD_eventInitializeUI_Parms, StartingCoins), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackjackHUD_InitializeUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackjackHUD_InitializeUI_Statics::NewProp_StartingCoins,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_InitializeUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackjackHUD_InitializeUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackjackHUD, nullptr, "InitializeUI", nullptr, nullptr, Z_Construct_UFunction_UBlackjackHUD_InitializeUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_InitializeUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackjackHUD_InitializeUI_Statics::BlackjackHUD_eventInitializeUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_InitializeUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackjackHUD_InitializeUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlackjackHUD_InitializeUI_Statics::BlackjackHUD_eventInitializeUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlackjackHUD_InitializeUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackjackHUD_InitializeUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackjackHUD::execInitializeUI)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_StartingCoins);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeUI(Z_Param_StartingCoins);
	P_NATIVE_END;
}
// End Class UBlackjackHUD Function InitializeUI

// Begin Class UBlackjackHUD Function NextGame
struct Z_Construct_UFunction_UBlackjackHUD_NextGame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Blackjack UI" },
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackjackHUD_NextGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackjackHUD, nullptr, "NextGame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_NextGame_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackjackHUD_NextGame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBlackjackHUD_NextGame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackjackHUD_NextGame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackjackHUD::execNextGame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NextGame();
	P_NATIVE_END;
}
// End Class UBlackjackHUD Function NextGame

// Begin Class UBlackjackHUD Function OnAceAsElevenClicked
struct Z_Construct_UFunction_UBlackjackHUD_OnAceAsElevenClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackjackHUD_OnAceAsElevenClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackjackHUD, nullptr, "OnAceAsElevenClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_OnAceAsElevenClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackjackHUD_OnAceAsElevenClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBlackjackHUD_OnAceAsElevenClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackjackHUD_OnAceAsElevenClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackjackHUD::execOnAceAsElevenClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAceAsElevenClicked();
	P_NATIVE_END;
}
// End Class UBlackjackHUD Function OnAceAsElevenClicked

// Begin Class UBlackjackHUD Function OnAceAsOneClicked
struct Z_Construct_UFunction_UBlackjackHUD_OnAceAsOneClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackjackHUD_OnAceAsOneClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackjackHUD, nullptr, "OnAceAsOneClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_OnAceAsOneClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackjackHUD_OnAceAsOneClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBlackjackHUD_OnAceAsOneClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackjackHUD_OnAceAsOneClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackjackHUD::execOnAceAsOneClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnAceAsOneClicked();
	P_NATIVE_END;
}
// End Class UBlackjackHUD Function OnAceAsOneClicked

// Begin Class UBlackjackHUD Function OnBet100Clicked
struct Z_Construct_UFunction_UBlackjackHUD_OnBet100Clicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackjackHUD_OnBet100Clicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackjackHUD, nullptr, "OnBet100Clicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_OnBet100Clicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackjackHUD_OnBet100Clicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBlackjackHUD_OnBet100Clicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackjackHUD_OnBet100Clicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackjackHUD::execOnBet100Clicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBet100Clicked();
	P_NATIVE_END;
}
// End Class UBlackjackHUD Function OnBet100Clicked

// Begin Class UBlackjackHUD Function OnBet10Clicked
struct Z_Construct_UFunction_UBlackjackHUD_OnBet10Clicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackjackHUD_OnBet10Clicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackjackHUD, nullptr, "OnBet10Clicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_OnBet10Clicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackjackHUD_OnBet10Clicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBlackjackHUD_OnBet10Clicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackjackHUD_OnBet10Clicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackjackHUD::execOnBet10Clicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBet10Clicked();
	P_NATIVE_END;
}
// End Class UBlackjackHUD Function OnBet10Clicked

// Begin Class UBlackjackHUD Function OnBet50Clicked
struct Z_Construct_UFunction_UBlackjackHUD_OnBet50Clicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackjackHUD_OnBet50Clicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackjackHUD, nullptr, "OnBet50Clicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_OnBet50Clicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackjackHUD_OnBet50Clicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBlackjackHUD_OnBet50Clicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackjackHUD_OnBet50Clicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackjackHUD::execOnBet50Clicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBet50Clicked();
	P_NATIVE_END;
}
// End Class UBlackjackHUD Function OnBet50Clicked

// Begin Class UBlackjackHUD Function OnBetClicked
struct Z_Construct_UFunction_UBlackjackHUD_OnBetClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackjackHUD_OnBetClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackjackHUD, nullptr, "OnBetClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_OnBetClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackjackHUD_OnBetClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBlackjackHUD_OnBetClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackjackHUD_OnBetClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackjackHUD::execOnBetClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBetClicked();
	P_NATIVE_END;
}
// End Class UBlackjackHUD Function OnBetClicked

// Begin Class UBlackjackHUD Function OnBetMaxClicked
struct Z_Construct_UFunction_UBlackjackHUD_OnBetMaxClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackjackHUD_OnBetMaxClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackjackHUD, nullptr, "OnBetMaxClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_OnBetMaxClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackjackHUD_OnBetMaxClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBlackjackHUD_OnBetMaxClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackjackHUD_OnBetMaxClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackjackHUD::execOnBetMaxClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBetMaxClicked();
	P_NATIVE_END;
}
// End Class UBlackjackHUD Function OnBetMaxClicked

// Begin Class UBlackjackHUD Function OnBetResetClicked
struct Z_Construct_UFunction_UBlackjackHUD_OnBetResetClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackjackHUD_OnBetResetClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackjackHUD, nullptr, "OnBetResetClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_OnBetResetClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackjackHUD_OnBetResetClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBlackjackHUD_OnBetResetClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackjackHUD_OnBetResetClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackjackHUD::execOnBetResetClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnBetResetClicked();
	P_NATIVE_END;
}
// End Class UBlackjackHUD Function OnBetResetClicked

// Begin Class UBlackjackHUD Function OnHitClicked
struct Z_Construct_UFunction_UBlackjackHUD_OnHitClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackjackHUD_OnHitClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackjackHUD, nullptr, "OnHitClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_OnHitClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackjackHUD_OnHitClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBlackjackHUD_OnHitClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackjackHUD_OnHitClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackjackHUD::execOnHitClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnHitClicked();
	P_NATIVE_END;
}
// End Class UBlackjackHUD Function OnHitClicked

// Begin Class UBlackjackHUD Function OnNextGameClicked
struct Z_Construct_UFunction_UBlackjackHUD_OnNextGameClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackjackHUD_OnNextGameClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackjackHUD, nullptr, "OnNextGameClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_OnNextGameClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackjackHUD_OnNextGameClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBlackjackHUD_OnNextGameClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackjackHUD_OnNextGameClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackjackHUD::execOnNextGameClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnNextGameClicked();
	P_NATIVE_END;
}
// End Class UBlackjackHUD Function OnNextGameClicked

// Begin Class UBlackjackHUD Function OnSplitClicked
struct Z_Construct_UFunction_UBlackjackHUD_OnSplitClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackjackHUD_OnSplitClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackjackHUD, nullptr, "OnSplitClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_OnSplitClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackjackHUD_OnSplitClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBlackjackHUD_OnSplitClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackjackHUD_OnSplitClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackjackHUD::execOnSplitClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSplitClicked();
	P_NATIVE_END;
}
// End Class UBlackjackHUD Function OnSplitClicked

// Begin Class UBlackjackHUD Function OnStandClicked
struct Z_Construct_UFunction_UBlackjackHUD_OnStandClicked_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackjackHUD_OnStandClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackjackHUD, nullptr, "OnStandClicked", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_OnStandClicked_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackjackHUD_OnStandClicked_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBlackjackHUD_OnStandClicked()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackjackHUD_OnStandClicked_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackjackHUD::execOnStandClicked)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnStandClicked();
	P_NATIVE_END;
}
// End Class UBlackjackHUD Function OnStandClicked

// Begin Class UBlackjackHUD Function SetActionButtonsEnabled
struct Z_Construct_UFunction_UBlackjackHUD_SetActionButtonsEnabled_Statics
{
	struct BlackjackHUD_eventSetActionButtonsEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UI \xeb\xb2\x84\xed\x8a\xbc \xed\x99\x9c\xec\x84\xb1\xed\x99\x94/\xeb\xb9\x84\xed\x99\x9c\xec\x84\xb1\xed\x99\x94 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI \xeb\xb2\x84\xed\x8a\xbc \xed\x99\x9c\xec\x84\xb1\xed\x99\x94/\xeb\xb9\x84\xed\x99\x9c\xec\x84\xb1\xed\x99\x94 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBlackjackHUD_SetActionButtonsEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((BlackjackHUD_eventSetActionButtonsEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlackjackHUD_SetActionButtonsEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlackjackHUD_eventSetActionButtonsEnabled_Parms), &Z_Construct_UFunction_UBlackjackHUD_SetActionButtonsEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackjackHUD_SetActionButtonsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackjackHUD_SetActionButtonsEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_SetActionButtonsEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackjackHUD_SetActionButtonsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackjackHUD, nullptr, "SetActionButtonsEnabled", nullptr, nullptr, Z_Construct_UFunction_UBlackjackHUD_SetActionButtonsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_SetActionButtonsEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackjackHUD_SetActionButtonsEnabled_Statics::BlackjackHUD_eventSetActionButtonsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_SetActionButtonsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackjackHUD_SetActionButtonsEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlackjackHUD_SetActionButtonsEnabled_Statics::BlackjackHUD_eventSetActionButtonsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlackjackHUD_SetActionButtonsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackjackHUD_SetActionButtonsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackjackHUD::execSetActionButtonsEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetActionButtonsEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class UBlackjackHUD Function SetActionButtonsEnabled

// Begin Class UBlackjackHUD Function SetBetButtonsEnabled
struct Z_Construct_UFunction_UBlackjackHUD_SetBetButtonsEnabled_Statics
{
	struct BlackjackHUD_eventSetBetButtonsEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UBlackjackHUD_SetBetButtonsEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((BlackjackHUD_eventSetBetButtonsEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBlackjackHUD_SetBetButtonsEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BlackjackHUD_eventSetBetButtonsEnabled_Parms), &Z_Construct_UFunction_UBlackjackHUD_SetBetButtonsEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackjackHUD_SetBetButtonsEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackjackHUD_SetBetButtonsEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_SetBetButtonsEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackjackHUD_SetBetButtonsEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackjackHUD, nullptr, "SetBetButtonsEnabled", nullptr, nullptr, Z_Construct_UFunction_UBlackjackHUD_SetBetButtonsEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_SetBetButtonsEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackjackHUD_SetBetButtonsEnabled_Statics::BlackjackHUD_eventSetBetButtonsEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_SetBetButtonsEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackjackHUD_SetBetButtonsEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlackjackHUD_SetBetButtonsEnabled_Statics::BlackjackHUD_eventSetBetButtonsEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlackjackHUD_SetBetButtonsEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackjackHUD_SetBetButtonsEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackjackHUD::execSetBetButtonsEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetBetButtonsEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class UBlackjackHUD Function SetBetButtonsEnabled

// Begin Class UBlackjackHUD Function ShowAceChoice
struct Z_Construct_UFunction_UBlackjackHUD_ShowAceChoice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xf0\x9f\x94\xb9 \xec\x97\x90\xec\x9d\xb4\xec\x8a\xa4 \xec\x84\xa0\xed\x83\x9d \xeb\xb2\x84\xed\x8a\xbc UI \xed\x91\x9c\xec\x8b\x9c\n" },
#endif
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xf0\x9f\x94\xb9 \xec\x97\x90\xec\x9d\xb4\xec\x8a\xa4 \xec\x84\xa0\xed\x83\x9d \xeb\xb2\x84\xed\x8a\xbc UI \xed\x91\x9c\xec\x8b\x9c" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackjackHUD_ShowAceChoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackjackHUD, nullptr, "ShowAceChoice", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_ShowAceChoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackjackHUD_ShowAceChoice_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBlackjackHUD_ShowAceChoice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackjackHUD_ShowAceChoice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackjackHUD::execShowAceChoice)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowAceChoice();
	P_NATIVE_END;
}
// End Class UBlackjackHUD Function ShowAceChoice

// Begin Class UBlackjackHUD Function ShowNextGameButton
struct Z_Construct_UFunction_UBlackjackHUD_ShowNextGameButton_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackjackHUD_ShowNextGameButton_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackjackHUD, nullptr, "ShowNextGameButton", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_ShowNextGameButton_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackjackHUD_ShowNextGameButton_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UBlackjackHUD_ShowNextGameButton()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackjackHUD_ShowNextGameButton_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackjackHUD::execShowNextGameButton)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ShowNextGameButton();
	P_NATIVE_END;
}
// End Class UBlackjackHUD Function ShowNextGameButton

// Begin Class UBlackjackHUD Function UpdateMessageText
struct Z_Construct_UFunction_UBlackjackHUD_UpdateMessageText_Statics
{
	struct BlackjackHUD_eventUpdateMessageText_Parms
	{
		FString Message;
		float TextSize;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Blackjack UI" },
		{ "CPP_Default_TextSize", "250.000000" },
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TextSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlackjackHUD_UpdateMessageText_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackjackHUD_eventUpdateMessageText_Parms, Message), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Message_MetaData), NewProp_Message_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UBlackjackHUD_UpdateMessageText_Statics::NewProp_TextSize = { "TextSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackjackHUD_eventUpdateMessageText_Parms, TextSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackjackHUD_UpdateMessageText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackjackHUD_UpdateMessageText_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackjackHUD_UpdateMessageText_Statics::NewProp_TextSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_UpdateMessageText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackjackHUD_UpdateMessageText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackjackHUD, nullptr, "UpdateMessageText", nullptr, nullptr, Z_Construct_UFunction_UBlackjackHUD_UpdateMessageText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_UpdateMessageText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackjackHUD_UpdateMessageText_Statics::BlackjackHUD_eventUpdateMessageText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_UpdateMessageText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackjackHUD_UpdateMessageText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlackjackHUD_UpdateMessageText_Statics::BlackjackHUD_eventUpdateMessageText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlackjackHUD_UpdateMessageText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackjackHUD_UpdateMessageText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackjackHUD::execUpdateMessageText)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Message);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TextSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateMessageText(Z_Param_Message,Z_Param_TextSize);
	P_NATIVE_END;
}
// End Class UBlackjackHUD Function UpdateMessageText

// Begin Class UBlackjackHUD Function UpdatePlayerInfo
struct Z_Construct_UFunction_UBlackjackHUD_UpdatePlayerInfo_Statics
{
	struct BlackjackHUD_eventUpdatePlayerInfo_Parms
	{
		int32 PlayerCoins;
		int32 CurrentBet;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Blackjack UI" },
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayerCoins;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentBet;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlackjackHUD_UpdatePlayerInfo_Statics::NewProp_PlayerCoins = { "PlayerCoins", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackjackHUD_eventUpdatePlayerInfo_Parms, PlayerCoins), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBlackjackHUD_UpdatePlayerInfo_Statics::NewProp_CurrentBet = { "CurrentBet", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackjackHUD_eventUpdatePlayerInfo_Parms, CurrentBet), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackjackHUD_UpdatePlayerInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackjackHUD_UpdatePlayerInfo_Statics::NewProp_PlayerCoins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackjackHUD_UpdatePlayerInfo_Statics::NewProp_CurrentBet,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_UpdatePlayerInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackjackHUD_UpdatePlayerInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackjackHUD, nullptr, "UpdatePlayerInfo", nullptr, nullptr, Z_Construct_UFunction_UBlackjackHUD_UpdatePlayerInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_UpdatePlayerInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackjackHUD_UpdatePlayerInfo_Statics::BlackjackHUD_eventUpdatePlayerInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_UpdatePlayerInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackjackHUD_UpdatePlayerInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlackjackHUD_UpdatePlayerInfo_Statics::BlackjackHUD_eventUpdatePlayerInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlackjackHUD_UpdatePlayerInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackjackHUD_UpdatePlayerInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackjackHUD::execUpdatePlayerInfo)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_PlayerCoins);
	P_GET_PROPERTY(FIntProperty,Z_Param_CurrentBet);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdatePlayerInfo(Z_Param_PlayerCoins,Z_Param_CurrentBet);
	P_NATIVE_END;
}
// End Class UBlackjackHUD Function UpdatePlayerInfo

// Begin Class UBlackjackHUD Function UpdateScores
struct Z_Construct_UFunction_UBlackjackHUD_UpdateScores_Statics
{
	struct BlackjackHUD_eventUpdateScores_Parms
	{
		FString PlayerScore;
		FString DealerScore;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xa0\x90\xec\x88\x98 \xec\x97\x85\xeb\x8d\xb0\xec\x9d\xb4\xed\x8a\xb8 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xa0\x90\xec\x88\x98 \xec\x97\x85\xeb\x8d\xb0\xec\x9d\xb4\xed\x8a\xb8 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerScore_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DealerScore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PlayerScore;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DealerScore;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlackjackHUD_UpdateScores_Statics::NewProp_PlayerScore = { "PlayerScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackjackHUD_eventUpdateScores_Parms, PlayerScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerScore_MetaData), NewProp_PlayerScore_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBlackjackHUD_UpdateScores_Statics::NewProp_DealerScore = { "DealerScore", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BlackjackHUD_eventUpdateScores_Parms, DealerScore), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DealerScore_MetaData), NewProp_DealerScore_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBlackjackHUD_UpdateScores_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackjackHUD_UpdateScores_Statics::NewProp_PlayerScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBlackjackHUD_UpdateScores_Statics::NewProp_DealerScore,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_UpdateScores_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBlackjackHUD_UpdateScores_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBlackjackHUD, nullptr, "UpdateScores", nullptr, nullptr, Z_Construct_UFunction_UBlackjackHUD_UpdateScores_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_UpdateScores_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBlackjackHUD_UpdateScores_Statics::BlackjackHUD_eventUpdateScores_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBlackjackHUD_UpdateScores_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBlackjackHUD_UpdateScores_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UBlackjackHUD_UpdateScores_Statics::BlackjackHUD_eventUpdateScores_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UBlackjackHUD_UpdateScores()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBlackjackHUD_UpdateScores_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UBlackjackHUD::execUpdateScores)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PlayerScore);
	P_GET_PROPERTY(FStrProperty,Z_Param_DealerScore);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateScores(Z_Param_PlayerScore,Z_Param_DealerScore);
	P_NATIVE_END;
}
// End Class UBlackjackHUD Function UpdateScores

// Begin Class UBlackjackHUD
void UBlackjackHUD::StaticRegisterNativesUBlackjackHUD()
{
	UClass* Class = UBlackjackHUD::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HideAceChoice", &UBlackjackHUD::execHideAceChoice },
		{ "InitializeUI", &UBlackjackHUD::execInitializeUI },
		{ "NextGame", &UBlackjackHUD::execNextGame },
		{ "OnAceAsElevenClicked", &UBlackjackHUD::execOnAceAsElevenClicked },
		{ "OnAceAsOneClicked", &UBlackjackHUD::execOnAceAsOneClicked },
		{ "OnBet100Clicked", &UBlackjackHUD::execOnBet100Clicked },
		{ "OnBet10Clicked", &UBlackjackHUD::execOnBet10Clicked },
		{ "OnBet50Clicked", &UBlackjackHUD::execOnBet50Clicked },
		{ "OnBetClicked", &UBlackjackHUD::execOnBetClicked },
		{ "OnBetMaxClicked", &UBlackjackHUD::execOnBetMaxClicked },
		{ "OnBetResetClicked", &UBlackjackHUD::execOnBetResetClicked },
		{ "OnHitClicked", &UBlackjackHUD::execOnHitClicked },
		{ "OnNextGameClicked", &UBlackjackHUD::execOnNextGameClicked },
		{ "OnSplitClicked", &UBlackjackHUD::execOnSplitClicked },
		{ "OnStandClicked", &UBlackjackHUD::execOnStandClicked },
		{ "SetActionButtonsEnabled", &UBlackjackHUD::execSetActionButtonsEnabled },
		{ "SetBetButtonsEnabled", &UBlackjackHUD::execSetBetButtonsEnabled },
		{ "ShowAceChoice", &UBlackjackHUD::execShowAceChoice },
		{ "ShowNextGameButton", &UBlackjackHUD::execShowNextGameButton },
		{ "UpdateMessageText", &UBlackjackHUD::execUpdateMessageText },
		{ "UpdatePlayerInfo", &UBlackjackHUD::execUpdatePlayerInfo },
		{ "UpdateScores", &UBlackjackHUD::execUpdateScores },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBlackjackHUD);
UClass* Z_Construct_UClass_UBlackjackHUD_NoRegister()
{
	return UBlackjackHUD::StaticClass();
}
struct Z_Construct_UClass_UBlackjackHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "UI/BlackjackHUD.h" },
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TXT_PlayerCoins_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xf0\x9f\x9f\xa2 \xec\xbd\x94\xec\x9d\xb8 \xeb\xb0\x8f \xeb\xb2\xa0\xed\x8c\x85 \xec\xa0\x95\xeb\xb3\xb4 \xed\x91\x9c\xec\x8b\x9c\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xf0\x9f\x9f\xa2 \xec\xbd\x94\xec\x9d\xb8 \xeb\xb0\x8f \xeb\xb2\xa0\xed\x8c\x85 \xec\xa0\x95\xeb\xb3\xb4 \xed\x91\x9c\xec\x8b\x9c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TXT_BetAmount_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TXT_Message_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BTN_Hit_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xf0\x9f\x9f\xa2 \xeb\xb2\x84\xed\x8a\xbc\xeb\x93\xa4\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xf0\x9f\x9f\xa2 \xeb\xb2\x84\xed\x8a\xbc\xeb\x93\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BTN_Stand_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BTN_Split_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BTN_Bet10_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BTN_Bet50_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BTN_Bet100_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BTN_BetMax_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BTN_BetReset_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\xb2\xa0\xed\x8c\x85 \xea\xb8\x88\xec\x95\xa1 \xeb\xa6\xac\xec\x85\x8b \xeb\xb2\x84\xed\x8a\xbc\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb2\xa0\xed\x8c\x85 \xea\xb8\x88\xec\x95\xa1 \xeb\xa6\xac\xec\x85\x8b \xeb\xb2\x84\xed\x8a\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BTN_Bet_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BTN_AceAsOne_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xf0\x9f\x94\xb9 A \xec\x84\xa0\xed\x83\x9d \xeb\xb2\x84\xed\x8a\xbc\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xf0\x9f\x94\xb9 A \xec\x84\xa0\xed\x83\x9d \xeb\xb2\x84\xed\x8a\xbc" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BTN_AceAsEleven_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Ace_Image_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// A \xec\x98\x88\xec\x8b\x9c \xec\x9d\xb4\xeb\xaf\xb8\xec\xa7\x80\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A \xec\x98\x88\xec\x8b\x9c \xec\x9d\xb4\xeb\xaf\xb8\xec\xa7\x80" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TXT_PlayerScore_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xec\xa0\x90\xec\x88\x98 UI\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xec\xa0\x90\xec\x88\x98 UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TXT_DealerScore_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\x94\x9c\xeb\x9f\xac \xec\xa0\x90\xec\x88\x98 UI\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x94\x9c\xeb\x9f\xac \xec\xa0\x90\xec\x88\x98 UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BTN_NextGame_MetaData[] = {
		{ "BindWidget", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\x8b\xa4\xec\x9d\x8c \xea\xb2\x8c\xec\x9e\x84 \xec\x9d\xb4\xeb\x8f\x99 \xeb\xb2\x84\xed\x8a\xbc\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UI/BlackjackHUD.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x8b\xa4\xec\x9d\x8c \xea\xb2\x8c\xec\x9e\x84 \xec\x9d\xb4\xeb\x8f\x99 \xeb\xb2\x84\xed\x8a\xbc" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TXT_PlayerCoins;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TXT_BetAmount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TXT_Message;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BTN_Hit;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BTN_Stand;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BTN_Split;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BTN_Bet10;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BTN_Bet50;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BTN_Bet100;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BTN_BetMax;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BTN_BetReset;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BTN_Bet;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BTN_AceAsOne;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BTN_AceAsEleven;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Ace_Image;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TXT_PlayerScore;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TXT_DealerScore;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BTN_NextGame;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UBlackjackHUD_HideAceChoice, "HideAceChoice" }, // 580681871
		{ &Z_Construct_UFunction_UBlackjackHUD_InitializeUI, "InitializeUI" }, // 579421661
		{ &Z_Construct_UFunction_UBlackjackHUD_NextGame, "NextGame" }, // 2908837277
		{ &Z_Construct_UFunction_UBlackjackHUD_OnAceAsElevenClicked, "OnAceAsElevenClicked" }, // 2893554961
		{ &Z_Construct_UFunction_UBlackjackHUD_OnAceAsOneClicked, "OnAceAsOneClicked" }, // 3854567922
		{ &Z_Construct_UFunction_UBlackjackHUD_OnBet100Clicked, "OnBet100Clicked" }, // 3596767335
		{ &Z_Construct_UFunction_UBlackjackHUD_OnBet10Clicked, "OnBet10Clicked" }, // 3726501835
		{ &Z_Construct_UFunction_UBlackjackHUD_OnBet50Clicked, "OnBet50Clicked" }, // 2873820105
		{ &Z_Construct_UFunction_UBlackjackHUD_OnBetClicked, "OnBetClicked" }, // 2323684065
		{ &Z_Construct_UFunction_UBlackjackHUD_OnBetMaxClicked, "OnBetMaxClicked" }, // 335161000
		{ &Z_Construct_UFunction_UBlackjackHUD_OnBetResetClicked, "OnBetResetClicked" }, // 801590033
		{ &Z_Construct_UFunction_UBlackjackHUD_OnHitClicked, "OnHitClicked" }, // 1038959072
		{ &Z_Construct_UFunction_UBlackjackHUD_OnNextGameClicked, "OnNextGameClicked" }, // 904777395
		{ &Z_Construct_UFunction_UBlackjackHUD_OnSplitClicked, "OnSplitClicked" }, // 2278030851
		{ &Z_Construct_UFunction_UBlackjackHUD_OnStandClicked, "OnStandClicked" }, // 3204335874
		{ &Z_Construct_UFunction_UBlackjackHUD_SetActionButtonsEnabled, "SetActionButtonsEnabled" }, // 1561704994
		{ &Z_Construct_UFunction_UBlackjackHUD_SetBetButtonsEnabled, "SetBetButtonsEnabled" }, // 1590909061
		{ &Z_Construct_UFunction_UBlackjackHUD_ShowAceChoice, "ShowAceChoice" }, // 2179806488
		{ &Z_Construct_UFunction_UBlackjackHUD_ShowNextGameButton, "ShowNextGameButton" }, // 1512625574
		{ &Z_Construct_UFunction_UBlackjackHUD_UpdateMessageText, "UpdateMessageText" }, // 3560953585
		{ &Z_Construct_UFunction_UBlackjackHUD_UpdatePlayerInfo, "UpdatePlayerInfo" }, // 643097766
		{ &Z_Construct_UFunction_UBlackjackHUD_UpdateScores, "UpdateScores" }, // 3638250801
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlackjackHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_TXT_PlayerCoins = { "TXT_PlayerCoins", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlackjackHUD, TXT_PlayerCoins), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TXT_PlayerCoins_MetaData), NewProp_TXT_PlayerCoins_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_TXT_BetAmount = { "TXT_BetAmount", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlackjackHUD, TXT_BetAmount), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TXT_BetAmount_MetaData), NewProp_TXT_BetAmount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_TXT_Message = { "TXT_Message", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlackjackHUD, TXT_Message), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TXT_Message_MetaData), NewProp_TXT_Message_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_BTN_Hit = { "BTN_Hit", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlackjackHUD, BTN_Hit), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BTN_Hit_MetaData), NewProp_BTN_Hit_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_BTN_Stand = { "BTN_Stand", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlackjackHUD, BTN_Stand), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BTN_Stand_MetaData), NewProp_BTN_Stand_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_BTN_Split = { "BTN_Split", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlackjackHUD, BTN_Split), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BTN_Split_MetaData), NewProp_BTN_Split_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_BTN_Bet10 = { "BTN_Bet10", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlackjackHUD, BTN_Bet10), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BTN_Bet10_MetaData), NewProp_BTN_Bet10_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_BTN_Bet50 = { "BTN_Bet50", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlackjackHUD, BTN_Bet50), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BTN_Bet50_MetaData), NewProp_BTN_Bet50_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_BTN_Bet100 = { "BTN_Bet100", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlackjackHUD, BTN_Bet100), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BTN_Bet100_MetaData), NewProp_BTN_Bet100_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_BTN_BetMax = { "BTN_BetMax", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlackjackHUD, BTN_BetMax), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BTN_BetMax_MetaData), NewProp_BTN_BetMax_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_BTN_BetReset = { "BTN_BetReset", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlackjackHUD, BTN_BetReset), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BTN_BetReset_MetaData), NewProp_BTN_BetReset_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_BTN_Bet = { "BTN_Bet", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlackjackHUD, BTN_Bet), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BTN_Bet_MetaData), NewProp_BTN_Bet_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_BTN_AceAsOne = { "BTN_AceAsOne", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlackjackHUD, BTN_AceAsOne), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BTN_AceAsOne_MetaData), NewProp_BTN_AceAsOne_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_BTN_AceAsEleven = { "BTN_AceAsEleven", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlackjackHUD, BTN_AceAsEleven), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BTN_AceAsEleven_MetaData), NewProp_BTN_AceAsEleven_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_Ace_Image = { "Ace_Image", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlackjackHUD, Ace_Image), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Ace_Image_MetaData), NewProp_Ace_Image_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_TXT_PlayerScore = { "TXT_PlayerScore", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlackjackHUD, TXT_PlayerScore), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TXT_PlayerScore_MetaData), NewProp_TXT_PlayerScore_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_TXT_DealerScore = { "TXT_DealerScore", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlackjackHUD, TXT_DealerScore), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TXT_DealerScore_MetaData), NewProp_TXT_DealerScore_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_BTN_NextGame = { "BTN_NextGame", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBlackjackHUD, BTN_NextGame), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BTN_NextGame_MetaData), NewProp_BTN_NextGame_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBlackjackHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_TXT_PlayerCoins,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_TXT_BetAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_TXT_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_BTN_Hit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_BTN_Stand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_BTN_Split,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_BTN_Bet10,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_BTN_Bet50,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_BTN_Bet100,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_BTN_BetMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_BTN_BetReset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_BTN_Bet,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_BTN_AceAsOne,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_BTN_AceAsEleven,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_Ace_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_TXT_PlayerScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_TXT_DealerScore,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBlackjackHUD_Statics::NewProp_BTN_NextGame,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlackjackHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UBlackjackHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_Cpp_Personal,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBlackjackHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBlackjackHUD_Statics::ClassParams = {
	&UBlackjackHUD::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UBlackjackHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UBlackjackHUD_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBlackjackHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_UBlackjackHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBlackjackHUD()
{
	if (!Z_Registration_Info_UClass_UBlackjackHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBlackjackHUD.OuterSingleton, Z_Construct_UClass_UBlackjackHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBlackjackHUD.OuterSingleton;
}
template<> CPP_PERSONAL_API UClass* StaticClass<UBlackjackHUD>()
{
	return UBlackjackHUD::StaticClass();
}
UBlackjackHUD::UBlackjackHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBlackjackHUD);
UBlackjackHUD::~UBlackjackHUD() {}
// End Class UBlackjackHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_UI_BlackjackHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBlackjackHUD, UBlackjackHUD::StaticClass, TEXT("UBlackjackHUD"), &Z_Registration_Info_UClass_UBlackjackHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBlackjackHUD), 2167420770U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_UI_BlackjackHUD_h_1606512936(TEXT("/Script/Cpp_Personal"),
	Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_UI_BlackjackHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_UI_BlackjackHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
