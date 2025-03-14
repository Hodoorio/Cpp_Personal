// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CardActor.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPP_PERSONAL_CardActor_generated_h
#error "CardActor.generated.h already included, missing '#pragma once' in CardActor.h"
#endif
#define CPP_PERSONAL_CardActor_generated_h

#define FID_Cpp_Personal_Source_Cpp_Personal_CardActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetFaceUp);


#define FID_Cpp_Personal_Source_Cpp_Personal_CardActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACardActor(); \
	friend struct Z_Construct_UClass_ACardActor_Statics; \
public: \
	DECLARE_CLASS(ACardActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cpp_Personal"), NO_API) \
	DECLARE_SERIALIZER(ACardActor)


#define FID_Cpp_Personal_Source_Cpp_Personal_CardActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACardActor(ACardActor&&); \
	ACardActor(const ACardActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACardActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACardActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACardActor) \
	NO_API virtual ~ACardActor();


#define FID_Cpp_Personal_Source_Cpp_Personal_CardActor_h_11_PROLOG
#define FID_Cpp_Personal_Source_Cpp_Personal_CardActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Cpp_Personal_Source_Cpp_Personal_CardActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Cpp_Personal_Source_Cpp_Personal_CardActor_h_14_INCLASS_NO_PURE_DECLS \
	FID_Cpp_Personal_Source_Cpp_Personal_CardActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_PERSONAL_API UClass* StaticClass<class ACardActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Cpp_Personal_Source_Cpp_Personal_CardActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
