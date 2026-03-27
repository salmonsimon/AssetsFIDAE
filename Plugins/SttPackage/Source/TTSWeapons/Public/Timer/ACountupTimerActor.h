#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Timer/TimerCheckpointTypes_stt.h"
#include "Timer/BPI/BPI_TimerCheckpoint_stt.h"
#include "ACountupTimerActor.generated.h"

// Estado de alto nivel del contador ascendente.
// Se expone a Blueprint para que widgets y gameplay puedan reaccionar sin
// depender de bools sueltos.
UENUM(BlueprintType)
enum class ECountupTimerState : uint8
{
	Idle UMETA(DisplayName = "Idle"),
	Running UMETA(DisplayName = "Running"),
	Paused UMETA(DisplayName = "Paused"),
	Stopped UMETA(DisplayName = "Stopped"),
	Finished UMETA(DisplayName = "Finished")
};

// Entrada del log por segundo.
// Representa un segundo entero alcanzado durante la corrida actual.
// El valor en milisegundos corresponde al borde exacto de ese segundo.
USTRUCT(BlueprintType)
struct FCountupSecondLogEntry
{
	GENERATED_BODY()

	// Reached Whole Second:
	// - Traduccion: segundo entero alcanzado.
	// - Uso: indica el segundo exacto que fue registrado por el countup.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CountupTimer|Runtime", meta = (ToolTip = "Reached Whole Second: segundo entero registrado por el countup."))
	int32 ReachedWholeSecond = 0;

	// Reached Elapsed Total Milliseconds:
	// - Traduccion: tiempo total acumulado del segundo registrado.
	// - Uso: guarda el borde logico exacto del segundo en milisegundos.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CountupTimer|Runtime", meta = (ToolTip = "Reached Elapsed Total Milliseconds: tiempo total del segundo registrado."))
	int64 ReachedElapsedTotalMilliseconds = 0;
};

// Delegate simple para eventos de transicion de estado.
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCountupTimerSimpleSignature);

// Delegate principal de actualizacion.
// Expone el tiempo ya separado en partes y tambien el total acumulado.
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(
	FCountupTimerUpdatedSignature,
	int32,
	ElapsedMinutes,
	int32,
	ElapsedSeconds,
	int32,
	ElapsedMilliseconds,
	int64,
	ElapsedTotalMilliseconds);

// Delegate para avisar que se alcanzo un nuevo segundo entero.
// Este evento no depende de que el update caiga exacto en el segundo:
// si hubo un hitch, emite todos los segundos que se hayan cruzado.
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(
	FCountupTimerSecondReachedSignature,
	int32,
	ReachedWholeSecond,
	int64,
	ReachedElapsedTotalMilliseconds);

// Delegate para publicar checkpoints de tiempo capturados a pedido.
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(
	FCountupTimerCheckpointCapturedSignature,
	FTimerCheckpointSnapshot_stt,
	Checkpoint);

UCLASS(Blueprintable)
class TTSWEAPONS_API AACountupTimerActor : public AActor, public IBPI_TimerCheckpoint_stt
{
	GENERATED_BODY()

public:
	AACountupTimerActor();

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	// ---------------------------------------------------------------------
	// Configuracion editable
	// ---------------------------------------------------------------------

	// Initial Minutes:
	// - Traduccion: minutos iniciales.
	// - Uso: define la parte de minutos del tiempo base desde el que arrancara
	//   una corrida nueva del countup.
	// - Secuencia: ajustalo antes de StartTimer o usa SetInitialTime/SetTime en
	//   runtime para una reconfiguracion explicita.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CountupTimer|Config", meta = (ClampMin = "0", UIMin = "0", ToolTip = "Initial Minutes: minutos iniciales del countup."))
	int32 InitialMinutes = 0;

