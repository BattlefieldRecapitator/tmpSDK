// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauActor.h"
#include "StaticMeshMordhauActor.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API AStaticMeshMordhauActor : public AMordhauActor
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UStaticMeshComponent* StaticMeshComponent;
	
	
};
