// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "GameStateWidget.generated.h"

class UButton;
/**
 * 
 */
UCLASS()
class GGJ_API UGameStateWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> StartButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> RestartButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> ShopButton;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UButton> QuitButton;


	// StartButton Function that will close collapse main widget switcher
	UFUNCTION()
	void OnStartButtonClicked();

	UFUNCTION()
	void OnRestartButtonClicked();

	UFUNCTION()
	void OnShopButtonButtonClicked();

	UFUNCTION()
	void OnQuitButtonClicked();
	
	
};
