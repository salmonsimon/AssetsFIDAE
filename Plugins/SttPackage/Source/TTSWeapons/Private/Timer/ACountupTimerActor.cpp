#include "Timer/ACountupTimerActor.h"

#include "Engine/World.h"
#include "TimerManager.h"

AACountupTimerActor::AACountupTimerActor()
{
	// Este actor no necesita Tick.
	// Toda la logica se apoya en FTimerManager y en calculo por timestamp.
	PrimaryActorTick.bCanEverTick = false;

	TimerState = ECountupTimerState::Idle;
}

void AACountupTimerActor::BeginPlay()
{
	Super::BeginPlay();

	// Consolidamos los campos editables a la unidad interna canonica.
	RebuildInitialDurationFromConfiguredFields();
	RebuildMaxDurationFromConfiguredFields();
	ClampInitialElapsedAgainstMaxDuration();
	NormalizeConfiguredFieldsFromDurations();

	// Al inicio, el valor acumulado visible coincide con el valor inicial.
	ElapsedTotalMilliseconds = InitialElapsedMilliseconds;
	ResetRuntimeTrackingForFreshCycle();
	BroadcastTimerUpdated(true);

	if (bAutoStart)
	{
		StartTimer();
	}
}

void AACountupTimerActor::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	ClearRuntimeTimers();
	Super::EndPlay(EndPlayReason);
}

void AACountupTimerActor::SetInitialTime(int32 InMinutes, int32 InSeconds, int32 InMilliseconds)
{
	// Se considera una reconfiguracion explicita.
	// Siempre corta la corrida actual y deja el actor listo en Idle.
	ClearRuntimeTimers();

	InitialElapsedMilliseconds = BuildTotalMilliseconds(InMinutes, InSeconds, InMilliseconds);
	ClampInitialElapsedAgainstMaxDuration();
	ElapsedTotalMilliseconds = InitialElapsedMilliseconds;
	TimerState = ECountupTimerState::Idle;

	NormalizeConfiguredFieldsFromDurations();
	ResetRuntimeTrackingForFreshCycle();
	BroadcastTimerUpdated(true);
}

void AACountupTimerActor::SetTime(int32 InMinutes, int32 InSeconds, int32 InMilliseconds)
{
	SetInitialTime(InMinutes, InSeconds, InMilliseconds);
}

void AACountupTimerActor::SetMaxDuration(int32 InMinutes, int32 InSeconds, int32 InMilliseconds, bool bEnableMaxDuration)
{
	// Igual que SetInitialTime: reconfigurar el maximo reinicia el runtime.
	ClearRuntimeTimers();

	MaxTotalMilliseconds = BuildTotalMilliseconds(InMinutes, InSeconds, InMilliseconds);
	bUseMaxDuration = bEnableMaxDuration;

	ClampInitialElapsedAgainstMaxDuration();
	ElapsedTotalMilliseconds = InitialElapsedMilliseconds;
	TimerState = ECountupTimerState::Idle;

	NormalizeConfiguredFieldsFromDurations();
	ResetRuntimeTrackingForFreshCycle();
	BroadcastTimerUpdated(true);
}

void AACountupTimerActor::StartTimer()
{
	// Start siempre abre una corrida nueva desde el tiempo inicial configurado.
	ClearRuntimeTimers();
	ElapsedTotalMilliseconds = InitialElapsedMilliseconds;
	StartFromCurrentElapsedTime(true, true);
}

void AACountupTimerActor::PauseTimer()
{
	if (TimerState != ECountupTimerState::Running)
	{
		return;
	}

	// Capturamos el valor real acumulado al pausar para retomar luego con
	// continuidad exacta.
	CaptureCurrentElapsedMilliseconds();
	ClearRuntimeTimers();
	TimerState = ECountupTimerState::Paused;

	BroadcastTimerUpdated(true);
	OnTimerPaused.Broadcast();
}

void AACountupTimerActor::ResumeTimer()
{
	if (TimerState != ECountupTimerState::Paused)
	{
		return;
	}

	StartFromCurrentElapsedTime(false, false);
	OnTimerResumed.Broadcast();
}

