// Fill out your copyright notice in the Description page of Project Settings.

#include "PlayerShip.h"
#include "BaseGameInstance.h"

APlayerShip::APlayerShip()
{
}

void APlayerShip::BeginPlay()
{
}

void APlayerShip::Tick(float DeltaTime)
{
}

void APlayerShip::InputAxisMoveRight(float Value)
{
}

void APlayerShip::InputAxisMoveUp(float Value)
{
}

void APlayerShip::InputActionFireWeapon()
{
}

void APlayerShip::EventDied()
{
}

void APlayerShip::EventPossessed()
{
}

float APlayerShip::GetShipConstantVelocity()
{
    return 1.0f;
}

void APlayerShip::ClampToCameraBounds()
{
}

FVector APlayerShip::GetShipAxisAdjustment()
{
    return FVector();;
}

FVector APlayerShip::CalcOutOfBoundsAdjustment()
{
    return FVector();
}

FSAgentInfo APlayerShip::GetPlayerAgentInfo()
{
    return FSAgentInfo();
}

bool APlayerShip::ShouldSpawnAIController()
{
    return false;
}

void APlayerShip::UpdateHoverPitch()
{
}

bool APlayerShip::HasDiedRecently()
{
    return false;
}

float APlayerShip::TakeDamage(float DamageAmount, const FDamageEvent& DamageEvent, AController* EventInstigator, AActor* DamageCauser)
{
    return 1.0f;
}