// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Mordhau.generated.h"

UENUM(BlueprintType)
enum class EAdvancedCharacterFlags : uint8
{
	Airborne = 0,
	Burning = 1,
	RagdollFalling = 2,
	Jumped = 3,
	EAdvancedCharacterFlags_MAX = 4
};


UENUM(BlueprintType)
enum class EAttackType : uint8
{
	Regular = 0,
	Riposte = 1,
	Combo = 2,
	PostClash = 3,
	Morph = 4,
	EAttackType_MAX = 5
};


UENUM(BlueprintType)
enum class EAttackStage : uint8
{
	Windup = 0,
	Release = 1,
	Recovery = 2,
	EAttackStage_MAX = 3
};


UENUM(BlueprintType)
enum class EBlockedReason : uint8
{
	Parry = 0,
	DisarmParry = 1,
	StunParry = 2,
	ChamberLeft = 3,
	ChamberRight = 4,
	WorldFail = 5,
	ClashA = 6,
	ClashB = 7,
	HitCancel = 8,
	WorldSuccess = 9,
	Hit = 10,
	EnvironmentHit = 11,
	RangedParry = 12,
	RiposteParry = 13,
	DisarmClash = 14,
	EBlockedReason_MAX = 15
};


UENUM(BlueprintType)
enum class ESwayMethod : uint8
{
	Sin = 0,
	Constant = 1,
	ESwayMethod_MAX = 2
};


UENUM(BlueprintType)
enum class EModeSwitchType : uint8
{
	Regular = 0,
	Simple = 1,
	LeftToRightHand = 2,
	RightToLeftHand = 3,
	EModeSwitchType_MAX = 4
};


UENUM(BlueprintType)
enum class ESwitchStage : uint8
{
	Reaching = 0,
	Drawing = 1,
	ESwitchStage_MAX = 2
};


UENUM(BlueprintType)
enum class EFeintType : uint8
{
	Regular = 0,
	Combo = 1,
	Chamber = 2,
	Release = 3,
	EFeintType_MAX = 4
};


UENUM(BlueprintType)
enum class EAIFacingMode : uint8
{
	Movement = 0,
	Location = 1,
	Actor = 2,
	Actor2D = 3,
	Bone = 4,
	EAIFacingMode_MAX = 5
};


UENUM(BlueprintType)
enum class EReservationStatus : uint8
{
	Success = 0,
	Full = 1,
	Failure = 2,
	EReservationStatus_MAX = 3
};


UENUM(BlueprintType)
enum class EMotionType : uint8
{
	Idle = 0,
	Attack = 1,
	Parry = 2,
	Flinched = 3,
	Stunned = 4,
	Feinted = 5,
	Blocked = 6,
	Disarmed = 7,
	EquipmentSwitch = 8,
	DropEquipment = 9,
	Emote = 10,
	EquipmentModeSwitch = 11,
	RangedDraw = 12,
	RangedRelease = 13,
	QuickthrowDraw = 14,
	QuickthrowRelease = 15,
	InteractWith = 16,
	Reload = 17,
	RangedCancel = 18,
	CouchedAttack = 19,
	PommelDraw = 20,
	PommelThrow = 21,
	EmoteCancel = 22,
	Holster = 23,
	EnterVehicle = 24,
	LeaveVehicle = 25,
	RagdollFalling = 26,
	Climbing = 27,
	EMotionType_MAX = 28
};


UENUM(BlueprintType)
enum class EEquipmentCategory : uint8
{
	Undefined = 0,
	OneHanded = 1,
	TwoHanded = 2,
	Ranged = 3,
	Shield = 4,
	Utility = 5,
	EEquipmentCategory_MAX = 6
};


UENUM(BlueprintType)
enum class EEquipmentType : uint8
{
	Undefined = 0,
	MeleeNoAltMode = 1,
	MeleeWithAltMode = 2,
	MeleeThrownAltMode = 3,
	ProjectileWeapon = 4,
	Shield = 5,
	Thrown = 6,
	Utility = 7,
	EEquipmentType_MAX = 8
};


UENUM(BlueprintType)
enum class EAuxiliaryMeshMode : uint8
{
	None = 0,
	Arrow = 1,
	Bolt = 2,
	Scabbard = 3,
	Pommel = 4,
	EAuxiliaryMeshMode_MAX = 5
};


UENUM(BlueprintType)
enum class EPartyState : uint8
{
	Idle = 0,
	Searching = 1,
	Joining = 2,
	EPartyState_MAX = 3
};


UENUM(BlueprintType)
enum class ERichPresenceStatus : uint8
{
	MainMenu = 0,
	LocalMatch = 1,
	OnlineMatch = 2,
	ERichPresenceStatus_MAX = 3
};


UENUM(BlueprintType)
enum class ELobbyMessage : uint8
{
	Invalid = 0,
	Chat = 1,
	Kick = 2,
	Status = 3,
	Profile = 4,
	ELobbyMessage_MAX = 5
};


UENUM(BlueprintType)
enum class EOfficialServerVisibility : uint8
{
	ServerBrowser = 0,
	Matchmaking = 1,
	EOfficialServerVisibility_MAX = 2
};


