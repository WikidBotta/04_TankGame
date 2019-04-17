// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Tank.h"
#include "GameFramework/Controller.h"
#include "GameFramework/Actor.h"
#include "AIController.h"
#include "TankAiController.generated.h"


UCLASS()
class TANKGAME_API ATankAiController : public AAIController
{
	GENERATED_BODY()


public:
	

	virtual void BeginPlay() override;

	ATank* GetControlledTank() const;
};
