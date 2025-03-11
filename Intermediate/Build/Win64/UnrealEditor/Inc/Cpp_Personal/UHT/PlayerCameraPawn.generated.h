// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "PlayerCameraPawn.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPP_PERSONAL_PlayerCameraPawn_generated_h
#error "PlayerCameraPawn.generated.h already included, missing '#pragma once' in PlayerCameraPawn.h"
#endif
#define CPP_PERSONAL_PlayerCameraPawn_generated_h

#define FID_Cpp_Personal_Source_Cpp_Personal_PlayerCameraPawn_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCameraPawn(); \
	friend struct Z_Construct_UClass_APlayerCameraPawn_Statics; \
public: \
	DECLARE_CLASS(APlayerCameraPawn, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Cpp_Personal"), NO_API) \
	DECLARE_SERIALIZER(APlayerCameraPawn)


#define FID_Cpp_Personal_Source_Cpp_Personal_PlayerCameraPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	APlayerCameraPawn(APlayerCameraPawn&&); \
	APlayerCameraPawn(const APlayerCameraPawn&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCameraPawn); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCameraPawn); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCameraPawn) \
	NO_API virtual ~APlayerCameraPawn();


#define FID_Cpp_Personal_Source_Cpp_Personal_PlayerCameraPawn_h_10_PROLOG
#define FID_Cpp_Personal_Source_Cpp_Personal_PlayerCameraPawn_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Cpp_Personal_Source_Cpp_Personal_PlayerCameraPawn_h_13_INCLASS_NO_PURE_DECLS \
	FID_Cpp_Personal_Source_Cpp_Personal_PlayerCameraPawn_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CPP_PERSONAL_API UClass* StaticClass<class APlayerCameraPawn>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Cpp_Personal_Source_Cpp_Personal_PlayerCameraPawn_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
