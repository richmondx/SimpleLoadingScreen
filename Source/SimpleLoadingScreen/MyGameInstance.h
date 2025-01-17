// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "MyGameInstance.generated.h"

class FSimpleLoadingScreenSystem;
/**
 * 
 */
UCLASS()
class /*SIMPLELOADINGSCREEN_API*/ UMyGameInstance : public UGameInstance
{

	GENERATED_BODY()
	virtual void Init() override;
	virtual void Shutdown() override;
public:
	TSharedPtr<FSimpleLoadingScreenSystem> SimpleLoadingScreenSystem;
};
