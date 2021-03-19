// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Tank.generated.h" // Needs to be last include, always on bottom.

// Forward Declarations
class UTankBarrel;
class UTankAimingComponent;
<<<<<<< HEAD
class AProjectile;
=======
>>>>>>> 3b42506b1f2e297158021e6736550b36b3f56c7f

UCLASS()
class BATTLETANK_API ATank : public APawn
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable, Category = Setup)
		void SetBarrelReference(UTankBarrel* BarrelToSet);

	UFUNCTION(BlueprintCallable, Category = Setup)
<<<<<<< HEAD
		void SetTurretReference(UTankTurret* TurretToSet);

	void AimAt(FVector HitLocation);

	UFUNCTION(BlueprintCallable, Category = Firing)
		void Fire();
=======
		void SetBarrelReference(UTankBarrel* BarrelToSet);
>>>>>>> 3b42506b1f2e297158021e6736550b36b3f56c7f

protected:
	UTankAimingComponent* TankAimingComponent = nullptr;

private:
	// Sets default values for this pawn's properties
	ATank();

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;

	UPROPERTY(EditAnywhere, Category = Firing)
<<<<<<< HEAD
	float LaunchSpeed = 4500;

	UPROPERTY(EditAnywhere, Category = Setup)
	TSubclassOf<AProjectile>ProjectileBlueprint;

	// Local Barrel reference for spawning projectiles.
	UTankBarrel* Barrel = nullptr; 

	float ReloadTimeInSeconds = 3;

	double LastFireTime = 0;
};
=======
		float LaunchSpeed = 100000; // TODO find sensible default
};
>>>>>>> 3b42506b1f2e297158021e6736550b36b3f56c7f
