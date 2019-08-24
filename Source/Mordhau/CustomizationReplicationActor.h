// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CustomizationReplicationActor.generated.h"

UCLASS()
class MORDHAU_API ACustomizationReplicationActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	//UPROPERTY(EditAnywhere, BlueprintReadWrite)
	//struct FCharacterProfile                           LastAssignedProfile;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TArray<class AMordhauCharacter*>    RegisteredCharacters;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool                                               bHasAnything;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
bool                                               bWasEverAssigned;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
bool                                               bWillDestroyOnUnregister;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
class USkeletalMesh*                               Cached1PMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
class USkeletalMesh*                               Cached1PDeadMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
class USkeletalMesh*                               CachedUnifiedMesh;
//struct FRepArrayShortWithVersion                    FaceBonesTranslate;
//struct FRepArrayShortWithVersion                    FaceBonesRotate;
//struct FRepArrayShortWithVersion                    FaceBonesScale;
//struct FRepArrayAppearanceWithVersion               AppearanceCustomization;
//struct FRepArraySkillsWithVersion                   SkillsCustomization;
//struct FRepArrayByteWithVersion                     DefaultEquipmentId;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
TArray<class UClass*>                              DefaultEquipment;
//struct FRepArrayByteWithVersion                     WearableId;
//struct FRepArrayByteWithVersion                     WearableColor1;
//struct FRepArrayByteWithVersion                     WearableColor2;
//struct FRepArrayByteWithVersion                     WearablePattern;

UFUNCTION(BlueprintCallable, Category = "CustomizationRepFns")
void UpdateCharacterProfile(class AMordhauCharacter* Character);
UFUNCTION(BlueprintCallable, Category = "CustomizationRepFns")
void UnregisterCharacter(class AMordhauCharacter* Character);
UFUNCTION(BlueprintCallable, Category = "CustomizationRepFns")
void TriggerUpdateIfUpToDate();
UFUNCTION(BlueprintCallable, Category = "CustomizationRepFns")
void RegisterCharacter(class AMordhauCharacter* Character);
UFUNCTION(BlueprintNativeEvent, Category = "CustomizationRepFns")
void OnRep_WearablePattern();
UFUNCTION(BlueprintNativeEvent, Category = "CustomizationRepFns")
void OnRep_WearableId();
UFUNCTION(BlueprintNativeEvent, Category = "CustomizationRepFns")
void OnRep_WearableColor2();
UFUNCTION(BlueprintNativeEvent, Category = "CustomizationRepFns")
void OnRep_WearableColor1();
UFUNCTION(BlueprintNativeEvent, Category = "CustomizationRepFns")
void OnRep_SkillsCustomization();
UFUNCTION(BlueprintNativeEvent, Category = "CustomizationRepFns")
void OnRep_FaceBonesTranslate();
UFUNCTION(BlueprintNativeEvent, Category = "CustomizationRepFns")
void OnRep_FaceBonesScale();
UFUNCTION(BlueprintNativeEvent, Category = "CustomizationRepFns")
void OnRep_FaceBonesRotate();
UFUNCTION(BlueprintNativeEvent, Category = "CustomizationRepFns")
void OnRep_DefaultEquipmentId();
UFUNCTION(BlueprintNativeEvent, Category = "CustomizationRepFns")
void OnRep_AppearanceCustomization();
UFUNCTION(BlueprintCallable, Category = "CustomizationRepFns")
bool IsUpToDate();
//UFUNCTION(BlueprintCallable, Category = "CustomizationRepFns")
//void AssignDataFromProfile(const struct FCharacterProfile& Profile);
};