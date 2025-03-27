// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameDataInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPP_PERSONAL_GameDataInstance_generated_h
#error "GameDataInstance.generated.h already included, missing '#pragma once' in GameDataInstance.h"
#endif
#define CPP_PERSONAL_GameDataInstance_generated_h

#define FID_Cpp_Personal_Source_Cpp_Personal_GameDataInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetHighScore); \
	DECLARE_FUNCTION(execSaveHighScore);


#define FID_Cpp_Personal_Source_Cpp_Personal_GameDataInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameDataInstance(); \
	friend struct Z_Construct_UClass_UGameDataInstance_Statics; \
public: \
	DECLARE_CLASS(UGameDataInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Cpp_Personal"), NO_API) \
	DECLARE_SERIALIZER(UGameDataInstance)


#define FID_Cpp_Personal_Source_Cpp_Personal_GameDataInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameDataInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGameDataInstance(UGameDataInstance&&); \
	UGameDataInstance(const UGameDataInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameDataInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameDataInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameDataInstance) \
	NO_API virtual ~UGameDataInstance();


#define FID_Cpp_Personal_Source_Cpp_Personal_GameDataInstance_h_12_PROLOG
#define FID_Cpp_Personal_Source_Cpp_Personal_GameDataInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Cpp_Personal_Source_Cpp_Personal_GameDataInstance_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Cpp_Personal_Source_Cpp_Personal_GameDataInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_Cpp_Personal_Source_Cpp_Personal_GameDataInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_PERSONAL_API UClass* StaticClass<class UGameDataInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Cpp_Personal_Source_Cpp_Personal_GameDataInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
