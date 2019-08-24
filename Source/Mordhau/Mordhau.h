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

	FEquipmentCustomization() {}

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