	// Initial Seconds:
	// - Traduccion: segundos iniciales.
	// - Uso: define la parte de segundos del tiempo base del countup.
	// - Input: acepta valores no negativos y puede exceder 59.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CountupTimer|Config", meta = (ClampMin = "0", UIMin = "0", ToolTip = "Initial Seconds: segundos iniciales del countup."))
	int32 InitialSeconds = 0;

	// Initial Milliseconds:
	// - Traduccion: milisegundos iniciales.
	// - Uso: define la parte fina del tiempo base del countup.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CountupTimer|Config", meta = (ClampMin = "0", UIMin = "0", ToolTip = "Initial Milliseconds: milisegundos iniciales del countup."))
	int32 InitialMilliseconds = 0;

	// Auto Start:
	// - Traduccion: iniciar automaticamente.
	// - Uso: intenta arrancar el countup en BeginPlay.
	// - Secuencia: si esta activo, no hace falta llamar StartTimer manualmente.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CountupTimer|Config", meta = (ToolTip = "Auto Start: iniciar el countup automaticamente al comenzar."))
	bool bAutoStart = false;

	// Use Max Duration:
	// - Traduccion: usar duracion maxima.
	// - Uso: habilita el tope automatico del countup.
	// - Secuencia: si es false, el countup puede crecer indefinidamente.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CountupTimer|Config", meta = (ToolTip = "Use Max Duration: activar un tope maximo para el countup."))
	bool bUseMaxDuration = false;

	// Duracion maxima opcional.
	// Cuando esta activa, el countup sube hasta este valor y luego finaliza.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CountupTimer|Config", meta = (ClampMin = "0", UIMin = "0", ToolTip = "Max Minutes: minutos del tope maximo del countup."))
	int32 MaxMinutes = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CountupTimer|Config", meta = (ClampMin = "0", UIMin = "0", ToolTip = "Max Seconds: segundos del tope maximo del countup."))
	int32 MaxSeconds = 0;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CountupTimer|Config", meta = (ClampMin = "0", UIMin = "0", ToolTip = "Max Milliseconds: milisegundos del tope maximo del countup."))
	int32 MaxMilliseconds = 0;

	// Frecuencia de actualizacion hacia UI/gameplay.
	// No define la precision del tiempo real: el valor real se calcula usando
	// tiempo absoluto del mundo.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CountupTimer|Config", meta = (ClampMin = "0.005", ClampMax = "1.0", UIMin = "0.005", UIMax = "1.0", ToolTip = "Update Interval Seconds: frecuencia de actualizacion del countup."))
	float UpdateIntervalSeconds = 0.02f;

	// ---------------------------------------------------------------------
	// Estado visible en runtime
	// ---------------------------------------------------------------------

