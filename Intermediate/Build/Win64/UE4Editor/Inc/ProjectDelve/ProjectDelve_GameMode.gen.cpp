// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ProjectDelve_GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectDelve_GameMode() {}
// Cross Module References
	PROJECTDELVE_API UClass* Z_Construct_UClass_AProjectDelve_GameMode_NoRegister();
	PROJECTDELVE_API UClass* Z_Construct_UClass_AProjectDelve_GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ProjectDelve();
// End Cross Module References
	void AProjectDelve_GameMode::StaticRegisterNativesAProjectDelve_GameMode()
	{
	}
	UClass* Z_Construct_UClass_AProjectDelve_GameMode_NoRegister()
	{
		return AProjectDelve_GameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AProjectDelve_GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_ProjectDelve,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "ProjectDelve_GameMode.h" },
				{ "ModuleRelativePath", "ProjectDelve_GameMode.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AProjectDelve_GameMode>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AProjectDelve_GameMode::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00880288u,
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
	IMPLEMENT_CLASS(AProjectDelve_GameMode, 2166372618);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectDelve_GameMode(Z_Construct_UClass_AProjectDelve_GameMode, &AProjectDelve_GameMode::StaticClass, TEXT("/Script/ProjectDelve"), TEXT("AProjectDelve_GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectDelve_GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
