// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauUtilityLibrary.h"


UPROPERTY(BlueprintReadWrite)
FText placeholder;
EServerRegion serverReg;
struct FBox ReturnBox;
TArray<class AMordhauPlayerState*> ReturnPSArray;



TArray<class AMordhauPlayerState*> UMordhauUtilityLibrary::SortPlayers(TArray<class AMordhauPlayerState*> Array)
{
	return ReturnPSArray;
}
void UMordhauUtilityLibrary::StripProfile(const struct FCharacterProfile& InProfile, bool bStripEquipment, bool bStripPerks, bool bStripNonTier0Armor, struct FCharacterProfile& strippedPrf)
{}
void UMordhauUtilityLibrary::MarkRenderStateDirty(class UMeshComponent* MeshComp)
{}
void UMordhauUtilityLibrary::MakeEmptyProfile(class UClass* CharacterClass, bool bRandomizeVoice, struct FCharacterProfile& emptyPrf)
{}
void UMordhauUtilityLibrary::GetWearableNames(const struct FCharacterGearCustomization& CharacterGearCustomization, EWearableSlot Slot, TArray<FText>& namePlacehldr)
{}
void UMordhauUtilityLibrary::GetWearableClasses(const struct FCharacterGearCustomization& CharacterGearCustomization, EWearableSlot Slot, TArray<class UClass*>& classHolder)
{}
void UMordhauUtilityLibrary::GetSteamIDFromPlayer(class APlayerController* Player, struct FSteamID& ID)
{}
void UMordhauUtilityLibrary::GetSteamID(struct FSteamID& ID)
{}
void UMordhauUtilityLibrary::GetServerSteamID(struct FSteamID& ID)
{}
void UMordhauUtilityLibrary::GetPerks(TArray<class UPerk*>& Perks, const struct FCharacterProfile& Profile)
{}
void UMordhauUtilityLibrary::GetCustomConfigVar_Color(const FString& SectionName, const FString& VariableName, bool IsValid, struct FLinearColor& colorReturn)
{}
void UMordhauUtilityLibrary::GetBoundingBoxOfBoneInfluence(class USkeletalMeshComponent* MeshComponent, TArray<FName> Bones, float WeightThreshold, struct FBox& boxRef)
{}
class AActor* UMordhauUtilityLibrary::GetAttachParentActor(class AActor* Actor)
{
	return nullptr;
}
void UMordhauUtilityLibrary::GetAllWearableClassesForSlotExhaustive(EWearableSlot Slot, TArray<class UClass*>& classPlaceholder)
{}
void UMordhauUtilityLibrary::FindSteamID(const FString& PlayerNameOrSteamID)
{}
//EServerRegion GetRegion(const FString& RegionName);








//struct FBox GetPhysicsBodyBounds(class USkeletalMeshComponent* MeshComponent, const FName& BoneName);









//struct FMapInfo GetMapInfo(class UObject* WorldContextObject, const FString& MapPath);

//struct FBoxSphereBounds GetImportedBounds(class USkeletalMeshComponent* SkeletalMeshComponent);




class UMordhauWearable* UMordhauUtilityLibrary::GetDefaultWearable(class UClass* FromClass)
{
	return nullptr;
}
class UObject* UMordhauUtilityLibrary::GetDefaultObject(class UClass* FromClass)
{
	return nullptr;
}
class AActor* UMordhauUtilityLibrary::GetDefaultActor(class UClass* FromClass)
{
	return nullptr;
}
class UMordhauStats* UMordhauUtilityLibrary::GetMordhauStats()
{
	return nullptr;
}
class AMordhauHUD* UMordhauUtilityLibrary::GetMordhauHUD()
{
	return nullptr;
}
class UMordhauGameUserSettings* UMordhauUtilityLibrary::GetMordhauGameUserSettings()
{
return nullptr;
}
class UDecalComponent* UMordhauUtilityLibrary::SpawnBloodDecalAtLocation(class UObject* WorldContextObject, class UMaterialInterface* DecalMaterial, const struct FVector& DecalSize, const struct FVector& Location, const struct FRotator& Rotation, float LifeSpan)
{
	return nullptr;
}
class UWorld* UMordhauUtilityLibrary::GetWorldOf(class UObject* Object)
{
return nullptr;
}
class UClass* UMordhauUtilityLibrary::GetWearableClass(const struct FCharacterGearCustomization& CharacterGearCustomization, EWearableSlot Slot)
{
return nullptr;
}
class AMordhauCharacter* UMordhauUtilityLibrary::GetViewTargetCharacter(class UObject* WorldContextObject, bool bOnlyLiving)
{
return nullptr;
}
class UTexture2D* UMordhauUtilityLibrary::GetSteamAvatar(const struct FSteamID& SteamID, EAvatarSize Size)
{
return nullptr;
}
class AMordhauEquipment* UMordhauUtilityLibrary::GetRandomWeapon(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int ID)
{
return nullptr;
}
class AMordhauEquipment* UMordhauUtilityLibrary::GetRandomEquipment(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int ID)
{
return nullptr;
}


















