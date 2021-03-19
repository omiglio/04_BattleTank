// Fill out your copyright notice in the Description page of Project Settings.

#include "TankBarrel.h"
<<<<<<< HEAD
#include "Math/UnrealMathUtility.h"
=======
>>>>>>> 3b42506b1f2e297158021e6736550b36b3f56c7f

void UTankBarrel::Elevate(float RelativeSpeed)
{
	// Move the barrel the right amount this frame
	// Given a max elevation speed, and the frame time
<<<<<<< HEAD
	RelativeSpeed = FMath::Clamp<float>(RelativeSpeed, -1, +1);
	auto ElevationChange = RelativeSpeed * MaxDegreesPerSecond * GetWorld()->DeltaTimeSeconds;
	auto RawNewElevation = RelativeRotation.Pitch + ElevationChange;
	auto Elevation = FMath::Clamp<float>(RawNewElevation, MinElevationDegrees, MaxElevationDegrees);
	SetRelativeRotation(FRotator(Elevation, 0, 0));
=======

>>>>>>> 3b42506b1f2e297158021e6736550b36b3f56c7f
}
