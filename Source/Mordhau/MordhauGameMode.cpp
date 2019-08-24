// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauGameMode.h"
#include "UnrealNetwork.h"
void AMordhauGameMode::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Replicate to everyone
	//DOREPLIFETIME(AAdvancedCharacter, Health);
	//DOREPLIFETIME(AAdvancedCharacter, ReplicatedHealth);
	//DOREPLIFETIME(AAdvancedCharacter, NextHealthTick);
	
	DOREPLIFETIME(AMordhauGameMode, CurrentlySpawningStage)
	DOREPLIFETIME(AMordhauGameMode, bMatchTimeRanOut)
	DOREPLIFETIME(AMordhauGameMode, PlayerRespawnTime)
	DOREPLIFETIME(AMordhauGameMode, bUsesSlowPlayerSpawning)
	DOREPLIFETIME(AMordhauGameMode, bPlayersSpawnInWaves)
	DOREPLIFETIME(AMordhauGameMode, bPlayersDropAllGearOnDeath)
	DOREPLIFETIME(AMordhauGameMode, bEquipmentDoesNotDespawn)
	DOREPLIFETIME(AMordhauGameMode, BallistaRespawnTime)
	DOREPLIFETIME(AMordhauGameMode, CatapultRespawnTime)
	DOREPLIFETIME(AMordhauGameMode, HorseRespawnTime)
	DOREPLIFETIME(AMordhauGameMode, bServerIsTravelling)
	DOREPLIFETIME(AMordhauGameMode, DamageFactor)
	DOREPLIFETIME(AMordhauGameMode, TeamDamageFactor)
	DOREPLIFETIME(AMordhauGameMode, SpawnProtectionDuration)
	DOREPLIFETIME(AMordhauGameMode, bDisableDamage)
	DOREPLIFETIME(AMordhauGameMode, bDisableStamina)
	DOREPLIFETIME(AMordhauGameMode, bIsScoringDisabled)
	DOREPLIFETIME(AMordhauGameMode, AssistScoreFactor)
	DOREPLIFETIME(AMordhauGameMode, AssistDamageToCountAsKill)
	DOREPLIFETIME(AMordhauGameMode, KillScoreChange)
	DOREPLIFETIME(AMordhauGameMode, KillTeamScoreChange)
	DOREPLIFETIME(AMordhauGameMode, TeamKillScoreChange)
	DOREPLIFETIME(AMordhauGameMode, TeamKillTeamScoreChange)
	DOREPLIFETIME(AMordhauGameMode, bTeamKillsDecrementKillerKills)
	DOREPLIFETIME(AMordhauGameMode, bTeamKillsIncrementKilledDeaths)
	DOREPLIFETIME(AMordhauGameMode, bSuicideDecrementsKills)

}





void AMordhauGameMode::GetNextMaps(TArray<FString>& string1, int Count)
{

}
FString AMordhauGameMode::GetNextMap()
{
	return "1";
}
void AMordhauGameMode::GetMapVoteMaps(TArray<FString>& string2)
{}
void AMordhauGameMode::GetMapVoteCounts(TArray<uint8>& byte1)
{}


void AMordhauGameMode::SetTeamScore(int Team, float Amount)
{
}
void AMordhauGameMode::RequestedAssignTeam(class AController* Controller, int Team)
{
}

void AMordhauGameMode::RemoveBots(int Amount, int Team)
{
}
void AMordhauGameMode::OnTeamScoreChanged_Implementation(int Team, float OldValue)
{
}
void AMordhauGameMode::OnScoreChanged_Implementation(class APlayerState* Mode, float OldValue)
{
}
void AMordhauGameMode::OnKilled_Implementation(class AController* Killer, class AController* KilledPlayer, class APawn* KilledPawn, EMordhauDamageType Type, uint8 SubType, class AActor* DamageSource, class AActor* DamageAgent)
{}
void AMordhauGameMode::OnKillsChanged_Implementation(class APlayerState* Mode, int OldValue)
{

}
void AMordhauGameMode::OnDeathsChanged_Implementation(class APlayerState* Mode, int OldValue)
{

}
void AMordhauGameMode::OnAssistsChanged_Implementation(class APlayerState* Mode, int OldValue)
{

}
void AMordhauGameMode::MatchTimeRanOut()
{

}
bool AMordhauGameMode::IsSpawnpointAllowed(class APlayerStart* PlayerStart, class AController* Player)
{
	return 1;
}
float AMordhauGameMode::GetSpawnpointPreference(class APlayerStart* PlayerStart, class AController* Player)
{
	return 2;
}

float AMordhauGameMode::GetDamageFactor(class AActor* DamageSource, class AActor* DamageTarget)
{
	return 2;
}
bool AMordhauGameMode::ControllerCanRestart(class AController* Controller)
{
	return 1;
}
bool AMordhauGameMode::CanDealDamage(class AActor* DamageSource, class AActor* DamageTarget)
{
	return 1;
}
bool AMordhauGameMode::CanClash(class APawn* Source, class APawn* Target)
{
	return 1;
}
bool AMordhauGameMode::CanChamber(class APawn* Source, class APawn* Target)
{
	return 1;
}
//void AMordhauGameMode::Broadcast(class AActor* Sender, const FString& Msg, const FName& Type)
//{

//}
void AMordhauGameMode::AddTeamScore(int Team, float Amount)
{

}
void AMordhauGameMode::AddBots(int Amount, int Team)
{}