void UMordhauUtilityLibrary::DrawText(class UCanvas* Canvas, class UFont* Font, int Size, const FString& Text, const struct FVector2D& Position, const struct FLinearColor& TextColor, float Kerning, const struct FLinearColor& ShadowColor, const struct FVector2D& ShadowOffset, bool bCentreX, bool bCentreY, bool bOutlined, const struct FLinearColor& OutlineColor)
{
}
void UMordhauUtilityLibrary::ForceReplicationUpdate(class UCharacterMovementComponent* CMC)
{
}
void UMordhauUtilityLibrary::FlushPlayerControllerPressedKeys(class APlayerController* Controller)
{
}
void UMordhauUtilityLibrary::FlashWindow()
{
}
void UMordhauUtilityLibrary::VSmoothDamp(const struct FVector& Target, float SmoothTime, float DeltaTime, float MaxSpeed, struct FVector Current, struct FVector CurrentVelocity)
{
}
void UMordhauUtilityLibrary::UnpossessCharacterAndHandleSpectating(class AController* Controller)
{
}
void UMordhauUtilityLibrary::TermAllChildBodiesOf(class USkeletalMeshComponent* USMC, const FName& BoneName)
{
}
void UMordhauUtilityLibrary::SetPawnFromRep(class AController* Contr, class APawn* NewPawn)
{
}
void UMordhauUtilityLibrary::SetNavAreaClass(class UShapeComponent* ShapeComponent, class UClass* AreaClass)
{
}
void UMordhauUtilityLibrary::SetMousePosition(class APlayerController* Controller, float LocationX, float LocationY)
{
}
void UMordhauUtilityLibrary::SetLocalSpaceKinematics(class USkeletalMeshComponent* Mesh, bool bNewValue)
{
}
void UMordhauUtilityLibrary::SetForceMipStreaming(class USkeletalMeshComponent* SMC, bool bValue)
{
}
void UMordhauUtilityLibrary::SetDecalFadeScreenSize(class UDecalComponent* Decal, float NewFadeScreenSize)
{
}
void UMordhauUtilityLibrary::SetCustomConfigVar_Vector2D(const FString& SectionName, const FString& VariableName, const struct FVector2D& Value)
{
}
void UMordhauUtilityLibrary::SetCustomConfigVar_Vector(const FString& SectionName, const FString& VariableName, const struct FVector& Value)
{
}
void UMordhauUtilityLibrary::SetCustomConfigVar_String(const FString& SectionName, const FString& VariableName, const FString& Value)
{
}
void UMordhauUtilityLibrary::SetCustomConfigVar_Rotator(const FString& SectionName, const FString& VariableName, const struct FRotator& Value)
{
}
void UMordhauUtilityLibrary::SetCustomConfigVar_Int(const FString& SectionName, const FString& VariableName, int Value)
{
}
void UMordhauUtilityLibrary::SetCustomConfigVar_Float(const FString& SectionName, const FString& VariableName, float Value)
{
}
void UMordhauUtilityLibrary::SetCustomConfigVar_Color(const FString& SectionName, const FString& VariableName, const struct FLinearColor& Value)
{
}
void UMordhauUtilityLibrary::SetCustomConfigVar_Bool(const FString& SectionName, const FString& VariableName, bool Value)
{
}
void UMordhauUtilityLibrary::SetCanEverAffectNavigation(class UActorComponent* ActorComponent, bool bRelevant)
{
}
void UMordhauUtilityLibrary::SendClientAdjustment(class UCharacterMovementComponent* CMC)
{
}
void UMordhauUtilityLibrary::ResetServerPredictionData(class UCharacterMovementComponent* CMC)
{
}
void UMordhauUtilityLibrary::ResetClientPredictionData(class UCharacterMovementComponent* CMC)
{
}
void UMordhauUtilityLibrary::ReserveCharacterRagdoll(class AAdvancedCharacter* Character)
{
}
void UMordhauUtilityLibrary::OpenURL(const FString& URL)
{
}
void UMordhauUtilityLibrary::GetSoundMixInfo(const FString& Name, struct FSoundMixInfo SoundMixInfo)
{
}
void UMordhauUtilityLibrary::GetRandomSkin(class AMordhauEquipment* Equipment, EItemRarity MaxRarity, int& ID, struct FEquipmentSkinEntry& Skin)
{
}
void UMordhauUtilityLibrary::FSmoothDamp(float Target, float SmoothTime, float DeltaTime, float MaxSpeed, float Current, float CurrentVelocity)
{
}
bool UMordhauUtilityLibrary::PlaneTrace(const struct FVector& Left, const struct FVector& Right, const struct FVector& Forward, const struct FVector& Back, const struct FVector& TraceAmount, TArray<TEnumAsByte<EObjectTypeQuery>> ObjectTypes, bool bTraceComplex, TArray<class AActor*> ActorsToIgnore, bool bConnectLeftRight, bool bConnectForwardBack, const struct FVector& ConnectOffset, bool bIgnoreSelf, struct FHitResult& LeftHit, struct FHitResult& RightHit, struct FHitResult& ForwardHit, struct FHitResult& BackHit, struct FVector& OutRight, struct FVector& OutForward)//class UObject* WorldContextObject,
{
	return 1;
}