UENUM(BlueprintType)
enum class EActionSetChangeState : uint8
{
	Active = 0,
	Changing = 1,
	Changed = 2,
	EActionSetChangeState_MAX = 3
};


UENUM(BlueprintType)
enum class EActionSet : uint8
{
	InGame = 0,
	Spectator = 1,
	Menu = 2,
	EActionSet_MAX = 3
};


UENUM(BlueprintType)
enum class EInputLineMode : uint8
{
	SingleLine = 0,
	MultiLine = 1,
	EInputLineMode_MAX = 2
};


UENUM(BlueprintType)
enum class EInputTextMode : uint8
{
	Normal = 0,
	Password = 1,
	EInputTextMode_MAX = 2
};


UENUM(BlueprintType)
enum class EInventoryOperation : uint8
{
	RefreshItems = 0,
	SerializeItems = 1,
	DeserializeItems = 2,
	ConsolidateItems = 3,
	UnlockItem = 4,
	ConsumeItem = 5,
	AddItem = 6,
	AddItems = 7,
	DropItems = 8,
	EInventoryOperation_MAX = 9
};


UENUM(BlueprintType)
enum class EBlockType : uint8
{
	Regular = 0,
	AltRegular = 1,
	EBlockType_MAX = 2
};


UENUM(BlueprintType)
enum class EMovementModifier : uint8
{
	Walk = 0,
	Strafe = 1,
	Backpedal = 2,
	PartialSprint = 3,
	Sprint = 4,
	Rush = 5,
	Chasing = 6,
	Supersprint = 7,
	EMovementModifier_MAX = 8
};


UENUM(BlueprintType)
enum class EScoreFeedReason : uint8
{
	Kill = 0,
	TeamKill = 1,
	Assist = 2,
	Suicide = 3,
	PlayerDamage = 4,
	PlayerTeamDamage = 5,
	OtherDamage = 6,
	OtherTeamDamage = 7,
	Capturing = 8,
	Captured = 9,
	Neutralizing = 10,
	Neutralized = 11,
	Objective = 12,
	Heal = 13,
	WaveCleared = 14,
	Repair = 15,
	VehicleDamage = 16,
	VehicleTeamDamage = 17,
	EScoreFeedReason_MAX = 18
};


UENUM(BlueprintType)
enum class ECameraStyle : uint8
{
	FirstPerson = 0,
	ThirdPerson = 1,
	Fixed = 2,
	ECameraStyle_MAX = 3
};


UENUM(BlueprintType)
enum class EAntiCheat : uint8
{
	Secure_Only = 0,
	Insecure_Only = 1,
	Both = 2,
	EAntiCheat_MAX = 3
};


UENUM(BlueprintType)
enum class EStatSetBy : uint8
{
	Client = 0,
	Server = 1,
	OfficialServer = 2,
	EStatSetBy_MAX = 3
};


UENUM(BlueprintType)
enum class EServerRegion : uint8
{
	East_Asia = 0,
	Europe = 1,
	Oceania = 2,
	Russia = 3,
	South_America = 4,
	US_Central = 5,
	US_East = 6,
	US_West = 7,
	Worldwide = 8,
	EServerRegion_MAX = 9
};


UENUM(BlueprintType)
enum class EAvatarSize : uint8
{
	Small = 0,
	Medium = 1,
	Large = 2,
	EAvatarSize_MAX = 3
};


UENUM(BlueprintType)
enum class ECallResult : uint8
{
	Success = 0,
	Failure = 1,
	ECallResult_MAX = 2
};


UENUM(BlueprintType)
enum class ESoundMix : uint8
{
	Master = 0,
	Effects = 1,
	Music = 2,
	ESoundMix_MAX = 3
};


UENUM(BlueprintType)
enum class EMordhauDamageType : uint8
{
	Generic = 0,
	Melee = 1,
	Ranged = 2,
	Fall = 3,
	Fire = 4,
	EMordhauDamageType_MAX = 5
};


UENUM(BlueprintType)
enum class EItemRarity : uint8
{
	Common = 0,
	Uncommon = 1,
	Rare = 2,
	Epic = 3,
	Legendary = 4,
	Exclusive = 5,
	EItemRarity_MAX = 6
};


UENUM(BlueprintType)
enum class EProfileValidationFailedReason : uint8
{
	Unset = 0,
	NotEnoughPoints = 1,
	SkillTooLow = 2,
	EProfileValidationFailedReason_MAX = 3
};


UENUM(BlueprintType)
enum class EAttackMove : uint8
{
	RightStrike = 0,
	LeftStrike = 1,
	Stab = 2,
	AltStab = 3,
	Kick = 4,
	Bash = 5,
	Couch = 6,
	Ranged = 7,
	EAttackMove_MAX = 8
};


UENUM(BlueprintType)
enum class EMainWearableSlot : uint8
{
	Head = 0,
	UpperChest = 1,
	Legs = 2,
	EMainWearableSlot_MAX = 3
};


