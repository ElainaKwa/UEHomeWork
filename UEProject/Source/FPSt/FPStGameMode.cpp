// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPStGameMode.h"
#include "FPStCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFPStGameMode::AFPStGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