void AACountupTimerActor::StopTimer()
{
	// Stop cancela la corrida actual y devuelve el actor a su base inicial.
	ClearRuntimeTimers();
	ElapsedTotalMilliseconds = InitialElapsedMilliseconds;
	TimerState = ECountupTimerState::Stopped;

	ResetRuntimeTrackingForFreshCycle();
	BroadcastTimerUpdated(true);
	OnTimerStopped.Broadcast();
}

void AACountupTimerActor::ResetTimer()
{
	// Reset deja el actor listo sin correr.
	ClearRuntimeTimers();
	ElapsedTotalMilliseconds = InitialElapsedMilliseconds;
	TimerState = ECountupTimerState::Idle;

	ResetRuntimeTrackingForFreshCycle();
	BroadcastTimerUpdated(true);
}

void AACountupTimerActor::FinishTimer()
{
	if (TimerState == ECountupTimerState::Running)
	{
		CaptureCurrentElapsedMilliseconds();
	}

	FinishTimerInternal();
}

void AACountupTimerActor::ClearSecondLog()
{
	SecondLog.Reset();
	LastRegisteredWholeSecond = INDEX_NONE;
}

void AACountupTimerActor::GetElapsedTime(int32& OutMinutes, int32& OutSeconds, int32& OutMilliseconds) const
{
	SplitMillisecondsToTimeParts(GetElapsedTotalMilliseconds(), OutMinutes, OutSeconds, OutMilliseconds);
}

void AACountupTimerActor::GetInitialTime(int32& OutMinutes, int32& OutSeconds, int32& OutMilliseconds) const
{
	SplitMillisecondsToTimeParts(InitialElapsedMilliseconds, OutMinutes, OutSeconds, OutMilliseconds);
}

void AACountupTimerActor::GetMaxDuration(int32& OutMinutes, int32& OutSeconds, int32& OutMilliseconds) const
{
	SplitMillisecondsToTimeParts(MaxTotalMilliseconds, OutMinutes, OutSeconds, OutMilliseconds);
}

int64 AACountupTimerActor::GetElapsedTotalMilliseconds() const
{
	if (TimerState == ECountupTimerState::Running)
	{
		return ComputeElapsedMillisecondsFromCurrentRun(GetCurrentWorldTimeSeconds());
	}

	return ElapsedTotalMilliseconds;
}

float AACountupTimerActor::GetNormalizedProgressToMax() const
{
	if (!HasActiveMaxDuration())
	{
		return 0.0f;
	}

	const float RawProgress = static_cast<float>(GetElapsedTotalMilliseconds()) / static_cast<float>(MaxTotalMilliseconds);
	return FMath::Clamp(RawProgress, 0.0f, 1.0f);
}

int32 AACountupTimerActor::GetElapsedWholeSeconds() const
{
	return static_cast<int32>(FMath::Max<int64>(GetElapsedTotalMilliseconds(), 0LL) / 1000LL);
}

bool AACountupTimerActor::HasActiveMaxDuration() const
{
	return bUseMaxDuration && MaxTotalMilliseconds > 0;
}

FString AACountupTimerActor::GetFormattedElapsedTime(bool bIncludeMilliseconds) const
{
	int32 Minutes = 0;
	int32 Seconds = 0;
	int32 Milliseconds = 0;
	GetElapsedTime(Minutes, Seconds, Milliseconds);

	if (bIncludeMilliseconds)
	{
		return FString::Printf(TEXT("%02d:%02d:%03d"), Minutes, Seconds, Milliseconds);
	}

	return FString::Printf(TEXT("%02d:%02d"), Minutes, Seconds);
}

FTimerCheckpointSnapshot_stt AACountupTimerActor::GetCurrentCheckpoint() const
{
	return BuildCheckpointSnapshot(TEXT(""));
}

FTimerCheckpointSnapshot_stt AACountupTimerActor::CaptureCheckpoint(const FString& CheckpointTag)
{
	const FTimerCheckpointSnapshot_stt Snapshot = BuildCheckpointSnapshot(CheckpointTag);
	OnCheckpointCaptured.Broadcast(Snapshot);
	return Snapshot;
}