struct FVector2D UMordhauUtilityLibrary::GetMousePosition(class APlayerController* Controller)
{
return {1,1};
}
struct FVector2D UMordhauUtilityLibrary::GetCustomConfigVar_Vector2D(const FString& SectionName, const FString& VariableName, bool IsValid)
{
return {1,1};
}
struct FVector UMordhauUtilityLibrary::GetCustomConfigVar_Vector(const FString& SectionName, const FString& VariableName, bool IsValid)
{
return {1,1,1};
}
struct FRotator UMordhauUtilityLibrary::GetCustomConfigVar_Rotator(const FString& SectionName, const FString& VariableName, bool IsValid)
{
return {1,1,1};
}
struct FVector UMordhauUtilityLibrary::GetComponentsBoundingBoxInActorSpace(class AActor* Actor)
{
return {1,1,1};
}
struct FVector UMordhauUtilityLibrary::GetCentroid(TArray<struct FVector> Points)
{
return {1,1,1};
}
struct FVector UMordhauUtilityLibrary::GetBoxCenter(const struct FBox& Box)
{
return {1,1,1};
}
struct FRotator UMordhauUtilityLibrary::FindBetween(const struct FVector& A, const struct FVector& B)
{
return {1,1,1};
}
struct FVector UMordhauUtilityLibrary::ClosestPointOnLine(const struct FVector& LineStart, const struct FVector& LineEnd, const struct FVector& Point)
{
return {1,1,1};
}
struct FVector UMordhauUtilityLibrary::GetRandomFaceCustomizationVector(float RandomExponent)
{
return {1,1,1};
}
void UMordhauUtilityLibrary::GetPhysicsBodyWorldTransform(class USkeletalMeshComponent* MeshComponent, const FName& BoneName, struct FTransform& transformPlacehldr)
{

}



FString UMordhauUtilityLibrary::GetEnumKey(const FString& EnumName, int EnumValue)
{
return "1";
}
FString UMordhauUtilityLibrary::SteamIDToString(const struct FSteamID& SteamID)
{
return "1";
}
FString UMordhauUtilityLibrary::GetVersionString()
{
return "1";
}
FString UMordhauUtilityLibrary::GetVersionName()
{
return "1";
}
FString UMordhauUtilityLibrary::GetSteamName(const struct FSteamID& SteamID)
{
return "1";
}
FName UMordhauUtilityLibrary::GetSculptableBoneAtLine(const struct FVector& LineStart, const struct FVector& LineEnd, float SearchRadius, class USkeletalMeshComponent* MeshComponent, class AMordhauCharacter* Character, int Level)
{
return "1";
}
FString UMordhauUtilityLibrary::GetMapName(class UObject* WorldContextObject)
{
return "1";
}
FText UMordhauUtilityLibrary::getErrorText(const FString& ErrorString)
{
return placeholder;
}
FString UMordhauUtilityLibrary::GetCustomConfigVar_String(const FString& SectionName, const FString& VariableName, bool IsValid)
{
return "1";
}
FString UMordhauUtilityLibrary::GetConsoleVariableString(const FString& VariableName)
{
return "1";
}
FText UMordhauUtilityLibrary::FormatText(const FText& Text)
{
return Text;
}
FString UMordhauUtilityLibrary::Capitalize(const FString& String)
{
return "1";
}





