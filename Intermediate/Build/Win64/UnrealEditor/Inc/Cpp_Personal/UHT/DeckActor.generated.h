// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DeckActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCard;
#ifdef CPP_PERSONAL_DeckActor_generated_h
#error "DeckActor.generated.h already included, missing '#pragma once' in DeckActor.h"
#endif
#define CPP_PERSONAL_DeckActor_generated_h

#define FID_Cpp_Personal_Source_Cpp_Personal_DeckActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDrawCard);


#define FID_Cpp_Personal_Source_Cpp_Personal_DeckActor_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADeckActor(); \
	friend struct Z_Construct_UClass_ADeckActor_Statics; \
public: \
	DECLARE_CLASS(ADeckActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cpp_Personal"), NO_API) \
	DECLARE_SERIALIZER(ADeckActor)


#define FID_Cpp_Personal_Source_Cpp_Personal_DeckActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADeckActor(ADeckActor&&); \
	ADeckActor(const ADeckActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeckActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeckActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADeckActor) \
	NO_API virtual ~ADeckActor();


#define FID_Cpp_Personal_Source_Cpp_Personal_DeckActor_h_8_PROLOG
#define FID_Cpp_Personal_Source_Cpp_Personal_DeckActor_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Cpp_Personal_Source_Cpp_Personal_DeckActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Cpp_Personal_Source_Cpp_Personal_DeckActor_h_11_INCLASS_NO_PURE_DECLS \
	FID_Cpp_Personal_Source_Cpp_Personal_DeckActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_PERSONAL_API UClass* StaticClass<class ADeckActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Cpp_Personal_Source_Cpp_Personal_DeckActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
