#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Boolean UnityEngine.PlayerPrefs::TrySetInt(System.String,System.Int32)
extern "C"  bool PlayerPrefs_TrySetInt_m2066630347_0 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.PlayerPrefs::TrySetFloat(System.String,System.Single)
extern "C"  bool PlayerPrefs_TrySetFloat_m96551332_0 (Object_t * __this /* static, unused */, String_t* ___key, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
extern "C"  void PlayerPrefs_SetInt_m_809795300_0 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
extern "C"  int32_t PlayerPrefs_GetInt_m_662221016_0 (Object_t * __this /* static, unused */, String_t* ___key, int32_t ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
extern "C"  int32_t PlayerPrefs_GetInt_m1334009359_0 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
extern "C"  void PlayerPrefs_SetFloat_m1687591347_0 (Object_t * __this /* static, unused */, String_t* ___key, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String,System.Single)
extern "C"  float PlayerPrefs_GetFloat_m1210224051_0 (Object_t * __this /* static, unused */, String_t* ___key, float ___defaultValue, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String)
extern "C"  float PlayerPrefs_GetFloat_m_115940530_0 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
extern "C"  bool PlayerPrefs_HasKey_m2032560073_0 (Object_t * __this /* static, unused */, String_t* ___key, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.PlayerPrefs::Save()
extern "C"  void PlayerPrefs_Save_m_403428777_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
