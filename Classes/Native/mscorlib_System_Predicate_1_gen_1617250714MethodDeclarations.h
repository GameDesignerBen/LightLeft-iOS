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

// System.Predicate`1<System.Single>
struct Predicate_1_t_1617250714_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void System.Predicate`1<System.Single>::.ctor(System.Object,System.IntPtr)
extern "C"  void Predicate_1__ctor_m1094778552_0_gshared (Predicate_1_t_1617250714_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method);
#define Predicate_1__ctor_m1094778552_0(__this, ___object, ___method, method) ((  void (*) (Predicate_1_t_1617250714_0 *, Object_t *, IntPtr_t, const MethodInfo*))Predicate_1__ctor_m1094778552_0_gshared)(__this, ___object, ___method, method)
// System.Boolean System.Predicate`1<System.Single>::Invoke(T)
extern "C"  bool Predicate_1_Invoke_m1825106574_0_gshared (Predicate_1_t_1617250714_0 * __this, float ___obj, const MethodInfo* method);
#define Predicate_1_Invoke_m1825106574_0(__this, ___obj, method) ((  bool (*) (Predicate_1_t_1617250714_0 *, float, const MethodInfo*))Predicate_1_Invoke_m1825106574_0_gshared)(__this, ___obj, method)
// System.IAsyncResult System.Predicate`1<System.Single>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern "C"  Object_t * Predicate_1_BeginInvoke_m_1337711135_0_gshared (Predicate_1_t_1617250714_0 * __this, float ___obj, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method);
#define Predicate_1_BeginInvoke_m_1337711135_0(__this, ___obj, ___callback, ___object, method) ((  Object_t * (*) (Predicate_1_t_1617250714_0 *, float, AsyncCallback_t_266361018_0 *, Object_t *, const MethodInfo*))Predicate_1_BeginInvoke_m_1337711135_0_gshared)(__this, ___obj, ___callback, ___object, method)
// System.Boolean System.Predicate`1<System.Single>::EndInvoke(System.IAsyncResult)
extern "C"  bool Predicate_1_EndInvoke_m_103866874_0_gshared (Predicate_1_t_1617250714_0 * __this, Object_t * ___result, const MethodInfo* method);
#define Predicate_1_EndInvoke_m_103866874_0(__this, ___result, method) ((  bool (*) (Predicate_1_t_1617250714_0 *, Object_t *, const MethodInfo*))Predicate_1_EndInvoke_m_103866874_0_gshared)(__this, ___result, method)
