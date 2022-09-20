// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "Test_4_20_1GameMode.h"
#include "Test_4_20_1Character.h"
#include "UObject/ConstructorHelpers.h"

ATest_4_20_1GameMode::ATest_4_20_1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
