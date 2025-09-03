// Copyright Epic Games, Inc. All Rights Reserved.

#include "MattiasFUSTERWheelFront.h"
#include "UObject/ConstructorHelpers.h"

UMattiasFUSTERWheelFront::UMattiasFUSTERWheelFront()
{
	AxleType = EAxleType::Front;
	bAffectedBySteering = true;
	MaxSteerAngle = 40.f;
}