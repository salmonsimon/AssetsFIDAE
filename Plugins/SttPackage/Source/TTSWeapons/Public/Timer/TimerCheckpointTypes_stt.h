#pragma once

#include "CoreMinimal.h"
#include "TimerCheckpointTypes_stt.generated.h"

// Tipo de snapshot expuesto por el sistema de checkpoint.
// Se usa para distinguir si el tiempo capturado representa:
// - tiempo restante de un countdown
// - tiempo acumulado de un countup
UENUM(BlueprintType)
enum class ETimerCheckpointKind_stt : uint8
{
	CountdownRemaining UMETA(DisplayName = "Countdown Remaining"),
	CountupElapsed UMETA(DisplayName = "Countup Elapsed")
};

// Estado generico del timer al momento de capturar el checkpoint.
// Se separa del enum interno de cada actor para poder usar una sola struct
// compartida entre countdown, countup y la BPI.
UENUM(BlueprintType)
enum class ETimerCheckpointState_stt : uint8
{
	Idle UMETA(DisplayName = "Idle"),
	Running UMETA(DisplayName = "Running"),
	Paused UMETA(DisplayName = "Paused"),
	Stopped UMETA(DisplayName = "Stopped"),
	Finished UMETA(DisplayName = "Finished")
};

// Snapshot comun para countup y countdown.
// Se puede guardar en arrays, pasar por dispatchers o recuperar por BPI.
USTRUCT(BlueprintType)
struct TTSWEAPONS_API FTimerCheckpointSnapshot_stt
{
	GENERATED_BODY()

	// Etiqueta opcional entregada por el sistema que solicita el checkpoint.
	// Sirve para guardar contexto del evento: por ejemplo "Impacto", "Kill_01"
	// o "Seccion_A".
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Timer|Checkpoint", meta = (ToolTip = "Checkpoint Tag: etiqueta del checkpoint."))
	FString CheckpointTag;

	// Indica si el snapshot viene de un countdown o de un countup.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Timer|Checkpoint", meta = (ToolTip = "Timer Kind: tipo de tiempo capturado."))
	ETimerCheckpointKind_stt TimerKind = ETimerCheckpointKind_stt::CountdownRemaining;

	// Estado del actor en el momento exacto de captura.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Timer|Checkpoint", meta = (ToolTip = "Timer State: estado del timer al capturar."))
	ETimerCheckpointState_stt TimerState = ETimerCheckpointState_stt::Idle;

	// Tiempo separado en partes para Blueprint/UMG.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Timer|Checkpoint", meta = (ToolTip = "Minutes: minutos del tiempo capturado."))
	int32 Minutes = 0;

	// Tiempo separado en partes para Blueprint/UMG.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Timer|Checkpoint", meta = (ToolTip = "Seconds: segundos del tiempo capturado."))
	int32 Seconds = 0;

	// Tiempo separado en partes para Blueprint/UMG.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Timer|Checkpoint", meta = (ToolTip = "Milliseconds: milisegundos del tiempo capturado."))
	int32 Milliseconds = 0;

	// Tiempo total en ms al momento de captura.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Timer|Checkpoint", meta = (ToolTip = "Total Milliseconds: tiempo total en milisegundos."))
	int64 TotalMilliseconds = 0;

	// Segundo entero al que pertenece el snapshot.
	// Es util para logs del tipo "en el segundo X paso esto".
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Timer|Checkpoint", meta = (ToolTip = "Whole Seconds: segundo entero del checkpoint."))
	int32 WholeSeconds = 0;

	// Formato listo para debugging o HUD.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Timer|Checkpoint", meta = (ToolTip = "Formatted Time: tiempo formateado del checkpoint."))
	FString FormattedTime;
};
