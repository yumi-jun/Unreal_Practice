// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Finder.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MYPROJECT_API UFinder : public USceneComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UFinder();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	UFUNCTION(BlueprintCallable)
	void Find();
	
	UFUNCTION(BlueprintCallable,Category=LevelBluePrint)
	bool Find_People();

	UFUNCTION(BlueprintCallable,Category=LevelBluePrint)
	bool Find_Car();

	UFUNCTION(BlueprintCallable,Category=LevelBluePrint)
	bool Find_Coffee();
	
	bool t1;
	bool t2;
	bool t3;
	
	FString FindSomeOne;


	FString FindCar;
	
	FString FindCoffee;
};
