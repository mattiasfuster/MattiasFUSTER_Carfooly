#include "Walls/BrickWall.h"
#include "GeometryCollection/GeometryCollectionComponent.h"

ABrickWall::ABrickWall()
{
	PrimaryActorTick.bCanEverTick = true;

	GeometryCollectionComponent = CreateDefaultSubobject<UGeometryCollectionComponent>(TEXT("GeometryCollectionComponent"));
	RootComponent = GeometryCollectionComponent;
}

void ABrickWall::BreakWall(AActor* InstigatorActor, FVector ImpactPoint)
{

}

void ABrickWall::BeginPlay()
{
	Super::BeginPlay();

	
}

