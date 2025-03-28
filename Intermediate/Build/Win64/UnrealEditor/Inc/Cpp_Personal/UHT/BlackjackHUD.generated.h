// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlackjackHUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPP_PERSONAL_BlackjackHUD_generated_h
#error "BlackjackHUD.generated.h already included, missing '#pragma once' in BlackjackHUD.h"
#endif
#define CPP_PERSONAL_BlackjackHUD_generated_h

#define FID_Cpp_Personal_Source_Cpp_Personal_BlackjackHUD_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnNextGameClicked); \
	DECLARE_FUNCTION(execOnAceAsElevenClicked); \
	DECLARE_FUNCTION(execOnAceAsOneClicked); \
	DECLARE_FUNCTION(execOnBetClicked); \
	DECLARE_FUNCTION(execOnBetResetClicked); \
	DECLARE_FUNCTION(execOnBetMaxClicked); \
	DECLARE_FUNCTION(execOnBet100Clicked); \
	DECLARE_FUNCTION(execOnBet50Clicked); \
	DECLARE_FUNCTION(execOnBet10Clicked); \
	DECLARE_FUNCTION(execOnSplitClicked); \
	DECLARE_FUNCTION(execOnStandClicked); \
	DECLARE_FUNCTION(execOnHitClicked); \
	DECLARE_FUNCTION(execUpdateScores); \
	DECLARE_FUNCTION(execShowNextGameButton); \
	DECLARE_FUNCTION(execHideAceChoice); \
	DECLARE_FUNCTION(execShowAceChoice); \
	DECLARE_FUNCTION(execSetBetButtonsEnabled); \
	DECLARE_FUNCTION(execSetActionButtonsEnabled); \
	DECLARE_FUNCTION(execNextGame); \
	DECLARE_FUNCTION(execInitializeUI); \
	DECLARE_FUNCTION(execUpdateMessageText); \
	DECLARE_FUNCTION(execUpdatePlayerInfo);


#define FID_Cpp_Personal_Source_Cpp_Personal_BlackjackHUD_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlackjackHUD(); \
	friend struct Z_Construct_UClass_UBlackjackHUD_Statics; \
public: \
	DECLARE_CLASS(UBlackjackHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Cpp_Personal"), NO_API) \
	DECLARE_SERIALIZER(UBlackjackHUD)


#define FID_Cpp_Personal_Source_Cpp_Personal_BlackjackHUD_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlackjackHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UBlackjackHUD(UBlackjackHUD&&); \
	UBlackjackHUD(const UBlackjackHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlackjackHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlackjackHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlackjackHUD) \
	NO_API virtual ~UBlackjackHUD();


#define FID_Cpp_Personal_Source_Cpp_Personal_BlackjackHUD_h_11_PROLOG
#define FID_Cpp_Personal_Source_Cpp_Personal_BlackjackHUD_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Cpp_Personal_Source_Cpp_Personal_BlackjackHUD_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Cpp_Personal_Source_Cpp_Personal_BlackjackHUD_h_14_INCLASS_NO_PURE_DECLS \
	FID_Cpp_Personal_Source_Cpp_Personal_BlackjackHUD_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_PERSONAL_API UClass* StaticClass<class UBlackjackHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Cpp_Personal_Source_Cpp_Personal_BlackjackHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
