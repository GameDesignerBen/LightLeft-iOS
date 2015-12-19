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

// UnityEngine.Material
struct Material_t1701708784_0;
// UnityEngine.Texture
struct Texture_t1814018354_0;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"

// System.Void UnityEngine.Material::.ctor(UnityEngine.Material)
extern "C"  void Material__ctor_m_1747999736_0 (Material_t1701708784_0 * __this, Material_t1701708784_0 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::get_mainTexture()
extern "C"  Texture_t1814018354_0 * Material_get_mainTexture_m1012267054_0 (Material_t1701708784_0 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.String)
extern "C"  Texture_t1814018354_0 * Material_GetTexture_m1284113328_0 (Material_t1701708784_0 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UnityEngine.Material::GetTexture(System.Int32)
extern "C"  Texture_t1814018354_0 * Material_GetTexture_m_527498525_0 (Material_t1701708784_0 * __this, int32_t ___nameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.String,System.Single)
extern "C"  void Material_SetFloat_m981710063_0 (Material_t1701708784_0 * __this, String_t* ___propertyName, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetFloat(System.Int32,System.Single)
extern "C"  void Material_SetFloat_m170145518_0 (Material_t1701708784_0 * __this, int32_t ___nameID, float ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::SetInt(System.String,System.Int32)
extern "C"  void Material_SetInt_m_1645572256_0 (Material_t1701708784_0 * __this, String_t* ___propertyName, int32_t ___value, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.String)
extern "C"  bool Material_HasProperty_m2077312757_0 (Material_t1701708784_0 * __this, String_t* ___propertyName, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Material::HasProperty(System.Int32)
extern "C"  bool Material_HasProperty_m190825214_0 (Material_t1701708784_0 * __this, int32_t ___nameID, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::Internal_CreateWithMaterial(UnityEngine.Material,UnityEngine.Material)
extern "C"  void Material_Internal_CreateWithMaterial_m_1945555625_0 (Object_t * __this /* static, unused */, Material_t1701708784_0 * ___mono, Material_t1701708784_0 * ___source, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::EnableKeyword(System.String)
extern "C"  void Material_EnableKeyword_m_492254312_0 (Material_t1701708784_0 * __this, String_t* ___keyword, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Material::DisableKeyword(System.String)
extern "C"  void Material_DisableKeyword_m572736419_0 (Material_t1701708784_0 * __this, String_t* ___keyword, const MethodInfo* method) IL2CPP_METHOD_ATTR;
