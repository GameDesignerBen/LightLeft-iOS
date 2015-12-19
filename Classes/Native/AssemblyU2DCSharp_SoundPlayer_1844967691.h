#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AudioSource
struct AudioSource_t812398632_0;
// UnityEngine.AudioClip
struct AudioClip_t719917725_0;

#include "UnityEngine_UnityEngine_MonoBehaviour_92453903.h"

// SoundPlayer
struct  SoundPlayer_t_1844967691_0  : public MonoBehaviour_t_92453903_0
{
	// UnityEngine.AudioSource SoundPlayer::source
	AudioSource_t812398632_0 * ___source_2;
	// UnityEngine.AudioClip SoundPlayer::highSound
	AudioClip_t719917725_0 * ___highSound_3;
	// UnityEngine.AudioClip SoundPlayer::lowSound
	AudioClip_t719917725_0 * ___lowSound_4;
};
