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

// Interpolate/ToVector3`1<UnityEngine.Vector3>
struct ToVector3_1_t1113505316_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// System.Void Interpolate/ToVector3`1<UnityEngine.Vector3>::.ctor(System.Object,System.IntPtr)
extern "C"  void ToVector3_1__ctor_m_1061369872_0_gshared (ToVector3_1_t1113505316_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define ToVector3_1__ctor_m_1061369872_0(__this, ___object, ___method, method) ((  void (*) (ToVector3_1_t1113505316_0 *, Object_t *, IntPtr_t, const MethodInfo*))ToVector3_1__ctor_m_1061369872_0_gshared)(__this, ___object, ___method, method)
// UnityEngine.Vector3 Interpolate/ToVector3`1<UnityEngine.Vector3>::Invoke(T)
extern "C"  Vector3_t_725341337_0  ToVector3_1_Invoke_m_2001307750_0_gshared (ToVector3_1_t1113505316_0 * __this, Vector3_t_725341337_0  ___v, const MethodInfo* method);
#define ToVector3_1_Invoke_m_2001307750_0(__this, ___v, method) ((  Vector3_t_725341337_0  (*) (ToVector3_1_t1113505316_0 *, Vector3_t_725341337_0 , const MethodInfo*))ToVector3_1_Invoke_m_2001307750_0_gshared)(__this, ___v, method)
// System.IAsyncResult Interpolate/ToVector3`1<UnityEngine.Vector3>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * ToVector3_1_BeginInvoke_m_1970046687_0_gshared (ToVector3_1_t1113505316_0 * __this, Vector3_t_725341337_0  ___v, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define ToVector3_1_BeginInvoke_m_1970046687_0(__this, ___v, ___callback, ___object, method) ((  Object_t * (*) (ToVector3_1_t1113505316_0 *, Vector3_t_725341337_0 , AsyncCallback_t_266361018_0 *, Object_t *, const MethodInfo*))ToVector3_1_BeginInvoke_m_1970046687_0_gshared)(__this, ___v, ___callback, ___object, method)
// UnityEngine.Vector3 Interpolate/ToVector3`1<UnityEngine.Vector3>::EndInvoke(System.IAsyncResult)
extern "C"  Vector3_t_725341337_0  ToVector3_1_EndInvoke_m2047897722_0_gshared (ToVector3_1_t1113505316_0 * __this, Object_t * ___result, const MethodInfo* method);
#define ToVector3_1_EndInvoke_m2047897722_0(__this, ___result, method) ((  Vector3_t_725341337_0  (*) (ToVector3_1_t1113505316_0 *, Object_t *, const MethodInfo*))ToVector3_1_EndInvoke_m2047897722_0_gshared)(__this, ___result, method)