class AMordhauPlayerState* UMordhauUtilityLibrary::FindPlayerState(const FString& PlayerNameOrSteamID)
{
	return nullptr;
}
bool UMordhauUtilityLibrary::ValidateCharacterProfile(const struct FCharacterProfile& Profile)
{
return 1;
}
bool UMordhauUtilityLibrary::TryExecuteHeavydutyOperation(class UWorld* WorldObject)
{
return 1;
}
float UMordhauUtilityLibrary::Snap180AngleToSteps(float Angle180, float Step)
{
return 1;
}
bool UMordhauUtilityLibrary::SLessThan(const FString& StringA, const FString& StringB)
{
return 1;
}
bool UMordhauUtilityLibrary::SGreaterThan(const FString& StringA, const FString& StringB)
{
return 1;
}
int UMordhauUtilityLibrary::RandomRangeExclude(int Min, int Max, int Exclude)
{
return 1;
}
bool UMordhauUtilityLibrary::NotEqual_SteamID(const struct FSteamID& A, const struct FSteamID& B)
{
return 1;
}
bool UMordhauUtilityLibrary::IsValid_SteamID(const struct FSteamID& SteamID)
{
return 1;
}
bool UMordhauUtilityLibrary::IsTestingBranch()
{
return 1;
}
bool UMordhauUtilityLibrary::IsSteamFriend(class AMordhauPlayerState* Player)
{
return 1;
}
bool UMordhauUtilityLibrary::IsStandalone()
{
return 1;
}
bool UMordhauUtilityLibrary::IsServer()
{
return 1;
}
bool UMordhauUtilityLibrary::IsReleaseBranch()
{
return 1;
}
bool UMordhauUtilityLibrary::IsPlayInEditor()
{
return 1;
}
bool UMordhauUtilityLibrary::IsPartyMember(class AMordhauPlayerState* Player)
{
return 1;
}
bool UMordhauUtilityLibrary::IsOfficialServer()
{
return 1;
}
bool UMordhauUtilityLibrary::IsListenServer()
{
return 1;
}
bool UMordhauUtilityLibrary::IsFriendlyToLocalPlayer(class UWorld* WorldReference, class AActor* OtherActor)
{
return 1;
}
bool UMordhauUtilityLibrary::IsEditor()
{
return 1;
}
bool UMordhauUtilityLibrary::IsDLCInstalled(int appid)
{
return 1;
}
bool UMordhauUtilityLibrary::IsDevelopmentBuild()
{
return 1;
}
bool UMordhauUtilityLibrary::IsDevelopmentBranch()
{
return 1;
}
bool UMordhauUtilityLibrary::IsDemoPlayback(class UWorld* World)
{
return 1;
}
bool UMordhauUtilityLibrary::IsDedicatedServer()
{
return 1;
}
bool UMordhauUtilityLibrary::IsClient()
{
return 1;
}
bool UMordhauUtilityLibrary::HasBeenReallyRecentlyRendered(class UMeshComponent* MeshComponent)
{
return 1;
}
bool UMordhauUtilityLibrary::HasActorBegunPlay(class AActor* Actor)
{
return 1;
}
bool UMordhauUtilityLibrary::MordhauApplyRadialDamageWithFalloff(class UObject* WorldContextObject, float BaseDamage, float MinimumDamage, float BaseStructureDamage, float MinimumStructureDamage, const struct FVector& Origin, float DamageInnerRadius, float DamageOuterRadius, float DamageFalloff, TArray<class AActor*> IgnoreActors, float BaseKnockback, float MinimumKnockback, float RagdollFallRadius, class AActor* DamageCauser, class AController* InstigatedByController, TEnumAsByte<ECollisionChannel> DamagePreventionChannel, bool bIgnoreFriendly)
{
	return 1;
}

