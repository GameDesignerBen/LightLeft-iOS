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
// UnityEngine.UI.Image
struct Image_t_2049549674_0;
// UnityEngine.GameObject
struct GameObject_t_184308134_0;
// UnityEngine.UI.Image[]
struct ImageU5BU5D_t_486180491_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"

// BatteryController
struct  BatteryController_t601264110_0  : public MonoBehaviour_t_92453903_0
{
	// Timer BatteryController::timer
	Timer_t_1996765910_0 * ___timer_2;
	// UnityEngine.UI.Image BatteryController::Battery
	Image_t_2049549674_0 * ___Battery_3;
	// UnityEngine.UI.Image BatteryController::BatteryFill
	Image_t_2049549674_0 * ___BatteryFill_4;
	// UnityEngine.GameObject BatteryController::segmentContainer
	GameObject_t_184308134_0 * ___segmentContainer_5;
	// System.Boolean BatteryController::isSegmented
	bool ___isSegmented_6;
	// UnityEngine.UI.Image[] BatteryController::segments
	ImageU5BU5D_t_486180491_0* ___segments_7;
};
