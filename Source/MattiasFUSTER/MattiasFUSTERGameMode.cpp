// Copyright Epic Games, Inc. All Rights Reserved.

#include "MattiasFUSTERGameMode.h"
#include "MattiasFUSTERPlayerController.h"

AMattiasFUSTERGameMode::AMattiasFUSTERGameMode()
{
	PlayerControllerClass = AMattiasFUSTERPlayerController::StaticClass();
}
