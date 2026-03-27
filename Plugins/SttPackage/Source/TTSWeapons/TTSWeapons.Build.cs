// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

// Reglas de compilacion del modulo TTSWeapons.
// Este archivo define:
// - modo de PCH
// - include paths publicos/privados
// - dependencias de modulo publicas/privadas
// - modulos de carga dinamica (si existieran)
public class TTSWeapons : ModuleRules
{
	public TTSWeapons(ReadOnlyTargetRules Target) : base(Target)
	{
		// Configuracion recomendada de Unreal para optimizar tiempos de compilacion.
		PrecompileForTargets = PrecompileTargetsType.Any;
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		// Include paths visibles para otros modulos que dependan de TTSWeapons.
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		// Include paths internos del modulo (no expuestos hacia afuera).
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
			}
			);
			
		
		// Dependencias publicas:
		// modulos que forman parte de la API visible de TTSWeapons.
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"CoreUObject",
				"Engine",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		// Dependencias privadas:
		// modulos usados internamente por implementaciones .cpp.
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		// Modulos cargados en runtime de forma dinamica (actualmente ninguno).
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
	}
}
