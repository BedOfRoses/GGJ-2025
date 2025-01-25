// Fill out your copyright notice in the Description page of Project Settings.


#include "MainHUD.h"

#include "MainWidgetSwitcher.h"
#include "Blueprint/UserWidget.h"

#include "Editor/EditorEngine.h"
#include "Editor/UnrealEd/Public/EditorViewportClient.h"




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


	// Player Controller. Set to UI
	if (TObjectPtr<APlayerController> PlayerController = GetWorld()->GetFirstPlayerController())
	{
		//
		// FInputModeGameAndUI InputModeData;
		// InputModeData.
		
		PlayerController->bShowMouseCursor = true;
		PlayerController->bEnableClickEvents = true;
		PlayerController->bEnableMouseOverEvents = true;
		UE_LOG(LogTemp,Warning, TEXT("PlayerController : bShowMouseCursor = true"));
	}
	
	
	if (MainWidgetSwitcherClass)
	{
		MainWidgetSwitcher = CreateWidget<UMainWidgetSwitcher>(GetGameInstance(), MainWidgetSwitcherClass);
		if (MainWidgetSwitcher)
		{
			MainWidgetSwitcher->AddToViewport();
			MainWidgetSwitcher->SetVisibility(ESlateVisibility::Visible); // Fuck den her va sotte til collapsed...

			// MainWidgetSwitcher->CallRemoteFunction()

			
		}
	
	}

}
