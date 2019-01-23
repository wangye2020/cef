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
// $hash=af0cd8029cdda8d2693381c10ec00460a85e47b8$
//

#include "libcef_dll/ctocpp/views/browser_view_delegate_ctocpp.h"
#include "libcef_dll/cpptoc/browser_cpptoc.h"
#include "libcef_dll/cpptoc/views/browser_view_cpptoc.h"
#include "libcef_dll/cpptoc/views/view_cpptoc.h"
#include "libcef_dll/ctocpp/client_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall")
void CefBrowserViewDelegateCToCpp::OnBrowserCreated(
    CefRefPtr<CefBrowserView> browser_view,
    CefRefPtr<CefBrowser> browser) {
  shutdown_checker::AssertNotShutdown();

  cef_browser_view_delegate_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_browser_created))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser_view; type: refptr_diff
  DCHECK(browser_view.get());
  if (!browser_view.get())
    return;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;

  // Execute
  _struct->on_browser_created(_struct, CefBrowserViewCppToC::Wrap(browser_view),
                              CefBrowserCppToC::Wrap(browser));
}

NO_SANITIZE("cfi-icall")
void CefBrowserViewDelegateCToCpp::OnBrowserDestroyed(
    CefRefPtr<CefBrowserView> browser_view,
    CefRefPtr<CefBrowser> browser) {
  shutdown_checker::AssertNotShutdown();

  cef_browser_view_delegate_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_browser_destroyed))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser_view; type: refptr_diff
  DCHECK(browser_view.get());
  if (!browser_view.get())
    return;
  // Verify param: browser; type: refptr_diff
  DCHECK(browser.get());
  if (!browser.get())
    return;

  // Execute
  _struct->on_browser_destroyed(_struct,
                                CefBrowserViewCppToC::Wrap(browser_view),
                                CefBrowserCppToC::Wrap(browser));
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefBrowserViewDelegate>
CefBrowserViewDelegateCToCpp::GetDelegateForPopupBrowserView(
    CefRefPtr<CefBrowserView> browser_view,
    const CefBrowserSettings& settings,
    CefRefPtr<CefClient> client,
    bool is_devtools) {
  shutdown_checker::AssertNotShutdown();

  cef_browser_view_delegate_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_delegate_for_popup_browser_view))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser_view; type: refptr_diff
  DCHECK(browser_view.get());
  if (!browser_view.get())
    return NULL;
  // Verify param: client; type: refptr_same
  DCHECK(client.get());
  if (!client.get())
    return NULL;

  // Execute
  cef_browser_view_delegate_t* _retval =
      _struct->get_delegate_for_popup_browser_view(
          _struct, CefBrowserViewCppToC::Wrap(browser_view), &settings,
          CefClientCToCpp::Unwrap(client), is_devtools);

  // Return type: refptr_same
  return CefBrowserViewDelegateCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
bool CefBrowserViewDelegateCToCpp::OnPopupBrowserViewCreated(
    CefRefPtr<CefBrowserView> browser_view,
    CefRefPtr<CefBrowserView> popup_browser_view,
    bool is_devtools) {
  shutdown_checker::AssertNotShutdown();

  cef_browser_view_delegate_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, on_popup_browser_view_created))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: browser_view; type: refptr_diff
  DCHECK(browser_view.get());
  if (!browser_view.get())
    return false;
  // Verify param: popup_browser_view; type: refptr_diff
  DCHECK(popup_browser_view.get());
  if (!popup_browser_view.get())
    return false;

  // Execute
  int _retval = _struct->on_popup_browser_view_created(
      _struct, CefBrowserViewCppToC::Wrap(browser_view),
      CefBrowserViewCppToC::Wrap(popup_browser_view), is_devtools);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
