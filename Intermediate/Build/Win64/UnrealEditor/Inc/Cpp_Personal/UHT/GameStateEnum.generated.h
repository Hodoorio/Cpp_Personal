// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GameStateEnum.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CPP_PERSONAL_GameStateEnum_generated_h
#error "GameStateEnum.generated.h already included, missing '#pragma once' in GameStateEnum.h"
#endif
#define CPP_PERSONAL_GameStateEnum_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Cpp_Personal_Source_Cpp_Personal_GameStateEnum_h


#define FOREACH_ENUM_EGAMESTATE(op) \
	op(EGameState::WaitingForBet) \
	op(EGameState::PlayerTurn) \
	op(EGameState::DealerTurn) \
	op(EGameState::GameOver) 

enum class EGameState : uint8;
template<> struct TIsUEnumClass<EGameState> { enum { Value = true }; };
template<> CPP_PERSONAL_API UEnum* StaticEnum<EGameState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
