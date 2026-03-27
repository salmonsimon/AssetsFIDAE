// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Timer/TimerCheckpointTypes_stt.h"
#include "Timer/BPI/BPI_TimerCheckpoint_stt.h"
#include "ACountdownTimerActor.generated.h"

// Estado de alto nivel del temporizador.
// Se expone a Blueprint para que widgets y gameplay puedan reaccionar sin
// depender de comparaciones de bools sueltos.
UENUM(BlueprintType)
enum class ECountdownTimerState : uint8
{
	Idle UMETA(DisplayName = "Idle"),
	Running UMETA(DisplayName = "Running"),
	Paused UMETA(DisplayName = "Paused"),
	Stopped UMETA(DisplayName = "Stopped"),
	Finished UMETA(DisplayName = "Finished")
};

// Delegate simple para eventos de transicion de estado.
// Se eligio como multicast dinamico porque:
// - permite multiples listeners (UMG, audio, game mode, etc.)
// - es facil de bindear desde Blueprint
// - mantiene el actor desacoplado de widgets u otros sistemas concretos
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCountdownTimerSimpleSignature);

// Delegate de actualizacion.
// Expone el tiempo ya separado en partes para Blueprint/UMG y tambien el valor
// total restante para sistemas que prefieren trabajar en milisegundos.
DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(
	FCountdownTimerUpdatedSignature,
	int32,
	RemainingMinutes,
	int32,
	RemainingSeconds,
	int32,
	RemainingMilliseconds,
	int64,
	RemainingTotalMilliseconds,
	float,
	NormalizedProgress);

// Delegate para advertencia de fin cercano.
// Se dispara una sola vez por corrida cuando el tiempo restante entra en el
// umbral configurado.
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(
	FCountdownTimerNearEndSignature,
	int64,
	RemainingTotalMilliseconds);

// Delegate para publicar checkpoints de tiempo capturados a pedido.
// Se usa para registrar eventos de gameplay sin necesidad de polling.
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(
	FCountdownTimerCheckpointCapturedSignature,
	FTimerCheckpointSnapshot_stt,
	Checkpoint);

UCLASS(Blueprintable)
class TTSWEAPONS_API AACountdownTimerActor : public AActor, public IBPI_TimerCheckpoint_stt
{
	GENERATED_BODY()

public:
	AACountdownTimerActor();

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
	// ---------------------------------------------------------------------
	// Configuracion editable
	// ---------------------------------------------------------------------

	// Initial Minutes:
	// - Traduccion: minutos iniciales.
	// - Uso: define la parte de minutos del tiempo base del countdown.
	// - Input: valor entero no negativo editable en editor o por defaults.
	// - Output: se consolida en InitialTotalMilliseconds durante BeginPlay o al
	//   reconfigurar el actor.
	// - Secuencia: ajustalo antes de StartTimer si configuras por detalles.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CountdownTimer|Config", meta = (ClampMin = "0", UIMin = "0", ToolTip = "Initial Minutes: minutos iniciales del countdown."))
	int32 InitialMinutes = 0;

	// Initial Seconds:
	// - Traduccion: segundos iniciales.
	// - Uso: define la parte de segundos del tiempo base del countdown.
	// - Input: valor entero no negativo; puede exceder 59.
	// - Output: el sistema lo normaliza al convertir a milisegundos totales.
	// - Secuencia: ajustalo antes de StartTimer o usa SetTime para hacerlo en
	//   runtime de forma explicita.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CountdownTimer|Config", meta = (ClampMin = "0", UIMin = "0", ToolTip = "Initial Seconds: segundos iniciales del countdown."))
	int32 InitialSeconds = 0;

	// Initial Milliseconds:
	// - Traduccion: milisegundos iniciales.
	// - Uso: define la parte fina del tiempo base del countdown.
	// - Input: valor entero no negativo; puede exceder 999.
	// - Output: se incorpora al total canonico y luego se normaliza al exponerlo.
	// - Secuencia: si quieres ajustar todo junto en runtime, usa SetTime.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CountdownTimer|Config", meta = (ClampMin = "0", UIMin = "0", ToolTip = "Initial Milliseconds: milisegundos iniciales del countdown."))
	int32 InitialMilliseconds = 0;

