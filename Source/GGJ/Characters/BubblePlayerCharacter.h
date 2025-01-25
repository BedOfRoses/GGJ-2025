// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "BubblePlayerCharacter.generated.h"

UCLASS()
class GGJ_API ABubblePlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ABubblePlayerCharacter();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
};
