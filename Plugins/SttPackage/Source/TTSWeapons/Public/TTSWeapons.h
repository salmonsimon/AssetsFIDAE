// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

// Modulo principal del plugin TTSWeapons.
// Unreal crea una instancia de esta clase al cargar el modulo y la destruye al descargarlo.
// Aqui se concentran inicializaciones globales de C++ que no pertenecen a un Actor en particular.
class FTTSWeaponsModule : public IModuleInterface
{
public:

	// Se ejecuta cuando el modulo entra en memoria.
	// Ideal para registrar subsistemas, tipos, hooks o assets globales.
	virtual void StartupModule() override;

	// Se ejecuta cuando el modulo se descarga.
	// Ideal para desregistrar recursos y limpiar estado global.
	virtual void ShutdownModule() override;
};
