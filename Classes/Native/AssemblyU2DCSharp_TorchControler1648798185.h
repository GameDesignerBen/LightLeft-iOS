#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Timer
struct Timer_t_1996765910_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// LightPanel
struct LightPanel_t_480130103_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "AssemblyU2DCSharp_TorchProfile626778248.h"

// TorchControler
struct  TorchControler_t1648798185_0  : public MonoBehaviour_t_92453903_0
{
	// Timer TorchControler::timerObject
	Timer_t_1996765910_0 * ___timerObject_2;
	// System.Boolean TorchControler::isOn
	bool ___isOn_3;
	// System.Boolean TorchControler::flicker
	bool ___flicker_4;
	// System.Boolean TorchControler::tapOnOff
	bool ___tapOnOff_5;
	// System.Single TorchControler::maxBrightness
	float ___maxBrightness_6;
	// TorchProfile TorchControler::profile
	int32_t ___profile_7;
	// UnityEngine.Transform TorchControler::settingsWarning
	Transform_t1584899523_0 * ___settingsWarning_8;
	// System.Boolean TorchControler::canAccessCamera
	bool ___canAccessCamera_9;
	// System.Single TorchControler::brightness
	float ___brightness_10;
	// System.Single TorchControler::bMod
	float ___bMod_11;
	// System.Single TorchControler::flickerTimer
	float ___flickerTimer_12;
	// System.Single TorchControler::timer
	float ___timer_13;
	// System.Single TorchControler::bonusTimer
	float ___bonusTimer_14;
	// LightPanel TorchControler::lightPanel
	LightPanel_t_480130103_0 * ___lightPanel_15;
};
