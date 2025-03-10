// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cpp_Personal/CardEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCardEnums() {}

// Begin Cross Module References
CPP_PERSONAL_API UEnum* Z_Construct_UEnum_Cpp_Personal_ERank();
CPP_PERSONAL_API UEnum* Z_Construct_UEnum_Cpp_Personal_ESuit();
UPackage* Z_Construct_UPackage__Script_Cpp_Personal();
// End Cross Module References

// Begin Enum ESuit
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ESuit;
static UEnum* ESuit_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ESuit.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ESuit.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Cpp_Personal_ESuit, (UObject*)Z_Construct_UPackage__Script_Cpp_Personal(), TEXT("ESuit"));
	}
	return Z_Registration_Info_UEnum_ESuit.OuterSingleton;
}
template<> CPP_PERSONAL_API UEnum* StaticEnum<ESuit>()
{
	return ESuit_StaticEnum();
}
struct Z_Construct_UEnum_Cpp_Personal_ESuit_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Clubs.DisplayName", "Clubs" },
		{ "Clubs.Name", "ESuit::Clubs" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb9\xb4\xeb\x93\x9c \xeb\xac\xb8\xec\x96\x91 (\xec\x8a\xa4\xed\x8e\x98\xec\x9d\xb4\xeb\x93\x9c, \xed\x95\x98\xed\x8a\xb8, \xeb\x8b\xa4\xec\x9d\xb4\xec\x95\x84\xeb\xaa\xac\xeb\x93\x9c, \xed\x81\xb4\xeb\xa1\x9c\xeb\xb2\x84)\n" },
#endif
		{ "Diamonds.DisplayName", "Diamonds" },
		{ "Diamonds.Name", "ESuit::Diamonds" },
		{ "Hearts.DisplayName", "Hearts" },
		{ "Hearts.Name", "ESuit::Hearts" },
		{ "ModuleRelativePath", "CardEnums.h" },
		{ "Spades.DisplayName", "Spades" },
		{ "Spades.Name", "ESuit::Spades" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb9\xb4\xeb\x93\x9c \xeb\xac\xb8\xec\x96\x91 (\xec\x8a\xa4\xed\x8e\x98\xec\x9d\xb4\xeb\x93\x9c, \xed\x95\x98\xed\x8a\xb8, \xeb\x8b\xa4\xec\x9d\xb4\xec\x95\x84\xeb\xaa\xac\xeb\x93\x9c, \xed\x81\xb4\xeb\xa1\x9c\xeb\xb2\x84)" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ESuit::Hearts", (int64)ESuit::Hearts },
		{ "ESuit::Diamonds", (int64)ESuit::Diamonds },
		{ "ESuit::Clubs", (int64)ESuit::Clubs },
		{ "ESuit::Spades", (int64)ESuit::Spades },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Cpp_Personal_ESuit_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Cpp_Personal,
	nullptr,
	"ESuit",
	"ESuit",
	Z_Construct_UEnum_Cpp_Personal_ESuit_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Cpp_Personal_ESuit_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Cpp_Personal_ESuit_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Cpp_Personal_ESuit_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Cpp_Personal_ESuit()
{
	if (!Z_Registration_Info_UEnum_ESuit.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ESuit.InnerSingleton, Z_Construct_UEnum_Cpp_Personal_ESuit_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ESuit.InnerSingleton;
}
// End Enum ESuit

// Begin Enum ERank
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERank;
static UEnum* ERank_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERank.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERank.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Cpp_Personal_ERank, (UObject*)Z_Construct_UPackage__Script_Cpp_Personal(), TEXT("ERank"));
	}
	return Z_Registration_Info_UEnum_ERank.OuterSingleton;
}
template<> CPP_PERSONAL_API UEnum* StaticEnum<ERank>()
{
	return ERank_StaticEnum();
}
struct Z_Construct_UEnum_Cpp_Personal_ERank_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Ace.DisplayName", "Ace" },
		{ "Ace.Name", "ERank::Ace" },
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb9\xb4\xeb\x93\x9c \xec\x88\xab\xec\x9e\x90 (A, 2~10, J, Q, K)\n" },
#endif
		{ "Eight.DisplayName", "8" },
		{ "Eight.Name", "ERank::Eight" },
		{ "Five.DisplayName", "5" },
		{ "Five.Name", "ERank::Five" },
		{ "Four.DisplayName", "4" },
		{ "Four.Name", "ERank::Four" },
		{ "Jack.DisplayName", "Jack" },
		{ "Jack.Name", "ERank::Jack" },
		{ "King.DisplayName", "King" },
		{ "King.Name", "ERank::King" },
		{ "ModuleRelativePath", "CardEnums.h" },
		{ "Nine.DisplayName", "9" },
		{ "Nine.Name", "ERank::Nine" },
		{ "Queen.DisplayName", "Queen" },
		{ "Queen.Name", "ERank::Queen" },
		{ "Seven.DisplayName", "7" },
		{ "Seven.Name", "ERank::Seven" },
		{ "Six.DisplayName", "6" },
		{ "Six.Name", "ERank::Six" },
		{ "Ten.DisplayName", "10" },
		{ "Ten.Name", "ERank::Ten" },
		{ "Three.DisplayName", "3" },
		{ "Three.Name", "ERank::Three" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb9\xb4\xeb\x93\x9c \xec\x88\xab\xec\x9e\x90 (A, 2~10, J, Q, K)" },
#endif
		{ "Two.DisplayName", "2" },
		{ "Two.Name", "ERank::Two" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERank::Ace", (int64)ERank::Ace },
		{ "ERank::Two", (int64)ERank::Two },
		{ "ERank::Three", (int64)ERank::Three },
		{ "ERank::Four", (int64)ERank::Four },
		{ "ERank::Five", (int64)ERank::Five },
		{ "ERank::Six", (int64)ERank::Six },
		{ "ERank::Seven", (int64)ERank::Seven },
		{ "ERank::Eight", (int64)ERank::Eight },
		{ "ERank::Nine", (int64)ERank::Nine },
		{ "ERank::Ten", (int64)ERank::Ten },
		{ "ERank::Jack", (int64)ERank::Jack },
		{ "ERank::Queen", (int64)ERank::Queen },
		{ "ERank::King", (int64)ERank::King },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Cpp_Personal_ERank_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_Cpp_Personal,
	nullptr,
	"ERank",
	"ERank",
	Z_Construct_UEnum_Cpp_Personal_ERank_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_Cpp_Personal_ERank_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Cpp_Personal_ERank_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Cpp_Personal_ERank_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_Cpp_Personal_ERank()
{
	if (!Z_Registration_Info_UEnum_ERank.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERank.InnerSingleton, Z_Construct_UEnum_Cpp_Personal_ERank_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERank.InnerSingleton;
}
// End Enum ERank

// Begin Registration
struct Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_CardEnums_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESuit_StaticEnum, TEXT("ESuit"), &Z_Registration_Info_UEnum_ESuit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3875573809U) },
		{ ERank_StaticEnum, TEXT("ERank"), &Z_Registration_Info_UEnum_ERank, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4190879128U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_CardEnums_h_1886413909(TEXT("/Script/Cpp_Personal"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_CardEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_CardEnums_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
