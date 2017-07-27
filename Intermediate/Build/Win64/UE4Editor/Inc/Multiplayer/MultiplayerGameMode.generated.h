// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MULTIPLAYER_MultiplayerGameMode_generated_h
#error "MultiplayerGameMode.generated.h already included, missing '#pragma once' in MultiplayerGameMode.h"
#endif
#define MULTIPLAYER_MultiplayerGameMode_generated_h

#define Multiplayer_Source_Multiplayer_MultiplayerGameMode_h_12_RPC_WRAPPERS
#define Multiplayer_Source_Multiplayer_MultiplayerGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Multiplayer_Source_Multiplayer_MultiplayerGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMultiplayerGameMode(); \
	friend MULTIPLAYER_API class UClass* Z_Construct_UClass_AMultiplayerGameMode(); \
public: \
	DECLARE_CLASS(AMultiplayerGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Multiplayer"), MULTIPLAYER_API) \
	DECLARE_SERIALIZER(AMultiplayerGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Multiplayer_Source_Multiplayer_MultiplayerGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAMultiplayerGameMode(); \
	friend MULTIPLAYER_API class UClass* Z_Construct_UClass_AMultiplayerGameMode(); \
public: \
	DECLARE_CLASS(AMultiplayerGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Multiplayer"), MULTIPLAYER_API) \
	DECLARE_SERIALIZER(AMultiplayerGameMode) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Multiplayer_Source_Multiplayer_MultiplayerGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MULTIPLAYER_API AMultiplayerGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMultiplayerGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MULTIPLAYER_API, AMultiplayerGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MULTIPLAYER_API AMultiplayerGameMode(AMultiplayerGameMode&&); \
	MULTIPLAYER_API AMultiplayerGameMode(const AMultiplayerGameMode&); \
public:


#define Multiplayer_Source_Multiplayer_MultiplayerGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	MULTIPLAYER_API AMultiplayerGameMode(AMultiplayerGameMode&&); \
	MULTIPLAYER_API AMultiplayerGameMode(const AMultiplayerGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MULTIPLAYER_API, AMultiplayerGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMultiplayerGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMultiplayerGameMode)


#define Multiplayer_Source_Multiplayer_MultiplayerGameMode_h_12_PRIVATE_PROPERTY_OFFSET
#define Multiplayer_Source_Multiplayer_MultiplayerGameMode_h_9_PROLOG
#define Multiplayer_Source_Multiplayer_MultiplayerGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Multiplayer_Source_Multiplayer_MultiplayerGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Multiplayer_Source_Multiplayer_MultiplayerGameMode_h_12_RPC_WRAPPERS \
	Multiplayer_Source_Multiplayer_MultiplayerGameMode_h_12_INCLASS \
	Multiplayer_Source_Multiplayer_MultiplayerGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Multiplayer_Source_Multiplayer_MultiplayerGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Multiplayer_Source_Multiplayer_MultiplayerGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	Multiplayer_Source_Multiplayer_MultiplayerGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Multiplayer_Source_Multiplayer_MultiplayerGameMode_h_12_INCLASS_NO_PURE_DECLS \
	Multiplayer_Source_Multiplayer_MultiplayerGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Multiplayer_Source_Multiplayer_MultiplayerGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
