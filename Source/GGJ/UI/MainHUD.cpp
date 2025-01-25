// Fill out your copyright notice in the Description page of Project Settings.


#include "MainHUD.h"

AMainHUD::AMainHUD()
{
}

void AMainHUD::DrawHUD()
{
	Super::DrawHUD();
}

void AMainHUD::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void AMainHUD::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("AMainHUD::BeginPlay()"));
}
