// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TableActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACardActor;
class UCard;
#ifdef CPP_PERSONAL_TableActor_generated_h
#error "TableActor.generated.h already included, missing '#pragma once' in TableActor.h"
#endif
#define CPP_PERSONAL_TableActor_generated_h

#define FID_Cpp_Personal_Source_Cpp_Personal_TableActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execClearTableCards); \
	DECLARE_FUNCTION(execFindCardActor); \
	DECLARE_FUNCTION(execSpawnCard);


#define FID_Cpp_Personal_Source_Cpp_Personal_TableActor_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATableActor(); \
	friend struct Z_Construct_UClass_ATableActor_Statics; \
public: \
	DECLARE_CLASS(ATableActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cpp_Personal"), NO_API) \
	DECLARE_SERIALIZER(ATableActor)


#define FID_Cpp_Personal_Source_Cpp_Personal_TableActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATableActor(ATableActor&&); \
	ATableActor(const ATableActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATableActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATableActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATableActor) \
	NO_API virtual ~ATableActor();


#define FID_Cpp_Personal_Source_Cpp_Personal_TableActor_h_9_PROLOG
#define FID_Cpp_Personal_Source_Cpp_Personal_TableActor_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Cpp_Personal_Source_Cpp_Personal_TableActor_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Cpp_Personal_Source_Cpp_Personal_TableActor_h_12_INCLASS_NO_PURE_DECLS \
	FID_Cpp_Personal_Source_Cpp_Personal_TableActor_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_PERSONAL_API UClass* StaticClass<class ATableActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Cpp_Personal_Source_Cpp_Personal_TableActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
