// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "Components/PointLightComponent.h"
#include "PlayerShip.generated.h"


UCLASS()
class APlayerShip : public ABaseShip
{
	GENERATED_BODY()
public:	
	APlayerShip();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void InputAxisMoveRight(float Value);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void InputAxisMoveUp(float Value);

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void InputActionFireWeapon();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void EventDied();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void EventPossessed();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	float GetShipConstantVelocity();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ClampToCameraBounds();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	FVector GetShipAxisAdjustment();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	FVector CalcOutOfBoundsAdjustment();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	FSAgentInfo GetPlayerAgentInfo();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool ShouldSpawnAIController();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void UpdateHoverPitch();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool HasDiedRecently();

	virtual float TakeDamage(float DamageAmount, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser) override;

/////////////////////////////////////////////////////

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	UPointLightComponent* PointLight;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	USoundBase* HoverAudio;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	class ABasePlayerController* BasePlayerController;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float InvulnerabilityTime;
};
