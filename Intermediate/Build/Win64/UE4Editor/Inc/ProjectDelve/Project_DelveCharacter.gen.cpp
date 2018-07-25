// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Project_DelveCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProject_DelveCharacter() {}
// Cross Module References
	PROJECTDELVE_API UClass* Z_Construct_UClass_AProject_DelveCharacter_NoRegister();
	PROJECTDELVE_API UClass* Z_Construct_UClass_AProject_DelveCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ProjectDelve();
// End Cross Module References
	void AProject_DelveCharacter::StaticRegisterNativesAProject_DelveCharacter()
	{
	}
	UClass* Z_Construct_UClass_AProject_DelveCharacter_NoRegister()
	{
		return AProject_DelveCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AProject_DelveCharacter()
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
				{ "IncludePath", "Project_DelveCharacter.h" },
				{ "IsBlueprintBase", "true" },
				{ "ModuleRelativePath", "Project_DelveCharacter.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AProject_DelveCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AProject_DelveCharacter::StaticClass,
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
	IMPLEMENT_CLASS(AProject_DelveCharacter, 2031389469);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProject_DelveCharacter(Z_Construct_UClass_AProject_DelveCharacter, &AProject_DelveCharacter::StaticClass, TEXT("/Script/ProjectDelve"), TEXT("AProject_DelveCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProject_DelveCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
