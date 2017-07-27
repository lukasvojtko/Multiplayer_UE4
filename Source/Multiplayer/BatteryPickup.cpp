// Fill out your copyright notice in the Description page of Project Settings.

#include "BatteryPickup.h"
#include "Multiplayer.h"

#include "Components/StaticMeshComponent.h"

ABatteryPickup::ABatteryPickup()
{
	// Keep movement synced from server to client
	bReplicateMovement = true;

	// This pickup is physics enabled and should move
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	GetStaticMeshComponent()->SetSimulatePhysics(true);
}

void ABatteryPickup::WasCollected_Implementation()
{
	// allow parent class to handle this FIRST
	Super::WasCollected_Implementation();
	// Destroy the battery
	Destroy();
}
