// Fill out your copyright notice in the Description page of Project Settings.


#include "MainHUD.h"

#include "MainWidgetSwitcher.h"
#include "Blueprint/UserWidget.h"

#include "Editor/EditorEngine.h"
#include "Editor/UnrealEd/Public/EditorViewportClient.h"


void AMainHUD::PrintViewportCount()
{
	if (GEditor)
	{
		int32 ViewportCount = GEditor->GetAllViewportClients().Num();
		UE_LOG(LogTemp, Log, TEXT("Number of Viewports: %d"), ViewportCount);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("GEditor is nullptr"));
	}
	
}

AMainHUD::AMainHUD()
{
}

void AMainHUD::DrawHUD()
{
	Super::DrawHUD();
}

void AMainHUD::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
}

void AMainHUD::BeginPlay()
{
	Super::BeginPlay();

	if (MainWidgetSwitcherClass)
	{
		MainWidgetSwitcher = CreateWidget<UUserWidget>(GetGameInstance(), MainWidgetSwitcherClass);
		if (MainWidgetSwitcher)
		{
			MainWidgetSwitcher->AddToViewport();
			MainWidgetSwitcher->SetVisibility(ESlateVisibility::Visible); // Fuck den her va sotte til collapsed...
			UE_LOG(LogTemp, Warning, TEXT("HUD added to viewport"));
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("MainWidgetSwitcher is nullptr"));
		}
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("MainWidgetSwitcherClass is nullptr"));
	}
}
