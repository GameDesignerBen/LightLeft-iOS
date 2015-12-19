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

// System.Net.ICertificatePolicy
struct ICertificatePolicy_t_944598638_0;
// System.Net.Security.RemoteCertificateValidationCallback
struct RemoteCertificateValidationCallback_t1271970355_0;
// System.Net.ServicePoint
struct ServicePoint_t1961884333_0;
// System.Uri
struct Uri_t124633547_0;
// System.Net.IWebProxy
struct IWebProxy_t1249552781_0;

#include "codegen/il2cpp-codegen.h"
#include "System_System_Net_SecurityProtocolType1151267364.h"

// System.Void System.Net.ServicePointManager::.cctor()
extern "C"  void ServicePointManager__cctor_m1197717107_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICertificatePolicy System.Net.ServicePointManager::get_CertificatePolicy()
extern "C"  Object_t * ServicePointManager_get_CertificatePolicy_m16190897_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.ServicePointManager::get_CheckCertificateRevocationList()
extern "C"  bool ServicePointManager_get_CheckCertificateRevocationList_m838738096_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.SecurityProtocolType System.Net.ServicePointManager::get_SecurityProtocol()
extern "C"  int32_t ServicePointManager_get_SecurityProtocol_m1940055552_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.Security.RemoteCertificateValidationCallback System.Net.ServicePointManager::get_ServerCertificateValidationCallback()
extern "C"  RemoteCertificateValidationCallback_t1271970355_0 * ServicePointManager_get_ServerCertificateValidationCallback_m451731131_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ServicePoint System.Net.ServicePointManager::FindServicePoint(System.Uri,System.Net.IWebProxy)
extern "C"  ServicePoint_t1961884333_0 * ServicePointManager_FindServicePoint_m543399130_0 (Object_t * __this /* static, unused */, Uri_t124633547_0 * ___address, Object_t * ___proxy, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.ServicePointManager::RecycleServicePoints()
extern "C"  void ServicePointManager_RecycleServicePoints_m_334224785_0 (Object_t * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
