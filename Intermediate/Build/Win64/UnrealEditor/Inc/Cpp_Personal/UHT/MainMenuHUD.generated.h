// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MainMenuHUD.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPP_PERSONAL_MainMenuHUD_generated_h
#error "MainMenuHUD.generated.h already included, missing '#pragma once' in MainMenuHUD.h"
#endif
#define CPP_PERSONAL_MainMenuHUD_generated_h

#define FID_Cpp_Personal_Source_Cpp_Personal_MainMenuHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLoadTargetLevel); \
	DECLARE_FUNCTION(execOnEndClicked); \
	DECLARE_FUNCTION(execOnStartClicked);


#define FID_Cpp_Personal_Source_Cpp_Personal_MainMenuHUD_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainMenuHUD(); \
	friend struct Z_Construct_UClass_UMainMenuHUD_Statics; \
public: \
	DECLARE_CLASS(UMainMenuHUD, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Cpp_Personal"), NO_API) \
	DECLARE_SERIALIZER(UMainMenuHUD)


#define FID_Cpp_Personal_Source_Cpp_Personal_MainMenuHUD_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainMenuHUD(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMainMenuHUD(UMainMenuHUD&&); \
	UMainMenuHUD(const UMainMenuHUD&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainMenuHUD); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainMenuHUD); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainMenuHUD) \
	NO_API virtual ~UMainMenuHUD();


#define FID_Cpp_Personal_Source_Cpp_Personal_MainMenuHUD_h_12_PROLOG
#define FID_Cpp_Personal_Source_Cpp_Personal_MainMenuHUD_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Cpp_Personal_Source_Cpp_Personal_MainMenuHUD_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Cpp_Personal_Source_Cpp_Personal_MainMenuHUD_h_15_INCLASS_NO_PURE_DECLS \
	FID_Cpp_Personal_Source_Cpp_Personal_MainMenuHUD_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_PERSONAL_API UClass* StaticClass<class UMainMenuHUD>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Cpp_Personal_Source_Cpp_Personal_MainMenuHUD_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
