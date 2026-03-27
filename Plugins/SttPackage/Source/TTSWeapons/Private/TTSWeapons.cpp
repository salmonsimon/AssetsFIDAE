// Copyright Epic Games, Inc. All Rights Reserved.

#include "TTSWeapons.h"

#define LOCTEXT_NAMESPACE "FTTSWeaponsModule"

void FTTSWeaponsModule::StartupModule()
{
	// Punto de entrada del modulo.
	// En este plugin actualmente no hay inicializacion global obligatoria.
	// Si en el futuro se agregan registros de sistemas o binds globales,
	// este es el lugar correcto para hacerlo.
}

void FTTSWeaponsModule::ShutdownModule()
{
	// Punto de salida del modulo.
	// Se invoca durante cierre del editor/juego o recarga en caliente.
	// Aqui deberia limpiarse cualquier recurso global registrado en StartupModule().
}

#undef LOCTEXT_NAMESPACE
	
// Macro que registra la clase de modulo en el sistema de modulos de Unreal.
// Sin esta linea, Unreal no puede cargar FTTSWeaponsModule.
IMPLEMENT_MODULE(FTTSWeaponsModule, TTSWeapons)