	// Tiempo inicial consolidado en milisegundos.
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "CountupTimer|Runtime", meta = (ToolTip = "Initial Elapsed Milliseconds: tiempo inicial total del countup."))
	int64 InitialElapsedMilliseconds = 0;

	// Duracion maxima consolidada en milisegundos.
	// Solo se usa como tope efectivo si bUseMaxDuration es true y el valor es > 0.
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "CountupTimer|Runtime", meta = (ToolTip = "Max Total Milliseconds: tope maximo total del countup."))
	int64 MaxTotalMilliseconds = 0;

	// Tiempo acumulado actual del countup.
	// Mientras corre, el getter publico devuelve una version calculada en tiempo
	// real a partir del timestamp de arranque.
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "CountupTimer|Runtime", meta = (ToolTip = "Elapsed Total Milliseconds: tiempo acumulado actual del countup."))
	int64 ElapsedTotalMilliseconds = 0;

	// Estado actual del contador.
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "CountupTimer|Runtime", meta = (ToolTip = "Timer State: estado actual del countup."))
	ECountupTimerState TimerState = ECountupTimerState::Idle;

	// Ultimo segundo entero registrado en el log de la corrida actual.
	// INDEX_NONE significa que aun no se registro ningun segundo.
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "CountupTimer|Runtime", meta = (ToolTip = "Last Registered Whole Second: ultimo segundo entero registrado."))
	int32 LastRegisteredWholeSecond = INDEX_NONE;

	// Log de segundos enteros alcanzados durante la corrida actual.
	// Se limpia al iniciar una corrida nueva, al resetear o al reconfigurar.
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "CountupTimer|Runtime", meta = (ToolTip = "Second Log: log de segundos enteros alcanzados por el countup."))
	TArray<FCountupSecondLogEntry> SecondLog;

	// ---------------------------------------------------------------------
	// Delegates Blueprint
	// ---------------------------------------------------------------------

	UPROPERTY(BlueprintAssignable, Category = "CountupTimer|Events", meta = (ToolTip = "On Timer Started: evento cuando inicia una corrida del countup."))
	FCountupTimerSimpleSignature OnTimerStarted;

	UPROPERTY(BlueprintAssignable, Category = "CountupTimer|Events", meta = (ToolTip = "On Timer Paused: evento cuando el countup queda en pausa."))
	FCountupTimerSimpleSignature OnTimerPaused;

	UPROPERTY(BlueprintAssignable, Category = "CountupTimer|Events", meta = (ToolTip = "On Timer Resumed: evento cuando el countup se reanuda."))
	FCountupTimerSimpleSignature OnTimerResumed;

	UPROPERTY(BlueprintAssignable, Category = "CountupTimer|Events", meta = (ToolTip = "On Timer Stopped: evento cuando se detiene el countup."))
	FCountupTimerSimpleSignature OnTimerStopped;

	UPROPERTY(BlueprintAssignable, Category = "CountupTimer|Events", meta = (ToolTip = "On Timer Updated: evento de actualizacion del countup."))
	FCountupTimerUpdatedSignature OnTimerUpdated;

	UPROPERTY(BlueprintAssignable, Category = "CountupTimer|Events", meta = (ToolTip = "On Second Reached: evento cuando el countup alcanza un nuevo segundo entero."))
	FCountupTimerSecondReachedSignature OnSecondReached;

	UPROPERTY(BlueprintAssignable, Category = "CountupTimer|Events", meta = (ToolTip = "On Timer Finished: evento cuando finaliza el countup."))
	FCountupTimerSimpleSignature OnTimerFinished;

	UPROPERTY(BlueprintAssignable, Category = "CountupTimer|Events", meta = (ToolTip = "On Checkpoint Captured: evento al capturar un checkpoint del countup."))
	FCountupTimerCheckpointCapturedSignature OnCheckpointCaptured;

	// ---------------------------------------------------------------------
	// API de control
	// ---------------------------------------------------------------------

	// Set Initial Time:
	// - Traduccion: configurar tiempo inicial.
	// - Uso: redefine el tiempo base desde el que arrancara una corrida nueva.
	// - Inputs: InMinutes, InSeconds, InMilliseconds aceptan valores no negativos.
	// - Output: no retorna valor; actualiza el tiempo inicial y el tiempo visible.
	// - Secuencia: puede llamarse en cualquier estado. Si luego quieres iniciar la
	//   corrida, llama StartTimer.
	UFUNCTION(BlueprintCallable, Category = "CountupTimer|Control", meta = (ToolTip = "Set Initial Time: configurar el tiempo inicial del countup."))
	void SetInitialTime(int32 InMinutes, int32 InSeconds, int32 InMilliseconds);

	// Set Time:
	// - Traduccion: configurar tiempo.
	// - Uso: alias de SetInitialTime para alinear la API con Countdown.
	// - Inputs: InMinutes, InSeconds, InMilliseconds aceptan valores no negativos.
	// - Secuencia: mismo contrato que SetInitialTime.
	UFUNCTION(BlueprintCallable, Category = "CountupTimer|Control", meta = (ToolTip = "Set Time: alias para configurar el tiempo inicial del countup."))
	void SetTime(int32 InMinutes, int32 InSeconds, int32 InMilliseconds);

	// Set Max Duration:
	// - Traduccion: configurar duracion maxima.
	// - Uso: redefine el tope opcional del countup.
	// - Inputs: InMinutes, InSeconds, InMilliseconds y bEnableMaxDuration.
	// - Output: no retorna valor; reconfigura el maximo y clampa el inicial si
	//   hace falta.
	// - Secuencia: puede llamarse en cualquier estado; deja el actor en Idle.
	UFUNCTION(BlueprintCallable, Category = "CountupTimer|Control", meta = (ToolTip = "Set Max Duration: configurar el tope maximo opcional del countup."))
	void SetMaxDuration(int32 InMinutes, int32 InSeconds, int32 InMilliseconds, bool bEnableMaxDuration);

	// Start Timer:
	// - Traduccion: iniciar timer.
	// - Uso: comienza una corrida nueva desde el tiempo inicial configurado.
	// - Output: dispara OnTimerStarted y OnTimerUpdated.
	// - Secuencia: si ya estaba corriendo o pausado, reinicia desde el inicio.
	UFUNCTION(BlueprintCallable, Category = "CountupTimer|Control", meta = (ToolTip = "Start Timer: iniciar una corrida nueva del countup."))
	void StartTimer();

	// Pause Timer:
	// - Traduccion: pausar timer.
	// - Uso: congela una corrida activa conservando el tiempo acumulado exacto.
	// - Secuencia: solo tiene efecto si el actor esta Running.
	UFUNCTION(BlueprintCallable, Category = "CountupTimer|Control", meta = (ToolTip = "Pause Timer: pausar la corrida actual del countup."))
	void PauseTimer();

	// Resume Timer:
	// - Traduccion: reanudar timer.
	// - Uso: retoma la corrida desde el acumulado guardado en PauseTimer.
	// - Secuencia: requiere una pausa valida previa.
	UFUNCTION(BlueprintCallable, Category = "CountupTimer|Control", meta = (ToolTip = "Resume Timer: reanudar un countup pausado."))
	void ResumeTimer();

	// Stop Timer:
	// - Traduccion: detener timer.
	// - Uso: cancela la corrida y restaura el tiempo acumulado al inicial.
	// - Output: deja el estado en Stopped.
	// - Secuencia: usalo para cancelar, no para pausar temporalmente.
	UFUNCTION(BlueprintCallable, Category = "CountupTimer|Control", meta = (ToolTip = "Stop Timer: detener y restaurar el countup al tiempo inicial."))
	void StopTimer();

	// Reset Timer:
	// - Traduccion: resetear timer.
	// - Uso: restaura el tiempo inicial y deja el actor listo sin correr.
	// - Secuencia: luego de ResetTimer debes llamar StartTimer si quieres una
	//   nueva corrida.
	UFUNCTION(BlueprintCallable, Category = "CountupTimer|Control", meta = (ToolTip = "Reset Timer: restaurar el countup y dejarlo listo sin correr."))
	void ResetTimer();

	// Finish Timer:
	// - Traduccion: finalizar timer.
	// - Uso: fuerza el cierre inmediato de la corrida actual.
	// - Output: deja el estado en Finished y conserva o clampa el tiempo segun
	//   exista maximo activo.
	// - Secuencia: puede llamarse aunque el countup ya no este corriendo.
	UFUNCTION(BlueprintCallable, Category = "CountupTimer|Control", meta = (ToolTip = "Finish Timer: finalizar inmediatamente el countup."))
	void FinishTimer();

	// Clear Second Log:
	// - Traduccion: limpiar log por segundo.
	// - Uso: vacia el registro de checkpoints automaticos por segundo.
	// - Output: no modifica tiempo ni estado, solo el historial por segundo.
	// - Secuencia: si el countup sigue corriendo, los siguientes segundos volveran
	//   a registrarse desde el momento actual.
	UFUNCTION(BlueprintCallable, Category = "CountupTimer|Control", meta = (ToolTip = "Clear Second Log: limpiar el registro de segundos del countup."))
	void ClearSecondLog();

	// ---------------------------------------------------------------------
	// API de consulta
	// ---------------------------------------------------------------------

	// Get Elapsed Time:
	// - Traduccion: obtener tiempo acumulado.
	// - Uso: devuelve el acumulado actual separado en minutos, segundos y
	//   milisegundos.
	// - Output: OutMinutes, OutSeconds y OutMilliseconds.
	UFUNCTION(BlueprintPure, Category = "CountupTimer|Query", meta = (ToolTip = "Get Elapsed Time: obtener el tiempo acumulado separado en partes."))
	void GetElapsedTime(int32& OutMinutes, int32& OutSeconds, int32& OutMilliseconds) const;

	// Get Initial Time:
	// - Traduccion: obtener tiempo inicial.
	// - Uso: devuelve el tiempo base configurado del countup.
	UFUNCTION(BlueprintPure, Category = "CountupTimer|Query", meta = (ToolTip = "Get Initial Time: obtener el tiempo inicial configurado del countup."))
	void GetInitialTime(int32& OutMinutes, int32& OutSeconds, int32& OutMilliseconds) const;

	// Get Max Duration:
	// - Traduccion: obtener duracion maxima.
	// - Uso: devuelve el tope configurado separado en partes.
	UFUNCTION(BlueprintPure, Category = "CountupTimer|Query", meta = (ToolTip = "Get Max Duration: obtener el tope maximo configurado del countup."))
	void GetMaxDuration(int32& OutMinutes, int32& OutSeconds, int32& OutMilliseconds) const;

	UFUNCTION(BlueprintPure, Category = "CountupTimer|Query", meta = (ToolTip = "Get Elapsed Total Milliseconds: obtener el tiempo acumulado total."))
	int64 GetElapsedTotalMilliseconds() const;

	UFUNCTION(BlueprintPure, Category = "CountupTimer|Query", meta = (ToolTip = "Get Initial Total Milliseconds: obtener el tiempo inicial total del countup."))
	int64 GetInitialTotalMilliseconds() const { return InitialElapsedMilliseconds; }

	UFUNCTION(BlueprintPure, Category = "CountupTimer|Query", meta = (ToolTip = "Get Max Total Milliseconds: obtener el tope maximo total del countup."))
	int64 GetMaxTotalMilliseconds() const { return MaxTotalMilliseconds; }

	// Retorna el progreso normalizado respecto de la duracion maxima.
	// Si no existe una duracion maxima activa, retorna 0.0.
	UFUNCTION(BlueprintPure, Category = "CountupTimer|Query", meta = (ToolTip = "Get Normalized Progress To Max: obtener progreso normalizado hacia el maximo."))
	float GetNormalizedProgressToMax() const;

	UFUNCTION(BlueprintPure, Category = "CountupTimer|Query", meta = (ToolTip = "Get Elapsed Whole Seconds: obtener el segundo entero actual del countup."))
	int32 GetElapsedWholeSeconds() const;

	UFUNCTION(BlueprintPure, Category = "CountupTimer|Query", meta = (ToolTip = "Get Last Registered Whole Second: obtener el ultimo segundo entero registrado."))
	int32 GetLastRegisteredWholeSecond() const { return LastRegisteredWholeSecond; }

	UFUNCTION(BlueprintPure, Category = "CountupTimer|Query", meta = (ToolTip = "Get Logged Second Count: obtener la cantidad de segundos registrados."))
	int32 GetLoggedSecondCount() const { return SecondLog.Num(); }

	UFUNCTION(BlueprintPure, Category = "CountupTimer|Query", meta = (ToolTip = "Get Timer State: obtener el estado actual del countup."))
	ECountupTimerState GetTimerState() const { return TimerState; }

	UFUNCTION(BlueprintPure, Category = "CountupTimer|Query", meta = (ToolTip = "Is Running: consultar si el countup esta corriendo."))
	bool IsRunning() const { return TimerState == ECountupTimerState::Running; }

	UFUNCTION(BlueprintPure, Category = "CountupTimer|Query", meta = (ToolTip = "Is Paused: consultar si el countup esta en pausa."))
	bool IsPaused() const { return TimerState == ECountupTimerState::Paused; }

	UFUNCTION(BlueprintPure, Category = "CountupTimer|Query", meta = (ToolTip = "Is Finished: consultar si el countup termino."))
	bool IsFinished() const { return TimerState == ECountupTimerState::Finished; }

	UFUNCTION(BlueprintPure, Category = "CountupTimer|Query", meta = (ToolTip = "Is Stopped: consultar si el countup fue detenido."))
	bool IsStopped() const { return TimerState == ECountupTimerState::Stopped; }

	UFUNCTION(BlueprintPure, Category = "CountupTimer|Query", meta = (ToolTip = "Is Idle: consultar si el countup esta listo sin correr."))
	bool IsIdle() const { return TimerState == ECountupTimerState::Idle; }

	UFUNCTION(BlueprintPure, Category = "CountupTimer|Query", meta = (ToolTip = "Has Active Max Duration: consultar si el countup tiene tope maximo activo."))
	bool HasActiveMaxDuration() const;

	// Getter util para UMG o debugging rapido.
	// Formato esperado:
	// - con milisegundos: MM:SS:mmm
	// - sin milisegundos: MM:SS
	// Get Formatted Elapsed Time:
	// - Traduccion: obtener tiempo acumulado formateado.
	// - Uso: devuelve un string MM:SS o MM:SS:mmm segun el flag.
	// - Inputs: bIncludeMilliseconds define si incluye milisegundos.
	// - Output: retorna FString lista para HUD o debugging.
	UFUNCTION(BlueprintPure, Category = "CountupTimer|Query", meta = (ToolTip = "Get Formatted Elapsed Time: obtener el countup como texto formateado."))
	FString GetFormattedElapsedTime(bool bIncludeMilliseconds) const;

	// Get Current Checkpoint:
	// - Traduccion: obtener checkpoint actual.
	// - Uso: arma un snapshot seguro del tiempo acumulado actual del countup.
	// - Output: retorna FTimerCheckpointSnapshot_stt con tiempo, estado y formato.
	// - Secuencia: puede llamarse mientras corre o despues de terminar.
	UFUNCTION(BlueprintPure, Category = "CountupTimer|Checkpoint", meta = (ToolTip = "Get Current Checkpoint: obtener un snapshot actual del countup."))
	FTimerCheckpointSnapshot_stt GetCurrentCheckpoint() const;

	// Capture Checkpoint:
	// - Traduccion: capturar checkpoint.
	// - Uso: crea un snapshot nombrado del tiempo acumulado y emite
	//   OnCheckpointCaptured.
	// - Inputs: CheckpointTag identifica el evento o hito registrado.
	// - Output: retorna FTimerCheckpointSnapshot_stt para guardar o reenviar.
	// - Secuencia: puede llamarse en cualquier estado; no rompe si el countup ya
	//   termino.
	UFUNCTION(BlueprintCallable, Category = "CountupTimer|Checkpoint", meta = (ToolTip = "Capture Checkpoint: capturar y publicar un checkpoint del countup."))
	FTimerCheckpointSnapshot_stt CaptureCheckpoint(const FString& CheckpointTag);

	// Variante BPI para evitar hard cast en Blueprint.
	virtual FTimerCheckpointSnapshot_stt BPI_GetTimerCheckpoint_stt_Implementation() const override;

	// Variante BPI que ademas emite el dispatcher local de checkpoint.
	virtual FTimerCheckpointSnapshot_stt BPI_CaptureTimerCheckpoint_stt_Implementation(const FString& CheckpointTag) override;

