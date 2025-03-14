// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cpp_Personal/FCardDataTableRow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFCardDataTableRow() {}

// Begin Cross Module References
CPP_PERSONAL_API UEnum* Z_Construct_UEnum_Cpp_Personal_ERank();
CPP_PERSONAL_API UEnum* Z_Construct_UEnum_Cpp_Personal_ESuit();
CPP_PERSONAL_API UScriptStruct* Z_Construct_UScriptStruct_FCardDataTableRow();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
UPackage* Z_Construct_UPackage__Script_Cpp_Personal();
// End Cross Module References

// Begin ScriptStruct FCardDataTableRow
static_assert(std::is_polymorphic<FCardDataTableRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FCardDataTableRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_CardDataTableRow;
class UScriptStruct* FCardDataTableRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_CardDataTableRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_CardDataTableRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FCardDataTableRow, (UObject*)Z_Construct_UPackage__Script_Cpp_Personal(), TEXT("CardDataTableRow"));
	}
	return Z_Registration_Info_UScriptStruct_CardDataTableRow.OuterSingleton;
}
template<> CPP_PERSONAL_API UScriptStruct* StaticStruct<FCardDataTableRow>()
{
	return FCardDataTableRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FCardDataTableRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xe2\x9c\x85 \xeb\xb0\x98\xeb\x93\x9c\xec\x8b\x9c FTableRowBase \xec\x83\x81\xec\x86\x8d!\n" },
#endif
		{ "ModuleRelativePath", "FCardDataTableRow.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x9c\x85 \xeb\xb0\x98\xeb\x93\x9c\xec\x8b\x9c FTableRowBase \xec\x83\x81\xec\x86\x8d!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Suit_MetaData[] = {
		{ "Category", "Card Data" },
		{ "ModuleRelativePath", "FCardDataTableRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rank_MetaData[] = {
		{ "Category", "Card Data" },
		{ "ModuleRelativePath", "FCardDataTableRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CardTexture_MetaData[] = {
		{ "Category", "Card Data" },
		{ "ModuleRelativePath", "FCardDataTableRow.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Suit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Suit;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Rank_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Rank;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CardTexture;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCardDataTableRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCardDataTableRow_Statics::NewProp_Suit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCardDataTableRow_Statics::NewProp_Suit = { "Suit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardDataTableRow, Suit), Z_Construct_UEnum_Cpp_Personal_ESuit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Suit_MetaData), NewProp_Suit_MetaData) }; // 3875573809
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCardDataTableRow_Statics::NewProp_Rank_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCardDataTableRow_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardDataTableRow, Rank), Z_Construct_UEnum_Cpp_Personal_ERank, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rank_MetaData), NewProp_Rank_MetaData) }; // 4190879128
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCardDataTableRow_Statics::NewProp_CardTexture = { "CardTexture", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FCardDataTableRow, CardTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CardTexture_MetaData), NewProp_CardTexture_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCardDataTableRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardDataTableRow_Statics::NewProp_Suit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardDataTableRow_Statics::NewProp_Suit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardDataTableRow_Statics::NewProp_Rank_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardDataTableRow_Statics::NewProp_Rank,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCardDataTableRow_Statics::NewProp_CardTexture,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardDataTableRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCardDataTableRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_Cpp_Personal,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"CardDataTableRow",
	Z_Construct_UScriptStruct_FCardDataTableRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardDataTableRow_Statics::PropPointers),
	sizeof(FCardDataTableRow),
	alignof(FCardDataTableRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCardDataTableRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FCardDataTableRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FCardDataTableRow()
{
	if (!Z_Registration_Info_UScriptStruct_CardDataTableRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_CardDataTableRow.InnerSingleton, Z_Construct_UScriptStruct_FCardDataTableRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_CardDataTableRow.InnerSingleton;
}
// End ScriptStruct FCardDataTableRow

// Begin Registration
struct Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_FCardDataTableRow_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FCardDataTableRow::StaticStruct, Z_Construct_UScriptStruct_FCardDataTableRow_Statics::NewStructOps, TEXT("CardDataTableRow"), &Z_Registration_Info_UScriptStruct_CardDataTableRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FCardDataTableRow), 4289041496U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_FCardDataTableRow_h_2228637155(TEXT("/Script/Cpp_Personal"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_FCardDataTableRow_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_FCardDataTableRow_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
