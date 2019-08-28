// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "MordhauCharacter.h"
#include "MordhauPlayerState.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API AMordhauPlayerState : public APlayerState
{
	GENERATED_BODY()
public:

	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<float>                                      MedianPings;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	TArray<float>                                      MedianPingsSorted;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int                                                CurMedianPingIndex;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              PingMedian;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int                                                LocalStableShortID;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		int Kills;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		int Team;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		int Rank;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		uint8 Badge;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		int Assists;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool bIsPartyMember;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		TWeakObjectPtr<class AMordhauCharacter>            LastMordhauCharacter;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool bIsAdmin;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool bIsMuted;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool bIsAlive;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	uint8                                            DeathsAndFlags;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool bIsFriend;	
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		int KilledbyLocalPlayerCounter;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		int KilledLocalPlayerCounter;

	UFUNCTION(BlueprintCallable, Category = "PlayerStateFns")
	void BanPlayer(int Duration, FString BanReason);
	UFUNCTION(BlueprintCallable, Category = "PlayerStateFns")
	void SetPlayerName(const FString& S);
	UFUNCTION(BlueprintCallable, Category = "PlayerStateFns")
	void OnRep_Team();									
	UFUNCTION(BlueprintCallable, Category = "PlayerStateFns")
	void OnRep_Kills();								
	UFUNCTION(BlueprintCallable, Category = "PlayerStateFns")
	void OnRep_DeathsAndFlags();						
	UFUNCTION(BlueprintCallable, Category = "PlayerStateFns")
	void OnRep_Assists();								
	UFUNCTION(BlueprintCallable, Category = "PlayerStateFns")
	void AddScore(int Amount);
	UFUNCTION(BlueprintCallable, Category = "PlayerStateFns")
	void AddKills(int Amount);
	UFUNCTION(BlueprintCallable, Category = "PlayerStateFns")
	void AddDeaths(int Amount);
	UFUNCTION(BlueprintCallable, Category = "PlayerStateFns")
	void AddAssists(int Amount);


};
