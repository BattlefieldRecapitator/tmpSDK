// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauEquipment.h"
#include "Mordhau.h"
#include "MordhauWeapon.generated.h"

/**
 * 
 */

UCLASS()
class MORDHAU_API AMordhauWeapon : public AMordhauEquipment
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UAudioComponent>              LastWoosh;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bAreCurrentTracersValid;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bArePreviousTracersValid;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bAreCurrentTracersInvalidated;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHasAdditionalTracers;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bSecondHasAdditionalTracers;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     CurrentTraceStart;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     CurrentTraceEnd;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     PreviousTraceStart;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     PreviousTraceEnd;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     CurrentAdditionalTraceStart;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     CurrentAdditionalTraceEnd;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     PreviousAdditionalTraceStart;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     PreviousAdditionalTraceEnd;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAttackMove                                        LastObservedMove;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<struct FVector>                             LastTraceStarts;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FActorSetAndArray                           CosmeticIgnoreActors;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<struct FHitResult>                          HitResultCache;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bCanBlock;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bCanBlockOnFoot;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bCanBlockOnHorseback;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bCanCouchOnHorseback;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                CouchWindUpAnim;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                CouchWindUpAnim1P;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                CouchLoopAnim;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                CouchReleaseAnim;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                CouchReleaseAnim1P;

