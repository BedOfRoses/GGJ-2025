// Fill out your copyright notice in the Description page of Project Settings.


#include "BubblePlayerCharacter.h"


ABubblePlayerCharacter::ABubblePlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;
}

void ABubblePlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

void ABubblePlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ABubblePlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