UENUM(BlueprintType)
enum class EWearableSlot : uint8
{
	Head = 0,
	Coif = 1,
	UpperChest = 2,
	LowerChest = 3,
	Shoulders = 4,
	Arms = 5,
	Hands = 6,
	Legs = 7,
	Feet = 8,
	Total = 9,
	Invalid = 10,
	EWearableSlot_MAX = 11
};


UENUM(BlueprintType)
enum class EBudgetType : uint8
{
	Particle = 0,
	Total = 1,
	EBudgetType_MAX = 2
};


UENUM(BlueprintType)
enum class EHorseGear : uint8
{
	Walk = 0,
	Trot = 1,
	Canter = 2,
	Gallop = 3,
	Total = 4,
	EHorseGear_MAX = 5
};


UENUM(BlueprintType)
enum class EMovementRestriction : uint8
{
	None = 0,
	PartialSprint = 1,
	Walk = 2,
	NoMovement = 3,
	EMovementRestriction_MAX = 4
};


UENUM(BlueprintType)
enum class EPerk : uint8
{
	Pugilist = 0,
	Acrobat = 1,
	Fury = 2,
	Peasant = 3,
	Fireproof = 4,
	Huntsman = 5,
	Friendly = 6,
	Rat = 7,
	Cat = 8,
	Wrecker = 9,
	Smith = 10,
	Tenacious = 11,
	SecondWind = 12,
	Bloodlust = 13,
	Rush = 14,
	FleshWound = 15,
	Scavenger = 16,
	Dodge = 17,
	Ranger = 18,
	EPerk_MAX = 19
};


UENUM(BlueprintType)
enum class EDismembermentType : uint8
{
	None = 0,
	Blunt = 1,
	Pierce = 2,
	Cut = 3,
	EDismembermentType_MAX = 4
};


UENUM(BlueprintType)
enum class EAuthStatus : uint8
{
	Unauthenticated = 0,
	Authenticating = 1,
	Authenticated = 2,
	EAuthStatus_MAX = 3
};


UENUM(BlueprintType)
enum class EParryStage : uint8
{
	Parry = 0,
	Recovery = 1,
	EParryStage_MAX = 2
};


USTRUCT(BlueprintType)
struct FEquipmentPartEntry
{
	GENERATED_USTRUCT_BODY()

public:

	FEquipmentPartEntry() {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText PartName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<class Uclass*> Parts;

};

USTRUCT(BlueprintType)
struct FPatternInfo
{
	GENERATED_USTRUCT_BODY()

public:

	FPatternInfo() {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		class UTexture2D* Texture;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bHasColor1;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bHasColor2;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bHasColor3;

};

/*UENUM(BlueprintType)
enum class EAttachLocation : uint8
{
	KeepRelativeOffset = 0,
	KeepWorldPosition = 1,
	SnapToTarget = 2,
	SnapToTargetIncludingScale = 3,
	EAttachLocation_MAX = 4
};*/
USTRUCT(BlueprintType)
struct FScriptMulticastDelegate
{
	GENERATED_USTRUCT_BODY()
};
USTRUCT(BlueprintType)
struct FEquipmentSkinEntry
{
	GENERATED_USTRUCT_BODY()

public:

	FEquipmentSkinEntry() {}

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText SkinName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<struct FEquipmentPartEntry> PartTypes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<uint8> ColorTables;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<FPatternInfo> Patterns;


};

USTRUCT(BlueprintType)
struct FEquipmentCustomization
{
	GENERATED_USTRUCT_BODY()

public:


	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int ID;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<uint8> Colors;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		TArray<uint8> Parts;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8 Pattern;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		uint8 Skin;


};
USTRUCT(BlueprintType)
struct FActorSetAndArray
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite)
	TArray<class AActor*>                              Array;
};
USTRUCT(BlueprintType)
struct FWoundInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite)
	struct FVector2D                                   WoundType;
	UPROPERTY(BlueprintReadWrite)
	struct FVector                                     WoundSize;
};


USTRUCT(BlueprintType)
struct FSpineSpaceAdditive
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite)
	struct FRotator                                    head;
	UPROPERTY(BlueprintReadWrite)
	struct FRotator                                    Neck;
	UPROPERTY(BlueprintReadWrite)
	struct FRotator                                    Spine1;
	UPROPERTY(BlueprintReadWrite)
	struct FRotator                                    LeftShoulder;
	UPROPERTY(BlueprintReadWrite)
	struct FRotator                                    LeftArm;
	UPROPERTY(BlueprintReadWrite)
	struct FRotator                                    LeftForearm;
	UPROPERTY(BlueprintReadWrite)
	struct FRotator                                    LeftHand;
	UPROPERTY(BlueprintReadWrite)
	struct FRotator                                    RightShoulder;
	UPROPERTY(BlueprintReadWrite)
	struct FRotator                                    RightArm;
	UPROPERTY(BlueprintReadWrite)
	struct FRotator                                    RightForearm;
	UPROPERTY(BlueprintReadWrite)
	struct FRotator                                    RightHand;
};
USTRUCT(BlueprintType)
struct FHighMidLowSpineSpaceAdditive
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite)
	struct FSpineSpaceAdditive                         High;
	UPROPERTY(BlueprintReadWrite)
	struct FSpineSpaceAdditive                         Mid;
	UPROPERTY(BlueprintReadWrite)
	struct FSpineSpaceAdditive                         Low;
};

