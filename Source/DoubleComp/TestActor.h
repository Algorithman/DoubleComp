// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TestComponent.h"
#include "TestActor.generated.h"

UCLASS()
class DOUBLECOMP_API ATestActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ATestActor();
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float ActorFloat = 333.4f;
	UPROPERTY(Instanced, VisibleAnywhere)
		UTestComponent* Comp1X;
	UPROPERTY(Instanced, VisibleAnywhere)
		UTestComponent* Comp2X;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
