// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
//#include "Mordhau_classes.hpp"
#include "Mordhau.h"
#include "AdvancedCharacter.generated.h"

UCLASS()
class MORDHAU_API AAdvancedCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		uint8 Team;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		uint8 Health;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		uint8 ReplicatedHealth;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float TurnRateCap;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float ReceivedDamageModifier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool bIsDead;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float NextHealthTick;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float HealthRegenDelay;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool bIgnoreGameStateHealthRegenRestriction;  
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float KnockbackFlinch;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float RagdollFallingMinTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float RagdollFallingMinVelocityToGetUp;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float AirborneTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool bIsRagdollFalling;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool bIsUsingRagdollFallingCollision;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float OutOfBoundsKillTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float RagdollFallingGetUpDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              TurnLimit;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              RagdollFallingStartTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              JumpCooldown;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float bTurnRateIgnoresCap;





	//UFUNCTION()
	//bool IsLocallyPlayerControlled();
	//UFUNCTION()
	//voidReplicatedHealth();
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		bool GetIsDead();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		void Suicide();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		bool Trip();
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		bool IsOutOfBounds();
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		bool IsLocallyPlayerControlled();
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		void SetIsRagdollFalling(bool bInIsRagdollFalling);
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		void StopHealthRegen(float ExtraTime);
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		void TurnAtRate(float Val);
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		void MoveRight(float Val);
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		void MoveForward(float Val);
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		void LookUpAtRate(float Val);
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		void LeftOutOfBoundsArea();
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		bool IsAirborne();
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		void AddTurnDegrees(float Delta);
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		bool Knockback(const struct FVector& Amount);
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		void EnteredOutOfBoundsArea();
	UFUNCTION(BlueprintCallable, Category="AdvancedCharFns")
		void StartRagdoll();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		void LookUp(float Val, bool bIsAbsolute);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		bool IsLocallyControlledOrUncontrolled();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		void InteractionStart(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		void InteractionEnd();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		float GetOutOfBoundsTimeUntilDeath();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		bool GetIsBurning();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		void RequestSuicide();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		void AssignNetDamage(uint8 InType, uint8 InSubType, uint8 InBone, const struct FVector& InPoint, bool bInWillKill, bool bInSimulateFlinch, bool bInIDBit, class AActor* InDamageSource, class AActor* InDamageAgent);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		uint8 GetArmorTierForBone(const FName& BoneName);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		void Highlight();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		void UnHighlight();
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		void OffsetHealth(int Amount, bool bReplicate);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		class UAudioComponent* PlayCharacterSound(class USoundBase* Sound, const FName& bone, const struct FVector& InLocation, uint8 AttachLocation, bool bAttach, class USoundAttenuation* Override, float VolumeMultiplier, float PitchMultiplier);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		class UParticleSystemComponent* SpawnParticlesAttached(class UParticleSystem* Particle, const struct FVector& Location, const struct FRotator& Rotation, uint8 AttachType, const FName& Socket, bool bForce);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		void StartBurning(float Duration, float Damage, float Tick, class AActor* DamageAgent, class AController* InstigatorController);
	UFUNCTION(BlueprintCallable, Category = "AdvancedCharFns")
		void PlayHitEffectParticle(const struct FVector& Location, const struct FRotator& Rotation, const FName& bone, bool bFindOptimalSpot);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		bool CanInteract(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		bool CanBleedOutFromHit(const FHitResult& HitResult, EMordhauDamageType Type, uint8 SubType, class AActor* Source, class AActor* Agent, class AController* EventInstigator);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		float MordhauTakeDamage(float DamageAmount, const FHitResult& Hit, EMordhauDamageType DamageType, uint8 DamageSubType, class AActor* Source, class AActor* Agent, class AController* EventInstigator);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void OnAfterDied(float Angle, EMordhauDamageType Type, uint8 SubType, const FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void OnCosmeticHit(EMordhauDamageType DamageType, uint8 SubType, const FHitResult& Hit, class AActor* Agent);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void OnDied(float Angle, EMordhauDamageType Type, uint8 SubType, const FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void OnHealthChanged();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void OnHighlightEnd();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void OnHighlightStart();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvancedCharEvents")		
		void OnHit(class AActor* Actor, const FName& bone, const struct FVector& WorldLocation, uint8 Tier, uint8 SurfaceType);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void OnInteractionEnd();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void OnInteractionStart(class AAdvancedCharacter* Character);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void OnKilled(class AController* EventInstigator);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void OnTookDamage(bool bWillKill, EMordhauDamageType Type, uint8 SubType, const FName& bone, const struct FVector& Point, class AActor* Source, class AActor* Agent);
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void StartBurningCosmetic();
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "AdvancedCharEvents")
		void StopBurningCosmetic();
};
