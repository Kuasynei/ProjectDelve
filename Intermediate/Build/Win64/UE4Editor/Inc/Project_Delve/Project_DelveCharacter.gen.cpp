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
	PROJECT_DELVE_API UClass* Z_Construct_UClass_AProject_DelveCharacter_NoRegister();
	PROJECT_DELVE_API UClass* Z_Construct_UClass_AProject_DelveCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Project_Delve();
	ENGINE_API UClass* Z_Construct_UClass_UDecalComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
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
				(UObject* (*)())Z_Construct_UPackage__Script_Project_Delve,
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
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CursorToWorld_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Project_DelveCharacter.h" },
				{ "ToolTip", "A decal that projects to the cursor location." },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CursorToWorld = { UE4CodeGen_Private::EPropertyClass::Object, "CursorToWorld", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AProject_DelveCharacter, CursorToWorld), Z_Construct_UClass_UDecalComponent_NoRegister, METADATA_PARAMS(NewProp_CursorToWorld_MetaData, ARRAY_COUNT(NewProp_CursorToWorld_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Project_DelveCharacter.h" },
				{ "ToolTip", "Camera boom positioning the camera above the character" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraBoom = { UE4CodeGen_Private::EPropertyClass::Object, "CameraBoom", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AProject_DelveCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(NewProp_CameraBoom_MetaData, ARRAY_COUNT(NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TopDownCameraComponent_MetaData[] = {
				{ "AllowPrivateAccess", "true" },
				{ "Category", "Camera" },
				{ "EditInline", "true" },
				{ "ModuleRelativePath", "Project_DelveCharacter.h" },
				{ "ToolTip", "Top down camera" },
			};
#endif
			static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TopDownCameraComponent = { UE4CodeGen_Private::EPropertyClass::Object, "TopDownCameraComponent", RF_Public|RF_Transient|RF_MarkAsNative, 0x00400000000a001d, 1, nullptr, STRUCT_OFFSET(AProject_DelveCharacter, TopDownCameraComponent), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(NewProp_TopDownCameraComponent_MetaData, ARRAY_COUNT(NewProp_TopDownCameraComponent_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CursorToWorld,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_CameraBoom,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_TopDownCameraComponent,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AProject_DelveCharacter>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AProject_DelveCharacter::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800080u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProject_DelveCharacter, 1037036681);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProject_DelveCharacter(Z_Construct_UClass_AProject_DelveCharacter, &AProject_DelveCharacter::StaticClass, TEXT("/Script/Project_Delve"), TEXT("AProject_DelveCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProject_DelveCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
