// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OnlineBeaconClient.h"
#include "Mordhau.h"
#include "MordhauBeaconClient.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API AMordhauBeaconClient : public AOnlineBeaconClient
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<struct FSteamID>                            SteamIDs;
	
	//UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauBeaconEvents")
	//void ServerReserveSlots(TArray<struct FSteamID> InSteamIDs);
	//UFUNCTION(BlueprintCallable, Category = "MordhauBeaconFns")
	//bool ReserveSlots(TArray<struct FSteamID> InSteamIDs, struct FURL ConnectURL);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauBeaconEvents")
	void ClientNotifyReservationStatus(int OpenSlots, EReservationStatus ReservationStatus);
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "MordhauBeaconEvents")
	void ClientNotifyOpenSlots(int OpenSlots);
};
