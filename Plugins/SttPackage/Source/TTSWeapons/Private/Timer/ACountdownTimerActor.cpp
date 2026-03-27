// Fill out your copyright notice in the Description page of Project Settings.

#include "Timer/ACountdownTimerActor.h"

#include "Engine/World.h"
#include "TimerManager.h"

AACountdownTimerActor::AACountdownTimerActor()
{
	// Este actor no necesita Tick.
	// Toda la logica se apoya en FTimerManager y en calculo por timestamp.
	PrimaryActorTick.bCanEverTick = false;

	// El estado inicial por defecto es Idle y el tiempo se arma en BeginPlay
	// a partir de los campos editables.
	TimerState = ECountdownTimerState::Idle;
}


void AACountdownTimerActor::BeginPlay()
{
	Super::BeginPlay();

	// Consolidamos la configuracion editable a la unidad interna canonica.
	RebuildInitialDurationFromConfiguredFields();
	NormalizeConfiguredFieldsFromInitialDuration();

	// Al inicio, el restante coincide con el valor inicial configurado.
	RemainingTotalMilliseconds = InitialTotalMilliseconds;
	ResetRuntimeFlagsForFreshCycle();
	BroadcastTimerUpdated(true);

	if (bAutoStart && InitialTotalMilliseconds > 0)
	{
		StartTimer();
	}
}


void AACountdownTimerActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// Importante para no dejar timers colgados si el actor se destruye o cambia
	// de nivel mientras estaba corriendo.
	ClearRuntimeTimers();
	Super::EndPlay(EndPlayReason);
}


void AACountdownTimerActor::SetTime(int32 InMinutes, int32 InSeconds, int32 InMilliseconds)
{
	// SetTime se considera una reconfiguracion explicita.
	// Siempre corta la corrida actual y deja el timer listo en Idle.
	ClearRuntimeTimers();

	InitialTotalMilliseconds = BuildTotalMilliseconds(InMinutes, InSeconds, InMilliseconds);
	RemainingTotalMilliseconds = InitialTotalMilliseconds;
	TimerState = ECountdownTimerState::Idle;

	NormalizeConfiguredFieldsFromInitialDuration();
	ResetRuntimeFlagsForFreshCycle();
	BroadcastTimerUpdated(true);
}


void AACountdownTimerActor::StartTimer()
{
	if (InitialTotalMilliseconds <= 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("AACountdownTimerActor::StartTimer ignored on %s because InitialTotalMilliseconds is 0."), *GetNameSafe(this));
		return;
	}

	// Start siempre arranca una corrida nueva desde el tiempo inicial.
	// Si estaba corriendo o pausado, se reinicia desde cero de forma determinista.
	ClearRuntimeTimers();
	RemainingTotalMilliseconds = InitialTotalMilliseconds;
	StartFromCurrentRemainingTime(true, true);
}


void AACountdownTimerActor::PauseTimer()
{
	if (TimerState != ECountdownTimerState::Running)
	{
		return;
	}

	// Capturamos el restante real al momento de pausar para que ResumeTimer
	// retome desde el mismo punto exacto.
	CaptureCurrentRemainingMilliseconds();
	ClearRuntimeTimers();
	TimerState = ECountdownTimerState::Paused;

	BroadcastTimerUpdated(true);
	OnTimerPaused.Broadcast();
}


void AACountdownTimerActor::ResumeTimer()
{
	if (TimerState != ECountdownTimerState::Paused || RemainingTotalMilliseconds <= 0)
	{
		return;
	}

	StartFromCurrentRemainingTime(false, false);
	OnTimerResumed.Broadcast();
}


void AACountdownTimerActor::StopTimer()
{
	// Stop es una cancelacion del ciclo actual.
	// A diferencia de Pause, no se concibe como un estado "continuable".
	ClearRuntimeTimers();
	RemainingTotalMilliseconds = InitialTotalMilliseconds;
	TimerState = ECountdownTimerState::Stopped;

	ResetRuntimeFlagsForFreshCycle();
	BroadcastTimerUpdated(true);
	OnTimerStopped.Broadcast();
}


