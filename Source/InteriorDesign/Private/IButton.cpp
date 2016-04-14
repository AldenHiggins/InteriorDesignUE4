// Fill out your copyright notice in the Description page of Project Settings.

#include "InteriorDesign.h"
#include "IButton.h"


UIButton::UIButton(const class FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer)
{ }

void IIButton::hoverAction()
{
	UE_LOG(LogTemp, Warning, TEXT("Called base button hover action, probably a bug."));
}

void IIButton::releaseAction()
{
	UE_LOG(LogTemp, Warning, TEXT("Called base release action, probably a bug."));
}

void IIButton::pressAction()
{
	UE_LOG(LogTemp, Warning, TEXT("Called base press action, probably a bug."));
}
