// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ShopWidget.generated.h"

// typedef std::pair<int, FString> UpgradeKey; TODO: Implement this


enum class Tier
{
	NONE = 0,
	ONE = 1,
	TWO = 2,
	THREE = 3,
	MAX = 4
};

enum class UpgradeType
{
	Armor = 0,
	Canon = 1,
	Engine = 2,
	Shield = 3,
	Weapon = 4,
	Health = 5,
	MaxSpeed = 6,
	MaxUpgrade = 7
};

inline const char* to_string(UpgradeType e)
{
	switch (e)
	{
	case UpgradeType::Armor: return "Armor";
	case UpgradeType::Canon: return "Canon";
	case UpgradeType::Engine: return "Engine";
	case UpgradeType::Shield: return "Shield";
	case UpgradeType::Weapon: return "Weapon";
	case UpgradeType::Health: return "Health";
	case UpgradeType::MaxSpeed: return "MaxSpeed";
	case UpgradeType::MaxUpgrade: return "MaxUpgrade";
	default: return "unknown";
	}
}

class UButton;
/**
 * 
 */
UCLASS()
class GGJ_API UShopWidget : public UUserWidget
{
	GENERATED_BODY()

protected:
	virtual void NativeConstruct() override;


	UPROPERTY(EditAnywhere)
	TArray<TObjectPtr<UButton>> ButtonArray;

	// TODO: Implement this
	// TMap<UpgradeKey, TObjectPtr<UButton>> ButtonMap = {
	// 	{{1, "Upgrade: Armor"}, ButtonArray[0]},
	// 	{{2, "Upgrade: Canon"}, ButtonArray[1]},
	// 	{{3, "Upgrade: "}, ButtonArray[2]},
	// 	{{4, "Upgrade:"}, ButtonArray[3]},
	// 	{{5, "Upgrade:"}, ButtonArray[4]},
	// 	{{6, "Upgrade:"}, ButtonArray[5]},
	// 	{{7, "Upgrade:"}, ButtonArray[6]},
	// 	{{8, "Upgrade:"}, ButtonArray[7]},
	// };
};
