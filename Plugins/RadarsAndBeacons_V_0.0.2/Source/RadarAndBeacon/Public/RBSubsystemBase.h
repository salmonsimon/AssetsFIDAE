// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "RBSubsystemBase.generated.h"

UCLASS(Abstract, BlueprintType, Blueprintable)
class RADARANDBEACON_API URBSubsystemBase : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:

    // Se llama cuando el subsistema se crea
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;

    // Se llama cuando el subsistema se destruye (opcional, pero útil tenerlo)
    virtual void Deinitialize() override;

    // Evento que IMPLEMENTARÁS en el hijo Blueprint
    UFUNCTION(BlueprintImplementableEvent, Category = "RBSubsystemBase")
    void InitSubsystem();
};