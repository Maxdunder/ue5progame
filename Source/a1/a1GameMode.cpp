// Copyright Epic Games, Inc. All Rights Reserved.

#include "a1GameMode.h"
#include "a1Character.h"
#include "UObject/ConstructorHelpers.h"

Aa1GameMode::Aa1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
