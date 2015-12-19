#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.EventSystems.TouchInputModule
struct TouchInputModule_t2081937734_0;
// UnityEngine.EventSystems.StandaloneInputModule
struct StandaloneInputModule_t_1674242174_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"

// UIMovement
struct  UIMovement_t_613619586_0  : public MonoBehaviour_t_92453903_0
{
	// System.Single UIMovement::transitionTimer
	float ___transitionTimer_2;
	// UnityEngine.EventSystems.TouchInputModule UIMovement::eventSystemTouches
	TouchInputModule_t2081937734_0 * ___eventSystemTouches_3;
	// UnityEngine.EventSystems.StandaloneInputModule UIMovement::eventSystemStandaloneInput
	StandaloneInputModule_t_1674242174_0 * ___eventSystemStandaloneInput_4;
};