UPROPERTY(EditAnywhere, BlueprintReadWrite)	
EDismembermentType                                 StrikeDismembermentType;
UPROPERTY(EditAnywhere, BlueprintReadWrite)	
EDismembermentType                                 SecondStrikeDismembermentType;
UPROPERTY(EditAnywhere, BlueprintReadWrite)	
EDismembermentType                                 StabDismembermentType;
UPROPERTY(EditAnywhere, BlueprintReadWrite)	
EDismembermentType                                 SecondStabDismembermentType;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              SlideRadius;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              AttackSupersprintDuration;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              SecondAttackSupersprintDuration;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FAttackInfo                                 StabAttack;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FAttackInfo                                 SecondStabAttack;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FAttackInfo                                 CouchAttack;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FAttackInfo                                 SecondCouchAttack;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FAttackInfo                                 StrikeAttack;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FAttackInfo                                 SecondStrikeAttack;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FAttackInfo                                 KickAttack;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FAttackInfo                                 SecondKickAttack;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FAttackInfo                                 BashAttack;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                AttackMask;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                ParryMask;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FTransform                                  ParryBoxTransform;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   ParryTurnCap;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   ParrySuccessTurnCap;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   ParryViewToleranceX;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   ParryViewToleranceY;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   SuccessfulParryViewToleranceX;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   SuccessfulParryViewToleranceY;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   AttackParryViewToleranceX;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   AttackParryViewToleranceY;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   ChamberViewToleranceX;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   ChamberViewToleranceY;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              ParryBackpedalSpeedFactor;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsParryHeld;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              BoostCosmeticTracersBy;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bUsesExtraEnvironmentTracers;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8									           IgnoreEnvironmentTipTracersNum;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              bHitKnockbackOnTeammates;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     ClashNormal;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     SecondClashNormal;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EMovementRestriction                               BlockMovementRestriction;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              BlockStaminaNegation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   BlockStaminaClamp;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              SecondBlockStaminaNegation;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   SecondBlockStaminaClamp;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPrimitiveComponent*                         ClashCollider;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPrimitiveComponent*                         BlockCollider;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UClass*                                      WeaponAnimationProfileClass;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UClass*                                      SecondWeaponAnimationProfileClass;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UClass*                                      HorseWeaponAnimationProfileClass;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UClass*                                      LadderWeaponAnimationProfileClass;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMeleeWeaponAnimationProfile*                HorseWeaponAnimationProfile;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMeleeWeaponAnimationProfile*                LadderWeaponAnimationProfile;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMeleeWeaponAnimationProfile*                WeaponAnimationProfile;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMeleeWeaponAnimationProfile*                SecondWeaponAnimationProfile;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundCue*                                   BlockedSound;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundCue*                                   HitCancelSound;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundCue*                                   WasBlockedSound;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   EnvironmentPitchScaleByDamageIn;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   EnvironmentPitchScaleByDamageOut;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   EnvironmentVolumeScaleByDamageIn;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   EnvironmentVolumeScaleByDamageOut;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              WooshVolumeMultiplierViewTarget;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundCue*                                   StrikeHitSound;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundCue*                                   StabHitSound;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundCue*                                   EnvironmentHitSound;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundCue*                                   SecondStrikeHitSound;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundCue*                                   SecondStabHitSound;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundCue*                                   SecondEnvironmentHitSound;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundCue*                                   StrikeWooshSound;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundCue*                                   StabWooshSound;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundCue*                                   SlideStartSound;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundCue*                                   SlideEndSound;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bDeriveHandGripFromTracers;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bSecondDeriveHandGripFromTracers;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHasWoodenHandle;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              TrailLifeTimeFactor;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              TrailExtraTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              BloodTrailMaxDuration;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              SwingTrailFadeOutDuration;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UParticleSystem*                             SwingTrailParticles;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UParticleSystem*                             BloodTrailParticles;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UParticleSystem*                             BlockParticles;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UParticleSystem*                             HitCancelParticles;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class UParticleSystem*>                     ImpactParticlesBySurface;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UParticleSystem*                             SlideParticles;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauWeapon>               SlidingWith;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundCue*                                   EndCurrentSlideWithSound;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              SlidingStartTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UAudioComponent>              CurrentSlideStartSound;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UAudioComponent>              LastHitSoundA;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UAudioComponent>              LastHitSoundB;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UParticleSystemComponent>     CurrentSlideParticles;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UParticleSystemComponent>     CurrentSwingTrailParticles;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class UParticleSystemComponent>     CurrentBloodTrailParticles;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              TrailTimeBeforeStop;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              SwingTrailOriginalLifeTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              SwingTrailEndTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              BloodTrailEndTime;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              Length;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              SecondLength;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              BloodLevel1;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              BloodLevel2;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bPlayedHitEffect;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     TrailUp;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     SecondTrailUp;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     TrailRight;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     SecondTrailRight;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              DefaultTrailFactor;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              SecondDefaultTrailFactor;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bRegularAttacksUseBlood2;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bSecondRegularAttacksUseBlood2;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              TrailFactor;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              SecondTrailFactor;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              TrailWeight;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FTransform                                  LastTrailTransform;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     LastObservedTraceDirection;



	UFUNCTION(BlueprintCallable, Category = "MordhauWeaponFns")
	void UpdateTrail(float Weight);
	UFUNCTION(BlueprintCallable, Category = "MordhauWeaponFns")
	bool RequestBlock(EBlockType BlockType, bool bAllowFTP);
	UFUNCTION(BlueprintNativeEvent, Category = "MordhauWeaponEvents")
	void OnWasBlocked(EBlockedReason Reason, EAttackMove Move, uint8 SurfaceType);
	UFUNCTION(BlueprintNativeEvent, Category = "MordhauWeaponEvents")
	void OnHit(class AActor* Actor, EAttackMove Move, const FName& bone, const struct FVector& WorldLocation, uint8 Tier, uint8 SurfaceType);
	UFUNCTION(BlueprintNativeEvent, Category = "MordhauWeaponEvents")
	void OnCosmeticHit(EAttackMove Move, const struct FHitResult& Hit);
	UFUNCTION(BlueprintNativeEvent, Category = "MordhauWeaponEvents")
	void OnBlockStarted(EBlockType Type);
	UFUNCTION(BlueprintNativeEvent, Category = "MordhauWeaponEvents")
	void OnBlocked(EBlockedReason Reason, EAttackMove Move);
	UFUNCTION(BlueprintNativeEvent, Category = "MordhauWeaponEvents")
	void OnAttackStopped();
	UFUNCTION(BlueprintNativeEvent, Category = "MordhauWeaponEvents")
	void OnAttackStarted(EAttackMove Move, float Angle);
	UFUNCTION(BlueprintCallable, Category = "MordhauWeaponFns")
	void IncreaseBloodLevel(float Amount);
	UFUNCTION(BlueprintCallable, Category = "MordhauWeaponFns")
	void GetBaseAttackInfo(FAttackInfo& atkInfo, EAttackMove Move);
	
};
