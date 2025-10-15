// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "RotatorComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class ESCAPEPROTO_API URotatorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	URotatorComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UPROPERTY(EditAnywhere)
	FRotator TargetRotationAngle = FRotator(0.0f, 60.0f, 0.0f);

	UPROPERTY(EditAnywhere)
	float RotationInterpSpeed = 30.0f;

	

	UPROPERTY(VisibleAnywhere)
	bool ReachedTarget = false;

	FRotator TargetRotation;
	FRotator StartRotation;

	bool GetShouldMove();
	void SetShouldMove(bool NewShouldMove);

private:

	UPROPERTY(VisibleAnywhere)
	bool ShouldMove = false;
};
