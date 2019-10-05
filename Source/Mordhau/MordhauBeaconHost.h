// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
//#include "OnlineBeaconHostObject.h"
#include "MordhauBeaconHost.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API AMordhauBeaconHost : public AActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                OpenSlots;
	
	
};
