// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/WidgetSwitcher.h"
#include "MainWidgetSwitcher.generated.h"

class UGameStateWidget;
class UShopWidget;
class UWidgetSwitcher;

/**
 * 
 */
UCLASS()
class GGJ_API UMainWidgetSwitcher : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

public:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UWidgetSwitcher> MainWidgetSwitcher;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UShopWidget> ShopWidget;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UGameStateWidget> GameStateWidget;
};
