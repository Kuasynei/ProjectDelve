// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Project_DelvePlayerController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProject_DelvePlayerController() {}
// Cross Module References
	PROJECTDELVE_API UClass* Z_Construct_UClass_AProject_DelvePlayerController_NoRegister();
	PROJECTDELVE_API UClass* Z_Construct_UClass_AProject_DelvePlayerController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_ProjectDelve();
	PROJECTDELVE_API UFunction* Z_Construct_UFunction_AProject_DelvePlayerController_XAxisStick();
	PROJECTDELVE_API UFunction* Z_Construct_UFunction_AProject_DelvePlayerController_YAxisStick();
// End Cross Module References
	void AProject_DelvePlayerController::StaticRegisterNativesAProject_DelvePlayerController()
	{
		UClass* Class = AProject_DelvePlayerController::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "XAxisStick", &AProject_DelvePlayerController::execXAxisStick },
			{ "YAxisStick", &AProject_DelvePlayerController::execYAxisStick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	UFunction* Z_Construct_UFunction_AProject_DelvePlayerController_XAxisStick()
	{
		struct Project_DelvePlayerController_eventXAxisStick_Parms
		{
			float val;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_val = { UE4CodeGen_Private::EPropertyClass::Float, "val", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Project_DelvePlayerController_eventXAxisStick_Parms, val), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_val,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Project_DelvePlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AProject_DelvePlayerController, "XAxisStick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(Project_DelvePlayerController_eventXAxisStick_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_AProject_DelvePlayerController_YAxisStick()
	{
		struct Project_DelvePlayerController_eventYAxisStick_Parms
		{
			float val;
		};
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			static const UE4CodeGen_Private::FFloatPropertyParams NewProp_val = { UE4CodeGen_Private::EPropertyClass::Float, "val", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000000080, 1, nullptr, STRUCT_OFFSET(Project_DelvePlayerController_eventYAxisStick_Parms, val), METADATA_PARAMS(nullptr, 0) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_val,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
				{ "ModuleRelativePath", "Project_DelvePlayerController.h" },
			};
#endif
			static const UE4CodeGen_Private::FFunctionParams FuncParams = { (UObject*(*)())Z_Construct_UClass_AProject_DelvePlayerController, "YAxisStick", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(Project_DelvePlayerController_eventYAxisStick_Parms), PropPointers, ARRAY_COUNT(PropPointers), 0, 0, METADATA_PARAMS(Function_MetaDataParams, ARRAY_COUNT(Function_MetaDataParams)) };
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AProject_DelvePlayerController_NoRegister()
	{
		return AProject_DelvePlayerController::StaticClass();
	}
	UClass* Z_Construct_UClass_AProject_DelvePlayerController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_APlayerController,
				(UObject* (*)())Z_Construct_UPackage__Script_ProjectDelve,
			};
			static const FClassFunctionLinkInfo FuncInfo[] = {
				{ &Z_Construct_UFunction_AProject_DelvePlayerController_XAxisStick, "XAxisStick" }, // 3930524085
				{ &Z_Construct_UFunction_AProject_DelvePlayerController_YAxisStick, "YAxisStick" }, // 3030781557
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "Project_DelvePlayerController.h" },
				{ "ModuleRelativePath", "Project_DelvePlayerController.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AProject_DelvePlayerController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AProject_DelvePlayerController::StaticClass,
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
	IMPLEMENT_CLASS(AProject_DelvePlayerController, 3260466565);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProject_DelvePlayerController(Z_Construct_UClass_AProject_DelvePlayerController, &AProject_DelvePlayerController::StaticClass, TEXT("/Script/ProjectDelve"), TEXT("AProject_DelvePlayerController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProject_DelvePlayerController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
