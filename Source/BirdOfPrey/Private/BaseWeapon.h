// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BaseWeapon.generated.h"

UCLASS()
class ABaseWeapon : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void StartFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void StopFire();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual void PlayFireEffects();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual FTransform GetFireEffectSpawnTransform();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	virtual bool HasFinishedFiring();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool IsFiring();

/////////////////////////////////////////////////////////////

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	USceneComponent* DefaultSceneRoot;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UParticleSystem* FireParticleEffect;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	USoundCue* FireSoundCue;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	bool bRequiresAimForAI;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	bool bIsAutomatic;
};
