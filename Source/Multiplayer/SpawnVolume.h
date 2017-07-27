// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "CoreMinimal.h"

#include "Engine.h"
#include "GameFramework/Actor.h"
#include "SpawnVolume.generated.h"

UCLASS()
class MULTIPLAYER_API ASpawnVolume : public AActor
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	ASpawnVolume();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called every frame
	virtual void Tick(float DeltaSeconds) override;

	// Returns the spawn volume box component 
	FORCEINLINE class UBoxComponent* GetWhereToSpawn() const { return WhereToSpawn; }

	// Find a random point within the box component
	UFUNCTION(BlueprintPure, Category = "Spawning")
	FVector GetRandomPointInVolume();

protected:
	//This is the pickup to spawn
	UPROPERTY(EditAnyWhere, Category = "Spawning")
	TSubclassOf<class APickup> WhatToSpawn;

	// Access to the timer for recurring spawning
	FTimerHandle SpawnTimer;

	// Minimum spawn delay (seconds)
	UPROPERTY(EditAnyWhere, BlueprintReadOnly, Category = "Spawning")
	float SpawnDelayRangeLow;

	// Maximum spawn delay (seconds)
	UPROPERTY(EditAnyWhere, BlueprintReadOnly, Category = "Spawning")
	float SpawnDelayRangeHigh;

private:
	// The spawn area where pickups will be created
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Spawning", Meta = (AllowPrivateAccess = "true"))
	class UBoxComponent* WhereToSpawn;
	
	// Handle spawning a new pickup
	void SpawnPickup();

	// Actual time (seconds) before spawning the next pickup
	float SpawnDelay;

};