USTRUCT(BlueprintType)
struct FAnglingSpineSpaceAdditive
{
	GENERATED_BODY()
public:
		UPROPERTY(BlueprintReadWrite)
	struct FHighMidLowSpineSpaceAdditive               Right;
	UPROPERTY(BlueprintReadWrite)
	struct FHighMidLowSpineSpaceAdditive               Left;
};
USTRUCT(BlueprintType)
struct FAttackInfo
{
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite)
	bool                                               bCanCombo;
	UPROPERTY(BlueprintReadWrite)
	bool                                               bNoFlinch;
	UPROPERTY(BlueprintReadWrite)
	float                                              Windup;
	UPROPERTY(BlueprintReadWrite)
	float                                              ComboWindupIncrease;
	UPROPERTY(BlueprintReadWrite)
	float                                              Release;
	UPROPERTY(BlueprintReadWrite)
	float                                              FeintLockOut;
	UPROPERTY(BlueprintReadWrite)
	int                                                FeintCost;
	UPROPERTY(BlueprintReadWrite)
	int                                                ChamberFeintCost;
	UPROPERTY(BlueprintReadWrite)
	int                                                ChamberCost;
	UPROPERTY(BlueprintReadWrite)
	int                                                MorphCost;
	UPROPERTY(BlueprintReadWrite)
	struct FVector2D                                   TurnCaps;
	UPROPERTY(BlueprintReadWrite)
	class UCurveFloat*                                 TurnCapCurve;
	UPROPERTY(BlueprintReadWrite)
	class UCurveFloat*                                 HitEffectIKWeightCurve;
	UPROPERTY(BlueprintReadWrite)
	float                                              HitEffectSpeedUpExponent;
	UPROPERTY(BlueprintReadWrite)
	float                                              StaminaDrain;
	UPROPERTY(BlueprintReadWrite)
	TArray<float>                                      Damage;
	UPROPERTY(BlueprintReadWrite)
	TArray<float>                                      HeadBonus;
	UPROPERTY(BlueprintReadWrite)
	TArray<float>                                      LegBonus;
	UPROPERTY(BlueprintReadWrite)
	float                                              WoodDamage;
	UPROPERTY(BlueprintReadWrite)
	float                                              StoneDamage;
	UPROPERTY(BlueprintReadWrite)
	bool                                               bStopOnHit;
	UPROPERTY(BlueprintReadWrite)
	bool                                               bDrainAllStamOnBlock;
	UPROPERTY(BlueprintReadWrite)
	bool                                               bRagdollOnBlock;
	UPROPERTY(BlueprintReadWrite)
	float                                              ChipDamagePercentageOnBlock;
	UPROPERTY(BlueprintReadWrite)
	bool                                               bRagdollOnHit;
	UPROPERTY(BlueprintReadWrite)
	bool                                               bDismountsHorseRider;
	UPROPERTY(BlueprintReadWrite)
	bool                                               bDismountsLadderUser;
	UPROPERTY(BlueprintReadWrite)
	float                                              MissStaminaCost;
	UPROPERTY(BlueprintReadWrite)
	float                                              HitStaminaReward;
	UPROPERTY(BlueprintReadWrite)
	float                                              MissRecovery;
	UPROPERTY(BlueprintReadWrite)
	float                                              HitKockbackFactor;
	UPROPERTY(BlueprintReadWrite)
	float                                              FollowAttackDirectionFactor;
	UPROPERTY(BlueprintReadWrite)
	TArray<struct FWoundInfo>                          WoundInfoArray;
	UPROPERTY(BlueprintReadWrite)
	class UClass*                                      HitShake;
	UPROPERTY(BlueprintReadWrite)
	class UClass*                                      HitStopShake;
};
USTRUCT(BlueprintType)
struct FSteamID
{
	GENERATED_BODY()
};
USTRUCT(BlueprintType)
struct FWearableCustomization
{
	GENERATED_BODY()
		int                                                ID;
	TArray<uint8>                              Colors;
	TArray<uint8>                              Team1Colors;
	TArray<uint8>                              Team2Colors;
	uint8                                      Pattern;
};
USTRUCT(BlueprintType)
struct FCharacterGearCustomization
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
		TArray<FWearableCustomization>              Wearables;
	UPROPERTY(BlueprintReadWrite)
		TArray<FEquipmentCustomization>             Equipment;
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
		FText                                       Name;
		UPROPERTY(BlueprintReadWrite)
		struct FCharacterGearCustomization                 GearCustomization;
	UPROPERTY(BlueprintReadWrite)
		struct FAppearanceCustomization                    AppearanceCustomization;
	UPROPERTY(BlueprintReadWrite)
		struct FFaceCustomization                          FaceCustomization;
	UPROPERTY(BlueprintReadWrite)
		struct FSkillsCustomization                        SkillsCustomization;
};
USTRUCT(BlueprintType)
struct FStatBase
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
	FName                                       Name;
	UPROPERTY(BlueprintReadWrite)
	EStatSetBy                                         SetBy;

};
USTRUCT(BlueprintType)
struct FStatInt : public FStatBase
{
	GENERATED_BODY()
};
USTRUCT(BlueprintType)
struct FAchievement
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite)
	FName                                       Name;
	UPROPERTY(BlueprintReadWrite)
	EStatSetBy                                         SetBy;
};
USTRUCT(BlueprintType)
struct FSoundMixInfo
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
	class USoundMix*                                   SoundMix;
	UPROPERTY(BlueprintReadWrite)
	TArray<class USoundClass*>                         SoundClasses;
};
/*UENUM(BlueprintType)
enum class EPhysicalSurface : uint8
{
	SurfaceType_Default = 0,
	SurfaceType1 = 1,
	SurfaceType2 = 2,
	SurfaceType3 = 3,
	SurfaceType4 = 4,
	SurfaceType5 = 5,
	SurfaceType6 = 6,
	SurfaceType7 = 7,
	SurfaceType8 = 8,
	SurfaceType9 = 9,
	SurfaceType10 = 10,
	SurfaceType11 = 11,
	SurfaceType12 = 12,
	SurfaceType13 = 13,
	SurfaceType14 = 14,
	SurfaceType15 = 15,
	SurfaceType16 = 16,
	SurfaceType17 = 17,
	SurfaceType18 = 18,
	SurfaceType19 = 19,
	SurfaceType20 = 20,
	SurfaceType21 = 21,
	SurfaceType22 = 22,
	SurfaceType23 = 23,
	SurfaceType24 = 24,
	SurfaceType25 = 25,
	SurfaceType26 = 26,
	SurfaceType27 = 27,
	SurfaceType28 = 28,
	SurfaceType29 = 29,
	SurfaceType30 = 30,
	SurfaceType31 = 31,
	SurfaceType32 = 32,
	SurfaceType33 = 33,
	SurfaceType34 = 34,
	SurfaceType35 = 35,
	SurfaceType36 = 36,
	SurfaceType37 = 37,
	SurfaceType38 = 38,
	SurfaceType39 = 39,
	SurfaceType40 = 40,
	SurfaceType41 = 41,
	SurfaceType42 = 42,
	SurfaceType43 = 43,
	SurfaceType44 = 44,
	SurfaceType45 = 45,
	SurfaceType46 = 46,
	SurfaceType47 = 47,
	SurfaceType48 = 48,
	SurfaceType49 = 49,
	SurfaceType50 = 50,
	SurfaceType51 = 51,
	SurfaceType52 = 52,
	SurfaceType53 = 53,
	SurfaceType54 = 54,
	SurfaceType55 = 55,
	SurfaceType56 = 56,
	SurfaceType57 = 57,
	SurfaceType58 = 58,
	SurfaceType59 = 59,
	SurfaceType60 = 60,
	SurfaceType61 = 61,
	SurfaceType62 = 62,
	SurfaceType_Max = 63,
	EPhysicalSurface_MAX = 64
};*/
USTRUCT(BlueprintType)
struct FDecalInfo
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
	class UMaterialInterface*                          Material;
	UPROPERTY(BlueprintReadWrite)
	struct FVector                                     Size;
};
USTRUCT(BlueprintType)
struct FReplicatedProjectileInfo
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
		struct FVector_NetQuantize                         Location;
	UPROPERTY(BlueprintReadWrite)
	struct FVector_NetQuantize                         Orientation;
	UPROPERTY(BlueprintReadWrite)
	struct FVector_NetQuantizeNormal                   HitNormal;
	UPROPERTY(BlueprintReadWrite)
	float                                              BounceForce;
	UPROPERTY(BlueprintReadWrite)
	TWeakObjectPtr<class AActor>                       Creator;
	UPROPERTY(BlueprintReadWrite)
	uint8                                      HitSurface;
	UPROPERTY(BlueprintReadWrite)
	bool                                               bHasStopped;
	UPROPERTY(BlueprintReadWrite)
	bool                                               bHasHitWorld;
	UPROPERTY(BlueprintReadWrite)
	uint8                                      HitCounter;
};
/* ALREADY EXISTS IN ENGINETYPES.h
USTRUCT(BlueprintType)
struct FHitResult
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite)
	uint8                                      bBlockingHit : 1;
	UPROPERTY(BlueprintReadWrite)
	uint8                                      bStartPenetrating : 1;
	UPROPERTY(BlueprintReadWrite)
	int                                                FaceIndex;
	UPROPERTY(BlueprintReadWrite)
	float                                              Time;
	UPROPERTY(BlueprintReadWrite)
	float                                              Distance;
	UPROPERTY(BlueprintReadWrite)
	struct FVector_NetQuantize                         Location;
	UPROPERTY(BlueprintReadWrite)
	struct FVector_NetQuantize                         ImpactPoint;
	UPROPERTY(BlueprintReadWrite)
	struct FVector_NetQuantizeNormal                   Normal;
	UPROPERTY(BlueprintReadWrite)
	struct FVector_NetQuantizeNormal                   ImpactNormal;
	UPROPERTY(BlueprintReadWrite)
	struct FVector_NetQuantize                         TraceStart;
	UPROPERTY(BlueprintReadWrite)
	struct FVector_NetQuantize                         TraceEnd;
	UPROPERTY(BlueprintReadWrite)
	float                                              PenetrationDepth;
	UPROPERTY(BlueprintReadWrite)
	int                                                Item;
	UPROPERTY(BlueprintReadWrite)
	TWeakObjectPtr<class UPhysicalMaterial>            PhysMaterial;
	UPROPERTY(BlueprintReadWrite)
	TWeakObjectPtr<class AActor>                       Actor;
	UPROPERTY(BlueprintReadWrite)
	TWeakObjectPtr<class UPrimitiveComponent>          Component;
	UPROPERTY(BlueprintReadWrite)
	FName                                       BoneName;
	UPROPERTY(BlueprintReadWrite)
	FName                                       MyBoneName;
};
*/
UENUM(BlueprintType)
enum E_SkirmishRoundStage
{
	WaitingforPlayers = 0,
	RoundStart = 1,
	RoundPlay = 2,
	RoundEnd = 3,
	Max = 4
};
USTRUCT(BlueprintType)
struct FSTRUCT_SkirmishRoundInfo//
{
	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite)
		TEnumAsByte<E_SkirmishRoundStage> Stage;//RoundInfo
	UPROPERTY(BlueprintReadWrite)
		uint8 Winner;
	UPROPERTY(BlueprintReadWrite)
		float StartTime;

};

