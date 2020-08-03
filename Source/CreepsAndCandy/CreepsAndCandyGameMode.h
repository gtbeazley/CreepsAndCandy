// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "CreepsAndCandyGameMode.generated.h"

UCLASS(minimalapi)
class ACreepsAndCandyGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite)
	int GoldCurrency = 50;
	UPROPERTY(BlueprintReadWrite)

	int Wave = 0;
	UPROPERTY(BlueprintReadWrite)

	int CandyCornTowerCost = 20;
	UPROPERTY(BlueprintReadWrite)

	int RoadBlockTowerCost = 10; 
	UPROPERTY(BlueprintReadWrite)
		int m_gameState;
	
	ACreepsAndCandyGameMode();
	virtual void BeginPlay();
	virtual void Tick(float DeltaTime);
};



