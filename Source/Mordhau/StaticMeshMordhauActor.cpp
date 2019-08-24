// Fill out your copyright notice in the Description page of Project Settings.

#include "StaticMeshMordhauActor.h"
#include "MordhauActor.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
AStaticMeshMordhauActor::AStaticMeshMordhauActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	StaticMeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StaticMeshComponent"));
	StaticMeshComponent->AttachTo(RootComponent);

	

}

// Called when the game starts or when spawned
void AStaticMeshMordhauActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AStaticMeshMordhauActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