USTRUCT(BlueprintType)
struct FSTRUCT_MatchEndInfo//
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
		class AMordhauPlayerState* Winner;
	UPROPERTY(BlueprintReadWrite)
		int WinnerTeam;
	UPROPERTY(BlueprintReadWrite)
		float WinnerScore;
	UPROPERTY(BlueprintReadWrite)
		float OtherScore;
	UPROPERTY(BlueprintReadWrite)
		bool Draw;
};
USTRUCT(BlueprintType)
struct FEmoteEntry
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
	FText                                       EmoteName;
	UPROPERTY(BlueprintReadWrite)
	class UClass*                                      EmoteMotion;
};

USTRUCT(BlueprintType)
struct FNetMotion
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
	uint8                                      ID;
	UPROPERTY(BlueprintReadWrite)
	uint8                                      MotionType;
	UPROPERTY(BlueprintReadWrite)
	uint8                                      MotionParam0;
	UPROPERTY(BlueprintReadWrite)
	uint8                                      MotionParam1;
	UPROPERTY(BlueprintReadWrite)
	uint8                                      MotionParam2;
	UPROPERTY(BlueprintReadWrite)
	uint8                                      MotionDynamicParam;
};
USTRUCT(BlueprintType)
struct FNetBlock
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
		uint8                                      BlockedReason;
	UPROPERTY(BlueprintReadWrite)
	uint8                                      BlockedMove;
	UPROPERTY(BlueprintReadWrite)
	uint8                                      BlockType;
	UPROPERTY(BlueprintReadWrite)
	uint8                                      BlockedAngle;
	UPROPERTY(BlueprintReadWrite)
	TWeakObjectPtr<class AActor>                       BlockingActor;
	UPROPERTY(BlueprintReadWrite)
	uint8                                      EnsureReplication;
};

