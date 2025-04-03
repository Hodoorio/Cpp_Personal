// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cpp_Personal/GameStateEnum.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameStateEnum() {}

// Begin Cross Module References
CPP_PERSONAL_API UEnum* Z_Construct_UEnum_Cpp_Personal_EGameState();
UPackage* Z_Construct_UPackage__Script_Cpp_Personal();
// End Cross Module References

// Begin Enum EGameState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EGameState;
static UEnum* EGameState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EGameState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EGameState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Cpp_Personal_EGameState, (UObject*)Z_Construct_UPackage__Script_Cpp_Personal(), TEXT("EGameState"));
	}
	return Z_Registration_Info_UEnum_EGameState.OuterSingleton;
}
template<> CPP_PERSONAL_API UEnum* StaticEnum<EGameState>()
{
	return EGameState_StaticEnum();
}
struct Z_Construct_UEnum_Cpp_Personal_EGameState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Betting.DisplayName", "Betting" },
		{ "Betting.Name", "EGameState::Betting" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xea\xb2\x8c\xec\x9e\x84 \xec\x83\x81\xed\x83\x9c Enum\n" },
#endif
		{ "DealerTurn.DisplayName", "Dealer Turn" },
		{ "DealerTurn.Name", "EGameState::DealerTurn" },
		{ "GameOver.DisplayName", "Game Over" },
		{ "GameOver.Name", "EGameState::GameOver" },
		{ "ModuleRelativePath", "GameStateEnum.h" },
		{ "PlayerTurn.DisplayName", "Player Turn" },
		{ "PlayerTurn.Name", "EGameState::PlayerTurn" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xea\xb2\x8c\xec\x9e\x84 \xec\x83\x81\xed\x83\x9c Enum" },
#endif
		{ "WaitingForBet.DisplayName", "Waiting For Bet" },
		{ "WaitingForBet.Name", "EGameState::WaitingForBet" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EGameState::WaitingForBet", (int64)EGameState::WaitingForBet },
		{ "EGameState::PlayerTurn", (int64)EGameState::PlayerTurn },
		{ "EGameState::DealerTurn", (int64)EGameState::DealerTurn },
		{ "EGameState::GameOver", (int64)EGameState::GameOver },
		{ "EGameState::Betting", (int64)EGameState::Betting },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Cpp_Personal_EGameState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Cpp_Personal,
	nullptr,
	"EGameState",
	"EGameState",
	Z_Construct_UEnum_Cpp_Personal_EGameState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Cpp_Personal_EGameState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Cpp_Personal_EGameState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Cpp_Personal_EGameState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Cpp_Personal_EGameState()
{
	if (!Z_Registration_Info_UEnum_EGameState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EGameState.InnerSingleton, Z_Construct_UEnum_Cpp_Personal_EGameState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EGameState.InnerSingleton;
}
// End Enum EGameState

// Begin Registration
struct Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_GameStateEnum_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EGameState_StaticEnum, TEXT("EGameState"), &Z_Registration_Info_UEnum_EGameState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3021376259U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_GameStateEnum_h_119490198(TEXT("/Script/Cpp_Personal"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_GameStateEnum_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_GameStateEnum_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