	// Auto Start:
	// - Traduccion: iniciar automaticamente.
	// - Uso: hace que el actor llame StartTimer al comenzar Play si el tiempo
	//   inicial es mayor a cero.
	// - Secuencia: si esta activo, no necesitas llamar StartTimer manualmente en
	//   BeginPlay de otro Blueprint.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CountdownTimer|Config", meta = (ToolTip = "Auto Start: iniciar el countdown automaticamente al comenzar."))
	bool bAutoStart = false;

	// Loop:
	// - Traduccion: repetir automaticamente.
	// - Uso: al vencer de forma natural, el countdown vuelve a iniciar desde su
	//   tiempo inicial.
	// - Secuencia: afecta solo la finalizacion natural; FinishTimer manual no
	//   relanza el ciclo.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CountdownTimer|Config", meta = (ToolTip = "Loop: repetir automaticamente el countdown al terminar."))
	bool bLoop = false;

	// Update Interval Seconds:
	// - Traduccion: intervalo de actualizacion en segundos.
	// - Uso: controla cada cuanto se emite OnTimerUpdated mientras el timer corre.
	// - Input: valor flotante entre 0.005 y 1.0.
	// - Secuencia: no define la precision real del countdown, solo la frecuencia
	//   de notificacion a UI y gameplay.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CountdownTimer|Config", meta = (ClampMin = "0.005", ClampMax = "1.0", UIMin = "0.005", UIMax = "1.0", ToolTip = "Update Interval Seconds: frecuencia de actualizacion del countdown."))
	float UpdateIntervalSeconds = 0.02f;

	// Near End Threshold Ms:
	// - Traduccion: umbral de fin cercano en milisegundos.
	// - Uso: dispara OnTimerNearEnd una sola vez cuando el restante entra al
	//   rango configurado.
	// - Input: valor entero no negativo en milisegundos.
	// - Secuencia: si vale 0, el warning de fin cercano queda deshabilitado.
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CountdownTimer|Config", meta = (ClampMin = "0", UIMin = "0", ToolTip = "Near End Threshold Ms: umbral para avisar fin cercano del countdown."))
	int64 NearEndThresholdMs = 3000;

	// ---------------------------------------------------------------------
	// Estado visible en runtime
	// ---------------------------------------------------------------------

