// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIPLAYER_Pickup_generated_h
#error "Pickup.generated.h already included, missing '#pragma once' in Pickup.h"
#endif
#define MULTIPLAYER_Pickup_generated_h

#define Multiplayer_Source_Multiplayer_Pickup_h_15_RPC_WRAPPERS \
	virtual void WasCollected_Implementation(); \
 \
	DECLARE_FUNCTION(execOnRep_IsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_IsActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasCollected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->WasCollected_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActive) \
	{ \
		P_GET_UBOOL(Z_Param_NewPickupState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetActive(Z_Param_NewPickupState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsActive(); \
		P_NATIVE_END; \
	}


#define Multiplayer_Source_Multiplayer_Pickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_IsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->OnRep_IsActive(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execWasCollected) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->WasCollected_Implementation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetActive) \
	{ \
		P_GET_UBOOL(Z_Param_NewPickupState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		this->SetActive(Z_Param_NewPickupState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execIsActive) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=this->IsActive(); \
		P_NATIVE_END; \
	}


#define Multiplayer_Source_Multiplayer_Pickup_h_15_EVENT_PARMS
#define Multiplayer_Source_Multiplayer_Pickup_h_15_CALLBACK_WRAPPERS
#define Multiplayer_Source_Multiplayer_Pickup_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend MULTIPLAYER_API class UClass* Z_Construct_UClass_APickup(); \
public: \
	DECLARE_CLASS(APickup, AStaticMeshActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Multiplayer"), NO_API) \
	DECLARE_SERIALIZER(APickup) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Multiplayer_Source_Multiplayer_Pickup_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPickup(); \
	friend MULTIPLAYER_API class UClass* Z_Construct_UClass_APickup(); \
public: \
	DECLARE_CLASS(APickup, AStaticMeshActor, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Multiplayer"), NO_API) \
	DECLARE_SERIALIZER(APickup) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Multiplayer_Source_Multiplayer_Pickup_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public:


#define Multiplayer_Source_Multiplayer_Pickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APickup(APickup&&); \
	NO_API APickup(const APickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APickup); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APickup)


#define Multiplayer_Source_Multiplayer_Pickup_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bIsActive() { return STRUCT_OFFSET(APickup, bIsActive); }


#define Multiplayer_Source_Multiplayer_Pickup_h_12_PROLOG \
	Multiplayer_Source_Multiplayer_Pickup_h_15_EVENT_PARMS


#define Multiplayer_Source_Multiplayer_Pickup_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Multiplayer_Source_Multiplayer_Pickup_h_15_PRIVATE_PROPERTY_OFFSET \
	Multiplayer_Source_Multiplayer_Pickup_h_15_RPC_WRAPPERS \
	Multiplayer_Source_Multiplayer_Pickup_h_15_CALLBACK_WRAPPERS \
	Multiplayer_Source_Multiplayer_Pickup_h_15_INCLASS \
	Multiplayer_Source_Multiplayer_Pickup_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Multiplayer_Source_Multiplayer_Pickup_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Multiplayer_Source_Multiplayer_Pickup_h_15_PRIVATE_PROPERTY_OFFSET \
	Multiplayer_Source_Multiplayer_Pickup_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Multiplayer_Source_Multiplayer_Pickup_h_15_CALLBACK_WRAPPERS \
	Multiplayer_Source_Multiplayer_Pickup_h_15_INCLASS_NO_PURE_DECLS \
	Multiplayer_Source_Multiplayer_Pickup_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Multiplayer_Source_Multiplayer_Pickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
