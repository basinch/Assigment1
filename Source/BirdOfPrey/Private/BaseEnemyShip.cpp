// Fill out your copyright notice in the Description page of Project Settings.

#include "BaseEnemyShip.h"

void ABaseEnemyShip::BeginPlay()
{
    Super::BeginPlay();
}

void ABaseEnemyShip::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}

void ABaseEnemyShip::NotifyActorBeginOverlap(AActor* OtherActor)
{
    Super::NotifyActorBeginOverlap(OtherActor);
}

void ABaseEnemyShip::Move()
{
}