	// Initial Total Milliseconds:
	// - Traduccion: tiempo inicial total en milisegundos.
	// - Uso: unidad canonica interna del countdown ya consolidada.
	// - Output: se consulta para debugging, HUD o logica avanzada.
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "CountdownTimer|Runtime", meta = (ToolTip = "Initial Total Milliseconds: tiempo inicial total del countdown."))
	int64 InitialTotalMilliseconds = 0;

	// Remaining Total Milliseconds:
	// - Traduccion: tiempo restante total en milisegundos.
	// - Uso: refleja el restante visible actual del countdown.
	// - Output: cuando el timer corre, el getter calcula el valor real al vuelo.
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "CountdownTimer|Runtime", meta = (ToolTip = "Remaining Total Milliseconds: tiempo restante actual del countdown."))
	int64 RemainingTotalMilliseconds = 0;

	// Timer State:
	// - Traduccion: estado actual del timer.
	// - Uso: indica si el countdown esta Idle, Running, Paused, Stopped o
	//   Finished.
	UPROPERTY(VisibleInstanceOnly, BlueprintReadOnly, Category = "CountdownTimer|Runtime", meta = (ToolTip = "Timer State: estado actual del countdown."))
	ECountdownTimerState TimerState = ECountdownTimerState::Idle;

	// ---------------------------------------------------------------------
	// Delegates Blueprint
	// ---------------------------------------------------------------------

	// On Timer Started:
	// - Traduccion: evento al iniciar el timer.
	// - Uso: se dispara cuando comienza una corrida nueva desde StartTimer.
	// - Secuencia: no se dispara con ResumeTimer; para eso existe OnTimerResumed.
	UPROPERTY(BlueprintAssignable, Category = "CountdownTimer|Events", meta = (ToolTip = "On Timer Started: evento cuando inicia una corrida del countdown."))
	FCountdownTimerSimpleSignature OnTimerStarted;

	// On Timer Paused:
	// - Traduccion: evento al pausar el timer.
	// - Uso: se dispara despues de capturar el restante exacto.
	UPROPERTY(BlueprintAssignable, Category = "CountdownTimer|Events", meta = (ToolTip = "On Timer Paused: evento cuando el countdown queda en pausa."))
	FCountdownTimerSimpleSignature OnTimerPaused;

	// On Timer Resumed:
	// - Traduccion: evento al reanudar el timer.
	// - Uso: se dispara cuando una pausa valida vuelve a estado Running.
	// - Secuencia: requiere haber llamado PauseTimer antes.
	UPROPERTY(BlueprintAssignable, Category = "CountdownTimer|Events", meta = (ToolTip = "On Timer Resumed: evento cuando el countdown se reanuda."))
	FCountdownTimerSimpleSignature OnTimerResumed;

	// On Timer Stopped:
	// - Traduccion: evento al detener el timer.
	// - Uso: se dispara cuando StopTimer cancela la corrida y restaura el inicial.
	UPROPERTY(BlueprintAssignable, Category = "CountdownTimer|Events", meta = (ToolTip = "On Timer Stopped: evento cuando se detiene el countdown."))
	FCountdownTimerSimpleSignature OnTimerStopped;

	// On Timer Updated:
	// - Traduccion: evento de actualizacion del timer.
	// - Uso: entrega el tiempo restante separado en partes y el progreso
	//   normalizado.
	UPROPERTY(BlueprintAssignable, Category = "CountdownTimer|Events", meta = (ToolTip = "On Timer Updated: evento de actualizacion del countdown."))
	FCountdownTimerUpdatedSignature OnTimerUpdated;

	// On Timer Near End:
	// - Traduccion: evento de fin cercano.
	// - Uso: se dispara una sola vez por corrida al entrar en el umbral NearEnd.
	UPROPERTY(BlueprintAssignable, Category = "CountdownTimer|Events", meta = (ToolTip = "On Timer Near End: evento de advertencia de fin cercano."))
	FCountdownTimerNearEndSignature OnTimerNearEnd;

	// On Timer Finished:
	// - Traduccion: evento al finalizar el timer.
	// - Uso: se dispara al llegar a cero o al forzar FinishTimer.
	UPROPERTY(BlueprintAssignable, Category = "CountdownTimer|Events", meta = (ToolTip = "On Timer Finished: evento cuando finaliza el countdown."))
	FCountdownTimerSimpleSignature OnTimerFinished;

	// On Checkpoint Captured:
	// - Traduccion: evento al capturar checkpoint.
	// - Uso: publica un snapshot del tiempo restante cuando se llama
	//   CaptureCheckpoint o su variante BPI.
	UPROPERTY(BlueprintAssignable, Category = "CountdownTimer|Events", meta = (ToolTip = "On Checkpoint Captured: evento al capturar un checkpoint del countdown."))
	FCountdownTimerCheckpointCapturedSignature OnCheckpointCaptured;

	// ---------------------------------------------------------------------
	// API de control
	// ---------------------------------------------------------------------

	// Set Time:
	// - Traduccion: configurar tiempo.
	// - Uso: redefine el tiempo inicial completo del countdown y reinicia el
	//   runtime al nuevo valor.
	// - Inputs: InMinutes, InSeconds, InMilliseconds aceptan valores no negativos.
	// - Output: no retorna valor; deja InitialTotalMilliseconds y
	//   RemainingTotalMilliseconds sincronizados.
	// - Secuencia: puede llamarse en cualquier estado. Si luego quieres iniciar
	//   la corrida, llama StartTimer.
	UFUNCTION(BlueprintCallable, Category = "CountdownTimer|Control", meta = (ToolTip = "Set Time: configurar el tiempo inicial del countdown."))
	void SetTime(int32 InMinutes, int32 InSeconds, int32 InMilliseconds);

	// Start Timer:
	// - Traduccion: iniciar timer.
	// - Uso: comienza una corrida nueva desde el tiempo inicial configurado.
	// - Inputs: no recibe parametros.
	// - Output: no retorna valor; dispara OnTimerStarted y OnTimerUpdated.
	// - Secuencia: si el actor estaba en Running o Paused, reinicia desde el
	//   principio. No reanuda una pausa; para eso usa ResumeTimer.
	UFUNCTION(BlueprintCallable, Category = "CountdownTimer|Control", meta = (ToolTip = "Start Timer: iniciar una corrida nueva del countdown."))
	void StartTimer();

	// Pause Timer:
	// - Traduccion: pausar timer.
	// - Uso: congela una corrida activa conservando el restante exacto.
	// - Inputs: no recibe parametros.
	// - Output: no retorna valor; deja el estado en Paused.
	// - Secuencia: solo tiene efecto si el timer esta Running.
	UFUNCTION(BlueprintCallable, Category = "CountdownTimer|Control", meta = (ToolTip = "Pause Timer: pausar la corrida actual del countdown."))
	void PauseTimer();

	// Resume Timer:
	// - Traduccion: reanudar timer.
	// - Uso: retoma el countdown desde el restante capturado en PauseTimer.
	// - Inputs: no recibe parametros.
	// - Output: no retorna valor; deja el estado en Running si la reanudacion es
	//   valida.
	// - Secuencia: requiere que antes se haya ejecutado PauseTimer.
	UFUNCTION(BlueprintCallable, Category = "CountdownTimer|Control", meta = (ToolTip = "Resume Timer: reanudar un countdown pausado."))
	void ResumeTimer();

	// Stop Timer:
	// - Traduccion: detener timer.
	// - Uso: cancela la corrida actual y restaura el tiempo restante al inicial.
	// - Inputs: no recibe parametros.
	// - Output: no retorna valor; deja el estado en Stopped.
	// - Secuencia: usalo cuando quieres cancelar formalmente la corrida, no para
	//   pausarla temporalmente.
	UFUNCTION(BlueprintCallable, Category = "CountdownTimer|Control", meta = (ToolTip = "Stop Timer: detener y restaurar el countdown al tiempo inicial."))
	void StopTimer();

	// Reset Timer:
	// - Traduccion: resetear timer.
	// - Uso: restaura el tiempo inicial y deja el actor listo para un StartTimer.
	// - Inputs: no recibe parametros.
	// - Output: no retorna valor; deja el estado en Idle.
	// - Secuencia: no inicia automaticamente una corrida nueva.
	UFUNCTION(BlueprintCallable, Category = "CountdownTimer|Control", meta = (ToolTip = "Reset Timer: restaurar el countdown y dejarlo listo sin correr."))
	void ResetTimer();

	// Finish Timer:
	// - Traduccion: finalizar timer.
	// - Uso: fuerza la finalizacion inmediata del countdown.
	// - Inputs: no recibe parametros.
	// - Output: no retorna valor; deja el restante en cero y el estado en
	//   Finished.
	// - Secuencia: no dispara relanzamiento de loop aunque bLoop este activo.
	UFUNCTION(BlueprintCallable, Category = "CountdownTimer|Control", meta = (ToolTip = "Finish Timer: finalizar inmediatamente el countdown."))
	void FinishTimer();

	// Add Time:
	// - Traduccion: agregar tiempo.
	// - Uso: suma tiempo al restante actual.
	// - Inputs: InMinutes, InSeconds, InMilliseconds definen el delta a sumar.
	// - Output: no retorna valor; actualiza el restante y, si corresponde, el
	//   tiempo base visible.
	// - Secuencia: si el timer corre, reanuda internamente con el nuevo restante.
	//   Si esta Idle o Stopped, tambien reconfigura el valor base para futuros
	//   StartTimer.
	UFUNCTION(BlueprintCallable, Category = "CountdownTimer|Control", meta = (ToolTip = "Add Time: sumar tiempo al countdown actual."))
	void AddTime(int32 InMinutes, int32 InSeconds, int32 InMilliseconds);

	// Subtract Time:
	// - Traduccion: restar tiempo.
	// - Uso: descuenta tiempo del restante actual.
	// - Inputs: InMinutes, InSeconds, InMilliseconds definen el delta a restar.
	// - Output: no retorna valor; si el restante llega a cero, finaliza el timer.
	// - Secuencia: si el timer corre, recalcula su corrida. Si no hay corrida
	//   activa, tambien ajusta el valor base visible.
	UFUNCTION(BlueprintCallable, Category = "CountdownTimer|Control", meta = (ToolTip = "Subtract Time: restar tiempo al countdown actual."))
	void SubtractTime(int32 InMinutes, int32 InSeconds, int32 InMilliseconds);

	// ---------------------------------------------------------------------
	// API de consulta
	// ---------------------------------------------------------------------

	// Get Remaining Time:
	// - Traduccion: obtener tiempo restante.
	// - Uso: devuelve el restante separado en minutos, segundos y milisegundos.
	// - Inputs: no recibe parametros de entrada utiles; usa parametros de salida.
	// - Output: OutMinutes, OutSeconds y OutMilliseconds.
	// - Secuencia: es seguro llamarlo en cualquier estado.
	UFUNCTION(BlueprintPure, Category = "CountdownTimer|Query", meta = (ToolTip = "Get Remaining Time: obtener el tiempo restante separado en partes."))
	void GetRemainingTime(int32& OutMinutes, int32& OutSeconds, int32& OutMilliseconds) const;

	// Get Initial Time:
	// - Traduccion: obtener tiempo inicial.
	// - Uso: devuelve el tiempo base configurado del countdown.
	// - Output: OutMinutes, OutSeconds y OutMilliseconds.
	UFUNCTION(BlueprintPure, Category = "CountdownTimer|Query", meta = (ToolTip = "Get Initial Time: obtener el tiempo inicial configurado."))
	void GetInitialTime(int32& OutMinutes, int32& OutSeconds, int32& OutMilliseconds) const;

	// Get Remaining Total Milliseconds:
	// - Traduccion: obtener restante total en milisegundos.
	// - Uso: devuelve el tiempo restante canonico del countdown.
	// - Output: retorna un int64 con el restante actual.
	UFUNCTION(BlueprintPure, Category = "CountdownTimer|Query", meta = (ToolTip = "Get Remaining Total Milliseconds: obtener el tiempo restante total."))
	int64 GetRemainingTotalMilliseconds() const;

	// Get Initial Total Milliseconds:
	// - Traduccion: obtener tiempo inicial total.
	// - Uso: consulta el valor inicial consolidado en milisegundos.
	UFUNCTION(BlueprintPure, Category = "CountdownTimer|Query", meta = (ToolTip = "Get Initial Total Milliseconds: obtener el tiempo inicial total."))
	int64 GetInitialTotalMilliseconds() const { return InitialTotalMilliseconds; }

	// Get Timer State:
	// - Traduccion: obtener estado del timer.
	// - Uso: devuelve el enum de estado actual del countdown.
	UFUNCTION(BlueprintPure, Category = "CountdownTimer|Query", meta = (ToolTip = "Get Timer State: obtener el estado actual del countdown."))
	ECountdownTimerState GetTimerState() const { return TimerState; }

	// Retorna progreso normalizado del tiempo restante.
	// 1.0 = tiempo completo disponible, 0.0 = terminado.
	UFUNCTION(BlueprintPure, Category = "CountdownTimer|Query", meta = (ToolTip = "Get Normalized Progress: obtener progreso normalizado del countdown."))
	float GetNormalizedProgress() const;

	UFUNCTION(BlueprintPure, Category = "CountdownTimer|Query", meta = (ToolTip = "Is Running: consultar si el countdown esta corriendo."))
	bool IsRunning() const { return TimerState == ECountdownTimerState::Running; }

	UFUNCTION(BlueprintPure, Category = "CountdownTimer|Query", meta = (ToolTip = "Is Paused: consultar si el countdown esta en pausa."))
	bool IsPaused() const { return TimerState == ECountdownTimerState::Paused; }

	UFUNCTION(BlueprintPure, Category = "CountdownTimer|Query", meta = (ToolTip = "Is Finished: consultar si el countdown termino."))
	bool IsFinished() const { return TimerState == ECountdownTimerState::Finished; }

	UFUNCTION(BlueprintPure, Category = "CountdownTimer|Query", meta = (ToolTip = "Is Stopped: consultar si el countdown fue detenido."))
	bool IsStopped() const { return TimerState == ECountdownTimerState::Stopped; }

	UFUNCTION(BlueprintPure, Category = "CountdownTimer|Query", meta = (ToolTip = "Is Idle: consultar si el countdown esta listo sin correr."))
	bool IsIdle() const { return TimerState == ECountdownTimerState::Idle; }

	// Getter util para UMG o debugging rapido.
	// Formato esperado:
	// - con milisegundos: MM:SS:mmm
	// - sin milisegundos: MM:SS
	// Get Formatted Remaining Time:
	// - Traduccion: obtener tiempo restante formateado.
	// - Uso: devuelve un string MM:SS o MM:SS:mmm segun el flag.
	// - Inputs: bIncludeMilliseconds define si incluye milisegundos.
	// - Output: retorna FString lista para HUD o debugging.
	UFUNCTION(BlueprintPure, Category = "CountdownTimer|Query", meta = (ToolTip = "Get Formatted Remaining Time: obtener el restante del countdown como texto."))
	FString GetFormattedRemainingTime(bool bIncludeMilliseconds) const;

	// Get Current Checkpoint:
	// - Traduccion: obtener checkpoint actual.
	// - Uso: arma un snapshot seguro del tiempo restante actual del countdown.
	// - Inputs: no recibe parametros.
	// - Output: retorna FTimerCheckpointSnapshot_stt con tiempo, estado y formato.
	// - Secuencia: puede llamarse mientras corre o despues de terminar.
	UFUNCTION(BlueprintPure, Category = "CountdownTimer|Checkpoint", meta = (ToolTip = "Get Current Checkpoint: obtener un snapshot actual del countdown."))
	FTimerCheckpointSnapshot_stt GetCurrentCheckpoint() const;

	// Capture Checkpoint:
	// - Traduccion: capturar checkpoint.
	// - Uso: crea un snapshot nombrado del tiempo restante y emite
	//   OnCheckpointCaptured.
	// - Inputs: CheckpointTag identifica el evento que quieres registrar.
	// - Output: retorna FTimerCheckpointSnapshot_stt para guardar o reenviar.
	// - Secuencia: puede llamarse en cualquier estado; no rompe si el timer ya
	//   termino.
	UFUNCTION(BlueprintCallable, Category = "CountdownTimer|Checkpoint", meta = (ToolTip = "Capture Checkpoint: capturar y publicar un checkpoint del countdown."))
	FTimerCheckpointSnapshot_stt CaptureCheckpoint(const FString& CheckpointTag);

	// Variante BPI para evitar hard cast en Blueprint.
	virtual FTimerCheckpointSnapshot_stt BPI_GetTimerCheckpoint_stt_Implementation() const override;

	// Variante BPI que ademas emite el dispatcher local de checkpoint.
	virtual FTimerCheckpointSnapshot_stt BPI_CaptureTimerCheckpoint_stt_Implementation(const FString& CheckpointTag) override;

