// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Bubble.h"
#include "Actors/ObstacleBase.h"
#include "Engine/TargetPoint.h"
#include "GameFramework/Actor.h"
#include "BubbleSpawnManager.generated.h"


UCLASS()
class GGJ_API ABubbleSpawnManager : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABubbleSpawnManager();


	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=BubbleManager)
	TArray<TObjectPtr<ABubble>> Bubbles;
UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=BubbleManager)
	AActor* SpawnStartLocation;
	
UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=BubbleManager)
	FVector SpawnPlayerBound;
	
UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=BubbleManager)
UStaticMeshComponent* LevelFloor;
	
UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=BubbleManager)
	int32 MaxBubblesAlive = 500;

UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=BubbleManager)	
TArray<TSubclassOf<AObstacleBase>> AllObstacles;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
