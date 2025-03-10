// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Card.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPP_PERSONAL_Card_generated_h
#error "Card.generated.h already included, missing '#pragma once' in Card.h"
#endif
#define CPP_PERSONAL_Card_generated_h

#define FID_Cpp_Personal_Source_Cpp_Personal_Card_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execToString); \
	DECLARE_FUNCTION(execGetCardValue);


#define FID_Cpp_Personal_Source_Cpp_Personal_Card_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCard(); \
	friend struct Z_Construct_UClass_UCard_Statics; \
public: \
	DECLARE_CLASS(UCard, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Cpp_Personal"), NO_API) \
	DECLARE_SERIALIZER(UCard)


#define FID_Cpp_Personal_Source_Cpp_Personal_Card_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UCard(UCard&&); \
	UCard(const UCard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCard) \
	NO_API virtual ~UCard();


#define FID_Cpp_Personal_Source_Cpp_Personal_Card_h_10_PROLOG
#define FID_Cpp_Personal_Source_Cpp_Personal_Card_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Cpp_Personal_Source_Cpp_Personal_Card_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Cpp_Personal_Source_Cpp_Personal_Card_h_13_INCLASS_NO_PURE_DECLS \
	FID_Cpp_Personal_Source_Cpp_Personal_Card_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_PERSONAL_API UClass* StaticClass<class UCard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Cpp_Personal_Source_Cpp_Personal_Card_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
