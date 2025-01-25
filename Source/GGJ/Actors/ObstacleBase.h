// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ObstacleBase.generated.h"

class USphereComponent;
UCLASS()
class GGJ_API AObstacleBase : public AActor
{
	GENERATED_BODY()

public:
	AObstacleBase();
	virtual void Tick(float DeltaTime) override;


	UPROPERTY(EditAnywhere,BlueprintReadWrite)
	int32 SpawnChance= 0;

protected:
	virtual void BeginPlay() override;

};