FTimerCheckpointSnapshot_stt AACountupTimerActor::BPI_GetTimerCheckpoint_stt_Implementation() const
{
	return GetCurrentCheckpoint();
}

FTimerCheckpointSnapshot_stt AACountupTimerActor::BPI_CaptureTimerCheckpoint_stt_Implementation(const FString& CheckpointTag)
{
	return CaptureCheckpoint(CheckpointTag);
}

int64 AACountupTimerActor::BuildTotalMilliseconds(int32 InMinutes, int32 InSeconds, int32 InMilliseconds)
{
	const int64 SafeMinutes = FMath::Max(InMinutes, 0);
	const int64 SafeSeconds = FMath::Max(InSeconds, 0);
	const int64 SafeMilliseconds = FMath::Max(InMilliseconds, 0);

	return (SafeMinutes * 60000LL) + (SafeSeconds * 1000LL) + SafeMilliseconds;
}

void AACountupTimerActor::SplitMillisecondsToTimeParts(int64 InTotalMilliseconds, int32& OutMinutes, int32& OutSeconds, int32& OutMilliseconds)
{
	const int64 SafeTotalMilliseconds = FMath::Max<int64>(InTotalMilliseconds, 0LL);

	OutMinutes = static_cast<int32>(SafeTotalMilliseconds / 60000LL);
	OutSeconds = static_cast<int32>((SafeTotalMilliseconds % 60000LL) / 1000LL);
	OutMilliseconds = static_cast<int32>(SafeTotalMilliseconds % 1000LL);
}

void AACountupTimerActor::RebuildInitialDurationFromConfiguredFields()
{
	InitialElapsedMilliseconds = BuildTotalMilliseconds(InitialMinutes, InitialSeconds, InitialMilliseconds);
}

void AACountupTimerActor::RebuildMaxDurationFromConfiguredFields()
{
	MaxTotalMilliseconds = BuildTotalMilliseconds(MaxMinutes, MaxSeconds, MaxMilliseconds);
}

void AACountupTimerActor::NormalizeConfiguredFieldsFromDurations()
{
	// Mantiene consistentes y legibles los campos visibles en el editor.
	SplitMillisecondsToTimeParts(InitialElapsedMilliseconds, InitialMinutes, InitialSeconds, InitialMilliseconds);
	SplitMillisecondsToTimeParts(MaxTotalMilliseconds, MaxMinutes, MaxSeconds, MaxMilliseconds);
}

void AACountupTimerActor::ClampInitialElapsedAgainstMaxDuration()
{
	if (HasActiveMaxDuration() && InitialElapsedMilliseconds > MaxTotalMilliseconds)
	{
		InitialElapsedMilliseconds = MaxTotalMilliseconds;
	}
}

double AACountupTimerActor::GetCurrentWorldTimeSeconds() const
{
	if (const UWorld* World = GetWorld())
	{
		// Igual que en el countdown: usamos tiempo absoluto del mundo como fuente
		// de verdad para evitar drift por restas acumuladas.
		return static_cast<double>(World->GetTimeSeconds());
	}

	return 0.0;
}

int64 AACountupTimerActor::ComputeElapsedMillisecondsFromCurrentRun(double CurrentWorldTimeSeconds) const
{
	const double ElapsedSecondsSinceRunStart = FMath::Max(CurrentWorldTimeSeconds - RunStartWorldTimeSeconds, 0.0);
	const int64 ElapsedMillisecondsSinceRunStart = FMath::FloorToInt64(ElapsedSecondsSinceRunStart * 1000.0);

	int64 CurrentElapsedMilliseconds = ElapsedMillisecondsAtRunStart + ElapsedMillisecondsSinceRunStart;
	if (HasActiveMaxDuration())
	{
		CurrentElapsedMilliseconds = FMath::Min(CurrentElapsedMilliseconds, MaxTotalMilliseconds);
	}

	return FMath::Max<int64>(CurrentElapsedMilliseconds, 0LL);
}

void AACountupTimerActor::CaptureCurrentElapsedMilliseconds()
{
	ElapsedTotalMilliseconds = GetElapsedTotalMilliseconds();
}

