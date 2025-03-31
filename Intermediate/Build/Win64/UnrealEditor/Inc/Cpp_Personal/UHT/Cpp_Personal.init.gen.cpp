// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCpp_Personal_init() {}
	CPP_PERSONAL_API UFunction* Z_Construct_UDelegateFunction_Cpp_Personal_OnPlayerInfoUpdated__DelegateSignature();
	CPP_PERSONAL_API UFunction* Z_Construct_UDelegateFunction_Cpp_Personal_OnScoreUpdated__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Cpp_Personal;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Cpp_Personal()
	{
		if (!Z_Registration_Info_UPackage__Script_Cpp_Personal.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Cpp_Personal_OnPlayerInfoUpdated__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Cpp_Personal_OnScoreUpdated__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Cpp_Personal",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x4B7160A6,
				0x69FDB499,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Cpp_Personal.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Cpp_Personal.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Cpp_Personal(Z_Construct_UPackage__Script_Cpp_Personal, TEXT("/Script/Cpp_Personal"), Z_Registration_Info_UPackage__Script_Cpp_Personal, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4B7160A6, 0x69FDB499));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
