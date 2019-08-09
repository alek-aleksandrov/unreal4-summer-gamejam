// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "all_for_oneGameMode.h"
#include "all_for_oneCharacter.h"
#include "UObject/ConstructorHelpers.h"

Aall_for_oneGameMode::Aall_for_oneGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
