// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MordhauActor.h"
#include "Mordhau.h"
#include "MordhauEquipment.generated.h"

/**
 * 
 */
UCLASS()
class MORDHAU_API AMordhauEquipment : public AMordhauActor
{
	GENERATED_BODY()
	
public:

UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bForceRefPoseOnMesh;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              CreatedRealTime;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FTransform                                  DefaultMeshRelativeTransform;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                HideInGameOverride;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FTransform                                  EquippedOffset;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bUseEquippedOffset;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bCanThrowPommel;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bSecondUseEquippedOffset;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsHeldInHand;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsParentInFirstPerson;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FName                                       AttachedToSocket;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bWantsToRebuildParts;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8                                      LastOwnerTeam;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bForceTeamColor1;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bForceTeamColor2;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHasColor1;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHasColor2;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHasColor3;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	 TArray<TSubclassOf<class UMordhauEquipmentPart>>               PartInstances;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauCharacter>            ParentCharacter;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TWeakObjectPtr<class AMordhauCharacter>            YoinkTrackingParentCharacter;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bWasLastParentCharacterLocalPlayer;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHeldInteractIsSwap;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
EEquipmentType                                     EquipmentUIType;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
EEquipmentCategory                                 EquipmentUICategory;

UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FText                                       EquipmentName;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsRightHanded;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bSecondIsRightHanded;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsTwoHanded;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bSecondIsTwoHanded;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              EquipTimeModifier;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bRangedActionAllowsRegen;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RangedDrawFOVOffset;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UCurveVector*                                RangedDrawSway;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsRangedSwayCameraBased;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     RangedAirborneSway;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RangedAirborneSwayBlendInSpeed;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RangedAirborneSwayBlendOutSpeed;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   RangedDrawSwayLoopSegment;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RangedDrawTremblingStartAfter;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RangedDrawTremblingMaxAfter;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RangedDrawTremblingMagnitude;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RangedDrawTremblingFrequency;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USkeletalMeshComponent*                      SkeletalMeshComponent;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USkeletalMeshComponent*                      AuxiliarySkeletalMeshComponent;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EAuxiliaryMeshMode                                 AuxiliaryMeshMode;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FTransform                                  AuxiliaryMeshOffset;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FTransform                                  DefaultAuxiliaryMeshRelativeTransform;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USkeletalMesh*                               CombinedSkeletalMesh;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsFollowingProjectile;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TEnumAsByte<EPhysicalSurface>                      EquipmentPhysicalSurface;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class AMordhauProjectile*                          CurrentProjectile;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UClass*                                      ProjectileClass;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class UClass*>                              RestockAmmoForEquipment;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bCanRestockFromEquipmentDefaults;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                MaxAmmoBoxRestockAmount;

UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class APhysicsProxy*                               PhysicsProxy;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UPhysicsAsset*                               PhysicsAsset;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bDoNotDisarmOnMeleeWeaponHit;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bCannotChaseOthers;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bCanBeChasedFromFront;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bCanRagdoll;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bUsesPhysicsProxy;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bOnlyPeasants;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsAllowedForPeasants;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FTransform                                  ArmoryTransformOffset;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int                                                CharacterPointCost;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              CullDistanceHeld;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              CullDistanceNotHeld;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              CullDistanceAuxiliaryHeld;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              CullDistanceAuxiliaryNotHeld;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bForceInstantMeshUpdate;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bForceMipStreaming;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bForceMaxLOD;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bPartsUseAuxiliaryMesh;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class UMeshComponent*>       MeshComponents;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UClass*                                      Quiver;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8                                      MaxAmmo;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8                                      MaxAmmoWithoutQuiver;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8                                      LastAmmo;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bDestroyIfNoAmmo;

UPROPERTY(EditAnywhere, BlueprintReadWrite)
EMovementRestriction                               MovementRestriction;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bPreventsClimbing;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              BackpedalSpeedFactorEquipped;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              SpeedBonusPercentageEquipped;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              AccelerationBonusPercentageEquipped;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              SpeedBonusPercentageHolstered;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              AccelerationBonusPercentageHolstered;

UPROPERTY(EditAnywhere, BlueprintReadWrite)
FEquipmentCustomization                     AssignedCustomization;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8                                       Colors;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8                                       PartsId;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8                                       Skin;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8                                       Emblem;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8                                       EmblemColors;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8                                       Pattern;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHasColors;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHasPartsId;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHasSkin;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHasEmblem;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHasEmblemColors;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHasPattern;

UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<struct FEquipmentSkinEntry>                 Skins;


 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bAutoAssignCustomizationOnBeginPlay;
UPROPERTY(EditAnywhere, BlueprintReadWrite)
FEquipmentCustomization                     AutoAssignCustomization;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8                                      AutoAssignCustomizationEmblem;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8                                      AutoAssignCustomizationEmblemColor1;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	uint8                                      AutoAssignCustomizationEmblemColor2;

UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<struct FEmoteEntry>                         EquipmentEmotes;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase*                             UpperBlendSpace1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               UpperAdditive1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase*                             UpperBlendSpaceUnloaded1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               UpperAdditiveUnloaded1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase*                             UpperBlendSpace;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               UpperAdditive;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase*                             UpperBlendSpaceUnloaded;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               UpperAdditiveUnloaded;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               LowerAnimation;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase*                             ShieldUpperBlendSpace1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               ShieldUpperAdditive1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase*                             ShieldUpperBlendSpace;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               ShieldUpperAdditive;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               ShieldLowerAnimation;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase*                             ShieldHorseUpperBlendSpace1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               ShieldHorseUpperAdditive1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase*                             ShieldHorseUpperBlendSpace;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               ShieldHorseUpperAdditive;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase*                             HorseUpperBlendSpace1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               HorseUpperAdditive1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase*                             HorseUpperBlendSpaceUnloaded1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               HorseUpperAdditiveUnloaded1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase*                             HorseUpperBlendSpace;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               HorseUpperAdditive;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase*                             HorseUpperBlendSpaceUnloaded;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               HorseUpperAdditiveUnloaded;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               HorseUpperRearing;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               HorseUpperRearing1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               HorseUpperJump;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               HorseUpperJump1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                ModeSwitchAnimation;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                DropAnimation;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                InteractWithAnimation;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                InteractWith1PAnimation;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               JumpUnloadedAnimation;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               JumpAnimation;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               JumpAnimationShield;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               JumpUnloadedAnimation1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               JumpAnimation1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               JumpAnimationShield1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               FallingUnloadedAnimation;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               FallingAnimation;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               FallingAnimationShield;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               FallingUnloadedAnimation1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               FallingAnimation1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               FallingAnimationShield1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               LandUnloadedAnimation;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               LandAnimation;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               LandAnimationShield;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               LandUnloadedAnimation1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               LandAnimation1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               LandAnimationShield1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                SecondDropAnimation;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                SecondInteractWithAnimation;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                SecondInteractWith1PAnimation;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               SecondJumpUnloadedAnimation;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               SecondJumpAnimation;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               SecondJumpUnloadedAnimation1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               SecondJumpAnimation1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               SecondFallingUnloadedAnimation;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               SecondFallingAnimation;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               SecondFallingUnloadedAnimation1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               SecondFallingAnimation1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               SecondLandUnloadedAnimation;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               SecondLandAnimation;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               SecondLandUnloadedAnimation1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               SecondLandAnimation1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class UAnimMontage*>                        CharacterPreviewPoses;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                RangedDrawAnimation;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                RangedDrawAnimation1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase*                             RangedDrawnAdditive;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                RangedDrawEquipmentAnimation;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                RangedDrawEquipmentAnimation1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                RangedReleaseAnimation;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                RangedReleaseAnimation1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                RangedReleaseEquipmentAnimation;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                RangedReleaseEquipmentAnimation1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                ReloadAnimation;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundCue*                                   ReloadSound;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                ReloadAnimation1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundCue*                                   ReloadSound1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                ReloadEquipmentAnimation;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                ReloadEquipmentAnimation1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                QuickthrowAnimation1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                QuickthrowAnimation;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bDisableSpineArmsCompensation1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bDisableHandSpringAnimation;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     RightHandIKPositionOffset;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     RightShoulderOffset1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     LeftShoulderOffset1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bUsesOffhandIK;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bInvertOffhandUp;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bSecondInvertOffhandUp;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase*                             SecondUpperBlendSpace1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               SecondUpperAdditive1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase*                             SecondUpperBlendSpaceUnloaded1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               SecondUpperAdditiveUnloaded1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase*                             SecondUpperBlendSpace;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               SecondUpperAdditive;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UBlendSpaceBase*                             SecondUpperBlendSpaceUnloaded;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               SecondUpperAdditiveUnloaded;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimSequence*                               SecondLowerAnimation;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UAnimMontage*                                SecondModeSwitchAnimation;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bSecondUsesOffhandIK;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              OffhandIKUpOffset;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              OffhandIKUpOffset1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              SecondOffhandIKUpOffset;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              SecondOffhandIKUpOffset1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     RightHandEquipOffset;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FTransform                                  RightWeaponBoneCosmeticTransform;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FTransform                                  RightWeaponBoneCosmeticTransform1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FTransform                                  SecondRightWeaponBoneCosmeticTransform;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FTransform                                  SecondRightWeaponBoneCosmeticTransform1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    RotationOffset;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FRotator                                    SecondRotationOffset;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     GripLocationLocal;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector                                     SecondGripLocationLocal;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<struct FEquipmentHolsterInfo>               HolsterInfo;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bCanHolster;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bCanEquipOnHorse;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bCanEquipOnLadder;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bSecondCanEquipOnHorse;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bSecondCanEquipOnLadder;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundCue*                                   AmmoRefillSound;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundCue*                                   EquipSound;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundCue*                                   HolsterSound;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundCue*                                   DrawSound;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              DrawSoundPlayAtNormalizedTime;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              DrawSoundPlayAtNormalizedTime1P;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundCue*                                   RangedCancelSound;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class USoundCue*                                   FireSound;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bAlwaysDestroyOnDeath;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bDeferDestroyUntilRagdoll;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RagdollStayTime;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bAllowDrop;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bCanAttack;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bCanAttackOnFoot;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bCanAttackOnHorseback;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bAllowFire;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bFireThrowsEquipment;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              ExtraSwitchTime;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bRangedReleasePlaysAttackYell;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bUsesRangedCamera;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bAllowHoldDraw;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bAllowCancelDraw;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              MaxHoldDrawTime;

UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EMovementRestriction                               ReloadMovementRestriction;

UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EMovementRestriction                               RangedDrawMovementRestriction;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RangedDrawSpeedFactor;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RangedDrawSpeedFactorWithRangerPerk;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   RangedDrawTurnCaps;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	EMovementRestriction                               RangedReleaseMovementRestriction;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bDoNotFireAfterMaxHoldDrawTime;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bQuickthrowOnly;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              ForceAppliedOnDrop;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bAllowCleanup;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RangedDrawTime;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RangedCancelTime;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RangedReleaseTime;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UClass*                                      RangedReleaseCameraShake;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RangedReloadTime;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   RangedReloadTurnCaps;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RangedReloadGrabAmmoNormTime;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              RangedReloadFinishReloadNormTime;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              AutoReloadTime;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float                                              AutoReloadTimeSpent;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bCanReload;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bUnloadOnUnequip;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bLoadOnUnequip;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsLoaded;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHiddenWhenUnloaded;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bIsUsingAlternateMode;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHasAlternateMode;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bRevertModeOnUnequip;

 UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bRevertModeOnDrop;


 UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
 void UpdateMaterial(class USkeletalMeshComponent* SkeletalMeshComp);
UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
 void UpdateInteractionCollision();
UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
 void UpdateEquipmentVisualState();
UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
 void UpdateEquipmentState();
UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
 void SwitchMode();
UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
 void StopThrownTrail();
UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
 void StartThrownTrail();
UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
 bool ShouldShine();
UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
 void SetPartsUseAuxiliaryMesh(bool bNewValue);
UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
 void SetParts(TArray<uint8> NewPartsId, bool bRebuild);
UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
 void SetLoaded(bool bNewLoaded);
UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
 void SetColors(TArray<uint8> NewColors);
UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
 void SetAmmo(uint8 NewAmmo);
UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
 bool RestockOtherEquipmentOnCharacter(class AMordhauCharacter* Character);
UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
 void ResetMeshRelativeTransform();
UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
 void RebuildIfAll();
UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
 void RebuildEquipment(bool bDoOnlyQuickJob);
UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
 void LocalPlayerTick(float DeltaTime);
UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
 void LocalPlayerLateTick(float DeltaTime);
UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
 void LateTick(float DeltaSeconds);
UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
void GetRandomCustomization(struct FEquipmentCustomization& customize,bool bOnlyColors);
UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
class AMordhauCharacter* GetParentCharacter();
UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
 uint8 GetCurrentMaxAmmo();
UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
 uint8 GetAmmo();
UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
 class AMordhauProjectile* FireProjectile_Internal(const struct FVector& InOrigin, const struct FRotator& InOrientation, class AController* Controller, float ExpectedDelay, bool bIsLocal);
UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
 void FireProjectile(const struct FVector& Origin, const struct FRotator& Orientation, class AController* OwningController, float ExpectedDelay);
UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
 struct FEquipmentHolsterInfo FindCurrentHolsterInfo();
UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
 void EquipmentCommand(int Command);
UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
 void DestroyPhysicsProxy();
UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
 bool BelongsToCharacter();
UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
 void AssignCustomizationToProjectile(class AMordhauProjectile* Projectile);
UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
 void AssignCustomization(const struct FEquipmentCustomization& Customization, uint8 CustomizationEmblem, uint8 CustomizationEmblemColor1, uint8 CustomizationEmblemColor2);
//UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
 //struct FBoxSphereBounds ComputeAccurateBounds();
UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
bool CanPerformAttack(class AMordhauCharacter* Character, EAttackMove Move);
UFUNCTION(BlueprintCallable, Category = "MordhauEquipmentFns")
void RequestAttack(EAttackMove Move, float Angle);

UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
bool OnRequestModeSwitch(class AMordhauCharacter* Character);
UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
bool OnRequestFire(class AMordhauCharacter* Character);
UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
void OnRep_Skin();
UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
void OnRep_Pattern();
UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
void OnRep_PartsId();
UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
void OnRep_EmblemColors();
UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
void OnRep_Emblem();
UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
void OnRep_Colors();
UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
void OnRep_IsUsingAlternateMode();
UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
void OnRep_IsLoaded();
UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
void OnRep_Ammo();
UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
void OnPickedUp(class AMordhauCharacter* Character);
UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
void OnPartsChanged();
UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
void OnLoadedChanged();
UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
void OnHolsteredOrDropped(class AMordhauCharacter* Character);
UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
void OnHolstered(class AMordhauCharacter* Character);
UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
void OnEquipped(class AMordhauCharacter* Character);
UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
void OnDropped(class AMordhauCharacter* Character);
UFUNCTION(BlueprintNativeEvent, Category = "MordhauEquipmentEvents")
void OnAmmoChanged();


};

