// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/Texture2D.h"
#include "UpgradeDataTable.generated.h"

UENUM(BlueprintType)
enum class EUpgradeType : uint8
{
	// Categories for upgrades!
	Health,
	Movement,
};

USTRUCT(BlueprintType)
struct FUpgradeData
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	FName UpgradeName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TSoftObjectPtr<UTexture2D> UpgradeIcon;
};

USTRUCT(BlueprintType)
struct FUpgradeDataArray
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TArray<FUpgradeData> UpgradeData;
};

/**
 * 
 */
USTRUCT(BlueprintType)
struct FUpgradeDataTable : public FTableRowBase
{
	GENERATED_BODY()
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
	TMap<EUpgradeType, FUpgradeDataArray> Upgrades;
};