USTRUCT(BlueprintType)
struct FDamageRecord
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
		TWeakObjectPtr<class AController>                  Source;
	UPROPERTY(BlueprintReadWrite)
	float                                              Time;
	UPROPERTY(BlueprintReadWrite)
	float                                              Damage;
};
USTRUCT(BlueprintType)
struct FVehicleTransitionInfo
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
		class UAnimSequence*                               Animation;
	UPROPERTY(BlueprintReadWrite)
	float                                              Duration;
	UPROPERTY(BlueprintReadWrite)
	float                                              BlendTime;
};
USTRUCT(BlueprintType)
struct FNetDamage
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
		uint8                                      PackedType;
	UPROPERTY(BlueprintReadWrite)
	uint8                                      bone;
	UPROPERTY(BlueprintReadWrite)
	uint8                                      PackedFlags;
	UPROPERTY(BlueprintReadWrite)
	struct FVector_NetQuantize                         Point;
	UPROPERTY(BlueprintReadWrite)
	TWeakObjectPtr<class AActor>                       DamageSource;
	TWeakObjectPtr<class AActor>                       DamageAgent;
};

USTRUCT(BlueprintType)
struct FSphericalLimbBounds
{


	GENERATED_BODY()
	UPROPERTY(BlueprintReadWrite)
	FName                                       StartSocket;
	UPROPERTY(BlueprintReadWrite)
	FName                                       EndSocket;
	UPROPERTY(BlueprintReadWrite)
	float                                              Radius;
	UPROPERTY(BlueprintReadWrite)
	FName                                       AttachSocket;
};
USTRUCT(BlueprintType)
struct FFloatAndVector
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
	float                                              Float;                                                    
	
	UPROPERTY(BlueprintReadWrite)
	struct FVector                                     Vector;                                                   
};

