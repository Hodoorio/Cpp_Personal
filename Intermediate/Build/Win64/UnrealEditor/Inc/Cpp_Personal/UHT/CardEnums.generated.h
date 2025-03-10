// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CardEnums.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPP_PERSONAL_CardEnums_generated_h
#error "CardEnums.generated.h already included, missing '#pragma once' in CardEnums.h"
#endif
#define CPP_PERSONAL_CardEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Cpp_Personal_Source_Cpp_Personal_CardEnums_h


#define FOREACH_ENUM_ESUIT(op) \
	op(ESuit::Hearts) \
	op(ESuit::Diamonds) \
	op(ESuit::Clubs) \
	op(ESuit::Spades) 

enum class ESuit : uint8;
template<> struct TIsUEnumClass<ESuit> { enum { Value = true }; };
template<> CPP_PERSONAL_API UEnum* StaticEnum<ESuit>();

#define FOREACH_ENUM_ERANK(op) \
	op(ERank::Ace) \
	op(ERank::Two) \
	op(ERank::Three) \
	op(ERank::Four) \
	op(ERank::Five) \
	op(ERank::Six) \
	op(ERank::Seven) \
	op(ERank::Eight) \
	op(ERank::Nine) \
	op(ERank::Ten) \
	op(ERank::Jack) \
	op(ERank::Queen) \
	op(ERank::King) 

enum class ERank : uint8;
template<> struct TIsUEnumClass<ERank> { enum { Value = true }; };
template<> CPP_PERSONAL_API UEnum* StaticEnum<ERank>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
