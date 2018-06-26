// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "ProjectDelve_PlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProjectDelve_PlayerController() {}
// Cross Module References
	PROJECTDELVE_API UClass* Z_Construct_UClass_AProjectDelve_PlayerController_NoRegister();
	PROJECTDELVE_API UClass* Z_Construct_UClass_AProjectDelve_PlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ProjectDelve();
	PROJECTDELVE_API UFunction* Z_Construct_UFunction_AProjectDelve_PlayerController_XInput();
	PROJECTDELVE_API UFunction* Z_Construct_UFunction_AProjectDelve_PlayerController_YInput();
// End Cross Module References
	void AProjectDelve_PlayerController::StaticRegisterNativesAProjectDelve_PlayerController()
	{
		UClass* Class = AProjectDelve_PlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "XInput", &AProjectDelve_PlayerController::execXInput },
			{ "YInput", &AProjectDelve_PlayerController::execYInput },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AProjectDelve_PlayerController_XInput()
	{
		struct ProjectDelve_PlayerController_eventXInput_Parms
		{
			float val;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_val = { UE4CodeGen_Private::EPropertyClass::Float, "val", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ProjectDelve_PlayerController_eventXInput_Parms, val), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_val,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "ProjectDelve_PlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectDelve_PlayerController, "XInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(ProjectDelve_PlayerController_eventXInput_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AProjectDelve_PlayerController_YInput()
	{
		struct ProjectDelve_PlayerController_eventYInput_Parms
		{
			float val;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_val = { UE4CodeGen_Private::EPropertyClass::Float, "val", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(ProjectDelve_PlayerController_eventYInput_Parms, val), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_val,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "ProjectDelve_PlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AProjectDelve_PlayerController, "YInput", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(ProjectDelve_PlayerController_eventYInput_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AProjectDelve_PlayerController_NoRegister()
	{
		return AProjectDelve_PlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_AProjectDelve_PlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerController,
				(UObject* (*)())Z_Construct_UPackage__Script_ProjectDelve,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AProjectDelve_PlayerController_XInput, "XInput" }, // 311925249
				{ &Z_Construct_UFunction_AProjectDelve_PlayerController_YInput, "YInput" }, // 4198243402
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "ProjectDelve_PlayerController.h" },
				{ "ModuleRelativePath", "ProjectDelve_PlayerController.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AProjectDelve_PlayerController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AProjectDelve_PlayerController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00800284u,
				FuncInfo, ARRAY_COUNT(FuncInfo),
				nullptr, 0,
				"Game",
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProjectDelve_PlayerController, 1307516794);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProjectDelve_PlayerController(Z_Construct_UClass_AProjectDelve_PlayerController, &AProjectDelve_PlayerController::StaticClass, TEXT("/Script/ProjectDelve"), TEXT("AProjectDelve_PlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProjectDelve_PlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
