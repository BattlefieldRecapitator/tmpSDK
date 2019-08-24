// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine.h"
#include "MordhauActor.generated.h"

UCLASS()
class MORDHAU_API AMordhauActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
//	TWeakObjectPtr<class AMordhauPlayerController>     InstanceOwner;
//	unsigned char                                       Thud;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class USoundCue*                                   ThudSound;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   ThudPitchMultiplierRange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector2D                                   ThudVolumeMultiplierRange;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bShouldReplicateThud;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              ThudMinVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              ThudMaxVelocity;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              MinDelayBetweenThuds;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              NoThudUntilTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bPreventClimbing;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//struct FStatInt                                    KillsStat;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bIgnoresBleedOut;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bForceLongDeathYell;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bReceiveCosmeticHits;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              RagdollForceMultiplier;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bForceRagdollOnDeath;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              ReplayPriorityFactor;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FVector                                     LastClientsideLocation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FQuat                                       LastClientsideRotation;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              InterpolationSmoothTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bSmoothNetworkMovement;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass*                                      InteractionWidgetComponentClass;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UClass*                                      InteractionWidgetClass;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//struct FText                                       HeldInteractionText;
	//UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	//struct FText                                       InteractionText;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bNoInteractionWidgetWhenAttachedToChar;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	struct FTransform                                  InteractionWidgetRelativeTransform;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bAutoDetermineWidgetTransform;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	class UMordhauWidgetComponent*                     InteractionWidgetComponent;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bPerformCustomDepthHighlight;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bIsHighlighted;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              MaxInteractWithDistance;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bIsInteractable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	bool                                               bIsPassivelyInteractable;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              MaxInteractionHoldTime;
	UPROPERTY(Replicated, EditAnywhere, BlueprintReadWrite)
	float                                              LastLocallyRequestedPassiveInteractionTime;

	UFUNCTION(BlueprintCallable, Category = "MordhauActorFns")
	void UpdateThudVelocity(float NewThudVelocity);
	UFUNCTION(BlueprintCallable, Category = "MordhauActorFns")
	void UnHighlight();
	UFUNCTION(BlueprintCallable, Category = "MordhauActorFns")
	void PostInteractionWidgetCreated();

	//void OnUsedToKillOther(class AAdvancedCharacter* Character, EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source);
	UFUNCTION(BlueprintNativeEvent, Category = "MordhauActorFns")
	void OnThud();

	//void OnReceiveCosmeticHit(class AActor* Source, class AActor* Agent, EAttackMove Move, const struct FHitResult& Hit);

	//void OnPostDismemberedOther(const struct FName& bone, class ASeparatedBodyPart* Part);

	//void OnLocalPlayerUsedToKillOther(class AAdvancedCharacter* Character, EMordhauDamageType Type, unsigned char SubType, const struct FName& bone, const struct FVector& Point, class AActor* Source);
	UFUNCTION(BlueprintNativeEvent)//, Category = "MordhauActorFns")
	void OnInteractPassively(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintNativeEvent)//, Category = "MordhauActorFns")
	void OnInteractionStart(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintNativeEvent)//, Category = "MordhauActorFns")
	void OnInteractionEnd();
	UFUNCTION(BlueprintNativeEvent)//, Category = "MordhauActorFns")
	void OnHighlightStart();
	UFUNCTION(BlueprintNativeEvent)//, Category = "MordhauActorFns")
	void OnHighlightEnd();
	UFUNCTION(BlueprintNativeEvent)//, Category = "MordhauActorFns")
	void OnHeldInteractionStart(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauActorFns")
	bool IsAnyInstanceOwner(TArray<class AMordhauPlayerController*> ControllerArray);
	UFUNCTION(BlueprintCallable, Category = "MordhauActorFns")
	void InteractPassively(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauActorFns")
	void InteractionStart(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauActorFns")
	void InteractionEnd();
	UFUNCTION(BlueprintCallable, Category = "MordhauActorFns")
	void Highlight();
	UFUNCTION(BlueprintCallable, Category = "MordhauActorFns")
	void HeldInteractionStart(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauActorFns")
	bool CanInteractPassively(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauActorFns")
	bool CanInteract(class AMordhauCharacter* Character);
	UFUNCTION(BlueprintCallable, Category = "MordhauActorFns")
	bool CanHeldInteract(class AMordhauCharacter* Character);
	
	
};
