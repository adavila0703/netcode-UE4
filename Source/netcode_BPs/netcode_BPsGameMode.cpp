// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "netcode_BPsGameMode.h"
#include "netcode_BPsHUD.h"
#include "netcode_BPsCharacter.h"
#include "UObject/ConstructorHelpers.h"

Anetcode_BPsGameMode::Anetcode_BPsGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = Anetcode_BPsHUD::StaticClass();
}
