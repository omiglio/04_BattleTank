// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "TankBarrel.generated.h"

/**
 * 
 */
<<<<<<< HEAD
UCLASS(meta = (BlueprintSpawnableComponent)) //, hidecategories = ("Collision"))
=======
UCLASS(meta = (BlueprintSpawnableComponent), hidecategories = ("Collision"))
>>>>>>> 3b42506b1f2e297158021e6736550b36b3f56c7f
class BATTLETANK_API UTankBarrel : public UStaticMeshComponent
{
	GENERATED_BODY()

public:
	// -1 is max downward speed, and +1 is max up movement
	void Elevate(float RelativeSpeed);

private:
	UPROPERTY(EditAnywhere, Category = Setup)
<<<<<<< HEAD
	float MaxDegreesPerSecond = 10;

	UPROPERTY(EditAnywhere, Category = Setup)
	float MaxElevationDegrees = 40;

	UPROPERTY(EditAnywhere, Category = Setup)
	float MinElevationDegrees = 0;
=======
		float MaxDegreesPerSecond = 20;

	UPROPERTY(EditAnywhere, Category = Setup)
		float MaxElevationDegrees = 40;

	UPROPERTY(EditAnywhere, Category = Setup)
		float MinElevationDegrees = 0;
>>>>>>> 3b42506b1f2e297158021e6736550b36b3f56c7f
};