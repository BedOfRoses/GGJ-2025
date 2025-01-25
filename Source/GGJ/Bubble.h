// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Bubble.generated.h"

UCLASS()
class GGJ_API ABubble : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABubble();

	
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category=Bubble)
	UStaticMeshComponent* BubbleMesh;

UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=Bubble)
	FVector BubbleLocation;
	
	UPROPERTY(EditAnywhere,BlueprintReadWrite, Category=Bubble)
	FVector BubbleScale = FVector(5,5,5);	

UPROPERTY(EditAnywhere,BlueprintReadWrite, Category=Bubble)
	float ExplosivePower = 5000.0f;

	
protected:	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
	
};