void AACountdownTimerActor::ResetTimer()
{
	// Reset vuelve el timer al valor inicial y lo deja listo sin correr.
	ClearRuntimeTimers();
	RemainingTotalMilliseconds = InitialTotalMilliseconds;
	TimerState = ECountdownTimerState::Idle;

	ResetRuntimeFlagsForFreshCycle();
	BroadcastTimerUpdated(true);
}


void AACountdownTimerActor::FinishTimer()
{
	// Finish manual no debe relanzar el loop automaticamente.
	FinishTimerInternal(false);
}


void AACountdownTimerActor::AddTime(int32 InMinutes, int32 InSeconds, int32 InMilliseconds)
{
	const int64 DeltaMilliseconds = BuildTotalMilliseconds(InMinutes, InSeconds, InMilliseconds);
	if (DeltaMilliseconds <= 0)
	{
		return;
	}

	// Si estaba corriendo, primero congelamos el tiempo real restante para no
	// sumar sobre una copia desactualizada.
	if (TimerState == ECountdownTimerState::Running)
	{
		CaptureCurrentRemainingMilliseconds();
	}

	RemainingTotalMilliseconds += DeltaMilliseconds;

	// Fuera de una corrida activa, el "remaining" visible y la duracion base
	// deberian seguir representando el mismo valor para que StartTimer arranque
	// con el tiempo realmente configurado.
	if (TimerState != ECountdownTimerState::Running && TimerState != ECountdownTimerState::Paused)
	{
		InitialTotalMilliseconds = RemainingTotalMilliseconds;
		NormalizeConfiguredFieldsFromInitialDuration();
	}

	// Si al agregar tiempo salimos del umbral de "near end", permitimos que el
	// warning vuelva a emitirse mas adelante cuando el countdown vuelva a entrar.
	if (NearEndThresholdMs > 0 && RemainingTotalMilliseconds > NearEndThresholdMs)
	{
		bNearEndEventBroadcasted = false;
	}

	// Si el timer ya estaba terminado o detenido y se le agrega tiempo, queda en
	// Idle para que pueda arrancarse nuevamente de forma limpia.
	if ((TimerState == ECountdownTimerState::Finished || TimerState == ECountdownTimerState::Stopped) && RemainingTotalMilliseconds > 0)
	{
		TimerState = ECountdownTimerState::Idle;
	}

	if (TimerState == ECountdownTimerState::Running)
	{
		// Reanudamos la corrida con el nuevo valor restante.
		StartFromCurrentRemainingTime(false, false);
	}
	else
	{
		BroadcastTimerUpdated(true);
	}
}


void AACountdownTimerActor::SubtractTime(int32 InMinutes, int32 InSeconds, int32 InMilliseconds)
{
	const int64 DeltaMilliseconds = BuildTotalMilliseconds(InMinutes, InSeconds, InMilliseconds);
	if (DeltaMilliseconds <= 0)
	{
		return;
	}

	if (TimerState == ECountdownTimerState::Running)
	{
		CaptureCurrentRemainingMilliseconds();
	}

	RemainingTotalMilliseconds = FMath::Max<int64>(RemainingTotalMilliseconds - DeltaMilliseconds, 0LL);

	// Igual que en AddTime: si no hay una corrida activa, tratamos la operacion
	// como una reconfiguracion del valor base.
	if (TimerState != ECountdownTimerState::Running && TimerState != ECountdownTimerState::Paused)
	{
		InitialTotalMilliseconds = RemainingTotalMilliseconds;
		NormalizeConfiguredFieldsFromInitialDuration();
	}

	if (RemainingTotalMilliseconds == 0)
	{
		// Si la resta consume todo el tiempo, se interpreta como finalizacion
		// forzada. No relanzamos loop automaticamente porque no fue un vencimiento
		// natural del countdown.
		FinishTimerInternal(false);
		return;
	}

	if (TimerState == ECountdownTimerState::Running)
	{
		StartFromCurrentRemainingTime(false, false);
	}
	else
	{
		BroadcastTimerUpdated(true);
	}
}


void AACountdownTimerActor::GetRemainingTime(int32& OutMinutes, int32& OutSeconds, int32& OutMilliseconds) const
{
	SplitMillisecondsToTimeParts(GetRemainingTotalMilliseconds(), OutMinutes, OutSeconds, OutMilliseconds);
}


