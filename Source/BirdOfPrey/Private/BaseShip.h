// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGameAgent.h"
#include "BaseShip.generated.h"

UCLASS()
class ABaseShip : public ABaseGameAgent
{
	GENERATED_BODY()

public:
	ABaseShip();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	
	virtual void ApplyAgentInfo() override;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void OnActorBeginOverlap();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Reset();

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	class UFloatingPawnMovement* FloatingPawnMovement;
};