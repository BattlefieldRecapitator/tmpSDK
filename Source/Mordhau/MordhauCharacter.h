// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
//#include "Mordhau_classes.hpp"
#include "AdvancedCharacter.h"
#include "MordhauPlayerController.h"
//#include "MordhauEquipment.h"
//#include "GameFramework/Actor.h"
#include "MordhauCharacter.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FEquipmentCustomization
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
		int                                                ID;
	UPROPERTY(BlueprintReadWrite)
	TArray<uint8>                              Colors;
	UPROPERTY(BlueprintReadWrite)
	TArray<uint8>                              Parts;
	UPROPERTY(BlueprintReadWrite)
	uint8                                      Skin;
	UPROPERTY(BlueprintReadWrite)
	uint8                                      Pattern;
};
/*USTRUCT(BlueprintType)
struct FWearableCustomization
{
	GENERATED_BODY()
		int                                                ID;
	TArray<uint8>                              Colors;
	TArray<uint8>                              Team1Colors;
	TArray<uint8>                              Team2Colors;
	uint8                                      Pattern;
};*/
USTRUCT(BlueprintType)
struct FCharacterGearCustomization
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
	TArray<struct FWearableCustomization>              Wearables;
	UPROPERTY(BlueprintReadWrite)
	TArray<struct FEquipmentCustomization>             Equipment;
};
USTRUCT(BlueprintType)
struct FFaceCustomization
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
		TArray<uint8>                                   Translate;
	UPROPERTY(BlueprintReadWrite)
		TArray<uint8>                                   Rotate;
	UPROPERTY(BlueprintReadWrite)
	TArray<uint8>                                   Scale;
};
USTRUCT(BlueprintType)
struct FSkillsCustomization
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
	uint8                                          Perks;
};
USTRUCT(BlueprintType)
struct FAppearanceCustomization
{
	
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
		int                                                Emblem;
	UPROPERTY(BlueprintReadWrite)
	TArray<uint8>                              EmblemColors;
	UPROPERTY(BlueprintReadWrite)
	uint8                                      MetalRoughnessScale;
	UPROPERTY(BlueprintReadWrite)
	uint8                                      MetalTint;
	UPROPERTY(BlueprintReadWrite)
	uint8                                      Age;
	UPROPERTY(BlueprintReadWrite)
	uint8                                      Voice;
	UPROPERTY(BlueprintReadWrite)
	uint8                                      VoicePitch;
	UPROPERTY(BlueprintReadWrite)
	bool                                               bIsFemale;
	UPROPERTY(BlueprintReadWrite)
	uint8                                      Fat;
	UPROPERTY(BlueprintReadWrite)
	uint8                                      Skinny;
	UPROPERTY(BlueprintReadWrite)
	uint8                                      Strong;
	UPROPERTY(BlueprintReadWrite)
	uint8                                      SkinColor;
	UPROPERTY(BlueprintReadWrite)
	uint8                                      Face;
	UPROPERTY(BlueprintReadWrite)
	uint8                                      EyeColor;
	UPROPERTY(BlueprintReadWrite)
	uint8                                      HairColor;
	UPROPERTY(BlueprintReadWrite)
	uint8                                      Hair;
	UPROPERTY(BlueprintReadWrite)
	uint8                                      FacialHair;
	UPROPERTY(BlueprintReadWrite)
	uint8                                      Eyebrows;
};
USTRUCT(BlueprintType)
struct FCharacterProfile
{
	GENERATED_BODY()
//	struct FText                                       Name;
UPROPERTY(BlueprintReadWrite)
	struct FCharacterGearCustomization                 GearCustomization;
	UPROPERTY(BlueprintReadWrite)
	struct FAppearanceCustomization                    AppearanceCustomization;
	UPROPERTY(BlueprintReadWrite)
	struct FFaceCustomization                          FaceCustomization;
	UPROPERTY(BlueprintReadWrite)
	struct FSkillsCustomization                        SkillsCustomization;
};
UCLASS()
class MORDHAU_API AMordhauCharacter : public AAdvancedCharacter
{
	GENERATED_BODY()
public:
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	FCharacterProfile                           Profile;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              FallingTimeToRagdoll;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		float                                              FallingTime;
		UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
			float                                              JumpStaminaCost;
		UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
			float                                              StaminaRegenTickRate;
		UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
			int                                                HealthOnKill;
		UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
			bool                                               bIsUnflinchable;
		UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
			float                                              MeleeMissRecoveryModifier;
		UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
			int                                                DodgeStaminaCost;
		UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		bool                                               bHasScaryFace;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              DodgeCooldown;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              DodgeDuration;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              EasyParryUntilTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bDestroyEquipmentOnDeath;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              MeleeReleaseModifier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              StaminaCostModifier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              MeleeWindupModifier;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		//TArray<TWeakObjectPtr<class AActor>>               ActorsThatDestroyWithUs;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bDoNotUseGrounding;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bIsRightArmDisabled;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bIsRightLegDisabled;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bIsLeftLegDisabled;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bIsLeftArmDisabled;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bIsHoldingBlock;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bDoNotAnimateBreathing;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              ReceivedFireDamageModifierWithFireproofPerk;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              ReceivedDamageModifierWithFriendlyPerk;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int StaminaRegenPerTick;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	int stamina;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float StaminaRegenDelay;
			UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
			int                                                StaminaOnKill;
			UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
			float                                              MovementBoostDurationWithRushPerk;
			UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
			float                                              MinDelayBetweenBattlecries;
			UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
			float                                              MinDelayBetweenVoiceCommands;
			UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
			bool                                               bIsWrithingInPain;
			UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
			float                                              MaxThirdPersonFOV;
			UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
			float                                              CurrentFOVOffset;
			UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
			struct FVector                                     CameraLocation1P;
			UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
			float                                              UseHoldTime;
			UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
			class UMordhauMotion*                              Motion;
		UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		class AMordhauEquipment*                           RightHandEquipment;
		UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
		TArray<class AMordhauEquipment*>                   Equipment;

		UFUNCTION(BlueprintCallable, Category = "MordhauCharFns")
		bool PickUpToSlot(class AMordhauEquipment* ToEquip, uint8 Slot);
		UFUNCTION(BlueprintCallable, Category="MordhauCharFns")
		 void LeftTeamArea(int OwningTeam);
		UFUNCTION(BlueprintCallable, Category="MordhauCharFns")
		 bool IsInKnockback();
		UFUNCTION(BlueprintCallable, Category="MordhauCharFns")
		 bool IsInEnemyTeamArea();
		UFUNCTION(BlueprintCallable, Category="MordhauCharFns")
		 bool IsInAnyTeamArea();
		UFUNCTION(BlueprintCallable, Category="MordhauCharFns")
		 bool IsHoldingBlock();
		UFUNCTION(BlueprintCallable, Category="MordhauCharFns")
		 bool HasPerk(uint8 PerkId);
		UFUNCTION(BlueprintCallable, Category="MordhauCharFns")
		 bool CanEasyParry();
		UFUNCTION(BlueprintCallable, Category = "MordhauCharFns")
		void EnteredTeamArea(int OwningTeam);
		UFUNCTION(BlueprintCallable, Category = "MordhauCharFns")
		void UseReleased();
		UFUNCTION(BlueprintCallable, Category = "MordhauCharFns")
		void UsePressed();
		UFUNCTION(BlueprintCallable, Category = "MordhauCharFns")
		bool ValidateInteractionTarget(class AActor* TargetActor);
		UFUNCTION(BlueprintCallable, Category = "MordhauCharFns")
		void AssignProfile(const struct FCharacterProfile& NewProfile);
};
