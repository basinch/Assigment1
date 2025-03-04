// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseProjectile.h"

// Sets default values
ABaseProjectile::ABaseProjectile()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ABaseProjectile::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}
void ABaseProjectile::InitialiseProjectile()
{
}

void ABaseProjectile::DealDamageTo(AActor* Target)
{
}

void ABaseProjectile::OnHit()
{
}

int ABaseProjectile::GetInstigatorCollisionChannel()
{
	return 0;
}

bool ABaseProjectile::CheckForGroundUnitTarget()
{
	return false;
}

bool ABaseProjectile::ShouldCheckForGroundTarget()
{
	return false;
}

void ABaseProjectile::AdjustToTarget()
{
}

bool ABaseProjectile::IsEnemyProjectile()
{
	return false;
}

void ABaseProjectile::AdjustToDesiredZ()
{
}

void ABaseProjectile::CleanUpAndDestroy()
{
}