private:
	// Construye milisegundos totales desde componentes sueltos.
	static int64 BuildTotalMilliseconds(int32 InMinutes, int32 InSeconds, int32 InMilliseconds);

	// Convierte milisegundos totales a partes legibles.
	static void SplitMillisecondsToTimeParts(int64 InTotalMilliseconds, int32& OutMinutes, int32& OutSeconds, int32& OutMilliseconds);

	// Recalcula los totales internos a partir de los campos editables.
	void RebuildInitialDurationFromConfiguredFields();
	void RebuildMaxDurationFromConfiguredFields();

	// Normaliza los campos visibles de configuracion a partir de los totales.
	void NormalizeConfiguredFieldsFromDurations();

	// Si la duracion maxima esta activa, evita que el tiempo inicial quede por
	// encima del maximo.
	void ClampInitialElapsedAgainstMaxDuration();

	// Devuelve el tiempo del mundo usado como base de precision.
	double GetCurrentWorldTimeSeconds() const;

	// Calcula el tiempo acumulado real de la corrida actual.
	int64 ComputeElapsedMillisecondsFromCurrentRun(double CurrentWorldTimeSeconds) const;

	// Captura el valor acumulado real actual y lo guarda en ElapsedTotalMilliseconds.
	void CaptureCurrentElapsedMilliseconds();

	// Inicia una corrida usando el ElapsedTotalMilliseconds actual como base.
	void StartFromCurrentElapsedTime(bool bBroadcastStartedEvent, bool bResetRuntimeTracking);

	// Programa los timers internos:
	// - uno repetitivo para emitir updates
	// - uno one-shot opcional para finalizar al llegar al maximo
	void ArmRuntimeTimers();

	// Limpia todos los handles internos del timer.
	void ClearRuntimeTimers();

	// Emite update hacia Blueprint/UMG si hubo cambios o si se fuerza.
	void BroadcastTimerUpdated(bool bForceBroadcast);

	// Registra todos los segundos enteros que se hayan alcanzado hasta el tiempo
	// actual. Esto evita perder segundos si hubo hitches o updates espaciados.
	void ProcessPassedWholeSeconds(int64 CurrentElapsedMilliseconds);

	// Agrega una entrada al log por segundo y emite el evento correspondiente.
	void RegisterWholeSecond(int32 WholeSecond);

	// Finaliza la corrida actual.
	void FinishTimerInternal();

	// Resetea el tracking asociado a una corrida nueva.
	// Esto incluye el log por segundo y el ultimo valor broadcast.
	void ResetRuntimeTrackingForFreshCycle();

	// Handler del timer repetitivo de update.
	void HandleUpdateTimerElapsed();

	// Handler del timer one-shot de finalizacion por maximo.
	void HandleFinishTimerElapsed();

	// Convierte el estado interno del countup a la enum generica del sistema
	// de checkpoint.
	static ETimerCheckpointState_stt ConvertToCheckpointState(ECountupTimerState InState);

	// Construye el snapshot compartido por el nodo local y por la BPI.
	FTimerCheckpointSnapshot_stt BuildCheckpointSnapshot(const FString& CheckpointTag) const;

private:
	// Handle del timer repetitivo de updates.
	FTimerHandle UpdateTimerHandle;

	// Handle del timer que marca la llegada al maximo, si existe.
	FTimerHandle FinishTimerHandle;

	// Tiempo acumulado al momento exacto en que se arranco o reanudo la corrida.
	int64 ElapsedMillisecondsAtRunStart = 0;

	// Timestamp del mundo cuando empezo la corrida actual.
	double RunStartWorldTimeSeconds = 0.0;

	// Ultimo valor publicado en OnTimerUpdated.
	int64 LastBroadcastElapsedMilliseconds = -1;
};
