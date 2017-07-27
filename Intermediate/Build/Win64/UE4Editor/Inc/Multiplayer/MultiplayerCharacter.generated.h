// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIPLAYER_MultiplayerCharacter_generated_h
#error "MultiplayerCharacter.generated.h already included, missing '#pragma once' in MultiplayerCharacter.h"
#endif
#define MULTIPLAYER_MultiplayerCharacter_generated_h

#define Multiplayer_Source_Multiplayer_MultiplayerCharacter_h_12_RPC_WRAPPERS
#define Multiplayer_Source_Multiplayer_MultiplayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Multiplayer_Source_Multiplayer_MultiplayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiplayerCharacter(); \
	friend MULTIPLAYER_API class UClass* Z_Construct_UClass_AMultiplayerCharacter(); \
public: \
	DECLARE_CLASS(AMultiplayerCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Multiplayer"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Multiplayer_Source_Multiplayer_MultiplayerCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMultiplayerCharacter(); \
	friend MULTIPLAYER_API class UClass* Z_Construct_UClass_AMultiplayerCharacter(); \
public: \
	DECLARE_CLASS(AMultiplayerCharacter, ACharacter, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/Multiplayer"), NO_API) \
	DECLARE_SERIALIZER(AMultiplayerCharacter) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Multiplayer_Source_Multiplayer_MultiplayerCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMultiplayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMultiplayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiplayerCharacter(AMultiplayerCharacter&&); \
	NO_API AMultiplayerCharacter(const AMultiplayerCharacter&); \
public:


#define Multiplayer_Source_Multiplayer_MultiplayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMultiplayerCharacter(AMultiplayerCharacter&&); \
	NO_API AMultiplayerCharacter(const AMultiplayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMultiplayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMultiplayerCharacter)


#define Multiplayer_Source_Multiplayer_MultiplayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AMultiplayerCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AMultiplayerCharacter, FollowCamera); } \
	FORCEINLINE static uint32 __PPO__CollectionSphere() { return STRUCT_OFFSET(AMultiplayerCharacter, CollectionSphere); } \
	FORCEINLINE static uint32 __PPO__CollectionSphereRadius() { return STRUCT_OFFSET(AMultiplayerCharacter, CollectionSphereRadius); }


#define Multiplayer_Source_Multiplayer_MultiplayerCharacter_h_9_PROLOG
#define Multiplayer_Source_Multiplayer_MultiplayerCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Multiplayer_Source_Multiplayer_MultiplayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Multiplayer_Source_Multiplayer_MultiplayerCharacter_h_12_RPC_WRAPPERS \
	Multiplayer_Source_Multiplayer_MultiplayerCharacter_h_12_INCLASS \
	Multiplayer_Source_Multiplayer_MultiplayerCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Multiplayer_Source_Multiplayer_MultiplayerCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Multiplayer_Source_Multiplayer_MultiplayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Multiplayer_Source_Multiplayer_MultiplayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Multiplayer_Source_Multiplayer_MultiplayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Multiplayer_Source_Multiplayer_MultiplayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Multiplayer_Source_Multiplayer_MultiplayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
