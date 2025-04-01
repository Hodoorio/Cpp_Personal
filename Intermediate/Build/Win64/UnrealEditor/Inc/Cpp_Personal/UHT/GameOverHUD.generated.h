// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UI/GameOverHUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPP_PERSONAL_GameOverHUD_generated_h
#error "GameOverHUD.generated.h already included, missing '#pragma once' in GameOverHUD.h"
#endif
#define CPP_PERSONAL_GameOverHUD_generated_h

#define FID_Cpp_Personal_Source_Cpp_Personal_UI_GameOverHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnExitClicked); \
	DECLARE_FUNCTION(execOnRestartClicked);


#define FID_Cpp_Personal_Source_Cpp_Personal_UI_GameOverHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameOverHUD(); \
	friend struct Z_Construct_UClass_UGameOverHUD_Statics; \
public: \
	DECLARE_CLASS(UGameOverHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Cpp_Personal"), NO_API) \
	DECLARE_SERIALIZER(UGameOverHUD)


#define FID_Cpp_Personal_Source_Cpp_Personal_UI_GameOverHUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameOverHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameOverHUD(UGameOverHUD&&); \
	UGameOverHUD(const UGameOverHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameOverHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameOverHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameOverHUD) \
	NO_API virtual ~UGameOverHUD();


#define FID_Cpp_Personal_Source_Cpp_Personal_UI_GameOverHUD_h_12_PROLOG
#define FID_Cpp_Personal_Source_Cpp_Personal_UI_GameOverHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Cpp_Personal_Source_Cpp_Personal_UI_GameOverHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Cpp_Personal_Source_Cpp_Personal_UI_GameOverHUD_h_15_INCLASS_NO_PURE_DECLS \
	FID_Cpp_Personal_Source_Cpp_Personal_UI_GameOverHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_PERSONAL_API UClass* StaticClass<class UGameOverHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Cpp_Personal_Source_Cpp_Personal_UI_GameOverHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
