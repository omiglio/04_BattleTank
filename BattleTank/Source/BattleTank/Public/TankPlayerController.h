// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Tank.h"
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h" // Must be last include

UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()

public:
	ATank* GetControlledTank() const;

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	/*Start the Tabk Moving the Barrel so that the shot would hit where 
	the Crosshair intersects the World */
	void AimTowardsCrosshair();

	// return outparameter, true if hit landscape
	bool GetSightRayHitLocation(FVector& OutHitLocation) const; // Opted to go with: OutHitLocation vs HitLocation.
};
