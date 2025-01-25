// Fill out your copyright notice in the Description page of Project Settings.


#include "GameStateWidget.h"

#include "Components/Button.h"
#include "GGJ/UI/MainWidgetSwitcher.h"
#include "Kismet/KismetSystemLibrary.h"

void UGameStateWidget::NativeConstruct()
{
	Super::NativeConstruct();
	StartButton->OnClicked.AddDynamic(this, &UGameStateWidget::OnStartButtonClicked);
	RestartButton->OnClicked.AddDynamic(this, &UGameStateWidget::OnRestartButtonClicked);
	ShopButton->OnClicked.AddDynamic(this, &UGameStateWidget::OnShopButtonButtonClicked);
	QuitButton->OnClicked.AddDynamic(this, &UGameStateWidget::OnQuitButtonClicked);
}

void UGameStateWidget::OnStartButtonClicked()
{
	// Get the main hud
	// Set the switcher to be
	UE_LOG(LogTemp, Warning, TEXT("OnStartButtonClicked : Collapsed"));


	if (TObjectPtr<APlayerController> PlayerController = GetWorld()->GetFirstPlayerController())
	{
		//
		// FInputModeGameAndUI InputModeData;
		// InputModeData.
		
		PlayerController->bShowMouseCursor = false;
		PlayerController->bEnableClickEvents = true;
		PlayerController->bEnableMouseOverEvents = true;
		UE_LOG(LogTemp,Warning, TEXT("PlayerController : bShowMouseCursor = false"));
	}
	
	GetParent()->SetVisibility(ESlateVisibility::Collapsed);

	// if (const TObjectPtr<UMainWidgetSwitcher> HUD = Cast<UMainWidgetSwitcher>(GetWorld()->GetFirstPlayerController()->GetHUD()))
	// {
	// 	HUD->MainWidgetSwitcher->SetVisibility(ESlateVisibility::Collapsed);
	// 	UE_LOG(LogTemp,Warning, TEXT("OnStartButtonClicked : Collapsed"));
	// }
	//
}

void UGameStateWidget::OnRestartButtonClicked()
{
	// Restart Game Logic
	UE_LOG(LogTemp, Warning, TEXT("OnRestartButtonClicked"));
}

void UGameStateWidget::OnShopButtonButtonClicked()
{
	UE_LOG(LogTemp,Warning, TEXT("OnShopButtonButtonClicked"));
}

void UGameStateWidget::OnQuitButtonClicked()
{
	// Quit Game Logic
	UE_LOG(LogTemp, Warning, TEXT("OnRestartButtonClicked"));
	UKismetSystemLibrary::QuitGame(GetWorld(), GetWorld()->GetFirstPlayerController(), EQuitPreference::Quit, false);
}
