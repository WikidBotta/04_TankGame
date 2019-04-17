// Fill out your copyright notice in the Description page of Project Settings.


#include "TankAiController.h"
#include "GameFramework/Controller.h"
#include "GameFramework/Actor.h"

void ATankAiController::BeginPlay()
{
	Super::BeginPlay();

	auto ControlledTank = GetControlledTank();
	if (!ControlledTank)
	{
		UE_LOG(LogTemp, Error, TEXT("AIController no possesing a tank"));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("AIController is controlling %s"), *ControlledTank->GetName());
	}
	UE_LOG(LogTemp, Warning, TEXT("AIController being called"));
}

ATank* ATankAiController::GetControlledTank() const
{
	return Cast<ATank>(GetPawn());
}


