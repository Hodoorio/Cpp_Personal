// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BlackjackGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPP_PERSONAL_BlackjackGameMode_generated_h
#error "BlackjackGameMode.generated.h already included, missing '#pragma once' in BlackjackGameMode.h"
#endif
#define CPP_PERSONAL_BlackjackGameMode_generated_h

#define FID_Cpp_Personal_Source_Cpp_Personal_BlackjackGameMode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execCheckWinner); \
	DECLARE_FUNCTION(execPlayerStand); \
	DECLARE_FUNCTION(execPlayerHit); \
	DECLARE_FUNCTION(execStartGame);


#define FID_Cpp_Personal_Source_Cpp_Personal_BlackjackGameMode_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABlackjackGameMode(); \
	friend struct Z_Construct_UClass_ABlackjackGameMode_Statics; \
public: \
	DECLARE_CLASS(ABlackjackGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cpp_Personal"), NO_API) \
	DECLARE_SERIALIZER(ABlackjackGameMode)


#define FID_Cpp_Personal_Source_Cpp_Personal_BlackjackGameMode_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ABlackjackGameMode(ABlackjackGameMode&&); \
	ABlackjackGameMode(const ABlackjackGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABlackjackGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABlackjackGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABlackjackGameMode) \
	NO_API virtual ~ABlackjackGameMode();


#define FID_Cpp_Personal_Source_Cpp_Personal_BlackjackGameMode_h_10_PROLOG
#define FID_Cpp_Personal_Source_Cpp_Personal_BlackjackGameMode_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Cpp_Personal_Source_Cpp_Personal_BlackjackGameMode_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Cpp_Personal_Source_Cpp_Personal_BlackjackGameMode_h_13_INCLASS_NO_PURE_DECLS \
	FID_Cpp_Personal_Source_Cpp_Personal_BlackjackGameMode_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_PERSONAL_API UClass* StaticClass<class ABlackjackGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Cpp_Personal_Source_Cpp_Personal_BlackjackGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
