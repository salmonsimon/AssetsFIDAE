// Fill out your copyright notice in the Description page of Project Settings.

#include "RBSubsystemBase.h"

void URBSubsystemBase::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);

    // Delegas la lógica real al evento BP del hijo
    InitSubsystem();
}

void URBSubsystemBase::Deinitialize()
{
    // Aquí podrías hacer limpieza en C++ si algún día la necesitas

    Super::Deinitialize();
}