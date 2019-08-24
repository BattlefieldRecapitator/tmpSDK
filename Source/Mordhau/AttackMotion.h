// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauMotion.h"
#include "MordhauWeapon.h"
#include "Mordhau.h"
#include "AttackMotion.generated.h"

/**
 * 
 */


UCLASS(Blueprintable)
class MORDHAU_API UAttackMotion : public UMordhauMotion
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite)
		EAttackStage Stage;

	UPROPERTY(EditAnyWhere, BlueprintReadOnly)
		EAttackMove Move;

	UPROPERTY(EditAnyWhere, BlueprintReadOnly)
		AMordhauWeapon* Weapon;
	
	
};
