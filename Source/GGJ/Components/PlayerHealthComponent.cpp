// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerHealthComponent.h"



UPlayerHealthComponent::UPlayerHealthComponent()
{
	PrimaryComponentTick.bCanEverTick = false;
}

void UPlayerHealthComponent::ApplyDamage(float DamageValue)
{
	CurrentHealth -= DamageValue;
	
	HealthChangedDelegate.Broadcast(CurrentHealth);
	
	if (CurrentHealth <= 0)
	{
		OnDeathDelegate.Broadcast();
	}
}


void UPlayerHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	CurrentHealth = MaxHealth;
}

