// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MordhauGameInstance.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MORDHAU_API UMordhauGameInstance : public UGameInstance
{
	GENERATED_BODY()
public:
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString RecipesString;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	struct FServerSearchResult ServerSession;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString ServerPassword;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bServerFull;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int ChangeLevelCounter;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText NetworkErrorText;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FString AuthTicket;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<class UClass*> GameModes;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<class UClass*> Maps;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FText> Tips;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	struct FScriptMulticastDelegate OnPartyUpdated;
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//	EServerRegion CurrentMatchmakingRegion;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FString> CurrentMatchmakingGameModes;
	
	
};
