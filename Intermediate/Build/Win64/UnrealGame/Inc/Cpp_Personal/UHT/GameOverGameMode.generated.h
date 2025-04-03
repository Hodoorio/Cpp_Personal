// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gamemode/GameOverGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPP_PERSONAL_GameOverGameMode_generated_h
#error "GameOverGameMode.generated.h already included, missing '#pragma once' in GameOverGameMode.h"
#endif
#define CPP_PERSONAL_GameOverGameMode_generated_h

#define FID_Cpp_Personal_Source_Cpp_Personal_Gamemode_GameOverGameMode_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGameOverGameMode(); \
	friend struct Z_Construct_UClass_AGameOverGameMode_Statics; \
public: \
	DECLARE_CLASS(AGameOverGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cpp_Personal"), NO_API) \
	DECLARE_SERIALIZER(AGameOverGameMode)


#define FID_Cpp_Personal_Source_Cpp_Personal_Gamemode_GameOverGameMode_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGameOverGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AGameOverGameMode(AGameOverGameMode&&); \
	AGameOverGameMode(const AGameOverGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGameOverGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGameOverGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGameOverGameMode) \
	NO_API virtual ~AGameOverGameMode();


#define FID_Cpp_Personal_Source_Cpp_Personal_Gamemode_GameOverGameMode_h_7_PROLOG
#define FID_Cpp_Personal_Source_Cpp_Personal_Gamemode_GameOverGameMode_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Cpp_Personal_Source_Cpp_Personal_Gamemode_GameOverGameMode_h_10_INCLASS_NO_PURE_DECLS \
	FID_Cpp_Personal_Source_Cpp_Personal_Gamemode_GameOverGameMode_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_PERSONAL_API UClass* StaticClass<class AGameOverGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Cpp_Personal_Source_Cpp_Personal_Gamemode_GameOverGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
