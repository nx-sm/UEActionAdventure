// Copyright Epic Games, Inc. All Rights Reserved.

#include "UEActionAdventureGameMode.h"
#include "UEActionAdventureCharacter.h"
#include "UObject/ConstructorHelpers.h"

AUEActionAdventureGameMode::AUEActionAdventureGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
