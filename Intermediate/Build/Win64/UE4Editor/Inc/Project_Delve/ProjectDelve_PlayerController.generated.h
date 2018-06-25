// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT_DELVE_ProjectDelve_PlayerController_generated_h
#error "ProjectDelve_PlayerController.generated.h already included, missing '#pragma once' in ProjectDelve_PlayerController.h"
#endif
#define PROJECT_DELVE_ProjectDelve_PlayerController_generated_h

#define ProjectDelve_Source_Project_Delve_ProjectDelve_PlayerController_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execXInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->XInput(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execYInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->YInput(Z_Param_val); \
		P_NATIVE_END; \
	}


#define ProjectDelve_Source_Project_Delve_ProjectDelve_PlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execXInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->XInput(Z_Param_val); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execYInput) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_val); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->YInput(Z_Param_val); \
		P_NATIVE_END; \
	}


#define ProjectDelve_Source_Project_Delve_ProjectDelve_PlayerController_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectDelve_PlayerController(); \
	friend PROJECT_DELVE_API class UClass* Z_Construct_UClass_AProjectDelve_PlayerController(); \
public: \
	DECLARE_CLASS(AProjectDelve_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/Project_Delve"), NO_API) \
	DECLARE_SERIALIZER(AProjectDelve_PlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ProjectDelve_Source_Project_Delve_ProjectDelve_PlayerController_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAProjectDelve_PlayerController(); \
	friend PROJECT_DELVE_API class UClass* Z_Construct_UClass_AProjectDelve_PlayerController(); \
public: \
	DECLARE_CLASS(AProjectDelve_PlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), 0, TEXT("/Script/Project_Delve"), NO_API) \
	DECLARE_SERIALIZER(AProjectDelve_PlayerController) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define ProjectDelve_Source_Project_Delve_ProjectDelve_PlayerController_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectDelve_PlayerController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectDelve_PlayerController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectDelve_PlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectDelve_PlayerController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectDelve_PlayerController(AProjectDelve_PlayerController&&); \
	NO_API AProjectDelve_PlayerController(const AProjectDelve_PlayerController&); \
public:


#define ProjectDelve_Source_Project_Delve_ProjectDelve_PlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectDelve_PlayerController(AProjectDelve_PlayerController&&); \
	NO_API AProjectDelve_PlayerController(const AProjectDelve_PlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectDelve_PlayerController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectDelve_PlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectDelve_PlayerController)


#define ProjectDelve_Source_Project_Delve_ProjectDelve_PlayerController_h_15_PRIVATE_PROPERTY_OFFSET
#define ProjectDelve_Source_Project_Delve_ProjectDelve_PlayerController_h_12_PROLOG
#define ProjectDelve_Source_Project_Delve_ProjectDelve_PlayerController_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDelve_Source_Project_Delve_ProjectDelve_PlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectDelve_Source_Project_Delve_ProjectDelve_PlayerController_h_15_RPC_WRAPPERS \
	ProjectDelve_Source_Project_Delve_ProjectDelve_PlayerController_h_15_INCLASS \
	ProjectDelve_Source_Project_Delve_ProjectDelve_PlayerController_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectDelve_Source_Project_Delve_ProjectDelve_PlayerController_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectDelve_Source_Project_Delve_ProjectDelve_PlayerController_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectDelve_Source_Project_Delve_ProjectDelve_PlayerController_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectDelve_Source_Project_Delve_ProjectDelve_PlayerController_h_15_INCLASS_NO_PURE_DECLS \
	ProjectDelve_Source_Project_Delve_ProjectDelve_PlayerController_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectDelve_Source_Project_Delve_ProjectDelve_PlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
