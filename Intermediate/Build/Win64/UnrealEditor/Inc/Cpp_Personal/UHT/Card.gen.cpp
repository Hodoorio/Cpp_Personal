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
		{ "Comment", "// \xec\xb9\xb4\xeb\x93\x9c \xeb\xac\xb8\xec\x96\x91\xec\x9d\x84 Enum\xec\x9c\xbc\xeb\xa1\x9c \xec\xa0\x95\xec\x9d\x98\n" },
#endif
		{ "Diamonds.DisplayName", "Diamonds" },
		{ "Diamonds.Name", "ESuit::Diamonds" },
		{ "Hearts.DisplayName", "Hearts" },
		{ "Hearts.Name", "ESuit::Hearts" },
		{ "ModuleRelativePath", "Card.h" },
		{ "Spades.DisplayName", "Spades" },
		{ "Spades.Name", "ESuit::Spades" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb9\xb4\xeb\x93\x9c \xeb\xac\xb8\xec\x96\x91\xec\x9d\x84 Enum\xec\x9c\xbc\xeb\xa1\x9c \xec\xa0\x95\xec\x9d\x98" },
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
		{ "Comment", "// \xec\xb9\xb4\xeb\x93\x9c\xec\x9d\x98 \xeb\x9e\xad\xed\x81\xac \xec\xa0\x95\xec\x9d\x98 (1~13)\n" },
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
		{ "ModuleRelativePath", "Card.h" },
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
		{ "ToolTip", "\xec\xb9\xb4\xeb\x93\x9c\xec\x9d\x98 \xeb\x9e\xad\xed\x81\xac \xec\xa0\x95\xec\x9d\x98 (1~13)" },
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
		{ "Comment", "// \xeb\xb8\x94\xeb\x9e\x99\xec\x9e\xad \xec\xa0\x90\xec\x88\x98 \xeb\xb0\x98\xed\x99\x98 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Card.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\xb8\x94\xeb\x9e\x99\xec\x9e\xad \xec\xa0\x90\xec\x88\x98 \xeb\xb0\x98\xed\x99\x98 \xed\x95\xa8\xec\x88\x98" },
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
		{ "Comment", "// \xec\xb9\xb4\xeb\x93\x9c \xec\xa0\x95\xeb\xb3\xb4\xeb\xa5\xbc \xeb\xac\xb8\xec\x9e\x90\xec\x97\xb4\xeb\xa1\x9c \xeb\xb3\x80\xed\x99\x98\xed\x95\x98\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "Card.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb9\xb4\xeb\x93\x9c \xec\xa0\x95\xeb\xb3\xb4\xeb\xa5\xbc \xeb\xac\xb8\xec\x9e\x90\xec\x97\xb4\xeb\xa1\x9c \xeb\xb3\x80\xed\x99\x98\xed\x95\x98\xeb\x8a\x94 \xed\x95\xa8\xec\x88\x98" },
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
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Suit_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Suit;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Rank_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Rank;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UCard_GetCardValue, "GetCardValue" }, // 2119785106
		{ &Z_Construct_UFunction_UCard_ToString, "ToString" }, // 1675143866
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCard>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCard_Statics::NewProp_Suit_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCard_Statics::NewProp_Suit = { "Suit", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCard, Suit), Z_Construct_UEnum_Cpp_Personal_ESuit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Suit_MetaData), NewProp_Suit_MetaData) }; // 2717923480
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UCard_Statics::NewProp_Rank_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UCard_Statics::NewProp_Rank = { "Rank", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UCard, Rank), Z_Construct_UEnum_Cpp_Personal_ERank, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rank_MetaData), NewProp_Rank_MetaData) }; // 3230524064
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCard_Statics::NewProp_Suit_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCard_Statics::NewProp_Suit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCard_Statics::NewProp_Rank_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCard_Statics::NewProp_Rank,
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
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ESuit_StaticEnum, TEXT("ESuit"), &Z_Registration_Info_UEnum_ESuit, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2717923480U) },
		{ ERank_StaticEnum, TEXT("ERank"), &Z_Registration_Info_UEnum_ERank, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3230524064U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UCard, UCard::StaticClass, TEXT("UCard"), &Z_Registration_Info_UClass_UCard, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCard), 3852131648U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_Card_h_2410424420(TEXT("/Script/Cpp_Personal"),
	Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_Card_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_Card_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_Card_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_Card_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
