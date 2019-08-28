// Fill out your copyright notice in the Description page of Project Settings.

#include "MordhauVehicle.h"


void AMordhauVehicle::UpdateFPCameraFor_Implementation(class AMordhauCharacter* Character, float DeltaSeconds, bool bRotationOnly)
{

}
//void AMordhauVehicle::UpdateAnimationFor_Implementation(class AMordhauCharacter* Character, class UMordhauAnimInstance* AnimInst, float DeltaTime)
//{}
void AMordhauVehicle::KnockOffDriver_Implementation(class AMordhauCharacter* Character)
{

}
void AMordhauVehicle::GetVehicleLeaveInfo_Implementation(class AMordhauCharacter* Character, const struct FTransform& FromTransform, struct FVehicleTransitionInfo& tmpVar)
{

}
void AMordhauVehicle::GetVehicleEnterInfo_Implementation(class AMordhauCharacter* Character, const struct FTransform& FromTransform, struct FVehicleTransitionInfo& tmpVar)
{

}
void AMordhauVehicle::GetExitTransform_Implementation(struct FTransform& exitTrans)
{

}
void AMordhauVehicle::DriverLateTick_Implementation(class AMordhauCharacter* FromDriver, float DeltaTime)
{

}
bool AMordhauVehicle::CanDrive_Implementation(class AMordhauCharacter* Character)
{
	return 1;
}
void AMordhauVehicle::RequestUse_Implementation()
{

}
void AMordhauVehicle::PostProcessCameraPOV_Implementation(const struct FPOV& InPOV)
{

}
float AMordhauVehicle::OverrideAttackAngle_Implementation(class UAttackMotion* Motion)
{
	return 1;
}
void AMordhauVehicle::OnStoppedDriving_Implementation(class AMordhauCharacter* Character)
{

}
void AMordhauVehicle::OnStartedDriving_Implementation(class AMordhauCharacter* Character)
{

}
void AMordhauVehicle::SetDriver_Implementation(class AMordhauCharacter* NewDriver)
{

}


void AMordhauVehicle::StopDriving()
{}
void AMordhauVehicle::StartDriving(class AMordhauCharacter* Character)
{}
void AMordhauVehicle::ServerSecondaryTurn(float NewTurn)
{}
void AMordhauVehicle::SecondaryTurnAtRate(float Value)
{}
void AMordhauVehicle::SecondaryTurn(float Value, bool bIsAbsolute)
{}
void AMordhauVehicle::OnRep_SecondaryTurnValue()
{}
