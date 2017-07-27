// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Multiplayer.generated.dep.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCode1Multiplayer() {}
#if USE_COMPILED_IN_NATIVES
// Cross Module References
	ENGINE_API class UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API class UClass* Z_Construct_UClass_USphereComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API class UClass* Z_Construct_UClass_AGameModeBase();
	ENGINE_API class UClass* Z_Construct_UClass_AStaticMeshActor();
	COREUOBJECT_API class UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API class UClass* Z_Construct_UClass_AActor();
	ENGINE_API class UClass* Z_Construct_UClass_UBoxComponent_NoRegister();

	MULTIPLAYER_API class UClass* Z_Construct_UClass_AMultiplayerCharacter_NoRegister();
	MULTIPLAYER_API class UClass* Z_Construct_UClass_AMultiplayerCharacter();
	MULTIPLAYER_API class UClass* Z_Construct_UClass_AMultiplayerGameMode_NoRegister();
	MULTIPLAYER_API class UClass* Z_Construct_UClass_AMultiplayerGameMode();
	MULTIPLAYER_API class UFunction* Z_Construct_UFunction_APickup_IsActive();
	MULTIPLAYER_API class UFunction* Z_Construct_UFunction_APickup_OnRep_IsActive();
	MULTIPLAYER_API class UFunction* Z_Construct_UFunction_APickup_SetActive();
	MULTIPLAYER_API class UFunction* Z_Construct_UFunction_APickup_WasCollected();
	MULTIPLAYER_API class UClass* Z_Construct_UClass_APickup_NoRegister();
	MULTIPLAYER_API class UClass* Z_Construct_UClass_APickup();
	MULTIPLAYER_API class UClass* Z_Construct_UClass_ABatteryPickup_NoRegister();
	MULTIPLAYER_API class UClass* Z_Construct_UClass_ABatteryPickup();
	MULTIPLAYER_API class UFunction* Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume();
	MULTIPLAYER_API class UClass* Z_Construct_UClass_ASpawnVolume_NoRegister();
	MULTIPLAYER_API class UClass* Z_Construct_UClass_ASpawnVolume();
	MULTIPLAYER_API class UPackage* Z_Construct_UPackage__Script_Multiplayer();
	void AMultiplayerCharacter::StaticRegisterNativesAMultiplayerCharacter()
	{
	}
	UClass* Z_Construct_UClass_AMultiplayerCharacter_NoRegister()
	{
		return AMultiplayerCharacter::StaticClass();
	}
	UClass* Z_Construct_UClass_AMultiplayerCharacter()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_Multiplayer();
			OuterClass = AMultiplayerCharacter::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20800080;


PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_CollectionSphereRadius = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CollectionSphereRadius"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(CollectionSphereRadius, AMultiplayerCharacter), 0x0040000000020035);
				UProperty* NewProp_BaseLookUpRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseLookUpRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseLookUpRate, AMultiplayerCharacter), 0x0010000000020015);
				UProperty* NewProp_BaseTurnRate = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("BaseTurnRate"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(BaseTurnRate, AMultiplayerCharacter), 0x0010000000020015);
				UProperty* NewProp_CollectionSphere = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CollectionSphere"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CollectionSphere, AMultiplayerCharacter), 0x00400000000a001d, Z_Construct_UClass_USphereComponent_NoRegister());
				UProperty* NewProp_FollowCamera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("FollowCamera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(FollowCamera, AMultiplayerCharacter), 0x00400000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				UProperty* NewProp_CameraBoom = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("CameraBoom"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(CameraBoom, AMultiplayerCharacter), 0x00400000000a001d, Z_Construct_UClass_USpringArmComponent_NoRegister());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->ClassConfigName = FName(TEXT("Game"));
				static TCppClassTypeInfo<TCppClassTypeTraits<AMultiplayerCharacter> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MultiplayerCharacter.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MultiplayerCharacter.h"));
				MetaData->SetValue(NewProp_CollectionSphereRadius, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CollectionSphereRadius, TEXT("Category"), TEXT("Battery"));
				MetaData->SetValue(NewProp_CollectionSphereRadius, TEXT("ModuleRelativePath"), TEXT("MultiplayerCharacter.h"));
				MetaData->SetValue(NewProp_CollectionSphereRadius, TEXT("ToolTip"), TEXT("Variable radius can be changed in Editor"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ModuleRelativePath"), TEXT("MultiplayerCharacter.h"));
				MetaData->SetValue(NewProp_BaseLookUpRate, TEXT("ToolTip"), TEXT("Base look up/down rate, in deg/sec. Other scaling may affect final rate."));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ModuleRelativePath"), TEXT("MultiplayerCharacter.h"));
				MetaData->SetValue(NewProp_BaseTurnRate, TEXT("ToolTip"), TEXT("Base turn rate, in deg/sec. Other scaling may affect final turn rate."));
				MetaData->SetValue(NewProp_CollectionSphere, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CollectionSphere, TEXT("Category"), TEXT("Battery"));
				MetaData->SetValue(NewProp_CollectionSphere, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CollectionSphere, TEXT("ModuleRelativePath"), TEXT("MultiplayerCharacter.h"));
				MetaData->SetValue(NewProp_CollectionSphere, TEXT("ToolTip"), TEXT("Collection Sphere"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("ModuleRelativePath"), TEXT("MultiplayerCharacter.h"));
				MetaData->SetValue(NewProp_FollowCamera, TEXT("ToolTip"), TEXT("Follow camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ModuleRelativePath"), TEXT("MultiplayerCharacter.h"));
				MetaData->SetValue(NewProp_CameraBoom, TEXT("ToolTip"), TEXT("Camera boom positioning the camera behind the character"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMultiplayerCharacter, 2655033490);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMultiplayerCharacter(Z_Construct_UClass_AMultiplayerCharacter, &AMultiplayerCharacter::StaticClass, TEXT("/Script/Multiplayer"), TEXT("AMultiplayerCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayerCharacter);
	void AMultiplayerGameMode::StaticRegisterNativesAMultiplayerGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMultiplayerGameMode_NoRegister()
	{
		return AMultiplayerGameMode::StaticClass();
	}
	UClass* Z_Construct_UClass_AMultiplayerGameMode()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AGameModeBase();
			Z_Construct_UPackage__Script_Multiplayer();
			OuterClass = AMultiplayerGameMode::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20880288;


				static TCppClassTypeInfo<TCppClassTypeTraits<AMultiplayerGameMode> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("MultiplayerGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("MultiplayerGameMode.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMultiplayerGameMode, 2383975389);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMultiplayerGameMode(Z_Construct_UClass_AMultiplayerGameMode, &AMultiplayerGameMode::StaticClass, TEXT("/Script/Multiplayer"), TEXT("AMultiplayerGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMultiplayerGameMode);
	static FName NAME_APickup_WasCollected = FName(TEXT("WasCollected"));
	void APickup::WasCollected()
	{
		ProcessEvent(FindFunctionChecked(NAME_APickup_WasCollected),NULL);
	}
	void APickup::StaticRegisterNativesAPickup()
	{
		UClass* Class = APickup::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "IsActive", (Native)&APickup::execIsActive },
			{ "OnRep_IsActive", (Native)&APickup::execOnRep_IsActive },
			{ "SetActive", (Native)&APickup::execSetActive },
			{ "WasCollected", (Native)&APickup::execWasCollected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 4);
	}
	UFunction* Z_Construct_UFunction_APickup_IsActive()
	{
		struct Pickup_eventIsActive_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_APickup();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsActive"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14020401, 65535, sizeof(Pickup_eventIsActive_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, Pickup_eventIsActive_Parms, bool);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, Pickup_eventIsActive_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, Pickup_eventIsActive_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Pickup"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Pickup.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Returns whether or not the pickup is active"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APickup_OnRep_IsActive()
	{
		UObject* Outer=Z_Construct_UClass_APickup();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("OnRep_IsActive"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x00080400, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Pickup.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("This is called whenever bIsActiveis updated"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APickup_SetActive()
	{
		struct Pickup_eventSetActive_Parms
		{
			bool NewPickupState;
		};
		UObject* Outer=Z_Construct_UClass_APickup();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("SetActive"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x04020401, 65535, sizeof(Pickup_eventSetActive_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(NewPickupState, Pickup_eventSetActive_Parms, bool);
			UProperty* NewProp_NewPickupState = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("NewPickupState"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(NewPickupState, Pickup_eventSetActive_Parms), 0x0010000000000080, CPP_BOOL_PROPERTY_BITMASK(NewPickupState, Pickup_eventSetActive_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Pickup"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Pickup.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Allows other classes to safety change the pickup's activation state"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_APickup_WasCollected()
	{
		UObject* Outer=Z_Construct_UClass_APickup();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("WasCollected"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x08020C00, 65535);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Pickup"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Pickup.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Function to call when the pickup is collected"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_APickup_NoRegister()
	{
		return APickup::StaticClass();
	}
	UClass* Z_Construct_UClass_APickup()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AStaticMeshActor();
			Z_Construct_UPackage__Script_Multiplayer();
			OuterClass = APickup::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_APickup_IsActive());
				OuterClass->LinkChild(Z_Construct_UFunction_APickup_OnRep_IsActive());
				OuterClass->LinkChild(Z_Construct_UFunction_APickup_SetActive());
				OuterClass->LinkChild(Z_Construct_UFunction_APickup_WasCollected());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				CPP_BOOL_PROPERTY_BITMASK_STRUCT(bIsActive, APickup, bool);
				UProperty* NewProp_bIsActive = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("bIsActive"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(bIsActive, APickup), 0x0020080100000020, CPP_BOOL_PROPERTY_BITMASK(bIsActive, APickup), sizeof(bool), true);
				NewProp_bIsActive->RepNotifyFunc = FName(TEXT("OnRep_IsActive"));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_APickup_IsActive(), "IsActive"); // 880250753
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_APickup_OnRep_IsActive(), "OnRep_IsActive"); // 4043358250
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_APickup_SetActive(), "SetActive"); // 1062918648
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_APickup_WasCollected(), "WasCollected"); // 2814062817
				static TCppClassTypeInfo<TCppClassTypeTraits<APickup> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Input"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Pickup.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Pickup.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
				MetaData->SetValue(NewProp_bIsActive, TEXT("ModuleRelativePath"), TEXT("Pickup.h"));
				MetaData->SetValue(NewProp_bIsActive, TEXT("ToolTip"), TEXT("True when the pickup can be used, false when the pickups deactivated"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(APickup, 3668579088);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APickup(Z_Construct_UClass_APickup, &APickup::StaticClass, TEXT("/Script/Multiplayer"), TEXT("APickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APickup);
	void ABatteryPickup::StaticRegisterNativesABatteryPickup()
	{
	}
	UClass* Z_Construct_UClass_ABatteryPickup_NoRegister()
	{
		return ABatteryPickup::StaticClass();
	}
	UClass* Z_Construct_UClass_ABatteryPickup()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_APickup();
			Z_Construct_UPackage__Script_Multiplayer();
			OuterClass = ABatteryPickup::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;


				static TCppClassTypeInfo<TCppClassTypeTraits<ABatteryPickup> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Input"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("BatteryPickup.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("BatteryPickup.h"));
				MetaData->SetValue(OuterClass, TEXT("ShowCategories"), TEXT("Input|MouseInput Input|TouchInput"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABatteryPickup, 751866760);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABatteryPickup(Z_Construct_UClass_ABatteryPickup, &ABatteryPickup::StaticClass, TEXT("/Script/Multiplayer"), TEXT("ABatteryPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABatteryPickup);
	void ASpawnVolume::StaticRegisterNativesASpawnVolume()
	{
		UClass* Class = ASpawnVolume::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "GetRandomPointInVolume", (Native)&ASpawnVolume::execGetRandomPointInVolume },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, 1);
	}
	UFunction* Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume()
	{
		struct SpawnVolume_eventGetRandomPointInVolume_Parms
		{
			FVector ReturnValue;
		};
		UObject* Outer=Z_Construct_UClass_ASpawnVolume();
		static UFunction* ReturnFunction = NULL;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("GetRandomPointInVolume"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), NULL, 0x14820401, 65535, sizeof(SpawnVolume_eventGetRandomPointInVolume_Parms));
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UStructProperty(CPP_PROPERTY_BASE(ReturnValue, SpawnVolume_eventGetRandomPointInVolume_Parms), 0x0010000000000580, Z_Construct_UScriptStruct_FVector());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Spawning"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("SpawnVolume.h"));
			MetaData->SetValue(ReturnFunction, TEXT("ToolTip"), TEXT("Find a random point within the box component"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpawnVolume_NoRegister()
	{
		return ASpawnVolume::StaticClass();
	}
	UClass* Z_Construct_UClass_ASpawnVolume()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_AActor();
			Z_Construct_UPackage__Script_Multiplayer();
			OuterClass = ASpawnVolume::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= 0x20900080;

				OuterClass->LinkChild(Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume());

PRAGMA_DISABLE_DEPRECATION_WARNINGS
				UProperty* NewProp_WhereToSpawn = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WhereToSpawn"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(WhereToSpawn, ASpawnVolume), 0x00400000000a001d, Z_Construct_UClass_UBoxComponent_NoRegister());
				UProperty* NewProp_SpawnDelayRangeHigh = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SpawnDelayRangeHigh"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SpawnDelayRangeHigh, ASpawnVolume), 0x0020080000000015);
				UProperty* NewProp_SpawnDelayRangeLow = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("SpawnDelayRangeLow"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(SpawnDelayRangeLow, ASpawnVolume), 0x0020080000000015);
				UProperty* NewProp_WhatToSpawn = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("WhatToSpawn"), RF_Public|RF_Transient|RF_MarkAsNative) UClassProperty(CPP_PROPERTY_BASE(WhatToSpawn, ASpawnVolume), 0x0024080000000001, Z_Construct_UClass_APickup_NoRegister(), UClass::StaticClass());
PRAGMA_ENABLE_DEPRECATION_WARNINGS
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_ASpawnVolume_GetRandomPointInVolume(), "GetRandomPointInVolume"); // 378560040
				static TCppClassTypeInfo<TCppClassTypeTraits<ASpawnVolume> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("SpawnVolume.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("SpawnVolume.h"));
				MetaData->SetValue(NewProp_WhereToSpawn, TEXT("AllowPrivateAccess"), TEXT("true"));
				MetaData->SetValue(NewProp_WhereToSpawn, TEXT("Category"), TEXT("Spawning"));
				MetaData->SetValue(NewProp_WhereToSpawn, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_WhereToSpawn, TEXT("ModuleRelativePath"), TEXT("SpawnVolume.h"));
				MetaData->SetValue(NewProp_WhereToSpawn, TEXT("ToolTip"), TEXT("The spawn area where pickups will be created"));
				MetaData->SetValue(NewProp_SpawnDelayRangeHigh, TEXT("Category"), TEXT("Spawning"));
				MetaData->SetValue(NewProp_SpawnDelayRangeHigh, TEXT("ModuleRelativePath"), TEXT("SpawnVolume.h"));
				MetaData->SetValue(NewProp_SpawnDelayRangeHigh, TEXT("ToolTip"), TEXT("Maximum spawn delay (seconds)"));
				MetaData->SetValue(NewProp_SpawnDelayRangeLow, TEXT("Category"), TEXT("Spawning"));
				MetaData->SetValue(NewProp_SpawnDelayRangeLow, TEXT("ModuleRelativePath"), TEXT("SpawnVolume.h"));
				MetaData->SetValue(NewProp_SpawnDelayRangeLow, TEXT("ToolTip"), TEXT("Minimum spawn delay (seconds)"));
				MetaData->SetValue(NewProp_WhatToSpawn, TEXT("Category"), TEXT("Spawning"));
				MetaData->SetValue(NewProp_WhatToSpawn, TEXT("ModuleRelativePath"), TEXT("SpawnVolume.h"));
				MetaData->SetValue(NewProp_WhatToSpawn, TEXT("ToolTip"), TEXT("This is the pickup to spawn"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpawnVolume, 2138482144);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpawnVolume(Z_Construct_UClass_ASpawnVolume, &ASpawnVolume::StaticClass, TEXT("/Script/Multiplayer"), TEXT("ASpawnVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawnVolume);
	UPackage* Z_Construct_UPackage__Script_Multiplayer()
	{
		static UPackage* ReturnPackage = nullptr;
		if (!ReturnPackage)
		{
			ReturnPackage = CastChecked<UPackage>(StaticFindObjectFast(UPackage::StaticClass(), nullptr, FName(TEXT("/Script/Multiplayer")), false, false));
			ReturnPackage->SetPackageFlags(PKG_CompiledIn | 0x00000000);
			FGuid Guid;
			Guid.A = 0xABC0E587;
			Guid.B = 0xC8764999;
			Guid.C = 0x00000000;
			Guid.D = 0x00000000;
			ReturnPackage->SetGuid(Guid);

		}
		return ReturnPackage;
	}
#endif
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