int UMordhauUtilityLibrary::GetXPFromRank(int Rank)
{
return 1;
}
float UMordhauUtilityLibrary::GetTotalDemoTime(class UWorld* World)
{
return 1;
}
float UMordhauUtilityLibrary::GetSyncGroupPositionBetweenMarkers(class UAnimInstance* AnimInstance, const FName& SyncGroup)
{
return 1;
}
bool UMordhauUtilityLibrary::GetSupportedScreenResolutions(TArray<FString> Resolutions)
{
return 1;
}
int UMordhauUtilityLibrary::GetRankFromXP(int XP)
{
return 1;
}
float UMordhauUtilityLibrary::GetPing(class UObject* WorldContextObject, bool bUseMedian)
{
return 1;
}
int UMordhauUtilityLibrary::GetPerksCost(const struct FCharacterProfile& Profile)
{
return 1;
}
int UMordhauUtilityLibrary::GetPerforceRevision()
{
return 1;
}
int UMordhauUtilityLibrary::GetPacketsLost(class UObject* WorldContextObject)
{
return 1;
}
bool UMordhauUtilityLibrary::GetNotifyServerReceivedClientData(class UCharacterMovementComponent* CMC)
{
return 1;
}
float UMordhauUtilityLibrary::GetNormalizedTime(float Start, float End, float Current)
{
return 1;
}
int UMordhauUtilityLibrary::GetMaxIndexWithDraw(TArray<int> inArray, bool& bFoundDraw)
{
return 1;
}
float UMordhauUtilityLibrary::GetLastReceiveTime(class UObject* WorldContextObject)
{
return 1;
}
bool UMordhauUtilityLibrary::GetIsPeasant(const struct FCharacterProfile& Profile)
{
return 1;
}
int UMordhauUtilityLibrary::GetFaceIndex(const struct FHitResult& Hit)
{
return 1;
}
int UMordhauUtilityLibrary::GetEnumValue(const FString& EnumName, const FString& EnumKey)
{
return 1;
}
int UMordhauUtilityLibrary::GetCustomConfigVar_Int(const FString& SectionName, const FString& VariableName, bool IsValid)
{
return 1;
}
float UMordhauUtilityLibrary::GetCustomConfigVar_Float(const FString& SectionName, const FString& VariableName, bool IsValid)
{
return 1;
}
bool UMordhauUtilityLibrary::GetCustomConfigVar_Bool(const FString& SectionName, const FString& VariableName, bool IsValid)
{
return 1;
}
int UMordhauUtilityLibrary::GetCurrentFrameBP(class UObject* WorldContextObject)
{
return 1;
}
int UMordhauUtilityLibrary::GetCurrentFrame(class UWorld* World)
{
return 1;
}
float UMordhauUtilityLibrary::GetCurrentDemoTime(class UWorld* World)
{
return 1;
}
int UMordhauUtilityLibrary::GetConsoleVariableInt(const FString& VariableName)
{
return 1;
}
float UMordhauUtilityLibrary::GetConsoleVariableFloat(const FString& VariableName)
{
return 1;
}
int UMordhauUtilityLibrary::GetBuildVersion()
{
return 1;
}
bool UMordhauUtilityLibrary::ForceValidCharacterProfile(const struct FCharacterProfile& Profile, struct FCharacterProfile ForceValidatedProfile)
{
return 1;
}
float UMordhauUtilityLibrary::FInterpToSeparate(float Current, float Target, float DeltaTime, float IncreaseSpeed, float DecreaseSpeed)
{
return 1;
}
float UMordhauUtilityLibrary::FInterpConstantToSeparate(float Current, float Target, float DeltaTime, float IncreaseSpeed, float DecreaseSpeed)
{
return 1;
}
bool UMordhauUtilityLibrary::FindTeleportSpot(class AActor* Actor, const struct FVector& InLocation, const struct FRotator& InRotation, struct FVector OutLocation)
{
return 1;
}
bool UMordhauUtilityLibrary::FindCircleIntersectionPoints(const struct FVector2D& CenterA, float RadiusA, const struct FVector2D& CenterB, float RadiusB, struct FVector2D PointA, struct FVector2D PointB)
{
return 1;
}
bool UMordhauUtilityLibrary::Equal_SteamID(const struct FSteamID& A, const struct FSteamID& B)
{
return 1;
}
int UMordhauUtilityLibrary::ComputePointsLeft(const struct FCharacterProfile& Profile)
{
return 1;
}
bool UMordhauUtilityLibrary::CompareGearCustomization(const struct FCharacterGearCustomization& First, const struct FCharacterGearCustomization& Second)
{
return 1;
}
bool UMordhauUtilityLibrary::CompareFaceCustomization(const struct FFaceCustomization& First, const struct FFaceCustomization& Second)
{
return 1;
}
bool UMordhauUtilityLibrary::CompareEquipmentCustomization(const struct FEquipmentCustomization& First, const struct FEquipmentCustomization& Second)
{
return 1;
}
bool UMordhauUtilityLibrary::CompareAppearanceCustomization(const struct FAppearanceCustomization& First, const struct FAppearanceCustomization& Second)
{
return 1;
}
int UMordhauUtilityLibrary::CalculateGCD(int ValueA, int ValueB)
{
return 1;
}
float UMordhauUtilityLibrary::CalculateAngle2D(const struct FVector& Direction, float Yaw)
{
return 1;
}
bool UMordhauUtilityLibrary::AreProfilesEqual(const struct FCharacterProfile& First, const struct FCharacterProfile& Second)
{
return 1;
}
bool UMordhauUtilityLibrary::AreActorsFromSameLevel(class AActor* ActorA, class AActor* ActorB)
{
return 1;
}