//UENUM(BlueprintType)
//enum class ETickingGroup : uint8
//{
//	TG_PrePhysics = 0,
//	TG_StartPhysics = 1,
//	TG_DuringPhysics = 2,
//	TG_EndPhysics = 3,
//	TG_PostPhysics = 4,
//	TG_PostUpdateWork = 5,
//	TG_LastDemotable = 6,
//	TG_NewlySpawned = 7,
//	TG_MAX = 8
//};

//USTRUCT(BlueprintType)
//struct FTickFunction
//{
//	GENERATED_BODY()
//	TEnumAsByte<ETickingGroup>                         TickGroup;
//	TEnumAsByte<ETickingGroup>                         EndTickGroup;
//	uint8                                     bTickEvenWhenPaused : 1;
//	uint8                                     bCanEverTick : 1;
//	uint8                                     bStartWithTickEnabled : 1;
//	uint8                                     bAllowTickOnDedicatedServer : 1;
//	float                                              TickInterval;
//};

//USTRUCT(BlueprintType)
//struct FPrePhysTickFunction : public FTickFunction
//{
//	GENERATED_BODY()
//};


USTRUCT(BlueprintType)
struct FWoundMaterialData
{

	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
	struct FVector                                     Location;
	UPROPERTY(BlueprintReadWrite)
	struct FVector                                     UpVector;
	UPROPERTY(BlueprintReadWrite)
	struct FVector                                     RightVector;
	UPROPERTY(BlueprintReadWrite)
	struct FVector                                     ForwardVector;
	UPROPERTY(BlueprintReadWrite)
	struct FVector2D                                   WoundType;
};
//UENUM(BlueprintType)
//enum class EAttachLocation : uint8
//{
//	KeepRelativeOffset = 0,
//	KeepWorldPosition = 1,
//	SnapToTarget = 2,
//	SnapToTargetIncludingScale = 3,
//	EAttachLocation_MAX = 4
//};




USTRUCT(BlueprintType)
struct FMordhauColorItemTable
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
	FText                                       TableName;
	UPROPERTY(BlueprintReadWrite)
	TArray<class UClass*>                              Entries;
};

USTRUCT(BlueprintType)
struct FFindLobbySessionsFilter
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
	int                                                MinOpenSlots;
	UPROPERTY(BlueprintReadWrite)
	int                                                PreferredOpenSlots;
	UPROPERTY(BlueprintReadWrite)
	int                                                MMR;
	UPROPERTY(BlueprintReadWrite)
	TArray<FString>                             GameModes;
	UPROPERTY(BlueprintReadWrite)
	EServerRegion                                      Region;
	
};




USTRUCT(BlueprintType)
struct FPlayerProfile
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
	int                                                Rank;
	UPROPERTY(BlueprintReadWrite)
	int                                                Banner;
	UPROPERTY(BlueprintReadWrite)
	struct FCharacterProfile                           Character;
};



USTRUCT(BlueprintType)
struct FHorseGearInfo
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
	
	float                                              MaxSpeed;
	UPROPERTY(BlueprintReadWrite)
	float                                              MaxAcceleration;
	UPROPERTY(BlueprintReadWrite)
	bool                                               bAllowJump;
	UPROPERTY(BlueprintReadWrite)
	bool                                               bCanRiderRegenHealth;
	UPROPERTY(BlueprintReadWrite)
	bool                                               bCanRiderRegenStamina;
	UPROPERTY(BlueprintReadWrite)
	bool                                               bCanHorseRegen;
	UPROPERTY(BlueprintReadWrite)
	class UClass*                                      HeadBobShake;
};

USTRUCT(BlueprintType)
struct FEquipmentHolsterInfo
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
	FName                                       HolsterSocket;
	UPROPERTY(BlueprintReadWrite)
bool                                               bHidden;
UPROPERTY(BlueprintReadWrite)
bool                                               bHiddenIn1P;
	

UPROPERTY(BlueprintReadWrite)
class UAnimMontage*                                DrawAnimation;
UPROPERTY(BlueprintReadWrite)
class UAnimMontage*                                DrawAnimation1P;
UPROPERTY(BlueprintReadWrite)
bool                                               bUseIKDrawing;
	
UPROPERTY(BlueprintReadWrite)
struct FTransform                                  Offset;
};




USTRUCT(BlueprintType)
struct FFootGroundingLimb
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
	FName                                       TraceEndBone;
	UPROPERTY(BlueprintReadWrite)
FName                                       TraceStartBone;
UPROPERTY(BlueprintReadWrite)
FName                                       FootstepBone;
UPROPERTY(BlueprintReadWrite)
float                                              TraceDistance;
UPROPERTY(BlueprintReadWrite)
struct FVector2D                                   UpValueLimits;

UPROPERTY(BlueprintReadWrite)
struct FHitResult                                  TraceResult;

