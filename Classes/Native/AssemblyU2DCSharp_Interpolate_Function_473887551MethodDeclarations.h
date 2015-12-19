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

// Interpolate/Function
struct Function_t_473887551_0;
// System.Object
struct Object_t;
// System.IAsyncResult
struct IAsyncResult_t_1647744885_0;
// System.AsyncCallback
struct AsyncCallback_t_266361018_0;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_IntPtr_1047952454.h"

// System.Void Interpolate/Function::.ctor(System.Object,System.IntPtr)
extern "C"  void Function__ctor_m_1638669555_0 (Function_t_473887551_0 * __this, Object_t * ___object, IntPtr_t ___method, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate/Function::Invoke(System.Single,System.Single,System.Single,System.Single)
extern "C"  float Function_Invoke_m_1020693625_0 (Function_t_473887551_0 * __this, float ___a, float ___b, float ___c, float ___d, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" float pinvoke_delegate_wrapper_Function_t_473887551_0(Il2CppObject* delegate, float ___a, float ___b, float ___c, float ___d);
// System.IAsyncResult Interpolate/Function::BeginInvoke(System.Single,System.Single,System.Single,System.Single,System.AsyncCallback,System.Object)
extern "C"  Object_t * Function_BeginInvoke_m_901214744_0 (Function_t_473887551_0 * __this, float ___a, float ___b, float ___c, float ___d, AsyncCallback_t_266361018_0 * ___callback, Object_t * ___object, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate/Function::EndInvoke(System.IAsyncResult)
extern "C"  float Function_EndInvoke_m780890729_0 (Function_t_473887551_0 * __this, Object_t * ___result, const MethodInfo* method) IL2CPP_METHOD_ATTR;