void AACountupTimerActor::StartFromCurrentElapsedTime(bool bBroadcastStartedEvent, bool bResetRuntimeTracking)
{
	if (HasActiveMaxDuration() && ElapsedTotalMilliseconds >= MaxTotalMilliseconds)
	{
		ElapsedTotalMilliseconds = MaxTotalMilliseconds;
		FinishTimerInternal();
		return;
	}

	TimerState = ECountupTimerState::Running;
	ElapsedMillisecondsAtRunStart = ElapsedTotalMilliseconds;
	RunStartWorldTimeSeconds = GetCurrentWorldTimeSeconds();

	if (bResetRuntimeTracking)
	{
		ResetRuntimeTrackingForFreshCycle();
	}

	ArmRuntimeTimers();

	if (bBroadcastStartedEvent)
	{
		OnTimerStarted.Broadcast();
	}

	BroadcastTimerUpdated(true);
}

void AACountupTimerActor::ArmRuntimeTimers()
{
	if (!GetWorld())
	{
		return;
	}

	ClearRuntimeTimers();

	const float SafeUpdateInterval = FMath::Max(UpdateIntervalSeconds, 0.005f);

	// Timer repetitivo para updates intermedios de UI/gameplay.
	GetWorldTimerManager().SetTimer(
		UpdateTimerHandle,
		this,
		&AACountupTimerActor::HandleUpdateTimerElapsed,
		SafeUpdateInterval,
		true);

	// Solo armamos finalizacion automatica si existe un maximo activo.
	if (HasActiveMaxDuration())
	{
		const int64 CurrentElapsedMilliseconds = GetElapsedTotalMilliseconds();
		const int64 RemainingToMaxMilliseconds = FMath::Max<int64>(MaxTotalMilliseconds - CurrentElapsedMilliseconds, 0LL);
		if (RemainingToMaxMilliseconds <= 0)
		{
			HandleFinishTimerElapsed();
			return;
		}

		const float FinishDelaySeconds = static_cast<float>(RemainingToMaxMilliseconds) / 1000.0f;
		GetWorldTimerManager().SetTimer(
			FinishTimerHandle,
			this,
			&AACountupTimerActor::HandleFinishTimerElapsed,
			FinishDelaySeconds,
			false);
	}
}

void AACountupTimerActor::ClearRuntimeTimers()
{
	if (UWorld* World = GetWorld())
	{
		World->GetTimerManager().ClearTimer(UpdateTimerHandle);
		World->GetTimerManager().ClearTimer(FinishTimerHandle);
	}
}

void AACountupTimerActor::BroadcastTimerUpdated(bool bForceBroadcast)
{
	const int64 CurrentElapsedMilliseconds = GetElapsedTotalMilliseconds();
	if (!bForceBroadcast && CurrentElapsedMilliseconds == LastBroadcastElapsedMilliseconds)
	{
		return;
	}

	ElapsedTotalMilliseconds = CurrentElapsedMilliseconds;
	LastBroadcastElapsedMilliseconds = CurrentElapsedMilliseconds;

	int32 Minutes = 0;
	int32 Seconds = 0;
	int32 Milliseconds = 0;
	SplitMillisecondsToTimeParts(CurrentElapsedMilliseconds, Minutes, Seconds, Milliseconds);

	OnTimerUpdated.Broadcast(
		Minutes,
		Seconds,
		Milliseconds,
		CurrentElapsedMilliseconds);

	// El log por segundo representa una corrida real.
	// Evitamos poblarlo en BeginPlay, Reset, Stop o reconfiguraciones inactivas.
	if (TimerState == ECountupTimerState::Running || (TimerState == ECountupTimerState::Finished && LastRegisteredWholeSecond != INDEX_NONE))
	{
		ProcessPassedWholeSeconds(CurrentElapsedMilliseconds);
	}
}

void AACountupTimerActor::ProcessPassedWholeSeconds(int64 CurrentElapsedMilliseconds)
{
	const int32 CurrentWholeSecond = static_cast<int32>(FMath::Max<int64>(CurrentElapsedMilliseconds, 0LL) / 1000LL);
	const int32 FirstWholeSecondToRegister = (LastRegisteredWholeSecond == INDEX_NONE)
		? CurrentWholeSecond
		: (LastRegisteredWholeSecond + 1);

	for (int32 WholeSecond = FirstWholeSecondToRegister; WholeSecond <= CurrentWholeSecond; ++WholeSecond)
	{
		RegisterWholeSecond(WholeSecond);
	}
}

