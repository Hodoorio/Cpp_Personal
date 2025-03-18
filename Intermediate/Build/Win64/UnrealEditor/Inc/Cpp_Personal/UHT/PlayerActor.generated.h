// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCard;
#ifdef CPP_PERSONAL_PlayerActor_generated_h
#error "PlayerActor.generated.h already included, missing '#pragma once' in PlayerActor.h"
#endif
#define CPP_PERSONAL_PlayerActor_generated_h

#define FID_Cpp_Personal_Source_Cpp_Personal_PlayerActor_h_12_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FHand_Statics; \
	CPP_PERSONAL_API static class UScriptStruct* StaticStruct();


template<> CPP_PERSONAL_API UScriptStruct* StaticStruct<struct FHand>();

#define FID_Cpp_Personal_Source_Cpp_Personal_PlayerActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSplit); \
	DECLARE_FUNCTION(execCanSplit); \
	DECLARE_FUNCTION(execGetHandValue); \
	DECLARE_FUNCTION(execGiveCardToHand); \
	DECLARE_FUNCTION(execLoseBet); \
	DECLARE_FUNCTION(execWinBet); \
	DECLARE_FUNCTION(execMaxBet); \
	DECLARE_FUNCTION(execPlaceBet); \
	DECLARE_FUNCTION(execInitializeCoins);


#define FID_Cpp_Personal_Source_Cpp_Personal_PlayerActor_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerActor(); \
	friend struct Z_Construct_UClass_APlayerActor_Statics; \
public: \
	DECLARE_CLASS(APlayerActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cpp_Personal"), NO_API) \
	DECLARE_SERIALIZER(APlayerActor)


#define FID_Cpp_Personal_Source_Cpp_Personal_PlayerActor_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayerActor(APlayerActor&&); \
	APlayerActor(const APlayerActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerActor) \
	NO_API virtual ~APlayerActor();


#define FID_Cpp_Personal_Source_Cpp_Personal_PlayerActor_h_18_PROLOG
#define FID_Cpp_Personal_Source_Cpp_Personal_PlayerActor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Cpp_Personal_Source_Cpp_Personal_PlayerActor_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Cpp_Personal_Source_Cpp_Personal_PlayerActor_h_21_INCLASS_NO_PURE_DECLS \
	FID_Cpp_Personal_Source_Cpp_Personal_PlayerActor_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_PERSONAL_API UClass* StaticClass<class APlayerActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Cpp_Personal_Source_Cpp_Personal_PlayerActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
