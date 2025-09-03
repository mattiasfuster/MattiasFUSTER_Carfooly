// Copyright Epic Games, Inc. All Rights Reserved.

#include "MattiasFUSTERWheelRear.h"
#include "UObject/ConstructorHelpers.h"

UMattiasFUSTERWheelRear::UMattiasFUSTERWheelRear()
{
	AxleType = EAxleType::Rear;
	bAffectedByHandbrake = true;
	bAffectedByEngine = true;
}