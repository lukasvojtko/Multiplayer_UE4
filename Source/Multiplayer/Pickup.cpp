// Fill out your copyright notice in the Description page of Project Settings.

#include "Pickup.h"
#include "Multiplayer.h"

#include "Net/UnrealNetwork.h"

APickup::APickup()
{
	// Tell UE4 to replicate this Actor
	bReplicates = true;

	// Pickup dont need to tick every frame
	PrimaryActorTick.bCanEverTick = false;

	if (Role = ROLE_Authority) {
		bIsActive = true;
	}
}

void APickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(APickup, bIsActive);

}

bool APickup::IsActive()
{
	return bIsActive;
}

void APickup::SetActive(bool NewPickupState)
{
	if (Role == ROLE_Authority){
		bIsActive = NewPickupState;
	}
}

void APickup::OnRep_IsActive()
{

}

void APickup::WasCollected_Implementation()
{
	// Log a debug message
	UE_LOG(LogClass, Log, TEXT("APickup::WasCollected_implementation %s"), *GetName());
}