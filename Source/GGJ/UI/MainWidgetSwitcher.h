// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetSwitcher.h"
#include "MainWidgetSwitcher.generated.h"

class UWidgetSwitcher;

/**
 * 
 */
UCLASS()
class GGJ_API UMainWidgetSwitcher : public UWidgetSwitcher
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	TObjectPtr<UWidgetSwitcher> MainWidgetSwitcher;
};
