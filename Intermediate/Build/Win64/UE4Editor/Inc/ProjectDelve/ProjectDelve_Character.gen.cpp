// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ProjectDelve_Character.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectDelve_Character() {}
// Cross Module References
	PROJECTDELVE_API UClass* Z_Construct_UClass_AProjectDelve_Character_NoRegister();
	PROJECTDELVE_API UClass* Z_Construct_UClass_AProjectDelve_Character();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ProjectDelve();
// End Cross Module References
	void AProjectDelve_Character::StaticRegisterNativesAProjectDelve_Character()
	{
	}
	UClass* Z_Construct_UClass_AProjectDelve_Character_NoRegister()
	{
		return AProjectDelve_Character::StaticClass();
	}
	UClass* Z_Construct_UClass_AProjectDelve_Character()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_ACharacter,
				(UObject* (*)())Z_Construct_UPackage__Script_ProjectDelve,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HideCategories", "Navigation" },
				{ "IncludePath", "ProjectDelve_Character.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "ProjectDelve_Character.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AProjectDelve_Character>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AProjectDelve_Character::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
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
	IMPLEMENT_CLASS(AProjectDelve_Character, 2993503903);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectDelve_Character(Z_Construct_UClass_AProjectDelve_Character, &AProjectDelve_Character::StaticClass, TEXT("/Script/ProjectDelve"), TEXT("AProjectDelve_Character"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectDelve_Character);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
