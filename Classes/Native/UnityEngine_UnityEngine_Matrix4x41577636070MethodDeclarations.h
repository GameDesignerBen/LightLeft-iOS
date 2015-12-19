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

// System.Object
struct Object_t;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Matrix4x41577636070.h"
#include "UnityEngine_UnityEngine_Vector4_725341336.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"

// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32,System.Int32)
extern "C"  float Matrix4x4_get_Item_m_2015104964_0 (Matrix4x4_t1577636070_0 * __this, int32_t ___row, int32_t ___column, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Matrix4x4::get_Item(System.Int32)
extern "C"  float Matrix4x4_get_Item_m1280478331_0 (Matrix4x4_t1577636070_0 * __this, int32_t ___index, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Matrix4x4::GetHashCode()
extern "C"  int32_t Matrix4x4_GetHashCode_m_211489575_0 (Matrix4x4_t1577636070_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Matrix4x4::Equals(System.Object)
extern "C"  bool Matrix4x4_Equals_m_760758911_0 (Matrix4x4_t1577636070_0 * __this, Object_t * ___other, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4 UnityEngine.Matrix4x4::GetColumn(System.Int32)
extern "C"  Vector4_t_725341336_0  Matrix4x4_GetColumn_m786071102_0 (Matrix4x4_t1577636070_0 * __this, int32_t ___i, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 UnityEngine.Matrix4x4::MultiplyPoint3x4(UnityEngine.Vector3)
extern "C"  Vector3_t_725341337_0  Matrix4x4_MultiplyPoint3x4_m_2096792394_0 (Matrix4x4_t1577636070_0 * __this, Vector3_t_725341337_0  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Matrix4x4::ToString()
extern "C"  String_t* Matrix4x4_ToString_m294134723_0 (Matrix4x4_t1577636070_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
