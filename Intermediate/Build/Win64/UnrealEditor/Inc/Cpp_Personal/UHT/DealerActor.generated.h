// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DealerActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UCard;
#ifdef CPP_PERSONAL_DealerActor_generated_h
#error "DealerActor.generated.h already included, missing '#pragma once' in DealerActor.h"
#endif
#define CPP_PERSONAL_DealerActor_generated_h

#define FID_Cpp_Personal_Source_Cpp_Personal_DealerActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGiveCardToHand); \
	DECLARE_FUNCTION(execGetHandValue); \
	DECLARE_FUNCTION(execDrawCard);


#define FID_Cpp_Personal_Source_Cpp_Personal_DealerActor_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADealerActor(); \
	friend struct Z_Construct_UClass_ADealerActor_Statics; \
public: \
	DECLARE_CLASS(ADealerActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cpp_Personal"), NO_API) \
	DECLARE_SERIALIZER(ADealerActor)


#define FID_Cpp_Personal_Source_Cpp_Personal_DealerActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ADealerActor(ADealerActor&&); \
	ADealerActor(const ADealerActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADealerActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADealerActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADealerActor) \
	NO_API virtual ~ADealerActor();


#define FID_Cpp_Personal_Source_Cpp_Personal_DealerActor_h_8_PROLOG
#define FID_Cpp_Personal_Source_Cpp_Personal_DealerActor_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Cpp_Personal_Source_Cpp_Personal_DealerActor_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Cpp_Personal_Source_Cpp_Personal_DealerActor_h_11_INCLASS_NO_PURE_DECLS \
	FID_Cpp_Personal_Source_Cpp_Personal_DealerActor_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_PERSONAL_API UClass* StaticClass<class ADealerActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Cpp_Personal_Source_Cpp_Personal_DealerActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
