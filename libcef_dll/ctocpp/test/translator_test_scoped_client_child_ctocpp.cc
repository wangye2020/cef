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
// $hash=f53dbe9257dcb58c5a00b166cb6db4a2545d32fb$
//

#include "libcef_dll/ctocpp/test/translator_test_scoped_client_child_ctocpp.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
int CefTranslatorTestScopedClientChildCToCpp::GetOtherValue() {
  cef_translator_test_scoped_client_child_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_other_value))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_other_value(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
int CefTranslatorTestScopedClientChildCToCpp::GetValue() {
  cef_translator_test_scoped_client_t* _struct =
      reinterpret_cast<cef_translator_test_scoped_client_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_value))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_value(_struct);

  // Return type: simple
  return _retval;
}

// CONSTRUCTOR - Do not edit by hand.

CefTranslatorTestScopedClientChildCToCpp::
    CefTranslatorTestScopedClientChildCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefTranslatorTestScopedClientChildCToCpp::
    ~CefTranslatorTestScopedClientChildCToCpp() {}

template <>
cef_translator_test_scoped_client_child_t*
CefCToCppScoped<CefTranslatorTestScopedClientChildCToCpp,
                CefTranslatorTestScopedClientChild,
                cef_translator_test_scoped_client_child_t>::
    UnwrapDerivedOwn(CefWrapperType type,
                     CefOwnPtr<CefTranslatorTestScopedClientChild> c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

template <>
cef_translator_test_scoped_client_child_t*
CefCToCppScoped<CefTranslatorTestScopedClientChildCToCpp,
                CefTranslatorTestScopedClientChild,
                cef_translator_test_scoped_client_child_t>::
    UnwrapDerivedRaw(CefWrapperType type,
                     CefRawPtr<CefTranslatorTestScopedClientChild> c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount CefCToCppScoped<
    CefTranslatorTestScopedClientChildCToCpp,
    CefTranslatorTestScopedClientChild,
    cef_translator_test_scoped_client_child_t>::DebugObjCt ATOMIC_DECLARATION;
#endif

template <>
CefWrapperType
    CefCToCppScoped<CefTranslatorTestScopedClientChildCToCpp,
                    CefTranslatorTestScopedClientChild,
                    cef_translator_test_scoped_client_child_t>::kWrapperType =
        WT_TRANSLATOR_TEST_SCOPED_CLIENT_CHILD;
