// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "Pickup.generated.h"

/**
 * 
 */
UCLASS()
class MULTIPLAYER_API APickup : public AStaticMeshActor
{
	GENERATED_BODY()

public:
	// Set default values
	APickup();

	// Required network scaffolding
	void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	// Returns whether or not the pickup is active
	UFUNCTION(BlueprintPure, Category = "Pickup")
	bool IsActive();

	// Allows other classes to safety change the pickup's activation state
	UFUNCTION(BlueprintCallable, Category = "Pickup")
	void SetActive(bool NewPickupState);
	
	//Function to call when the pickup is collected
	UFUNCTION(BlueprintNativeEvent, Category = "Pickup")
	void WasCollected();
	virtual void WasCollected_Implementation();

protected:
	// True when the pickup can be used, false when the pickups deactivated
	UPROPERTY(ReplicatedUsing = OnRep_IsActive)
	bool bIsActive;

	// This is called whenever bIsActiveis updated
	UFUNCTION()
	virtual void OnRep_IsActive();


};
