// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseGameAgent.h"
#include "BaseStationaryEnemy.generated.h"

UCLASS()
class ABaseStationaryEnemy : public ABaseGameAgent
{
	GENERATED_BODY()

public:
	ABaseStationaryEnemy();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void EventDied();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Reset();
};