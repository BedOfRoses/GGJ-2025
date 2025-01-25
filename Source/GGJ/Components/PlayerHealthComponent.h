// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "PlayerHealthComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealthChangedSignature, float, NewHealth);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeathSignature);

UCLASS(ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class GGJ_API UPlayerHealthComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UPlayerHealthComponent();
	UFUNCTION(BlueprintCallable)
	void ApplyDamage(float DamageValue);

	UPROPERTY(BlueprintAssignable)
	FHealthChangedSignature HealthChangedDelegate;

	UPROPERTY(BlueprintAssignable)
	FOnDeathSignature OnDeathDelegate;
	
protected:
	virtual void BeginPlay() override;
	
	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float MaxHealth = 3;

	UPROPERTY(EditAnywhere, BlueprintReadOnly)
	float CurrentHealth;
};
