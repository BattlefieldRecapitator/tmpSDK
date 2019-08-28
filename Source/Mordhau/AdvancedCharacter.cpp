// Fill out your copyright notice in the Description page of Project Settings.

#include "AdvancedCharacter.h"
#include "UnrealNetwork.h"

void AAdvancedCharacter::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	// Replicate to everyone
	//DOREPLIFETIME(AAdvancedCharacter, Health);
	//DOREPLIFETIME(AAdvancedCharacter, ReplicatedHealth);
	//DOREPLIFETIME(AAdvancedCharacter, NextHealthTick);
	DOREPLIFETIME(AAdvancedCharacter, Team)
	DOREPLIFETIME(AAdvancedCharacter, Health)
	DOREPLIFETIME(AAdvancedCharacter, ReplicatedHealth)
	DOREPLIFETIME(AAdvancedCharacter, TurnRateCap)
	DOREPLIFETIME(AAdvancedCharacter, ReceivedDamageModifier)
	DOREPLIFETIME(AAdvancedCharacter, bIsDead)
	DOREPLIFETIME(AAdvancedCharacter, NextHealthTick)
	DOREPLIFETIME(AAdvancedCharacter, HealthRegenDelay)
	DOREPLIFETIME(AAdvancedCharacter, bIgnoreGameStateHealthRegenRestriction)
	DOREPLIFETIME(AAdvancedCharacter, KnockbackFlinch)
	DOREPLIFETIME(AAdvancedCharacter, RagdollFallingMinTime)
	DOREPLIFETIME(AAdvancedCharacter, RagdollFallingMinVelocityToGetUp)
	DOREPLIFETIME(AAdvancedCharacter, AirborneTime)
	DOREPLIFETIME(AAdvancedCharacter, bIsRagdollFalling)
	DOREPLIFETIME(AAdvancedCharacter, bIsUsingRagdollFallingCollision)
	DOREPLIFETIME(AAdvancedCharacter, OutOfBoundsKillTime)
	DOREPLIFETIME(AAdvancedCharacter, RagdollFallingGetUpDuration)
	DOREPLIFETIME(AAdvancedCharacter, TurnLimit)
	DOREPLIFETIME(AAdvancedCharacter, RagdollFallingStartTime)
	DOREPLIFETIME(AAdvancedCharacter, JumpCooldown)
	DOREPLIFETIME(AAdvancedCharacter, bTurnRateIgnoresCap)

}
	bool AAdvancedCharacter::GetIsDead()
	{
		return true;
	}
	bool AAdvancedCharacter::IsOutOfBounds()
	{
		return true;
	}
	bool AAdvancedCharacter::IsLocallyPlayerControlled()
	{
		return true;
	}
	void AAdvancedCharacter::SetIsRagdollFalling(bool bInIsRagdollFalling)
	{

	}
	void AAdvancedCharacter::StopHealthRegen(float ExtraTime)
	{

	}
	void AAdvancedCharacter::TurnAtRate(float Val)
	{

	}
	void AAdvancedCharacter::MoveRight(float Val)
	{

	}
	void AAdvancedCharacter::MoveForward(float Val)
	{}
	void AAdvancedCharacter::LookUpAtRate(float Val)
	{}
	void AAdvancedCharacter::LookUp(float Val, bool bIsAbsolute)
	{}
	void AAdvancedCharacter::LeftOutOfBoundsArea()
	{}
	bool AAdvancedCharacter::IsAirborne()
	{
		return true;

	}
	void AAdvancedCharacter::AddTurnDegrees(float Delta)
	{}
	bool AAdvancedCharacter::Knockback(const struct FVector& Amount)
	{
		return true;

	}
	void AAdvancedCharacter::EnteredOutOfBoundsArea()
	{}
	void AAdvancedCharacter::StartRagdoll()
	{}
	bool AAdvancedCharacter::IsLocallyControlledOrUncontrolled()
	{
		return 1;
	}
	bool AAdvancedCharacter::CanInteract_Implementation(class AAdvancedCharacter* Character)
	{
		return 1;
	}
	bool AAdvancedCharacter::CanBleedOutFromHit_Implementation(const FHitResult& HitResult, EMordhauDamageType Type, uint8 SubType, class AActor* Source, class AActor* Agent, class AController* EventInstigator)
	{
		return 1;
	}
	float AAdvancedCharacter::MordhauTakeDamage_Implementation(float DamageAmount, const FHitResult& Hit, EMordhauDamageType DamageType, uint8 DamageSubType, class AActor* Source, class AActor* Agent, class AController* EventInstigator)
	{
		return 1;
	}
	void AAdvancedCharacter::InteractionStart(class AAdvancedCharacter* Character)
	{

	}
	void AAdvancedCharacter::InteractionEnd()
	{
		
	}
	float AAdvancedCharacter::GetOutOfBoundsTimeUntilDeath()
	{
		return 1;
	}
	bool AAdvancedCharacter::GetIsBurning()
	{
		return 1;
	}
	void AAdvancedCharacter::AssignNetDamage(uint8 InType, uint8 InSubType, uint8 InBone, const struct FVector& InPoint, bool bInWillKill, bool bInSimulateFlinch, bool bInIDBit, class AActor* InDamageSource, class AActor* InDamageAgent)
	{}
	uint8 AAdvancedCharacter::GetArmorTierForBone(const FName& BoneName)
	{
		return 1;
	}
	void AAdvancedCharacter::Highlight()
	{}
	void AAdvancedCharacter::UnHighlight()
	{}
	void AAdvancedCharacter::OffsetHealth(int Amount, bool bReplicate)
	{}
	void AAdvancedCharacter::OnAfterDied_Implementation(float Angle, EMordhauDamageType Type, uint8 SubType, const FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent)
	{}
	void AAdvancedCharacter::OnCosmeticHit_Implementation(EMordhauDamageType DamageType, uint8 SubType, const FHitResult& Hit, class AActor* Agent)
	{}

	void AAdvancedCharacter::OnDied_Implementation(float Angle, EMordhauDamageType Type, uint8 SubType, const FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent)
	{}
	void AAdvancedCharacter::OnHealthChanged_Implementation()
	{}
	void AAdvancedCharacter::OnHighlightEnd_Implementation()
	{}
	void AAdvancedCharacter::OnHighlightStart_Implementation()
	{}
	void AAdvancedCharacter::OnHit_Implementation(class AActor* Actor, const FName& bone, const struct FVector& WorldLocation, uint8 Tier, uint8 SurfaceType)
	{}
	void AAdvancedCharacter::OnInteractionEnd_Implementation()
	{}
	void AAdvancedCharacter::OnInteractionStart_Implementation(class AAdvancedCharacter* Character)
	{}
	void AAdvancedCharacter::OnKilled_Implementation(class AController* EventInstigator)
	{}
	void AAdvancedCharacter::PlayHitEffectParticle(const struct FVector& Location, const struct FRotator& Rotation, const FName& bone, bool bFindOptimalSpot)
	{

	}
	void AAdvancedCharacter::OnTookDamage_Implementation(bool bWillKill, EMordhauDamageType Type, uint8 SubType, const FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent)
	{}
	class UAudioComponent* AAdvancedCharacter::PlayCharacterSound(class USoundBase* Sound, const FName& bone, const struct FVector& InLocation, uint8 AttachLocation, bool bAttach, class USoundAttenuation* Override, float VolumeMultiplier, float PitchMultiplier)
	{
		return nullptr;
	}
	void AAdvancedCharacter::RequestSuicide()
	{}
	class UParticleSystemComponent* AAdvancedCharacter::SpawnParticlesAttached(class UParticleSystem* Particle, const struct FVector& Location, const struct FRotator& Rotation, uint8 AttachType, const FName& Socket, bool bForce)
	{
		return nullptr;
	}
	void AAdvancedCharacter::StartBurning(float Duration, float Damage, float Tick, class AActor* DamageAgent, class AController* InstigatorController)
	{}
	void AAdvancedCharacter::StartBurningCosmetic_Implementation()
	{}
	void AAdvancedCharacter::StopBurningCosmetic_Implementation()
	{}
	void AAdvancedCharacter::Suicide()
	{}
	bool AAdvancedCharacter::Trip()
	{
		return 1;
	}