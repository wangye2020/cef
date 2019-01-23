// Copyright (c) 2019 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=4eab4cd81440e73e3426e9af757c88bf926f60d7$
//

#ifndef CEF_LIBCEF_DLL_CPPTOC_GET_EXTENSION_RESOURCE_CALLBACK_CPPTOC_H_
#define CEF_LIBCEF_DLL_CPPTOC_GET_EXTENSION_RESOURCE_CALLBACK_CPPTOC_H_
#pragma once

#if !defined(BUILDING_CEF_SHARED)
#error This file can be included DLL-side only
#endif

#include "include/capi/cef_client_capi.h"
#include "include/capi/cef_extension_handler_capi.h"
#include "include/cef_client.h"
#include "include/cef_extension_handler.h"
#include "libcef_dll/cpptoc/cpptoc_ref_counted.h"

// Wrap a C++ class with a C structure.
// This class may be instantiated and accessed DLL-side only.
class CefGetExtensionResourceCallbackCppToC
    : public CefCppToCRefCounted<CefGetExtensionResourceCallbackCppToC,
                                 CefGetExtensionResourceCallback,
                                 cef_get_extension_resource_callback_t> {
 public:
  CefGetExtensionResourceCallbackCppToC();
  virtual ~CefGetExtensionResourceCallbackCppToC();
};

#endif  // CEF_LIBCEF_DLL_CPPTOC_GET_EXTENSION_RESOURCE_CALLBACK_CPPTOC_H_
