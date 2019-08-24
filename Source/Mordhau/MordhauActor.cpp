// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauActor.h"
#include "UnrealNetwork.h"

// Sets default values
void AMordhauActor::GetLifetimeReplicatedProps(TArray< FLifetimeProperty > & OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	DOREPLIFETIME(AMordhauActor, bShouldReplicateThud)
	DOREPLIFETIME(AMordhauActor, ThudMinVelocity)
	DOREPLIFETIME(AMordhauActor, ThudMaxVelocity)
	DOREPLIFETIME(AMordhauActor, MinDelayBetweenThuds)
	DOREPLIFETIME(AMordhauActor, NoThudUntilTime)
	DOREPLIFETIME(AMordhauActor, bPreventClimbing)
	DOREPLIFETIME(AMordhauActor, bIgnoresBleedOut)
	DOREPLIFETIME(AMordhauActor, bForceLongDeathYell)
	DOREPLIFETIME(AMordhauActor, bReceiveCosmeticHits)
	DOREPLIFETIME(AMordhauActor, RagdollForceMultiplier)
	DOREPLIFETIME(AMordhauActor, bForceRagdollOnDeath)
	DOREPLIFETIME(AMordhauActor, ReplayPriorityFactor)
	DOREPLIFETIME(AMordhauActor, InterpolationSmoothTime)
	DOREPLIFETIME(AMordhauActor, bSmoothNetworkMovement)
	DOREPLIFETIME(AMordhauActor, bNoInteractionWidgetWhenAttachedToChar)
	DOREPLIFETIME(AMordhauActor, bAutoDetermineWidgetTransform)
	DOREPLIFETIME(AMordhauActor, bPerformCustomDepthHighlight)
	DOREPLIFETIME(AMordhauActor, bIsHighlighted)
	DOREPLIFETIME(AMordhauActor, MaxInteractWithDistance)
	DOREPLIFETIME(AMordhauActor, bIsInteractable)
	DOREPLIFETIME(AMordhauActor, bIsPassivelyInteractable)
	DOREPLIFETIME(AMordhauActor, MaxInteractionHoldTime)
	DOREPLIFETIME(AMordhauActor, LastLocallyRequestedPassiveInteractionTime)


}

void AMordhauActor::UpdateThudVelocity(float NewThudVelocity)
{}
void AMordhauActor::UnHighlight()
{}
void AMordhauActor::PostInteractionWidgetCreated()
{}
bool AMordhauActor::IsAnyInstanceOwner(TArray<class AMordhauPlayerController*> ControllerArray)
{
	return 1;
}
void AMordhauActor::InteractPassively(class AMordhauCharacter* Character)
{}
void AMordhauActor::InteractionStart(class AMordhauCharacter* Character)
{}
void AMordhauActor::InteractionEnd()
{}
void AMordhauActor::Highlight()
{}
void AMordhauActor::HeldInteractionStart(class AMordhauCharacter* Character)
{}
bool AMordhauActor::CanInteractPassively(class AMordhauCharacter* Character)
{
	return 1;
}
bool AMordhauActor::CanInteract(class AMordhauCharacter* Character)
{
	return 1;
}
bool AMordhauActor::CanHeldInteract(class AMordhauCharacter* Character)
{
	return 1;
}

void AMordhauActor::OnThud_Implementation()
{

}

void AMordhauActor::OnInteractPassively_Implementation(class AMordhauCharacter* Character)
{

}
void AMordhauActor::OnInteractionStart_Implementation(class AMordhauCharacter* Character)
{

}
void AMordhauActor::OnInteractionEnd_Implementation()
{

}
void AMordhauActor::OnHighlightStart_Implementation()
{

}
void AMordhauActor::OnHighlightEnd_Implementation()
{

}
void AMordhauActor::OnHeldInteractionStart_Implementation(class AMordhauCharacter* Character)
{

}