void AACountupTimerActor::RegisterWholeSecond(int32 WholeSecond)
{
	if (WholeSecond == LastRegisteredWholeSecond)
	{
		return;
	}

	FCountupSecondLogEntry Entry;
	Entry.ReachedWholeSecond = WholeSecond;
	Entry.ReachedElapsedTotalMilliseconds = static_cast<int64>(WholeSecond) * 1000LL;

	SecondLog.Add(Entry);
	LastRegisteredWholeSecond = WholeSecond;
	OnSecondReached.Broadcast(Entry.ReachedWholeSecond, Entry.ReachedElapsedTotalMilliseconds);
}

void AACountupTimerActor::FinishTimerInternal()
{
	if (TimerState == ECountupTimerState::Finished)
	{
		return;
	}

	ClearRuntimeTimers();

	if (HasActiveMaxDuration())
	{
		ElapsedTotalMilliseconds = FMath::Min(ElapsedTotalMilliseconds, MaxTotalMilliseconds);
	}

	TimerState = ECountupTimerState::Finished;
	BroadcastTimerUpdated(true);
	OnTimerFinished.Broadcast();
}

void AACountupTimerActor::ResetRuntimeTrackingForFreshCycle()
{
	// Se usa cuando comienza una corrida nueva o cuando se reconfigura el actor.
	LastBroadcastElapsedMilliseconds = -1;
	LastRegisteredWholeSecond = INDEX_NONE;
	SecondLog.Reset();
}

void AACountupTimerActor::HandleUpdateTimerElapsed()
{
	if (TimerState != ECountupTimerState::Running)
	{
		return;
	}

	BroadcastTimerUpdated(false);
}

void AACountupTimerActor::HandleFinishTimerElapsed()
{
	if (HasActiveMaxDuration())
	{
		ElapsedTotalMilliseconds = MaxTotalMilliseconds;
	}
	else if (TimerState == ECountupTimerState::Running)
	{
		CaptureCurrentElapsedMilliseconds();
	}

	FinishTimerInternal();
}

ETimerCheckpointState_stt AACountupTimerActor::ConvertToCheckpointState(ECountupTimerState InState)
{
	switch (InState)
	{
	case ECountupTimerState::Running:
		return ETimerCheckpointState_stt::Running;
	case ECountupTimerState::Paused:
		return ETimerCheckpointState_stt::Paused;
	case ECountupTimerState::Stopped:
		return ETimerCheckpointState_stt::Stopped;
	case ECountupTimerState::Finished:
		return ETimerCheckpointState_stt::Finished;
	case ECountupTimerState::Idle:
	default:
		return ETimerCheckpointState_stt::Idle;
	}
}

FTimerCheckpointSnapshot_stt AACountupTimerActor::BuildCheckpointSnapshot(const FString& CheckpointTag) const
{
	const int64 CurrentElapsedMilliseconds = GetElapsedTotalMilliseconds();

	int32 Minutes = 0;
	int32 Seconds = 0;
	int32 Milliseconds = 0;
	SplitMillisecondsToTimeParts(CurrentElapsedMilliseconds, Minutes, Seconds, Milliseconds);

	FTimerCheckpointSnapshot_stt Snapshot;
	Snapshot.CheckpointTag = CheckpointTag;
	Snapshot.TimerKind = ETimerCheckpointKind_stt::CountupElapsed;
	Snapshot.TimerState = ConvertToCheckpointState(TimerState);
	Snapshot.Minutes = Minutes;
	Snapshot.Seconds = Seconds;
	Snapshot.Milliseconds = Milliseconds;
	Snapshot.TotalMilliseconds = CurrentElapsedMilliseconds;
	Snapshot.WholeSeconds = static_cast<int32>(CurrentElapsedMilliseconds / 1000LL);
	Snapshot.FormattedTime = FString::Printf(TEXT("%02d:%02d:%03d"), Minutes, Seconds, Milliseconds);
	return Snapshot;
}
