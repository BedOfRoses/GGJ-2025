// Fill out your copyright notice in the Description page of Project Settings.


#include "ObstacleBase.h"



AObstacleBase::AObstacleBase()
{
	PrimaryActorTick.bCanEverTick = true;
	AActor::SetLifeSpan(15.0f);
}

void AObstacleBase::BeginPlay()
{
	Super::BeginPlay();
	
}

void AObstacleBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

