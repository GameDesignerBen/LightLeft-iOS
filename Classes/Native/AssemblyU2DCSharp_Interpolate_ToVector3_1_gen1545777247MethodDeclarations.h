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

// Interpolate/ToVector3`1<System.Object>
struct ToVector3_1_t1545777247_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// System.Void Interpolate/ToVector3`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void ToVector3_1__ctor_m_133478805_0_gshared (ToVector3_1_t1545777247_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define ToVector3_1__ctor_m_133478805_0(__this, ___object, ___method, method) ((  void (*) (ToVector3_1_t1545777247_0 *, Object_t *, IntPtr_t, const MethodInfo*))ToVector3_1__ctor_m_133478805_0_gshared)(__this, ___object, ___method, method)
// UnityEngine.Vector3 Interpolate/ToVector3`1<System.Object>::Invoke(T)
extern "C"  Vector3_t_725341337_0  ToVector3_1_Invoke_m1249282367_0_gshared (ToVector3_1_t1545777247_0 * __this, Object_t * ___v, const MethodInfo* method);
#define ToVector3_1_Invoke_m1249282367_0(__this, ___v, method) ((  Vector3_t_725341337_0  (*) (ToVector3_1_t1545777247_0 *, Object_t *, const MethodInfo*))ToVector3_1_Invoke_m1249282367_0_gshared)(__this, ___v, method)
// System.IAsyncResult Interpolate/ToVector3`1<System.Object>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * ToVector3_1_BeginInvoke_m774210118_0_gshared (ToVector3_1_t1545777247_0 * __this, Object_t * ___v, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define ToVector3_1_BeginInvoke_m774210118_0(__this, ___v, ___callback, ___object, method) ((  Object_t * (*) (ToVector3_1_t1545777247_0 *, Object_t *, AsyncCallback_t_266361018_0 *, Object_t *, const MethodInfo*))ToVector3_1_BeginInvoke_m774210118_0_gshared)(__this, ___v, ___callback, ___object, method)
// UnityEngine.Vector3 Interpolate/ToVector3`1<System.Object>::EndInvoke(System.IAsyncResult)
extern "C"  Vector3_t_725341337_0  ToVector3_1_EndInvoke_m_437893131_0_gshared (ToVector3_1_t1545777247_0 * __this, Object_t * ___result, const MethodInfo* method);
#define ToVector3_1_EndInvoke_m_437893131_0(__this, ___result, method) ((  Vector3_t_725341337_0  (*) (ToVector3_1_t1545777247_0 *, Object_t *, const MethodInfo*))ToVector3_1_EndInvoke_m_437893131_0_gshared)(__this, ___result, method)
