// Fill out your copyright notice in the Description page of Project Settings.


#include "ObstacleBase.h"

#include "Components/SphereComponent.h"


AObstacleBase::AObstacleBase()
{
	PrimaryActorTick.bCanEverTick = true;
	CollisionVolume = CreateDefaultSubobject<USphereComponent>(TEXT("CollisionVolume"));
	CollisionVolume->SetSphereRadius(100.0f);
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

