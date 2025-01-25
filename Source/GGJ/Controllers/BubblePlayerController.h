// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "BubblePlayerController.generated.h"

/**
 * 
 */
class UInputMappingContext;
class UInputAction;
struct FInputActionValue;

UCLASS()
class GGJ_API ABubblePlayerController : public APlayerController
{
	GENERATED_BODY()
public:
	ABubblePlayerController();
protected:
	virtual void BeginPlay() override;
	virtual void SetupInputComponent() override;
private:
	void Move(const FInputActionValue& InputActionValue);
	
	UPROPERTY(EditAnywhere, Category=Input)
	TObjectPtr<UInputMappingContext> InputMappingContext;

	UPROPERTY(EditAnywhere, Category=Input)
	TObjectPtr<UInputAction> MoveAction;
};