class AMordhauEquipment* UMordhauUtilityLibrary::GetRandomMeleeWeapon(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int ID)
{
	return nullptr;
}
class AMordhauEquipment* UMordhauUtilityLibrary::GetRandomRangedWeapon(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int ID)
{
	return nullptr;
}
EServerRegion UMordhauUtilityLibrary::GetRegion(const FString& RegionName)
{
	return serverReg;
}



class UMordhauWebAPI* UMordhauUtilityLibrary::GetMordhauWebAPI()
{
	return nullptr;
}

class UMordhauInput* UMordhauUtilityLibrary::GetMordhauInput()
{
	return nullptr;
}

class AMordhauGameSession* UMordhauUtilityLibrary::GetMordhauGameSession(class UObject* WorldContextObject)
{
	return nullptr;
}

class UMordhauSingleton* UMordhauUtilityLibrary::GetMordhauSingleton()
{
	return nullptr;
}

class UMordhauInventory* UMordhauUtilityLibrary::GetMordhauInventory()
	{
		return nullptr;}



class ULegsWearable* UMordhauUtilityLibrary::GetRandomLegsWearable(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int ID)
{
	return nullptr;
}
class UHeadWearable* UMordhauUtilityLibrary::GetRandomHeadWearable(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int ID)
{
	return nullptr;
}
class UMordhauWearable* UMordhauUtilityLibrary::GetRandomHandsWearable(class UArmsWearable* ArmsWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int ID)
{
	return nullptr;
}
class UMordhauWearable* UMordhauUtilityLibrary::GetRandomFeetWearable(class ULegsWearable* LegsWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int ID)
{
	return nullptr;
}

class UMordhauWearable* UMordhauUtilityLibrary::GetRandomCoifWearable(class UHeadWearable* HeadWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int ID)
{
	return nullptr;
}

class UArmsWearable* UMordhauUtilityLibrary::GetRandomArmsWearable(class UUpperChestWearable* UpperChestWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int ID)
{
	return nullptr;
}
class UMordhauWearable* UMordhauUtilityLibrary::GetRandomLowerChestWearable(class UUpperChestWearable* UpperChestWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int ID)
{
	return nullptr;
}
class UUpperChestWearable* UMordhauUtilityLibrary::GetRandomUpperChestWearable(const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int ID)
{
	return nullptr;
}
class UMordhauWearable* UMordhauUtilityLibrary::GetRandomShouldersWearable(class UUpperChestWearable* UpperChestWearable, const struct FSkillsCustomization& SkillsCustomization, EItemRarity MaxRarity, int ID)
{
	return nullptr;
}

struct FBox UMordhauUtilityLibrary::GrowBoxToIncludePoint(const struct FBox& Box, const struct FVector& Vector)
		{
			return ReturnBox; 
		}

		//struct FPOV LerpPOV(const struct FPOV& A, const struct FPOV& B, float Alpha)
		//{
		//	return B;
		//	}
class UArchetype* UMordhauUtilityLibrary::GetArchetypeObject(const struct FCharacterProfile& Profile)
{
	return nullptr;
}
