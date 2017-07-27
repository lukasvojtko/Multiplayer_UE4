// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Pickup.h"
#include "BatteryPickup.generated.h"

/**
 * 
 */
UCLASS()
class MULTIPLAYER_API ABatteryPickup : public APickup
{
	GENERATED_BODY()
	
public:
	// Set default values for instances of this class
	ABatteryPickup();
	
	// Override the base class version to handle being
	void WasCollected_Implementation() override;
	
};
