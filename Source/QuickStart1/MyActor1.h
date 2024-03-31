// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MyActor1.generated.h"

UCLASS()
class QUICKSTART1_API AMyActor1 : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AMyActor1();
    
    UPROPERTY(VisibleAnywhere);
    UStaticMeshComponent* VisualMesh;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyActor1");
    float FloatSpeed = 20.0f;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyActor1");
    float RotationSpeed = 20.0f;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "MyActor1");
    float ScaleSize = 0.05f;
    
    
    
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
    
private:
    void ScaleActor();
    

};
