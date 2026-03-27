#pragma once

#include "CoreMinimal.h"
#include "Timer/TimerCheckpointTypes_stt.h"
#include "UObject/Interface.h"
#include "BPI_TimerCheckpoint_stt.generated.h"

// Interface Blueprint para rescatar checkpoints de tiempo sin hard cast.
UINTERFACE(BlueprintType)
class TTSWEAPONS_API UBPI_TimerCheckpoint_stt : public UInterface
{
	GENERATED_BODY()
};

class TTSWEAPONS_API IBPI_TimerCheckpoint_stt
{
	GENERATED_BODY()

public:
	// BPI Get Timer Checkpoint:
	// - Traduccion: obtener checkpoint del timer.
	// - Uso: devuelve un snapshot del tiempo actual sin emitir dispatchers.
	// - Inputs: no recibe parametros.
	// - Output: retorna un FTimerCheckpointSnapshot_stt con tiempo, estado y
	//   contexto generico del timer.
	// - Secuencia: puede llamarse en cualquier estado, incluso Idle, Stopped o
	//   Finished. Es el nodo recomendado cuando solo quieres leer el tiempo.
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Timer|BPI", meta = (ToolTip = "Get Timer Checkpoint: obtener snapshot actual del timer."))
	FTimerCheckpointSnapshot_stt BPI_GetTimerCheckpoint_stt() const;

	// BPI Capture Timer Checkpoint:
	// - Traduccion: capturar checkpoint del timer.
	// - Uso: genera un snapshot nombrado del tiempo actual y permite que la clase
	//   concreta emita su dispatcher local de checkpoint.
	// - Inputs: CheckpointTag identifica el evento o hito que quieres registrar.
	// - Output: retorna un FTimerCheckpointSnapshot_stt listo para guardar en logs
	//   o estructuras propias de gameplay.
	// - Secuencia: puede llamarse en cualquier estado. Usalo cuando ademas de
	//   leer el tiempo quieres dejar una marca de evento.
	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Timer|BPI", meta = (ToolTip = "Capture Timer Checkpoint: capturar y publicar un checkpoint del timer."))
	FTimerCheckpointSnapshot_stt BPI_CaptureTimerCheckpoint_stt(const FString& CheckpointTag);
};
