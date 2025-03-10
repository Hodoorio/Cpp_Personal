// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Cpp_Personal/DealerActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDealerActor() {}

// Begin Cross Module References
CPP_PERSONAL_API UClass* Z_Construct_UClass_ADealerActor();
CPP_PERSONAL_API UClass* Z_Construct_UClass_ADealerActor_NoRegister();
CPP_PERSONAL_API UClass* Z_Construct_UClass_UCard_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_Cpp_Personal();
// End Cross Module References

// Begin Class ADealerActor Function DrawCard
struct Z_Construct_UFunction_ADealerActor_DrawCard_Statics
{
	struct DealerActor_eventDrawCard_Parms
	{
		UCard* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dealer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\x94\x9c\xeb\x9f\xac\xea\xb0\x80 \xec\xb9\xb4\xeb\x93\x9c \xed\x95\x9c \xec\x9e\xa5 \xeb\xbd\x91\xea\xb8\xb0 (\xeb\x8d\x94\xeb\xaf\xb8 \xed\x95\xa8\xec\x88\x98)\n" },
#endif
		{ "ModuleRelativePath", "DealerActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x94\x9c\xeb\x9f\xac\xea\xb0\x80 \xec\xb9\xb4\xeb\x93\x9c \xed\x95\x9c \xec\x9e\xa5 \xeb\xbd\x91\xea\xb8\xb0 (\xeb\x8d\x94\xeb\xaf\xb8 \xed\x95\xa8\xec\x88\x98)" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADealerActor_DrawCard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DealerActor_eventDrawCard_Parms, ReturnValue), Z_Construct_UClass_UCard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADealerActor_DrawCard_Statics::PropPointers[] = {
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
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UCard**)Z_Param__Result=P_THIS->DrawCard();
	P_NATIVE_END;
}
// End Class ADealerActor Function DrawCard

// Begin Class ADealerActor Function GetHandValue
struct Z_Construct_UFunction_ADealerActor_GetHandValue_Statics
{
	struct DealerActor_eventGetHandValue_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dealer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xed\x98\x84\xec\x9e\xac \xeb\x94\x9c\xeb\x9f\xac\xec\x9d\x98 \xec\xb4\x9d \xec\xa0\x90\xec\x88\x98 \xea\xb3\x84\xec\x82\xb0\n" },
#endif
		{ "ModuleRelativePath", "DealerActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xed\x98\x84\xec\x9e\xac \xeb\x94\x9c\xeb\x9f\xac\xec\x9d\x98 \xec\xb4\x9d \xec\xa0\x90\xec\x88\x98 \xea\xb3\x84\xec\x82\xb0" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADealerActor_GetHandValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DealerActor_eventGetHandValue_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADealerActor_GetHandValue_Statics::PropPointers[] = {
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
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetHandValue();
	P_NATIVE_END;
}
// End Class ADealerActor Function GetHandValue

// Begin Class ADealerActor Function GiveCardToHand
struct Z_Construct_UFunction_ADealerActor_GiveCardToHand_Statics
{
	struct DealerActor_eventGiveCardToHand_Parms
	{
		UCard* NewCard;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Dealer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb9\xb4\xeb\x93\x9c \xeb\xb0\x9b\xea\xb8\xb0 \xed\x95\xa8\xec\x88\x98\n" },
#endif
		{ "ModuleRelativePath", "DealerActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb9\xb4\xeb\x93\x9c \xeb\xb0\x9b\xea\xb8\xb0 \xed\x95\xa8\xec\x88\x98" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewCard;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADealerActor_GiveCardToHand_Statics::NewProp_NewCard = { "NewCard", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(DealerActor_eventGiveCardToHand_Parms, NewCard), Z_Construct_UClass_UCard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADealerActor_GiveCardToHand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADealerActor_GiveCardToHand_Statics::NewProp_NewCard,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ADealerActor_GiveCardToHand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ADealerActor_GiveCardToHand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADealerActor, nullptr, "GiveCardToHand", nullptr, nullptr, Z_Construct_UFunction_ADealerActor_GiveCardToHand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADealerActor_GiveCardToHand_Statics::PropPointers), sizeof(Z_Construct_UFunction_ADealerActor_GiveCardToHand_Statics::DealerActor_eventGiveCardToHand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ADealerActor_GiveCardToHand_Statics::Function_MetaDataParams), Z_Construct_UFunction_ADealerActor_GiveCardToHand_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ADealerActor_GiveCardToHand_Statics::DealerActor_eventGiveCardToHand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ADealerActor_GiveCardToHand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ADealerActor_GiveCardToHand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ADealerActor::execGiveCardToHand)
{
	P_GET_OBJECT(UCard,Z_Param_NewCard);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->GiveCardToHand(Z_Param_NewCard);
	P_NATIVE_END;
}
// End Class ADealerActor Function GiveCardToHand

// Begin Class ADealerActor
void ADealerActor::StaticRegisterNativesADealerActor()
{
	UClass* Class = ADealerActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DrawCard", &ADealerActor::execDrawCard },
		{ "GetHandValue", &ADealerActor::execGetHandValue },
		{ "GiveCardToHand", &ADealerActor::execGiveCardToHand },
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
		{ "IncludePath", "DealerActor.h" },
		{ "ModuleRelativePath", "DealerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Hand_MetaData[] = {
		{ "Category", "Dealer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xeb\x94\x9c\xeb\x9f\xac\xec\x9d\x98 \xec\xb9\xb4\xeb\x93\x9c \xeb\xaa\xa9\xeb\xa1\x9d\n" },
#endif
		{ "ModuleRelativePath", "DealerActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xeb\x94\x9c\xeb\x9f\xac\xec\x9d\x98 \xec\xb9\xb4\xeb\x93\x9c \xeb\xaa\xa9\xeb\xa1\x9d" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Hand_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Hand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ADealerActor_DrawCard, "DrawCard" }, // 1615358861
		{ &Z_Construct_UFunction_ADealerActor_GetHandValue, "GetHandValue" }, // 1977313626
		{ &Z_Construct_UFunction_ADealerActor_GiveCardToHand, "GiveCardToHand" }, // 3259430024
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADealerActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADealerActor_Statics::NewProp_Hand_Inner = { "Hand", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UCard_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADealerActor_Statics::NewProp_Hand = { "Hand", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ADealerActor, Hand), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Hand_MetaData), NewProp_Hand_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADealerActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADealerActor_Statics::NewProp_Hand_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADealerActor_Statics::NewProp_Hand,
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
struct Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_DealerActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ADealerActor, ADealerActor::StaticClass, TEXT("ADealerActor"), &Z_Registration_Info_UClass_ADealerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADealerActor), 390077440U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_DealerActor_h_633186718(TEXT("/Script/Cpp_Personal"),
	Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_DealerActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Cpp_Personal_Source_Cpp_Personal_DealerActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
