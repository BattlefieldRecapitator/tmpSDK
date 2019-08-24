// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MordhauActor.h"
#include "StaticMeshMordhauActor.generated.h"

UCLASS()
class MORDHAU_API AStaticMeshMordhauActor : public AMordhauActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AStaticMeshMordhauActor();

	UPROPERTY(EditAnyWhere, BlueprintReadWrite)
	  UStaticMeshComponent* StaticMeshComponent;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
