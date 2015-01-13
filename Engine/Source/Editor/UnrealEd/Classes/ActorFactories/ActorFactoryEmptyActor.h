// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.


#pragma once
#include "ActorFactoryEmptyActor.generated.h"

UCLASS(MinimalAPI,config=Editor)
class UActorFactoryEmptyActor : public UActorFactory
{
	GENERATED_UCLASS_BODY()

public:
	virtual bool CanCreateActorFrom( const FAssetData& AssetData, FText& OutErrorMsg ) override;

protected:
	virtual AActor* SpawnActor( UObject* Asset, ULevel* InLevel, const FVector& Location, const FRotator& Rotation, EObjectFlags ObjectFlags, const FName& Name ) override;
	void SetupEditorOnlyBillboardComponent(class UBillboardComponent* BillboardComponent);
	void OnBlueprintActorPreSpawned(class USimpleConstructionScript* SimpleConstructionScript);
private:
	AActor* SpawnActorForDragPreview( UObject* Asset, ULevel* InLevel, const FVector& Location, const FRotator& Rotation, EObjectFlags ObjectFlags, const FName& Name );

};
