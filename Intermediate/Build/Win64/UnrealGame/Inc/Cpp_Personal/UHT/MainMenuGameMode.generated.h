// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Gamemode/MainMenuGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPP_PERSONAL_MainMenuGameMode_generated_h
#error "MainMenuGameMode.generated.h already included, missing '#pragma once' in MainMenuGameMode.h"
#endif
#define CPP_PERSONAL_MainMenuGameMode_generated_h

#define FID_Cpp_Personal_Source_Cpp_Personal_Gamemode_MainMenuGameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMainMenuGameMode(); \
	friend struct Z_Construct_UClass_AMainMenuGameMode_Statics; \
public: \
	DECLARE_CLASS(AMainMenuGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cpp_Personal"), NO_API) \
	DECLARE_SERIALIZER(AMainMenuGameMode)


#define FID_Cpp_Personal_Source_Cpp_Personal_Gamemode_MainMenuGameMode_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMainMenuGameMode(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AMainMenuGameMode(AMainMenuGameMode&&); \
	AMainMenuGameMode(const AMainMenuGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMainMenuGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMainMenuGameMode); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMainMenuGameMode) \
	NO_API virtual ~AMainMenuGameMode();


#define FID_Cpp_Personal_Source_Cpp_Personal_Gamemode_MainMenuGameMode_h_12_PROLOG
#define FID_Cpp_Personal_Source_Cpp_Personal_Gamemode_MainMenuGameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Cpp_Personal_Source_Cpp_Personal_Gamemode_MainMenuGameMode_h_15_INCLASS_NO_PURE_DECLS \
	FID_Cpp_Personal_Source_Cpp_Personal_Gamemode_MainMenuGameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_PERSONAL_API UClass* StaticClass<class AMainMenuGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Cpp_Personal_Source_Cpp_Personal_Gamemode_MainMenuGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
