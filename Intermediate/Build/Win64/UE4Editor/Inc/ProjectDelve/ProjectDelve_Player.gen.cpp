// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ProjectDelve_Player.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectDelve_Player() {}
// Cross Module References
	PROJECTDELVE_API UClass* Z_Construct_UClass_AProjectDelve_Player_NoRegister();
	PROJECTDELVE_API UClass* Z_Construct_UClass_AProjectDelve_Player();
	PROJECTDELVE_API UClass* Z_Construct_UClass_AProjectDelve_Character();
	UPackage* Z_Construct_UPackage__Script_ProjectDelve();
// End Cross Module References
	void AProjectDelve_Player::StaticRegisterNativesAProjectDelve_Player()
	{
	}
	UClass* Z_Construct_UClass_AProjectDelve_Player_NoRegister()
	{
		return AProjectDelve_Player::StaticClass();
	}
	UClass* Z_Construct_UClass_AProjectDelve_Player()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AProjectDelve_Character,
				(UObject* (*)())Z_Construct_UPackage__Script_ProjectDelve,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "ProjectDelve_Player.h" },
				{ "ModuleRelativePath", "ProjectDelve_Player.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AProjectDelve_Player>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AProjectDelve_Player::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectDelve_Player, 806078011);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectDelve_Player(Z_Construct_UClass_AProjectDelve_Player, &AProjectDelve_Player::StaticClass, TEXT("/Script/ProjectDelve"), TEXT("AProjectDelve_Player"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectDelve_Player);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
