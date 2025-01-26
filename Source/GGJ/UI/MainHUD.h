// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MainHUD.generated.h"

class UMainWidgetSwitcher;
/**
 * 
 */
UCLASS()
class GGJ_API AMainHUD : public AHUD
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget> MainWidgetSwitcherClass;


	UPROPERTY(EditAnywhere)
	TObjectPtr<UMainWidgetSwitcher> MainWidgetSwitcher;

	AMainHUD();

	virtual void DrawHUD() override;

	virtual void Tick(float DeltaSeconds) override;

	virtual void BeginPlay() override;
};
