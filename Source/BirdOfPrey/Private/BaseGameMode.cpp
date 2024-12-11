// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseGameMode.h"

float ABaseGameMode::GetWorldScrollVelocity()
{
    return 1.0f;
}

AActor* ABaseGameMode::GetWorldCameraActor()
{
    return nullptr;
}

void ABaseGameMode::OnPlayerDied()
{
}

void ABaseGameMode::OnEnemyDied()
{
}

void ABaseGameMode::StartGame()
{
}

void ABaseGameMode::EndGame()
{
}

void ABaseGameMode::SpawnEnemyFrom()
{
}

void ABaseGameMode::ResetGame()
{
}

void ABaseGameMode::RespawnPlayer()
{
}

void ABaseGameMode::TrySpawnPowerUp()
{
}

float ABaseGameMode::GetDistanceTravelled()
{
    return 1.0f;
}
