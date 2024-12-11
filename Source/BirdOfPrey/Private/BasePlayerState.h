// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "BasePlayerState.generated.h"

UCLASS()
class ABasePlayerState : public APlayerState
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void AddScore();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	void ConsumeLife();

	UFUNCTION(BlueprintCallable, Category = "BirdOfPrey")
	bool HasRemainingLives();

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float PlayerScore;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	int32 RemainingLives;

	UPROPERTY(BlueprintReadWrite, Category = "BirdOfPrey")
	float TimeOfLastDeath;
};
