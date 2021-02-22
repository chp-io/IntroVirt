/*
 * Copyright 2021 Assured Information Security, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *         http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/* This file is automatically generated. Do not edit. */
#include <introvirt/windows/kernel/win32k/syscall/types/WindowMessage.hh>

namespace introvirt {
namespace windows {
namespace win32k {

static const std::string WM_NULL_STR("WM_NULL");
static const std::string WM_CREATE_STR("WM_CREATE");
static const std::string WM_DESTROY_STR("WM_DESTROY");
static const std::string WM_MOVE_STR("WM_MOVE");
static const std::string WM_SIZE_STR("WM_SIZE");
static const std::string WM_ACTIVATE_STR("WM_ACTIVATE");
static const std::string WM_SETFOCUS_STR("WM_SETFOCUS");
static const std::string WM_KILLFOCUS_STR("WM_KILLFOCUS");
static const std::string WM_ENABLE_STR("WM_ENABLE");
static const std::string WM_SETREDRAW_STR("WM_SETREDRAW");
static const std::string WM_SETTEXT_STR("WM_SETTEXT");
static const std::string WM_GETTEXT_STR("WM_GETTEXT");
static const std::string WM_GETTEXTLENGTH_STR("WM_GETTEXTLENGTH");
static const std::string WM_PAINT_STR("WM_PAINT");
static const std::string WM_CLOSE_STR("WM_CLOSE");
static const std::string WM_QUERYENDSESSION_STR("WM_QUERYENDSESSION");
static const std::string WM_QUIT_STR("WM_QUIT");
static const std::string WM_QUERYOPEN_STR("WM_QUERYOPEN");
static const std::string WM_ERASEBKGND_STR("WM_ERASEBKGND");
static const std::string WM_SYSCOLORCHANGE_STR("WM_SYSCOLORCHANGE");
static const std::string WM_ENDSESSION_STR("WM_ENDSESSION");
static const std::string WM_SHOWWINDOW_STR("WM_SHOWWINDOW");
static const std::string WM_CTLCOLOR_STR("WM_CTLCOLOR");
static const std::string WM_WININICHANGE_STR("WM_WININICHANGE");
static const std::string WM_DEVMODECHANGE_STR("WM_DEVMODECHANGE");
static const std::string WM_ACTIVATEAPP_STR("WM_ACTIVATEAPP");
static const std::string WM_FONTCHANGE_STR("WM_FONTCHANGE");
static const std::string WM_TIMECHANGE_STR("WM_TIMECHANGE");
static const std::string WM_CANCELMODE_STR("WM_CANCELMODE");
static const std::string WM_SETCURSOR_STR("WM_SETCURSOR");
static const std::string WM_MOUSEACTIVATE_STR("WM_MOUSEACTIVATE");
static const std::string WM_CHILDACTIVATE_STR("WM_CHILDACTIVATE");
static const std::string WM_QUEUESYNC_STR("WM_QUEUESYNC");
static const std::string WM_GETMINMAXINFO_STR("WM_GETMINMAXINFO");
static const std::string WM_PAINTICON_STR("WM_PAINTICON");
static const std::string WM_ICONERASEBKGND_STR("WM_ICONERASEBKGND");
static const std::string WM_NEXTDLGCTL_STR("WM_NEXTDLGCTL");
static const std::string WM_SPOOLERSTATUS_STR("WM_SPOOLERSTATUS");
static const std::string WM_DRAWITEM_STR("WM_DRAWITEM");
static const std::string WM_MEASUREITEM_STR("WM_MEASUREITEM");
static const std::string WM_DELETEITEM_STR("WM_DELETEITEM");
static const std::string WM_VKEYTOITEM_STR("WM_VKEYTOITEM");
static const std::string WM_CHARTOITEM_STR("WM_CHARTOITEM");
static const std::string WM_SETFONT_STR("WM_SETFONT");
static const std::string WM_GETFONT_STR("WM_GETFONT");
static const std::string WM_SETHOTKEY_STR("WM_SETHOTKEY");
static const std::string WM_GETHOTKEY_STR("WM_GETHOTKEY");
static const std::string WM_QUERYDRAGICON_STR("WM_QUERYDRAGICON");
static const std::string WM_COMPAREITEM_STR("WM_COMPAREITEM");
static const std::string WM_GETOBJECT_STR("WM_GETOBJECT");
static const std::string WM_COMPACTING_STR("WM_COMPACTING");
static const std::string WM_COMMNOTIFY_STR("WM_COMMNOTIFY");
static const std::string WM_WINDOWPOSCHANGING_STR("WM_WINDOWPOSCHANGING");
static const std::string WM_WINDOWPOSCHANGED_STR("WM_WINDOWPOSCHANGED");
static const std::string WM_POWER_STR("WM_POWER");
static const std::string WM_COPYGLOBALDATA_STR("WM_COPYGLOBALDATA");
static const std::string WM_COPYDATA_STR("WM_COPYDATA");
static const std::string WM_CANCELJOURNAL_STR("WM_CANCELJOURNAL");
static const std::string WM_NOTIFY_STR("WM_NOTIFY");
static const std::string WM_INPUTLANGCHANGEREQUEST_STR("WM_INPUTLANGCHANGEREQUEST");
static const std::string WM_INPUTLANGCHANGE_STR("WM_INPUTLANGCHANGE");
static const std::string WM_TCARD_STR("WM_TCARD");
static const std::string WM_HELP_STR("WM_HELP");
static const std::string WM_USERCHANGED_STR("WM_USERCHANGED");
static const std::string WM_NOTIFYFORMAT_STR("WM_NOTIFYFORMAT");
static const std::string WM_CONTEXTMENU_STR("WM_CONTEXTMENU");
static const std::string WM_STYLECHANGING_STR("WM_STYLECHANGING");
static const std::string WM_STYLECHANGED_STR("WM_STYLECHANGED");
static const std::string WM_DISPLAYCHANGE_STR("WM_DISPLAYCHANGE");
static const std::string WM_GETICON_STR("WM_GETICON");
static const std::string WM_SETICON_STR("WM_SETICON");
static const std::string WM_NCCREATE_STR("WM_NCCREATE");
static const std::string WM_NCDESTROY_STR("WM_NCDESTROY");
static const std::string WM_NCCALCSIZE_STR("WM_NCCALCSIZE");
static const std::string WM_NCHITTEST_STR("WM_NCHITTEST");
static const std::string WM_NCPAINT_STR("WM_NCPAINT");
static const std::string WM_NCACTIVATE_STR("WM_NCACTIVATE");
static const std::string WM_GETDLGCODE_STR("WM_GETDLGCODE");
static const std::string WM_SYNCPAINT_STR("WM_SYNCPAINT");
static const std::string WM_NCMOUSEMOVE_STR("WM_NCMOUSEMOVE");
static const std::string WM_NCLBUTTONDOWN_STR("WM_NCLBUTTONDOWN");
static const std::string WM_NCLBUTTONUP_STR("WM_NCLBUTTONUP");
static const std::string WM_NCLBUTTONDBLCLK_STR("WM_NCLBUTTONDBLCLK");
static const std::string WM_NCRBUTTONDOWN_STR("WM_NCRBUTTONDOWN");
static const std::string WM_NCRBUTTONUP_STR("WM_NCRBUTTONUP");
static const std::string WM_NCRBUTTONDBLCLK_STR("WM_NCRBUTTONDBLCLK");
static const std::string WM_NCMBUTTONDOWN_STR("WM_NCMBUTTONDOWN");
static const std::string WM_NCMBUTTONUP_STR("WM_NCMBUTTONUP");
static const std::string WM_NCMBUTTONDBLCLK_STR("WM_NCMBUTTONDBLCLK");
static const std::string WM_NCXBUTTONDOWN_STR("WM_NCXBUTTONDOWN");
static const std::string WM_NCXBUTTONUP_STR("WM_NCXBUTTONUP");
static const std::string WM_NCXBUTTONDBLCLK_STR("WM_NCXBUTTONDBLCLK");
static const std::string WM_INPUT_STR("WM_INPUT");
static const std::string WM_KEYDOWN_STR("WM_KEYDOWN");
static const std::string WM_KEYFIRST_STR("WM_KEYFIRST");
static const std::string WM_KEYUP_STR("WM_KEYUP");
static const std::string WM_CHAR_STR("WM_CHAR");
static const std::string WM_DEADCHAR_STR("WM_DEADCHAR");
static const std::string WM_SYSKEYDOWN_STR("WM_SYSKEYDOWN");
static const std::string WM_SYSKEYUP_STR("WM_SYSKEYUP");
static const std::string WM_SYSCHAR_STR("WM_SYSCHAR");
static const std::string WM_SYSDEADCHAR_STR("WM_SYSDEADCHAR");
static const std::string WM_KEYLAST_STR("WM_KEYLAST");
static const std::string WM_WNT_CONVERTREQUESTEX_STR("WM_WNT_CONVERTREQUESTEX");
static const std::string WM_CONVERTREQUEST_STR("WM_CONVERTREQUEST");
static const std::string WM_CONVERTRESULT_STR("WM_CONVERTRESULT");
static const std::string WM_INTERIM_STR("WM_INTERIM");
static const std::string WM_IME_STARTCOMPOSITION_STR("WM_IME_STARTCOMPOSITION");
static const std::string WM_IME_ENDCOMPOSITION_STR("WM_IME_ENDCOMPOSITION");
static const std::string WM_IME_COMPOSITION_STR("WM_IME_COMPOSITION");
static const std::string WM_IME_KEYLAST_STR("WM_IME_KEYLAST");
static const std::string WM_INITDIALOG_STR("WM_INITDIALOG");
static const std::string WM_COMMAND_STR("WM_COMMAND");
static const std::string WM_SYSCOMMAND_STR("WM_SYSCOMMAND");
static const std::string WM_TIMER_STR("WM_TIMER");
static const std::string WM_HSCROLL_STR("WM_HSCROLL");
static const std::string WM_VSCROLL_STR("WM_VSCROLL");
static const std::string WM_INITMENU_STR("WM_INITMENU");
static const std::string WM_INITMENUPOPUP_STR("WM_INITMENUPOPUP");
static const std::string WM_SYSTIMER_STR("WM_SYSTIMER");
static const std::string WM_MENUSELECT_STR("WM_MENUSELECT");
static const std::string WM_MENUCHAR_STR("WM_MENUCHAR");
static const std::string WM_ENTERIDLE_STR("WM_ENTERIDLE");
static const std::string WM_MENURBUTTONUP_STR("WM_MENURBUTTONUP");
static const std::string WM_MENUDRAG_STR("WM_MENUDRAG");
static const std::string WM_MENUGETOBJECT_STR("WM_MENUGETOBJECT");
static const std::string WM_UNINITMENUPOPUP_STR("WM_UNINITMENUPOPUP");
static const std::string WM_MENUCOMMAND_STR("WM_MENUCOMMAND");
static const std::string WM_CHANGEUISTATE_STR("WM_CHANGEUISTATE");
static const std::string WM_UPDATEUISTATE_STR("WM_UPDATEUISTATE");
static const std::string WM_QUERYUISTATE_STR("WM_QUERYUISTATE");
static const std::string WM_CTLCOLORMSGBOX_STR("WM_CTLCOLORMSGBOX");
static const std::string WM_CTLCOLOREDIT_STR("WM_CTLCOLOREDIT");
static const std::string WM_CTLCOLORLISTBOX_STR("WM_CTLCOLORLISTBOX");
static const std::string WM_CTLCOLORBTN_STR("WM_CTLCOLORBTN");
static const std::string WM_CTLCOLORDLG_STR("WM_CTLCOLORDLG");
static const std::string WM_CTLCOLORSCROLLBAR_STR("WM_CTLCOLORSCROLLBAR");
static const std::string WM_CTLCOLORSTATIC_STR("WM_CTLCOLORSTATIC");
static const std::string WM_MOUSEFIRST_STR("WM_MOUSEFIRST");
static const std::string WM_MOUSEMOVE_STR("WM_MOUSEMOVE");
static const std::string WM_LBUTTONDOWN_STR("WM_LBUTTONDOWN");
static const std::string WM_LBUTTONUP_STR("WM_LBUTTONUP");
static const std::string WM_LBUTTONDBLCLK_STR("WM_LBUTTONDBLCLK");
static const std::string WM_RBUTTONDOWN_STR("WM_RBUTTONDOWN");
static const std::string WM_RBUTTONUP_STR("WM_RBUTTONUP");
static const std::string WM_RBUTTONDBLCLK_STR("WM_RBUTTONDBLCLK");
static const std::string WM_MBUTTONDOWN_STR("WM_MBUTTONDOWN");
static const std::string WM_MBUTTONUP_STR("WM_MBUTTONUP");
static const std::string WM_MBUTTONDBLCLK_STR("WM_MBUTTONDBLCLK");
static const std::string WM_MOUSELAST_STR("WM_MOUSELAST");
static const std::string WM_MOUSEWHEEL_STR("WM_MOUSEWHEEL");
static const std::string WM_XBUTTONDOWN_STR("WM_XBUTTONDOWN");
static const std::string WM_XBUTTONUP_STR("WM_XBUTTONUP");
static const std::string WM_XBUTTONDBLCLK_STR("WM_XBUTTONDBLCLK");
static const std::string WM_MOUSEHWHEEL_STR("WM_MOUSEHWHEEL");
static const std::string WM_PARENTNOTIFY_STR("WM_PARENTNOTIFY");
static const std::string WM_ENTERMENULOOP_STR("WM_ENTERMENULOOP");
static const std::string WM_EXITMENULOOP_STR("WM_EXITMENULOOP");
static const std::string WM_NEXTMENU_STR("WM_NEXTMENU");
static const std::string WM_SIZING_STR("WM_SIZING");
static const std::string WM_CAPTURECHANGED_STR("WM_CAPTURECHANGED");
static const std::string WM_MOVING_STR("WM_MOVING");
static const std::string WM_POWERBROADCAST_STR("WM_POWERBROADCAST");
static const std::string WM_DEVICECHANGE_STR("WM_DEVICECHANGE");
static const std::string WM_MDICREATE_STR("WM_MDICREATE");
static const std::string WM_MDIDESTROY_STR("WM_MDIDESTROY");
static const std::string WM_MDIACTIVATE_STR("WM_MDIACTIVATE");
static const std::string WM_MDIRESTORE_STR("WM_MDIRESTORE");
static const std::string WM_MDINEXT_STR("WM_MDINEXT");
static const std::string WM_MDIMAXIMIZE_STR("WM_MDIMAXIMIZE");
static const std::string WM_MDITILE_STR("WM_MDITILE");
static const std::string WM_MDICASCADE_STR("WM_MDICASCADE");
static const std::string WM_MDIICONARRANGE_STR("WM_MDIICONARRANGE");
static const std::string WM_MDIGETACTIVE_STR("WM_MDIGETACTIVE");
static const std::string WM_MDISETMENU_STR("WM_MDISETMENU");
static const std::string WM_ENTERSIZEMOVE_STR("WM_ENTERSIZEMOVE");
static const std::string WM_EXITSIZEMOVE_STR("WM_EXITSIZEMOVE");
static const std::string WM_DROPFILES_STR("WM_DROPFILES");
static const std::string WM_MDIREFRESHMENU_STR("WM_MDIREFRESHMENU");
static const std::string WM_IME_REPORT_STR("WM_IME_REPORT");
static const std::string WM_IME_SETCONTEXT_STR("WM_IME_SETCONTEXT");
static const std::string WM_IME_NOTIFY_STR("WM_IME_NOTIFY");
static const std::string WM_IME_CONTROL_STR("WM_IME_CONTROL");
static const std::string WM_IME_COMPOSITIONFULL_STR("WM_IME_COMPOSITIONFULL");
static const std::string WM_IME_SELECT_STR("WM_IME_SELECT");
static const std::string WM_IME_CHAR_STR("WM_IME_CHAR");
static const std::string WM_IME_REQUEST_STR("WM_IME_REQUEST");
static const std::string WM_IMEKEYDOWN_STR("WM_IMEKEYDOWN");
static const std::string WM_IME_KEYDOWN_STR("WM_IME_KEYDOWN");
static const std::string WM_IMEKEYUP_STR("WM_IMEKEYUP");
static const std::string WM_IME_KEYUP_STR("WM_IME_KEYUP");
static const std::string WM_NCMOUSEHOVER_STR("WM_NCMOUSEHOVER");
static const std::string WM_MOUSEHOVER_STR("WM_MOUSEHOVER");
static const std::string WM_NCMOUSELEAVE_STR("WM_NCMOUSELEAVE");
static const std::string WM_MOUSELEAVE_STR("WM_MOUSELEAVE");
static const std::string WM_CUT_STR("WM_CUT");
static const std::string WM_COPY_STR("WM_COPY");
static const std::string WM_PASTE_STR("WM_PASTE");
static const std::string WM_CLEAR_STR("WM_CLEAR");
static const std::string WM_UNDO_STR("WM_UNDO");
static const std::string WM_RENDERFORMAT_STR("WM_RENDERFORMAT");
static const std::string WM_RENDERALLFORMATS_STR("WM_RENDERALLFORMATS");
static const std::string WM_DESTROYCLIPBOARD_STR("WM_DESTROYCLIPBOARD");
static const std::string WM_DRAWCLIPBOARD_STR("WM_DRAWCLIPBOARD");
static const std::string WM_PAINTCLIPBOARD_STR("WM_PAINTCLIPBOARD");
static const std::string WM_VSCROLLCLIPBOARD_STR("WM_VSCROLLCLIPBOARD");
static const std::string WM_SIZECLIPBOARD_STR("WM_SIZECLIPBOARD");
static const std::string WM_ASKCBFORMATNAME_STR("WM_ASKCBFORMATNAME");
static const std::string WM_CHANGECBCHAIN_STR("WM_CHANGECBCHAIN");
static const std::string WM_HSCROLLCLIPBOARD_STR("WM_HSCROLLCLIPBOARD");
static const std::string WM_QUERYNEWPALETTE_STR("WM_QUERYNEWPALETTE");
static const std::string WM_PALETTEISCHANGING_STR("WM_PALETTEISCHANGING");
static const std::string WM_PALETTECHANGED_STR("WM_PALETTECHANGED");
static const std::string WM_HOTKEY_STR("WM_HOTKEY");
static const std::string WM_PRINT_STR("WM_PRINT");
static const std::string WM_PRINTCLIENT_STR("WM_PRINTCLIENT");
static const std::string WM_APPCOMMAND_STR("WM_APPCOMMAND");
static const std::string WM_HANDHELDFIRST_STR("WM_HANDHELDFIRST");
static const std::string WM_HANDHELDLAST_STR("WM_HANDHELDLAST");
static const std::string WM_AFXFIRST_STR("WM_AFXFIRST");
static const std::string WM_AFXLAST_STR("WM_AFXLAST");
static const std::string WM_PENWINFIRST_STR("WM_PENWINFIRST");
static const std::string WM_RCRESULT_STR("WM_RCRESULT");
static const std::string WM_HOOKRCRESULT_STR("WM_HOOKRCRESULT");
static const std::string WM_GLOBALRCCHANGE_STR("WM_GLOBALRCCHANGE");
static const std::string WM_PENMISCINFO_STR("WM_PENMISCINFO");
static const std::string WM_SKB_STR("WM_SKB");
static const std::string WM_HEDITCTL_STR("WM_HEDITCTL");
static const std::string WM_PENCTL_STR("WM_PENCTL");
static const std::string WM_PENMISC_STR("WM_PENMISC");
static const std::string WM_CTLINIT_STR("WM_CTLINIT");
static const std::string WM_PENEVENT_STR("WM_PENEVENT");
static const std::string WM_PENWINLAST_STR("WM_PENWINLAST");
static const std::string WM_PSD_PAGESETUPDLG_STR("WM_PSD_PAGESETUPDLG");
static const std::string WM_USER_STR("WM_USER");
static const std::string WM_CHOOSEFONT_GETLOGFONT_STR("WM_CHOOSEFONT_GETLOGFONT");
static const std::string WM_PSD_FULLPAGERECT_STR("WM_PSD_FULLPAGERECT");
static const std::string WM_PSD_MINMARGINRECT_STR("WM_PSD_MINMARGINRECT");
static const std::string WM_PSD_MARGINRECT_STR("WM_PSD_MARGINRECT");
static const std::string WM_PSD_GREEKTEXTRECT_STR("WM_PSD_GREEKTEXTRECT");
static const std::string WM_PSD_ENVSTAMPRECT_STR("WM_PSD_ENVSTAMPRECT");
static const std::string WM_PSD_YAFULLPAGERECT_STR("WM_PSD_YAFULLPAGERECT");
static const std::string WM_CAP_UNICODE_START_STR("WM_CAP_UNICODE_START");
static const std::string WM_CHOOSEFONT_SETLOGFONT_STR("WM_CHOOSEFONT_SETLOGFONT");
static const std::string WM_CAP_SET_CALLBACK_ERRORW_STR("WM_CAP_SET_CALLBACK_ERRORW");
static const std::string WM_CHOOSEFONT_SETFLAGS_STR("WM_CHOOSEFONT_SETFLAGS");
static const std::string WM_CAP_SET_CALLBACK_STATUSW_STR("WM_CAP_SET_CALLBACK_STATUSW");
static const std::string WM_CAP_DRIVER_GET_NAMEW_STR("WM_CAP_DRIVER_GET_NAMEW");
static const std::string WM_CAP_DRIVER_GET_VERSIONW_STR("WM_CAP_DRIVER_GET_VERSIONW");
static const std::string WM_CAP_FILE_SET_CAPTURE_FILEW_STR("WM_CAP_FILE_SET_CAPTURE_FILEW");
static const std::string WM_CAP_FILE_GET_CAPTURE_FILEW_STR("WM_CAP_FILE_GET_CAPTURE_FILEW");
static const std::string WM_CAP_FILE_SAVEASW_STR("WM_CAP_FILE_SAVEASW");
static const std::string WM_CAP_FILE_SAVEDIBW_STR("WM_CAP_FILE_SAVEDIBW");
static const std::string WM_CAP_SET_MCI_DEVICEW_STR("WM_CAP_SET_MCI_DEVICEW");
static const std::string WM_CAP_GET_MCI_DEVICEW_STR("WM_CAP_GET_MCI_DEVICEW");
static const std::string WM_CAP_PAL_OPENW_STR("WM_CAP_PAL_OPENW");
static const std::string WM_CAP_PAL_SAVEW_STR("WM_CAP_PAL_SAVEW");
static const std::string WM_CPL_LAUNCH_STR("WM_CPL_LAUNCH");
static const std::string WM_CPL_LAUNCHED_STR("WM_CPL_LAUNCHED");
static const std::string WM_APP_STR("WM_APP");
static const std::string WM_RASDIALEVENT_STR("WM_RASDIALEVENT");
static const std::string Unknown("Unknown");

const std::string& to_string(WindowMessage msg) {
    switch (msg) {
    case WindowMessage::WM_NULL:
        return WM_NULL_STR;
    case WindowMessage::WM_CREATE:
        return WM_CREATE_STR;
    case WindowMessage::WM_DESTROY:
        return WM_DESTROY_STR;
    case WindowMessage::WM_MOVE:
        return WM_MOVE_STR;
    case WindowMessage::WM_SIZE:
        return WM_SIZE_STR;
    case WindowMessage::WM_ACTIVATE:
        return WM_ACTIVATE_STR;
    case WindowMessage::WM_SETFOCUS:
        return WM_SETFOCUS_STR;
    case WindowMessage::WM_KILLFOCUS:
        return WM_KILLFOCUS_STR;
    case WindowMessage::WM_ENABLE:
        return WM_ENABLE_STR;
    case WindowMessage::WM_SETREDRAW:
        return WM_SETREDRAW_STR;
    case WindowMessage::WM_SETTEXT:
        return WM_SETTEXT_STR;
    case WindowMessage::WM_GETTEXT:
        return WM_GETTEXT_STR;
    case WindowMessage::WM_GETTEXTLENGTH:
        return WM_GETTEXTLENGTH_STR;
    case WindowMessage::WM_PAINT:
        return WM_PAINT_STR;
    case WindowMessage::WM_CLOSE:
        return WM_CLOSE_STR;
    case WindowMessage::WM_QUERYENDSESSION:
        return WM_QUERYENDSESSION_STR;
    case WindowMessage::WM_QUIT:
        return WM_QUIT_STR;
    case WindowMessage::WM_QUERYOPEN:
        return WM_QUERYOPEN_STR;
    case WindowMessage::WM_ERASEBKGND:
        return WM_ERASEBKGND_STR;
    case WindowMessage::WM_SYSCOLORCHANGE:
        return WM_SYSCOLORCHANGE_STR;
    case WindowMessage::WM_ENDSESSION:
        return WM_ENDSESSION_STR;
    case WindowMessage::WM_SHOWWINDOW:
        return WM_SHOWWINDOW_STR;
    case WindowMessage::WM_CTLCOLOR:
        return WM_CTLCOLOR_STR;
    case WindowMessage::WM_WININICHANGE:
        return WM_WININICHANGE_STR;
    case WindowMessage::WM_DEVMODECHANGE:
        return WM_DEVMODECHANGE_STR;
    case WindowMessage::WM_ACTIVATEAPP:
        return WM_ACTIVATEAPP_STR;
    case WindowMessage::WM_FONTCHANGE:
        return WM_FONTCHANGE_STR;
    case WindowMessage::WM_TIMECHANGE:
        return WM_TIMECHANGE_STR;
    case WindowMessage::WM_CANCELMODE:
        return WM_CANCELMODE_STR;
    case WindowMessage::WM_SETCURSOR:
        return WM_SETCURSOR_STR;
    case WindowMessage::WM_MOUSEACTIVATE:
        return WM_MOUSEACTIVATE_STR;
    case WindowMessage::WM_CHILDACTIVATE:
        return WM_CHILDACTIVATE_STR;
    case WindowMessage::WM_QUEUESYNC:
        return WM_QUEUESYNC_STR;
    case WindowMessage::WM_GETMINMAXINFO:
        return WM_GETMINMAXINFO_STR;
    case WindowMessage::WM_PAINTICON:
        return WM_PAINTICON_STR;
    case WindowMessage::WM_ICONERASEBKGND:
        return WM_ICONERASEBKGND_STR;
    case WindowMessage::WM_NEXTDLGCTL:
        return WM_NEXTDLGCTL_STR;
    case WindowMessage::WM_SPOOLERSTATUS:
        return WM_SPOOLERSTATUS_STR;
    case WindowMessage::WM_DRAWITEM:
        return WM_DRAWITEM_STR;
    case WindowMessage::WM_MEASUREITEM:
        return WM_MEASUREITEM_STR;
    case WindowMessage::WM_DELETEITEM:
        return WM_DELETEITEM_STR;
    case WindowMessage::WM_VKEYTOITEM:
        return WM_VKEYTOITEM_STR;
    case WindowMessage::WM_CHARTOITEM:
        return WM_CHARTOITEM_STR;
    case WindowMessage::WM_SETFONT:
        return WM_SETFONT_STR;
    case WindowMessage::WM_GETFONT:
        return WM_GETFONT_STR;
    case WindowMessage::WM_SETHOTKEY:
        return WM_SETHOTKEY_STR;
    case WindowMessage::WM_GETHOTKEY:
        return WM_GETHOTKEY_STR;
    case WindowMessage::WM_QUERYDRAGICON:
        return WM_QUERYDRAGICON_STR;
    case WindowMessage::WM_COMPAREITEM:
        return WM_COMPAREITEM_STR;
    case WindowMessage::WM_GETOBJECT:
        return WM_GETOBJECT_STR;
    case WindowMessage::WM_COMPACTING:
        return WM_COMPACTING_STR;
    case WindowMessage::WM_COMMNOTIFY:
        return WM_COMMNOTIFY_STR;
    case WindowMessage::WM_WINDOWPOSCHANGING:
        return WM_WINDOWPOSCHANGING_STR;
    case WindowMessage::WM_WINDOWPOSCHANGED:
        return WM_WINDOWPOSCHANGED_STR;
    case WindowMessage::WM_POWER:
        return WM_POWER_STR;
    case WindowMessage::WM_COPYGLOBALDATA:
        return WM_COPYGLOBALDATA_STR;
    case WindowMessage::WM_COPYDATA:
        return WM_COPYDATA_STR;
    case WindowMessage::WM_CANCELJOURNAL:
        return WM_CANCELJOURNAL_STR;
    case WindowMessage::WM_NOTIFY:
        return WM_NOTIFY_STR;
    case WindowMessage::WM_INPUTLANGCHANGEREQUEST:
        return WM_INPUTLANGCHANGEREQUEST_STR;
    case WindowMessage::WM_INPUTLANGCHANGE:
        return WM_INPUTLANGCHANGE_STR;
    case WindowMessage::WM_TCARD:
        return WM_TCARD_STR;
    case WindowMessage::WM_HELP:
        return WM_HELP_STR;
    case WindowMessage::WM_USERCHANGED:
        return WM_USERCHANGED_STR;
    case WindowMessage::WM_NOTIFYFORMAT:
        return WM_NOTIFYFORMAT_STR;
    case WindowMessage::WM_CONTEXTMENU:
        return WM_CONTEXTMENU_STR;
    case WindowMessage::WM_STYLECHANGING:
        return WM_STYLECHANGING_STR;
    case WindowMessage::WM_STYLECHANGED:
        return WM_STYLECHANGED_STR;
    case WindowMessage::WM_DISPLAYCHANGE:
        return WM_DISPLAYCHANGE_STR;
    case WindowMessage::WM_GETICON:
        return WM_GETICON_STR;
    case WindowMessage::WM_SETICON:
        return WM_SETICON_STR;
    case WindowMessage::WM_NCCREATE:
        return WM_NCCREATE_STR;
    case WindowMessage::WM_NCDESTROY:
        return WM_NCDESTROY_STR;
    case WindowMessage::WM_NCCALCSIZE:
        return WM_NCCALCSIZE_STR;
    case WindowMessage::WM_NCHITTEST:
        return WM_NCHITTEST_STR;
    case WindowMessage::WM_NCPAINT:
        return WM_NCPAINT_STR;
    case WindowMessage::WM_NCACTIVATE:
        return WM_NCACTIVATE_STR;
    case WindowMessage::WM_GETDLGCODE:
        return WM_GETDLGCODE_STR;
    case WindowMessage::WM_SYNCPAINT:
        return WM_SYNCPAINT_STR;
    case WindowMessage::WM_NCMOUSEMOVE:
        return WM_NCMOUSEMOVE_STR;
    case WindowMessage::WM_NCLBUTTONDOWN:
        return WM_NCLBUTTONDOWN_STR;
    case WindowMessage::WM_NCLBUTTONUP:
        return WM_NCLBUTTONUP_STR;
    case WindowMessage::WM_NCLBUTTONDBLCLK:
        return WM_NCLBUTTONDBLCLK_STR;
    case WindowMessage::WM_NCRBUTTONDOWN:
        return WM_NCRBUTTONDOWN_STR;
    case WindowMessage::WM_NCRBUTTONUP:
        return WM_NCRBUTTONUP_STR;
    case WindowMessage::WM_NCRBUTTONDBLCLK:
        return WM_NCRBUTTONDBLCLK_STR;
    case WindowMessage::WM_NCMBUTTONDOWN:
        return WM_NCMBUTTONDOWN_STR;
    case WindowMessage::WM_NCMBUTTONUP:
        return WM_NCMBUTTONUP_STR;
    case WindowMessage::WM_NCMBUTTONDBLCLK:
        return WM_NCMBUTTONDBLCLK_STR;
    case WindowMessage::WM_NCXBUTTONDOWN:
        return WM_NCXBUTTONDOWN_STR;
    case WindowMessage::WM_NCXBUTTONUP:
        return WM_NCXBUTTONUP_STR;
    case WindowMessage::WM_NCXBUTTONDBLCLK:
        return WM_NCXBUTTONDBLCLK_STR;
    case WindowMessage::WM_INPUT:
        return WM_INPUT_STR;
    case WindowMessage::WM_KEYDOWN:
        return WM_KEYDOWN_STR;
    case WindowMessage::WM_KEYUP:
        return WM_KEYUP_STR;
    case WindowMessage::WM_CHAR:
        return WM_CHAR_STR;
    case WindowMessage::WM_DEADCHAR:
        return WM_DEADCHAR_STR;
    case WindowMessage::WM_SYSKEYDOWN:
        return WM_SYSKEYDOWN_STR;
    case WindowMessage::WM_SYSKEYUP:
        return WM_SYSKEYUP_STR;
    case WindowMessage::WM_SYSCHAR:
        return WM_SYSCHAR_STR;
    case WindowMessage::WM_SYSDEADCHAR:
        return WM_SYSDEADCHAR_STR;
    case WindowMessage::WM_WNT_CONVERTREQUESTEX:
        return WM_WNT_CONVERTREQUESTEX_STR;
    case WindowMessage::WM_CONVERTREQUEST:
        return WM_CONVERTREQUEST_STR;
    case WindowMessage::WM_CONVERTRESULT:
        return WM_CONVERTRESULT_STR;
    case WindowMessage::WM_INTERIM:
        return WM_INTERIM_STR;
    case WindowMessage::WM_IME_STARTCOMPOSITION:
        return WM_IME_STARTCOMPOSITION_STR;
    case WindowMessage::WM_IME_ENDCOMPOSITION:
        return WM_IME_ENDCOMPOSITION_STR;
    case WindowMessage::WM_IME_COMPOSITION:
        return WM_IME_COMPOSITION_STR;
    case WindowMessage::WM_INITDIALOG:
        return WM_INITDIALOG_STR;
    case WindowMessage::WM_COMMAND:
        return WM_COMMAND_STR;
    case WindowMessage::WM_SYSCOMMAND:
        return WM_SYSCOMMAND_STR;
    case WindowMessage::WM_TIMER:
        return WM_TIMER_STR;
    case WindowMessage::WM_HSCROLL:
        return WM_HSCROLL_STR;
    case WindowMessage::WM_VSCROLL:
        return WM_VSCROLL_STR;
    case WindowMessage::WM_INITMENU:
        return WM_INITMENU_STR;
    case WindowMessage::WM_INITMENUPOPUP:
        return WM_INITMENUPOPUP_STR;
    case WindowMessage::WM_SYSTIMER:
        return WM_SYSTIMER_STR;
    case WindowMessage::WM_MENUSELECT:
        return WM_MENUSELECT_STR;
    case WindowMessage::WM_MENUCHAR:
        return WM_MENUCHAR_STR;
    case WindowMessage::WM_ENTERIDLE:
        return WM_ENTERIDLE_STR;
    case WindowMessage::WM_MENURBUTTONUP:
        return WM_MENURBUTTONUP_STR;
    case WindowMessage::WM_MENUDRAG:
        return WM_MENUDRAG_STR;
    case WindowMessage::WM_MENUGETOBJECT:
        return WM_MENUGETOBJECT_STR;
    case WindowMessage::WM_UNINITMENUPOPUP:
        return WM_UNINITMENUPOPUP_STR;
    case WindowMessage::WM_MENUCOMMAND:
        return WM_MENUCOMMAND_STR;
    case WindowMessage::WM_CHANGEUISTATE:
        return WM_CHANGEUISTATE_STR;
    case WindowMessage::WM_UPDATEUISTATE:
        return WM_UPDATEUISTATE_STR;
    case WindowMessage::WM_QUERYUISTATE:
        return WM_QUERYUISTATE_STR;
    case WindowMessage::WM_CTLCOLORMSGBOX:
        return WM_CTLCOLORMSGBOX_STR;
    case WindowMessage::WM_CTLCOLOREDIT:
        return WM_CTLCOLOREDIT_STR;
    case WindowMessage::WM_CTLCOLORLISTBOX:
        return WM_CTLCOLORLISTBOX_STR;
    case WindowMessage::WM_CTLCOLORBTN:
        return WM_CTLCOLORBTN_STR;
    case WindowMessage::WM_CTLCOLORDLG:
        return WM_CTLCOLORDLG_STR;
    case WindowMessage::WM_CTLCOLORSCROLLBAR:
        return WM_CTLCOLORSCROLLBAR_STR;
    case WindowMessage::WM_CTLCOLORSTATIC:
        return WM_CTLCOLORSTATIC_STR;
    case WindowMessage::WM_MOUSEMOVE:
        return WM_MOUSEMOVE_STR;
    case WindowMessage::WM_LBUTTONDOWN:
        return WM_LBUTTONDOWN_STR;
    case WindowMessage::WM_LBUTTONUP:
        return WM_LBUTTONUP_STR;
    case WindowMessage::WM_LBUTTONDBLCLK:
        return WM_LBUTTONDBLCLK_STR;
    case WindowMessage::WM_RBUTTONDOWN:
        return WM_RBUTTONDOWN_STR;
    case WindowMessage::WM_RBUTTONUP:
        return WM_RBUTTONUP_STR;
    case WindowMessage::WM_RBUTTONDBLCLK:
        return WM_RBUTTONDBLCLK_STR;
    case WindowMessage::WM_MBUTTONDOWN:
        return WM_MBUTTONDOWN_STR;
    case WindowMessage::WM_MBUTTONUP:
        return WM_MBUTTONUP_STR;
    case WindowMessage::WM_MBUTTONDBLCLK:
        return WM_MBUTTONDBLCLK_STR;
    case WindowMessage::WM_MOUSEWHEEL:
        return WM_MOUSEWHEEL_STR;
    case WindowMessage::WM_XBUTTONDOWN:
        return WM_XBUTTONDOWN_STR;
    case WindowMessage::WM_XBUTTONUP:
        return WM_XBUTTONUP_STR;
    case WindowMessage::WM_XBUTTONDBLCLK:
        return WM_XBUTTONDBLCLK_STR;
    case WindowMessage::WM_MOUSEHWHEEL:
        return WM_MOUSEHWHEEL_STR;
    case WindowMessage::WM_PARENTNOTIFY:
        return WM_PARENTNOTIFY_STR;
    case WindowMessage::WM_ENTERMENULOOP:
        return WM_ENTERMENULOOP_STR;
    case WindowMessage::WM_EXITMENULOOP:
        return WM_EXITMENULOOP_STR;
    case WindowMessage::WM_NEXTMENU:
        return WM_NEXTMENU_STR;
    case WindowMessage::WM_SIZING:
        return WM_SIZING_STR;
    case WindowMessage::WM_CAPTURECHANGED:
        return WM_CAPTURECHANGED_STR;
    case WindowMessage::WM_MOVING:
        return WM_MOVING_STR;
    case WindowMessage::WM_POWERBROADCAST:
        return WM_POWERBROADCAST_STR;
    case WindowMessage::WM_DEVICECHANGE:
        return WM_DEVICECHANGE_STR;
    case WindowMessage::WM_MDICREATE:
        return WM_MDICREATE_STR;
    case WindowMessage::WM_MDIDESTROY:
        return WM_MDIDESTROY_STR;
    case WindowMessage::WM_MDIACTIVATE:
        return WM_MDIACTIVATE_STR;
    case WindowMessage::WM_MDIRESTORE:
        return WM_MDIRESTORE_STR;
    case WindowMessage::WM_MDINEXT:
        return WM_MDINEXT_STR;
    case WindowMessage::WM_MDIMAXIMIZE:
        return WM_MDIMAXIMIZE_STR;
    case WindowMessage::WM_MDITILE:
        return WM_MDITILE_STR;
    case WindowMessage::WM_MDICASCADE:
        return WM_MDICASCADE_STR;
    case WindowMessage::WM_MDIICONARRANGE:
        return WM_MDIICONARRANGE_STR;
    case WindowMessage::WM_MDIGETACTIVE:
        return WM_MDIGETACTIVE_STR;
    case WindowMessage::WM_MDISETMENU:
        return WM_MDISETMENU_STR;
    case WindowMessage::WM_ENTERSIZEMOVE:
        return WM_ENTERSIZEMOVE_STR;
    case WindowMessage::WM_EXITSIZEMOVE:
        return WM_EXITSIZEMOVE_STR;
    case WindowMessage::WM_DROPFILES:
        return WM_DROPFILES_STR;
    case WindowMessage::WM_MDIREFRESHMENU:
        return WM_MDIREFRESHMENU_STR;
    case WindowMessage::WM_IME_REPORT:
        return WM_IME_REPORT_STR;
    case WindowMessage::WM_IME_SETCONTEXT:
        return WM_IME_SETCONTEXT_STR;
    case WindowMessage::WM_IME_NOTIFY:
        return WM_IME_NOTIFY_STR;
    case WindowMessage::WM_IME_CONTROL:
        return WM_IME_CONTROL_STR;
    case WindowMessage::WM_IME_COMPOSITIONFULL:
        return WM_IME_COMPOSITIONFULL_STR;
    case WindowMessage::WM_IME_SELECT:
        return WM_IME_SELECT_STR;
    case WindowMessage::WM_IME_CHAR:
        return WM_IME_CHAR_STR;
    case WindowMessage::WM_IME_REQUEST:
        return WM_IME_REQUEST_STR;
    case WindowMessage::WM_IMEKEYDOWN:
        return WM_IMEKEYDOWN_STR;
    case WindowMessage::WM_IMEKEYUP:
        return WM_IMEKEYUP_STR;
    case WindowMessage::WM_NCMOUSEHOVER:
        return WM_NCMOUSEHOVER_STR;
    case WindowMessage::WM_MOUSEHOVER:
        return WM_MOUSEHOVER_STR;
    case WindowMessage::WM_NCMOUSELEAVE:
        return WM_NCMOUSELEAVE_STR;
    case WindowMessage::WM_MOUSELEAVE:
        return WM_MOUSELEAVE_STR;
    case WindowMessage::WM_CUT:
        return WM_CUT_STR;
    case WindowMessage::WM_COPY:
        return WM_COPY_STR;
    case WindowMessage::WM_PASTE:
        return WM_PASTE_STR;
    case WindowMessage::WM_CLEAR:
        return WM_CLEAR_STR;
    case WindowMessage::WM_UNDO:
        return WM_UNDO_STR;
    case WindowMessage::WM_RENDERFORMAT:
        return WM_RENDERFORMAT_STR;
    case WindowMessage::WM_RENDERALLFORMATS:
        return WM_RENDERALLFORMATS_STR;
    case WindowMessage::WM_DESTROYCLIPBOARD:
        return WM_DESTROYCLIPBOARD_STR;
    case WindowMessage::WM_DRAWCLIPBOARD:
        return WM_DRAWCLIPBOARD_STR;
    case WindowMessage::WM_PAINTCLIPBOARD:
        return WM_PAINTCLIPBOARD_STR;
    case WindowMessage::WM_VSCROLLCLIPBOARD:
        return WM_VSCROLLCLIPBOARD_STR;
    case WindowMessage::WM_SIZECLIPBOARD:
        return WM_SIZECLIPBOARD_STR;
    case WindowMessage::WM_ASKCBFORMATNAME:
        return WM_ASKCBFORMATNAME_STR;
    case WindowMessage::WM_CHANGECBCHAIN:
        return WM_CHANGECBCHAIN_STR;
    case WindowMessage::WM_HSCROLLCLIPBOARD:
        return WM_HSCROLLCLIPBOARD_STR;
    case WindowMessage::WM_QUERYNEWPALETTE:
        return WM_QUERYNEWPALETTE_STR;
    case WindowMessage::WM_PALETTEISCHANGING:
        return WM_PALETTEISCHANGING_STR;
    case WindowMessage::WM_PALETTECHANGED:
        return WM_PALETTECHANGED_STR;
    case WindowMessage::WM_HOTKEY:
        return WM_HOTKEY_STR;
    case WindowMessage::WM_PRINT:
        return WM_PRINT_STR;
    case WindowMessage::WM_PRINTCLIENT:
        return WM_PRINTCLIENT_STR;
    case WindowMessage::WM_APPCOMMAND:
        return WM_APPCOMMAND_STR;
    case WindowMessage::WM_HANDHELDFIRST:
        return WM_HANDHELDFIRST_STR;
    case WindowMessage::WM_HANDHELDLAST:
        return WM_HANDHELDLAST_STR;
    case WindowMessage::WM_AFXFIRST:
        return WM_AFXFIRST_STR;
    case WindowMessage::WM_AFXLAST:
        return WM_AFXLAST_STR;
    case WindowMessage::WM_PENWINFIRST:
        return WM_PENWINFIRST_STR;
    case WindowMessage::WM_RCRESULT:
        return WM_RCRESULT_STR;
    case WindowMessage::WM_HOOKRCRESULT:
        return WM_HOOKRCRESULT_STR;
    case WindowMessage::WM_GLOBALRCCHANGE:
        return WM_GLOBALRCCHANGE_STR;
    case WindowMessage::WM_SKB:
        return WM_SKB_STR;
    case WindowMessage::WM_PENCTL:
        return WM_PENCTL_STR;
    case WindowMessage::WM_PENMISC:
        return WM_PENMISC_STR;
    case WindowMessage::WM_CTLINIT:
        return WM_CTLINIT_STR;
    case WindowMessage::WM_PENEVENT:
        return WM_PENEVENT_STR;
    case WindowMessage::WM_PENWINLAST:
        return WM_PENWINLAST_STR;
    case WindowMessage::WM_USER:
        return WM_USER_STR;
    case WindowMessage::WM_CHOOSEFONT_GETLOGFONT:
        return WM_CHOOSEFONT_GETLOGFONT_STR;
    case WindowMessage::WM_PSD_MINMARGINRECT:
        return WM_PSD_MINMARGINRECT_STR;
    case WindowMessage::WM_PSD_MARGINRECT:
        return WM_PSD_MARGINRECT_STR;
    case WindowMessage::WM_PSD_GREEKTEXTRECT:
        return WM_PSD_GREEKTEXTRECT_STR;
    case WindowMessage::WM_PSD_ENVSTAMPRECT:
        return WM_PSD_ENVSTAMPRECT_STR;
    case WindowMessage::WM_PSD_YAFULLPAGERECT:
        return WM_PSD_YAFULLPAGERECT_STR;
    case WindowMessage::WM_CAP_UNICODE_START:
        return WM_CAP_UNICODE_START_STR;
    case WindowMessage::WM_CHOOSEFONT_SETLOGFONT:
        return WM_CHOOSEFONT_SETLOGFONT_STR;
    case WindowMessage::WM_CHOOSEFONT_SETFLAGS:
        return WM_CHOOSEFONT_SETFLAGS_STR;
    case WindowMessage::WM_CAP_SET_CALLBACK_STATUSW:
        return WM_CAP_SET_CALLBACK_STATUSW_STR;
    case WindowMessage::WM_CAP_DRIVER_GET_NAMEW:
        return WM_CAP_DRIVER_GET_NAMEW_STR;
    case WindowMessage::WM_CAP_DRIVER_GET_VERSIONW:
        return WM_CAP_DRIVER_GET_VERSIONW_STR;
    case WindowMessage::WM_CAP_FILE_SET_CAPTURE_FILEW:
        return WM_CAP_FILE_SET_CAPTURE_FILEW_STR;
    case WindowMessage::WM_CAP_FILE_GET_CAPTURE_FILEW:
        return WM_CAP_FILE_GET_CAPTURE_FILEW_STR;
    case WindowMessage::WM_CAP_FILE_SAVEASW:
        return WM_CAP_FILE_SAVEASW_STR;
    case WindowMessage::WM_CAP_FILE_SAVEDIBW:
        return WM_CAP_FILE_SAVEDIBW_STR;
    case WindowMessage::WM_CAP_SET_MCI_DEVICEW:
        return WM_CAP_SET_MCI_DEVICEW_STR;
    case WindowMessage::WM_CAP_GET_MCI_DEVICEW:
        return WM_CAP_GET_MCI_DEVICEW_STR;
    case WindowMessage::WM_CAP_PAL_OPENW:
        return WM_CAP_PAL_OPENW_STR;
    case WindowMessage::WM_CAP_PAL_SAVEW:
        return WM_CAP_PAL_SAVEW_STR;
    case WindowMessage::WM_CPL_LAUNCH:
        return WM_CPL_LAUNCH_STR;
    case WindowMessage::WM_CPL_LAUNCHED:
        return WM_CPL_LAUNCHED_STR;
    case WindowMessage::WM_APP:
        return WM_APP_STR;
    case WindowMessage::WM_RASDIALEVENT:
        return WM_RASDIALEVENT_STR;
    default:
        return Unknown;
    }

    return Unknown;
}

std::ostream& operator<<(std::ostream& os, WindowMessage msg) {
    os << to_string(msg);
    return os;
}

} // namespace win32k
} // namespace windows
} // namespace introvirt