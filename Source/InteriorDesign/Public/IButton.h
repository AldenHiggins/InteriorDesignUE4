// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Object.h"
#include "IButton.generated.h"

UINTERFACE(meta = (CannotImplementInterfaceInBlueprint))
class UIButton : public UInterface
{
	GENERATED_UINTERFACE_BODY()
};


class IIButton
{
	GENERATED_IINTERFACE_BODY()

	UFUNCTION(BlueprintCallable, Category = "Button Interface")
	virtual void hoverAction();

	UFUNCTION(BlueprintCallable, Category = "Button Interface")
	virtual void releaseAction();

	UFUNCTION(BlueprintCallable, Category = "Button Interface")
	virtual void pressAction();
};
