#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Events.UnityEvent
struct UnityEvent_t158998417_0;
// System.Collections.Generic.List`1<System.Single>
struct List_1_t905949904_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// PhoneShake
struct  PhoneShake_t_2092531853_0  : public MonoBehaviour_t_92453903_0
{
	// System.Boolean PhoneShake::shakeDetectionEnabled
	bool ___shakeDetectionEnabled_2;
	// System.Single PhoneShake::accelerometerHz
	float ___accelerometerHz_3;
	// System.Single PhoneShake::lowPassKernelWidthInSeconds
	float ___lowPassKernelWidthInSeconds_4;
	// System.Single PhoneShake::shakeMagnitudeThreshold
	float ___shakeMagnitudeThreshold_5;
	// System.Single PhoneShake::deltaShakeMagnitudeThreshold
	float ___deltaShakeMagnitudeThreshold_6;
	// System.Single PhoneShake::timeBetweenShakeEvents
	float ___timeBetweenShakeEvents_7;
	// System.Int32 PhoneShake::shakeCountThreshold
	int32_t ___shakeCountThreshold_8;
	// UnityEngine.Events.UnityEvent PhoneShake::onShakenEnough
	UnityEvent_t158998417_0 * ___onShakenEnough_9;
	// System.Single PhoneShake::updateFreq
	float ___updateFreq_10;
	// System.Single PhoneShake::lowPassFilter
	float ___lowPassFilter_11;
	// UnityEngine.Vector3 PhoneShake::lowPassValueInitial
	Vector3_t_725341337_0  ___lowPassValueInitial_12;
	// UnityEngine.Vector3 PhoneShake::lowPassValue
	Vector3_t_725341337_0  ___lowPassValue_13;
	// System.Single PhoneShake::lowPassFilter2
	float ___lowPassFilter2_14;
	// UnityEngine.Vector3 PhoneShake::lowPassValue2
	Vector3_t_725341337_0  ___lowPassValue2_15;
	// System.Single PhoneShake::lastSampleTime
	float ___lastSampleTime_16;
	// System.Single PhoneShake::shakeTimer
	float ___shakeTimer_17;
	// System.Collections.Generic.List`1<System.Single> PhoneShake::shakeList
	List_1_t905949904_0 * ___shakeList_18;
};
