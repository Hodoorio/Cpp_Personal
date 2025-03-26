// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Deck.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCard;
#ifdef CPP_PERSONAL_Deck_generated_h
#error "Deck.generated.h already included, missing '#pragma once' in Deck.h"
#endif
#define CPP_PERSONAL_Deck_generated_h

#define FID_Cpp_Personal_Source_Cpp_Personal_Deck_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execDrawCard); \
	DECLARE_FUNCTION(execShuffleDeck); \
	DECLARE_FUNCTION(execInitializeDeck);


#define FID_Cpp_Personal_Source_Cpp_Personal_Deck_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDeck(); \
	friend struct Z_Construct_UClass_UDeck_Statics; \
public: \
	DECLARE_CLASS(UDeck, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Cpp_Personal"), NO_API) \
	DECLARE_SERIALIZER(UDeck)


#define FID_Cpp_Personal_Source_Cpp_Personal_Deck_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UDeck(UDeck&&); \
	UDeck(const UDeck&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeck); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeck); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDeck) \
	NO_API virtual ~UDeck();


#define FID_Cpp_Personal_Source_Cpp_Personal_Deck_h_9_PROLOG
#define FID_Cpp_Personal_Source_Cpp_Personal_Deck_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Cpp_Personal_Source_Cpp_Personal_Deck_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Cpp_Personal_Source_Cpp_Personal_Deck_h_12_INCLASS_NO_PURE_DECLS \
	FID_Cpp_Personal_Source_Cpp_Personal_Deck_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_PERSONAL_API UClass* StaticClass<class UDeck>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Cpp_Personal_Source_Cpp_Personal_Deck_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