UPROPERTY(BlueprintReadWrite)
float                                              RootSpaceImpactZ;
UPROPERTY(BlueprintReadWrite)
struct FRotator                                    RotationOffset;
UPROPERTY(BlueprintReadWrite)
struct FVector                                     InternalTranslationOffset;
UPROPERTY(BlueprintReadWrite)
struct FVector                                     TranslationOffset;

};




USTRUCT(BlueprintType)
struct FMordhauWebAPIRequest
{
	GENERATED_BODY()

};



USTRUCT(BlueprintType)
struct FCachedAvatars
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)

	TWeakObjectPtr<class UTexture2D>                   Small;
	UPROPERTY(BlueprintReadWrite)
TWeakObjectPtr<class UTexture2D>                   Medium;
UPROPERTY(BlueprintReadWrite)
TWeakObjectPtr<class UTexture2D>                   Large;
};



USTRUCT(BlueprintType)
struct FColorTableEntry
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
		FText                                       EntryName;
	UPROPERTY(BlueprintReadWrite)
		struct FLinearColor                                Color;
};

USTRUCT(BlueprintType)
struct FMordhauColorTable
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
	FText                                       TableName;
	UPROPERTY(BlueprintReadWrite)
	TArray<struct FColorTableEntry>                    Entries;
};





USTRUCT(BlueprintType)
struct FCharacterInventory
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
	class AMordhauEquipment*                           RightHand;
	UPROPERTY(BlueprintReadWrite)
class AMordhauEquipment*                           LeftHand;
UPROPERTY(BlueprintReadWrite)
TArray<class AMordhauEquipment*>                   Equipment;
};


USTRUCT(BlueprintType)
struct FItemStack
{
	GENERATED_BODY()	
};
USTRUCT(BlueprintType)
struct FUnlockRecipe
{
	GENERATED_BODY()
};








USTRUCT(BlueprintType)
struct FSerializedItems
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
uint8                                          BufferSize;
	UPROPERTY(BlueprintReadWrite)
	 FString                                     Data;
	UPROPERTY(BlueprintReadWrite)
	uint8                                          Timestamp;
};


USTRUCT(BlueprintType)
struct FServerStats
{
	GENERATED_BODY()
		UPROPERTY(BlueprintReadWrite)
		uint8                                    TargetTickRate;
	UPROPERTY(BlueprintReadWrite)
	uint8                                    MinTickRate;
	UPROPERTY(BlueprintReadWrite)
	uint8                                    MaxTickRate;
	UPROPERTY(BlueprintReadWrite)
	uint8                                    AvgTickRate;
	UPROPERTY(BlueprintReadWrite)
	uint8                                    InBytesPerSecond;
	UPROPERTY(BlueprintReadWrite)
	uint8                                    OutBytesPerSecond;
	UPROPERTY(BlueprintReadWrite)
	uint8                                    MaxInternetClientRate;
		UPROPERTY(BlueprintReadWrite)
	uint8                                    NumPlayers;
		UPROPERTY(BlueprintReadWrite)
	uint8                                    MaxPlayers;
};


/*struct FMinimalViewInfo
{
	struct FVector                                     Location;
	struct FRotator                                    Rotation;
	float                                              FOV;
	float                                              DesiredFOV;
	float                                              OrthoWidth;
	float                                              OrthoNearClipPlane;
	float                                              OrthoFarClipPlane;
	float                                              AspectRatio;
	unsigned char                                      bConstrainAspectRatio : 1;
	unsigned char                                      bUseFieldOfViewForLOD : 1;
	TEnumAsByte<ECameraProjectionMode>                 ProjectionMode;
	float                                              PostProcessBlendWeight;
	struct FPostProcessSettings                        PostProcessSettings;
	struct FVector2D                                   OffCenterProjectionOffset;
};*/

USTRUCT(BlueprintType)
struct FBP_ToolBoxSpawnable
{
	GENERATED_BODY()
		class UStaticMesh*                                 Preview; 
	UPROPERTY(BlueprintReadWrite)
		class USkeletalMesh*                               PreviewSkeletal;
	UPROPERTY(BlueprintReadWrite)
		uint8                                     Cost;

	UPROPERTY(BlueprintReadWrite)
		struct FRotator                                    RotationOffset;
	UPROPERTY(BlueprintReadWrite)
		struct FRotator                                    RotationOffsetPreview;
	UPROPERTY(BlueprintReadWrite)
		struct FVector                                     ScalePreview;
	UPROPERTY(BlueprintReadWrite)
		class UClass*                                      Class;
	UPROPERTY(BlueprintReadWrite)
		FName                                       PlaceableLimitName;
	UPROPERTY(BlueprintReadWrite)
		int                                                PleaceableLimitMax;
	UPROPERTY(BlueprintReadWrite)
		bool                                               PerformCapsuleCheck;

	UPROPERTY(BlueprintReadWrite)

		float                                              CapsuleCheckRadius;
	UPROPERTY(BlueprintReadWrite)
		float                                              CapsuleCheckHalfHeight;
	UPROPERTY(BlueprintReadWrite)
		struct FVector                                     SpawnActorOffset;
	UPROPERTY(BlueprintReadWrite)
	bool                                               DoNotAttach;
};