private:
	// Construye milisegundos totales desde componentes sueltos.
	// Se centraliza aqui para evitar duplicar reglas de conversion.
	static int64 BuildTotalMilliseconds(int32 InMinutes, int32 InSeconds, int32 InMilliseconds);

	// Convierte milisegundos totales a partes legibles para UI/Blueprint.
	static void SplitMillisecondsToTimeParts(int64 InTotalMilliseconds, int32& OutMinutes, int32& OutSeconds, int32& OutMilliseconds);

	// Recalcula InitialTotalMilliseconds a partir de la configuracion editable.
	void RebuildInitialDurationFromConfiguredFields();

	// Sincroniza los campos editables a partir del total inicial.
	// Se usa para mantener consistente la representacion visible cuando SetTime
	// recibe valores no normalizados.
	void NormalizeConfiguredFieldsFromInitialDuration();

	// Devuelve el tiempo de mundo usado como base de precision.
	// Se usa tiempo absoluto del mundo en vez de "restar un delta fijo" para
	// evitar drift acumulado por rounding y por callbacks no exactos.
	double GetCurrentWorldTimeSeconds() const;

	// Calcula el restante real tomando el timestamp de arranque de la corrida.
	int64 ComputeRemainingMillisecondsFromCurrentRun(double CurrentWorldTimeSeconds) const;

	// Captura el restante real actual y lo guarda en RemainingTotalMilliseconds.
	// Es clave al pausar, detener o modificar tiempo en caliente.
	void CaptureCurrentRemainingMilliseconds();

	// Inicia una corrida usando el RemainingTotalMilliseconds actual como base.
	void StartFromCurrentRemainingTime(bool bBroadcastStartedEvent, bool bResetNearEndFlag);

	// Programa los timers internos:
	// - uno repetitivo para emitir updates
	// - uno one-shot para finalizar con baja latencia
	void ArmRuntimeTimers();

	// Limpia todos los handles internos del timer.
	void ClearRuntimeTimers();

	// Emite update hacia Blueprint/UMG si hubo cambios o si se fuerza.
	void BroadcastTimerUpdated(bool bForceBroadcast);

	// Evalua si corresponde disparar el evento de near end.
	void EvaluateNearEndEvent(int64 CurrentRemainingMilliseconds);

	// Handler del timer repetitivo de update.
	void HandleUpdateTimerElapsed();

	// Handler del timer one-shot de finalizacion.
	void HandleFinishTimerElapsed();

	// Finaliza la corrida actual y opcionalmente relanza si Loop esta activo.
	void FinishTimerInternal(bool bRestartIfLooping);

	// Reestablece flags internos asociados a una nueva corrida.
	void ResetRuntimeFlagsForFreshCycle();

	// Convierte el estado interno del countdown a la enum generica del sistema
	// de checkpoint.
	static ETimerCheckpointState_stt ConvertToCheckpointState(ECountdownTimerState InState);

	// Construye el snapshot compartido por el nodo local y por la BPI.
	FTimerCheckpointSnapshot_stt BuildCheckpointSnapshot(const FString& CheckpointTag) const;

private:
	// Handle del timer repetitivo de updates.
	FTimerHandle UpdateTimerHandle;

	// Handle del timer que marca el momento exacto de finalizacion.
	FTimerHandle FinishTimerHandle;

	// Tiempo restante al momento exacto en que se arranco o reanudo la corrida.
	// Desde este valor se recalcula el restante usando tiempo absoluto.
	int64 RemainingMillisecondsAtRunStart = 0;

	// Timestamp del mundo cuando empezo la corrida actual.
	double RunStartWorldTimeSeconds = 0.0;

	// Ultimo valor publicado en OnTimerUpdated.
	// Evita spamear eventos identicos si el temporizador de update se ejecuta
	// varias veces sin que el valor en ms haya cambiado.
	int64 LastBroadcastRemainingMilliseconds = -1;

	// Protege para que el evento de fin cercano se emita una sola vez por ciclo.
	bool bNearEndEventBroadcasted = false;
};
