#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// TorchControler
struct TorchControler_t1648798185_0;
// UnityEngine.UI.Text
struct Text_t_204341102_0;
// BatteryController
struct BatteryController_t601264110_0;
// AppearancePanel
struct AppearancePanel_t1607131045_0;
// UnityEngine.Events.UnityEvent
struct UnityEvent_t158998417_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "AssemblyU2DCSharp_ClockAppearance_2120114505.h"

// Timer
struct  Timer_t_1996765910_0  : public MonoBehaviour_t_92453903_0
{
	// System.Single Timer::MAX_TIME
	float ___MAX_TIME_2;
	// TorchControler Timer::torch
	TorchControler_t1648798185_0 * ___torch_3;
	// UnityEngine.UI.Text Timer::settingsMinutes
	Text_t_204341102_0 * ___settingsMinutes_4;
	// UnityEngine.UI.Text Timer::settingsSeconds
	Text_t_204341102_0 * ___settingsSeconds_5;
	// UnityEngine.UI.Text Timer::lightTimer
	Text_t_204341102_0 * ___lightTimer_6;
	// UnityEngine.UI.Text Timer::lightTimerPunctuation
	Text_t_204341102_0 * ___lightTimerPunctuation_7;
	// BatteryController Timer::batteryController
	BatteryController_t601264110_0 * ___batteryController_8;
	// System.Int32 Timer::maxBonuses
	int32_t ___maxBonuses_9;
	// System.Single Timer::startValue
	float ___startValue_10;
	// System.Boolean Timer::useColor
	bool ___useColor_11;
	// ClockAppearance Timer::appearance
	int32_t ___appearance_12;
	// AppearancePanel Timer::appearancePanelLogic
	AppearancePanel_t1607131045_0 * ___appearancePanelLogic_13;
	// UnityEngine.Events.UnityEvent Timer::OnExpired
	UnityEvent_t158998417_0 * ___OnExpired_14;
	// System.Single Timer::currentTime
	float ___currentTime_15;
	// System.Single Timer::bonusesGiven
	float ___bonusesGiven_16;
	// System.Boolean Timer::<isRunning>k__BackingField
	bool ___U3CisRunningU3Ek__BackingField_17;
};
