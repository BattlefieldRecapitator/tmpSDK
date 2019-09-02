// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/ProjectileMovementComponent.h"
#include "AdvProjectileMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API UAdvProjectileMovementComponent : public UProjectileMovementComponent
{
	GENERATED_BODY()
	
	
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float                                              DragDeceleration;
};
