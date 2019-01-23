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
// $hash=6396d8906ae30f670b9ad387f83c400133591d58$
//

#include "libcef_dll/ctocpp/callback_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall") void CefCallbackCToCpp::Continue() {
  shutdown_checker::AssertNotShutdown();

  cef_callback_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, cont))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->cont(_struct);
}

NO_SANITIZE("cfi-icall") void CefCallbackCToCpp::Cancel() {
  shutdown_checker::AssertNotShutdown();

  cef_callback_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, cancel))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->cancel(_struct);
}

// CONSTRUCTOR - Do not edit by hand.

CefCallbackCToCpp::CefCallbackCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefCallbackCToCpp::~CefCallbackCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_callback_t*
CefCToCppRefCounted<CefCallbackCToCpp, CefCallback, cef_callback_t>::
    UnwrapDerived(CefWrapperType type, CefCallback* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount
    CefCToCppRefCounted<CefCallbackCToCpp, CefCallback, cef_callback_t>::
        DebugObjCt ATOMIC_DECLARATION;
#endif

template <>
CefWrapperType CefCToCppRefCounted<CefCallbackCToCpp,
                                   CefCallback,
                                   cef_callback_t>::kWrapperType = WT_CALLBACK;
