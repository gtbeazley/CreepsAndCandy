// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "CreepsAndCandyGameMode.h"
#include "CreepsAndCandyPlayerController.h"
#include "CreepsAndCandyCharacter.h"
#include "UObject/ConstructorHelpers.h"

ACreepsAndCandyGameMode::ACreepsAndCandyGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = ACreepsAndCandyPlayerController::StaticClass();
	

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/Player_Pawn"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}

void ACreepsAndCandyGameMode::BeginPlay()
{
	Super::BeginPlay();
}

void ACreepsAndCandyGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}
