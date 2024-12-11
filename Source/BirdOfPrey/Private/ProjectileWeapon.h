// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseWeapon.h"
#include "ProjectileWeapon.generated.h"

UCLASS()
class AProjectileWeapon : public ABaseWeapon
{
	GENERATED_BODY()

public:
	AProjectileWeapon();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void EventStartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void FireProjectile();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void EventStopFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool bIsFiring();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void SpawnProjectile();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	FTransform GetProjectileSpawnTransform();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ReadyToFire();

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	TSubclassOf<class ABaseProjectile> ProjectileType;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float RefireTime;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float LastFireTime;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	int32 NumShots;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float DesiredZ;
};
