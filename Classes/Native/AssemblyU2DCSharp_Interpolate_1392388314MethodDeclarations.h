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

// Interpolate
struct Interpolate_t_1392388314_0;
// UnityEngine.Transform
struct Transform_t1584899523_0;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t_700506907_0;
// System.Collections.IEnumerator
struct IEnumerator_t1412936761_0;
// Interpolate/Function
struct Function_t_473887551_0;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_t1018796883_0;
// UnityEngine.Transform[]
struct TransformU5BU5D_t_602259204_0;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t_1268319991_0;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector3_725341337.h"
#include "AssemblyU2DCSharp_Interpolate_EaseType1652119857.h"

// System.Void Interpolate::.ctor()
extern "C"  void Interpolate__ctor_m_1191876694_0 (Interpolate_t_1392388314_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Interpolate::Identity(UnityEngine.Vector3)
extern "C"  Vector3_t_725341337_0  Interpolate_Identity_m1527847099_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0  ___v, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Interpolate::TransformDotPosition(UnityEngine.Transform)
extern "C"  Vector3_t_725341337_0  Interpolate_TransformDotPosition_m_785034409_0 (Object_t * __this /* static, unused */, Transform_t1584899523_0 * ___t, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Single> Interpolate::NewTimer(System.Single)
extern "C"  Object_t* Interpolate_NewTimer_m183222111_0 (Object_t * __this /* static, unused */, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Single> Interpolate::NewCounter(System.Int32,System.Int32,System.Int32)
extern "C"  Object_t* Interpolate_NewCounter_m_1056407948_0 (Object_t * __this /* static, unused */, int32_t ___start, int32_t ___end, int32_t ___step, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Interpolate::NewEase(Interpolate/Function,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
extern "C"  Object_t * Interpolate_NewEase_m_714450333_0 (Object_t * __this /* static, unused */, Function_t_473887551_0 * ___ease, Vector3_t_725341337_0  ___start, Vector3_t_725341337_0  ___end, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Interpolate::NewEase(Interpolate/Function,UnityEngine.Vector3,UnityEngine.Vector3,System.Int32)
extern "C"  Object_t * Interpolate_NewEase_m_27499111_0 (Object_t * __this /* static, unused */, Function_t_473887551_0 * ___ease, Vector3_t_725341337_0  ___start, Vector3_t_725341337_0  ___end, int32_t ___slices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Interpolate::NewEase(Interpolate/Function,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Collections.Generic.IEnumerable`1<System.Single>)
extern "C"  Object_t * Interpolate_NewEase_m393665135_0 (Object_t * __this /* static, unused */, Function_t_473887551_0 * ___ease, Vector3_t_725341337_0  ___start, Vector3_t_725341337_0  ___end, float ___total, Object_t* ___driver, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Interpolate::Ease(Interpolate/Function,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
extern "C"  Vector3_t_725341337_0  Interpolate_Ease_m_263775336_0 (Object_t * __this /* static, unused */, Function_t_473887551_0 * ___ease, Vector3_t_725341337_0  ___start, Vector3_t_725341337_0  ___distance, float ___elapsedTime, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Interpolate/Function Interpolate::Ease(Interpolate/EaseType)
extern "C"  Function_t_473887551_0 * Interpolate_Ease_m1281592251_0 (Object_t * __this /* static, unused */, int32_t ___type, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3> Interpolate::NewBezier(Interpolate/Function,UnityEngine.Transform[],System.Single)
extern "C"  Object_t* Interpolate_NewBezier_m_319261504_0 (Object_t * __this /* static, unused */, Function_t_473887551_0 * ___ease, TransformU5BU5D_t_602259204_0* ___nodes, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3> Interpolate::NewBezier(Interpolate/Function,UnityEngine.Transform[],System.Int32)
extern "C"  Object_t* Interpolate_NewBezier_m262343580_0 (Object_t * __this /* static, unused */, Function_t_473887551_0 * ___ease, TransformU5BU5D_t_602259204_0* ___nodes, int32_t ___slices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3> Interpolate::NewBezier(Interpolate/Function,UnityEngine.Vector3[],System.Single)
extern "C"  Object_t* Interpolate_NewBezier_m2032737628_0 (Object_t * __this /* static, unused */, Function_t_473887551_0 * ___ease, Vector3U5BU5D_t_1268319991_0* ___points, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3> Interpolate::NewBezier(Interpolate/Function,UnityEngine.Vector3[],System.Int32)
extern "C"  Object_t* Interpolate_NewBezier_m615309184_0 (Object_t * __this /* static, unused */, Function_t_473887551_0 * ___ease, Vector3U5BU5D_t_1268319991_0* ___points, int32_t ___slices, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Interpolate::Bezier(Interpolate/Function,UnityEngine.Vector3[],System.Single,System.Single)
extern "C"  Vector3_t_725341337_0  Interpolate_Bezier_m1705917844_0 (Object_t * __this /* static, unused */, Function_t_473887551_0 * ___ease, Vector3U5BU5D_t_1268319991_0* ___points, float ___elapsedTime, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3> Interpolate::NewCatmullRom(UnityEngine.Transform[],System.Int32,System.Boolean)
extern "C"  Object_t* Interpolate_NewCatmullRom_m12570434_0 (Object_t * __this /* static, unused */, TransformU5BU5D_t_602259204_0* ___nodes, int32_t ___slices, bool ___loop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3> Interpolate::NewCatmullRom(UnityEngine.Vector3[],System.Int32,System.Boolean)
extern "C"  Object_t* Interpolate_NewCatmullRom_m1719696158_0 (Object_t * __this /* static, unused */, Vector3U5BU5D_t_1268319991_0* ___points, int32_t ___slices, bool ___loop, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Interpolate::CatmullRom(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
extern "C"  Vector3_t_725341337_0  Interpolate_CatmullRom_m1128313226_0 (Object_t * __this /* static, unused */, Vector3_t_725341337_0  ___previous, Vector3_t_725341337_0  ___start, Vector3_t_725341337_0  ___end, Vector3_t_725341337_0  ___next, float ___elapsedTime, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::Linear(System.Single,System.Single,System.Single,System.Single)
extern "C"  float Interpolate_Linear_m_1334225337_0 (Object_t * __this /* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseInQuad(System.Single,System.Single,System.Single,System.Single)
extern "C"  float Interpolate_EaseInQuad_m_1443002382_0 (Object_t * __this /* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseOutQuad(System.Single,System.Single,System.Single,System.Single)
extern "C"  float Interpolate_EaseOutQuad_m_1314598273_0 (Object_t * __this /* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseInOutQuad(System.Single,System.Single,System.Single,System.Single)
extern "C"  float Interpolate_EaseInOutQuad_m_2051043068_0 (Object_t * __this /* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseInCubic(System.Single,System.Single,System.Single,System.Single)
extern "C"  float Interpolate_EaseInCubic_m1904380175_0 (Object_t * __this /* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseOutCubic(System.Single,System.Single,System.Single,System.Single)
extern "C"  float Interpolate_EaseOutCubic_m1589940258_0 (Object_t * __this /* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseInOutCubic(System.Single,System.Single,System.Single,System.Single)
extern "C"  float Interpolate_EaseInOutCubic_m234988093_0 (Object_t * __this /* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseInQuart(System.Single,System.Single,System.Single,System.Single)
extern "C"  float Interpolate_EaseInQuart_m2030801978_0 (Object_t * __this /* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseOutQuart(System.Single,System.Single,System.Single,System.Single)
extern "C"  float Interpolate_EaseOutQuart_m1716362061_0 (Object_t * __this /* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseInOutQuart(System.Single,System.Single,System.Single,System.Single)
extern "C"  float Interpolate_EaseInOutQuart_m361409896_0 (Object_t * __this /* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseInQuint(System.Single,System.Single,System.Single,System.Single)
extern "C"  float Interpolate_EaseInQuint_m1716698158_0 (Object_t * __this /* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseOutQuint(System.Single,System.Single,System.Single,System.Single)
extern "C"  float Interpolate_EaseOutQuint_m1402258241_0 (Object_t * __this /* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseInOutQuint(System.Single,System.Single,System.Single,System.Single)
extern "C"  float Interpolate_EaseInOutQuint_m47306076_0 (Object_t * __this /* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseInSine(System.Single,System.Single,System.Single,System.Single)
extern "C"  float Interpolate_EaseInSine_m1021558124_0 (Object_t * __this /* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseOutSine(System.Single,System.Single,System.Single,System.Single)
extern "C"  float Interpolate_EaseOutSine_m1149962233_0 (Object_t * __this /* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseInOutSine(System.Single,System.Single,System.Single,System.Single)
extern "C"  float Interpolate_EaseInOutSine_m413517438_0 (Object_t * __this /* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseInExpo(System.Single,System.Single,System.Single,System.Single)
extern "C"  float Interpolate_EaseInExpo_m123494823_0 (Object_t * __this /* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseOutExpo(System.Single,System.Single,System.Single,System.Single)
extern "C"  float Interpolate_EaseOutExpo_m251898932_0 (Object_t * __this /* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseInOutExpo(System.Single,System.Single,System.Single,System.Single)
extern "C"  float Interpolate_EaseInOutExpo_m_484545863_0 (Object_t * __this /* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseInCirc(System.Single,System.Single,System.Single,System.Single)
extern "C"  float Interpolate_EaseInCirc_m_1098466782_0 (Object_t * __this /* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseOutCirc(System.Single,System.Single,System.Single,System.Single)
extern "C"  float Interpolate_EaseOutCirc_m_970062673_0 (Object_t * __this /* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseInOutCirc(System.Single,System.Single,System.Single,System.Single)
extern "C"  float Interpolate_EaseInOutCirc_m_1706507468_0 (Object_t * __this /* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, const MethodInfo* method) IL2CPP_METHOD_ATTR;