CefSize CefBrowserViewDelegateCToCpp::GetPreferredSize(
    CefRefPtr<CefView> view) {
  shutdown_checker::AssertNotShutdown();

  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_preferred_size))
    return CefSize();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get())
    return CefSize();

  // Execute
  cef_size_t _retval =
      _struct->get_preferred_size(_struct, CefViewCppToC::Wrap(view));

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
CefSize CefBrowserViewDelegateCToCpp::GetMinimumSize(CefRefPtr<CefView> view) {
  shutdown_checker::AssertNotShutdown();

  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_minimum_size))
    return CefSize();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get())
    return CefSize();

  // Execute
  cef_size_t _retval =
      _struct->get_minimum_size(_struct, CefViewCppToC::Wrap(view));

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
CefSize CefBrowserViewDelegateCToCpp::GetMaximumSize(CefRefPtr<CefView> view) {
  shutdown_checker::AssertNotShutdown();

  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_maximum_size))
    return CefSize();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get())
    return CefSize();

  // Execute
  cef_size_t _retval =
      _struct->get_maximum_size(_struct, CefViewCppToC::Wrap(view));

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
int CefBrowserViewDelegateCToCpp::GetHeightForWidth(CefRefPtr<CefView> view,
                                                    int width) {
  shutdown_checker::AssertNotShutdown();

  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_height_for_width))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get())
    return 0;

  // Execute
  int _retval =
      _struct->get_height_for_width(_struct, CefViewCppToC::Wrap(view), width);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
void CefBrowserViewDelegateCToCpp::OnParentViewChanged(
    CefRefPtr<CefView> view,
    bool added,
    CefRefPtr<CefView> parent) {
  shutdown_checker::AssertNotShutdown();

  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, on_parent_view_changed))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get())
    return;
  // Verify param: parent; type: refptr_diff
  DCHECK(parent.get());
  if (!parent.get())
    return;

  // Execute
  _struct->on_parent_view_changed(_struct, CefViewCppToC::Wrap(view), added,
                                  CefViewCppToC::Wrap(parent));
}

NO_SANITIZE("cfi-icall")
void CefBrowserViewDelegateCToCpp::OnChildViewChanged(
    CefRefPtr<CefView> view,
    bool added,
    CefRefPtr<CefView> child) {
  shutdown_checker::AssertNotShutdown();

  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, on_child_view_changed))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get())
    return;
  // Verify param: child; type: refptr_diff
  DCHECK(child.get());
  if (!child.get())
    return;

  // Execute
  _struct->on_child_view_changed(_struct, CefViewCppToC::Wrap(view), added,
                                 CefViewCppToC::Wrap(child));
}

NO_SANITIZE("cfi-icall")
void CefBrowserViewDelegateCToCpp::OnFocus(CefRefPtr<CefView> view) {
  shutdown_checker::AssertNotShutdown();

  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, on_focus))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get())
    return;

  // Execute
  _struct->on_focus(_struct, CefViewCppToC::Wrap(view));
}

NO_SANITIZE("cfi-icall")
void CefBrowserViewDelegateCToCpp::OnBlur(CefRefPtr<CefView> view) {
  shutdown_checker::AssertNotShutdown();

  cef_view_delegate_t* _struct =
      reinterpret_cast<cef_view_delegate_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, on_blur))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_diff
  DCHECK(view.get());
  if (!view.get())
    return;

  // Execute
  _struct->on_blur(_struct, CefViewCppToC::Wrap(view));
}

// CONSTRUCTOR - Do not edit by hand.

CefBrowserViewDelegateCToCpp::CefBrowserViewDelegateCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefBrowserViewDelegateCToCpp::~CefBrowserViewDelegateCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_browser_view_delegate_t* CefCToCppRefCounted<
    CefBrowserViewDelegateCToCpp,
    CefBrowserViewDelegate,
    cef_browser_view_delegate_t>::UnwrapDerived(CefWrapperType type,
                                                CefBrowserViewDelegate* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template <>
base::AtomicRefCount CefCToCppRefCounted<
    CefBrowserViewDelegateCToCpp,
    CefBrowserViewDelegate,
    cef_browser_view_delegate_t>::DebugObjCt ATOMIC_DECLARATION;
#endif

template <>
CefWrapperType CefCToCppRefCounted<CefBrowserViewDelegateCToCpp,
                                   CefBrowserViewDelegate,
                                   cef_browser_view_delegate_t>::kWrapperType =
    WT_BROWSER_VIEW_DELEGATE;