void AACountdownTimerActor::GetInitialTime(int32& OutMinutes, int32& OutSeconds, int32& OutMilliseconds) const
{
	SplitMillisecondsToTimeParts(InitialTotalMilliseconds, OutMinutes, OutSeconds, OutMilliseconds);
}


int64 AACountdownTimerActor::GetRemainingTotalMilliseconds() const
{
	if (TimerState == ECountdownTimerState::Running)
	{
		return ComputeRemainingMillisecondsFromCurrentRun(GetCurrentWorldTimeSeconds());
	}

	return RemainingTotalMilliseconds;
}


float AACountdownTimerActor::GetNormalizedProgress() const
{
	if (InitialTotalMilliseconds <= 0)
	{
		return 0.0f;
	}

	const float RawProgress = static_cast<float>(GetRemainingTotalMilliseconds()) / static_cast<float>(InitialTotalMilliseconds);
	return FMath::Clamp(RawProgress, 0.0f, 1.0f);
}


FString AACountdownTimerActor::GetFormattedRemainingTime(bool bIncludeMilliseconds) const
{
	int32 Minutes = 0;
	int32 Seconds = 0;
	int32 Milliseconds = 0;
	GetRemainingTime(Minutes, Seconds, Milliseconds);

	if (bIncludeMilliseconds)
	{
		return FString::Printf(TEXT("%02d:%02d:%03d"), Minutes, Seconds, Milliseconds);
	}

	return FString::Printf(TEXT("%02d:%02d"), Minutes, Seconds);
}


FTimerCheckpointSnapshot_stt AACountdownTimerActor::GetCurrentCheckpoint() const
{
	return BuildCheckpointSnapshot(TEXT(""));
}


FTimerCheckpointSnapshot_stt AACountdownTimerActor::CaptureCheckpoint(const FString& CheckpointTag)
{
	const FTimerCheckpointSnapshot_stt Snapshot = BuildCheckpointSnapshot(CheckpointTag);
	OnCheckpointCaptured.Broadcast(Snapshot);
	return Snapshot;
}


FTimerCheckpointSnapshot_stt AACountdownTimerActor::BPI_GetTimerCheckpoint_stt_Implementation() const
{
	return GetCurrentCheckpoint();
}


FTimerCheckpointSnapshot_stt AACountdownTimerActor::BPI_CaptureTimerCheckpoint_stt_Implementation(const FString& CheckpointTag)
{
	return CaptureCheckpoint(CheckpointTag);
}


int64 AACountdownTimerActor::BuildTotalMilliseconds(int32 InMinutes, int32 InSeconds, int32 InMilliseconds)
{
	const int64 SafeMinutes = FMath::Max(InMinutes, 0);
	const int64 SafeSeconds = FMath::Max(InSeconds, 0);
	const int64 SafeMilliseconds = FMath::Max(InMilliseconds, 0);

	return (SafeMinutes * 60000LL) + (SafeSeconds * 1000LL) + SafeMilliseconds;
}


void AACountdownTimerActor::SplitMillisecondsToTimeParts(int64 InTotalMilliseconds, int32& OutMinutes, int32& OutSeconds, int32& OutMilliseconds)
{
	const int64 SafeTotalMilliseconds = FMath::Max<int64>(InTotalMilliseconds, 0LL);

	OutMinutes = static_cast<int32>(SafeTotalMilliseconds / 60000LL);
	OutSeconds = static_cast<int32>((SafeTotalMilliseconds % 60000LL) / 1000LL);
	OutMilliseconds = static_cast<int32>(SafeTotalMilliseconds % 1000LL);
}


void AACountdownTimerActor::RebuildInitialDurationFromConfiguredFields()
{
	InitialTotalMilliseconds = BuildTotalMilliseconds(InitialMinutes, InitialSeconds, InitialMilliseconds);
}


void AACountdownTimerActor::NormalizeConfiguredFieldsFromInitialDuration()
{
	// Mantiene los campos de configuracion legibles y normalizados luego de SetTime.
	SplitMillisecondsToTimeParts(InitialTotalMilliseconds, InitialMinutes, InitialSeconds, InitialMilliseconds);
}


