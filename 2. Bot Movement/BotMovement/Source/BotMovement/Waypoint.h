// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/BoxComponent.h"
#include "Waypoint.generated.h"

UCLASS()
class BOTMOVEMENT_API AWaypoint : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AWaypoint();

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	USceneComponent* Root;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite)
	UBoxComponent* BoxComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	AWaypoint* NextWaypoint;


protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION()
	void OnPlayerEnter(UPrimitiveComponent* OverlapComponent,
					   AActor* OtherActor,
					   UPrimitiveComponent* OtherComponent, 
					   int32 OtherBodyIndex, 
		               bool bFromSweep, 
					   const FHitResult &SweepResult);

	
	
};
