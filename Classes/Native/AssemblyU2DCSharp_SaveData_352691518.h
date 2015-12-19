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
// TorchControler
struct TorchControler_t1648798185_0;
// PhoneShake
struct PhoneShake_t_2092531853_0;
// System.String
struct String_t;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"

// SaveData
struct  SaveData_t_352691518_0  : public MonoBehaviour_t_92453903_0
{
	// Timer SaveData::timer
	Timer_t_1996765910_0 * ___timer_2;
	// TorchControler SaveData::torch
	TorchControler_t1648798185_0 * ___torch_3;
	// PhoneShake SaveData::shake
	PhoneShake_t_2092531853_0 * ___shake_4;
	// System.String SaveData::savepath
	String_t* ___savepath_5;
};