double AACountdownTimerActor::GetCurrentWorldTimeSeconds() const
{
	if (const UWorld* World = GetWorld())
	{
		// Usamos tiempo absoluto del mundo para que el countdown no derive por
		// acumular "restas fijas" de cada update.
		// Esto mantiene consistencia con el TimerManager del mundo y respeta el
		// comportamiento de tiempo del gameplay.
		return static_cast<double>(World->GetTimeSeconds());
	}

	return 0.0;
}


int64 AACountdownTimerActor::ComputeRemainingMillisecondsFromCurrentRun(double CurrentWorldTimeSeconds) const
{
	const double ElapsedSeconds = FMath::Max(CurrentWorldTimeSeconds - RunStartWorldTimeSeconds, 0.0);
	const int64 ElapsedMilliseconds = FMath::FloorToInt64(ElapsedSeconds * 1000.0);

	return FMath::Max<int64>(RemainingMillisecondsAtRunStart - ElapsedMilliseconds, 0LL);
}


void AACountdownTimerActor::CaptureCurrentRemainingMilliseconds()
{
	RemainingTotalMilliseconds = GetRemainingTotalMilliseconds();
}


void AACountdownTimerActor::StartFromCurrentRemainingTime(bool bBroadcastStartedEvent, bool bResetNearEndFlag)
{
	if (RemainingTotalMilliseconds <= 0)
	{
		UE_LOG(LogTemp, Warning, TEXT("AACountdownTimerActor::StartFromCurrentRemainingTime ignored on %s because RemainingTotalMilliseconds is 0."), *GetNameSafe(this));
		return;
	}

	TimerState = ECountdownTimerState::Running;
	RemainingMillisecondsAtRunStart = RemainingTotalMilliseconds;
	RunStartWorldTimeSeconds = GetCurrentWorldTimeSeconds();

	if (bResetNearEndFlag)
	{
		ResetRuntimeFlagsForFreshCycle();
	}

	ArmRuntimeTimers();

	if (bBroadcastStartedEvent)
	{
		OnTimerStarted.Broadcast();
	}

	BroadcastTimerUpdated(true);
}


void AACountdownTimerActor::ArmRuntimeTimers()
{
	if (!GetWorld() || RemainingTotalMilliseconds <= 0)
	{
		return;
	}

	ClearRuntimeTimers();

	const float SafeUpdateInterval = FMath::Max(UpdateIntervalSeconds, 0.005f);
	const float FinishDelaySeconds = static_cast<float>(RemainingTotalMilliseconds) / 1000.0f;

	// Timer repetitivo: se usa para notificar cambios intermedios a UI/gameplay.
	GetWorldTimerManager().SetTimer(
		UpdateTimerHandle,
		this,
		&AACountdownTimerActor::HandleUpdateTimerElapsed,
		SafeUpdateInterval,
		true);

	// Timer one-shot: se usa para cerrar el countdown con baja latencia.
	GetWorldTimerManager().SetTimer(
		FinishTimerHandle,
		this,
		&AACountdownTimerActor::HandleFinishTimerElapsed,
		FinishDelaySeconds,
		false);
}


void AACountdownTimerActor::ClearRuntimeTimers()
{
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(UpdateTimerHandle);
		World->GetTimerManager().ClearTimer(FinishTimerHandle);
	}
}


void AACountdownTimerActor::BroadcastTimerUpdated(bool bForceBroadcast)
{
	const int64 CurrentRemainingMilliseconds = GetRemainingTotalMilliseconds();

	if (!bForceBroadcast && CurrentRemainingMilliseconds == LastBroadcastRemainingMilliseconds)
	{
		return;
	}

	RemainingTotalMilliseconds = CurrentRemainingMilliseconds;
	LastBroadcastRemainingMilliseconds = CurrentRemainingMilliseconds;

	int32 Minutes = 0;
	int32 Seconds = 0;
	int32 Milliseconds = 0;
	SplitMillisecondsToTimeParts(CurrentRemainingMilliseconds, Minutes, Seconds, Milliseconds);

	OnTimerUpdated.Broadcast(
		Minutes,
		Seconds,
		Milliseconds,
		CurrentRemainingMilliseconds,
		GetNormalizedProgress());

	EvaluateNearEndEvent(CurrentRemainingMilliseconds);
}


