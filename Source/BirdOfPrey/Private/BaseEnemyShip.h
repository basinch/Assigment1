// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseShip.h"
#include "BaseEnemyShip.generated.h"

UCLASS()
class ABaseEnemyShip : public ABaseShip
{
	GENERATED_BODY()

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void NotifyActorBeginOverlap(AActor* OtherActor) override;

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void Move();

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	class ABaseAIController* ShipAIController;
};