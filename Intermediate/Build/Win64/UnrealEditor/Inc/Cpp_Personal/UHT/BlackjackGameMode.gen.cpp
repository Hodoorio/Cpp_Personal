// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cpp_Personal/BlackjackGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlackjackGameMode() {}

// Begin Cross Module References
CPP_PERSONAL_API UClass* Z_Construct_UClass_ABlackjackGameMode();
CPP_PERSONAL_API UClass* Z_Construct_UClass_ABlackjackGameMode_NoRegister();
CPP_PERSONAL_API UClass* Z_Construct_UClass_ADealerActor_NoRegister();
CPP_PERSONAL_API UClass* Z_Construct_UClass_APlayerActor_NoRegister();
CPP_PERSONAL_API UEnum* Z_Construct_UEnum_Cpp_Personal_EGameState();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_Cpp_Personal();
// End Cross Module References

// Begin Class ABlackjackGameMode Function CheckWinner
struct Z_Construct_UFunction_ABlackjackGameMode_CheckWinner_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x8a\xb9\xed\x8c\xa8 \xed\x8c\x90\xec\xa0\x95\n" },
#endif
		{ "ModuleRelativePath", "BlackjackGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xb9\xed\x8c\xa8 \xed\x8c\x90\xec\xa0\x95" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ABlackjackGameMode_CheckWinner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ABlackjackGameMode, nullptr, "CheckWinner", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ABlackjackGameMode_CheckWinner_Statics::Function_MetaDataParams), Z_Construct_UFunction_ABlackjackGameMode_CheckWinner_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ABlackjackGameMode_CheckWinner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ABlackjackGameMode_CheckWinner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ABlackjackGameMode::execCheckWinner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CheckWinner();
	P_NATIVE_END;
}
// End Class ABlackjackGameMode Function CheckWinner

// Begin Class ABlackjackGameMode Function PlayerHit
struct Z_Construct_UFunction_ABlackjackGameMode_PlayerHit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xed\x96\x89\xeb\x8f\x99 (Hit / Stand)\n" },
#endif
		{ "ModuleRelativePath", "BlackjackGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 \xed\x96\x89\xeb\x8f\x99 (Hit / Stand)" },
#endif
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
		{ "Comment", "// \xea\xb2\x8c\xec\x9e\x84 \xec\x8b\x9c\xec\x9e\x91 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "BlackjackGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb2\x8c\xec\x9e\x84 \xec\x8b\x9c\xec\x9e\x91 \xed\x95\xa8\xec\x88\x98" },
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
		{ "CheckWinner", &ABlackjackGameMode::execCheckWinner },
		{ "PlayerHit", &ABlackjackGameMode::execPlayerHit },
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
		{ "Category", "Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x98\x84\xec\x9e\xac \xea\xb2\x8c\xec\x9e\x84 \xec\x83\x81\xed\x83\x9c\n" },
#endif
		{ "ModuleRelativePath", "BlackjackGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x98\x84\xec\x9e\xac \xea\xb2\x8c\xec\x9e\x84 \xec\x83\x81\xed\x83\x9c" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[] = {
		{ "Category", "Game" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 & \xeb\x94\x9c\xeb\x9f\xac \xeb\xa0\x88\xed\x8d\xbc\xeb\x9f\xb0\xec\x8a\xa4\n" },
#endif
		{ "ModuleRelativePath", "BlackjackGameMode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x94\x8c\xeb\xa0\x88\xec\x9d\xb4\xec\x96\xb4 & \xeb\x94\x9c\xeb\x9f\xac \xeb\xa0\x88\xed\x8d\xbc\xeb\x9f\xb0\xec\x8a\xa4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Dealer_MetaData[] = {
		{ "Category", "Game" },
		{ "ModuleRelativePath", "BlackjackGameMode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_CurrentState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_CurrentState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Player;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Dealer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ABlackjackGameMode_CheckWinner, "CheckWinner" }, // 2921149143
		{ &Z_Construct_UFunction_ABlackjackGameMode_PlayerHit, "PlayerHit" }, // 563802188
		{ &Z_Construct_UFunction_ABlackjackGameMode_PlayerStand, "PlayerStand" }, // 4248726134
		{ &Z_Construct_UFunction_ABlackjackGameMode_StartGame, "StartGame" }, // 1601284650
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABlackjackGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_CurrentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_CurrentState = { "CurrentState", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlackjackGameMode, CurrentState), Z_Construct_UEnum_Cpp_Personal_EGameState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentState_MetaData), NewProp_CurrentState_MetaData) }; // 1497492983
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlackjackGameMode, Player), Z_Construct_UClass_APlayerActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Player_MetaData), NewProp_Player_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_Dealer = { "Dealer", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ABlackjackGameMode, Dealer), Z_Construct_UClass_ADealerActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Dealer_MetaData), NewProp_Dealer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABlackjackGameMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_CurrentState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_CurrentState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_Player,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABlackjackGameMode_Statics::NewProp_Dealer,
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
		{ Z_Construct_UClass_ABlackjackGameMode, ABlackjackGameMode::StaticClass, TEXT("ABlackjackGameMode"), &Z_Registration_Info_UClass_ABlackjackGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABlackjackGameMode), 3051199322U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_BlackjackGameMode_h_1793667954(TEXT("/Script/Cpp_Personal"),
	Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_BlackjackGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_BlackjackGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