void AACountdownTimerActor::EvaluateNearEndEvent(int64 CurrentRemainingMilliseconds)
{
	// El warning de fin cercano representa una condicion de una corrida activa.
	// Evitamos dispararlo durante Idle/Stopped/Finished por updates forzados.
	if (TimerState != ECountdownTimerState::Running)
	{
		return;
	}

	if (bNearEndEventBroadcasted)
	{
		return;
	}

	if (NearEndThresholdMs <= 0)
	{
		return;
	}

	// No se dispara en 0 exacto porque para ese caso existe OnTimerFinished.
	if (CurrentRemainingMilliseconds > 0 && CurrentRemainingMilliseconds <= NearEndThresholdMs)
	{
		bNearEndEventBroadcasted = true;
		OnTimerNearEnd.Broadcast(CurrentRemainingMilliseconds);
	}
}


void AACountdownTimerActor::HandleUpdateTimerElapsed()
{
	if (TimerState != ECountdownTimerState::Running)
	{
		return;
	}

	BroadcastTimerUpdated(false);
}


void AACountdownTimerActor::HandleFinishTimerElapsed()
{
	FinishTimerInternal(bLoop);
}


void AACountdownTimerActor::FinishTimerInternal(bool bRestartIfLooping)
{
	if (TimerState == ECountdownTimerState::Finished && RemainingTotalMilliseconds == 0 && !bRestartIfLooping)
	{
		return;
	}

	ClearRuntimeTimers();

	RemainingTotalMilliseconds = 0;
	TimerState = ECountdownTimerState::Finished;

	BroadcastTimerUpdated(true);
	OnTimerFinished.Broadcast();

	if (bRestartIfLooping && bLoop && InitialTotalMilliseconds > 0)
	{
		RemainingTotalMilliseconds = InitialTotalMilliseconds;
		StartFromCurrentRemainingTime(true, true);
	}
}


void AACountdownTimerActor::ResetRuntimeFlagsForFreshCycle()
{
	// Se usa cuando comienza una nueva corrida real o cuando se reconfigura.
	LastBroadcastRemainingMilliseconds = -1;
	bNearEndEventBroadcasted = false;
}


ETimerCheckpointState_stt AACountdownTimerActor::ConvertToCheckpointState(ECountdownTimerState InState)
{
	switch (InState)
	{
	case ECountdownTimerState::Running:
		return ETimerCheckpointState_stt::Running;
	case ECountdownTimerState::Paused:
		return ETimerCheckpointState_stt::Paused;
	case ECountdownTimerState::Stopped:
		return ETimerCheckpointState_stt::Stopped;
	case ECountdownTimerState::Finished:
		return ETimerCheckpointState_stt::Finished;
	case ECountdownTimerState::Idle:
	default:
		return ETimerCheckpointState_stt::Idle;
	}
}


FTimerCheckpointSnapshot_stt AACountdownTimerActor::BuildCheckpointSnapshot(const FString& CheckpointTag) const
{
	const int64 CurrentRemainingMilliseconds = GetRemainingTotalMilliseconds();

	int32 Minutes = 0;
	int32 Seconds = 0;
	int32 Milliseconds = 0;
	SplitMillisecondsToTimeParts(CurrentRemainingMilliseconds, Minutes, Seconds, Milliseconds);

	FTimerCheckpointSnapshot_stt Snapshot;
	Snapshot.CheckpointTag = CheckpointTag;
	Snapshot.TimerKind = ETimerCheckpointKind_stt::CountdownRemaining;
	Snapshot.TimerState = ConvertToCheckpointState(TimerState);
	Snapshot.Minutes = Minutes;
	Snapshot.Seconds = Seconds;
	Snapshot.Milliseconds = Milliseconds;
	Snapshot.TotalMilliseconds = CurrentRemainingMilliseconds;
	Snapshot.WholeSeconds = static_cast<int32>(CurrentRemainingMilliseconds / 1000LL);
	Snapshot.FormattedTime = FString::Printf(TEXT("%02d:%02d:%03d"), Minutes, Seconds, Milliseconds);
	return Snapshot;
}
