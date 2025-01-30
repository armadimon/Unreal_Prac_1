// Copyright Epic Games, Inc. All Rights Reserved.

#include "IntroProjectGameMode.h"
#include "IntroProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AIntroProjectGameMode::AIntroProjectGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
