// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "TankAimingComponent.generated.h"

// Forward declaration
class UTankBarrel; 
<<<<<<< HEAD
class UTankTurret;
=======
>>>>>>> 3b42506b1f2e297158021e6736550b36b3f56c7f

// Holds Barrel's Properties and levate method
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BATTLETANK_API UTankAimingComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UTankAimingComponent();

	void SetBarrelReference(UTankBarrel* BarrelToSet);
<<<<<<< HEAD
	void SetTurretReference(UTankTurret* TurretToSet);
=======

	// TODO add SetTurretReference
>>>>>>> 3b42506b1f2e297158021e6736550b36b3f56c7f

	void AimAt(FVector HitLocation, float LaunchSpeed);

private:
	UTankBarrel* Barrel = nullptr;
<<<<<<< HEAD
	UTankTurret* Turret = nullptr;
=======
>>>>>>> 3b42506b1f2e297158021e6736550b36b3f56c7f

	void MoveBarrelTowards(FVector AimDirection);

};
