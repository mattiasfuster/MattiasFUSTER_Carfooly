#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BrickWall.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnWallBroken, AActor*, Instigator, FVector, ImpactPoint);

UCLASS()
class MATTIASFUSTER_API ABrickWall : public AActor
{
	GENERATED_BODY()
	
public:	
	ABrickWall();

	UFUNCTION(BlueprintCallable, Category = "Wall")
	void BreakWall(AActor* InstigatorActor, FVector ImpactPoint);

	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnWallBroken OnWallBroken;

protected:
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TObjectPtr<UGeometryCollectionComponent> GeometryCollectionComponent;
};
