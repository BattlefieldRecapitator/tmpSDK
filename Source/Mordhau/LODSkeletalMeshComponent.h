#pragma once

#include "CoreMinimal.h"
#include "Components/SkeletalMeshComponent.h"
#include "LODSkeletalMeshComponent.generated.h"

UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class ULODSkeletalMeshComponent : public USkeletalMeshComponent
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float LODDeltaTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float LastLODDeltaTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bHasSkippedThisFrame;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int FramesSinceLastLODTick;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int FramesUntilNextLODTick;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MaxLODDeltaTime;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bSmoothClothLODTransition;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float ClothLODTransitionSpeed;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bSkipTransformUpdate;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bPreventTicking;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bUpdateLODIfPreventTicking;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bForceNextTick;


};