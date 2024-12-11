// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "BaseWeapon.h"
#include "BaseGameAgent.generated.h"


UCLASS()
class ABaseGameAgent : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABaseGameAgent();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    virtual void ChangeWeaponType();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    virtual void GetWeaponSpawnTransform();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    virtual void SpawnDefaultWeapon();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    virtual void StartFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    virtual void StopFire();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    virtual void IsAlive();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    virtual void Died();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    virtual void PlayHitEffects();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    virtual void CleanUp();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
   	virtual void ApplyAgentInfo();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    virtual void AimAt();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    virtual void PlayDeathEffects();

    UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
    virtual void CheckForOutOfBounds();

///////////////////////////////////////////////////////////

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float MoveSpeed;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UObject* Weapon;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	ABaseWeapon* DefaultWeaponType;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float Health;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	UStruct* AgentInfo;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "BirdOfPrey")
	float Points;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	bool bCheckForOutOfBounds;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float OutOfBoundsCheckTolerance;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FName WeaponSocketName;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	EAttachmentRule WeaponAttachRule;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	FVector TargetLocation;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
