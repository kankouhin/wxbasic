/*************************************************************
    Name:       wrap.cpp
    Purpose:    Wrap wxWindows classes and methods for wxBasic
    Author:     David Cuny
    Copyright:  (c) 2003 David Cuny <dcuny@lanset.com>
    Licence:    LGPL
*************************************************************/

#ifdef __BORLANDC__
    #pragma warn -8028
    #pragma warn -8006
#endif
#include "wx/calctrl.h"
#include "wx/caret.h"
#include "wx/dnd.h"
#include "wx/mdi.h"
#include "wx/tooltip.h"
#include "wx/grid.h"
#include "wx/config.h"
#include "wx/html/helpdata.h"
#include "wx/list.h"
#include "wx/socket.h"
#include "wx/tipdlg.h"
#include "wx/filedlg.h"
#include "wx/colordlg.h"
#include "wx/textdlg.h"
#include "wx/choicdlg.h"
#include "wx/msgdlg.h"
#include "wx/utils.h"
#include "wx/app.h"
#include "wx/window.h"
#include <wx/utils.h>
#include <wx/docview.h>
#include "wx/intl.h"
#include "wx/cmndata.h"
#include "wx/colour.h"
#include <wx/pen.h>
#include "wx/palette.h"
#include "wx/brush.h"
#include "wx/gdicmn.h"
#include "wx/dc.h"
#include "wx/dcmemory.h"
#include "wx/dcclient.h"
#include "wx/dcscreen.h"
#include "wx/bitmap.h"
#include "wx/image.h"
#include "wx/imaglist.h"
#include "wx/cursor.h"
#include "wx/fdrepdlg.h"
#include "wx/minifram.h"
#include "wx/html/htmlfilt.h"
#include "wx/html/htmlwin.h"
#include "wx/splitter.h"
#include "wx/datetime.h"
#include "wx/checklst.h"
#include "wx/listctrl.h"
#include "wx/treectrl.h"
#include "wx/tbarbase.h"
#include "wx/toolbar.h"
#include "wx/notebook.h"
#include "wx/sashwin.h"
#include "wx/laywin.h"
#include "wx/fontdlg.h"
#include "wx/printdlg.h"
#include "wx/menu.h"
#include "wx/menuitem.h"
#include "wx/event.h"
#include "wx/timer.h"
#include "wx/dialup.h"
#include "wx/joystick.h"
#include "wx/process.h"
#include "wx/spinbutt.h"
#include "wx/spinctrl.h"
#include "wx/wizard.h"
#include "wx/layout.h"
#include "wx/font.h"
#include "wx/wxhtml.h"
#include "wx/fs_zip.h"
#include "wx/stc/stc.h"
#include "wx/dir.h"
#include "wx/stream.h"
#include "wx/protocol/protocol.h"
#include "wx/protocol/ftp.h"
#include "wx/url.h"


wSymbol* _wxResourceTable;
wSymbol* _wxAcceleratorTable;
wSymbol* _wxArrayInt;
wSymbol* _wxArrayTreeItemIds;
wSymbol* _wxCalendarDateAttr;
wSymbol* _wxCaret;
wSymbol* _wxClassInfo;
wSymbol* _wxDateSpan;
wSymbol* _wxDropTarget;
wSymbol* _wxIcon;
wSymbol* _wxLog;
wSymbol* _wxMDIClientWindow;
wSymbol* _wxMenuItemList;
wSymbol* _wxObjectRefData;
wSymbol* _wxPrintDialogData;
wSymbol* _wxRegion;
wSymbol* _wxRect;
wSymbol* _wxToolTip;
wSymbol* _wxTreeItemData;
wSymbol* _wxTreeItemId;
wSymbol* _wxValidator;
wSymbol* _wxWindowList;
wSymbol* _wxMask;
wSymbol* _wxProcess;
wSymbol* _wxImageHandler;
wSymbol* _wxGridTableBase;
wSymbol* _wxConfigBase;
wSymbol* _wxHtmlHelpData;
wSymbol* _wxMemoryBuffer;
wSymbol* _wxNodeBase;
wSymbol* _wxSockAddress;
wSymbol* _wxTimeSpan;
wSymbol* _wxLocale;
wSymbol* _wxObject;
wSymbol* _wxNode;
wSymbol* _wxList;
wSymbol* _wxListKey;
wSymbol* _wxDataFormat;
wSymbol* _wxTipProvider;
wSymbol* _wxPoint;
wSymbol* _wxSize;
wSymbol* _wxColourData;
wSymbol* _wxColour;
wSymbol* _wxColor;
wSymbol* _wxGDIObject;
wSymbol* _wxPen;
wSymbol* _wxPenFromColour;
wSymbol* _wxPenFromColor;
wSymbol* _wxPenFromColourName;
wSymbol* _wxPenFromColorName;
wSymbol* _wxPenCopy;
wSymbol* _wxPalette;
wSymbol* _wxBrush;
wSymbol* _wxBrushFromColourName;
wSymbol* _wxBrushFromColorName;
wSymbol* _wxBrushFromBitmap;
wSymbol* _wxBrushCopy;
wSymbol* _wxBrushList;
wSymbol* _wxDC;
wSymbol* _wxMemoryDC;
wSymbol* _wxPrintData;
wSymbol* _wxWindowDC;
wSymbol* _wxClientDC;
wSymbol* _wxPaintDC;
wSymbol* _wxScreenDC;
wSymbol* _wxBitmap;
wSymbol* _wxBitmapCopy;
wSymbol* _wxEmptyBitmap;
wSymbol* _wxImage;
wSymbol* _wxNullImage;
wSymbol* _wxImageFromBitmap;
wSymbol* _wxEmptyImage;
wSymbol* _wxImageFromData;
wSymbol* _wxImageFromFile;
wSymbol* _wxImageList;
wSymbol* _wxCursor;
wSymbol* _wxEvtHandler;
wSymbol* _wxApp;
wSymbol* _wxWindow;
wSymbol* _wxPanel;
wSymbol* _wxDialog;
wSymbol* _wxFindReplaceData;
wSymbol* _wxFindReplaceDialog;
wSymbol* _wxFrame;
wSymbol* _wxMDIParentFrame;
wSymbol* _wxMDIChildFrame;
wSymbol* _wxMiniFrame;
wSymbol* _wxScrolledWindow;
wSymbol* _wxHtmlFilter;
wSymbol* _wxHtmlWindow;
wSymbol* _wxSplitterWindow;
wSymbol* _wxStatusBar;
wSymbol* _wxControl;
wSymbol* _wxButton;
wSymbol* _wxBitmapButton;
wSymbol* _wxDateTime;
wSymbol* _wxCalendarCtrl;
wSymbol* _wxCheckBox;
wSymbol* _wxChoice;
wSymbol* _wxComboBox;
wSymbol* _wxGauge;
wSymbol* _wxStaticBox;
wSymbol* _wxListBox;
wSymbol* _wxCheckListBox;
wSymbol* _wxListItem;
wSymbol* _wxListCtrl;
wSymbol* _wxTextCtrl;
wSymbol* _wxTreeCtrl;
wSymbol* _wxScrollBar;
wSymbol* _wxSpinButton;
wSymbol* _wxSpinCtrl;
wSymbol* _wxStaticText;
wSymbol* _wxStaticBitmap;
wSymbol* _wxRadioBox;
wSymbol* _wxRadioButton;
wSymbol* _wxSlider;
wSymbol* _wxToolBarBase;
wSymbol* _wxToolBar;
wSymbol* _wxNotebook;
wSymbol* _wxSashWindow;
wSymbol* _wxSashLayoutWindow;
wSymbol* _wxColourDialog;
wSymbol* _wxColorDialog;
wSymbol* _wxFileDialog;
wSymbol* _wxDirDialog;
wSymbol* _wxSingleChoiceDialog;
wSymbol* _wxTextEntryDialog;
wSymbol* _wxFontData;
wSymbol* _wxFontDialog;
wSymbol* _wxPageSetupDialogData;
wSymbol* _wxPageSetupDialog;
wSymbol* _wxPrintDialog;
wSymbol* _wxMessageDialog;
wSymbol* _wxMenu;
wSymbol* _wxMenuBar;
wSymbol* _wxMenuItem;
wSymbol* _wxEvent;
wSymbol* _wxTimerEvent;
wSymbol* _wxCommandEvent;
wSymbol* _wxNotifyEvent;
wSymbol* _wxActivateEvent;
wSymbol* _wxCalendarEvent;
wSymbol* _wxCalculateLayoutEvent;
wSymbol* _wxCloseEvent;
wSymbol* _wxDialUpEvent;
wSymbol* _wxDropFilesEvent;
wSymbol* _wxEraseEvent;
wSymbol* _wxFocusEvent;
wSymbol* _wxKeyEvent;
wSymbol* _wxIdleEvent;
wSymbol* _wxInitDialogEvent;
wSymbol* _wxJoystick;
wSymbol* _wxJoystickEvent;
wSymbol* _wxListEvent;
wSymbol* _wxMenuEvent;
wSymbol* _wxMouseEvent;
wSymbol* _wxMoveEvent;
wSymbol* _wxNotebookEvent;
wSymbol* _wxPaintEvent;
wSymbol* _wxProcessEvent;
wSymbol* _wxQueryLayoutInfoEvent;
wSymbol* _wxScrollEvent;
wSymbol* _wxScrollWinEvent;
wSymbol* _wxSizeEvent;
wSymbol* _wxSocketEvent;
wSymbol* _wxSpinEvent;
wSymbol* _wxSysColourChangedEvent;
wSymbol* _wxTreeEvent;
wSymbol* _wxUpdateUIEvent;
wSymbol* _wxWizardEvent;
wSymbol* _wxSplitterEvent;
wSymbol* _wxSizer;
wSymbol* _wxGridSizer;
wSymbol* _wxFlexGridSizer;
wSymbol* _wxBoxSizer;
wSymbol* _wxStaticBoxSizer;
wSymbol* _wxNotebookSizer;
wSymbol* _wxIndividualLayoutConstraint;
wSymbol* _wxLayoutConstraints;
wSymbol* _wxFont;
wSymbol* _wxTimer;
wSymbol* _wxHtmlHelpController;
wSymbol* _wxStyledTextCtrl;
wSymbol* _wxStyledTextEvent;
wSymbol* _wxDir;
wSymbol* _wxStreamBase;
wSymbol* _wxInputStream;
wSymbol* _wxOutputStream;
wSymbol* _wxSocketBase;
wSymbol* _wxSocketClient;
wSymbol* _wxProtocol;
wSymbol* _wxFTP;
wSymbol* _wxHTTP;
wSymbol* _wxURL;

//'wx' prefix causes scanner to think it's a pointer
// typedef'ing it fixes that
typedef wxCoord coord;

// For cases where it's really a unsigned char*, so the scanner
// doesn't think it's a string
typedef unsigned char uchar;
void wxAcceleratorTable_del()
{
    delete (wxAcceleratorTable *)(wTheCall->self->ptr);
}


void wxArrayInt_del()
{
    delete (wxArrayInt *)(wTheCall->self->ptr);
}


void wxArrayTreeItemIds_del()
{
    delete (wxArrayTreeItemIds *)(wTheCall->self->ptr);
}


void wxCalendarDateAttr_del()
{
    delete (wxCalendarDateAttr *)(wTheCall->self->ptr);
}


void wxCaret_del()
{
    delete (wxCaret *)(wTheCall->self->ptr);
}


void wxClassInfo_del()
{
    delete (wxClassInfo *)(wTheCall->self->ptr);
}


void wxDateSpan_del()
{
    delete (wxDateSpan *)(wTheCall->self->ptr);
}


void wxDropTarget_del()
{
    delete (wxDropTarget *)(wTheCall->self->ptr);
}


void wxIcon_del()
{
    delete (wxIcon *)(wTheCall->self->ptr);
}


void wxLog_del()
{
    delete (wxLog *)(wTheCall->self->ptr);
}


void wxMDIClientWindow_del()
{
    delete (wxMDIClientWindow *)(wTheCall->self->ptr);
}


void wxMenuItemList_del()
{
    delete (wxMenuItemList *)(wTheCall->self->ptr);
}


void wxObjectRefData_del()
{
    delete (wxObjectRefData *)(wTheCall->self->ptr);
}


void wxPrintDialogData_del()
{
    delete (wxPrintDialogData *)(wTheCall->self->ptr);
}


void wxRegion_del()
{
    delete (wxRegion *)(wTheCall->self->ptr);
}


void wxRect_del()
{
    delete (wxRect *)(wTheCall->self->ptr);
}


void wxToolTip_del()
{
    delete (wxToolTip *)(wTheCall->self->ptr);
}


void wxTreeItemData_del()
{
    delete (wxTreeItemData *)(wTheCall->self->ptr);
}


void wxTreeItemId_del()
{
    delete (wxTreeItemId *)(wTheCall->self->ptr);
}


void wxValidator_del()
{
    delete (wxValidator *)(wTheCall->self->ptr);
}


void wxWindowList_del()
{
    delete (wxWindowList *)(wTheCall->self->ptr);
}


void wxMask_del()
{
    delete (wxMask *)(wTheCall->self->ptr);
}


void wxProcess_del()
{
    delete (wxProcess *)(wTheCall->self->ptr);
}


void wxImageHandler_del()
{
    delete (wxImageHandler *)(wTheCall->self->ptr);
}


void wxGridTableBase_del()
{
    delete (wxGridTableBase *)(wTheCall->self->ptr);
}


void wxConfigBase_del()
{
    delete (wxConfigBase *)(wTheCall->self->ptr);
}


void wxHtmlHelpData_del()
{
    delete (wxHtmlHelpData *)(wTheCall->self->ptr);
}


void wxMemoryBuffer_del()
{
    delete (wxMemoryBuffer *)(wTheCall->self->ptr);
}


void wxNodeBase_del()
{
    delete (wxNodeBase *)(wTheCall->self->ptr);
}


void wxSockAddress_del()
{
    delete (wxSockAddress *)(wTheCall->self->ptr);
}


void wxTimeSpan_del()
{
    delete (wxTimeSpan *)(wTheCall->self->ptr);
}


// %builtin wxString wxFileSelector(const wxString& message, const wxString& default_path = "", const wxString& default_filename = "", const wxString& default_extension = "", const wxString& wildcard = "*.*", int flags = 0, wxWindow *parent = NULL, int x = -1, int y = -1)
void builtin_wxFileSelector() {
    int y = (wTheCall->parmCount > 8 ? (int)wStackPopNumber() : -1);
    int x = (wTheCall->parmCount > 7 ? (int)wStackPopNumber() : -1);
    wxWindow *parent = (wTheCall->parmCount > 6 ? (wxWindow *)wStackPopObjectPtr( _wxWindow) : NULL);
    int flags = (wTheCall->parmCount > 5 ? (int)wStackPopNumber() : 0);
    wxString wildcard = wxString((wTheCall->parmCount > 4 ? wStackPopChar() : "*.*"), *wxConvCurrent);
    wxString default_extension = wxString((wTheCall->parmCount > 3 ? wStackPopChar() : ""), *wxConvCurrent);
    wxString default_filename = wxString((wTheCall->parmCount > 2 ? wStackPopChar() : ""), *wxConvCurrent);
    wxString default_path = wxString((wTheCall->parmCount > 1 ? wStackPopChar() : ""), *wxConvCurrent);
    wxString message = wxString(wStackPopChar(), *wxConvCurrent);
    wxString returns = wxFileSelector(message, default_path, default_filename, default_extension, wildcard, flags, parent, x, y);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// %builtin %alias wxGetColorFromUser wxColour wxGetColourFromUser(wxWindow *parent, const wxColour& colInit)
void builtin_wxGetColourFromUser() {
    wxColour *colInit = (wxColour *)wStackPopObjectPtr( _wxColour);
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    // make a pointer via copy constructor
    wxColour *returns = new wxColour(wxGetColourFromUser(parent, *colInit));
    wWrapDerefArgs();
    wWrapPushObject( _wxColour, W_TRUE, (void *)returns );
}

// %builtin long wxGetNumberFromUser( const wxString& message, const wxString& prompt, const wxString& caption, long value, long min = 0, long max = 100, wxWindow *parent = NULL, const wxPoint& pos = wxDefaultPosition)
void builtin_wxGetNumberFromUser() {
    const wxPoint *pos = (wTheCall->parmCount > 7 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxWindow *parent = (wTheCall->parmCount > 6 ? (wxWindow *)wStackPopObjectPtr( _wxWindow) : NULL);
    long max = (wTheCall->parmCount > 5 ? (long)wStackPopNumber() : 100);
    long min = (wTheCall->parmCount > 4 ? (long)wStackPopNumber() : 0);
    long value = (long)wStackPopNumber();
    wxString caption = wxString(wStackPopChar(), *wxConvCurrent);
    wxString prompt = wxString(wStackPopChar(), *wxConvCurrent);
    wxString message = wxString(wStackPopChar(), *wxConvCurrent);
    long returns = wxGetNumberFromUser(message, prompt, caption, value, min, max, parent, *pos);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %builtin wxString wxGetPasswordFromUser(const wxString& message, const wxString& caption = "Input text", const wxString& default_value = "", wxWindow *parent = NULL)
void builtin_wxGetPasswordFromUser() {
    wxWindow *parent = (wTheCall->parmCount > 3 ? (wxWindow *)wStackPopObjectPtr( _wxWindow) : NULL);
    wxString default_value = wxString((wTheCall->parmCount > 2 ? wStackPopChar() : ""), *wxConvCurrent);
    wxString caption = wxString((wTheCall->parmCount > 1 ? wStackPopChar() : "Input text"), *wxConvCurrent);
    wxString message = wxString(wStackPopChar(), *wxConvCurrent);
    wxString returns = wxGetPasswordFromUser(message, caption, default_value, parent);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// %builtin wxString wxGetTextFromUser(const wxString& message, const wxString& caption = "Input text", const wxString& default_value = "", wxWindow *parent = NULL, int x = -1, int y = -1, bool centre = TRUE)
void builtin_wxGetTextFromUser() {
    bool centre = (wTheCall->parmCount > 6 ? (bool)wStackPopNumber() : TRUE);
    int y = (wTheCall->parmCount > 5 ? (int)wStackPopNumber() : -1);
    int x = (wTheCall->parmCount > 4 ? (int)wStackPopNumber() : -1);
    wxWindow *parent = (wTheCall->parmCount > 3 ? (wxWindow *)wStackPopObjectPtr( _wxWindow) : NULL);
    wxString default_value = wxString((wTheCall->parmCount > 2 ? wStackPopChar() : ""), *wxConvCurrent);
    wxString caption = wxString((wTheCall->parmCount > 1 ? wStackPopChar() : "Input text"), *wxConvCurrent);
    wxString message = wxString(wStackPopChar(), *wxConvCurrent);
    wxString returns = wxGetTextFromUser(message, caption, default_value, parent, x, y, centre);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// %builtin int wxMessageBox(const wxString& message, const wxString& caption = "Message", int style = wxOK | wxCENTRE, wxWindow *parent = NULL, int x = -1, int y = -1)
void builtin_wxMessageBox() {
    int y = (wTheCall->parmCount > 5 ? (int)wStackPopNumber() : -1);
    int x = (wTheCall->parmCount > 4 ? (int)wStackPopNumber() : -1);
    wxWindow *parent = (wTheCall->parmCount > 3 ? (wxWindow *)wStackPopObjectPtr( _wxWindow) : NULL);
    int style = (wTheCall->parmCount > 2 ? (int)wStackPopNumber() : wxOK | wxCENTRE);
    wxString caption = wxString((wTheCall->parmCount > 1 ? wStackPopChar() : "Message"), *wxConvCurrent);
    wxString message = wxString(wStackPopChar(), *wxConvCurrent);
    int returns = wxMessageBox(message, caption, style, parent, x, y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %builtin long wxNewId()
void builtin_wxNewId() {
    long returns = wxNewId();
    wStackPushNumber( (wNumber)returns);
}

// %builtin void wxRegisterId(long id)
void builtin_wxRegisterId() {
    long id = (long)wStackPopNumber();
    wxRegisterId(id);
    wWrapDerefArgs();
}

// %builtin void wxBeginBusyCursor(wxCursor *cursor = wxHOURGLASS_CURSOR)
void builtin_wxBeginBusyCursor() {
    wxCursor *cursor = (wTheCall->parmCount > 0 ? (wxCursor *)wStackPopObjectPtr( _wxCursor) : wxHOURGLASS_CURSOR);
    wxBeginBusyCursor(cursor);
    wWrapDerefArgs();
}

// %builtin void wxBell()
void builtin_wxBell() {
    wxBell();
}

// %builtin wxObject * wxCreateDynamicObject(const wxString& className)
void builtin_wxCreateDynamicObject() {
    wxString className = wxString(wStackPopChar(), *wxConvCurrent);
    wxObject *returns = wxCreateDynamicObject(className);
    wWrapDerefArgs();
    wWrapPushObject( _wxObject, W_TRUE, (void *)returns );
}

// %builtin void wxDisplaySize(int *width, int *height)
void builtin_wxDisplaySize() {
    int *height = (int *)wStackPopObjectPtr( NULL );
    int *width = (int *)wStackPopObjectPtr( NULL );
    wxDisplaySize(width, height);
    wWrapDerefArgs();
}

// %builtin void wxEnableTopLevelWindows(bool enable = TRUE)
void builtin_wxEnableTopLevelWindows() {
    bool enable = (wTheCall->parmCount > 0 ? (bool)wStackPopNumber() : TRUE);
    wxEnableTopLevelWindows(enable);
    wWrapDerefArgs();
}

// %builtin void wxEndBusyCursor()
void builtin_wxEndBusyCursor() {
    wxEndBusyCursor();
}

// %builtin void wxError(const wxString& msg, const wxString& title = "wxWindows Internal Error")
void builtin_wxError() {
    wxString title = wxString((wTheCall->parmCount > 1 ? wStackPopChar() : "wxWindows Internal Error"), *wxConvCurrent);
    wxString msg = wxString(wStackPopChar(), *wxConvCurrent);
    wxError(msg, title);
    wWrapDerefArgs();
}

// %builtin long wxExecute(const wxString& command, bool sync = FALSE, wxProcess *callback = NULL)
void builtin_wxExecute() {
    wxProcess *callback = (wTheCall->parmCount > 2 ? (wxProcess *)wStackPopObjectPtr( _wxProcess) : NULL);
    bool sync = (wTheCall->parmCount > 1 ? (bool)wStackPopNumber() : FALSE);
    wxString command = wxString(wStackPopChar(), *wxConvCurrent);
    long returns = wxExecute(command, sync, callback);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %builtin void wxExit()
void builtin_wxExit() {
    wxExit();
}

// %builtin void wxFatalError(const wxString& msg, const wxString& title = "wxWindows Fatal Error")
void builtin_wxFatalError() {
    wxString title = wxString((wTheCall->parmCount > 1 ? wStackPopChar() : "wxWindows Fatal Error"), *wxConvCurrent);
    wxString msg = wxString(wStackPopChar(), *wxConvCurrent);
    wxFatalError(msg, title);
    wWrapDerefArgs();
}

// %builtin int wxFindMenuItemId(wxFrame *frame, const wxString& menuString, const wxString& itemString)
void builtin_wxFindMenuItemId() {
    wxString itemString = wxString(wStackPopChar(), *wxConvCurrent);
    wxString menuString = wxString(wStackPopChar(), *wxConvCurrent);
    wxFrame *frame = (wxFrame *)wStackPopObjectPtr( _wxFrame);
    int returns = wxFindMenuItemId(frame, menuString, itemString);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %builtin wxWindow * wxFindWindowByLabel(const wxString& label, wxWindow *parent=NULL)
void builtin_wxFindWindowByLabel() {
    wxWindow *parent = (wTheCall->parmCount > 1 ? (wxWindow *)wStackPopObjectPtr( _wxWindow) : NULL);
    wxString label = wxString(wStackPopChar(), *wxConvCurrent);
    wxWindow *returns = wxFindWindowByLabel(label, parent);
    wWrapDerefArgs();
    wWrapPushObject( _wxWindow, W_TRUE, (void *)returns );
}

// %builtin wxWindow * wxFindWindowByName(const wxString& name, wxWindow *parent=NULL)
void builtin_wxFindWindowByName() {
    wxWindow *parent = (wTheCall->parmCount > 1 ? (wxWindow *)wStackPopObjectPtr( _wxWindow) : NULL);
    wxString name = wxString(wStackPopChar(), *wxConvCurrent);
    wxWindow *returns = wxFindWindowByName(name, parent);
    wWrapDerefArgs();
    wWrapPushObject( _wxWindow, W_TRUE, (void *)returns );
}

// %builtin wxWindow * wxFindWindowAtPoint(const wxPoint& pt)
void builtin_wxFindWindowAtPoint() {
    wxPoint *pt = (wxPoint *)wStackPopObjectPtr( _wxPoint);
    wxWindow *returns = wxFindWindowAtPoint(*pt);
    wWrapDerefArgs();
    wWrapPushObject( _wxWindow, W_TRUE, (void *)returns );
}

// %builtin wxWindow * wxFindWindowAtPointer(wxPoint& pt)
void builtin_wxFindWindowAtPointer() {
    wxPoint *pt = (wxPoint *)wStackPopObjectPtr( _wxPoint);
    wxWindow *returns = wxFindWindowAtPointer(*pt);
    wWrapDerefArgs();
    wWrapPushObject( _wxWindow, W_TRUE, (void *)returns );
}

// %builtin wxString wxGetHomeDir()
void builtin_wxGetHomeDir() {
    wxString returns = wxGetHomeDir();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// %builtin wxPoint wxGetMousePosition()
void builtin_wxGetMousePosition() {
    // make a pointer via copy constructor
    wxPoint *returns = new wxPoint(wxGetMousePosition());
    wWrapPushObject( _wxPoint, W_TRUE, (void *)returns );
}

// %builtin wxString wxGetOsDescription()
void builtin_wxGetOsDescription() {
    wxString returns = wxGetOsDescription();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

void GetOsVersion()
{
    int major, minor;
    wxGetOsVersion( &major, &minor );
    wStackPushNumber( (wNumber)major );
    wStackPushNumber( (wNumber)minor );
}
// %builtin %rename wxGetOsVersion void GetOsVersion()
void builtin_wxGetOsVersion() {
    GetOsVersion();
}

// %builtin const wxString wxGetTranslation(const wxString str)
void builtin_wxGetTranslation() {
    wxString str = wxString(wStackPopChar(), *wxConvCurrent);
    wxString returns = wxGetTranslation(str);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// %builtin bool wxHandleFatalExceptions(bool doIt = TRUE)
void builtin_wxHandleFatalExceptions() {
    bool doIt = (wTheCall->parmCount > 0 ? (bool)wStackPopNumber() : TRUE);
    bool returns = wxHandleFatalExceptions(doIt);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %builtin bool wxIsBusy()
void builtin_wxIsBusy() {
    bool returns = wxIsBusy();
    wStackPushNumber( (wNumber)returns);
}

// %builtin wxString wxNow()
void builtin_wxNow() {
    wxString returns = wxNow();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// %builtin void wxPostEvent(wxEvtHandler *dest, wxEvent& event)
void builtin_wxPostEvent() {
    wxEvent *event = (wxEvent *)wStackPopObjectPtr( _wxEvent);
    wxEvtHandler *dest = (wxEvtHandler *)wStackPopObjectPtr( _wxEvtHandler);
    wxPostEvent(dest, *event);
    wWrapDerefArgs();
}

// %builtin bool wxSafeYield(wxWindow* win = NULL)
void builtin_wxSafeYield() {
    wxWindow *win = (wTheCall->parmCount > 0 ? (wxWindow *)wStackPopObjectPtr( _wxWindow) : NULL);
    bool returns = wxSafeYield(win);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %builtin bool wxShell(const wxString& command = NULL)
void builtin_wxShell() {
    wxString command = wxString((wTheCall->parmCount > 0 ? wStackPopChar() : NULL), *wxConvCurrent);
    bool returns = wxShell(command);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %builtin void wxSleep(int secs)
void builtin_wxSleep() {
    int secs = (int)wStackPopNumber();
    wxSleep(secs);
    wWrapDerefArgs();
}

// %builtin void wxTrap()
void builtin_wxTrap() {
    wxTrap();
}

// %builtin void wxUsleep(unsigned long milliseconds)
void builtin_wxUsleep() {
    unsigned long milliseconds = (unsigned long)wStackPopNumber();
    wxUsleep(milliseconds);
    wWrapDerefArgs();
}

// %builtin bool wxYield()
void builtin_wxYield() {
    bool returns = wxYield();
    wStackPushNumber( (wNumber)returns);
}

// %builtin void wxWakeUpIdle()
void builtin_wxWakeUpIdle() {
    wxWakeUpIdle();
}

wxString builtin_getEnvValue( const wxString& var )
{
    wxString value;
    wxGetEnv(var, &value);
    return value;
}
// %builtin %alias wxGetEnvValue wxString builtin_getEnvValue( const wxString& var )
void builtin_builtin_getEnvValue() {
    wxString var = wxString(wStackPopChar(), *wxConvCurrent);
    wxString returns = builtin_getEnvValue(var);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// %builtin bool wxSetEnv(const wxString& var, const wxString *value);
void builtin_wxSetEnv() {
    wxString value = wxString(wStackPopChar(), *wxConvCurrent);
    wxString var = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = wxSetEnv(var, value);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %builtin bool wxUnsetEnv(const wxString& var)
void builtin_wxUnsetEnv() {
    wxString var = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = wxUnsetEnv(var);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %builtin bool wxDirExists(const wxString& dirname)
void builtin_wxDirExists() {
    wxString dirname = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = wxDirExists(dirname);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %builtin void wxDos2UnixFilename(char *s)
void builtin_wxDos2UnixFilename() {
    char *s = (char *)wStackPopObjectPtr( NULL );
    wxDos2UnixFilename(s);
    wWrapDerefArgs();
}

// %builtin bool wxFileExists(const wxString& filename)
void builtin_wxFileExists() {
    wxString filename = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = wxFileExists(filename);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %builtin time_t wxFileModificationTime(const wxString& filename)
void builtin_wxFileModificationTime() {
    wxString filename = wxString(wStackPopChar(), *wxConvCurrent);
    time_t returns = wxFileModificationTime(filename);
    wWrapDerefArgs();
    wStackPushDateTime( returns );
}

// %builtin wxString wxFileNameFromPath(const wxString& path)
void builtin_wxFileNameFromPath() {
    wxString path = wxString(wStackPopChar(), *wxConvCurrent);
    wxString returns = wxFileNameFromPath(path);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// %builtin wxString wxFindFirstFile(const char *spec, int flags = 0)
void builtin_wxFindFirstFile() {
    int flags = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : 0);
    char *spec = (char *)wStackPopObjectPtr( NULL );
    wxString returns = wxFindFirstFile(spec, flags);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// %builtin wxString wxFindNextFile()
void builtin_wxFindNextFile() {
    wxString returns = wxFindNextFile();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// %builtin wxString wxGetOSDirectory()
void builtin_wxGetOSDirectory() {
    wxString returns = wxGetOSDirectory();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// %builtin bool wxIsAbsolutePath(const wxString& filename)
void builtin_wxIsAbsolutePath() {
    wxString filename = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = wxIsAbsolutePath(filename);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %builtin wxString wxPathOnly(const wxString& path)
void builtin_wxPathOnly() {
    wxString path = wxString(wStackPopChar(), *wxConvCurrent);
    wxString returns = wxPathOnly(path);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// %builtin void wxUnix2DosFilename(const char *s)
void builtin_wxUnix2DosFilename() {
    char *s = (char *)wStackPopObjectPtr( NULL );
    wxUnix2DosFilename(s);
    wWrapDerefArgs();
}

// %builtin bool wxConcatFiles(const wxString& file1, const wxString& file2, const wxString& file3)
void builtin_wxConcatFiles() {
    wxString file3 = wxString(wStackPopChar(), *wxConvCurrent);
    wxString file2 = wxString(wStackPopChar(), *wxConvCurrent);
    wxString file1 = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = wxConcatFiles(file1, file2, file3);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %builtin bool wxCopyFile(const wxString& file1, const wxString& file2, bool overwrite = TRUE)
void builtin_wxCopyFile() {
    bool overwrite = (wTheCall->parmCount > 2 ? (bool)wStackPopNumber() : TRUE);
    wxString file2 = wxString(wStackPopChar(), *wxConvCurrent);
    wxString file1 = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = wxCopyFile(file1, file2, overwrite);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %builtin wxString wxGetCwd()
void builtin_wxGetCwd() {
    wxString returns = wxGetCwd();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// %builtin wxString wxGetWorkingDirectory(char *buf=NULL, int sz=1000)
void builtin_wxGetWorkingDirectory() {
    int sz = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : 1000);
    char *buf = (wTheCall->parmCount > 0 ? (char *)wStackPopObjectPtr( NULL ) : NULL);
    wxString returns = wxGetWorkingDirectory(buf, sz);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// %builtin bool wxGetTempFileName(const wxString& prefix, wxString& buf)
void builtin_wxGetTempFileName() {
    wxString buf = wxString(wStackPopChar(), *wxConvCurrent);
    wxString prefix = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = wxGetTempFileName(prefix, buf);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %builtin bool wxIsWild(const wxString& pattern)
void builtin_wxIsWild() {
    wxString pattern = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = wxIsWild(pattern);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %builtin bool wxMatchWild(const wxString& pattern, const wxString& text, bool dot_special)
void builtin_wxMatchWild() {
    bool dot_special = (bool)wStackPopNumber();
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    wxString pattern = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = wxMatchWild(pattern, text, dot_special);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %builtin bool wxMkdir(const wxString& dir, int perm = 0777)
void builtin_wxMkdir() {
    int perm = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : 0777);
    wxString dir = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = wxMkdir(dir, perm);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %builtin bool wxRemoveFile(const wxString& file)
void builtin_wxRemoveFile() {
    wxString file = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = wxRemoveFile(file);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %builtin bool wxRenameFile(const wxString& file1, const wxString& file2)
void builtin_wxRenameFile() {
    wxString file2 = wxString(wStackPopChar(), *wxConvCurrent);
    wxString file1 = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = wxRenameFile(file1, file2);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %builtin bool wxRmdir(const wxString& dir, int flags=0)
void builtin_wxRmdir() {
    int flags = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : 0);
    wxString dir = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = wxRmdir(dir, flags);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %builtin bool wxSetWorkingDirectory(const wxString& dir)
void builtin_wxSetWorkingDirectory() {
    wxString dir = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = wxSetWorkingDirectory(dir);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

void wxLocale_del()
{
    delete (wxLocale *)(wTheCall->self->ptr);
}


// wxLocale()
void wxLocale_new() {
    wxLocale *returns = new wxLocale();
    wWrapSetThis( _wxLocale, (void *)returns );
}

// ~wxLocale()
void wxLocale_finalize() {
    ((wxLocale *)(wTheCall->self->ptr))->~wxLocale();
}

// bool AddCatalog(const char *szDomain)
void wxLocale_AddCatalog() {
    char *szDomain = (char *)wStackPopObjectPtr( NULL );
    bool returns = ((wxLocale *)(wTheCall->self->ptr))->AddCatalog(szDomain);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void AddCatalogLookupPathPrefix(const wxString& prefix)
void wxLocale_AddCatalogLookupPathPrefix() {
    wxString prefix = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxLocale *)(wTheCall->self->ptr))->AddCatalogLookupPathPrefix(prefix);
    wWrapDerefArgs();
}

// wxString GetCanonicalName() const
void wxLocale_GetCanonicalName() {
    wxString returns = ((wxLocale *)(wTheCall->self->ptr))->GetCanonicalName();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// int GetLanguage() const
void wxLocale_GetLanguage() {
    int returns = ((wxLocale *)(wTheCall->self->ptr))->GetLanguage();
    wStackPushNumber( (wNumber)returns);
}

// const char* GetLocale() const
void wxLocale_GetLocale() {
    const char *returns = ((wxLocale *)(wTheCall->self->ptr))->GetLocale();
    wWrapPushObject( _wxLocale, W_TRUE, (void *)returns );
}

// const wxString& GetName() const
void wxLocale_GetName() {
    const wxString *returns = &((wxLocale *)(wTheCall->self->ptr))->GetName();
    wStackPushChar( (char *)(returns->c_str()), W_TRUE );
}

// const char* GetString(const char *szOrigString, const char *szDomain = NULL) const
void wxLocale_GetString() {
    const char *szDomain = (wTheCall->parmCount > 1 ? (char *)wStackPopObjectPtr( NULL ) : NULL);
    char *szOrigString = (char *)wStackPopObjectPtr( NULL );
    const char *returns = ((wxLocale *)(wTheCall->self->ptr))->GetString(szOrigString, szDomain);
    wWrapDerefArgs();
    wWrapPushObject( _wxLocale, W_TRUE, (void *)returns );
}

// wxString GetSysName() const
void wxLocale_GetSysName() {
    wxString returns = ((wxLocale *)(wTheCall->self->ptr))->GetSysName();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// static wxFontEncoding GetSystemEncoding() const
void wxLocale_GetSystemEncoding() {
    wxFontEncoding returns = ((wxLocale *)(wTheCall->self->ptr))->GetSystemEncoding();
    wStackPushNumber( (wNumber)returns);
}

// static wxString GetSystemEncodingName() const
void wxLocale_GetSystemEncodingName() {
    wxString returns = ((wxLocale *)(wTheCall->self->ptr))->GetSystemEncodingName();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// static int GetSystemLanguage() const
void wxLocale_GetSystemLanguage() {
    int returns = ((wxLocale *)(wTheCall->self->ptr))->GetSystemLanguage();
    wStackPushNumber( (wNumber)returns);
}

// bool Init(int language = wxLANGUAGE_DEFAULT, int flags = wxLOCALE_LOAD_DEFAULT | wxLOCALE_CONV_ENCODING)
void wxLocale_Init() {
    int flags = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : wxLOCALE_LOAD_DEFAULT | wxLOCALE_CONV_ENCODING);
    int language = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : wxLANGUAGE_DEFAULT);
    bool returns = ((wxLocale *)(wTheCall->self->ptr))->Init(language, flags);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool IsLoaded(const char* domain) const
void wxLocale_IsLoaded() {
    char *domain = (char *)wStackPopObjectPtr( NULL );
    bool returns = ((wxLocale *)(wTheCall->self->ptr))->IsLoaded(domain);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool IsOk() const
void wxLocale_IsOk() {
    bool returns = ((wxLocale *)(wTheCall->self->ptr))->IsOk();
    wStackPushNumber( (wNumber)returns);
}

void wxObject_del()
{
    delete (wxObject *)(wTheCall->self->ptr);
}


// wxObject()
void wxObject_new() {
    wxObject *returns = new wxObject();
    wWrapSetThis( _wxObject, (void *)returns );
}

// ~wxObject()
void wxObject_finalize() {
    ((wxObject *)(wTheCall->self->ptr))->~wxObject();
}

// wxClassInfo * GetClassInfo()
void wxObject_GetClassInfo() {
    wxClassInfo *returns = ((wxObject *)(wTheCall->self->ptr))->GetClassInfo();
    wWrapPushObject( _wxClassInfo, W_TRUE, (void *)returns );
}

// wxObjectRefData* GetRefData() const
void wxObject_GetRefData() {
    wxObjectRefData *returns = ((wxObject *)(wTheCall->self->ptr))->GetRefData();
    wWrapPushObject( _wxObjectRefData, W_TRUE, (void *)returns );
}

// bool IsKindOf(wxClassInfo *info)
void wxObject_IsKindOf() {
    wxClassInfo *info = (wxClassInfo *)wStackPopObjectPtr( _wxClassInfo);
    bool returns = ((wxObject *)(wTheCall->self->ptr))->IsKindOf(info);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void Ref(const wxObject& clone)
void wxObject_Ref() {
    wxObject *clone = (wxObject *)wStackPopObjectPtr( _wxObject);
    ((wxObject *)(wTheCall->self->ptr))->Ref(*clone);
    wWrapDerefArgs();
}

// void SetRefData(wxObjectRefData* data)
void wxObject_SetRefData() {
    wxObjectRefData *data = (wxObjectRefData *)wStackPopObjectPtr( _wxObjectRefData);
    ((wxObject *)(wTheCall->self->ptr))->SetRefData(data);
    wWrapDerefArgs();
}

// void UnRef()
void wxObject_UnRef() {
    ((wxObject *)(wTheCall->self->ptr))->UnRef();
}

void wxNode_del()
{
    delete (wxNode *)(wTheCall->self->ptr);
}


// void * Data()
void wxNode_Data() {
    ((wxNode *)(wTheCall->self->ptr))->Data();
}

// wxNodeBase * Next()
void wxNode_Next() {
    wxNodeBase *returns = ((wxNode *)(wTheCall->self->ptr))->Next();
    wWrapPushObject( _wxNodeBase, W_TRUE, (void *)returns );
}

// wxNodeBase * GetPrevious()
void wxNode_GetPrevious() {
    wxNodeBase *returns = ((wxNode *)(wTheCall->self->ptr))->GetPrevious();
    wWrapPushObject( _wxNodeBase, W_TRUE, (void *)returns );
}

// void SetData( wxObject *data )
void wxNode_SetData() {
    wxObject *data = (wxObject *)wStackPopObjectPtr( _wxObject);
    ((wxNode *)(wTheCall->self->ptr))->SetData(data);
    wWrapDerefArgs();
}

void wxList_del()
{
    delete (wxList *)(wTheCall->self->ptr);
}


// wxList()
void wxList_new() {
    wxList *returns = new wxList();
    wWrapSetThis( _wxList, (void *)returns );
}

// %ctor wxListKey(unsigned int key_type)
void wxListKey_new() {
    unsigned int key_type = (unsigned int)wStackPopNumber();
    wxList *returns = new wxList(key_type);
    wWrapDerefArgs();
    wWrapSetThis( _wxListKey, (void *)returns );
}

// ~wxList()
void wxList_finalize() {
    ((wxList *)(wTheCall->self->ptr))->~wxList();
}

// wxNode * Append(wxObject *object)
void wxList_Append() {
    wxObject *object = (wxObject *)wStackPopObjectPtr( _wxObject);
    wxNode *returns = ((wxList *)(wTheCall->self->ptr))->Append(object);
    wWrapDerefArgs();
    wWrapPushObject( _wxNode, W_TRUE, (void *)returns );
}

// %rename AppendNumericKey wxNode * Append(long key, wxObject *object)
void wxList_AppendNumericKey() {
    wxObject *object = (wxObject *)wStackPopObjectPtr( _wxObject);
    long key = (long)wStackPopNumber();
    wxNode *returns = ((wxList *)(wTheCall->self->ptr))->Append(key, object);
    wWrapDerefArgs();
    wWrapPushObject( _wxNode, W_TRUE, (void *)returns );
}

// %rename AppendStringKey wxNode * Append(const wxString& key, wxObject *object)
void wxList_AppendStringKey() {
    wxObject *object = (wxObject *)wStackPopObjectPtr( _wxObject);
    wxString key = wxString(wStackPopChar(), *wxConvCurrent);
    wxNode *returns = ((wxList *)(wTheCall->self->ptr))->Append(key, object);
    wWrapDerefArgs();
    wWrapPushObject( _wxNode, W_TRUE, (void *)returns );
}

// void Clear()
void wxList_Clear() {
    ((wxList *)(wTheCall->self->ptr))->Clear();
}

// void DeleteContents(bool destroy)
void wxList_DeleteContents() {
    bool destroy = (bool)wStackPopNumber();
    ((wxList *)(wTheCall->self->ptr))->DeleteContents(destroy);
    wWrapDerefArgs();
}

// bool DeleteNode(wxNode *node)
void wxList_DeleteNode() {
    wxNode *node = (wxNode *)wStackPopObjectPtr( _wxNode);
    bool returns = ((wxList *)(wTheCall->self->ptr))->DeleteNode(node);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool DeleteObject(wxObject *object)
void wxList_DeleteObject() {
    wxObject *object = (wxObject *)wStackPopObjectPtr( _wxObject);
    bool returns = ((wxList *)(wTheCall->self->ptr))->DeleteObject(object);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %rename FindNumericKey wxNode * Find(long key)
void wxList_FindNumericKey() {
    long key = (long)wStackPopNumber();
    wxNode *returns = ((wxList *)(wTheCall->self->ptr))->Find(key);
    wWrapDerefArgs();
    wWrapPushObject( _wxNode, W_TRUE, (void *)returns );
}

// %rename FindStringKey wxNode * Find(const wxString& key)
void wxList_FindStringKey() {
    wxString key = wxString(wStackPopChar(), *wxConvCurrent);
    wxNode *returns = ((wxList *)(wTheCall->self->ptr))->Find(key);
    wWrapDerefArgs();
    wWrapPushObject( _wxNode, W_TRUE, (void *)returns );
}

// size_t GetCount() const
void wxList_GetCount() {
    size_t returns = ((wxList *)(wTheCall->self->ptr))->GetCount();
    wStackPushNumber( (wNumber)returns);
}

// wxNode * GetFirst()
void wxList_GetFirst() {
    wxNode *returns = ((wxList *)(wTheCall->self->ptr))->GetFirst();
    wWrapPushObject( _wxNode, W_TRUE, (void *)returns );
}

// wxNode * GetLast()
void wxList_GetLast() {
    wxNode *returns = ((wxList *)(wTheCall->self->ptr))->GetLast();
    wWrapPushObject( _wxNode, W_TRUE, (void *)returns );
}

// int IndexOf(wxObject* obj )
void wxList_IndexOf() {
    wxObject *obj = (wxObject *)wStackPopObjectPtr( _wxObject);
    int returns = ((wxList *)(wTheCall->self->ptr))->IndexOf(obj);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// wxNode * Insert(wxObject *object)
void wxList_Insert() {
    wxObject *object = (wxObject *)wStackPopObjectPtr( _wxObject);
    wxNode *returns = ((wxList *)(wTheCall->self->ptr))->Insert(object);
    wWrapDerefArgs();
    wWrapPushObject( _wxNode, W_TRUE, (void *)returns );
}

// %rename InsertAt wxNode * Insert(size_t position, wxObject *object)
void wxList_InsertAt() {
    wxObject *object = (wxObject *)wStackPopObjectPtr( _wxObject);
    size_t position = (size_t)wStackPopNumber();
    wxNode *returns = ((wxList *)(wTheCall->self->ptr))->Insert(position, object);
    wWrapDerefArgs();
    wWrapPushObject( _wxNode, W_TRUE, (void *)returns );
}

// %rename InsertBefore wxNode * Insert(wxNode *node, wxObject *object)
void wxList_InsertBefore() {
    wxObject *object = (wxObject *)wStackPopObjectPtr( _wxObject);
    wxNode *node = (wxNode *)wStackPopObjectPtr( _wxNode);
    wxNode *returns = ((wxList *)(wTheCall->self->ptr))->Insert(node, object);
    wWrapDerefArgs();
    wWrapPushObject( _wxNode, W_TRUE, (void *)returns );
}

// bool IsEmpty() const
void wxList_IsEmpty() {
    bool returns = ((wxList *)(wTheCall->self->ptr))->IsEmpty();
    wStackPushNumber( (wNumber)returns);
}

// wxNode * Item(size_t index) const
void wxList_Item() {
    size_t index = (size_t)wStackPopNumber();
    wxNode *returns = ((wxList *)(wTheCall->self->ptr))->Item(index);
    wWrapDerefArgs();
    wWrapPushObject( _wxNode, W_TRUE, (void *)returns );
}

void wxDataFormat_del()
{
    delete (wxDataFormat *)(wTheCall->self->ptr);
}


// wxDataFormat(const wxString *format)
void wxDataFormat_new() {
    wxString format = wxString(wStackPopChar(), *wxConvCurrent);
    wxDataFormat *returns = new wxDataFormat(format);
    wWrapDerefArgs();
    wWrapSetThis( _wxDataFormat, (void *)returns );
}

void wxTipProvider_del()
{
    delete (wxTipProvider *)(wTheCall->self->ptr);
}


// wxString GetTip()
void wxTipProvider_GetTip() {
    wxString returns = ((wxTipProvider *)(wTheCall->self->ptr))->GetTip();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// size_t GetCurrentTip() const
void wxTipProvider_GetCurrentTip() {
    size_t returns = ((wxTipProvider *)(wTheCall->self->ptr))->GetCurrentTip();
    wStackPushNumber( (wNumber)returns);
}

// %builtin bool wxShowTip(wxWindow *parent, wxTipProvider *tipProvider, bool showAtStartup = TRUE)
void builtin_wxShowTip() {
    bool showAtStartup = (wTheCall->parmCount > 2 ? (bool)wStackPopNumber() : TRUE);
    wxTipProvider *tipProvider = (wxTipProvider *)wStackPopObjectPtr( _wxTipProvider);
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = wxShowTip(parent, tipProvider, showAtStartup);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %builtin wxTipProvider * wxCreateFileTipProvider(const wxString& filename, size_t currentTip)
void builtin_wxCreateFileTipProvider() {
    size_t currentTip = (size_t)wStackPopNumber();
    wxString filename = wxString(wStackPopChar(), *wxConvCurrent);
    wxTipProvider *returns = wxCreateFileTipProvider(filename, currentTip);
    wWrapDerefArgs();
    wWrapPushObject( _wxTipProvider, W_TRUE, (void *)returns );
}

void wxPoint_del()
{
    delete (wxPoint *)(wTheCall->self->ptr);
}


// wxPoint(int x, int y)
void wxPoint_new() {
    int y = (int)wStackPopNumber();
    int x = (int)wStackPopNumber();
    wxPoint *returns = new wxPoint(x, y);
    wWrapDerefArgs();
    wWrapSetThis( _wxPoint, (void *)returns );
}

// ~wxPoint()
void wxPoint_finalize() {
    ((wxPoint *)(wTheCall->self->ptr))->~wxPoint();
}

void wxPoint_Get()
{
    int x, y;
    x = ((wxPoint *)wTheCall->self->ptr)->x;
    y = ((wxPoint *)wTheCall->self->ptr)->y;
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)x );
    wStackPushNumber( (wNumber)y );
}

void wxPoint_GetX()
{
    int x;
    x = ((wxPoint *)wTheCall->self->ptr)->x;
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)x );
}
void wxPoint_GetY()
{
    int y;
    y = ((wxPoint *)wTheCall->self->ptr)->y;
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)y );
}
#define __wxDefaultPosition &wxDefaultPosition
void wxSize_del()
{
    delete (wxSize *)(wTheCall->self->ptr);
}


// wxSize(int width, int height)
void wxSize_new() {
    int height = (int)wStackPopNumber();
    int width = (int)wStackPopNumber();
    wxSize *returns = new wxSize(width, height);
    wWrapDerefArgs();
    wWrapSetThis( _wxSize, (void *)returns );
}

// ~wxSize()
void wxSize_finalize() {
    ((wxSize *)(wTheCall->self->ptr))->~wxSize();
}

// int GetWidth() const
void wxSize_GetWidth() {
    int returns = ((wxSize *)(wTheCall->self->ptr))->GetWidth();
    wStackPushNumber( (wNumber)returns);
}

// int GetHeight() const
void wxSize_GetHeight() {
    int returns = ((wxSize *)(wTheCall->self->ptr))->GetHeight();
    wStackPushNumber( (wNumber)returns);
}

// void Set(int width, int height)
void wxSize_Set() {
    int height = (int)wStackPopNumber();
    int width = (int)wStackPopNumber();
    ((wxSize *)(wTheCall->self->ptr))->Set(width, height);
    wWrapDerefArgs();
}

// void SetHeight(int height)
void wxSize_SetHeight() {
    int height = (int)wStackPopNumber();
    ((wxSize *)(wTheCall->self->ptr))->SetHeight(height);
    wWrapDerefArgs();
}

// void SetWidth(int width)
void wxSize_SetWidth() {
    int width = (int)wStackPopNumber();
    ((wxSize *)(wTheCall->self->ptr))->SetWidth(width);
    wWrapDerefArgs();
}

#define __wxDefaultSize &wxDefaultSize
void wxColourData_del()
{
    delete (wxColourData *)(wTheCall->self->ptr);
}


// %alias wxColorData wxColourData()
void wxColourData_new() {
    wxColourData *returns = new wxColourData();
    wWrapSetThis( _wxColourData, (void *)returns );
}

// ~wxColourData()
void wxColourData_finalize() {
    ((wxColourData *)(wTheCall->self->ptr))->~wxColourData();
}

// bool GetChooseFull() const
void wxColourData_GetChooseFull() {
    bool returns = ((wxColourData *)(wTheCall->self->ptr))->GetChooseFull();
    wStackPushNumber( (wNumber)returns);
}

// %alias GetColor wxColour& GetColour() const
void wxColourData_GetColour() {
    wxColour *returns = &((wxColourData *)(wTheCall->self->ptr))->GetColour();
    wWrapPushObject( _wxColour, W_TRUE, (void *)returns );
}

// %alias GetCustomColor wxColour& GetCustomColour(int i) const
void wxColourData_GetCustomColour() {
    int i = (int)wStackPopNumber();
    wxColour *returns = &((wxColourData *)(wTheCall->self->ptr))->GetCustomColour(i);
    wWrapDerefArgs();
    wWrapPushObject( _wxColour, W_TRUE, (void *)returns );
}

// void SetChooseFull(const bool flag)
void wxColourData_SetChooseFull() {
    bool flag = (bool)wStackPopNumber();
    ((wxColourData *)(wTheCall->self->ptr))->SetChooseFull(flag);
    wWrapDerefArgs();
}

// %alias SetColor void SetColour(const wxColour& colour)
void wxColourData_SetColour() {
    wxColour *colour = (wxColour *)wStackPopObjectPtr( _wxColour);
    ((wxColourData *)(wTheCall->self->ptr))->SetColour(*colour);
    wWrapDerefArgs();
}

// %alias SetCustomColor void SetCustomColour(int i, const wxColour& colour)
void wxColourData_SetCustomColour() {
    wxColour *colour = (wxColour *)wStackPopObjectPtr( _wxColour);
    int i = (int)wStackPopNumber();
    ((wxColourData *)(wTheCall->self->ptr))->SetCustomColour(i, *colour);
    wWrapDerefArgs();
}

void wxColour_del()
{
    delete (wxColour *)(wTheCall->self->ptr);
}


// wxColour(const unsigned char red, const unsigned char green, const unsigned char blue)
void wxColour_new() {
    unsigned char blue = (unsigned char)wStackPopNumber();
    unsigned char green = (unsigned char)wStackPopNumber();
    unsigned char red = (unsigned char)wStackPopNumber();
    wxColour *returns = new wxColour(red, green, blue);
    wWrapDerefArgs();
    wWrapSetThis( _wxColour, (void *)returns );
}

// %ctor wxColor(const unsigned char red, const unsigned char green, const unsigned char blue)
void wxColor_new() {
    unsigned char blue = (unsigned char)wStackPopNumber();
    unsigned char green = (unsigned char)wStackPopNumber();
    unsigned char red = (unsigned char)wStackPopNumber();
    wxColour *returns = new wxColour(red, green, blue);
    wWrapDerefArgs();
    wWrapSetThis( _wxColor, (void *)returns );
}

// unsigned char Blue() const
void wxColour_Blue() {
    unsigned char returns = ((wxColour *)(wTheCall->self->ptr))->Blue();
    wStackPushNumber( (wNumber)returns);
}

// long GetPixel() const
void wxColour_GetPixel() {
    long returns = ((wxColour *)(wTheCall->self->ptr))->GetPixel();
    wStackPushNumber( (wNumber)returns);
}

// unsigned char Green() const
void wxColour_Green() {
    unsigned char returns = ((wxColour *)(wTheCall->self->ptr))->Green();
    wStackPushNumber( (wNumber)returns);
}

// bool Ok() const
void wxColour_Ok() {
    bool returns = ((wxColour *)(wTheCall->self->ptr))->Ok();
    wStackPushNumber( (wNumber)returns);
}

// unsigned char Red() const
void wxColour_Red() {
    unsigned char returns = ((wxColour *)(wTheCall->self->ptr))->Red();
    wStackPushNumber( (wNumber)returns);
}

// void Set(const unsigned char red, const unsigned char green, const unsigned char blue)
void wxColour_Set() {
    unsigned char blue = (unsigned char)wStackPopNumber();
    unsigned char green = (unsigned char)wStackPopNumber();
    unsigned char red = (unsigned char)wStackPopNumber();
    ((wxColour *)(wTheCall->self->ptr))->Set(red, green, blue);
    wWrapDerefArgs();
}

void wxGDIObject_del()
{
    delete (wxGDIObject *)(wTheCall->self->ptr);
}


// wxGDIObject()
void wxGDIObject_new() {
    wxGDIObject *returns = new wxGDIObject();
    wWrapSetThis( _wxGDIObject, (void *)returns );
}

void wxPen_del()
{
    delete (wxPen *)(wTheCall->self->ptr);
}


// wxPen()
void wxPen_new() {
    wxPen *returns = new wxPen();
    wWrapSetThis( _wxPen, (void *)returns );
}

// ~wxPen()
void wxPen_finalize() {
    ((wxPen *)(wTheCall->self->ptr))->~wxPen();
}

// int GetCap() const
void wxPen_GetCap() {
    int returns = ((wxPen *)(wTheCall->self->ptr))->GetCap();
    wStackPushNumber( (wNumber)returns);
}

// wxColour& GetColour() const
void wxPen_GetColour() {
    wxColour *returns = &((wxPen *)(wTheCall->self->ptr))->GetColour();
    wWrapPushObject( _wxColour, W_TRUE, (void *)returns );
}

// int GetJoin() const
void wxPen_GetJoin() {
    int returns = ((wxPen *)(wTheCall->self->ptr))->GetJoin();
    wStackPushNumber( (wNumber)returns);
}

// int GetStyle() const
void wxPen_GetStyle() {
    int returns = ((wxPen *)(wTheCall->self->ptr))->GetStyle();
    wStackPushNumber( (wNumber)returns);
}

// int GetWidth() const
void wxPen_GetWidth() {
    int returns = ((wxPen *)(wTheCall->self->ptr))->GetWidth();
    wStackPushNumber( (wNumber)returns);
}

// bool Ok() const
void wxPen_Ok() {
    bool returns = ((wxPen *)(wTheCall->self->ptr))->Ok();
    wStackPushNumber( (wNumber)returns);
}

// void SetCap(int capStyle)
void wxPen_SetCap() {
    int capStyle = (int)wStackPopNumber();
    ((wxPen *)(wTheCall->self->ptr))->SetCap(capStyle);
    wWrapDerefArgs();
}

// %alias SetColor void SetColour(wxColour& colour)
void wxPen_SetColour() {
    wxColour *colour = (wxColour *)wStackPopObjectPtr( _wxColour);
    ((wxPen *)(wTheCall->self->ptr))->SetColour(*colour);
    wWrapDerefArgs();
}

// %rename SetColourString %alias SetColorString void SetColour(const wxString& colourName)
void wxPen_SetColourString() {
    wxString colourName = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxPen *)(wTheCall->self->ptr))->SetColour(colourName);
    wWrapDerefArgs();
}

// %rename SetColourRGB %alias SetColorRGB void SetColour(int red, int green, int blue)
void wxPen_SetColourRGB() {
    int blue = (int)wStackPopNumber();
    int green = (int)wStackPopNumber();
    int red = (int)wStackPopNumber();
    ((wxPen *)(wTheCall->self->ptr))->SetColour(red, green, blue);
    wWrapDerefArgs();
}

// void SetJoin(int join_style)
void wxPen_SetJoin() {
    int join_style = (int)wStackPopNumber();
    ((wxPen *)(wTheCall->self->ptr))->SetJoin(join_style);
    wWrapDerefArgs();
}

// void SetStyle(int style)
void wxPen_SetStyle() {
    int style = (int)wStackPopNumber();
    ((wxPen *)(wTheCall->self->ptr))->SetStyle(style);
    wWrapDerefArgs();
}

// void SetWidth(int width)
void wxPen_SetWidth() {
    int width = (int)wStackPopNumber();
    ((wxPen *)(wTheCall->self->ptr))->SetWidth(width);
    wWrapDerefArgs();
}

// %ctor wxPenFromColour(const wxColour& colour, int width, int style)
void wxPenFromColour_new() {
    int style = (int)wStackPopNumber();
    int width = (int)wStackPopNumber();
    wxColour *colour = (wxColour *)wStackPopObjectPtr( _wxColour);
    wxPen *returns = new wxPen(*colour, width, style);
    wWrapDerefArgs();
    wWrapSetThis( _wxPenFromColour, (void *)returns );
}

// %ctor wxPenFromColor(const wxColour& colour, int width, int style)
void wxPenFromColor_new() {
    int style = (int)wStackPopNumber();
    int width = (int)wStackPopNumber();
    wxColour *colour = (wxColour *)wStackPopObjectPtr( _wxColour);
    wxPen *returns = new wxPen(*colour, width, style);
    wWrapDerefArgs();
    wWrapSetThis( _wxPenFromColor, (void *)returns );
}

// %ctor wxPenFromColourName(const wxString& colourName, int width, int style)
void wxPenFromColourName_new() {
    int style = (int)wStackPopNumber();
    int width = (int)wStackPopNumber();
    wxString colourName = wxString(wStackPopChar(), *wxConvCurrent);
    wxPen *returns = new wxPen(colourName, width, style);
    wWrapDerefArgs();
    wWrapSetThis( _wxPenFromColourName, (void *)returns );
}

// %ctor wxPenFromColorName(const wxString& colourName, int width, int style)
void wxPenFromColorName_new() {
    int style = (int)wStackPopNumber();
    int width = (int)wStackPopNumber();
    wxString colourName = wxString(wStackPopChar(), *wxConvCurrent);
    wxPen *returns = new wxPen(colourName, width, style);
    wWrapDerefArgs();
    wWrapSetThis( _wxPenFromColorName, (void *)returns );
}

// %ctor wxPenCopy(const wxPen& pen)
void wxPenCopy_new() {
    wxPen *pen = (wxPen *)wStackPopObjectPtr( _wxPen);
    wxPen *returns = new wxPen(*pen);
    wWrapDerefArgs();
    wWrapSetThis( _wxPenCopy, (void *)returns );
}

void wxPalette_del()
{
    delete (wxPalette *)(wTheCall->self->ptr);
}


// wxPalette(int n, const uchar* red, const uchar* green, const uchar* blue)
void wxPalette_new() {
    uchar *blue = (uchar *)wStackPopObjectPtr( NULL );
    uchar *green = (uchar *)wStackPopObjectPtr( NULL );
    uchar *red = (uchar *)wStackPopObjectPtr( NULL );
    int n = (int)wStackPopNumber();
    wxPalette *returns = new wxPalette(n, red, green, blue);
    wWrapDerefArgs();
    wWrapSetThis( _wxPalette, (void *)returns );
}

// ~wxPalette()
void wxPalette_finalize() {
    ((wxPalette *)(wTheCall->self->ptr))->~wxPalette();
}

// bool Create(int n, const uchar* red, const uchar* green, const uchar* blue)
void wxPalette_Create() {
    uchar *blue = (uchar *)wStackPopObjectPtr( NULL );
    uchar *green = (uchar *)wStackPopObjectPtr( NULL );
    uchar *red = (uchar *)wStackPopObjectPtr( NULL );
    int n = (int)wStackPopNumber();
    bool returns = ((wxPalette *)(wTheCall->self->ptr))->Create(n, red, green, blue);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int GetPixel(const unsigned char red, const unsigned char green, const unsigned char blue) const
void wxPalette_GetPixel() {
    unsigned char blue = (unsigned char)wStackPopNumber();
    unsigned char green = (unsigned char)wStackPopNumber();
    unsigned char red = (unsigned char)wStackPopNumber();
    int returns = ((wxPalette *)(wTheCall->self->ptr))->GetPixel(red, green, blue);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool Ok() const
void wxPalette_Ok() {
    bool returns = ((wxPalette *)(wTheCall->self->ptr))->Ok();
    wStackPushNumber( (wNumber)returns);
}

void wxBrush_del()
{
    delete (wxBrush *)(wTheCall->self->ptr);
}


// wxBrush(const wxColour& colour, int style)
void wxBrush_new() {
    int style = (int)wStackPopNumber();
    wxColour *colour = (wxColour *)wStackPopObjectPtr( _wxColour);
    wxBrush *returns = new wxBrush(*colour, style);
    wWrapDerefArgs();
    wWrapSetThis( _wxBrush, (void *)returns );
}

// %ctor wxBrushFromColourName(const wxString& colourName, int style)
void wxBrushFromColourName_new() {
    int style = (int)wStackPopNumber();
    wxString colourName = wxString(wStackPopChar(), *wxConvCurrent);
    wxBrush *returns = new wxBrush(colourName, style);
    wWrapDerefArgs();
    wWrapSetThis( _wxBrushFromColourName, (void *)returns );
}

// %ctor wxBrushFromColorName(const wxString& colourName, int style)
void wxBrushFromColorName_new() {
    int style = (int)wStackPopNumber();
    wxString colourName = wxString(wStackPopChar(), *wxConvCurrent);
    wxBrush *returns = new wxBrush(colourName, style);
    wWrapDerefArgs();
    wWrapSetThis( _wxBrushFromColorName, (void *)returns );
}

// %ctor wxBrushFromBitmap(const wxBitmap& stippleBitmap)
void wxBrushFromBitmap_new() {
    wxBitmap *stippleBitmap = (wxBitmap *)wStackPopObjectPtr( _wxBitmap);
    wxBrush *returns = new wxBrush(*stippleBitmap);
    wWrapDerefArgs();
    wWrapSetThis( _wxBrushFromBitmap, (void *)returns );
}

// %ctor wxBrushCopy(const wxBrush& brush)
void wxBrushCopy_new() {
    wxBrush *brush = (wxBrush *)wStackPopObjectPtr( _wxBrush);
    wxBrush *returns = new wxBrush(*brush);
    wWrapDerefArgs();
    wWrapSetThis( _wxBrushCopy, (void *)returns );
}

// ~wxBrush()
void wxBrush_finalize() {
    ((wxBrush *)(wTheCall->self->ptr))->~wxBrush();
}

// %alias GetColor wxColour& GetColour() const
void wxBrush_GetColour() {
    wxColour *returns = &((wxBrush *)(wTheCall->self->ptr))->GetColour();
    wWrapPushObject( _wxColour, W_TRUE, (void *)returns );
}

// wxBitmap * GetStipple() const
void wxBrush_GetStipple() {
    wxBitmap *returns = ((wxBrush *)(wTheCall->self->ptr))->GetStipple();
    wWrapPushObject( _wxBitmap, W_TRUE, (void *)returns );
}

// int GetStyle() const
void wxBrush_GetStyle() {
    int returns = ((wxBrush *)(wTheCall->self->ptr))->GetStyle();
    wStackPushNumber( (wNumber)returns);
}

// bool Ok() const
void wxBrush_Ok() {
    bool returns = ((wxBrush *)(wTheCall->self->ptr))->Ok();
    wStackPushNumber( (wNumber)returns);
}

// %alias SetColor void SetColour(wxColour& colour)
void wxBrush_SetColour() {
    wxColour *colour = (wxColour *)wStackPopObjectPtr( _wxColour);
    ((wxBrush *)(wTheCall->self->ptr))->SetColour(*colour);
    wWrapDerefArgs();
}

// %rename SetColourString %alias SetColorString void SetColour(const wxString& colourName)
void wxBrush_SetColourString() {
    wxString colourName = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxBrush *)(wTheCall->self->ptr))->SetColour(colourName);
    wWrapDerefArgs();
}

// %rename SetColourRGB %alias SetColorRGB void SetColour(const unsigned char red, const unsigned char green, const unsigned char blue)
void wxBrush_SetColourRGB() {
    unsigned char blue = (unsigned char)wStackPopNumber();
    unsigned char green = (unsigned char)wStackPopNumber();
    unsigned char red = (unsigned char)wStackPopNumber();
    ((wxBrush *)(wTheCall->self->ptr))->SetColour(red, green, blue);
    wWrapDerefArgs();
}

// void SetStipple(const wxBitmap& bitmap)
void wxBrush_SetStipple() {
    wxBitmap *bitmap = (wxBitmap *)wStackPopObjectPtr( _wxBitmap);
    ((wxBrush *)(wTheCall->self->ptr))->SetStipple(*bitmap);
    wWrapDerefArgs();
}

// void SetStyle(int style)
void wxBrush_SetStyle() {
    int style = (int)wStackPopNumber();
    ((wxBrush *)(wTheCall->self->ptr))->SetStyle(style);
    wWrapDerefArgs();
}

void wxBrushList_del()
{
    delete (wxBrushList *)(wTheCall->self->ptr);
}


// wxBrushList()
void wxBrushList_new() {
    wxBrushList *returns = new wxBrushList();
    wWrapSetThis( _wxBrushList, (void *)returns );
}

// wxBrush * FindOrCreateBrush(const wxColour& colour, int style)
void wxBrushList_FindOrCreateBrush() {
    int style = (int)wStackPopNumber();
    wxColour *colour = (wxColour *)wStackPopObjectPtr( _wxColour);
    wxBrush *returns = ((wxBrushList *)(wTheCall->self->ptr))->FindOrCreateBrush(*colour, style);
    wWrapDerefArgs();
    wWrapPushObject( _wxBrush, W_TRUE, (void *)returns );
}

void wxDC_del()
{
    delete (wxDC *)(wTheCall->self->ptr);
}


// ~wxDC()
void wxDC_finalize() {
    ((wxDC *)(wTheCall->self->ptr))->~wxDC();
}

// void BeginDrawing()
void wxDC_BeginDrawing() {
    ((wxDC *)(wTheCall->self->ptr))->BeginDrawing();
}

// bool Blit(wxCoord xdest, wxCoord ydest, wxCoord width, wxCoord height, wxDC* source, wxCoord xsrc, wxCoord ysrc, int logicalFunc = wxCOPY, bool useMask = FALSE)
void wxDC_Blit() {
    bool useMask = (wTheCall->parmCount > 8 ? (bool)wStackPopNumber() : FALSE);
    int logicalFunc = (wTheCall->parmCount > 7 ? (int)wStackPopNumber() : wxCOPY);
    coord ysrc = (coord)wStackPopNumber();
    coord xsrc = (coord)wStackPopNumber();
    wxDC *source = (wxDC *)wStackPopObjectPtr( _wxDC);
    coord height = (coord)wStackPopNumber();
    coord width = (coord)wStackPopNumber();
    coord ydest = (coord)wStackPopNumber();
    coord xdest = (coord)wStackPopNumber();
    bool returns = ((wxDC *)(wTheCall->self->ptr))->Blit(xdest, ydest, width, height, source, xsrc, ysrc, logicalFunc, useMask);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void CalcBoundingBox(wxCoord x, wxCoord y)
void wxDC_CalcBoundingBox() {
    coord y = (coord)wStackPopNumber();
    coord x = (coord)wStackPopNumber();
    ((wxDC *)(wTheCall->self->ptr))->CalcBoundingBox(x, y);
    wWrapDerefArgs();
}

// void Clear()
void wxDC_Clear() {
    ((wxDC *)(wTheCall->self->ptr))->Clear();
}

// void CrossHair(wxCoord x, wxCoord y)
void wxDC_CrossHair() {
    coord y = (coord)wStackPopNumber();
    coord x = (coord)wStackPopNumber();
    ((wxDC *)(wTheCall->self->ptr))->CrossHair(x, y);
    wWrapDerefArgs();
}

// void DestroyClippingRegion()
void wxDC_DestroyClippingRegion() {
    ((wxDC *)(wTheCall->self->ptr))->DestroyClippingRegion();
}

// wxCoord DeviceToLogicalX(wxCoord x)
void wxDC_DeviceToLogicalX() {
    coord x = (coord)wStackPopNumber();
    coord returns = ((wxDC *)(wTheCall->self->ptr))->DeviceToLogicalX(x);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// wxCoord DeviceToLogicalXRel(wxCoord x)
void wxDC_DeviceToLogicalXRel() {
    coord x = (coord)wStackPopNumber();
    coord returns = ((wxDC *)(wTheCall->self->ptr))->DeviceToLogicalXRel(x);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// wxCoord DeviceToLogicalY(wxCoord y)
void wxDC_DeviceToLogicalY() {
    coord y = (coord)wStackPopNumber();
    coord returns = ((wxDC *)(wTheCall->self->ptr))->DeviceToLogicalY(y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// wxCoord DeviceToLogicalYRel(wxCoord y)
void wxDC_DeviceToLogicalYRel() {
    coord y = (coord)wStackPopNumber();
    coord returns = ((wxDC *)(wTheCall->self->ptr))->DeviceToLogicalYRel(y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void DrawArc(wxCoord x1, wxCoord y1, wxCoord x2, wxCoord y2, wxCoord xc, wxCoord yc)
void wxDC_DrawArc() {
    coord yc = (coord)wStackPopNumber();
    coord xc = (coord)wStackPopNumber();
    coord y2 = (coord)wStackPopNumber();
    coord x2 = (coord)wStackPopNumber();
    coord y1 = (coord)wStackPopNumber();
    coord x1 = (coord)wStackPopNumber();
    ((wxDC *)(wTheCall->self->ptr))->DrawArc(x1, y1, x2, y2, xc, yc);
    wWrapDerefArgs();
}

// void DrawBitmap(const wxBitmap& bitmap, wxCoord x, wxCoord y, bool transparent)
void wxDC_DrawBitmap() {
    bool transparent = (bool)wStackPopNumber();
    coord y = (coord)wStackPopNumber();
    coord x = (coord)wStackPopNumber();
    wxBitmap *bitmap = (wxBitmap *)wStackPopObjectPtr( _wxBitmap);
    ((wxDC *)(wTheCall->self->ptr))->DrawBitmap(*bitmap, x, y, transparent);
    wWrapDerefArgs();
}

// void DrawCheckMark(wxCoord x, wxCoord y, wxCoord width, wxCoord height)
void wxDC_DrawCheckMark() {
    coord height = (coord)wStackPopNumber();
    coord width = (coord)wStackPopNumber();
    coord y = (coord)wStackPopNumber();
    coord x = (coord)wStackPopNumber();
    ((wxDC *)(wTheCall->self->ptr))->DrawCheckMark(x, y, width, height);
    wWrapDerefArgs();
}

// %rename DrawCheckMarkRect void DrawCheckMark(const wxRect &rect)
void wxDC_DrawCheckMarkRect() {
    wxRect *rect = (wxRect *)wStackPopObjectPtr( _wxRect);
    ((wxDC *)(wTheCall->self->ptr))->DrawCheckMark(*rect);
    wWrapDerefArgs();
}

// void DrawEllipse(wxCoord x, wxCoord y, wxCoord width, wxCoord height)
void wxDC_DrawEllipse() {
    coord height = (coord)wStackPopNumber();
    coord width = (coord)wStackPopNumber();
    coord y = (coord)wStackPopNumber();
    coord x = (coord)wStackPopNumber();
    ((wxDC *)(wTheCall->self->ptr))->DrawEllipse(x, y, width, height);
    wWrapDerefArgs();
}

// void DrawEllipticArc(wxCoord x, wxCoord y, wxCoord width, wxCoord height, double start, double end)
void wxDC_DrawEllipticArc() {
    double end = (double)wStackPopNumber();
    double start = (double)wStackPopNumber();
    coord height = (coord)wStackPopNumber();
    coord width = (coord)wStackPopNumber();
    coord y = (coord)wStackPopNumber();
    coord x = (coord)wStackPopNumber();
    ((wxDC *)(wTheCall->self->ptr))->DrawEllipticArc(x, y, width, height, start, end);
    wWrapDerefArgs();
}

// void DrawIcon(const wxIcon& icon, wxCoord x, wxCoord y)
void wxDC_DrawIcon() {
    coord y = (coord)wStackPopNumber();
    coord x = (coord)wStackPopNumber();
    wxIcon *icon = (wxIcon *)wStackPopObjectPtr( _wxIcon);
    ((wxDC *)(wTheCall->self->ptr))->DrawIcon(*icon, x, y);
    wWrapDerefArgs();
}

// void DrawLine(wxCoord x1, wxCoord y1, wxCoord x2, wxCoord y2)
void wxDC_DrawLine() {
    coord y2 = (coord)wStackPopNumber();
    coord x2 = (coord)wStackPopNumber();
    coord y1 = (coord)wStackPopNumber();
    coord x1 = (coord)wStackPopNumber();
    ((wxDC *)(wTheCall->self->ptr))->DrawLine(x1, y1, x2, y2);
    wWrapDerefArgs();
}

// void DrawLines(int n, wxPoint points[], wxCoord xoffset = 0, wxCoord yoffset = 0)
void wxDC_DrawLines() {
    coord yoffset = (wTheCall->parmCount > 3 ? (coord)wStackPopNumber() : 0);
    coord xoffset = (wTheCall->parmCount > 2 ? (coord)wStackPopNumber() : 0);
    if (wTheCall->parmCount > 0) wStackPopNumber();
    wxPoint points[1];
    int n = (int)wStackPopNumber();
    ((wxDC *)(wTheCall->self->ptr))->DrawLines(n, points, xoffset, yoffset);
    wWrapDerefArgs();
}

// %rename DrawLinesFromList void DrawLines(wxList *points, wxCoord xoffset = 0, wxCoord yoffset = 0)
void wxDC_DrawLinesFromList() {
    coord yoffset = (wTheCall->parmCount > 2 ? (coord)wStackPopNumber() : 0);
    coord xoffset = (wTheCall->parmCount > 1 ? (coord)wStackPopNumber() : 0);
    wxList *points = (wxList *)wStackPopObjectPtr( _wxList);
    ((wxDC *)(wTheCall->self->ptr))->DrawLines(points, xoffset, yoffset);
    wWrapDerefArgs();
}

// void DrawPolygon(int n, wxPoint points[], wxCoord xoffset = 0, wxCoord yoffset = 0, int fill_style = wxODDEVEN_RULE)
void wxDC_DrawPolygon() {
    int fill_style = (wTheCall->parmCount > 4 ? (int)wStackPopNumber() : wxODDEVEN_RULE);
    coord yoffset = (wTheCall->parmCount > 3 ? (coord)wStackPopNumber() : 0);
    coord xoffset = (wTheCall->parmCount > 2 ? (coord)wStackPopNumber() : 0);
    if (wTheCall->parmCount > 0) wStackPopNumber();
    wxPoint points[1];
    int n = (int)wStackPopNumber();
    ((wxDC *)(wTheCall->self->ptr))->DrawPolygon(n, points, xoffset, yoffset, fill_style);
    wWrapDerefArgs();
}

// %rename DrawPolygonFromList void DrawPolygon(wxList *points, wxCoord xoffset = 0, wxCoord yoffset = 0, int fill_style = wxODDEVEN_RULE)
void wxDC_DrawPolygonFromList() {
    int fill_style = (wTheCall->parmCount > 3 ? (int)wStackPopNumber() : wxODDEVEN_RULE);
    coord yoffset = (wTheCall->parmCount > 2 ? (coord)wStackPopNumber() : 0);
    coord xoffset = (wTheCall->parmCount > 1 ? (coord)wStackPopNumber() : 0);
    wxList *points = (wxList *)wStackPopObjectPtr( _wxList);
    ((wxDC *)(wTheCall->self->ptr))->DrawPolygon(points, xoffset, yoffset, fill_style);
    wWrapDerefArgs();
}

// void DrawPoint(wxCoord x, wxCoord y)
void wxDC_DrawPoint() {
    coord y = (coord)wStackPopNumber();
    coord x = (coord)wStackPopNumber();
    ((wxDC *)(wTheCall->self->ptr))->DrawPoint(x, y);
    wWrapDerefArgs();
}

// void DrawRectangle(wxCoord x, wxCoord y, wxCoord width, wxCoord height)
void wxDC_DrawRectangle() {
    coord height = (coord)wStackPopNumber();
    coord width = (coord)wStackPopNumber();
    coord y = (coord)wStackPopNumber();
    coord x = (coord)wStackPopNumber();
    ((wxDC *)(wTheCall->self->ptr))->DrawRectangle(x, y, width, height);
    wWrapDerefArgs();
}

// void DrawRotatedText(const wxString& text, wxCoord x, wxCoord y, double angle)
void wxDC_DrawRotatedText() {
    double angle = (double)wStackPopNumber();
    coord y = (coord)wStackPopNumber();
    coord x = (coord)wStackPopNumber();
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxDC *)(wTheCall->self->ptr))->DrawRotatedText(text, x, y, angle);
    wWrapDerefArgs();
}

// void DrawRoundedRectangle(wxCoord x, wxCoord y, wxCoord width, wxCoord height, double radius = 20)
void wxDC_DrawRoundedRectangle() {
    double radius = (wTheCall->parmCount > 4 ? (double)wStackPopNumber() : 20);
    coord height = (coord)wStackPopNumber();
    coord width = (coord)wStackPopNumber();
    coord y = (coord)wStackPopNumber();
    coord x = (coord)wStackPopNumber();
    ((wxDC *)(wTheCall->self->ptr))->DrawRoundedRectangle(x, y, width, height, radius);
    wWrapDerefArgs();
}

// %rename DrawSplineFromList void DrawSpline(wxList *points)
void wxDC_DrawSplineFromList() {
    wxList *points = (wxList *)wStackPopObjectPtr( _wxList);
    ((wxDC *)(wTheCall->self->ptr))->DrawSpline(points);
    wWrapDerefArgs();
}

// void DrawText(const wxString& text, wxCoord x, wxCoord y)
void wxDC_DrawText() {
    coord y = (coord)wStackPopNumber();
    coord x = (coord)wStackPopNumber();
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxDC *)(wTheCall->self->ptr))->DrawText(text, x, y);
    wWrapDerefArgs();
}

// void EndDoc()
void wxDC_EndDoc() {
    ((wxDC *)(wTheCall->self->ptr))->EndDoc();
}

// void EndDrawing()
void wxDC_EndDrawing() {
    ((wxDC *)(wTheCall->self->ptr))->EndDrawing();
}

// void EndPage()
void wxDC_EndPage() {
    ((wxDC *)(wTheCall->self->ptr))->EndPage();
}

// void FloodFill(wxCoord x, wxCoord y, const wxColour& colour, int style=wxFLOOD_SURFACE)
void wxDC_FloodFill() {
    int style = (wTheCall->parmCount > 3 ? (int)wStackPopNumber() : wxFLOOD_SURFACE);
    wxColour *colour = (wxColour *)wStackPopObjectPtr( _wxColour);
    coord y = (coord)wStackPopNumber();
    coord x = (coord)wStackPopNumber();
    ((wxDC *)(wTheCall->self->ptr))->FloodFill(x, y, *colour, style);
    wWrapDerefArgs();
}

// wxBrush& GetBackground()
void wxDC_GetBackground() {
    wxBrush *returns = &((wxDC *)(wTheCall->self->ptr))->GetBackground();
    wWrapPushObject( _wxBrush, W_TRUE, (void *)returns );
}

// int GetBackgroundMode() const
void wxDC_GetBackgroundMode() {
    int returns = ((wxDC *)(wTheCall->self->ptr))->GetBackgroundMode();
    wStackPushNumber( (wNumber)returns);
}

// wxBrush& GetBrush()
void wxDC_GetBrush() {
    wxBrush *returns = &((wxDC *)(wTheCall->self->ptr))->GetBrush();
    wWrapPushObject( _wxBrush, W_TRUE, (void *)returns );
}

// wxCoord GetCharHeight()
void wxDC_GetCharHeight() {
    coord returns = ((wxDC *)(wTheCall->self->ptr))->GetCharHeight();
    wStackPushNumber( (wNumber)returns);
}

// wxCoord GetCharWidth()
void wxDC_GetCharWidth() {
    coord returns = ((wxDC *)(wTheCall->self->ptr))->GetCharWidth();
    wStackPushNumber( (wNumber)returns);
}

void wxDC_GetClippingBox()
{
    wxCoord x, y, width, height;
    ((wxDC *)wTheCall->self->ptr)->GetClippingBox(&x, &y, &width, &height);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)x );
    wStackPushNumber( (wNumber)y );
    wStackPushNumber( (wNumber)width );
    wStackPushNumber( (wNumber)height );
}

void wxDC_GetClippingBoxX()
{
    wxCoord x, y, width, height;
    ((wxDC *)wTheCall->self->ptr)->GetClippingBox(&x, &y, &width, &height);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)x );
}

void wxDC_GetClippingBoxY()
{
    wxCoord x, y, width, height;
    ((wxDC *)wTheCall->self->ptr)->GetClippingBox(&x, &y, &width, &height);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)y );
}

void wxDC_GetClippingBoxWidth()
{
    wxCoord x, y, width, height;
    ((wxDC *)wTheCall->self->ptr)->GetClippingBox(&x, &y, &width, &height);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)width );
}

void wxDC_GetClippingBoxHeight()
{
    wxCoord x, y, width, height;
    ((wxDC *)wTheCall->self->ptr)->GetClippingBox(&x, &y, &width, &height);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)height );
}

// wxFont& GetFont()
void wxDC_GetFont() {
    wxFont *returns = &((wxDC *)(wTheCall->self->ptr))->GetFont();
    wWrapPushObject( _wxFont, W_TRUE, (void *)returns );
}

// int GetLogicalFunction()
void wxDC_GetLogicalFunction() {
    int returns = ((wxDC *)(wTheCall->self->ptr))->GetLogicalFunction();
    wStackPushNumber( (wNumber)returns);
}

// int GetMapMode()
void wxDC_GetMapMode() {
    int returns = ((wxDC *)(wTheCall->self->ptr))->GetMapMode();
    wStackPushNumber( (wNumber)returns);
}

// bool GetOptimization()
void wxDC_GetOptimization() {
    bool returns = ((wxDC *)(wTheCall->self->ptr))->GetOptimization();
    wStackPushNumber( (wNumber)returns);
}

// wxPen& GetPen()
void wxDC_GetPen() {
    wxPen *returns = &((wxDC *)(wTheCall->self->ptr))->GetPen();
    wWrapPushObject( _wxPen, W_TRUE, (void *)returns );
}

void wxDC_GetPixel()
{
		wxCoord y = wStackPopNumber();		
    wxCoord x = wStackPopNumber();
    wxColour *returns;
    ((wxDC *)wTheCall->self->ptr)->GetPixel(x, y, returns);
    wWrapDerefArgs();
		wWrapSetThis( _wxColour, (void *)returns );        
}
void wxDC_GetSize()
{
    int x, y;
    // call GetSize
    ((wxDC *)wTheCall->self->ptr)->GetSize(&x, &y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)x );
    wStackPushNumber( (wNumber)y );
}
void wxDC_GetSizeX()
{
    int x, y;
    // call GetSize
    ((wxDC *)wTheCall->self->ptr)->GetSize(&x, &y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)x );
}

void wxDC_GetSizeY()
{
    int x, y;
    // call GetSize
    ((wxDC *)wTheCall->self->ptr)->GetSize(&x, &y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)y );
}
// const wxColour& GetTextBackground() const
void wxDC_GetTextBackground() {
    const wxColour *returns = &((wxDC *)(wTheCall->self->ptr))->GetTextBackground();
    wWrapPushObject( _wxColour, W_TRUE, (void *)returns );
}

void wxDC_GetTextExtentWidth()
{
    // returned parameters
    wxCoord w, h, descent, externalLeading;

    // wxFont *font = NULL
    wxFont *font = (wTheCall->parmCount > 1 ? (wxFont *)wStackPopObjectPtr( _wxFont) : NULL);

    // const wxString& string
    wxString string = wStackPopChar();

    // call GetTextExtent
    ((wxDC *)wTheCall->self->ptr)->GetTextExtent(string, &w, &h, &descent, &externalLeading, font);
    wWrapDerefArgs();

    // return the width
    wStackPushNumber( (wNumber)w );
}

void wxDC_GetTextExtentHeight()
{
    // returned parameters
    wxCoord w, h, descent, externalLeading;

    // wxFont *font = NULL
    wxFont *font = (wTheCall->parmCount > 1 ? (wxFont *)wStackPopObjectPtr( _wxFont) : NULL);

    // const wxString& string
    wxString string = wStackPopChar();

    // call GetTextExtent
    ((wxDC *)wTheCall->self->ptr)->GetTextExtent(string, &w, &h, &descent, &externalLeading, font);
    wWrapDerefArgs();

    // return the height
    wStackPushNumber( (wNumber)h );
}

void wxDC_GetTextExtentDescent()
{
    // returned parameters
    wxCoord w, h, descent, externalLeading;

    // wxFont *font = NULL
    wxFont *font = (wTheCall->parmCount > 1 ? (wxFont *)wStackPopObjectPtr( _wxFont) : NULL);

    // const wxString& string
    wxString string = wStackPopChar();

    // call GetTextExtent
    ((wxDC *)wTheCall->self->ptr)->GetTextExtent(string, &w, &h, &descent, &externalLeading, font);
    wWrapDerefArgs();

    // return the descent
    wStackPushNumber( (wNumber)descent );
}

void wxDC_GetTextExtentExternalLeading()
{
    // returned parameters
    wxCoord w, h, descent, externalLeading;

    // wxFont *font = NULL
    wxFont *font = (wTheCall->parmCount > 1 ? (wxFont *)wStackPopObjectPtr( _wxFont) : NULL);

    // const wxString& string
    wxString string = wStackPopChar();

    // call GetTextExtent
    ((wxDC *)wTheCall->self->ptr)->GetTextExtent(string, &w, &h, &descent, &externalLeading, font);
    wWrapDerefArgs();

    // return the external leading
    wStackPushNumber( (wNumber)externalLeading );
}

// wxColour& GetTextForeground()
void wxDC_GetTextForeground() {
    wxColour *returns = &((wxDC *)(wTheCall->self->ptr))->GetTextForeground();
    wWrapPushObject( _wxColour, W_TRUE, (void *)returns );
}

void wxDC_GetUserScale()
{
    double x, y;
    ((wxDC *)wTheCall->self->ptr)->GetUserScale(&x, &y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)x );
    wStackPushNumber( (wNumber)y );
}

void wxDC_GetUserScaleX()
{
    double x, y;
    ((wxDC *)wTheCall->self->ptr)->GetUserScale(&x, &y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)x );
}

void wxDC_GetUserScaleY()
{
    double x, y;
    ((wxDC *)wTheCall->self->ptr)->GetUserScale(&x, &y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)y );
}
// wxCoord LogicalToDeviceX(wxCoord x)
void wxDC_LogicalToDeviceX() {
    coord x = (coord)wStackPopNumber();
    coord returns = ((wxDC *)(wTheCall->self->ptr))->LogicalToDeviceX(x);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// wxCoord LogicalToDeviceXRel(wxCoord x)
void wxDC_LogicalToDeviceXRel() {
    coord x = (coord)wStackPopNumber();
    coord returns = ((wxDC *)(wTheCall->self->ptr))->LogicalToDeviceXRel(x);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// wxCoord LogicalToDeviceY(wxCoord y)
void wxDC_LogicalToDeviceY() {
    coord y = (coord)wStackPopNumber();
    coord returns = ((wxDC *)(wTheCall->self->ptr))->LogicalToDeviceY(y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// wxCoord LogicalToDeviceYRel(wxCoord y)
void wxDC_LogicalToDeviceYRel() {
    coord y = (coord)wStackPopNumber();
    coord returns = ((wxDC *)(wTheCall->self->ptr))->LogicalToDeviceYRel(y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// wxCoord MaxX()
void wxDC_MaxX() {
    coord returns = ((wxDC *)(wTheCall->self->ptr))->MaxX();
    wStackPushNumber( (wNumber)returns);
}

// wxCoord MaxY()
void wxDC_MaxY() {
    coord returns = ((wxDC *)(wTheCall->self->ptr))->MaxY();
    wStackPushNumber( (wNumber)returns);
}

// wxCoord MinX()
void wxDC_MinX() {
    coord returns = ((wxDC *)(wTheCall->self->ptr))->MinX();
    wStackPushNumber( (wNumber)returns);
}

// wxCoord MinY()
void wxDC_MinY() {
    coord returns = ((wxDC *)(wTheCall->self->ptr))->MinY();
    wStackPushNumber( (wNumber)returns);
}

// bool Ok()
void wxDC_Ok() {
    bool returns = ((wxDC *)(wTheCall->self->ptr))->Ok();
    wStackPushNumber( (wNumber)returns);
}

// void ResetBoundingBox()
void wxDC_ResetBoundingBox() {
    ((wxDC *)(wTheCall->self->ptr))->ResetBoundingBox();
}

// void SetDeviceOrigin(wxCoord x, wxCoord y)
void wxDC_SetDeviceOrigin() {
    coord y = (coord)wStackPopNumber();
    coord x = (coord)wStackPopNumber();
    ((wxDC *)(wTheCall->self->ptr))->SetDeviceOrigin(x, y);
    wWrapDerefArgs();
}

// void SetBackground(const wxBrush& brush)
void wxDC_SetBackground() {
    wxBrush *brush = (wxBrush *)wStackPopObjectPtr( _wxBrush);
    ((wxDC *)(wTheCall->self->ptr))->SetBackground(*brush);
    wWrapDerefArgs();
}

// void SetBackgroundMode(int mode)
void wxDC_SetBackgroundMode() {
    int mode = (int)wStackPopNumber();
    ((wxDC *)(wTheCall->self->ptr))->SetBackgroundMode(mode);
    wWrapDerefArgs();
}

// %rename SetClippingRegionXY void SetClippingRegion(wxCoord x, wxCoord y, wxCoord width, wxCoord height)
void wxDC_SetClippingRegionXY() {
    coord height = (coord)wStackPopNumber();
    coord width = (coord)wStackPopNumber();
    coord y = (coord)wStackPopNumber();
    coord x = (coord)wStackPopNumber();
    ((wxDC *)(wTheCall->self->ptr))->SetClippingRegion(x, y, width, height);
    wWrapDerefArgs();
}

// void SetClippingRegion(const wxRegion& region)
void wxDC_SetClippingRegion() {
    wxRegion *region = (wxRegion *)wStackPopObjectPtr( _wxRegion);
    ((wxDC *)(wTheCall->self->ptr))->SetClippingRegion(*region);
    wWrapDerefArgs();
}

// void SetPalette(const wxPalette& palette)
void wxDC_SetPalette() {
    wxPalette *palette = (wxPalette *)wStackPopObjectPtr( _wxPalette);
    ((wxDC *)(wTheCall->self->ptr))->SetPalette(*palette);
    wWrapDerefArgs();
}

// void SetBrush(const wxBrush& brush)
void wxDC_SetBrush() {
    wxBrush *brush = (wxBrush *)wStackPopObjectPtr( _wxBrush);
    ((wxDC *)(wTheCall->self->ptr))->SetBrush(*brush);
    wWrapDerefArgs();
}

// void SetFont(const wxFont& font)
void wxDC_SetFont() {
    wxFont *font = (wxFont *)wStackPopObjectPtr( _wxFont);
    ((wxDC *)(wTheCall->self->ptr))->SetFont(*font);
    wWrapDerefArgs();
}

// void SetOptimization(bool optimize)
void wxDC_SetOptimization() {
    bool optimize = (bool)wStackPopNumber();
    ((wxDC *)(wTheCall->self->ptr))->SetOptimization(optimize);
    wWrapDerefArgs();
}

// void SetPen(const wxPen& pen)
void wxDC_SetPen() {
    wxPen *pen = (wxPen *)wStackPopObjectPtr( _wxPen);
    ((wxDC *)(wTheCall->self->ptr))->SetPen(*pen);
    wWrapDerefArgs();
}

// void SetTextBackground(const wxColour& colour)
void wxDC_SetTextBackground() {
    wxColour *colour = (wxColour *)wStackPopObjectPtr( _wxColour);
    ((wxDC *)(wTheCall->self->ptr))->SetTextBackground(*colour);
    wWrapDerefArgs();
}

// void SetTextForeground(const wxColour& colour)
void wxDC_SetTextForeground() {
    wxColour *colour = (wxColour *)wStackPopObjectPtr( _wxColour);
    ((wxDC *)(wTheCall->self->ptr))->SetTextForeground(*colour);
    wWrapDerefArgs();
}

// void SetUserScale(double xScale, double yScale)
void wxDC_SetUserScale() {
    double yScale = (double)wStackPopNumber();
    double xScale = (double)wStackPopNumber();
    ((wxDC *)(wTheCall->self->ptr))->SetUserScale(xScale, yScale);
    wWrapDerefArgs();
}

// bool StartDoc(const wxString& message)
void wxDC_StartDoc() {
    wxString message = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = ((wxDC *)(wTheCall->self->ptr))->StartDoc(message);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void StartPage()
void wxDC_StartPage() {
    ((wxDC *)(wTheCall->self->ptr))->StartPage();
}

void wxMemoryDC_del()
{
    delete (wxMemoryDC *)(wTheCall->self->ptr);
}


// wxMemoryDC()
void wxMemoryDC_new() {
    wxMemoryDC *returns = new wxMemoryDC();
    wWrapSetThis( _wxMemoryDC, (void *)returns );
}

// void SelectObject(const wxBitmap& bitmap)
void wxMemoryDC_SelectObject() {
    wxBitmap *bitmap = (wxBitmap *)wStackPopObjectPtr( _wxBitmap);
    ((wxMemoryDC *)(wTheCall->self->ptr))->SelectObject(*bitmap);
    wWrapDerefArgs();
}

void wxPrintData_del()
{
    delete (wxPrintData *)(wTheCall->self->ptr);
}


// wxPrintData()
void wxPrintData_new() {
    wxPrintData *returns = new wxPrintData();
    wWrapSetThis( _wxPrintData, (void *)returns );
}

// ~wxPrintData()
void wxPrintData_finalize() {
    ((wxPrintData *)(wTheCall->self->ptr))->~wxPrintData();
}

// bool GetCollate() const
void wxPrintData_GetCollate() {
    bool returns = ((wxPrintData *)(wTheCall->self->ptr))->GetCollate();
    wStackPushNumber( (wNumber)returns);
}

// bool GetColour() const
void wxPrintData_GetColour() {
    bool returns = ((wxPrintData *)(wTheCall->self->ptr))->GetColour();
    wStackPushNumber( (wNumber)returns);
}

// wxDuplexMode GetDuplex() const
void wxPrintData_GetDuplex() {
    wxDuplexMode returns = ((wxPrintData *)(wTheCall->self->ptr))->GetDuplex();
    wStackPushNumber( (wNumber)returns);
}

// int GetNoCopies() const
void wxPrintData_GetNoCopies() {
    int returns = ((wxPrintData *)(wTheCall->self->ptr))->GetNoCopies();
    wStackPushNumber( (wNumber)returns);
}

// int GetOrientation() const
void wxPrintData_GetOrientation() {
    int returns = ((wxPrintData *)(wTheCall->self->ptr))->GetOrientation();
    wStackPushNumber( (wNumber)returns);
}

// wxPaperSize GetPaperId() const
void wxPrintData_GetPaperId() {
    wxPaperSize returns = ((wxPrintData *)(wTheCall->self->ptr))->GetPaperId();
    wStackPushNumber( (wNumber)returns);
}

// const wxString& GetPrinterName() const
void wxPrintData_GetPrinterName() {
    const wxString *returns = &((wxPrintData *)(wTheCall->self->ptr))->GetPrinterName();
    wStackPushChar( (char *)(returns->c_str()), W_TRUE );
}

// wxPrintQuality GetQuality() const
void wxPrintData_GetQuality() {
    wxPrintQuality returns = ((wxPrintData *)(wTheCall->self->ptr))->GetQuality();
    wStackPushNumber( (wNumber)returns);
}

// bool Ok() const
void wxPrintData_Ok() {
    bool returns = ((wxPrintData *)(wTheCall->self->ptr))->Ok();
    wStackPushNumber( (wNumber)returns);
}

// void SetCollate(bool flag)
void wxPrintData_SetCollate() {
    bool flag = (bool)wStackPopNumber();
    ((wxPrintData *)(wTheCall->self->ptr))->SetCollate(flag);
    wWrapDerefArgs();
}

// %alias SetColor void SetColour(bool flag)
void wxPrintData_SetColour() {
    bool flag = (bool)wStackPopNumber();
    ((wxPrintData *)(wTheCall->self->ptr))->SetColour(flag);
    wWrapDerefArgs();
}

// void SetDuplex(wxDuplexMode mode)
void wxPrintData_SetDuplex() {
    wxDuplexMode mode = (wxDuplexMode)(int)wStackPopNumber();
    ((wxPrintData *)(wTheCall->self->ptr))->SetDuplex((wxDuplexMode)mode);
    wWrapDerefArgs();
}

// void SetNoCopies(int n)
void wxPrintData_SetNoCopies() {
    int n = (int)wStackPopNumber();
    ((wxPrintData *)(wTheCall->self->ptr))->SetNoCopies(n);
    wWrapDerefArgs();
}

// void SetOrientation(int orientation)
void wxPrintData_SetOrientation() {
    int orientation = (int)wStackPopNumber();
    ((wxPrintData *)(wTheCall->self->ptr))->SetOrientation(orientation);
    wWrapDerefArgs();
}

// void SetPaperId(wxPaperSize paperId)
void wxPrintData_SetPaperId() {
    wxPaperSize paperId = (wxPaperSize)(int)wStackPopNumber();
    ((wxPrintData *)(wTheCall->self->ptr))->SetPaperId((wxPaperSize)paperId);
    wWrapDerefArgs();
}

// void SetPrinterName(const wxString& printerName)
void wxPrintData_SetPrinterName() {
    wxString printerName = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxPrintData *)(wTheCall->self->ptr))->SetPrinterName(printerName);
    wWrapDerefArgs();
}

// void SetQuality(wxPrintQuality quality)
void wxPrintData_SetQuality() {
    wxPrintQuality quality = (wxPrintQuality)(int)wStackPopNumber();
    ((wxPrintData *)(wTheCall->self->ptr))->SetQuality((wxPrintQuality)quality);
    wWrapDerefArgs();
}

void wxWindowDC_del()
{
    delete (wxWindowDC *)(wTheCall->self->ptr);
}


// wxWindowDC(wxWindow* window)
void wxWindowDC_new() {
    wxWindow *window = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxWindowDC *returns = new wxWindowDC(window);
    wWrapDerefArgs();
    wWrapSetThis( _wxWindowDC, (void *)returns );
}

void wxClientDC_del()
{
    delete (wxClientDC *)(wTheCall->self->ptr);
}


// wxClientDC(wxWindow* window)
void wxClientDC_new() {
    wxWindow *window = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxClientDC *returns = new wxClientDC(window);
    wWrapDerefArgs();
    wWrapSetThis( _wxClientDC, (void *)returns );
}

void wxPaintDC_del()
{
    delete (wxPaintDC *)(wTheCall->self->ptr);
}


// wxPaintDC(wxWindow* window)
void wxPaintDC_new() {
    wxWindow *window = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxPaintDC *returns = new wxPaintDC(window);
    wWrapDerefArgs();
    wWrapSetThis( _wxPaintDC, (void *)returns );
}

void wxScreenDC_del()
{
    delete (wxScreenDC *)(wTheCall->self->ptr);
}


// wxScreenDC()
void wxScreenDC_new() {
    wxScreenDC *returns = new wxScreenDC();
    wWrapSetThis( _wxScreenDC, (void *)returns );
}

// bool StartDrawingOnTop(wxWindow* window)
void wxScreenDC_StartDrawingOnTop() {
    wxWindow *window = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxScreenDC *)(wTheCall->self->ptr))->StartDrawingOnTop(window);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %rename StartDrawingOnTopRect bool StartDrawingOnTop(wxRect* rect = NULL)
void wxScreenDC_StartDrawingOnTopRect() {
    wxRect *rect = (wTheCall->parmCount > 0 ? (wxRect *)wStackPopObjectPtr( _wxRect) : NULL);
    bool returns = ((wxScreenDC *)(wTheCall->self->ptr))->StartDrawingOnTop(rect);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool EndDrawingOnTop()
void wxScreenDC_EndDrawingOnTop() {
    bool returns = ((wxScreenDC *)(wTheCall->self->ptr))->EndDrawingOnTop();
    wStackPushNumber( (wNumber)returns);
}

void wxBitmap_del()
{
    delete (wxBitmap *)(wTheCall->self->ptr);
}


// %ctor wxBitmapCopy(const wxBitmap& bitmap)
void wxBitmapCopy_new() {
    wxBitmap *bitmap = (wxBitmap *)wStackPopObjectPtr( _wxBitmap);
    wxBitmap *returns = new wxBitmap(*bitmap);
    wWrapDerefArgs();
    wWrapSetThis( _wxBitmapCopy, (void *)returns );
}

// %ctor wxEmptyBitmap( int width, int height, int depth = -1)
void wxEmptyBitmap_new() {
    int depth = (wTheCall->parmCount > 2 ? (int)wStackPopNumber() : -1);
    int height = (int)wStackPopNumber();
    int width = (int)wStackPopNumber();
    wxBitmap *returns = new wxBitmap(width, height, depth);
    wWrapDerefArgs();
    wWrapSetThis( _wxEmptyBitmap, (void *)returns );
}

// ~wxBitmap()
void wxBitmap_finalize() {
    ((wxBitmap *)(wTheCall->self->ptr))->~wxBitmap();
}

// virtual bool Create(int width, int height, int depth = -1)
void wxBitmap_Create() {
    int depth = (wTheCall->parmCount > 2 ? (int)wStackPopNumber() : -1);
    int height = (int)wStackPopNumber();
    int width = (int)wStackPopNumber();
    bool returns = ((wxBitmap *)(wTheCall->self->ptr))->Create(width, height, depth);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int GetDepth() const
void wxBitmap_GetDepth() {
    int returns = ((wxBitmap *)(wTheCall->self->ptr))->GetDepth();
    wStackPushNumber( (wNumber)returns);
}

// int GetHeight() const
void wxBitmap_GetHeight() {
    int returns = ((wxBitmap *)(wTheCall->self->ptr))->GetHeight();
    wStackPushNumber( (wNumber)returns);
}

// wxPalette* GetPalette() const
void wxBitmap_GetPalette() {
    wxPalette *returns = ((wxBitmap *)(wTheCall->self->ptr))->GetPalette();
    wWrapPushObject( _wxPalette, W_TRUE, (void *)returns );
}

// wxMask* GetMask() const
void wxBitmap_GetMask() {
    wxMask *returns = ((wxBitmap *)(wTheCall->self->ptr))->GetMask();
    wWrapPushObject( _wxMask, W_TRUE, (void *)returns );
}

// int GetWidth() const
void wxBitmap_GetWidth() {
    int returns = ((wxBitmap *)(wTheCall->self->ptr))->GetWidth();
    wStackPushNumber( (wNumber)returns);
}

// wxBitmap GetSubBitmap(const wxRect &rect) const
void wxBitmap_GetSubBitmap() {
    wxRect *rect = (wxRect *)wStackPopObjectPtr( _wxRect);
    // make a pointer via copy constructor
    wxBitmap *returns = new wxBitmap(((wxBitmap *)(wTheCall->self->ptr))->GetSubBitmap(*rect));
    wWrapDerefArgs();
    wWrapPushObject( _wxBitmap, W_TRUE, (void *)returns );
}

// bool LoadFile(const wxString& name, long type)
void wxBitmap_LoadFile() {
    long type = (long)wStackPopNumber();
    wxString name = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = ((wxBitmap *)(wTheCall->self->ptr))->LoadFile(name, type);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool Ok() const
void wxBitmap_Ok() {
    bool returns = ((wxBitmap *)(wTheCall->self->ptr))->Ok();
    wStackPushNumber( (wNumber)returns);
}

// bool SaveFile(const wxString& name, int type, wxPalette* palette = NULL)
void wxBitmap_SaveFile() {
    wxPalette *palette = (wTheCall->parmCount > 2 ? (wxPalette *)wStackPopObjectPtr( _wxPalette) : NULL);
    int type = (int)wStackPopNumber();
    wxString name = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = ((wxBitmap *)(wTheCall->self->ptr))->SaveFile(name, type, palette);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void SetDepth(int depth)
void wxBitmap_SetDepth() {
    int depth = (int)wStackPopNumber();
    ((wxBitmap *)(wTheCall->self->ptr))->SetDepth(depth);
    wWrapDerefArgs();
}

// void SetHeight(int height)
void wxBitmap_SetHeight() {
    int height = (int)wStackPopNumber();
    ((wxBitmap *)(wTheCall->self->ptr))->SetHeight(height);
    wWrapDerefArgs();
}

// void SetMask(wxMask* mask)
void wxBitmap_SetMask() {
    wxMask *mask = (wxMask *)wStackPopObjectPtr( _wxMask);
    ((wxBitmap *)(wTheCall->self->ptr))->SetMask(mask);
    wWrapDerefArgs();
}

// void SetWidth(int width)
void wxBitmap_SetWidth() {
    int width = (int)wStackPopNumber();
    ((wxBitmap *)(wTheCall->self->ptr))->SetWidth(width);
    wWrapDerefArgs();
}

void wxImage_del()
{
    delete (wxImage *)(wTheCall->self->ptr);
}


// wxImage(const wxImage& image)
void wxImage_new() {
    wxImage *image = (wxImage *)wStackPopObjectPtr( _wxImage);
    wxImage *returns = new wxImage(*image);
    wWrapDerefArgs();
    wWrapSetThis( _wxImage, (void *)returns );
}

// %ctor wxNullImage()
void wxNullImage_new() {
    wxImage *returns = new wxImage();
    wWrapSetThis( _wxNullImage, (void *)returns );
}

// %ctor wxImageFromBitmap(const wxBitmap& bitmap)
void wxImageFromBitmap_new() {
    wxBitmap *bitmap = (wxBitmap *)wStackPopObjectPtr( _wxBitmap);
    wxImage *returns = new wxImage(*bitmap);
    wWrapDerefArgs();
    wWrapSetThis( _wxImageFromBitmap, (void *)returns );
}

// %ctor wxEmptyImage(int width, int height)
void wxEmptyImage_new() {
    int height = (int)wStackPopNumber();
    int width = (int)wStackPopNumber();
    wxImage *returns = new wxImage(width, height);
    wWrapDerefArgs();
    wWrapSetThis( _wxEmptyImage, (void *)returns );
}

// %ctor wxImageFromData(int width, int height, uchar* data, bool static_data=FALSE)
void wxImageFromData_new() {
    bool static_data = (wTheCall->parmCount > 3 ? (bool)wStackPopNumber() : FALSE);
    uchar *data = (uchar *)wStackPopObjectPtr( NULL );
    int height = (int)wStackPopNumber();
    int width = (int)wStackPopNumber();
    wxImage *returns = new wxImage(width, height, data, static_data);
    wWrapDerefArgs();
    wWrapSetThis( _wxImageFromData, (void *)returns );
}

// %ctor wxImageFromFile(const wxString& name, long type = wxBITMAP_TYPE_ANY)
void wxImageFromFile_new() {
    long type = (wTheCall->parmCount > 1 ? (long)wStackPopNumber() : wxBITMAP_TYPE_ANY);
    wxString name = wxString(wStackPopChar(), *wxConvCurrent);
    wxImage *returns = new wxImage(name, type);
    wWrapDerefArgs();
    wWrapSetThis( _wxImageFromFile, (void *)returns );
}

// ~wxImage()
void wxImage_finalize() {
    ((wxImage *)(wTheCall->self->ptr))->~wxImage();
}

// static void AddHandler(wxImageHandler* handler)
void wxImage_AddHandler() {
    wxImageHandler *handler = (wxImageHandler *)wStackPopObjectPtr( _wxImageHandler);
    ((wxImage *)(wTheCall->self->ptr))->AddHandler(handler);
    wWrapDerefArgs();
}

// static void CleanUpHandlers()
void wxImage_CleanUpHandlers() {
    ((wxImage *)(wTheCall->self->ptr))->CleanUpHandlers();
}

// wxBitmap ConvertToBitmap() const
void wxImage_ConvertToBitmap() {
    // make a pointer via copy constructor
    wxBitmap *returns = new wxBitmap(((wxImage *)(wTheCall->self->ptr))->ConvertToBitmap());
    wWrapPushObject( _wxBitmap, W_TRUE, (void *)returns );
}

// wxImage Copy() const
void wxImage_Copy() {
    // make a pointer via copy constructor
    wxImage *returns = new wxImage(((wxImage *)(wTheCall->self->ptr))->Copy());
    wWrapPushObject( _wxImage, W_TRUE, (void *)returns );
}

// unsigned char GetBlue(int x, int y) const
void wxImage_GetBlue() {
    int y = (int)wStackPopNumber();
    int x = (int)wStackPopNumber();
    unsigned char returns = ((wxImage *)(wTheCall->self->ptr))->GetBlue(x, y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// uchar* GetData() const
void wxImage_GetData() {
    uchar *returns = ((wxImage *)(wTheCall->self->ptr))->GetData();
    wWrapPushObject( _wxImage, W_TRUE, (void *)returns );
}

// unsigned char GetGreen(int x, int y) const
void wxImage_GetGreen() {
    int y = (int)wStackPopNumber();
    int x = (int)wStackPopNumber();
    unsigned char returns = ((wxImage *)(wTheCall->self->ptr))->GetGreen(x, y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// unsigned char GetRed(int x, int y) const
void wxImage_GetRed() {
    int y = (int)wStackPopNumber();
    int x = (int)wStackPopNumber();
    unsigned char returns = ((wxImage *)(wTheCall->self->ptr))->GetRed(x, y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// static wxList& GetHandlers()
void wxImage_GetHandlers() {
    wxList *returns = &((wxImage *)(wTheCall->self->ptr))->GetHandlers();
    wWrapPushObject( _wxList, W_TRUE, (void *)returns );
}

// int GetHeight() const
void wxImage_GetHeight() {
    int returns = ((wxImage *)(wTheCall->self->ptr))->GetHeight();
    wStackPushNumber( (wNumber)returns);
}

// unsigned char GetMaskBlue() const
void wxImage_GetMaskBlue() {
    unsigned char returns = ((wxImage *)(wTheCall->self->ptr))->GetMaskBlue();
    wStackPushNumber( (wNumber)returns);
}

// unsigned char GetMaskGreen() const
void wxImage_GetMaskGreen() {
    unsigned char returns = ((wxImage *)(wTheCall->self->ptr))->GetMaskGreen();
    wStackPushNumber( (wNumber)returns);
}

// unsigned char GetMaskRed() const
void wxImage_GetMaskRed() {
    unsigned char returns = ((wxImage *)(wTheCall->self->ptr))->GetMaskRed();
    wStackPushNumber( (wNumber)returns);
}

// const wxPalette& GetPalette() const
void wxImage_GetPalette() {
    const wxPalette *returns = &((wxImage *)(wTheCall->self->ptr))->GetPalette();
    wWrapPushObject( _wxPalette, W_TRUE, (void *)returns );
}

// wxImage GetSubImage(const wxRect& rect) const
void wxImage_GetSubImage() {
    wxRect *rect = (wxRect *)wStackPopObjectPtr( _wxRect);
    // make a pointer via copy constructor
    wxImage *returns = new wxImage(((wxImage *)(wTheCall->self->ptr))->GetSubImage(*rect));
    wWrapDerefArgs();
    wWrapPushObject( _wxImage, W_TRUE, (void *)returns );
}

// int GetWidth() const
void wxImage_GetWidth() {
    int returns = ((wxImage *)(wTheCall->self->ptr))->GetWidth();
    wStackPushNumber( (wNumber)returns);
}

// bool HasMask() const
void wxImage_HasMask() {
    bool returns = ((wxImage *)(wTheCall->self->ptr))->HasMask();
    wStackPushNumber( (wNumber)returns);
}

// static void InitStandardHandlers()
void wxImage_InitStandardHandlers() {
    ((wxImage *)(wTheCall->self->ptr))->InitStandardHandlers();
}

// static void InsertHandler(wxImageHandler* handler)
void wxImage_InsertHandler() {
    wxImageHandler *handler = (wxImageHandler *)wStackPopObjectPtr( _wxImageHandler);
    ((wxImage *)(wTheCall->self->ptr))->InsertHandler(handler);
    wWrapDerefArgs();
}

// bool LoadFile(const wxString& name, long type = wxBITMAP_TYPE_ANY)
void wxImage_LoadFile() {
    long type = (wTheCall->parmCount > 1 ? (long)wStackPopNumber() : wxBITMAP_TYPE_ANY);
    wxString name = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = ((wxImage *)(wTheCall->self->ptr))->LoadFile(name, type);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %rename LoadMimeFile bool LoadFile(const wxString& name, const wxString& mimetype)
void wxImage_LoadMimeFile() {
    wxString mimetype = wxString(wStackPopChar(), *wxConvCurrent);
    wxString name = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = ((wxImage *)(wTheCall->self->ptr))->LoadFile(name, mimetype);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool Ok() const
void wxImage_Ok() {
    bool returns = ((wxImage *)(wTheCall->self->ptr))->Ok();
    wStackPushNumber( (wNumber)returns);
}

// static bool RemoveHandler(const wxString& name)
void wxImage_RemoveHandler() {
    wxString name = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = ((wxImage *)(wTheCall->self->ptr))->RemoveHandler(name);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool SaveFile(const wxString& name, int type)
void wxImage_SaveFile() {
    int type = (int)wStackPopNumber();
    wxString name = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = ((wxImage *)(wTheCall->self->ptr))->SaveFile(name, type);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %rename SaveMimeFile bool SaveFile(const wxString& name, const wxString& mimetype)
void wxImage_SaveMimeFile() {
    wxString mimetype = wxString(wStackPopChar(), *wxConvCurrent);
    wxString name = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = ((wxImage *)(wTheCall->self->ptr))->SaveFile(name, mimetype);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// wxImage Mirror(bool horizontally = TRUE) const
void wxImage_Mirror() {
    bool horizontally = (wTheCall->parmCount > 0 ? (bool)wStackPopNumber() : TRUE);
    // make a pointer via copy constructor
    wxImage *returns = new wxImage(((wxImage *)(wTheCall->self->ptr))->Mirror(horizontally));
    wWrapDerefArgs();
    wWrapPushObject( _wxImage, W_TRUE, (void *)returns );
}

// void Replace(unsigned char r1, unsigned char g1, unsigned char b1, unsigned char r2, unsigned char g2, unsigned char b2)
void wxImage_Replace() {
    unsigned char b2 = (unsigned char)wStackPopNumber();
    unsigned char g2 = (unsigned char)wStackPopNumber();
    unsigned char r2 = (unsigned char)wStackPopNumber();
    unsigned char b1 = (unsigned char)wStackPopNumber();
    unsigned char g1 = (unsigned char)wStackPopNumber();
    unsigned char r1 = (unsigned char)wStackPopNumber();
    ((wxImage *)(wTheCall->self->ptr))->Replace(r1, g1, b1, r2, g2, b2);
    wWrapDerefArgs();
}

// wxImage Rotate(double angle, const wxPoint& rotationCentre, bool interpolating = TRUE, wxPoint* offsetAfterRotation = NULL)
void wxImage_Rotate() {
    wxPoint *offsetAfterRotation = (wTheCall->parmCount > 3 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : NULL);
    bool interpolating = (wTheCall->parmCount > 2 ? (bool)wStackPopNumber() : TRUE);
    wxPoint *rotationCentre = (wxPoint *)wStackPopObjectPtr( _wxPoint);
    double angle = (double)wStackPopNumber();
    // make a pointer via copy constructor
    wxImage *returns = new wxImage(((wxImage *)(wTheCall->self->ptr))->Rotate(angle, *rotationCentre, interpolating, offsetAfterRotation));
    wWrapDerefArgs();
    wWrapPushObject( _wxImage, W_TRUE, (void *)returns );
}

// wxImage Rotate90(bool clockwise = TRUE) const
void wxImage_Rotate90() {
    bool clockwise = (wTheCall->parmCount > 0 ? (bool)wStackPopNumber() : TRUE);
    // make a pointer via copy constructor
    wxImage *returns = new wxImage(((wxImage *)(wTheCall->self->ptr))->Rotate90(clockwise));
    wWrapDerefArgs();
    wWrapPushObject( _wxImage, W_TRUE, (void *)returns );
}

// wxImage Scale(int width, int height) const
void wxImage_Scale() {
    int height = (int)wStackPopNumber();
    int width = (int)wStackPopNumber();
    // make a pointer via copy constructor
    wxImage *returns = new wxImage(((wxImage *)(wTheCall->self->ptr))->Scale(width, height));
    wWrapDerefArgs();
    wWrapPushObject( _wxImage, W_TRUE, (void *)returns );
}

// void SetData(uchar* data)
void wxImage_SetData() {
    uchar *data = (uchar *)wStackPopObjectPtr( NULL );
    ((wxImage *)(wTheCall->self->ptr))->SetData(data);
    wWrapDerefArgs();
}

// void SetMask(bool hasMask = TRUE)
void wxImage_SetMask() {
    bool hasMask = (wTheCall->parmCount > 0 ? (bool)wStackPopNumber() : TRUE);
    ((wxImage *)(wTheCall->self->ptr))->SetMask(hasMask);
    wWrapDerefArgs();
}

// %alias SetMaskColor void SetMaskColour(unsigned char red, unsigned char blue, unsigned char green)
void wxImage_SetMaskColour() {
    unsigned char green = (unsigned char)wStackPopNumber();
    unsigned char blue = (unsigned char)wStackPopNumber();
    unsigned char red = (unsigned char)wStackPopNumber();
    ((wxImage *)(wTheCall->self->ptr))->SetMaskColour(red, blue, green);
    wWrapDerefArgs();
}

// void SetPalette(const wxPalette& palette)
void wxImage_SetPalette() {
    wxPalette *palette = (wxPalette *)wStackPopObjectPtr( _wxPalette);
    ((wxImage *)(wTheCall->self->ptr))->SetPalette(*palette);
    wWrapDerefArgs();
}

// void SetRGB(int x, int y, unsigned char red, unsigned char green, unsigned char blue)
void wxImage_SetRGB() {
    unsigned char blue = (unsigned char)wStackPopNumber();
    unsigned char green = (unsigned char)wStackPopNumber();
    unsigned char red = (unsigned char)wStackPopNumber();
    int y = (int)wStackPopNumber();
    int x = (int)wStackPopNumber();
    ((wxImage *)(wTheCall->self->ptr))->SetRGB(x, y, red, green, blue);
    wWrapDerefArgs();
}

void wxImageList_del()
{
    delete (wxImageList *)(wTheCall->self->ptr);
}


// wxImageList()
void wxImageList_new() {
    wxImageList *returns = new wxImageList();
    wWrapSetThis( _wxImageList, (void *)returns );
}

// int Add(const wxBitmap& bitmap, const wxBitmap& mask = wxNullBitmap)
void wxImageList_Add() {
    const wxBitmap *mask = (wTheCall->parmCount > 1 ? (wxBitmap *)wStackPopObjectPtr( _wxBitmap) : &wxNullBitmap);
    wxBitmap *bitmap = (wxBitmap *)wStackPopObjectPtr( _wxBitmap);
    int returns = ((wxImageList *)(wTheCall->self->ptr))->Add(*bitmap, *mask);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %rename AddWithColourMask int Add(const wxBitmap& bitmap, const wxColour& maskColour)
void wxImageList_AddWithColourMask() {
    wxColour *maskColour = (wxColour *)wStackPopObjectPtr( _wxColour);
    wxBitmap *bitmap = (wxBitmap *)wStackPopObjectPtr( _wxBitmap);
    int returns = ((wxImageList *)(wTheCall->self->ptr))->Add(*bitmap, *maskColour);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %rename AddIcon int Add(const wxIcon& icon)
void wxImageList_AddIcon() {
    wxIcon *icon = (wxIcon *)wStackPopObjectPtr( _wxIcon);
    int returns = ((wxImageList *)(wTheCall->self->ptr))->Add(*icon);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool Create(int width, int height, const bool mask = TRUE, int initialCount = 1)
void wxImageList_Create() {
    int initialCount = (wTheCall->parmCount > 3 ? (int)wStackPopNumber() : 1);
    const bool mask = (wTheCall->parmCount > 2 ? (bool)wStackPopNumber() : TRUE);
    int height = (int)wStackPopNumber();
    int width = (int)wStackPopNumber();
    bool returns = ((wxImageList *)(wTheCall->self->ptr))->Create(width, height, mask, initialCount);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool Draw(int index, wxDC& dc, int x, int y, int flags = wxIMAGELIST_DRAW_NORMAL, const bool solidBackground = FALSE)
void wxImageList_Draw() {
    const bool solidBackground = (wTheCall->parmCount > 5 ? (bool)wStackPopNumber() : FALSE);
    int flags = (wTheCall->parmCount > 4 ? (int)wStackPopNumber() : wxIMAGELIST_DRAW_NORMAL);
    int y = (int)wStackPopNumber();
    int x = (int)wStackPopNumber();
    wxDC *dc = (wxDC *)wStackPopObjectPtr( _wxDC);
    int index = (int)wStackPopNumber();
    bool returns = ((wxImageList *)(wTheCall->self->ptr))->Draw(index, *dc, x, y, flags, solidBackground);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int GetImageCount() const
void wxImageList_GetImageCount() {
    int returns = ((wxImageList *)(wTheCall->self->ptr))->GetImageCount();
    wStackPushNumber( (wNumber)returns);
}

void wxImageList_GetSize()
{
    int index = wStackPopNumber();   
    int width, height;
    ((wxImageList *)wTheCall->self->ptr)->GetSize(index, width, height);
    wWrapDerefArgs();        
    wStackPushNumber( (wNumber)width );
    wStackPushNumber( (wNumber)height );
}
void wxImageList_GetSizeWidth()
{
    int index = wStackPopNumber();   
    int width, height;
    ((wxImageList *)wTheCall->self->ptr)->GetSize(index, width, height);
    wWrapDerefArgs();        
    wStackPushNumber( (wNumber)width );
}
void wxImageList_GetSizeHeight()
{
    int index = wStackPopNumber();   
    int width, height;
    ((wxImageList *)wTheCall->self->ptr)->GetSize(index, width, height);
    wWrapDerefArgs();        
    wStackPushNumber( (wNumber)height );
}
// bool Remove(int index)
void wxImageList_Remove() {
    int index = (int)wStackPopNumber();
    bool returns = ((wxImageList *)(wTheCall->self->ptr))->Remove(index);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool RemoveAll()
void wxImageList_RemoveAll() {
    bool returns = ((wxImageList *)(wTheCall->self->ptr))->RemoveAll();
    wStackPushNumber( (wNumber)returns);
}

// bool Replace(int index, const wxBitmap& bitmap, const wxBitmap& mask = wxNullBitmap)
void wxImageList_Replace() {
    const wxBitmap *mask = (wTheCall->parmCount > 2 ? (wxBitmap *)wStackPopObjectPtr( _wxBitmap) : &wxNullBitmap);
    wxBitmap *bitmap = (wxBitmap *)wStackPopObjectPtr( _wxBitmap);
    int index = (int)wStackPopNumber();
    bool returns = ((wxImageList *)(wTheCall->self->ptr))->Replace(index, *bitmap, *mask);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %rename ReplaceIcon bool Replace(int index, const wxIcon& icon)
void wxImageList_ReplaceIcon() {
    wxIcon *icon = (wxIcon *)wStackPopObjectPtr( _wxIcon);
    int index = (int)wStackPopNumber();
    bool returns = ((wxImageList *)(wTheCall->self->ptr))->Replace(index, *icon);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

void wxCursor_del()
{
    delete (wxCursor *)(wTheCall->self->ptr);
}


void wxEvtHandler_del()
{
    delete (wxEvtHandler *)(wTheCall->self->ptr);
}


// wxEvtHandler()
void wxEvtHandler_new() {
    wxEvtHandler *returns = new wxEvtHandler();
    wWrapSetThis( _wxEvtHandler, (void *)returns );
}

// ~wxEvtHandler()
void wxEvtHandler_finalize() {
    ((wxEvtHandler *)(wTheCall->self->ptr))->~wxEvtHandler();
}

void wxApp_del()
{
    delete (wxApp *)(wTheCall->self->ptr);
}


// virtual wxLog* CreateLogTarget()
void wxApp_CreateLogTarget() {
    wxLog *returns = ((wxApp *)(wTheCall->self->ptr))->CreateLogTarget();
    wWrapPushObject( _wxLog, W_TRUE, (void *)returns );
}

// void Dispatch()
void wxApp_Dispatch() {
    ((wxApp *)(wTheCall->self->ptr))->Dispatch();
}

// wxString GetAppName() const
void wxApp_GetAppName() {
    wxString returns = ((wxApp *)(wTheCall->self->ptr))->GetAppName();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxString GetClassName() const
void wxApp_GetClassName() {
    wxString returns = ((wxApp *)(wTheCall->self->ptr))->GetClassName();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxWindow * GetTopWindow() const
void wxApp_GetTopWindow() {
    wxWindow *returns = ((wxApp *)(wTheCall->self->ptr))->GetTopWindow();
    wWrapPushObject( _wxWindow, W_TRUE, (void *)returns );
}

// bool GetUseBestVisual() const
void wxApp_GetUseBestVisual() {
    bool returns = ((wxApp *)(wTheCall->self->ptr))->GetUseBestVisual();
    wStackPushNumber( (wNumber)returns);
}

// wxString GetVendorName() const
void wxApp_GetVendorName() {
    wxString returns = ((wxApp *)(wTheCall->self->ptr))->GetVendorName();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// void ExitMainLoop()
void wxApp_ExitMainLoop() {
    ((wxApp *)(wTheCall->self->ptr))->ExitMainLoop();
}

// bool Initialized()
void wxApp_Initialized() {
    bool returns = ((wxApp *)(wTheCall->self->ptr))->Initialized();
    wStackPushNumber( (wNumber)returns);
}

// int MainLoop()
void wxApp_MainLoop() {
    int returns = ((wxApp *)(wTheCall->self->ptr))->MainLoop();
    wStackPushNumber( (wNumber)returns);
}

// bool Pending()
void wxApp_Pending() {
    bool returns = ((wxApp *)(wTheCall->self->ptr))->Pending();
    wStackPushNumber( (wNumber)returns);
}

// bool SendIdleEvents()
void wxApp_SendIdleEvents() {
    bool returns = ((wxApp *)(wTheCall->self->ptr))->SendIdleEvents();
    wStackPushNumber( (wNumber)returns);
}

// void SetAppName(const wxString& name)
void wxApp_SetAppName() {
    wxString name = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxApp *)(wTheCall->self->ptr))->SetAppName(name);
    wWrapDerefArgs();
}

// void SetClassName(const wxString& name)
void wxApp_SetClassName() {
    wxString name = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxApp *)(wTheCall->self->ptr))->SetClassName(name);
    wWrapDerefArgs();
}

// void SetExitOnFrameDelete(bool flag)
void wxApp_SetExitOnFrameDelete() {
    bool flag = (bool)wStackPopNumber();
    ((wxApp *)(wTheCall->self->ptr))->SetExitOnFrameDelete(flag);
    wWrapDerefArgs();
}

// void SetTopWindow(wxWindow* window)
void wxApp_SetTopWindow() {
    wxWindow *window = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    ((wxApp *)(wTheCall->self->ptr))->SetTopWindow(window);
    wWrapDerefArgs();
}

// void SetVendorName(const wxString& name)
void wxApp_SetVendorName() {
    wxString name = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxApp *)(wTheCall->self->ptr))->SetVendorName(name);
    wWrapDerefArgs();
}

// virtual wxIcon GetStdIcon(int which) const
void wxApp_GetStdIcon() {
    int which = (int)wStackPopNumber();
    // make a pointer via copy constructor
    wxIcon *returns = new wxIcon(((wxApp *)(wTheCall->self->ptr))->GetStdIcon(which));
    wWrapDerefArgs();
    wWrapPushObject( _wxIcon, W_TRUE, (void *)returns );
}

// void SetUseBestVisual(bool flag)
void wxApp_SetUseBestVisual() {
    bool flag = (bool)wStackPopNumber();
    ((wxApp *)(wTheCall->self->ptr))->SetUseBestVisual(flag);
    wWrapDerefArgs();
}

void wxWindow_del()
{
    delete (wxWindow *)(wTheCall->self->ptr);
}


// wxWindow(wxWindow* parent, wxWindowID id, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = 0, const wxString& name = wxPanelNameStr)
void wxWindow_new() {
    wxString name = wxString((wTheCall->parmCount > 5 ? wStackPopChar() : wxPanelNameStr), *wxConvCurrent);
    long style = (wTheCall->parmCount > 4 ? (long)wStackPopNumber() : 0);
    const wxSize *size = (wTheCall->parmCount > 3 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 2 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxWindow *returns = new wxWindow(parent, id, *pos, *size, style, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxWindow, (void *)returns );
}

// ~wxWindow()
void wxWindow_finalize() {
    ((wxWindow *)(wTheCall->self->ptr))->~wxWindow();
}

// virtual void AddChild(wxWindow* child)
void wxWindow_AddChild() {
    wxWindow *child = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    ((wxWindow *)(wTheCall->self->ptr))->AddChild(child);
    wWrapDerefArgs();
}

// virtual void CaptureMouse()
void wxWindow_CaptureMouse() {
    ((wxWindow *)(wTheCall->self->ptr))->CaptureMouse();
}

// void Center(int direction = wxBOTH)
void wxWindow_Center() {
    int direction = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : wxBOTH);
    ((wxWindow *)(wTheCall->self->ptr))->Center(direction);
    wWrapDerefArgs();
}

// void CenterOnParent(int direction = wxBOTH)
void wxWindow_CenterOnParent() {
    int direction = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : wxBOTH);
    ((wxWindow *)(wTheCall->self->ptr))->CenterOnParent(direction);
    wWrapDerefArgs();
}

// void CenterOnScreen(int direction = wxBOTH)
void wxWindow_CenterOnScreen() {
    int direction = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : wxBOTH);
    ((wxWindow *)(wTheCall->self->ptr))->CenterOnScreen(direction);
    wWrapDerefArgs();
}

// void Centre(int direction = wxBOTH)
void wxWindow_Centre() {
    int direction = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : wxBOTH);
    ((wxWindow *)(wTheCall->self->ptr))->Centre(direction);
    wWrapDerefArgs();
}

// void CentreOnParent(int direction = wxBOTH)
void wxWindow_CentreOnParent() {
    int direction = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : wxBOTH);
    ((wxWindow *)(wTheCall->self->ptr))->CentreOnParent(direction);
    wWrapDerefArgs();
}

// void CentreOnScreen(int direction = wxBOTH)
void wxWindow_CentreOnScreen() {
    int direction = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : wxBOTH);
    ((wxWindow *)(wTheCall->self->ptr))->CentreOnScreen(direction);
    wWrapDerefArgs();
}

// void Clear()
void wxWindow_Clear() {
    ((wxWindow *)(wTheCall->self->ptr))->Clear();
}

void wxWindow_ClientToScreen()
{
    int x = wStackPopNumber();
    int y = wStackPopNumber();
    ((wxWindow *)wTheCall->self->ptr)->ClientToScreen(&x, &y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)x );
    wStackPushNumber( (wNumber)y );
}
void wxWindow_ClientToScreenX()
{
    int x = wStackPopNumber();
    int y = 0;
    ((wxWindow *)wTheCall->self->ptr)->ClientToScreen(&x, &y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)x );
}
void wxWindow_ClientToScreenY()
{
    int x = 0;
    int y = wStackPopNumber();
    ((wxWindow *)wTheCall->self->ptr)->ClientToScreen(&x, &y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)y );
}
// virtual bool Close(bool force = FALSE)
void wxWindow_Close() {
    bool force = (wTheCall->parmCount > 0 ? (bool)wStackPopNumber() : FALSE);
    bool returns = ((wxWindow *)(wTheCall->self->ptr))->Close(force);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %rename ConvertDialogPointToPixels wxPoint ConvertPixelsToDialog(const wxPoint& pt)
void wxWindow_ConvertDialogPointToPixels() {
    wxPoint *pt = (wxPoint *)wStackPopObjectPtr( _wxPoint);
    // make a pointer via copy constructor
    wxPoint *returns = new wxPoint(((wxWindow *)(wTheCall->self->ptr))->ConvertPixelsToDialog(*pt));
    wWrapDerefArgs();
    wWrapPushObject( _wxPoint, W_TRUE, (void *)returns );
}

// %rename ConvertDialogSizeToPixels wxSize ConvertPixelsToDialog(const wxSize& sz)
void wxWindow_ConvertDialogSizeToPixels() {
    wxSize *sz = (wxSize *)wStackPopObjectPtr( _wxSize);
    // make a pointer via copy constructor
    wxSize *returns = new wxSize(((wxWindow *)(wTheCall->self->ptr))->ConvertPixelsToDialog(*sz));
    wWrapDerefArgs();
    wWrapPushObject( _wxSize, W_TRUE, (void *)returns );
}

// virtual bool Destroy()
void wxWindow_Destroy() {
    bool returns = ((wxWindow *)(wTheCall->self->ptr))->Destroy();
    wStackPushNumber( (wNumber)returns);
}

// virtual void DestroyChildren()
void wxWindow_DestroyChildren() {
    ((wxWindow *)(wTheCall->self->ptr))->DestroyChildren();
}

// virtual void Enable(bool enable)
void wxWindow_Enable() {
    bool enable = (bool)wStackPopNumber();
    ((wxWindow *)(wTheCall->self->ptr))->Enable(enable);
    wWrapDerefArgs();
}

// static wxWindow* FindFocus()
void wxWindow_FindFocus() {
    wxWindow *returns = ((wxWindow *)(wTheCall->self->ptr))->FindFocus();
    wWrapPushObject( _wxWindow, W_TRUE, (void *)returns );
}

// wxWindow* FindWindow(long id)
void wxWindow_FindWindow() {
    long id = (long)wStackPopNumber();
    wxWindow *returns = ((wxWindow *)(wTheCall->self->ptr))->FindWindow(id);
    wWrapDerefArgs();
    wWrapPushObject( _wxWindow, W_TRUE, (void *)returns );
}

// virtual void Fit()
void wxWindow_Fit() {
    ((wxWindow *)(wTheCall->self->ptr))->Fit();
}

// virtual void FitInside()
void wxWindow_FitInside() {
    ((wxWindow *)(wTheCall->self->ptr))->FitInside();
}

// virtual void Freeze()
void wxWindow_Freeze() {
    ((wxWindow *)(wTheCall->self->ptr))->Freeze();
}

// wxSize GetAdjustedBestSize() const
void wxWindow_GetAdjustedBestSize() {
    // make a pointer via copy constructor
    wxSize *returns = new wxSize(((wxWindow *)(wTheCall->self->ptr))->GetAdjustedBestSize());
    wWrapPushObject( _wxSize, W_TRUE, (void *)returns );
}

// %alias GetBackgroundColor virtual wxColour GetBackgroundColour() const
void wxWindow_GetBackgroundColour() {
    // make a pointer via copy constructor
    wxColour *returns = new wxColour(((wxWindow *)(wTheCall->self->ptr))->GetBackgroundColour());
    wWrapPushObject( _wxColour, W_TRUE, (void *)returns );
}

// virtual wxSize GetBestSize() const
void wxWindow_GetBestSize() {
    // make a pointer via copy constructor
    wxSize *returns = new wxSize(((wxWindow *)(wTheCall->self->ptr))->GetBestSize());
    wWrapPushObject( _wxSize, W_TRUE, (void *)returns );
}

// wxCaret * GetCaret() const
void wxWindow_GetCaret() {
    wxCaret *returns = ((wxWindow *)(wTheCall->self->ptr))->GetCaret();
    wWrapPushObject( _wxCaret, W_TRUE, (void *)returns );
}

// static wxWindow * GetCapture()
void wxWindow_GetCapture() {
    wxWindow *returns = ((wxWindow *)(wTheCall->self->ptr))->GetCapture();
    wWrapPushObject( _wxWindow, W_TRUE, (void *)returns );
}

// virtual int GetCharHeight() const
void wxWindow_GetCharHeight() {
    int returns = ((wxWindow *)(wTheCall->self->ptr))->GetCharHeight();
    wStackPushNumber( (wNumber)returns);
}

// virtual int GetCharWidth() const
void wxWindow_GetCharWidth() {
    int returns = ((wxWindow *)(wTheCall->self->ptr))->GetCharWidth();
    wStackPushNumber( (wNumber)returns);
}

// wxWindowList& GetChildren()
void wxWindow_GetChildren() {
    wxWindowList *returns = &((wxWindow *)(wTheCall->self->ptr))->GetChildren();
    wWrapPushObject( _wxWindowList, W_TRUE, (void *)returns );
}

void wxWindow_GetClientSizeWidth()
{
    int width, height;
    ((wxWindow *)wTheCall->self->ptr)->GetClientSize(&width, &height);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)width );
}

void wxWindow_GetClientSizeHeight()
{
    int width, height;
    ((wxWindow *)wTheCall->self->ptr)->GetClientSize(&width, &height);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)height );
}


// virtual wxSize GetClientSize() const
void wxWindow_GetClientSize() {
    // make a pointer via copy constructor
    wxSize *returns = new wxSize(((wxWindow *)(wTheCall->self->ptr))->GetClientSize());
    wWrapPushObject( _wxSize, W_TRUE, (void *)returns );
}

// wxLayoutConstraints* GetConstraints() const
void wxWindow_GetConstraints() {
    wxLayoutConstraints *returns = ((wxWindow *)(wTheCall->self->ptr))->GetConstraints();
    wWrapPushObject( _wxLayoutConstraints, W_TRUE, (void *)returns );
}

// wxDropTarget* GetDropTarget() const
void wxWindow_GetDropTarget() {
    wxDropTarget *returns = ((wxWindow *)(wTheCall->self->ptr))->GetDropTarget();
    wWrapPushObject( _wxDropTarget, W_TRUE, (void *)returns );
}

// wxEvtHandler* GetEventHandler() const
void wxWindow_GetEventHandler() {
    wxEvtHandler *returns = ((wxWindow *)(wTheCall->self->ptr))->GetEventHandler();
    wWrapPushObject( _wxEvtHandler, W_TRUE, (void *)returns );
}

// long GetExtraStyle() const
void wxWindow_GetExtraStyle() {
    long returns = ((wxWindow *)(wTheCall->self->ptr))->GetExtraStyle();
    wStackPushNumber( (wNumber)returns);
}

// wxFont& GetFont() const
void wxWindow_GetFont() {
    wxFont *returns = &((wxWindow *)(wTheCall->self->ptr))->GetFont();
    wWrapPushObject( _wxFont, W_TRUE, (void *)returns );
}

// %alias GetForegroundColor virtual wxColour GetForegroundColour()
void wxWindow_GetForegroundColour() {
    // make a pointer via copy constructor
    wxColour *returns = new wxColour(((wxWindow *)(wTheCall->self->ptr))->GetForegroundColour());
    wWrapPushObject( _wxColour, W_TRUE, (void *)returns );
}

// wxWindow* GetGrandParent() const
void wxWindow_GetGrandParent() {
    wxWindow *returns = ((wxWindow *)(wTheCall->self->ptr))->GetGrandParent();
    wWrapPushObject( _wxWindow, W_TRUE, (void *)returns );
}

// virtual wxString GetHelpText() const
void wxWindow_GetHelpText() {
    wxString returns = ((wxWindow *)(wTheCall->self->ptr))->GetHelpText();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// int GetId() const
void wxWindow_GetId() {
    int returns = ((wxWindow *)(wTheCall->self->ptr))->GetId();
    wStackPushNumber( (wNumber)returns);
}

// virtual wxString GetLabel() const
void wxWindow_GetLabel() {
    wxString returns = ((wxWindow *)(wTheCall->self->ptr))->GetLabel();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// virtual wxString GetName() const
void wxWindow_GetName() {
    wxString returns = ((wxWindow *)(wTheCall->self->ptr))->GetName();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// virtual wxWindow* GetParent() const
void wxWindow_GetParent() {
    wxWindow *returns = ((wxWindow *)(wTheCall->self->ptr))->GetParent();
    wWrapPushObject( _wxWindow, W_TRUE, (void *)returns );
}

void wxWindow_GetPosition()
{
    int x, y;
    ((wxWindow *)wTheCall->self->ptr)->GetPosition(&x, &y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)x );
    wStackPushNumber( (wNumber)y );
}
void wxWindow_GetPositionX()
{
    int x, y;
    ((wxWindow *)wTheCall->self->ptr)->GetPosition(&x, &y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)x );
}

void wxWindow_GetPositionY()
{
    int x, y;
    ((wxWindow *)wTheCall->self->ptr)->GetPosition(&x, &y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)y );
}


// virtual wxRect GetRect() const
void wxWindow_GetRect() {
    // make a pointer via copy constructor
    wxRect *returns = new wxRect(((wxWindow *)(wTheCall->self->ptr))->GetRect());
    wWrapPushObject( _wxRect, W_TRUE, (void *)returns );
}

// virtual int GetScrollThumb(int orientation)
void wxWindow_GetScrollThumb() {
    int orientation = (int)wStackPopNumber();
    int returns = ((wxWindow *)(wTheCall->self->ptr))->GetScrollThumb(orientation);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// virtual int GetScrollPos(int orientation)
void wxWindow_GetScrollPos() {
    int orientation = (int)wStackPopNumber();
    int returns = ((wxWindow *)(wTheCall->self->ptr))->GetScrollPos(orientation);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// virtual int GetScrollRange(int orientation)
void wxWindow_GetScrollRange() {
    int orientation = (int)wStackPopNumber();
    int returns = ((wxWindow *)(wTheCall->self->ptr))->GetScrollRange(orientation);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

void wxWindow_GetSize()
{
    int width, height;
    ((wxWindow *)wTheCall->self->ptr)->GetSize(&width, &height);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)width );
    wStackPushNumber( (wNumber)height );
}

void wxWindow_GetSizeWidth()
{
    int width, height;
    ((wxWindow *)wTheCall->self->ptr)->GetSize(&width, &height);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)width );
}

void wxWindow_GetSizeHeight()
{
    int width, height;
    ((wxWindow *)wTheCall->self->ptr)->GetSize(&width, &height);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)height );
}


// wxSizer * GetSizer() const
void wxWindow_GetSizer() {
    wxSizer *returns = ((wxWindow *)(wTheCall->self->ptr))->GetSizer();
    wWrapPushObject( _wxSizer, W_TRUE, (void *)returns );
}

void wxWindow_GetTextExtent()
{
    // arg
    wxString string = wStackPopChar();

    int x, y, descent, externalLeading;
    ((wxWindow *)wTheCall->self->ptr)->GetTextExtent(string, &x, &y, &descent, &externalLeading);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)x );
    wStackPushNumber( (wNumber)y );
    wStackPushNumber( (wNumber)descent );
    wStackPushNumber( (wNumber)externalLeading );
}

void wxWindow_GetTextExtentX()
{
    // arg
    wxString string = wStackPopChar();

    int x, y, descent, externalLeading;
    ((wxWindow *)wTheCall->self->ptr)->GetTextExtent(string, &x, &y, &descent, &externalLeading);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)x );
}

void wxWindow_GetTextExtentY()
{
    // arg
    wxString string = wStackPopChar();
    int x, y, descent, externalLeading;
    ((wxWindow *)wTheCall->self->ptr)->GetTextExtent(string, &x, &y, &descent, &externalLeading);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)y );
}


void wxWindow_GetTextExtentDescent()
{
    // arg
    wxString string = wStackPopChar();
    int x, y, descent, externalLeading;
    ((wxWindow *)wTheCall->self->ptr)->GetTextExtent(string, &x, &y, &descent, &externalLeading);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)descent );
}

void wxWindow_GetTextExtentExternalLeading()
{
    // arg
    wxString string = wStackPopChar();
    int x, y, descent, externalLeading;
    ((wxWindow *)wTheCall->self->ptr)->GetTextExtent(string, &x, &y, &descent, &externalLeading);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)externalLeading );
}


// virtual wxString GetTitle()
void wxWindow_GetTitle() {
    wxString returns = ((wxWindow *)(wTheCall->self->ptr))->GetTitle();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// virtual wxRegion GetUpdateRegion() const
void wxWindow_GetUpdateRegion() {
    // make a pointer via copy constructor
    wxRegion *returns = new wxRegion(((wxWindow *)(wTheCall->self->ptr))->GetUpdateRegion());
    wWrapPushObject( _wxRegion, W_TRUE, (void *)returns );
}

// wxToolTip* GetToolTip() const
void wxWindow_GetToolTip() {
    wxToolTip *returns = ((wxWindow *)(wTheCall->self->ptr))->GetToolTip();
    wWrapPushObject( _wxToolTip, W_TRUE, (void *)returns );
}

// wxValidator* GetValidator() const
void wxWindow_GetValidator() {
    wxValidator *returns = ((wxWindow *)(wTheCall->self->ptr))->GetValidator();
    wWrapPushObject( _wxValidator, W_TRUE, (void *)returns );
}

// wxSize GetVirtualSize() const
void wxWindow_GetVirtualSize() {
    // make a pointer via copy constructor
    wxSize *returns = new wxSize(((wxWindow *)(wTheCall->self->ptr))->GetVirtualSize());
    wWrapPushObject( _wxSize, W_TRUE, (void *)returns );
}

// long GetWindowStyleFlag() const
void wxWindow_GetWindowStyleFlag() {
    long returns = ((wxWindow *)(wTheCall->self->ptr))->GetWindowStyleFlag();
    wStackPushNumber( (wNumber)returns);
}

// virtual bool HasCapture() const
void wxWindow_HasCapture() {
    bool returns = ((wxWindow *)(wTheCall->self->ptr))->HasCapture();
    wStackPushNumber( (wNumber)returns);
}

// bool Hide()
void wxWindow_Hide() {
    bool returns = ((wxWindow *)(wTheCall->self->ptr))->Hide();
    wStackPushNumber( (wNumber)returns);
}

// void InitDialog()
void wxWindow_InitDialog() {
    ((wxWindow *)(wTheCall->self->ptr))->InitDialog();
}

// virtual bool IsEnabled() const
void wxWindow_IsEnabled() {
    bool returns = ((wxWindow *)(wTheCall->self->ptr))->IsEnabled();
    wStackPushNumber( (wNumber)returns);
}

// bool IsExposed(int x, int y) const
void wxWindow_IsExposed() {
    int y = (int)wStackPopNumber();
    int x = (int)wStackPopNumber();
    bool returns = ((wxWindow *)(wTheCall->self->ptr))->IsExposed(x, y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %rename IsExposedPoint bool IsExposed(wxPoint &pt) const
void wxWindow_IsExposedPoint() {
    wxPoint *pt = (wxPoint *)wStackPopObjectPtr( _wxPoint);
    bool returns = ((wxWindow *)(wTheCall->self->ptr))->IsExposed(*pt);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %rename IsExposedRect bool IsExposed(wxRect &rect) const
void wxWindow_IsExposedRect() {
    wxRect *rect = (wxRect *)wStackPopObjectPtr( _wxRect);
    bool returns = ((wxWindow *)(wTheCall->self->ptr))->IsExposed(*rect);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// virtual bool IsRetained() const
void wxWindow_IsRetained() {
    bool returns = ((wxWindow *)(wTheCall->self->ptr))->IsRetained();
    wStackPushNumber( (wNumber)returns);
}

// virtual bool IsShown() const
void wxWindow_IsShown() {
    bool returns = ((wxWindow *)(wTheCall->self->ptr))->IsShown();
    wStackPushNumber( (wNumber)returns);
}

// bool IsTopLevel() const
void wxWindow_IsTopLevel() {
    bool returns = ((wxWindow *)(wTheCall->self->ptr))->IsTopLevel();
    wStackPushNumber( (wNumber)returns);
}

// void Layout()
void wxWindow_Layout() {
    ((wxWindow *)(wTheCall->self->ptr))->Layout();
}

// void Lower()
void wxWindow_Lower() {
    ((wxWindow *)(wTheCall->self->ptr))->Lower();
}

// virtual void MakeModal(bool flag)
void wxWindow_MakeModal() {
    bool flag = (bool)wStackPopNumber();
    ((wxWindow *)(wTheCall->self->ptr))->MakeModal(flag);
    wWrapDerefArgs();
}

// void Move(int x, int y)
void wxWindow_Move() {
    int y = (int)wStackPopNumber();
    int x = (int)wStackPopNumber();
    ((wxWindow *)(wTheCall->self->ptr))->Move(x, y);
    wWrapDerefArgs();
}

// %rename MoveXY void Move(const wxPoint& pt)
void wxWindow_MoveXY() {
    wxPoint *pt = (wxPoint *)wStackPopObjectPtr( _wxPoint);
    ((wxWindow *)(wTheCall->self->ptr))->Move(*pt);
    wWrapDerefArgs();
}

// wxEvtHandler* PopEventHandler(bool deleteHandler = FALSE) const
void wxWindow_PopEventHandler() {
    bool deleteHandler = (wTheCall->parmCount > 0 ? (bool)wStackPopNumber() : FALSE);
    wxEvtHandler *returns = ((wxWindow *)(wTheCall->self->ptr))->PopEventHandler(deleteHandler);
    wWrapDerefArgs();
    wWrapPushObject( _wxEvtHandler, W_TRUE, (void *)returns );
}

// bool PopupMenu(wxMenu* menu, const wxPoint& pos)
void wxWindow_PopupMenu() {
    wxPoint *pos = (wxPoint *)wStackPopObjectPtr( _wxPoint);
    wxMenu *menu = (wxMenu *)wStackPopObjectPtr( _wxMenu);
    bool returns = ((wxWindow *)(wTheCall->self->ptr))->PopupMenu(menu, *pos);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %rename PopupMenuXY bool PopupMenu(wxMenu* menu, int x, int y)
void wxWindow_PopupMenuXY() {
    int y = (int)wStackPopNumber();
    int x = (int)wStackPopNumber();
    wxMenu *menu = (wxMenu *)wStackPopObjectPtr( _wxMenu);
    bool returns = ((wxWindow *)(wTheCall->self->ptr))->PopupMenu(menu, x, y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void PushEventHandler(wxEvtHandler* handler)
void wxWindow_PushEventHandler() {
    wxEvtHandler *handler = (wxEvtHandler *)wStackPopObjectPtr( _wxEvtHandler);
    ((wxWindow *)(wTheCall->self->ptr))->PushEventHandler(handler);
    wWrapDerefArgs();
}

// void Raise()
void wxWindow_Raise() {
    ((wxWindow *)(wTheCall->self->ptr))->Raise();
}

// virtual void Refresh(bool eraseBackground = TRUE, const wxRect* rect = NULL)
void wxWindow_Refresh() {
    const wxRect *rect = (wTheCall->parmCount > 1 ? (wxRect *)wStackPopObjectPtr( _wxRect) : NULL);
    bool eraseBackground = (wTheCall->parmCount > 0 ? (bool)wStackPopNumber() : TRUE);
    ((wxWindow *)(wTheCall->self->ptr))->Refresh(eraseBackground, rect);
    wWrapDerefArgs();
}

// virtual void ReleaseMouse()
void wxWindow_ReleaseMouse() {
    ((wxWindow *)(wTheCall->self->ptr))->ReleaseMouse();
}

// virtual void RemoveChild(wxWindow* child)
void wxWindow_RemoveChild() {
    wxWindow *child = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    ((wxWindow *)(wTheCall->self->ptr))->RemoveChild(child);
    wWrapDerefArgs();
}

// bool RemoveEventHandler(wxEvtHandler *handler)
void wxWindow_RemoveEventHandler() {
    wxEvtHandler *handler = (wxEvtHandler *)wStackPopObjectPtr( _wxEvtHandler);
    bool returns = ((wxWindow *)(wTheCall->self->ptr))->RemoveEventHandler(handler);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// virtual bool Reparent(wxWindow* newParent)
void wxWindow_Reparent() {
    wxWindow *newParent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxWindow *)(wTheCall->self->ptr))->Reparent(newParent);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// virtual wxPoint ScreenToClient(const wxPoint& pt) const
void wxWindow_ScreenToClient() {
    wxPoint *pt = (wxPoint *)wStackPopObjectPtr( _wxPoint);
    // make a pointer via copy constructor
    wxPoint *returns = new wxPoint(((wxWindow *)(wTheCall->self->ptr))->ScreenToClient(*pt));
    wWrapDerefArgs();
    wWrapPushObject( _wxPoint, W_TRUE, (void *)returns );
}

// %rename ScreenToClientXY virtual void ScreenToClient(int* x, int* y) const
void wxWindow_ScreenToClientXY() {
    int *y = (int *)wStackPopObjectPtr( NULL );
    int *x = (int *)wStackPopObjectPtr( NULL );
    ((wxWindow *)(wTheCall->self->ptr))->ScreenToClient(x, y);
    wWrapDerefArgs();
}

// virtual bool ScrollLines(int lines)
void wxWindow_ScrollLines() {
    int lines = (int)wStackPopNumber();
    bool returns = ((wxWindow *)(wTheCall->self->ptr))->ScrollLines(lines);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// virtual bool ScrollPages(int pages)
void wxWindow_ScrollPages() {
    int pages = (int)wStackPopNumber();
    bool returns = ((wxWindow *)(wTheCall->self->ptr))->ScrollPages(pages);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// virtual void ScrollWindow(int dx, int dy, const wxRect* rect = NULL)
void wxWindow_ScrollWindow() {
    const wxRect *rect = (wTheCall->parmCount > 2 ? (wxRect *)wStackPopObjectPtr( _wxRect) : NULL);
    int dy = (int)wStackPopNumber();
    int dx = (int)wStackPopNumber();
    ((wxWindow *)(wTheCall->self->ptr))->ScrollWindow(dx, dy, rect);
    wWrapDerefArgs();
}

// virtual void SetAcceleratorTable(const wxAcceleratorTable& accel)
void wxWindow_SetAcceleratorTable() {
    wxAcceleratorTable *accel = (wxAcceleratorTable *)wStackPopObjectPtr( _wxAcceleratorTable);
    ((wxWindow *)(wTheCall->self->ptr))->SetAcceleratorTable(*accel);
    wWrapDerefArgs();
}

// void SetAutoLayout(bool autoLayout)
void wxWindow_SetAutoLayout() {
    bool autoLayout = (bool)wStackPopNumber();
    ((wxWindow *)(wTheCall->self->ptr))->SetAutoLayout(autoLayout);
    wWrapDerefArgs();
}

// %alias SetBackgroundColor virtual void SetBackgroundColour(const wxColour& colour)
void wxWindow_SetBackgroundColour() {
    wxColour *colour = (wxColour *)wStackPopObjectPtr( _wxColour);
    ((wxWindow *)(wTheCall->self->ptr))->SetBackgroundColour(*colour);
    wWrapDerefArgs();
}

// void SetCaret(wxCaret *caret) const
void wxWindow_SetCaret() {
    wxCaret *caret = (wxCaret *)wStackPopObjectPtr( _wxCaret);
    ((wxWindow *)(wTheCall->self->ptr))->SetCaret(caret);
    wWrapDerefArgs();
}

// virtual void SetClientSize(const wxSize& size)
void wxWindow_SetClientSize() {
    wxSize *size = (wxSize *)wStackPopObjectPtr( _wxSize);
    ((wxWindow *)(wTheCall->self->ptr))->SetClientSize(*size);
    wWrapDerefArgs();
}

// %rename SetClientSizeWH virtual void SetClientSize(int width, int height)
void wxWindow_SetClientSizeWH() {
    int height = (int)wStackPopNumber();
    int width = (int)wStackPopNumber();
    ((wxWindow *)(wTheCall->self->ptr))->SetClientSize(width, height);
    wWrapDerefArgs();
}

// void SetContainingSizer(wxSizer* sizer)
void wxWindow_SetContainingSizer() {
    wxSizer *sizer = (wxSizer *)wStackPopObjectPtr( _wxSizer);
    ((wxWindow *)(wTheCall->self->ptr))->SetContainingSizer(sizer);
    wWrapDerefArgs();
}

// virtual void SetCursor(const wxCursor&cursor)
void wxWindow_SetCursor() {
    wxCursor *cursor = (wxCursor *)wStackPopObjectPtr( _wxCursor);
    ((wxWindow *)(wTheCall->self->ptr))->SetCursor(*cursor);
    wWrapDerefArgs();
}

// void SetConstraints(wxLayoutConstraints* constraints)
void wxWindow_SetConstraints() {
    wxLayoutConstraints *constraints = (wxLayoutConstraints *)wStackPopObjectPtr( _wxLayoutConstraints);
    ((wxWindow *)(wTheCall->self->ptr))->SetConstraints(constraints);
    wWrapDerefArgs();
}

// void SetDropTarget(wxDropTarget* target)
void wxWindow_SetDropTarget() {
    wxDropTarget *target = (wxDropTarget *)wStackPopObjectPtr( _wxDropTarget);
    ((wxWindow *)(wTheCall->self->ptr))->SetDropTarget(target);
    wWrapDerefArgs();
}

// void SetEventHandler(wxEvtHandler* handler)
void wxWindow_SetEventHandler() {
    wxEvtHandler *handler = (wxEvtHandler *)wStackPopObjectPtr( _wxEvtHandler);
    ((wxWindow *)(wTheCall->self->ptr))->SetEventHandler(handler);
    wWrapDerefArgs();
}

// void SetExtraStyle(long exStyle)
void wxWindow_SetExtraStyle() {
    long exStyle = (long)wStackPopNumber();
    ((wxWindow *)(wTheCall->self->ptr))->SetExtraStyle(exStyle);
    wWrapDerefArgs();
}

// virtual void SetFocus()
void wxWindow_SetFocus() {
    ((wxWindow *)(wTheCall->self->ptr))->SetFocus();
}

// virtual void SetFocusFromKbd()
void wxWindow_SetFocusFromKbd() {
    ((wxWindow *)(wTheCall->self->ptr))->SetFocusFromKbd();
}

// void SetFont(const wxFont& font)
void wxWindow_SetFont() {
    wxFont *font = (wxFont *)wStackPopObjectPtr( _wxFont);
    ((wxWindow *)(wTheCall->self->ptr))->SetFont(*font);
    wWrapDerefArgs();
}

// %alias SetForegroundColor virtual void SetForegroundColour(const wxColour& colour)
void wxWindow_SetForegroundColour() {
    wxColour *colour = (wxColour *)wStackPopObjectPtr( _wxColour);
    ((wxWindow *)(wTheCall->self->ptr))->SetForegroundColour(*colour);
    wWrapDerefArgs();
}

// virtual void SetHelpText(const wxString& helpText)
void wxWindow_SetHelpText() {
    wxString helpText = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxWindow *)(wTheCall->self->ptr))->SetHelpText(helpText);
    wWrapDerefArgs();
}

// void SetId(int id)
void wxWindow_SetId() {
    int id = (int)wStackPopNumber();
    ((wxWindow *)(wTheCall->self->ptr))->SetId(id);
    wWrapDerefArgs();
}

// virtual void SetName(const wxString& name)
void wxWindow_SetName() {
    wxString name = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxWindow *)(wTheCall->self->ptr))->SetName(name);
    wWrapDerefArgs();
}

// virtual void SetScrollbar(int orientation, int position, int thumbSize, int range, bool refresh = TRUE)
void wxWindow_SetScrollbar() {
    bool refresh = (wTheCall->parmCount > 4 ? (bool)wStackPopNumber() : TRUE);
    int range = (int)wStackPopNumber();
    int thumbSize = (int)wStackPopNumber();
    int position = (int)wStackPopNumber();
    int orientation = (int)wStackPopNumber();
    ((wxWindow *)(wTheCall->self->ptr))->SetScrollbar(orientation, position, thumbSize, range, refresh);
    wWrapDerefArgs();
}

// virtual void SetScrollPos(int orientation, int pos, bool refresh = TRUE)
void wxWindow_SetScrollPos() {
    bool refresh = (wTheCall->parmCount > 2 ? (bool)wStackPopNumber() : TRUE);
    int pos = (int)wStackPopNumber();
    int orientation = (int)wStackPopNumber();
    ((wxWindow *)(wTheCall->self->ptr))->SetScrollPos(orientation, pos, refresh);
    wWrapDerefArgs();
}

// %rename SetDimensions virtual void SetSize(int x, int y, int width, int height, int sizeFlags = wxSIZE_AUTO)
void wxWindow_SetDimensions() {
    int sizeFlags = (wTheCall->parmCount > 4 ? (int)wStackPopNumber() : wxSIZE_AUTO);
    int height = (int)wStackPopNumber();
    int width = (int)wStackPopNumber();
    int y = (int)wStackPopNumber();
    int x = (int)wStackPopNumber();
    ((wxWindow *)(wTheCall->self->ptr))->SetSize(x, y, width, height, sizeFlags);
    wWrapDerefArgs();
}

// virtual void SetSize(int width, int height)
void wxWindow_SetSize() {
    int height = (int)wStackPopNumber();
    int width = (int)wStackPopNumber();
    ((wxWindow *)(wTheCall->self->ptr))->SetSize(width, height);
    wWrapDerefArgs();
}

// %rename SetPosition virtual void SetSize(const wxSize& size)
void wxWindow_SetPosition() {
    wxSize *size = (wxSize *)wStackPopObjectPtr( _wxSize);
    ((wxWindow *)(wTheCall->self->ptr))->SetSize(*size);
    wWrapDerefArgs();
}

// virtual void SetSizeHints(int minW=-1, int minH=-1, int maxW=-1, int maxH=-1, int incW=-1, int incH=-1)
void wxWindow_SetSizeHints() {
    int incH = (wTheCall->parmCount > 5 ? (int)wStackPopNumber() : -1);
    int incW = (wTheCall->parmCount > 4 ? (int)wStackPopNumber() : -1);
    int maxH = (wTheCall->parmCount > 3 ? (int)wStackPopNumber() : -1);
    int maxW = (wTheCall->parmCount > 2 ? (int)wStackPopNumber() : -1);
    int minH = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : -1);
    int minW = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : -1);
    ((wxWindow *)(wTheCall->self->ptr))->SetSizeHints(minW, minH, maxW, maxH, incW, incH);
    wWrapDerefArgs();
}

// void SetSizer(wxSizer* sizer)
void wxWindow_SetSizer() {
    wxSizer *sizer = (wxSizer *)wStackPopObjectPtr( _wxSizer);
    ((wxWindow *)(wTheCall->self->ptr))->SetSizer(sizer);
    wWrapDerefArgs();
}

// void SetSizerAndFit(wxSizer* sizer, bool deleteOld=TRUE)
void wxWindow_SetSizerAndFit() {
    bool deleteOld = (wTheCall->parmCount > 1 ? (bool)wStackPopNumber() : TRUE);
    wxSizer *sizer = (wxSizer *)wStackPopObjectPtr( _wxSizer);
    ((wxWindow *)(wTheCall->self->ptr))->SetSizerAndFit(sizer, deleteOld);
    wWrapDerefArgs();
}

// virtual void SetTitle(const wxString& title)
void wxWindow_SetTitle() {
    wxString title = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxWindow *)(wTheCall->self->ptr))->SetTitle(title);
    wWrapDerefArgs();
}

// virtual void SetThemeEnabled(bool enable)
void wxWindow_SetThemeEnabled() {
    bool enable = (bool)wStackPopNumber();
    ((wxWindow *)(wTheCall->self->ptr))->SetThemeEnabled(enable);
    wWrapDerefArgs();
}

// virtual void SetValidator(const wxValidator& validator)
void wxWindow_SetValidator() {
    wxValidator *validator = (wxValidator *)wStackPopObjectPtr( _wxValidator);
    ((wxWindow *)(wTheCall->self->ptr))->SetValidator(*validator);
    wWrapDerefArgs();
}

// void SetToolTip(const wxString& tip)
void wxWindow_SetToolTip() {
    wxString tip = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxWindow *)(wTheCall->self->ptr))->SetToolTip(tip);
    wWrapDerefArgs();
}

// void SetWindowStyle(long style)
void wxWindow_SetWindowStyle() {
    long style = (long)wStackPopNumber();
    ((wxWindow *)(wTheCall->self->ptr))->SetWindowStyle(style);
    wWrapDerefArgs();
}

// virtual void SetWindowStyleFlag(long style)
void wxWindow_SetWindowStyleFlag() {
    long style = (long)wStackPopNumber();
    ((wxWindow *)(wTheCall->self->ptr))->SetWindowStyleFlag(style);
    wWrapDerefArgs();
}

// virtual bool Show(bool show)
void wxWindow_Show() {
    bool show = (bool)wStackPopNumber();
    bool returns = ((wxWindow *)(wTheCall->self->ptr))->Show(show);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// virtual void Thaw()
void wxWindow_Thaw() {
    ((wxWindow *)(wTheCall->self->ptr))->Thaw();
}

// virtual bool TransferDataFromWindow()
void wxWindow_TransferDataFromWindow() {
    bool returns = ((wxWindow *)(wTheCall->self->ptr))->TransferDataFromWindow();
    wStackPushNumber( (wNumber)returns);
}

// virtual bool TransferDataToWindow()
void wxWindow_TransferDataToWindow() {
    bool returns = ((wxWindow *)(wTheCall->self->ptr))->TransferDataToWindow();
    wStackPushNumber( (wNumber)returns);
}

// virtual void Update()
void wxWindow_Update() {
    ((wxWindow *)(wTheCall->self->ptr))->Update();
}

// virtual bool Validate()
void wxWindow_Validate() {
    bool returns = ((wxWindow *)(wTheCall->self->ptr))->Validate();
    wStackPushNumber( (wNumber)returns);
}

// void WarpPointer(int x, int y)
void wxWindow_WarpPointer() {
    int y = (int)wStackPopNumber();
    int x = (int)wStackPopNumber();
    ((wxWindow *)(wTheCall->self->ptr))->WarpPointer(x, y);
    wWrapDerefArgs();
}

void wxPanel_del()
{
    delete (wxPanel *)(wTheCall->self->ptr);
}


// wxPanel(wxWindow* parent, wxWindowID id, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxTAB_TRAVERSAL, const wxString& name = "panel")
void wxPanel_new() {
    wxString name = wxString((wTheCall->parmCount > 5 ? wStackPopChar() : "panel"), *wxConvCurrent);
    long style = (wTheCall->parmCount > 4 ? (long)wStackPopNumber() : wxTAB_TRAVERSAL);
    const wxSize *size = (wTheCall->parmCount > 3 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 2 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxPanel *returns = new wxPanel(parent, id, *pos, *size, style, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxPanel, (void *)returns );
}

// ~wxPanel()
void wxPanel_finalize() {
    ((wxPanel *)(wTheCall->self->ptr))->~wxPanel();
}

// bool Create(wxWindow* parent, wxWindowID id, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxTAB_TRAVERSAL, const wxString& name = "panel")
void wxPanel_Create() {
    wxString name = wxString((wTheCall->parmCount > 5 ? wStackPopChar() : "panel"), *wxConvCurrent);
    long style = (wTheCall->parmCount > 4 ? (long)wStackPopNumber() : wxTAB_TRAVERSAL);
    const wxSize *size = (wTheCall->parmCount > 3 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 2 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxPanel *)(wTheCall->self->ptr))->Create(parent, id, *pos, *size, style, name);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void InitDialog()
void wxPanel_InitDialog() {
    ((wxPanel *)(wTheCall->self->ptr))->InitDialog();
}

// void SetDefaultItem(wxButton *btn)
void wxPanel_SetDefaultItem() {
    wxButton *btn = (wxButton *)wStackPopObjectPtr( _wxButton);
    ((wxPanel *)(wTheCall->self->ptr))->SetDefaultItem(btn);
    wWrapDerefArgs();
}

void wxDialog_del()
{
    delete (wxDialog *)(wTheCall->self->ptr);
}


// wxDialog(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE, const wxString& name = "dialogBox")
void wxDialog_new() {
    wxString name = wxString((wTheCall->parmCount > 6 ? wStackPopChar() : "dialogBox"), *wxConvCurrent);
    long style = (wTheCall->parmCount > 5 ? (long)wStackPopNumber() : wxDEFAULT_DIALOG_STYLE);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 3 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxString title = wxString(wStackPopChar(), *wxConvCurrent);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxDialog *returns = new wxDialog(parent, id, title, *pos, *size, style, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxDialog, (void *)returns );
}

// ~wxDialog()
void wxDialog_finalize() {
    ((wxDialog *)(wTheCall->self->ptr))->~wxDialog();
}

// %alias Center void Centre(int direction = wxBOTH)
void wxDialog_Centre() {
    int direction = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : wxBOTH);
    ((wxDialog *)(wTheCall->self->ptr))->Centre(direction);
    wWrapDerefArgs();
}

// bool Create(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_DIALOG_STYLE, const wxString& name = "dialogBox")
void wxDialog_Create() {
    wxString name = wxString((wTheCall->parmCount > 6 ? wStackPopChar() : "dialogBox"), *wxConvCurrent);
    long style = (wTheCall->parmCount > 5 ? (long)wStackPopNumber() : wxDEFAULT_DIALOG_STYLE);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 3 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxString title = wxString(wStackPopChar(), *wxConvCurrent);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxDialog *)(wTheCall->self->ptr))->Create(parent, id, title, *pos, *size, style, name);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void EndModal(int retCode)
void wxDialog_EndModal() {
    int retCode = (int)wStackPopNumber();
    ((wxDialog *)(wTheCall->self->ptr))->EndModal(retCode);
    wWrapDerefArgs();
}

// int GetReturnCode()
void wxDialog_GetReturnCode() {
    int returns = ((wxDialog *)(wTheCall->self->ptr))->GetReturnCode();
    wStackPushNumber( (wNumber)returns);
}

// wxString GetTitle() const
void wxDialog_GetTitle() {
    wxString returns = ((wxDialog *)(wTheCall->self->ptr))->GetTitle();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// void Iconize(const bool iconize)
void wxDialog_Iconize() {
    bool iconize = (bool)wStackPopNumber();
    ((wxDialog *)(wTheCall->self->ptr))->Iconize(iconize);
    wWrapDerefArgs();
}

// bool IsIconized() const
void wxDialog_IsIconized() {
    bool returns = ((wxDialog *)(wTheCall->self->ptr))->IsIconized();
    wStackPushNumber( (wNumber)returns);
}

// bool IsModal() const
void wxDialog_IsModal() {
    bool returns = ((wxDialog *)(wTheCall->self->ptr))->IsModal();
    wStackPushNumber( (wNumber)returns);
}

// void SetModal(const bool flag)
void wxDialog_SetModal() {
    bool flag = (bool)wStackPopNumber();
    ((wxDialog *)(wTheCall->self->ptr))->SetModal(flag);
    wWrapDerefArgs();
}

// void SetReturnCode(int retCode)
void wxDialog_SetReturnCode() {
    int retCode = (int)wStackPopNumber();
    ((wxDialog *)(wTheCall->self->ptr))->SetReturnCode(retCode);
    wWrapDerefArgs();
}

// void SetTitle(const wxString& title)
void wxDialog_SetTitle() {
    wxString title = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxDialog *)(wTheCall->self->ptr))->SetTitle(title);
    wWrapDerefArgs();
}

// bool Show(const bool show)
void wxDialog_Show() {
    bool show = (bool)wStackPopNumber();
    bool returns = ((wxDialog *)(wTheCall->self->ptr))->Show(show);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int ShowModal()
void wxDialog_ShowModal() {
    int returns = ((wxDialog *)(wTheCall->self->ptr))->ShowModal();
    wStackPushNumber( (wNumber)returns);
}

void wxFindReplaceData_del()
{
    delete (wxFindReplaceData *)(wTheCall->self->ptr);
}


// wxFindReplaceData(wxUint32 flags = 0)
void wxFindReplaceData_new() {
    wxUint32 flags = (wTheCall->parmCount > 0 ? (wxUint32)wStackPopNumber() : 0);
    wxFindReplaceData *returns = new wxFindReplaceData(flags);
    wWrapDerefArgs();
    wWrapSetThis( _wxFindReplaceData, (void *)returns );
}

// const wxString& GetFindString()
void wxFindReplaceData_GetFindString() {
    const wxString *returns = &((wxFindReplaceData *)(wTheCall->self->ptr))->GetFindString();
    wStackPushChar( (char *)(returns->c_str()), W_TRUE );
}

// const wxString& GetReplaceString()
void wxFindReplaceData_GetReplaceString() {
    const wxString *returns = &((wxFindReplaceData *)(wTheCall->self->ptr))->GetReplaceString();
    wStackPushChar( (char *)(returns->c_str()), W_TRUE );
}

// int GetFlags() const
void wxFindReplaceData_GetFlags() {
    int returns = ((wxFindReplaceData *)(wTheCall->self->ptr))->GetFlags();
    wStackPushNumber( (wNumber)returns);
}

// void SetFlags(wxUint32 flags)
void wxFindReplaceData_SetFlags() {
    wxUint32 flags = (wxUint32)wStackPopNumber();
    ((wxFindReplaceData *)(wTheCall->self->ptr))->SetFlags(flags);
    wWrapDerefArgs();
}

// void SetFindString(const wxString& str)
void wxFindReplaceData_SetFindString() {
    wxString str = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxFindReplaceData *)(wTheCall->self->ptr))->SetFindString(str);
    wWrapDerefArgs();
}

// void SetReplaceString(const wxString& str)
void wxFindReplaceData_SetReplaceString() {
    wxString str = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxFindReplaceData *)(wTheCall->self->ptr))->SetReplaceString(str);
    wWrapDerefArgs();
}

void wxFindReplaceDialog_del()
{
    delete (wxFindReplaceDialog *)(wTheCall->self->ptr);
}


// wxFindReplaceDialog(wxWindow * parent, wxFindReplaceData* data, const wxString& title, int style = 0)
void wxFindReplaceDialog_new() {
    int style = (wTheCall->parmCount > 3 ? (int)wStackPopNumber() : 0);
    wxString title = wxString(wStackPopChar(), *wxConvCurrent);
    wxFindReplaceData *data = (wxFindReplaceData *)wStackPopObjectPtr( _wxFindReplaceData);
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxFindReplaceDialog *returns = new wxFindReplaceDialog(parent, data, title, style);
    wWrapDerefArgs();
    wWrapSetThis( _wxFindReplaceDialog, (void *)returns );
}

// ~wxFindReplaceDialog()
void wxFindReplaceDialog_finalize() {
    ((wxFindReplaceDialog *)(wTheCall->self->ptr))->~wxFindReplaceDialog();
}

// bool Create(wxWindow * parent, wxFindReplaceData* data, const wxString& title, int style = 0)
void wxFindReplaceDialog_Create() {
    int style = (wTheCall->parmCount > 3 ? (int)wStackPopNumber() : 0);
    wxString title = wxString(wStackPopChar(), *wxConvCurrent);
    wxFindReplaceData *data = (wxFindReplaceData *)wStackPopObjectPtr( _wxFindReplaceData);
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxFindReplaceDialog *)(wTheCall->self->ptr))->Create(parent, data, title, style);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// const wxFindReplaceData* GetData() const
void wxFindReplaceDialog_GetData() {
    const wxFindReplaceData *returns = ((wxFindReplaceDialog *)(wTheCall->self->ptr))->GetData();
    wWrapPushObject( _wxFindReplaceData, W_TRUE, (void *)returns );
}

void wxFrame_del()
{
    delete (wxFrame *)(wTheCall->self->ptr);
}


// wxFrame(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString& name = "frame")
void wxFrame_new() {
    wxString name = wxString((wTheCall->parmCount > 6 ? wStackPopChar() : "frame"), *wxConvCurrent);
    long style = (wTheCall->parmCount > 5 ? (long)wStackPopNumber() : wxDEFAULT_FRAME_STYLE);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 3 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxString title = wxString(wStackPopChar(), *wxConvCurrent);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxFrame *returns = new wxFrame(parent, id, title, *pos, *size, style, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxFrame, (void *)returns );
}

// ~wxFrame()
void wxFrame_finalize() {
    ((wxFrame *)(wTheCall->self->ptr))->~wxFrame();
}

// %alias Center void Centre(int direction = wxBOTH)
void wxFrame_Centre() {
    int direction = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : wxBOTH);
    ((wxFrame *)(wTheCall->self->ptr))->Centre(direction);
    wWrapDerefArgs();
}

// void Command(int id)
void wxFrame_Command() {
    int id = (int)wStackPopNumber();
    ((wxFrame *)(wTheCall->self->ptr))->Command(id);
    wWrapDerefArgs();
}

// bool Create(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString& name = "frame")
void wxFrame_Create() {
    wxString name = wxString((wTheCall->parmCount > 6 ? wStackPopChar() : "frame"), *wxConvCurrent);
    long style = (wTheCall->parmCount > 5 ? (long)wStackPopNumber() : wxDEFAULT_FRAME_STYLE);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 3 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxString title = wxString(wStackPopChar(), *wxConvCurrent);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxFrame *)(wTheCall->self->ptr))->Create(parent, id, title, *pos, *size, style, name);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// virtual wxStatusBar* CreateStatusBar(int number = 1, long style = 0, wxWindowID id = -1, const wxString& name = "statusBar")
void wxFrame_CreateStatusBar() {
    wxString name = wxString((wTheCall->parmCount > 3 ? wStackPopChar() : "statusBar"), *wxConvCurrent);
    wxWindowID id = (wTheCall->parmCount > 2 ? (wxWindowID)wStackPopNumber() : -1);
    long style = (wTheCall->parmCount > 1 ? (long)wStackPopNumber() : 0);
    int number = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : 1);
    wxStatusBar *returns = ((wxFrame *)(wTheCall->self->ptr))->CreateStatusBar(number, style, id, name);
    wWrapDerefArgs();
    wWrapPushObject( _wxStatusBar, W_TRUE, (void *)returns );
}

// virtual wxToolBar* CreateToolBar(long style = wxNO_BORDER | wxTB_HORIZONTAL, wxWindowID id = -1, const wxString& name = "toolBar")
void wxFrame_CreateToolBar() {
    wxString name = wxString((wTheCall->parmCount > 2 ? wStackPopChar() : "toolBar"), *wxConvCurrent);
    wxWindowID id = (wTheCall->parmCount > 1 ? (wxWindowID)wStackPopNumber() : -1);
    long style = (wTheCall->parmCount > 0 ? (long)wStackPopNumber() : wxNO_BORDER | wxTB_HORIZONTAL);
    wxToolBar *returns = ((wxFrame *)(wTheCall->self->ptr))->CreateToolBar(style, id, name);
    wWrapDerefArgs();
    wWrapPushObject( _wxToolBar, W_TRUE, (void *)returns );
}

// wxPoint GetClientAreaOrigin() const
void wxFrame_GetClientAreaOrigin() {
    // make a pointer via copy constructor
    wxPoint *returns = new wxPoint(((wxFrame *)(wTheCall->self->ptr))->GetClientAreaOrigin());
    wWrapPushObject( _wxPoint, W_TRUE, (void *)returns );
}

// wxMenuBar* GetMenuBar() const
void wxFrame_GetMenuBar() {
    wxMenuBar *returns = ((wxFrame *)(wTheCall->self->ptr))->GetMenuBar();
    wWrapPushObject( _wxMenuBar, W_TRUE, (void *)returns );
}

// wxStatusBar* GetStatusBar() const
void wxFrame_GetStatusBar() {
    wxStatusBar *returns = ((wxFrame *)(wTheCall->self->ptr))->GetStatusBar();
    wWrapPushObject( _wxStatusBar, W_TRUE, (void *)returns );
}

// wxString GetTitle() const
void wxFrame_GetTitle() {
    wxString returns = ((wxFrame *)(wTheCall->self->ptr))->GetTitle();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxToolBar* GetToolBar() const
void wxFrame_GetToolBar() {
    wxToolBar *returns = ((wxFrame *)(wTheCall->self->ptr))->GetToolBar();
    wWrapPushObject( _wxToolBar, W_TRUE, (void *)returns );
}

// void Iconize(bool iconize)
void wxFrame_Iconize() {
    bool iconize = (bool)wStackPopNumber();
    ((wxFrame *)(wTheCall->self->ptr))->Iconize(iconize);
    wWrapDerefArgs();
}

// bool IsIconized() const
void wxFrame_IsIconized() {
    bool returns = ((wxFrame *)(wTheCall->self->ptr))->IsIconized();
    wStackPushNumber( (wNumber)returns);
}

// bool IsMaximized() const
void wxFrame_IsMaximized() {
    bool returns = ((wxFrame *)(wTheCall->self->ptr))->IsMaximized();
    wStackPushNumber( (wNumber)returns);
}

// void Maximize(bool maximize)
void wxFrame_Maximize() {
    bool maximize = (bool)wStackPopNumber();
    ((wxFrame *)(wTheCall->self->ptr))->Maximize(maximize);
    wWrapDerefArgs();
}

// void SetIcon(const wxIcon& icon)
void wxFrame_SetIcon() {
    wxIcon *icon = (wxIcon *)wStackPopObjectPtr( _wxIcon);
    ((wxFrame *)(wTheCall->self->ptr))->SetIcon(*icon);
    wWrapDerefArgs();
}

// void SetMenuBar(wxMenuBar* menuBar)
void wxFrame_SetMenuBar() {
    wxMenuBar *menuBar = (wxMenuBar *)wStackPopObjectPtr( _wxMenuBar);
    ((wxFrame *)(wTheCall->self->ptr))->SetMenuBar(menuBar);
    wWrapDerefArgs();
}

// void SetStatusBar(wxStatusBar* statusBar)
void wxFrame_SetStatusBar() {
    wxStatusBar *statusBar = (wxStatusBar *)wStackPopObjectPtr( _wxStatusBar);
    ((wxFrame *)(wTheCall->self->ptr))->SetStatusBar(statusBar);
    wWrapDerefArgs();
}

// virtual void SetStatusText(const wxString& text, int number = 0)
void wxFrame_SetStatusText() {
    int number = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : 0);
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxFrame *)(wTheCall->self->ptr))->SetStatusText(text, number);
    wWrapDerefArgs();
}

// virtual void SetStatusWidths(int n, int *widths)
void wxFrame_SetStatusWidths() {
    int *widths = (int *)wStackPopObjectPtr( NULL );
    int n = (int)wStackPopNumber();
    ((wxFrame *)(wTheCall->self->ptr))->SetStatusWidths(n, widths);
    wWrapDerefArgs();
}

// void SetToolBar(wxToolBar* toolBar)
void wxFrame_SetToolBar() {
    wxToolBar *toolBar = (wxToolBar *)wStackPopObjectPtr( _wxToolBar);
    ((wxFrame *)(wTheCall->self->ptr))->SetToolBar(toolBar);
    wWrapDerefArgs();
}

// virtual void SetTitle(const wxString& title)
void wxFrame_SetTitle() {
    wxString title = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxFrame *)(wTheCall->self->ptr))->SetTitle(title);
    wWrapDerefArgs();
}

void wxMDIParentFrame_del()
{
    delete (wxMDIParentFrame *)(wTheCall->self->ptr);
}


// wxMDIParentFrame(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE | wxVSCROLL | wxHSCROLL, const wxString& name = "frame")
void wxMDIParentFrame_new() {
    wxString name = wxString((wTheCall->parmCount > 6 ? wStackPopChar() : "frame"), *wxConvCurrent);
    long style = (wTheCall->parmCount > 5 ? (long)wStackPopNumber() : wxDEFAULT_FRAME_STYLE | wxVSCROLL | wxHSCROLL);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 3 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxString title = wxString(wStackPopChar(), *wxConvCurrent);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxMDIParentFrame *returns = new wxMDIParentFrame(parent, id, title, *pos, *size, style, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxMDIParentFrame, (void *)returns );
}

// ~wxMDIParentFrame()
void wxMDIParentFrame_finalize() {
    ((wxMDIParentFrame *)(wTheCall->self->ptr))->~wxMDIParentFrame();
}

// void ActivateNext()
void wxMDIParentFrame_ActivateNext() {
    ((wxMDIParentFrame *)(wTheCall->self->ptr))->ActivateNext();
}

// void ActivatePrevious()
void wxMDIParentFrame_ActivatePrevious() {
    ((wxMDIParentFrame *)(wTheCall->self->ptr))->ActivatePrevious();
}

// void ArrangeIcons()
void wxMDIParentFrame_ArrangeIcons() {
    ((wxMDIParentFrame *)(wTheCall->self->ptr))->ArrangeIcons();
}

// void Cascade()
void wxMDIParentFrame_Cascade() {
    ((wxMDIParentFrame *)(wTheCall->self->ptr))->Cascade();
}

// bool Create(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE | wxVSCROLL | wxHSCROLL, const wxString& name = "frame")
void wxMDIParentFrame_Create() {
    wxString name = wxString((wTheCall->parmCount > 6 ? wStackPopChar() : "frame"), *wxConvCurrent);
    long style = (wTheCall->parmCount > 5 ? (long)wStackPopNumber() : wxDEFAULT_FRAME_STYLE | wxVSCROLL | wxHSCROLL);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 3 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxString title = wxString(wStackPopChar(), *wxConvCurrent);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxMDIParentFrame *)(wTheCall->self->ptr))->Create(parent, id, title, *pos, *size, style, name);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

void wxMDIParentFrame_GetClientSize()
{
    int width, height;
    ((wxMDIParentFrame *)wTheCall->self->ptr)->GetClientSize(&width, &height);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)width );
    wStackPushNumber( (wNumber)height );
}

void wxMDIParentFrame_GetClientSizeWidth()
{
    int width, height;
    ((wxMDIParentFrame *)wTheCall->self->ptr)->GetClientSize(&width, &height);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)width );
}

void wxMDIParentFrame_GetClientSizeHeight()
{
    int width, height;
    ((wxMDIParentFrame *)wTheCall->self->ptr)->GetClientSize(&width, &height);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)height );
}

// wxMDIChildFrame* GetActiveChild() const
void wxMDIParentFrame_GetActiveChild() {
    wxMDIChildFrame *returns = ((wxMDIParentFrame *)(wTheCall->self->ptr))->GetActiveChild();
    wWrapPushObject( _wxMDIChildFrame, W_TRUE, (void *)returns );
}

// wxMDIClientWindow* GetClientWindow() const
void wxMDIParentFrame_GetClientWindow() {
    wxMDIClientWindow *returns = ((wxMDIParentFrame *)(wTheCall->self->ptr))->GetClientWindow();
    wWrapPushObject( _wxMDIClientWindow, W_TRUE, (void *)returns );
}

// virtual wxWindow* GetToolBar() const
void wxMDIParentFrame_GetToolBar() {
    wxWindow *returns = ((wxMDIParentFrame *)(wTheCall->self->ptr))->GetToolBar();
    wWrapPushObject( _wxWindow, W_TRUE, (void *)returns );
}

// virtual void SetToolBar(wxToolBar* toolbar)
void wxMDIParentFrame_SetToolBar() {
    wxToolBar *toolbar = (wxToolBar *)wStackPopObjectPtr( _wxToolBar);
    ((wxMDIParentFrame *)(wTheCall->self->ptr))->SetToolBar(toolbar);
    wWrapDerefArgs();
}

// void Tile()
void wxMDIParentFrame_Tile() {
    ((wxMDIParentFrame *)(wTheCall->self->ptr))->Tile();
}

void wxMDIChildFrame_del()
{
    delete (wxMDIChildFrame *)(wTheCall->self->ptr);
}


// wxMDIChildFrame(wxMDIParentFrame* parent, wxWindowID id, const wxString& title, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString& name = "frame")
void wxMDIChildFrame_new() {
    wxString name = wxString((wTheCall->parmCount > 6 ? wStackPopChar() : "frame"), *wxConvCurrent);
    long style = (wTheCall->parmCount > 5 ? (long)wStackPopNumber() : wxDEFAULT_FRAME_STYLE);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 3 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxString title = wxString(wStackPopChar(), *wxConvCurrent);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxMDIParentFrame *parent = (wxMDIParentFrame *)wStackPopObjectPtr( _wxMDIParentFrame);
    wxMDIChildFrame *returns = new wxMDIChildFrame(parent, id, title, *pos, *size, style, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxMDIChildFrame, (void *)returns );
}

// ~wxMDIChildFrame()
void wxMDIChildFrame_finalize() {
    ((wxMDIChildFrame *)(wTheCall->self->ptr))->~wxMDIChildFrame();
}

// void Activate()
void wxMDIChildFrame_Activate() {
    ((wxMDIChildFrame *)(wTheCall->self->ptr))->Activate();
}

// bool Create(wxMDIParentFrame* parent, wxWindowID id, const wxString& title, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString& name = "frame")
void wxMDIChildFrame_Create() {
    wxString name = wxString((wTheCall->parmCount > 6 ? wStackPopChar() : "frame"), *wxConvCurrent);
    long style = (wTheCall->parmCount > 5 ? (long)wStackPopNumber() : wxDEFAULT_FRAME_STYLE);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 3 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxString title = wxString(wStackPopChar(), *wxConvCurrent);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxMDIParentFrame *parent = (wxMDIParentFrame *)wStackPopObjectPtr( _wxMDIParentFrame);
    bool returns = ((wxMDIChildFrame *)(wTheCall->self->ptr))->Create(parent, id, title, *pos, *size, style, name);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void Restore()
void wxMDIChildFrame_Restore() {
    ((wxMDIChildFrame *)(wTheCall->self->ptr))->Restore();
}

void wxMiniFrame_del()
{
    delete (wxMiniFrame *)(wTheCall->self->ptr);
}


// wxMiniFrame(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString& name = "frame")
void wxMiniFrame_new() {
    wxString name = wxString((wTheCall->parmCount > 6 ? wStackPopChar() : "frame"), *wxConvCurrent);
    long style = (wTheCall->parmCount > 5 ? (long)wStackPopNumber() : wxDEFAULT_FRAME_STYLE);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 3 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxString title = wxString(wStackPopChar(), *wxConvCurrent);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxMiniFrame *returns = new wxMiniFrame(parent, id, title, *pos, *size, style, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxMiniFrame, (void *)returns );
}

// ~wxMiniFrame()
void wxMiniFrame_finalize() {
    ((wxMiniFrame *)(wTheCall->self->ptr))->~wxMiniFrame();
}

// bool Create(wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxDEFAULT_FRAME_STYLE, const wxString& name = "frame")
void wxMiniFrame_Create() {
    wxString name = wxString((wTheCall->parmCount > 6 ? wStackPopChar() : "frame"), *wxConvCurrent);
    long style = (wTheCall->parmCount > 5 ? (long)wStackPopNumber() : wxDEFAULT_FRAME_STYLE);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 3 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxString title = wxString(wStackPopChar(), *wxConvCurrent);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxMiniFrame *)(wTheCall->self->ptr))->Create(parent, id, title, *pos, *size, style, name);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

void wxScrolledWindow_del()
{
    delete (wxScrolledWindow *)(wTheCall->self->ptr);
}


// wxScrolledWindow(wxWindow* parent, wxWindowID id = -1, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxHSCROLL | wxVSCROLL, const wxString& name = "scrolledWindow")
void wxScrolledWindow_new() {
    wxString name = wxString((wTheCall->parmCount > 5 ? wStackPopChar() : "scrolledWindow"), *wxConvCurrent);
    long style = (wTheCall->parmCount > 4 ? (long)wStackPopNumber() : wxHSCROLL | wxVSCROLL);
    const wxSize *size = (wTheCall->parmCount > 3 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 2 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxWindowID id = (wTheCall->parmCount > 1 ? (wxWindowID)wStackPopNumber() : -1);
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxScrolledWindow *returns = new wxScrolledWindow(parent, id, *pos, *size, style, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxScrolledWindow, (void *)returns );
}

// ~wxScrolledWindow()
void wxScrolledWindow_finalize() {
    ((wxScrolledWindow *)(wTheCall->self->ptr))->~wxScrolledWindow();
}

// void CalcScrolledPosition( int x, int y, int *xx, int *yy) const
void wxScrolledWindow_CalcScrolledPosition() {
    int *yy = (int *)wStackPopObjectPtr( NULL );
    int *xx = (int *)wStackPopObjectPtr( NULL );
    int y = (int)wStackPopNumber();
    int x = (int)wStackPopNumber();
    ((wxScrolledWindow *)(wTheCall->self->ptr))->CalcScrolledPosition(x, y, xx, yy);
    wWrapDerefArgs();
}

// void CalcUnscrolledPosition( int x, int y, int *xx, int *yy) const
void wxScrolledWindow_CalcUnscrolledPosition() {
    int *yy = (int *)wStackPopObjectPtr( NULL );
    int *xx = (int *)wStackPopObjectPtr( NULL );
    int y = (int)wStackPopNumber();
    int x = (int)wStackPopNumber();
    ((wxScrolledWindow *)(wTheCall->self->ptr))->CalcUnscrolledPosition(x, y, xx, yy);
    wWrapDerefArgs();
}

// bool Create(wxWindow* parent, wxWindowID id = -1, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxHSCROLL | wxVSCROLL, const wxString& name = "scrolledWindow")
void wxScrolledWindow_Create() {
    wxString name = wxString((wTheCall->parmCount > 5 ? wStackPopChar() : "scrolledWindow"), *wxConvCurrent);
    long style = (wTheCall->parmCount > 4 ? (long)wStackPopNumber() : wxHSCROLL | wxVSCROLL);
    const wxSize *size = (wTheCall->parmCount > 3 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 2 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxWindowID id = (wTheCall->parmCount > 1 ? (wxWindowID)wStackPopNumber() : -1);
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxScrolledWindow *)(wTheCall->self->ptr))->Create(parent, id, *pos, *size, style, name);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void EnableScrolling(const bool xScrolling, const bool yScrolling)
void wxScrolledWindow_EnableScrolling() {
    bool yScrolling = (bool)wStackPopNumber();
    bool xScrolling = (bool)wStackPopNumber();
    ((wxScrolledWindow *)(wTheCall->self->ptr))->EnableScrolling(xScrolling, yScrolling);
    wWrapDerefArgs();
}

void wxScrolledWindow_GetScrollPixelsPerUnit()
{
    int xUnit, yUnit;
    ((wxScrolledWindow *)wTheCall->self->ptr)->GetScrollPixelsPerUnit(&xUnit, &yUnit);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)xUnit );
    wStackPushNumber( (wNumber)yUnit );
}

void wxScrolledWindow_GetScrollPixelsPerUnitX()
{
    int xUnit, yUnit;
    ((wxScrolledWindow *)wTheCall->self->ptr)->GetScrollPixelsPerUnit(&xUnit, &yUnit);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)xUnit );
}

void wxScrolledWindow_GetScrollPixelsPerUnitY()
{
    int xUnit, yUnit;
    ((wxScrolledWindow *)wTheCall->self->ptr)->GetScrollPixelsPerUnit(&xUnit, &yUnit);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)yUnit );
}
void wxScrolledWindow_GetVirtualSize()
{
    int x, y;
    ((wxScrolledWindow *)wTheCall->self->ptr)->GetVirtualSize(&x, &y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)x );
    wStackPushNumber( (wNumber)y );
}

void wxScrolledWindow_GetVirtualSizeX()
{
    int x, y;
    ((wxScrolledWindow *)wTheCall->self->ptr)->GetVirtualSize(&x, &y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)x );
}

void wxScrolledWindow_GetVirtualSizeY()
{
    int x, y;
    ((wxScrolledWindow *)wTheCall->self->ptr)->GetVirtualSize(&x, &y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)y );
}
// bool IsRetained() const
void wxScrolledWindow_IsRetained() {
    bool returns = ((wxScrolledWindow *)(wTheCall->self->ptr))->IsRetained();
    wStackPushNumber( (wNumber)returns);
}

// void PrepareDC(wxDC& dc)
void wxScrolledWindow_PrepareDC() {
    wxDC *dc = (wxDC *)wStackPopObjectPtr( _wxDC);
    ((wxScrolledWindow *)(wTheCall->self->ptr))->PrepareDC(*dc);
    wWrapDerefArgs();
}

// void Scroll(int x, int y)
void wxScrolledWindow_Scroll() {
    int y = (int)wStackPopNumber();
    int x = (int)wStackPopNumber();
    ((wxScrolledWindow *)(wTheCall->self->ptr))->Scroll(x, y);
    wWrapDerefArgs();
}

// void SetScrollbars(int pixelsPerUnitX, int pixelsPerUnitY, int noUnitsX, int noUnitsY, int xPos = 0, int yPos = 0, bool noRefresh = FALSE)
void wxScrolledWindow_SetScrollbars() {
    bool noRefresh = (wTheCall->parmCount > 6 ? (bool)wStackPopNumber() : FALSE);
    int yPos = (wTheCall->parmCount > 5 ? (int)wStackPopNumber() : 0);
    int xPos = (wTheCall->parmCount > 4 ? (int)wStackPopNumber() : 0);
    int noUnitsY = (int)wStackPopNumber();
    int noUnitsX = (int)wStackPopNumber();
    int pixelsPerUnitY = (int)wStackPopNumber();
    int pixelsPerUnitX = (int)wStackPopNumber();
    ((wxScrolledWindow *)(wTheCall->self->ptr))->SetScrollbars(pixelsPerUnitX, pixelsPerUnitY, noUnitsX, noUnitsY, xPos, yPos, noRefresh);
    wWrapDerefArgs();
}

// void SetTargetWindow(wxWindow* window)
void wxScrolledWindow_SetTargetWindow() {
    wxWindow *window = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    ((wxScrolledWindow *)(wTheCall->self->ptr))->SetTargetWindow(window);
    wWrapDerefArgs();
}

void wxScrolledWindow_GetViewStart()
{
    int x, y;
    ((wxScrolledWindow *)wTheCall->self->ptr)->GetViewStart(&x, &y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)x );
    wStackPushNumber( (wNumber)y );
}

void wxScrolledWindow_GetViewStartX()
{
    int x, y;
    ((wxScrolledWindow *)wTheCall->self->ptr)->GetViewStart(&x, &y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)x );
}

void wxScrolledWindow_GetViewStartY()
{
    int x, y;
    ((wxScrolledWindow *)wTheCall->self->ptr)->GetViewStart(&x, &y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)y );
}
void wxHtmlFilter_del()
{
    delete (wxHtmlFilter *)(wTheCall->self->ptr);
}


void wxHtmlWindow_del()
{
    delete (wxHtmlWindow *)(wTheCall->self->ptr);
}


// wxHtmlWindow(wxWindow *parent, wxWindowID id = -1, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxHW_SCROLLBAR_AUTO, const wxString& name = "htmlWindow")
void wxHtmlWindow_new() {
    wxString name = wxString((wTheCall->parmCount > 5 ? wStackPopChar() : "htmlWindow"), *wxConvCurrent);
    long style = (wTheCall->parmCount > 4 ? (long)wStackPopNumber() : wxHW_SCROLLBAR_AUTO);
    const wxSize *size = (wTheCall->parmCount > 3 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 2 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxWindowID id = (wTheCall->parmCount > 1 ? (wxWindowID)wStackPopNumber() : -1);
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxHtmlWindow *returns = new wxHtmlWindow(parent, id, *pos, *size, style, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxHtmlWindow, (void *)returns );
}

// static void AddFilter(wxHtmlFilter *filter)
void wxHtmlWindow_AddFilter() {
    wxHtmlFilter *filter = (wxHtmlFilter *)wStackPopObjectPtr( _wxHtmlFilter);
    ((wxHtmlWindow *)(wTheCall->self->ptr))->AddFilter(filter);
    wWrapDerefArgs();
}

// bool AppendToPage(const wxString& source)
void wxHtmlWindow_AppendToPage() {
    wxString source = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = ((wxHtmlWindow *)(wTheCall->self->ptr))->AppendToPage(source);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// wxString GetOpenedAnchor()
void wxHtmlWindow_GetOpenedAnchor() {
    wxString returns = ((wxHtmlWindow *)(wTheCall->self->ptr))->GetOpenedAnchor();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxString GetOpenedPage()
void wxHtmlWindow_GetOpenedPage() {
    wxString returns = ((wxHtmlWindow *)(wTheCall->self->ptr))->GetOpenedPage();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxString GetOpenedPageTitle()
void wxHtmlWindow_GetOpenedPageTitle() {
    wxString returns = ((wxHtmlWindow *)(wTheCall->self->ptr))->GetOpenedPageTitle();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxFrame* GetRelatedFrame() const
void wxHtmlWindow_GetRelatedFrame() {
    wxFrame *returns = ((wxHtmlWindow *)(wTheCall->self->ptr))->GetRelatedFrame();
    wWrapPushObject( _wxFrame, W_TRUE, (void *)returns );
}

// bool HistoryBack()
void wxHtmlWindow_HistoryBack() {
    bool returns = ((wxHtmlWindow *)(wTheCall->self->ptr))->HistoryBack();
    wStackPushNumber( (wNumber)returns);
}

// bool HistoryCanBack()
void wxHtmlWindow_HistoryCanBack() {
    bool returns = ((wxHtmlWindow *)(wTheCall->self->ptr))->HistoryCanBack();
    wStackPushNumber( (wNumber)returns);
}

// bool HistoryCanForward()
void wxHtmlWindow_HistoryCanForward() {
    bool returns = ((wxHtmlWindow *)(wTheCall->self->ptr))->HistoryCanForward();
    wStackPushNumber( (wNumber)returns);
}

// void HistoryClear()
void wxHtmlWindow_HistoryClear() {
    ((wxHtmlWindow *)(wTheCall->self->ptr))->HistoryClear();
}

// bool HistoryForward()
void wxHtmlWindow_HistoryForward() {
    bool returns = ((wxHtmlWindow *)(wTheCall->self->ptr))->HistoryForward();
    wStackPushNumber( (wNumber)returns);
}

// virtual bool LoadPage(const wxString& location)
void wxHtmlWindow_LoadPage() {
    wxString location = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = ((wxHtmlWindow *)(wTheCall->self->ptr))->LoadPage(location);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// virtual void ReadCustomization(wxConfigBase *cfg, wxString path = wxEmptyString)
void wxHtmlWindow_ReadCustomization() {
    wxString path = wxString((wTheCall->parmCount > 1 ? wStackPopChar() : wxEmptyString), *wxConvCurrent);
    wxConfigBase *cfg = (wxConfigBase *)wStackPopObjectPtr( _wxConfigBase);
    ((wxHtmlWindow *)(wTheCall->self->ptr))->ReadCustomization(cfg, path);
    wWrapDerefArgs();
}

// void SetBorders(int b)
void wxHtmlWindow_SetBorders() {
    int b = (int)wStackPopNumber();
    ((wxHtmlWindow *)(wTheCall->self->ptr))->SetBorders(b);
    wWrapDerefArgs();
}

// void SetFonts(wxString normal_face, wxString fixed_face, const int *sizes = NULL)
void wxHtmlWindow_SetFonts() {
    const int *sizes = (wTheCall->parmCount > 2 ? (int *)wStackPopObjectPtr( NULL ) : NULL);
    wxString fixed_face = wxString(wStackPopChar(), *wxConvCurrent);
    wxString normal_face = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxHtmlWindow *)(wTheCall->self->ptr))->SetFonts(normal_face, fixed_face, sizes);
    wWrapDerefArgs();
}

// bool SetPage(const wxString& source)
void wxHtmlWindow_SetPage() {
    wxString source = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = ((wxHtmlWindow *)(wTheCall->self->ptr))->SetPage(source);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void SetRelatedFrame(wxFrame* frame, const wxString& format)
void wxHtmlWindow_SetRelatedFrame() {
    wxString format = wxString(wStackPopChar(), *wxConvCurrent);
    wxFrame *frame = (wxFrame *)wStackPopObjectPtr( _wxFrame);
    ((wxHtmlWindow *)(wTheCall->self->ptr))->SetRelatedFrame(frame, format);
    wWrapDerefArgs();
}

// void SetRelatedStatusBar(int bar)
void wxHtmlWindow_SetRelatedStatusBar() {
    int bar = (int)wStackPopNumber();
    ((wxHtmlWindow *)(wTheCall->self->ptr))->SetRelatedStatusBar(bar);
    wWrapDerefArgs();
}

// virtual void WriteCustomization(wxConfigBase *cfg, wxString path = wxEmptyString)
void wxHtmlWindow_WriteCustomization() {
    wxString path = wxString((wTheCall->parmCount > 1 ? wStackPopChar() : wxEmptyString), *wxConvCurrent);
    wxConfigBase *cfg = (wxConfigBase *)wStackPopObjectPtr( _wxConfigBase);
    ((wxHtmlWindow *)(wTheCall->self->ptr))->WriteCustomization(cfg, path);
    wWrapDerefArgs();
}

void wxSplitterWindow_del()
{
    delete (wxSplitterWindow *)(wTheCall->self->ptr);
}


// wxSplitterWindow(wxWindow* parent, wxWindowID id, const wxPoint& point = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style=wxSP_3D, const wxString& name = "splitterWindow")
void wxSplitterWindow_new() {
    wxString name = wxString((wTheCall->parmCount > 5 ? wStackPopChar() : "splitterWindow"), *wxConvCurrent);
    long style = (wTheCall->parmCount > 4 ? (long)wStackPopNumber() : wxSP_3D);
    const wxSize *size = (wTheCall->parmCount > 3 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *point = (wTheCall->parmCount > 2 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxSplitterWindow *returns = new wxSplitterWindow(parent, id, *point, *size, style, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxSplitterWindow, (void *)returns );
}

// ~wxSplitterWindow()
void wxSplitterWindow_finalize() {
    ((wxSplitterWindow *)(wTheCall->self->ptr))->~wxSplitterWindow();
}

// bool Create(wxWindow *parent, wxWindowID id = -1, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxSP_3D|wxCLIP_CHILDREN, const wxString& name = "splitter");
void wxSplitterWindow_Create() {
    wxString name = wxString((wTheCall->parmCount > 5 ? wStackPopChar() : "splitter"), *wxConvCurrent);
    long style = (wTheCall->parmCount > 4 ? (long)wStackPopNumber() : wxSP_3D|wxCLIP_CHILDREN);
    const wxSize *size = (wTheCall->parmCount > 3 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 2 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxWindowID id = (wTheCall->parmCount > 1 ? (wxWindowID)wStackPopNumber() : -1);
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxSplitterWindow *)(wTheCall->self->ptr))->Create(parent, id, *pos, *size, style, name);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int GetMinimumPaneSize() const
void wxSplitterWindow_GetMinimumPaneSize() {
    int returns = ((wxSplitterWindow *)(wTheCall->self->ptr))->GetMinimumPaneSize();
    wStackPushNumber( (wNumber)returns);
}

// int GetSashPosition()
void wxSplitterWindow_GetSashPosition() {
    int returns = ((wxSplitterWindow *)(wTheCall->self->ptr))->GetSashPosition();
    wStackPushNumber( (wNumber)returns);
}

// int GetSplitMode() const
void wxSplitterWindow_GetSplitMode() {
    int returns = ((wxSplitterWindow *)(wTheCall->self->ptr))->GetSplitMode();
    wStackPushNumber( (wNumber)returns);
}

// wxWindow* GetWindow1() const
void wxSplitterWindow_GetWindow1() {
    wxWindow *returns = ((wxSplitterWindow *)(wTheCall->self->ptr))->GetWindow1();
    wWrapPushObject( _wxWindow, W_TRUE, (void *)returns );
}

// wxWindow* GetWindow2() const
void wxSplitterWindow_GetWindow2() {
    wxWindow *returns = ((wxSplitterWindow *)(wTheCall->self->ptr))->GetWindow2();
    wWrapPushObject( _wxWindow, W_TRUE, (void *)returns );
}

// void Initialize(wxWindow* window)
void wxSplitterWindow_Initialize() {
    wxWindow *window = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    ((wxSplitterWindow *)(wTheCall->self->ptr))->Initialize(window);
    wWrapDerefArgs();
}

// bool IsSplit() const
void wxSplitterWindow_IsSplit() {
    bool returns = ((wxSplitterWindow *)(wTheCall->self->ptr))->IsSplit();
    wStackPushNumber( (wNumber)returns);
}

// bool ReplaceWindow(wxWindow * winOld, wxWindow * winNew)
void wxSplitterWindow_ReplaceWindow() {
    wxWindow *winNew = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxWindow *winOld = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxSplitterWindow *)(wTheCall->self->ptr))->ReplaceWindow(winOld, winNew);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void SetSashPosition(int position, const bool redraw = TRUE)
void wxSplitterWindow_SetSashPosition() {
    const bool redraw = (wTheCall->parmCount > 1 ? (bool)wStackPopNumber() : TRUE);
    int position = (int)wStackPopNumber();
    ((wxSplitterWindow *)(wTheCall->self->ptr))->SetSashPosition(position, redraw);
    wWrapDerefArgs();
}

// void SetMinimumPaneSize(int paneSize)
void wxSplitterWindow_SetMinimumPaneSize() {
    int paneSize = (int)wStackPopNumber();
    ((wxSplitterWindow *)(wTheCall->self->ptr))->SetMinimumPaneSize(paneSize);
    wWrapDerefArgs();
}

// void SetSplitMode(int mode)
void wxSplitterWindow_SetSplitMode() {
    int mode = (int)wStackPopNumber();
    ((wxSplitterWindow *)(wTheCall->self->ptr))->SetSplitMode(mode);
    wWrapDerefArgs();
}

// bool SplitHorizontally(wxWindow* window1, wxWindow* window2, int sashPosition = 0)
void wxSplitterWindow_SplitHorizontally() {
    int sashPosition = (wTheCall->parmCount > 2 ? (int)wStackPopNumber() : 0);
    wxWindow *window2 = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxWindow *window1 = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxSplitterWindow *)(wTheCall->self->ptr))->SplitHorizontally(window1, window2, sashPosition);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool SplitVertically(wxWindow* window1, wxWindow* window2, int sashPosition = 0)
void wxSplitterWindow_SplitVertically() {
    int sashPosition = (wTheCall->parmCount > 2 ? (int)wStackPopNumber() : 0);
    wxWindow *window2 = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxWindow *window1 = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxSplitterWindow *)(wTheCall->self->ptr))->SplitVertically(window1, window2, sashPosition);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool Unsplit(wxWindow* toRemove = NULL)
void wxSplitterWindow_Unsplit() {
    wxWindow *toRemove = (wTheCall->parmCount > 0 ? (wxWindow *)wStackPopObjectPtr( _wxWindow) : NULL);
    bool returns = ((wxSplitterWindow *)(wTheCall->self->ptr))->Unsplit(toRemove);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

void wxStatusBar_del()
{
    delete (wxStatusBar *)(wTheCall->self->ptr);
}


// ~wxStatusBar()
void wxStatusBar_finalize() {
    ((wxStatusBar *)(wTheCall->self->ptr))->~wxStatusBar();
}

// bool Create(wxWindow *parent, wxWindowID id, long style, const wxString& name = wxPanelNameStr)
void wxStatusBar_Create() {
    wxString name = wxString((wTheCall->parmCount > 3 ? wStackPopChar() : wxPanelNameStr), *wxConvCurrent);
    long style = (long)wStackPopNumber();
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxStatusBar *)(wTheCall->self->ptr))->Create(parent, id, style, name);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// virtual bool GetFieldRect(int i, wxRect& rect) const
void wxStatusBar_GetFieldRect() {
    wxRect *rect = (wxRect *)wStackPopObjectPtr( _wxRect);
    int i = (int)wStackPopNumber();
    bool returns = ((wxStatusBar *)(wTheCall->self->ptr))->GetFieldRect(i, *rect);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int GetFieldsCount() const
void wxStatusBar_GetFieldsCount() {
    int returns = ((wxStatusBar *)(wTheCall->self->ptr))->GetFieldsCount();
    wStackPushNumber( (wNumber)returns);
}

// virtual wxString GetStatusText(int ir = 0) const
void wxStatusBar_GetStatusText() {
    int ir = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : 0);
    wxString returns = ((wxStatusBar *)(wTheCall->self->ptr))->GetStatusText(ir);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// virtual void SetFieldsCount(int number = 1, int* widths = NULL)
void wxStatusBar_SetFieldsCount() {
    int *widths = (wTheCall->parmCount > 1 ? (int *)wStackPopObjectPtr( NULL ) : NULL);
    int number = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : 1);
    ((wxStatusBar *)(wTheCall->self->ptr))->SetFieldsCount(number, widths);
    wWrapDerefArgs();
}

// void SetMinHeight(int height)
void wxStatusBar_SetMinHeight() {
    int height = (int)wStackPopNumber();
    ((wxStatusBar *)(wTheCall->self->ptr))->SetMinHeight(height);
    wWrapDerefArgs();
}

// virtual void SetStatusText(const wxString& text, int i = 0)
void wxStatusBar_SetStatusText() {
    int i = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : 0);
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxStatusBar *)(wTheCall->self->ptr))->SetStatusText(text, i);
    wWrapDerefArgs();
}

// virtual void SetStatusWidths(int n, int *widths)
void wxStatusBar_SetStatusWidths() {
    int *widths = (int *)wStackPopObjectPtr( NULL );
    int n = (int)wStackPopNumber();
    ((wxStatusBar *)(wTheCall->self->ptr))->SetStatusWidths(n, widths);
    wWrapDerefArgs();
}

void wxControl_del()
{
    delete (wxControl *)(wTheCall->self->ptr);
}


// void Command(wxCommandEvent& event)
void wxControl_Command() {
    wxCommandEvent *event = (wxCommandEvent *)wStackPopObjectPtr( _wxCommandEvent);
    ((wxControl *)(wTheCall->self->ptr))->Command(*event);
    wWrapDerefArgs();
}

// wxString& GetLabel()
void wxControl_GetLabel() {
    wxString *returns = &((wxControl *)(wTheCall->self->ptr))->GetLabel();
    wStackPushChar( (char *)(returns->c_str()), W_TRUE );
}

// void SetLabel(const wxString& label)
void wxControl_SetLabel() {
    wxString label = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxControl *)(wTheCall->self->ptr))->SetLabel(label);
    wWrapDerefArgs();
}

void wxButton_del()
{
    delete (wxButton *)(wTheCall->self->ptr);
}


// wxButton(wxWindow *parent, wxWindowID id, const wxString& label, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = 0, const wxValidator& validator = wxDefaultValidator, const wxString& name = wxButtonNameStr)
void wxButton_new() {
    wxString name = wxString((wTheCall->parmCount > 7 ? wStackPopChar() : wxButtonNameStr), *wxConvCurrent);
    const wxValidator *validator = (wTheCall->parmCount > 6 ? (wxValidator *)wStackPopObjectPtr( _wxValidator) : &wxDefaultValidator);
    long style = (wTheCall->parmCount > 5 ? (long)wStackPopNumber() : 0);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 3 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxString label = wxString(wStackPopChar(), *wxConvCurrent);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxButton *returns = new wxButton(parent, id, label, *pos, *size, style, *validator, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxButton, (void *)returns );
}

// ~wxButton()
void wxButton_finalize() {
    ((wxButton *)(wTheCall->self->ptr))->~wxButton();
}

// bool Create(wxWindow *parent, wxWindowID id, const wxString& label, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = 0, const wxValidator& validator = wxDefaultValidator, const wxString& name = wxButtonNameStr)
void wxButton_Create() {
    wxString name = wxString((wTheCall->parmCount > 7 ? wStackPopChar() : wxButtonNameStr), *wxConvCurrent);
    const wxValidator *validator = (wTheCall->parmCount > 6 ? (wxValidator *)wStackPopObjectPtr( _wxValidator) : &wxDefaultValidator);
    long style = (wTheCall->parmCount > 5 ? (long)wStackPopNumber() : 0);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 3 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxString label = wxString(wStackPopChar(), *wxConvCurrent);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxButton *)(wTheCall->self->ptr))->Create(parent, id, label, *pos, *size, style, *validator, name);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// wxString GetLabel() const
void wxButton_GetLabel() {
    wxString returns = ((wxButton *)(wTheCall->self->ptr))->GetLabel();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxSize GetDefaultSize()
void wxButton_GetDefaultSize() {
    // make a pointer via copy constructor
    wxSize *returns = new wxSize(((wxButton *)(wTheCall->self->ptr))->GetDefaultSize());
    wWrapPushObject( _wxSize, W_TRUE, (void *)returns );
}

// void SetDefault()
void wxButton_SetDefault() {
    ((wxButton *)(wTheCall->self->ptr))->SetDefault();
}

// void SetLabel(const wxString& label)
void wxButton_SetLabel() {
    wxString label = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxButton *)(wTheCall->self->ptr))->SetLabel(label);
    wWrapDerefArgs();
}

void wxBitmapButton_del()
{
    delete (wxBitmapButton *)(wTheCall->self->ptr);
}


// wxBitmapButton( wxWindow* parent, wxWindowID id, const wxBitmap& bitmap, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxBU_AUTODRAW, const wxValidator& validator = wxDefaultValidator, const wxString& name = "button")
void wxBitmapButton_new() {
    wxString name = wxString((wTheCall->parmCount > 7 ? wStackPopChar() : "button"), *wxConvCurrent);
    const wxValidator *validator = (wTheCall->parmCount > 6 ? (wxValidator *)wStackPopObjectPtr( _wxValidator) : &wxDefaultValidator);
    long style = (wTheCall->parmCount > 5 ? (long)wStackPopNumber() : wxBU_AUTODRAW);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 3 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxBitmap *bitmap = (wxBitmap *)wStackPopObjectPtr( _wxBitmap);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxBitmapButton *returns = new wxBitmapButton(parent, id, *bitmap, *pos, *size, style, *validator, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxBitmapButton, (void *)returns );
}

// ~wxBitmapButton()
void wxBitmapButton_finalize() {
    ((wxBitmapButton *)(wTheCall->self->ptr))->~wxBitmapButton();
}

// bool Create(wxWindow* parent, wxWindowID id, const wxBitmap& bitmap, const wxPoint& pos, const wxSize& size = wxDefaultSize, long style = 0, const wxValidator& validator = wxDefaultValidator, const wxString& name = "button")
void wxBitmapButton_Create() {
    wxString name = wxString((wTheCall->parmCount > 7 ? wStackPopChar() : "button"), *wxConvCurrent);
    const wxValidator *validator = (wTheCall->parmCount > 6 ? (wxValidator *)wStackPopObjectPtr( _wxValidator) : &wxDefaultValidator);
    long style = (wTheCall->parmCount > 5 ? (long)wStackPopNumber() : 0);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    wxPoint *pos = (wxPoint *)wStackPopObjectPtr( _wxPoint);
    wxBitmap *bitmap = (wxBitmap *)wStackPopObjectPtr( _wxBitmap);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxBitmapButton *)(wTheCall->self->ptr))->Create(parent, id, *bitmap, *pos, *size, style, *validator, name);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// wxBitmap& GetBitmapDisabled() const
void wxBitmapButton_GetBitmapDisabled() {
    wxBitmap *returns = &((wxBitmapButton *)(wTheCall->self->ptr))->GetBitmapDisabled();
    wWrapPushObject( _wxBitmap, W_TRUE, (void *)returns );
}

// wxBitmap& GetBitmapFocus() const
void wxBitmapButton_GetBitmapFocus() {
    wxBitmap *returns = &((wxBitmapButton *)(wTheCall->self->ptr))->GetBitmapFocus();
    wWrapPushObject( _wxBitmap, W_TRUE, (void *)returns );
}

// wxBitmap& GetBitmapLabel() const
void wxBitmapButton_GetBitmapLabel() {
    wxBitmap *returns = &((wxBitmapButton *)(wTheCall->self->ptr))->GetBitmapLabel();
    wWrapPushObject( _wxBitmap, W_TRUE, (void *)returns );
}

// wxBitmap& GetBitmapSelected() const
void wxBitmapButton_GetBitmapSelected() {
    wxBitmap *returns = &((wxBitmapButton *)(wTheCall->self->ptr))->GetBitmapSelected();
    wWrapPushObject( _wxBitmap, W_TRUE, (void *)returns );
}

// void SetBitmapDisabled(const wxBitmap& bitmap)
void wxBitmapButton_SetBitmapDisabled() {
    wxBitmap *bitmap = (wxBitmap *)wStackPopObjectPtr( _wxBitmap);
    ((wxBitmapButton *)(wTheCall->self->ptr))->SetBitmapDisabled(*bitmap);
    wWrapDerefArgs();
}

// void SetBitmapFocus(const wxBitmap& bitmap)
void wxBitmapButton_SetBitmapFocus() {
    wxBitmap *bitmap = (wxBitmap *)wStackPopObjectPtr( _wxBitmap);
    ((wxBitmapButton *)(wTheCall->self->ptr))->SetBitmapFocus(*bitmap);
    wWrapDerefArgs();
}

// void SetBitmapLabel(const wxBitmap& bitmap)
void wxBitmapButton_SetBitmapLabel() {
    wxBitmap *bitmap = (wxBitmap *)wStackPopObjectPtr( _wxBitmap);
    ((wxBitmapButton *)(wTheCall->self->ptr))->SetBitmapLabel(*bitmap);
    wWrapDerefArgs();
}

// void SetBitmapSelected(const wxBitmap& bitmap)
void wxBitmapButton_SetBitmapSelected() {
    wxBitmap *bitmap = (wxBitmap *)wStackPopObjectPtr( _wxBitmap);
    ((wxBitmapButton *)(wTheCall->self->ptr))->SetBitmapSelected(*bitmap);
    wWrapDerefArgs();
}

void wxDateTime_del()
{
    delete (wxDateTime *)(wTheCall->self->ptr);
}


// wxDateTime()
void wxDateTime_new() {
    wxDateTime *returns = new wxDateTime();
    wWrapSetThis( _wxDateTime, (void *)returns );
}

// wxDateTime& SetToCurrent()
void wxDateTime_SetToCurrent() {
    wxDateTime *returns = &((wxDateTime *)(wTheCall->self->ptr))->SetToCurrent();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// %rename SetTimeT wxDateTime& Set(time_t timet)
void wxDateTime_SetTimeT() {
    time_t timet = (time_t)wStackPopNumber();
    wxDateTime *returns = &((wxDateTime *)(wTheCall->self->ptr))->Set(timet);
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// %rename SetJDN wxDateTime& Set(double jdn)
void wxDateTime_SetJDN() {
    double jdn = (double)wStackPopNumber();
    wxDateTime *returns = &((wxDateTime *)(wTheCall->self->ptr))->Set(jdn);
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// %rename SetHMS wxDateTime& Set(wxDateTime_t hour, wxDateTime_t minute = 0, wxDateTime_t second = 0, wxDateTime_t millisec = 0)
void wxDateTime_SetHMS() {
    time_t millisec = (wTheCall->parmCount > 3 ? (time_t)wStackPopNumber() : 0);
    time_t second = (wTheCall->parmCount > 2 ? (time_t)wStackPopNumber() : 0);
    time_t minute = (wTheCall->parmCount > 1 ? (time_t)wStackPopNumber() : 0);
    time_t hour = (time_t)wStackPopNumber();
    wxDateTime *returns = &((wxDateTime *)(wTheCall->self->ptr))->Set(hour, minute, second, millisec);
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// wxDateTime& Set(wxDateTime_t day, wxDateTime::Month month = wxDateTime::Inv_Month, int year = wxDateTime::Inv_Year, wxDateTime_t hour = 0, wxDateTime_t minute = 0, wxDateTime_t second = 0, wxDateTime_t millisec = 0)
void wxDateTime_Set() {
    time_t millisec = (wTheCall->parmCount > 6 ? (time_t)wStackPopNumber() : 0);
    time_t second = (wTheCall->parmCount > 5 ? (time_t)wStackPopNumber() : 0);
    time_t minute = (wTheCall->parmCount > 4 ? (time_t)wStackPopNumber() : 0);
    time_t hour = (wTheCall->parmCount > 3 ? (time_t)wStackPopNumber() : 0);
    int year = (wTheCall->parmCount > 2 ? (int)wStackPopNumber() : wxDateTime::Inv_Year);
    wxDateTime::Month month = (wTheCall->parmCount > 1 ? (wxDateTime::Month)(int)wStackPopNumber() : wxDateTime::Inv_Month);
    time_t day = (time_t)wStackPopNumber();
    wxDateTime *returns = &((wxDateTime *)(wTheCall->self->ptr))->Set(day, (wxDateTime::Month)month, year, hour, minute, second, millisec);
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// wxDateTime& ResetTime()
void wxDateTime_ResetTime() {
    wxDateTime *returns = &((wxDateTime *)(wTheCall->self->ptr))->ResetTime();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// wxDateTime& SetYear(int year)
void wxDateTime_SetYear() {
    int year = (int)wStackPopNumber();
    wxDateTime *returns = &((wxDateTime *)(wTheCall->self->ptr))->SetYear(year);
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// wxDateTime& SetMonth(wxDateTime::Month month)
void wxDateTime_SetMonth() {
    wxDateTime::Month month = (wxDateTime::Month)(int)wStackPopNumber();
    wxDateTime *returns = &((wxDateTime *)(wTheCall->self->ptr))->SetMonth((wxDateTime::Month)month);
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// wxDateTime& SetDay(wxDateTime_t day)
void wxDateTime_SetDay() {
    time_t day = (time_t)wStackPopNumber();
    wxDateTime *returns = &((wxDateTime *)(wTheCall->self->ptr))->SetDay(day);
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// wxDateTime& SetHour(wxDateTime_t hour)
void wxDateTime_SetHour() {
    time_t hour = (time_t)wStackPopNumber();
    wxDateTime *returns = &((wxDateTime *)(wTheCall->self->ptr))->SetHour(hour);
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// wxDateTime& SetMinute(wxDateTime_t minute)
void wxDateTime_SetMinute() {
    time_t minute = (time_t)wStackPopNumber();
    wxDateTime *returns = &((wxDateTime *)(wTheCall->self->ptr))->SetMinute(minute);
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// wxDateTime& SetSecond(wxDateTime_t second)
void wxDateTime_SetSecond() {
    time_t second = (time_t)wStackPopNumber();
    wxDateTime *returns = &((wxDateTime *)(wTheCall->self->ptr))->SetSecond(second);
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// wxDateTime& SetMillisecond(wxDateTime_t millisecond)
void wxDateTime_SetMillisecond() {
    time_t millisecond = (time_t)wStackPopNumber();
    wxDateTime *returns = &((wxDateTime *)(wTheCall->self->ptr))->SetMillisecond(millisecond);
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// bool IsValid() const
void wxDateTime_IsValid() {
    bool returns = ((wxDateTime *)(wTheCall->self->ptr))->IsValid();
    wStackPushNumber( (wNumber)returns);
}

// time_t GetTicks() const
void wxDateTime_GetTicks() {
    time_t returns = ((wxDateTime *)(wTheCall->self->ptr))->GetTicks();
    wStackPushDateTime( returns );
}

// int GetYear(const TimeZone tz = wxDateTime::Local) const
void wxDateTime_GetYear() {
    const double tz = (wTheCall->parmCount > 0 ? (double)wStackPopNumber() : wxDateTime::Local);
    int returns = ((wxDateTime *)(wTheCall->self->ptr))->GetYear(tz);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int GetMonth(const TimeZone tz = wxDateTime::Local) const
void wxDateTime_GetMonth() {
    const double tz = (wTheCall->parmCount > 0 ? (double)wStackPopNumber() : wxDateTime::Local);
    int returns = ((wxDateTime *)(wTheCall->self->ptr))->GetMonth(tz);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// wxDateTime_t GetDay(const TimeZone tz = wxDateTime::Local) const
void wxDateTime_GetDay() {
    const double tz = (wTheCall->parmCount > 0 ? (double)wStackPopNumber() : wxDateTime::Local);
    time_t returns = ((wxDateTime *)(wTheCall->self->ptr))->GetDay(tz);
    wWrapDerefArgs();
    wStackPushDateTime( returns );
}

// %rename GetWeekDayTZ wxDateTime::WeekDay GetWeekDay(const TimeZone tz = wxDateTime::Local) const
void wxDateTime_GetWeekDayTZ() {
    const double tz = (wTheCall->parmCount > 0 ? (double)wStackPopNumber() : wxDateTime::Local);
    wxDateTime::WeekDay returns = ((wxDateTime *)(wTheCall->self->ptr))->GetWeekDay(tz);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// wxDateTime_t GetHour(const TimeZone tz = wxDateTime::Local) const
void wxDateTime_GetHour() {
    const double tz = (wTheCall->parmCount > 0 ? (double)wStackPopNumber() : wxDateTime::Local);
    time_t returns = ((wxDateTime *)(wTheCall->self->ptr))->GetHour(tz);
    wWrapDerefArgs();
    wStackPushDateTime( returns );
}

// wxDateTime_t GetMinute(const TimeZone tz = wxDateTime::Local) const
void wxDateTime_GetMinute() {
    const double tz = (wTheCall->parmCount > 0 ? (double)wStackPopNumber() : wxDateTime::Local);
    time_t returns = ((wxDateTime *)(wTheCall->self->ptr))->GetMinute(tz);
    wWrapDerefArgs();
    wStackPushDateTime( returns );
}

// wxDateTime_t GetSecond(const TimeZone tz = wxDateTime::Local) const
void wxDateTime_GetSecond() {
    const double tz = (wTheCall->parmCount > 0 ? (double)wStackPopNumber() : wxDateTime::Local);
    time_t returns = ((wxDateTime *)(wTheCall->self->ptr))->GetSecond(tz);
    wWrapDerefArgs();
    wStackPushDateTime( returns );
}

// wxDateTime_t GetMillisecond(const TimeZone tz = wxDateTime::Local) const
void wxDateTime_GetMillisecond() {
    const double tz = (wTheCall->parmCount > 0 ? (double)wStackPopNumber() : wxDateTime::Local);
    time_t returns = ((wxDateTime *)(wTheCall->self->ptr))->GetMillisecond(tz);
    wWrapDerefArgs();
    wStackPushDateTime( returns );
}

// wxDateTime_t GetDayOfYear(const TimeZone tz = wxDateTime::Local) const
void wxDateTime_GetDayOfYear() {
    const double tz = (wTheCall->parmCount > 0 ? (double)wStackPopNumber() : wxDateTime::Local);
    time_t returns = ((wxDateTime *)(wTheCall->self->ptr))->GetDayOfYear(tz);
    wWrapDerefArgs();
    wStackPushDateTime( returns );
}

// wxDateTime_t GetWeekOfYear(wxDateTime::WeekFlags flags = wxDateTime::Monday_First, const TimeZone tz = wxDateTime::Local) const
void wxDateTime_GetWeekOfYear() {
    const double tz = (wTheCall->parmCount > 1 ? (double)wStackPopNumber() : wxDateTime::Local);
    wxDateTime::WeekFlags flags = (wTheCall->parmCount > 0 ? (wxDateTime::WeekFlags)wStackPopNumber() : wxDateTime::Monday_First);
    time_t returns = ((wxDateTime *)(wTheCall->self->ptr))->GetWeekOfYear(flags, tz);
    wWrapDerefArgs();
    wStackPushDateTime( returns );
}

// wxDateTime_t GetWeekOfMonth(wxDateTime::WeekFlags flags = wxDateTime::Monday_First, const TimeZone tz = wxDateTime::Local) const
void wxDateTime_GetWeekOfMonth() {
    const double tz = (wTheCall->parmCount > 1 ? (double)wStackPopNumber() : wxDateTime::Local);
    wxDateTime::WeekFlags flags = (wTheCall->parmCount > 0 ? (wxDateTime::WeekFlags)wStackPopNumber() : wxDateTime::Monday_First);
    time_t returns = ((wxDateTime *)(wTheCall->self->ptr))->GetWeekOfMonth(flags, tz);
    wWrapDerefArgs();
    wStackPushDateTime( returns );
}

// bool IsWorkDay(wxDateTime::Country country = wxDateTime::Country_Default) const
void wxDateTime_IsWorkDay() {
    wxDateTime::Country country = (wTheCall->parmCount > 0 ? (wxDateTime::Country)(int)wStackPopNumber() : wxDateTime::Country_Default);
    bool returns = ((wxDateTime *)(wTheCall->self->ptr))->IsWorkDay((wxDateTime::Country)country);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// wxDateTime& SetFromDOS(unsigned long ddt)
void wxDateTime_SetFromDOS() {
    unsigned long ddt = (unsigned long)wStackPopNumber();
    wxDateTime *returns = &((wxDateTime *)(wTheCall->self->ptr))->SetFromDOS(ddt);
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// unsigned long GetAsDOS() const
void wxDateTime_GetAsDOS() {
    unsigned long returns = ((wxDateTime *)(wTheCall->self->ptr))->GetAsDOS();
    wStackPushNumber( (wNumber)returns);
}

// bool IsEqualTo(const wxDateTime& datetime) const
void wxDateTime_IsEqualTo() {
    wxDateTime *datetime = (wxDateTime *)wStackPopObjectPtr( _wxDateTime);
    bool returns = ((wxDateTime *)(wTheCall->self->ptr))->IsEqualTo(*datetime);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool IsEarlierThan(const wxDateTime& datetime) const
void wxDateTime_IsEarlierThan() {
    wxDateTime *datetime = (wxDateTime *)wStackPopObjectPtr( _wxDateTime);
    bool returns = ((wxDateTime *)(wTheCall->self->ptr))->IsEarlierThan(*datetime);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool IsLaterThan(const wxDateTime& datetime) const
void wxDateTime_IsLaterThan() {
    wxDateTime *datetime = (wxDateTime *)wStackPopObjectPtr( _wxDateTime);
    bool returns = ((wxDateTime *)(wTheCall->self->ptr))->IsLaterThan(*datetime);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool IsStrictlyBetween(const wxDateTime& t1, const wxDateTime& t2) const
void wxDateTime_IsStrictlyBetween() {
    wxDateTime *t2 = (wxDateTime *)wStackPopObjectPtr( _wxDateTime);
    wxDateTime *t1 = (wxDateTime *)wStackPopObjectPtr( _wxDateTime);
    bool returns = ((wxDateTime *)(wTheCall->self->ptr))->IsStrictlyBetween(*t1, *t2);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool IsBetween(const wxDateTime& t1, const wxDateTime& t2) const
void wxDateTime_IsBetween() {
    wxDateTime *t2 = (wxDateTime *)wStackPopObjectPtr( _wxDateTime);
    wxDateTime *t1 = (wxDateTime *)wStackPopObjectPtr( _wxDateTime);
    bool returns = ((wxDateTime *)(wTheCall->self->ptr))->IsBetween(*t1, *t2);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool IsSameDate(const wxDateTime& dt) const
void wxDateTime_IsSameDate() {
    wxDateTime *dt = (wxDateTime *)wStackPopObjectPtr( _wxDateTime);
    bool returns = ((wxDateTime *)(wTheCall->self->ptr))->IsSameDate(*dt);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool IsSameTime(const wxDateTime& dt) const
void wxDateTime_IsSameTime() {
    wxDateTime *dt = (wxDateTime *)wStackPopObjectPtr( _wxDateTime);
    bool returns = ((wxDateTime *)(wTheCall->self->ptr))->IsSameTime(*dt);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool IsEqualUpTo(const wxDateTime& dt, const wxTimeSpan& ts) const
void wxDateTime_IsEqualUpTo() {
    wxTimeSpan *ts = (wxTimeSpan *)wStackPopObjectPtr( _wxTimeSpan);
    wxDateTime *dt = (wxDateTime *)wStackPopObjectPtr( _wxDateTime);
    bool returns = ((wxDateTime *)(wTheCall->self->ptr))->IsEqualUpTo(*dt, *ts);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %rename AddTS wxDateTime Add(const wxTimeSpan& diff) const
void wxDateTime_AddTS() {
    wxTimeSpan *diff = (wxTimeSpan *)wStackPopObjectPtr( _wxTimeSpan);
    // make a pointer via copy constructor
    wxDateTime *returns = new wxDateTime(((wxDateTime *)(wTheCall->self->ptr))->Add(*diff));
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// %rename SubtractTS wxDateTime Subtract(const wxTimeSpan& diff) const
void wxDateTime_SubtractTS() {
    wxTimeSpan *diff = (wxTimeSpan *)wStackPopObjectPtr( _wxTimeSpan);
    // make a pointer via copy constructor
    wxDateTime *returns = new wxDateTime(((wxDateTime *)(wTheCall->self->ptr))->Subtract(*diff));
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// %rename AddDS wxDateTime Add(const wxDateSpan& diff) const
void wxDateTime_AddDS() {
    wxDateSpan *diff = (wxDateSpan *)wStackPopObjectPtr( _wxDateSpan);
    // make a pointer via copy constructor
    wxDateTime *returns = new wxDateTime(((wxDateTime *)(wTheCall->self->ptr))->Add(*diff));
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// %rename SubtractDS wxDateTime Subtract(const wxDateSpan& diff) const
void wxDateTime_SubtractDS() {
    wxDateSpan *diff = (wxDateSpan *)wStackPopObjectPtr( _wxDateSpan);
    // make a pointer via copy constructor
    wxDateTime *returns = new wxDateTime(((wxDateTime *)(wTheCall->self->ptr))->Subtract(*diff));
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// wxTimeSpan Subtract(const wxDateTime& dt) const
void wxDateTime_Subtract() {
    wxDateTime *dt = (wxDateTime *)wStackPopObjectPtr( _wxDateTime);
    // make a pointer via copy constructor
    wxTimeSpan *returns = new wxTimeSpan(((wxDateTime *)(wTheCall->self->ptr))->Subtract(*dt));
    wWrapDerefArgs();
    wWrapPushObject( _wxTimeSpan, W_TRUE, (void *)returns );
}

// wxString ParseRfc822Date(const char* date)
void wxDateTime_ParseRfc822Date() {
    char *date = (char *)wStackPopObjectPtr( NULL );
    wxString returns = ((wxDateTime *)(wTheCall->self->ptr))->ParseRfc822Date(date);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxString ParseFormat(const char *date, const char *format = "%c", const wxDateTime& dateDef = wxDefaultDateTime)
void wxDateTime_ParseFormat() {
    const wxDateTime *dateDef = (wTheCall->parmCount > 2 ? (wxDateTime *)wStackPopObjectPtr( _wxDateTime) : &wxDefaultDateTime);
    const char *format = (wTheCall->parmCount > 1 ? (char *)wStackPopObjectPtr( NULL ) : "%c");
    char *date = (char *)wStackPopObjectPtr( NULL );
    wxString returns = ((wxDateTime *)(wTheCall->self->ptr))->ParseFormat(date, format, *dateDef);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxString ParseDateTime(const char *datetime)
void wxDateTime_ParseDateTime() {
    char *datetime = (char *)wStackPopObjectPtr( NULL );
    wxString returns = ((wxDateTime *)(wTheCall->self->ptr))->ParseDateTime(datetime);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxString ParseDate(const char *date)
void wxDateTime_ParseDate() {
    char *date = (char *)wStackPopObjectPtr( NULL );
    wxString returns = ((wxDateTime *)(wTheCall->self->ptr))->ParseDate(date);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxString ParseTime(const char *time)
void wxDateTime_ParseTime() {
    char *time = (char *)wStackPopObjectPtr( NULL );
    wxString returns = ((wxDateTime *)(wTheCall->self->ptr))->ParseTime(time);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxString Format(const char *format = "%c", const TimeZone tz = wxDateTime::Local) const
void wxDateTime_Format() {
    const double tz = (wTheCall->parmCount > 1 ? (double)wStackPopNumber() : wxDateTime::Local);
    const char *format = (wTheCall->parmCount > 0 ? (char *)wStackPopObjectPtr( NULL ) : "%c");
    wxString returns = ((wxDateTime *)(wTheCall->self->ptr))->Format(format, tz);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxString FormatDate() const
void wxDateTime_FormatDate() {
    wxString returns = ((wxDateTime *)(wTheCall->self->ptr))->FormatDate();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxString FormatTime() const
void wxDateTime_FormatTime() {
    wxString returns = ((wxDateTime *)(wTheCall->self->ptr))->FormatTime();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxString FormatISODate() const
void wxDateTime_FormatISODate() {
    wxString returns = ((wxDateTime *)(wTheCall->self->ptr))->FormatISODate();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxString FormatISOTime() const
void wxDateTime_FormatISOTime() {
    wxString returns = ((wxDateTime *)(wTheCall->self->ptr))->FormatISOTime();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxDateTime& SetToWeekDayInSameWeek(wxDateTime::WeekDay weekday, wxDateTime::WeekFlags flags = wxDateTime::Monday_First)
void wxDateTime_SetToWeekDayInSameWeek() {
    wxDateTime::WeekFlags flags = (wTheCall->parmCount > 1 ? (wxDateTime::WeekFlags)wStackPopNumber() : wxDateTime::Monday_First);
    wxDateTime::WeekDay weekday = (wxDateTime::WeekDay)(int)wStackPopNumber();
    wxDateTime *returns = &((wxDateTime *)(wTheCall->self->ptr))->SetToWeekDayInSameWeek((wxDateTime::WeekDay)weekday, flags);
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// wxDateTime GetWeekDayInSameWeek(wxDateTime::WeekDay weekday, wxDateTime::WeekFlags flags = wxDateTime::Monday_First) const
void wxDateTime_GetWeekDayInSameWeek() {
    wxDateTime::WeekFlags flags = (wTheCall->parmCount > 1 ? (wxDateTime::WeekFlags)wStackPopNumber() : wxDateTime::Monday_First);
    wxDateTime::WeekDay weekday = (wxDateTime::WeekDay)(int)wStackPopNumber();
    // make a pointer via copy constructor
    wxDateTime *returns = new wxDateTime(((wxDateTime *)(wTheCall->self->ptr))->GetWeekDayInSameWeek((wxDateTime::WeekDay)weekday, flags));
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// wxDateTime& SetToNextWeekDay(wxDateTime::WeekDay weekday)
void wxDateTime_SetToNextWeekDay() {
    wxDateTime::WeekDay weekday = (wxDateTime::WeekDay)(int)wStackPopNumber();
    wxDateTime *returns = &((wxDateTime *)(wTheCall->self->ptr))->SetToNextWeekDay((wxDateTime::WeekDay)weekday);
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// wxDateTime GetNextWeekDay(wxDateTime::WeekDay weekday) const
void wxDateTime_GetNextWeekDay() {
    wxDateTime::WeekDay weekday = (wxDateTime::WeekDay)(int)wStackPopNumber();
    // make a pointer via copy constructor
    wxDateTime *returns = new wxDateTime(((wxDateTime *)(wTheCall->self->ptr))->GetNextWeekDay((wxDateTime::WeekDay)weekday));
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// wxDateTime& SetToPrevWeekDay(wxDateTime::WeekDay weekday)
void wxDateTime_SetToPrevWeekDay() {
    wxDateTime::WeekDay weekday = (wxDateTime::WeekDay)(int)wStackPopNumber();
    wxDateTime *returns = &((wxDateTime *)(wTheCall->self->ptr))->SetToPrevWeekDay((wxDateTime::WeekDay)weekday);
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// wxDateTime GetPrevWeekDay(wxDateTime::WeekDay weekday) const
void wxDateTime_GetPrevWeekDay() {
    wxDateTime::WeekDay weekday = (wxDateTime::WeekDay)(int)wStackPopNumber();
    // make a pointer via copy constructor
    wxDateTime *returns = new wxDateTime(((wxDateTime *)(wTheCall->self->ptr))->GetPrevWeekDay((wxDateTime::WeekDay)weekday));
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// bool SetToWeekDay(wxDateTime::WeekDay weekday, int n = 1, wxDateTime::Month month = wxDateTime::Inv_Month, int year = wxDateTime::Inv_Year)
void wxDateTime_SetToWeekDay() {
    int year = (wTheCall->parmCount > 3 ? (int)wStackPopNumber() : wxDateTime::Inv_Year);
    wxDateTime::Month month = (wTheCall->parmCount > 2 ? (wxDateTime::Month)(int)wStackPopNumber() : wxDateTime::Inv_Month);
    int n = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : 1);
    wxDateTime::WeekDay weekday = (wxDateTime::WeekDay)(int)wStackPopNumber();
    bool returns = ((wxDateTime *)(wTheCall->self->ptr))->SetToWeekDay((wxDateTime::WeekDay)weekday, n, (wxDateTime::Month)month, year);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// wxDateTime GetWeekDay(wxDateTime::WeekDay weekday, int n = 1, wxDateTime::Month month = wxDateTime::Inv_Month, int year = wxDateTime::Inv_Year) const
void wxDateTime_GetWeekDay() {
    int year = (wTheCall->parmCount > 3 ? (int)wStackPopNumber() : wxDateTime::Inv_Year);
    wxDateTime::Month month = (wTheCall->parmCount > 2 ? (wxDateTime::Month)(int)wStackPopNumber() : wxDateTime::Inv_Month);
    int n = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : 1);
    wxDateTime::WeekDay weekday = (wxDateTime::WeekDay)(int)wStackPopNumber();
    // make a pointer via copy constructor
    wxDateTime *returns = new wxDateTime(((wxDateTime *)(wTheCall->self->ptr))->GetWeekDay((wxDateTime::WeekDay)weekday, n, (wxDateTime::Month)month, year));
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// bool SetToLastWeekDay(wxDateTime::WeekDay weekday, wxDateTime::Month month = wxDateTime::Inv_Month, int year = wxDateTime::Inv_Year)
void wxDateTime_SetToLastWeekDay() {
    int year = (wTheCall->parmCount > 2 ? (int)wStackPopNumber() : wxDateTime::Inv_Year);
    wxDateTime::Month month = (wTheCall->parmCount > 1 ? (wxDateTime::Month)(int)wStackPopNumber() : wxDateTime::Inv_Month);
    wxDateTime::WeekDay weekday = (wxDateTime::WeekDay)(int)wStackPopNumber();
    bool returns = ((wxDateTime *)(wTheCall->self->ptr))->SetToLastWeekDay((wxDateTime::WeekDay)weekday, (wxDateTime::Month)month, year);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// wxDateTime GetLastWeekDay(wxDateTime::WeekDay weekday, wxDateTime::Month month = wxDateTime::Inv_Month, int year = wxDateTime::Inv_Year)
void wxDateTime_GetLastWeekDay() {
    int year = (wTheCall->parmCount > 2 ? (int)wStackPopNumber() : wxDateTime::Inv_Year);
    wxDateTime::Month month = (wTheCall->parmCount > 1 ? (wxDateTime::Month)(int)wStackPopNumber() : wxDateTime::Inv_Month);
    wxDateTime::WeekDay weekday = (wxDateTime::WeekDay)(int)wStackPopNumber();
    // make a pointer via copy constructor
    wxDateTime *returns = new wxDateTime(((wxDateTime *)(wTheCall->self->ptr))->GetLastWeekDay((wxDateTime::WeekDay)weekday, (wxDateTime::Month)month, year));
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// bool SetToTheWeek(wxDateTime_t numWeek, wxDateTime::WeekDay weekday = wxDateTime::Mon, wxDateTime::WeekFlags flags = wxDateTime::Monday_First)
void wxDateTime_SetToTheWeek() {
    wxDateTime::WeekFlags flags = (wTheCall->parmCount > 2 ? (wxDateTime::WeekFlags)wStackPopNumber() : wxDateTime::Monday_First);
    wxDateTime::WeekDay weekday = (wTheCall->parmCount > 1 ? (wxDateTime::WeekDay)(int)wStackPopNumber() : wxDateTime::Mon);
    time_t numWeek = (time_t)wStackPopNumber();
    bool returns = ((wxDateTime *)(wTheCall->self->ptr))->SetToTheWeek(numWeek, (wxDateTime::WeekDay)weekday, flags);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// wxDateTime GetWeek(wxDateTime_t numWeek, wxDateTime::WeekDay weekday = wxDateTime::Mon, wxDateTime::WeekFlags flags = wxDateTime::Monday_First) const
void wxDateTime_GetWeek() {
    wxDateTime::WeekFlags flags = (wTheCall->parmCount > 2 ? (wxDateTime::WeekFlags)wStackPopNumber() : wxDateTime::Monday_First);
    wxDateTime::WeekDay weekday = (wTheCall->parmCount > 1 ? (wxDateTime::WeekDay)(int)wStackPopNumber() : wxDateTime::Mon);
    time_t numWeek = (time_t)wStackPopNumber();
    // make a pointer via copy constructor
    wxDateTime *returns = new wxDateTime(((wxDateTime *)(wTheCall->self->ptr))->GetWeek(numWeek, (wxDateTime::WeekDay)weekday, flags));
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// wxDateTime& SetToLastMonthDay(wxDateTime::Month month = wxDateTime::Inv_Month, int year = wxDateTime::Inv_Year)
void wxDateTime_SetToLastMonthDay() {
    int year = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : wxDateTime::Inv_Year);
    wxDateTime::Month month = (wTheCall->parmCount > 0 ? (wxDateTime::Month)(int)wStackPopNumber() : wxDateTime::Inv_Month);
    wxDateTime *returns = &((wxDateTime *)(wTheCall->self->ptr))->SetToLastMonthDay((wxDateTime::Month)month, year);
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// wxDateTime GetLastMonthDay(wxDateTime::Month month = wxDateTime::Inv_Month, int year = wxDateTime::Inv_Year) const
void wxDateTime_GetLastMonthDay() {
    int year = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : wxDateTime::Inv_Year);
    wxDateTime::Month month = (wTheCall->parmCount > 0 ? (wxDateTime::Month)(int)wStackPopNumber() : wxDateTime::Inv_Month);
    // make a pointer via copy constructor
    wxDateTime *returns = new wxDateTime(((wxDateTime *)(wTheCall->self->ptr))->GetLastMonthDay((wxDateTime::Month)month, year));
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// wxDateTime& SetToYearDay(wxDateTime_t yday)
void wxDateTime_SetToYearDay() {
    time_t yday = (time_t)wStackPopNumber();
    wxDateTime *returns = &((wxDateTime *)(wTheCall->self->ptr))->SetToYearDay(yday);
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// wxDateTime GetYearDay(wxDateTime_t yday) const
void wxDateTime_GetYearDay() {
    time_t yday = (time_t)wStackPopNumber();
    // make a pointer via copy constructor
    wxDateTime *returns = new wxDateTime(((wxDateTime *)(wTheCall->self->ptr))->GetYearDay(yday));
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// double GetJulianDayNumber() const
void wxDateTime_GetJulianDayNumber() {
    double returns = ((wxDateTime *)(wTheCall->self->ptr))->GetJulianDayNumber();
    wStackPushNumber( (wNumber)returns);
}

// double GetJDN() const
void wxDateTime_GetJDN() {
    double returns = ((wxDateTime *)(wTheCall->self->ptr))->GetJDN();
    wStackPushNumber( (wNumber)returns);
}

// double GetModifiedJulianDayNumber() const
void wxDateTime_GetModifiedJulianDayNumber() {
    double returns = ((wxDateTime *)(wTheCall->self->ptr))->GetModifiedJulianDayNumber();
    wStackPushNumber( (wNumber)returns);
}

// double GetMJD() const
void wxDateTime_GetMJD() {
    double returns = ((wxDateTime *)(wTheCall->self->ptr))->GetMJD();
    wStackPushNumber( (wNumber)returns);
}

// double GetRataDie() const
void wxDateTime_GetRataDie() {
    double returns = ((wxDateTime *)(wTheCall->self->ptr))->GetRataDie();
    wStackPushNumber( (wNumber)returns);
}

// wxDateTime ToTimezone(const TimeZone tz, bool noDST = FALSE) const
void wxDateTime_ToTimezone() {
    bool noDST = (wTheCall->parmCount > 1 ? (bool)wStackPopNumber() : FALSE);
    double tz = (double)wStackPopNumber();
    // make a pointer via copy constructor
    wxDateTime *returns = new wxDateTime(((wxDateTime *)(wTheCall->self->ptr))->ToTimezone(tz, noDST));
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// wxDateTime& MakeTimezone(const TimeZone tz, bool noDST = FALSE)
void wxDateTime_MakeTimezone() {
    bool noDST = (wTheCall->parmCount > 1 ? (bool)wStackPopNumber() : FALSE);
    double tz = (double)wStackPopNumber();
    wxDateTime *returns = &((wxDateTime *)(wTheCall->self->ptr))->MakeTimezone(tz, noDST);
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// wxDateTime ToGMT(bool noDST = FALSE) const
void wxDateTime_ToGMT() {
    bool noDST = (wTheCall->parmCount > 0 ? (bool)wStackPopNumber() : FALSE);
    // make a pointer via copy constructor
    wxDateTime *returns = new wxDateTime(((wxDateTime *)(wTheCall->self->ptr))->ToGMT(noDST));
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// wxDateTime& MakeGMT(bool noDST = FALSE)
void wxDateTime_MakeGMT() {
    bool noDST = (wTheCall->parmCount > 0 ? (bool)wStackPopNumber() : FALSE);
    wxDateTime *returns = &((wxDateTime *)(wTheCall->self->ptr))->MakeGMT(noDST);
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// int IsDST(wxDateTime::Country country = wxDateTime::Country_Default) const
void wxDateTime_IsDST() {
    wxDateTime::Country country = (wTheCall->parmCount > 0 ? (wxDateTime::Country)(int)wStackPopNumber() : wxDateTime::Country_Default);
    int returns = ((wxDateTime *)(wTheCall->self->ptr))->IsDST((wxDateTime::Country)country);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %builtin %rename wxDateTime_ConvertYearToBC static int wxDateTime::ConvertYearToBC(int year)
void builtin_wxDateTime_ConvertYearToBC() {
    int year = (int)wStackPopNumber();
    int returns = wxDateTime::ConvertYearToBC(year);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %builtin %rename wxDateTime_GetBeginDST static wxDateTime wxDateTime::GetBeginDST(int year = wxDateTime::Inv_Year, wxDateTime::Country country = wxDateTime::Country_Default)
void builtin_wxDateTime_GetBeginDST() {
    wxDateTime::Country country = (wTheCall->parmCount > 1 ? (wxDateTime::Country)(int)wStackPopNumber() : wxDateTime::Country_Default);
    int year = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : wxDateTime::Inv_Year);
    // make a pointer via copy constructor
    wxDateTime *returns = new wxDateTime(wxDateTime::GetBeginDST(year, (wxDateTime::Country)country));
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// %builtin %rename wxDateTime_GetCountry static wxDateTime::Country wxDateTime::GetCountry()
void builtin_wxDateTime_GetCountry() {
    wxDateTime::Country returns = wxDateTime::GetCountry();
    wStackPushNumber( (wNumber)returns);
}

// %builtin %rename wxDateTime_GetCurrentYear static int wxDateTime::GetCurrentYear(wxDateTime::Calendar cal = wxDateTime::Gregorian)
void builtin_wxDateTime_GetCurrentYear() {
    wxDateTime::Calendar cal = (wTheCall->parmCount > 0 ? (wxDateTime::Calendar)wStackPopNumber() : wxDateTime::Gregorian);
    int returns = wxDateTime::GetCurrentYear(cal);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %builtin %rename wxDateTime_GetCurrentMonth static int wxDateTime::GetCurrentMonth(wxDateTime::Calendar cal = wxDateTime::Gregorian)
void builtin_wxDateTime_GetCurrentMonth() {
    wxDateTime::Calendar cal = (wTheCall->parmCount > 0 ? (wxDateTime::Calendar)wStackPopNumber() : wxDateTime::Gregorian);
    int returns = wxDateTime::GetCurrentMonth(cal);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %builtin %rename wxDateTime_GetCentury static int wxDateTime::GetCentury(int year = wxDateTime::Inv_Year)
void builtin_wxDateTime_GetCentury() {
    int year = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : wxDateTime::Inv_Year);
    int returns = wxDateTime::GetCentury(year);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %builtin %rename wxDateTime_GetEndDST static wxDateTime wxDateTime::GetEndDST(int year = wxDateTime::Inv_Year, wxDateTime::Country country = wxDateTime::Country_Default)
void builtin_wxDateTime_GetEndDST() {
    wxDateTime::Country country = (wTheCall->parmCount > 1 ? (wxDateTime::Country)(int)wStackPopNumber() : wxDateTime::Country_Default);
    int year = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : wxDateTime::Inv_Year);
    // make a pointer via copy constructor
    wxDateTime *returns = new wxDateTime(wxDateTime::GetEndDST(year, (wxDateTime::Country)country));
    wWrapDerefArgs();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// %builtin %rename wxDateTime_GetMonthName static wxString wxDateTime::GetMonthName(int month, wxDateTime::NameFlags flags = wxDateTime::Name_Full)
void builtin_wxDateTime_GetMonthName() {
    wxDateTime::NameFlags flags = (wTheCall->parmCount > 1 ? (wxDateTime::NameFlags)wStackPopNumber() : wxDateTime::Name_Full);
    int month = (int)wStackPopNumber();
    wxString returns = wxDateTime::GetMonthName(month, flags);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// %builtin %rename wxDateTime_GetNumberOfDaysInYear static wxDateTime_t wxDateTime::GetNumberOfDays(int year, wxDateTime::Calendar cal = wxDateTime::Gregorian)
void builtin_wxDateTime_GetNumberOfDaysInYear() {
    wxDateTime::Calendar cal = (wTheCall->parmCount > 1 ? (wxDateTime::Calendar)wStackPopNumber() : wxDateTime::Gregorian);
    int year = (int)wStackPopNumber();
    time_t returns = wxDateTime::GetNumberOfDays(year, cal);
    wWrapDerefArgs();
    wStackPushDateTime( returns );
}

// %builtin %rename wxDateTime_GetNumberOfDaysInMonth static wxDateTime_t wxDateTime::GetNumberOfDays(wxDateTime::Month month, int year = wxDateTime::Inv_Year, wxDateTime::Calendar cal = wxDateTime::Gregorian)
void builtin_wxDateTime_GetNumberOfDaysInMonth() {
    wxDateTime::Calendar cal = (wTheCall->parmCount > 2 ? (wxDateTime::Calendar)wStackPopNumber() : wxDateTime::Gregorian);
    int year = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : wxDateTime::Inv_Year);
    wxDateTime::Month month = (wxDateTime::Month)(int)wStackPopNumber();
    time_t returns = wxDateTime::GetNumberOfDays((wxDateTime::Month)month, year, cal);
    wWrapDerefArgs();
    wStackPushDateTime( returns );
}

// %builtin %rename wxDateTime_GetWeekDayName static wxString wxDateTime::GetWeekDayName(wxDateTime::WeekDay weekday, wxDateTime::NameFlags flags = wxDateTime::Name_Full)
void builtin_wxDateTime_GetWeekDayName() {
    wxDateTime::NameFlags flags = (wTheCall->parmCount > 1 ? (wxDateTime::NameFlags)wStackPopNumber() : wxDateTime::Name_Full);
    wxDateTime::WeekDay weekday = (wxDateTime::WeekDay)(int)wStackPopNumber();
    wxString returns = wxDateTime::GetWeekDayName((wxDateTime::WeekDay)weekday, flags);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// %builtin %rename wxDateTime_IsLeapYear static bool wxDateTime::IsLeapYear(int year = wxDateTime::Inv_Year, wxDateTime::Calendar cal = wxDateTime::Gregorian)
void builtin_wxDateTime_IsLeapYear() {
    wxDateTime::Calendar cal = (wTheCall->parmCount > 1 ? (wxDateTime::Calendar)wStackPopNumber() : wxDateTime::Gregorian);
    int year = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : wxDateTime::Inv_Year);
    bool returns = wxDateTime::IsLeapYear(year, cal);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %builtin %rename wxDateTime_IsWestEuropeanCountry static bool wxDateTime::IsWestEuropeanCountry(wxDateTime::Country country = wxDateTime::Country_Default)
void builtin_wxDateTime_IsWestEuropeanCountry() {
    wxDateTime::Country country = (wTheCall->parmCount > 0 ? (wxDateTime::Country)(int)wStackPopNumber() : wxDateTime::Country_Default);
    bool returns = wxDateTime::IsWestEuropeanCountry((wxDateTime::Country)country);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %builtin %rename wxDateTime_IsDSTApplicable static bool wxDateTime::IsDSTApplicable(int year = wxDateTime::Inv_Year, wxDateTime::Country country = wxDateTime::Country_Default)
void builtin_wxDateTime_IsDSTApplicable() {
    wxDateTime::Country country = (wTheCall->parmCount > 1 ? (wxDateTime::Country)(int)wStackPopNumber() : wxDateTime::Country_Default);
    int year = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : wxDateTime::Inv_Year);
    bool returns = wxDateTime::IsDSTApplicable(year, (wxDateTime::Country)country);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %builtin %rename wxDateTime_wxDateTime static wxDateTime wxDateTime::Now()
void builtin_wxDateTime_wxDateTime() {
    // make a pointer via copy constructor
    wxDateTime *returns = new wxDateTime(wxDateTime::Now());
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// %builtin %rename wxDateTime_SetCountry void wxDateTime::SetCountry(wxDateTime::Country country)
void builtin_wxDateTime_SetCountry() {
    wxDateTime::Country country = (wxDateTime::Country)(int)wStackPopNumber();
    wxDateTime::SetCountry((wxDateTime::Country)country);
    wWrapDerefArgs();
}

// %builtin %rename wxDateTime_Today static wxDateTime wxDateTime::Today()
void builtin_wxDateTime_Today() {
    // make a pointer via copy constructor
    wxDateTime *returns = new wxDateTime(wxDateTime::Today());
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// %builtin %rename wxDateTime_UNow static wxDateTime wxDateTime::UNow()
void builtin_wxDateTime_UNow() {
    // make a pointer via copy constructor
    wxDateTime *returns = new wxDateTime(wxDateTime::UNow());
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

void wxCalendarCtrl_del()
{
    delete (wxCalendarCtrl *)(wTheCall->self->ptr);
}


// wxCalendarCtrl(wxWindow* parent, wxWindowID id, const wxDateTime& date = wxDefaultDateTime, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxCAL_SHOW_HOLIDAYS, const wxString& name = wxCalendarNameStr)
void wxCalendarCtrl_new() {
    wxString name = wxString((wTheCall->parmCount > 6 ? wStackPopChar() : wxCalendarNameStr), *wxConvCurrent);
    long style = (wTheCall->parmCount > 5 ? (long)wStackPopNumber() : wxCAL_SHOW_HOLIDAYS);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 3 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    const wxDateTime *date = (wTheCall->parmCount > 2 ? (wxDateTime *)wStackPopObjectPtr( _wxDateTime) : &wxDefaultDateTime);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxCalendarCtrl *returns = new wxCalendarCtrl(parent, id, *date, *pos, *size, style, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxCalendarCtrl, (void *)returns );
}

// bool Create(wxWindow* parent, wxWindowID id, const wxDateTime& date = wxDefaultDateTime, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxCAL_SHOW_HOLIDAYS, const wxString& name = wxCalendarNameStr)
void wxCalendarCtrl_Create() {
    wxString name = wxString((wTheCall->parmCount > 6 ? wStackPopChar() : wxCalendarNameStr), *wxConvCurrent);
    long style = (wTheCall->parmCount > 5 ? (long)wStackPopNumber() : wxCAL_SHOW_HOLIDAYS);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 3 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    const wxDateTime *date = (wTheCall->parmCount > 2 ? (wxDateTime *)wStackPopObjectPtr( _wxDateTime) : &wxDefaultDateTime);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxCalendarCtrl *)(wTheCall->self->ptr))->Create(parent, id, *date, *pos, *size, style, name);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// ~wxCalendarCtrl()
void wxCalendarCtrl_finalize() {
    ((wxCalendarCtrl *)(wTheCall->self->ptr))->~wxCalendarCtrl();
}

// void SetDate(const wxDateTime& date)
void wxCalendarCtrl_SetDate() {
    wxDateTime *date = (wxDateTime *)wStackPopObjectPtr( _wxDateTime);
    ((wxCalendarCtrl *)(wTheCall->self->ptr))->SetDate(*date);
    wWrapDerefArgs();
}

// const wxDateTime& GetDate() const
void wxCalendarCtrl_GetDate() {
    const wxDateTime *returns = &((wxCalendarCtrl *)(wTheCall->self->ptr))->GetDate();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// void EnableYearChange(bool enable = TRUE)
void wxCalendarCtrl_EnableYearChange() {
    bool enable = (wTheCall->parmCount > 0 ? (bool)wStackPopNumber() : TRUE);
    ((wxCalendarCtrl *)(wTheCall->self->ptr))->EnableYearChange(enable);
    wWrapDerefArgs();
}

// void EnableMonthChange(bool enable = TRUE)
void wxCalendarCtrl_EnableMonthChange() {
    bool enable = (wTheCall->parmCount > 0 ? (bool)wStackPopNumber() : TRUE);
    ((wxCalendarCtrl *)(wTheCall->self->ptr))->EnableMonthChange(enable);
    wWrapDerefArgs();
}

// void EnableHolidayDisplay(bool display = TRUE)
void wxCalendarCtrl_EnableHolidayDisplay() {
    bool display = (wTheCall->parmCount > 0 ? (bool)wStackPopNumber() : TRUE);
    ((wxCalendarCtrl *)(wTheCall->self->ptr))->EnableHolidayDisplay(display);
    wWrapDerefArgs();
}

// %alias SetHeaderColors void SetHeaderColours(const wxColour& colFg, const wxColour& colBg)
void wxCalendarCtrl_SetHeaderColours() {
    wxColour *colBg = (wxColour *)wStackPopObjectPtr( _wxColour);
    wxColour *colFg = (wxColour *)wStackPopObjectPtr( _wxColour);
    ((wxCalendarCtrl *)(wTheCall->self->ptr))->SetHeaderColours(*colFg, *colBg);
    wWrapDerefArgs();
}

// %alias GetHeaderColorFg const wxColour& GetHeaderColourFg() const
void wxCalendarCtrl_GetHeaderColourFg() {
    const wxColour *returns = &((wxCalendarCtrl *)(wTheCall->self->ptr))->GetHeaderColourFg();
    wWrapPushObject( _wxColour, W_TRUE, (void *)returns );
}

// %alias GetHeaderColorBg const wxColour& GetHeaderColourBg() const
void wxCalendarCtrl_GetHeaderColourBg() {
    const wxColour *returns = &((wxCalendarCtrl *)(wTheCall->self->ptr))->GetHeaderColourBg();
    wWrapPushObject( _wxColour, W_TRUE, (void *)returns );
}

// %alias SetHighlightColors void SetHighlightColours(const wxColour& colFg, const wxColour& colBg)
void wxCalendarCtrl_SetHighlightColours() {
    wxColour *colBg = (wxColour *)wStackPopObjectPtr( _wxColour);
    wxColour *colFg = (wxColour *)wStackPopObjectPtr( _wxColour);
    ((wxCalendarCtrl *)(wTheCall->self->ptr))->SetHighlightColours(*colFg, *colBg);
    wWrapDerefArgs();
}

// %alias GetHighlightColorFg const wxColour& GetHighlightColourFg() const
void wxCalendarCtrl_GetHighlightColourFg() {
    const wxColour *returns = &((wxCalendarCtrl *)(wTheCall->self->ptr))->GetHighlightColourFg();
    wWrapPushObject( _wxColour, W_TRUE, (void *)returns );
}

// %alias GetHighlightColorBg const wxColour& GetHighlightColourBg() const
void wxCalendarCtrl_GetHighlightColourBg() {
    const wxColour *returns = &((wxCalendarCtrl *)(wTheCall->self->ptr))->GetHighlightColourBg();
    wWrapPushObject( _wxColour, W_TRUE, (void *)returns );
}

// %alias SetHolidayColors void SetHolidayColours(const wxColour& colFg, const wxColour& colBg)
void wxCalendarCtrl_SetHolidayColours() {
    wxColour *colBg = (wxColour *)wStackPopObjectPtr( _wxColour);
    wxColour *colFg = (wxColour *)wStackPopObjectPtr( _wxColour);
    ((wxCalendarCtrl *)(wTheCall->self->ptr))->SetHolidayColours(*colFg, *colBg);
    wWrapDerefArgs();
}

// %alias GetHolidayColorFg const wxColour& GetHolidayColourFg() const
void wxCalendarCtrl_GetHolidayColourFg() {
    const wxColour *returns = &((wxCalendarCtrl *)(wTheCall->self->ptr))->GetHolidayColourFg();
    wWrapPushObject( _wxColour, W_TRUE, (void *)returns );
}

// %alias GetHolidayColorBg const wxColour& GetHolidayColourBg() const
void wxCalendarCtrl_GetHolidayColourBg() {
    const wxColour *returns = &((wxCalendarCtrl *)(wTheCall->self->ptr))->GetHolidayColourBg();
    wWrapPushObject( _wxColour, W_TRUE, (void *)returns );
}

// wxCalendarDateAttr * GetAttr(size_t day) const
void wxCalendarCtrl_GetAttr() {
    size_t day = (size_t)wStackPopNumber();
    wxCalendarDateAttr *returns = ((wxCalendarCtrl *)(wTheCall->self->ptr))->GetAttr(day);
    wWrapDerefArgs();
    wWrapPushObject( _wxCalendarDateAttr, W_TRUE, (void *)returns );
}

// void SetAttr(size_t day, wxCalendarDateAttr* attr)
void wxCalendarCtrl_SetAttr() {
    wxCalendarDateAttr *attr = (wxCalendarDateAttr *)wStackPopObjectPtr( _wxCalendarDateAttr);
    size_t day = (size_t)wStackPopNumber();
    ((wxCalendarCtrl *)(wTheCall->self->ptr))->SetAttr(day, attr);
    wWrapDerefArgs();
}

// void SetHoliday(size_t day)
void wxCalendarCtrl_SetHoliday() {
    size_t day = (size_t)wStackPopNumber();
    ((wxCalendarCtrl *)(wTheCall->self->ptr))->SetHoliday(day);
    wWrapDerefArgs();
}

// void ResetAttr(size_t day)
void wxCalendarCtrl_ResetAttr() {
    size_t day = (size_t)wStackPopNumber();
    ((wxCalendarCtrl *)(wTheCall->self->ptr))->ResetAttr(day);
    wWrapDerefArgs();
}

void wxCheckBox_del()
{
    delete (wxCheckBox *)(wTheCall->self->ptr);
}


// wxCheckBox(wxWindow* parent, wxWindowID id, const wxString& label, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = 0, const wxValidator& val = wxDefaultValidator, const wxString& name = "checkBox")
void wxCheckBox_new() {
    wxString name = wxString((wTheCall->parmCount > 7 ? wStackPopChar() : "checkBox"), *wxConvCurrent);
    const wxValidator *val = (wTheCall->parmCount > 6 ? (wxValidator *)wStackPopObjectPtr( _wxValidator) : &wxDefaultValidator);
    long style = (wTheCall->parmCount > 5 ? (long)wStackPopNumber() : 0);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 3 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxString label = wxString(wStackPopChar(), *wxConvCurrent);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxCheckBox *returns = new wxCheckBox(parent, id, label, *pos, *size, style, *val, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxCheckBox, (void *)returns );
}

// ~wxCheckBox()
void wxCheckBox_finalize() {
    ((wxCheckBox *)(wTheCall->self->ptr))->~wxCheckBox();
}

// bool Create(wxWindow* parent, wxWindowID id, const wxString& label, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = 0, const wxValidator& val = wxDefaultValidator, const wxString& name = "checkBox")
void wxCheckBox_Create() {
    wxString name = wxString((wTheCall->parmCount > 7 ? wStackPopChar() : "checkBox"), *wxConvCurrent);
    const wxValidator *val = (wTheCall->parmCount > 6 ? (wxValidator *)wStackPopObjectPtr( _wxValidator) : &wxDefaultValidator);
    long style = (wTheCall->parmCount > 5 ? (long)wStackPopNumber() : 0);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 3 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxString label = wxString(wStackPopChar(), *wxConvCurrent);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxCheckBox *)(wTheCall->self->ptr))->Create(parent, id, label, *pos, *size, style, *val, name);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool GetValue() const
void wxCheckBox_GetValue() {
    bool returns = ((wxCheckBox *)(wTheCall->self->ptr))->GetValue();
    wStackPushNumber( (wNumber)returns);
}

// void SetValue(const bool state)
void wxCheckBox_SetValue() {
    bool state = (bool)wStackPopNumber();
    ((wxCheckBox *)(wTheCall->self->ptr))->SetValue(state);
    wWrapDerefArgs();
}

void wxChoice_del()
{
    delete (wxChoice *)(wTheCall->self->ptr);
}


// wxChoice(wxWindow *parent, wxWindowID id, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, int n = 0, const wxString choices[] = NULL, long style = 0, const wxValidator& validator = wxDefaultValidator, const wxString& name = wxChoiceNameStr)
void wxChoice_new() {
    wxString name = wxString((wTheCall->parmCount > 8 ? wStackPopChar() : wxChoiceNameStr), *wxConvCurrent);
    const wxValidator *validator = (wTheCall->parmCount > 7 ? (wxValidator *)wStackPopObjectPtr( _wxValidator) : &wxDefaultValidator);
    long style = (wTheCall->parmCount > 6 ? (long)wStackPopNumber() : 0);
    if (wTheCall->parmCount > 4) wStackPopNumber();
    wxString choices[1];
    int n = (wTheCall->parmCount > 4 ? (int)wStackPopNumber() : 0);
    const wxSize *size = (wTheCall->parmCount > 3 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 2 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxChoice *returns = new wxChoice(parent, id, *pos, *size, n, choices, style, *validator, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxChoice, (void *)returns );
}

// ~wxChoice()
void wxChoice_finalize() {
    ((wxChoice *)(wTheCall->self->ptr))->~wxChoice();
}

// void Append(const wxString& item)
void wxChoice_Append() {
    wxString item = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxChoice *)(wTheCall->self->ptr))->Append(item);
    wWrapDerefArgs();
}

// void Clear()
void wxChoice_Clear() {
    ((wxChoice *)(wTheCall->self->ptr))->Clear();
}

// bool Create(wxWindow *parent, wxWindowID id, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, int n = 0, const wxString choices[] = NULL, long style = 0, const wxValidator& validator = wxDefaultValidator, const wxString& name = wxChoiceNameStr)
void wxChoice_Create() {
    wxString name = wxString((wTheCall->parmCount > 8 ? wStackPopChar() : wxChoiceNameStr), *wxConvCurrent);
    const wxValidator *validator = (wTheCall->parmCount > 7 ? (wxValidator *)wStackPopObjectPtr( _wxValidator) : &wxDefaultValidator);
    long style = (wTheCall->parmCount > 6 ? (long)wStackPopNumber() : 0);
    if (wTheCall->parmCount > 4) wStackPopNumber();
    wxString choices[1];
    int n = (wTheCall->parmCount > 4 ? (int)wStackPopNumber() : 0);
    const wxSize *size = (wTheCall->parmCount > 3 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 2 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxChoice *)(wTheCall->self->ptr))->Create(parent, id, *pos, *size, n, choices, style, *validator, name);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int FindString(const wxString& string) const
void wxChoice_FindString() {
    wxString string = wxString(wStackPopChar(), *wxConvCurrent);
    int returns = ((wxChoice *)(wTheCall->self->ptr))->FindString(string);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int GetColumns() const
void wxChoice_GetColumns() {
    int returns = ((wxChoice *)(wTheCall->self->ptr))->GetColumns();
    wStackPushNumber( (wNumber)returns);
}

// void* GetClientData(int n) const
void wxChoice_GetClientData() {
    int n = (int)wStackPopNumber();
    ((wxChoice *)(wTheCall->self->ptr))->GetClientData(n);
    wWrapDerefArgs();
}

// int GetSelection() const
void wxChoice_GetSelection() {
    int returns = ((wxChoice *)(wTheCall->self->ptr))->GetSelection();
    wStackPushNumber( (wNumber)returns);
}

// wxString GetString(int n) const
void wxChoice_GetString() {
    int n = (int)wStackPopNumber();
    wxString returns = ((wxChoice *)(wTheCall->self->ptr))->GetString(n);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxString GetStringSelection() const
void wxChoice_GetStringSelection() {
    wxString returns = ((wxChoice *)(wTheCall->self->ptr))->GetStringSelection();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// void SetClientData(int n, void* data)
void wxChoice_SetClientData() {
    void *data = (void *)wStackPopObjectPtr( NULL );
    int n = (int)wStackPopNumber();
    ((wxChoice *)(wTheCall->self->ptr))->SetClientData(n, data);
    wWrapDerefArgs();
}

// void SetColumns(int n = 1)
void wxChoice_SetColumns() {
    int n = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : 1);
    ((wxChoice *)(wTheCall->self->ptr))->SetColumns(n);
    wWrapDerefArgs();
}

// void SetSelection(int n)
void wxChoice_SetSelection() {
    int n = (int)wStackPopNumber();
    ((wxChoice *)(wTheCall->self->ptr))->SetSelection(n);
    wWrapDerefArgs();
}

// void SetStringSelection(const wxString& string)
void wxChoice_SetStringSelection() {
    wxString string = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxChoice *)(wTheCall->self->ptr))->SetStringSelection(string);
    wWrapDerefArgs();
}

void wxComboBox_del()
{
    delete (wxComboBox *)(wTheCall->self->ptr);
}


// wxComboBox(wxWindow* parent, wxWindowID id, const wxString& value = "", const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, int n = 0, const wxString choices[] = NULL, long style = 0, const wxValidator& validator = wxDefaultValidator, const wxString& name = "comboBox")
void wxComboBox_new() {
    wxString name = wxString((wTheCall->parmCount > 9 ? wStackPopChar() : "comboBox"), *wxConvCurrent);
    const wxValidator *validator = (wTheCall->parmCount > 8 ? (wxValidator *)wStackPopObjectPtr( _wxValidator) : &wxDefaultValidator);
    long style = (wTheCall->parmCount > 7 ? (long)wStackPopNumber() : 0);
    if (wTheCall->parmCount > 5) wStackPopNumber();
    wxString choices[1];
    int n = (wTheCall->parmCount > 5 ? (int)wStackPopNumber() : 0);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 3 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxString value = wxString((wTheCall->parmCount > 2 ? wStackPopChar() : ""), *wxConvCurrent);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxComboBox *returns = new wxComboBox(parent, id, value, *pos, *size, n, choices, style, *validator, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxComboBox, (void *)returns );
}

// ~wxComboBox()
void wxComboBox_finalize() {
    ((wxComboBox *)(wTheCall->self->ptr))->~wxComboBox();
}

// void Append(const wxString& item)
void wxComboBox_Append() {
    wxString item = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxComboBox *)(wTheCall->self->ptr))->Append(item);
    wWrapDerefArgs();
}

// void Clear()
void wxComboBox_Clear() {
    ((wxComboBox *)(wTheCall->self->ptr))->Clear();
}

// bool Create(wxWindow* parent, wxWindowID id, const wxString& value = "", const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, int n = 0, const wxString choices[] = NULL, long style = 0, const wxValidator& validator = wxDefaultValidator, const wxString& name = "comboBox")
void wxComboBox_Create() {
    wxString name = wxString((wTheCall->parmCount > 9 ? wStackPopChar() : "comboBox"), *wxConvCurrent);
    const wxValidator *validator = (wTheCall->parmCount > 8 ? (wxValidator *)wStackPopObjectPtr( _wxValidator) : &wxDefaultValidator);
    long style = (wTheCall->parmCount > 7 ? (long)wStackPopNumber() : 0);
    if (wTheCall->parmCount > 5) wStackPopNumber();
    wxString choices[1];
    int n = (wTheCall->parmCount > 5 ? (int)wStackPopNumber() : 0);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 3 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxString value = wxString((wTheCall->parmCount > 2 ? wStackPopChar() : ""), *wxConvCurrent);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxComboBox *)(wTheCall->self->ptr))->Create(parent, id, value, *pos, *size, n, choices, style, *validator, name);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void Copy()
void wxComboBox_Copy() {
    ((wxComboBox *)(wTheCall->self->ptr))->Copy();
}

// void Cut()
void wxComboBox_Cut() {
    ((wxComboBox *)(wTheCall->self->ptr))->Cut();
}

// void Delete(int n)
void wxComboBox_Delete() {
    int n = (int)wStackPopNumber();
    ((wxComboBox *)(wTheCall->self->ptr))->Delete(n);
    wWrapDerefArgs();
}

// int FindString(const wxString& string)
void wxComboBox_FindString() {
    wxString string = wxString(wStackPopChar(), *wxConvCurrent);
    int returns = ((wxComboBox *)(wTheCall->self->ptr))->FindString(string);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void* GetClientData(int n) const
void wxComboBox_GetClientData() {
    int n = (int)wStackPopNumber();
    ((wxComboBox *)(wTheCall->self->ptr))->GetClientData(n);
    wWrapDerefArgs();
}

// long GetInsertionPoint() const
void wxComboBox_GetInsertionPoint() {
    long returns = ((wxComboBox *)(wTheCall->self->ptr))->GetInsertionPoint();
    wStackPushNumber( (wNumber)returns);
}

// long GetLastPosition() const
void wxComboBox_GetLastPosition() {
    long returns = ((wxComboBox *)(wTheCall->self->ptr))->GetLastPosition();
    wStackPushNumber( (wNumber)returns);
}

// int GetSelection() const
void wxComboBox_GetSelection() {
    int returns = ((wxComboBox *)(wTheCall->self->ptr))->GetSelection();
    wStackPushNumber( (wNumber)returns);
}

// wxString GetString(int n) const
void wxComboBox_GetString() {
    int n = (int)wStackPopNumber();
    wxString returns = ((wxComboBox *)(wTheCall->self->ptr))->GetString(n);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxString GetStringSelection() const
void wxComboBox_GetStringSelection() {
    wxString returns = ((wxComboBox *)(wTheCall->self->ptr))->GetStringSelection();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxString GetValue() const
void wxComboBox_GetValue() {
    wxString returns = ((wxComboBox *)(wTheCall->self->ptr))->GetValue();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// void Paste()
void wxComboBox_Paste() {
    ((wxComboBox *)(wTheCall->self->ptr))->Paste();
}

// void Replace(long from, long to, const wxString& text)
void wxComboBox_Replace() {
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    long to = (long)wStackPopNumber();
    long from = (long)wStackPopNumber();
    ((wxComboBox *)(wTheCall->self->ptr))->Replace(from, to, text);
    wWrapDerefArgs();
}

// void Remove(long from, long to)
void wxComboBox_Remove() {
    long to = (long)wStackPopNumber();
    long from = (long)wStackPopNumber();
    ((wxComboBox *)(wTheCall->self->ptr))->Remove(from, to);
    wWrapDerefArgs();
}

// void SetClientData(int n, void* data)
void wxComboBox_SetClientData() {
    void *data = (void *)wStackPopObjectPtr( NULL );
    int n = (int)wStackPopNumber();
    ((wxComboBox *)(wTheCall->self->ptr))->SetClientData(n, data);
    wWrapDerefArgs();
}

// void SetInsertionPoint(long pos)
void wxComboBox_SetInsertionPoint() {
    long pos = (long)wStackPopNumber();
    ((wxComboBox *)(wTheCall->self->ptr))->SetInsertionPoint(pos);
    wWrapDerefArgs();
}

// void SetInsertionPointEnd()
void wxComboBox_SetInsertionPointEnd() {
    ((wxComboBox *)(wTheCall->self->ptr))->SetInsertionPointEnd();
}

// void SetSelection(int n)
void wxComboBox_SetSelection() {
    int n = (int)wStackPopNumber();
    ((wxComboBox *)(wTheCall->self->ptr))->SetSelection(n);
    wWrapDerefArgs();
}

// %rename SetMark void SetSelection(long from, long to)
void wxComboBox_SetMark() {
    long to = (long)wStackPopNumber();
    long from = (long)wStackPopNumber();
    ((wxComboBox *)(wTheCall->self->ptr))->SetSelection(from, to);
    wWrapDerefArgs();
}

// void SetValue(const wxString& text)
void wxComboBox_SetValue() {
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxComboBox *)(wTheCall->self->ptr))->SetValue(text);
    wWrapDerefArgs();
}

void wxGauge_del()
{
    delete (wxGauge *)(wTheCall->self->ptr);
}


// wxGauge(wxWindow* parent, wxWindowID id, int range, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxGA_HORIZONTAL, const wxValidator& validator = wxDefaultValidator, const wxString& name = "gauge")
void wxGauge_new() {
    wxString name = wxString((wTheCall->parmCount > 7 ? wStackPopChar() : "gauge"), *wxConvCurrent);
    const wxValidator *validator = (wTheCall->parmCount > 6 ? (wxValidator *)wStackPopObjectPtr( _wxValidator) : &wxDefaultValidator);
    long style = (wTheCall->parmCount > 5 ? (long)wStackPopNumber() : wxGA_HORIZONTAL);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 3 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    int range = (int)wStackPopNumber();
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxGauge *returns = new wxGauge(parent, id, range, *pos, *size, style, *validator, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxGauge, (void *)returns );
}

// ~wxGauge()
void wxGauge_finalize() {
    ((wxGauge *)(wTheCall->self->ptr))->~wxGauge();
}

// bool Create(wxWindow* parent, wxWindowID id, int range, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxGA_HORIZONTAL, const wxValidator& validator = wxDefaultValidator, const wxString& name = "gauge")
void wxGauge_Create() {
    wxString name = wxString((wTheCall->parmCount > 7 ? wStackPopChar() : "gauge"), *wxConvCurrent);
    const wxValidator *validator = (wTheCall->parmCount > 6 ? (wxValidator *)wStackPopObjectPtr( _wxValidator) : &wxDefaultValidator);
    long style = (wTheCall->parmCount > 5 ? (long)wStackPopNumber() : wxGA_HORIZONTAL);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 3 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    int range = (int)wStackPopNumber();
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxGauge *)(wTheCall->self->ptr))->Create(parent, id, range, *pos, *size, style, *validator, name);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int GetBezelFace() const
void wxGauge_GetBezelFace() {
    int returns = ((wxGauge *)(wTheCall->self->ptr))->GetBezelFace();
    wStackPushNumber( (wNumber)returns);
}

// int GetRange() const
void wxGauge_GetRange() {
    int returns = ((wxGauge *)(wTheCall->self->ptr))->GetRange();
    wStackPushNumber( (wNumber)returns);
}

// int GetShadowWidth() const
void wxGauge_GetShadowWidth() {
    int returns = ((wxGauge *)(wTheCall->self->ptr))->GetShadowWidth();
    wStackPushNumber( (wNumber)returns);
}

// int GetValue() const
void wxGauge_GetValue() {
    int returns = ((wxGauge *)(wTheCall->self->ptr))->GetValue();
    wStackPushNumber( (wNumber)returns);
}

// void SetBezelFace(int width)
void wxGauge_SetBezelFace() {
    int width = (int)wStackPopNumber();
    ((wxGauge *)(wTheCall->self->ptr))->SetBezelFace(width);
    wWrapDerefArgs();
}

// void SetRange(int range)
void wxGauge_SetRange() {
    int range = (int)wStackPopNumber();
    ((wxGauge *)(wTheCall->self->ptr))->SetRange(range);
    wWrapDerefArgs();
}

// void SetShadowWidth(int width)
void wxGauge_SetShadowWidth() {
    int width = (int)wStackPopNumber();
    ((wxGauge *)(wTheCall->self->ptr))->SetShadowWidth(width);
    wWrapDerefArgs();
}

// void SetValue(int pos)
void wxGauge_SetValue() {
    int pos = (int)wStackPopNumber();
    ((wxGauge *)(wTheCall->self->ptr))->SetValue(pos);
    wWrapDerefArgs();
}

void wxStaticBox_del()
{
    delete (wxStaticBox *)(wTheCall->self->ptr);
}


// wxStaticBox(wxWindow* parent, wxWindowID id, const wxString& label, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = 0, const wxString& name = "staticBox")
void wxStaticBox_new() {
    wxString name = wxString((wTheCall->parmCount > 6 ? wStackPopChar() : "staticBox"), *wxConvCurrent);
    long style = (wTheCall->parmCount > 5 ? (long)wStackPopNumber() : 0);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 3 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxString label = wxString(wStackPopChar(), *wxConvCurrent);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxStaticBox *returns = new wxStaticBox(parent, id, label, *pos, *size, style, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxStaticBox, (void *)returns );
}

// ~wxStaticBox()
void wxStaticBox_finalize() {
    ((wxStaticBox *)(wTheCall->self->ptr))->~wxStaticBox();
}

// bool Create(wxWindow* parent, wxWindowID id, const wxString& label, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = 0, const wxString& name = "staticBox")
void wxStaticBox_Create() {
    wxString name = wxString((wTheCall->parmCount > 6 ? wStackPopChar() : "staticBox"), *wxConvCurrent);
    long style = (wTheCall->parmCount > 5 ? (long)wStackPopNumber() : 0);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 3 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxString label = wxString(wStackPopChar(), *wxConvCurrent);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxStaticBox *)(wTheCall->self->ptr))->Create(parent, id, label, *pos, *size, style, name);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

void wxListBox_del()
{
    delete (wxListBox *)(wTheCall->self->ptr);
}


// wxListBox(wxWindow* parent, wxWindowID id, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, int n = 0, const wxString choices[] = NULL, long style = 0, const wxValidator& validator = wxDefaultValidator, const wxString& name = "listBox")
void wxListBox_new() {
    wxString name = wxString((wTheCall->parmCount > 8 ? wStackPopChar() : "listBox"), *wxConvCurrent);
    const wxValidator *validator = (wTheCall->parmCount > 7 ? (wxValidator *)wStackPopObjectPtr( _wxValidator) : &wxDefaultValidator);
    long style = (wTheCall->parmCount > 6 ? (long)wStackPopNumber() : 0);
    if (wTheCall->parmCount > 4) wStackPopNumber();
    wxString choices[1];
    int n = (wTheCall->parmCount > 4 ? (int)wStackPopNumber() : 0);
    const wxSize *size = (wTheCall->parmCount > 3 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 2 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxListBox *returns = new wxListBox(parent, id, *pos, *size, n, choices, style, *validator, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxListBox, (void *)returns );
}

// ~wxListBox()
void wxListBox_finalize() {
    ((wxListBox *)(wTheCall->self->ptr))->~wxListBox();
}

// void Append(const wxString& item)
void wxListBox_Append() {
    wxString item = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxListBox *)(wTheCall->self->ptr))->Append(item);
    wWrapDerefArgs();
}

// void Clear()
void wxListBox_Clear() {
    ((wxListBox *)(wTheCall->self->ptr))->Clear();
}

// bool Create(wxWindow* parent, wxWindowID id, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, int n = 0, const wxString choices[] = NULL, long style = 0, const wxValidator& validator = wxDefaultValidator, const wxString& name = "listBox")
void wxListBox_Create() {
    wxString name = wxString((wTheCall->parmCount > 8 ? wStackPopChar() : "listBox"), *wxConvCurrent);
    const wxValidator *validator = (wTheCall->parmCount > 7 ? (wxValidator *)wStackPopObjectPtr( _wxValidator) : &wxDefaultValidator);
    long style = (wTheCall->parmCount > 6 ? (long)wStackPopNumber() : 0);
    if (wTheCall->parmCount > 4) wStackPopNumber();
    wxString choices[1];
    int n = (wTheCall->parmCount > 4 ? (int)wStackPopNumber() : 0);
    const wxSize *size = (wTheCall->parmCount > 3 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 2 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxListBox *)(wTheCall->self->ptr))->Create(parent, id, *pos, *size, n, choices, style, *validator, name);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void Delete(int n)
void wxListBox_Delete() {
    int n = (int)wStackPopNumber();
    ((wxListBox *)(wTheCall->self->ptr))->Delete(n);
    wWrapDerefArgs();
}

// void Deselect(int n)
void wxListBox_Deselect() {
    int n = (int)wStackPopNumber();
    ((wxListBox *)(wTheCall->self->ptr))->Deselect(n);
    wWrapDerefArgs();
}

// int FindString(const wxString& string)
void wxListBox_FindString() {
    wxString string = wxString(wStackPopChar(), *wxConvCurrent);
    int returns = ((wxListBox *)(wTheCall->self->ptr))->FindString(string);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void* GetClientData(int n) const
void wxListBox_GetClientData() {
    int n = (int)wStackPopNumber();
    ((wxListBox *)(wTheCall->self->ptr))->GetClientData(n);
    wWrapDerefArgs();
}

// int GetCount() const
void wxListBox_GetCount() {
    int returns = ((wxListBox *)(wTheCall->self->ptr))->GetCount();
    wStackPushNumber( (wNumber)returns);
}

// int GetSelection() const
void wxListBox_GetSelection() {
    int returns = ((wxListBox *)(wTheCall->self->ptr))->GetSelection();
    wStackPushNumber( (wNumber)returns);
}

// int GetSelections(wxArrayInt& selections) const
void wxListBox_GetSelections() {
    wxArrayInt *selections = (wxArrayInt *)wStackPopObjectPtr( _wxArrayInt);
    int returns = ((wxListBox *)(wTheCall->self->ptr))->GetSelections(*selections);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// wxString GetString(int n) const
void wxListBox_GetString() {
    int n = (int)wStackPopNumber();
    wxString returns = ((wxListBox *)(wTheCall->self->ptr))->GetString(n);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxString GetStringSelection() const
void wxListBox_GetStringSelection() {
    wxString returns = ((wxListBox *)(wTheCall->self->ptr))->GetStringSelection();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// bool Selected(int n) const
void wxListBox_Selected() {
    int n = (int)wStackPopNumber();
    bool returns = ((wxListBox *)(wTheCall->self->ptr))->Selected(n);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void SetClientData(int n, void* data)
void wxListBox_SetClientData() {
    void *data = (void *)wStackPopObjectPtr( NULL );
    int n = (int)wStackPopNumber();
    ((wxListBox *)(wTheCall->self->ptr))->SetClientData(n, data);
    wWrapDerefArgs();
}

// void SetFirstItem(int n)
void wxListBox_SetFirstItem() {
    int n = (int)wStackPopNumber();
    ((wxListBox *)(wTheCall->self->ptr))->SetFirstItem(n);
    wWrapDerefArgs();
}

// void SetSelection(int n, const bool select = TRUE)
void wxListBox_SetSelection() {
    const bool select = (wTheCall->parmCount > 1 ? (bool)wStackPopNumber() : TRUE);
    int n = (int)wStackPopNumber();
    ((wxListBox *)(wTheCall->self->ptr))->SetSelection(n, select);
    wWrapDerefArgs();
}

// void SetString(int n, const wxString& string)
void wxListBox_SetString() {
    wxString string = wxString(wStackPopChar(), *wxConvCurrent);
    int n = (int)wStackPopNumber();
    ((wxListBox *)(wTheCall->self->ptr))->SetString(n, string);
    wWrapDerefArgs();
}

// void SetStringSelection(const wxString& string, const bool select = TRUE)
void wxListBox_SetStringSelection() {
    const bool select = (wTheCall->parmCount > 1 ? (bool)wStackPopNumber() : TRUE);
    wxString string = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxListBox *)(wTheCall->self->ptr))->SetStringSelection(string, select);
    wWrapDerefArgs();
}

void wxCheckListBox_del()
{
    delete (wxCheckListBox *)(wTheCall->self->ptr);
}


// wxCheckListBox(wxWindow* parent, wxWindowID id, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, int n = 0, const wxString choices[] = NULL, long style = 0, const wxValidator& validator = wxDefaultValidator, const wxString& name = "listBox")
void wxCheckListBox_new() {
    wxString name = wxString((wTheCall->parmCount > 8 ? wStackPopChar() : "listBox"), *wxConvCurrent);
    const wxValidator *validator = (wTheCall->parmCount > 7 ? (wxValidator *)wStackPopObjectPtr( _wxValidator) : &wxDefaultValidator);
    long style = (wTheCall->parmCount > 6 ? (long)wStackPopNumber() : 0);
    if (wTheCall->parmCount > 4) wStackPopNumber();
    wxString choices[1];
    int n = (wTheCall->parmCount > 4 ? (int)wStackPopNumber() : 0);
    const wxSize *size = (wTheCall->parmCount > 3 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 2 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxCheckListBox *returns = new wxCheckListBox(parent, id, *pos, *size, n, choices, style, *validator, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxCheckListBox, (void *)returns );
}

// ~wxCheckListBox()
void wxCheckListBox_finalize() {
    ((wxCheckListBox *)(wTheCall->self->ptr))->~wxCheckListBox();
}

// void Check(int item, bool check = TRUE)
void wxCheckListBox_Check() {
    bool check = (wTheCall->parmCount > 1 ? (bool)wStackPopNumber() : TRUE);
    int item = (int)wStackPopNumber();
    ((wxCheckListBox *)(wTheCall->self->ptr))->Check(item, check);
    wWrapDerefArgs();
}

// bool IsChecked(int item) const
void wxCheckListBox_IsChecked() {
    int item = (int)wStackPopNumber();
    bool returns = ((wxCheckListBox *)(wTheCall->self->ptr))->IsChecked(item);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

void wxListItem_del()
{
    delete (wxListItem *)(wTheCall->self->ptr);
}


// wxListItem()
void wxListItem_new() {
    wxListItem *returns = new wxListItem();
    wWrapSetThis( _wxListItem, (void *)returns );
}

// void Clear()
void wxListItem_Clear() {
    ((wxListItem *)(wTheCall->self->ptr))->Clear();
}

// wxListColumnFormat GetAlign() const
void wxListItem_GetAlign() {
    wxListColumnFormat returns = ((wxListItem *)(wTheCall->self->ptr))->GetAlign();
    wStackPushNumber( (wNumber)returns);
}

// wxColour GetBackgroundColour() const
void wxListItem_GetBackgroundColour() {
    // make a pointer via copy constructor
    wxColour *returns = new wxColour(((wxListItem *)(wTheCall->self->ptr))->GetBackgroundColour());
    wWrapPushObject( _wxColour, W_TRUE, (void *)returns );
}

// int GetColumn() const
void wxListItem_GetColumn() {
    int returns = ((wxListItem *)(wTheCall->self->ptr))->GetColumn();
    wStackPushNumber( (wNumber)returns);
}

// long GetData() const
void wxListItem_GetData() {
    long returns = ((wxListItem *)(wTheCall->self->ptr))->GetData();
    wStackPushNumber( (wNumber)returns);
}

// wxFont GetFont() const
void wxListItem_GetFont() {
    // make a pointer via copy constructor
    wxFont *returns = new wxFont(((wxListItem *)(wTheCall->self->ptr))->GetFont());
    wWrapPushObject( _wxFont, W_TRUE, (void *)returns );
}

// long GetId() const
void wxListItem_GetId() {
    long returns = ((wxListItem *)(wTheCall->self->ptr))->GetId();
    wStackPushNumber( (wNumber)returns);
}

// int GetImage() const
void wxListItem_GetImage() {
    int returns = ((wxListItem *)(wTheCall->self->ptr))->GetImage();
    wStackPushNumber( (wNumber)returns);
}

// long GetMask() const
void wxListItem_GetMask() {
    long returns = ((wxListItem *)(wTheCall->self->ptr))->GetMask();
    wStackPushNumber( (wNumber)returns);
}

// long GetState() const
void wxListItem_GetState() {
    long returns = ((wxListItem *)(wTheCall->self->ptr))->GetState();
    wStackPushNumber( (wNumber)returns);
}

// const wxString& GetText() const
void wxListItem_GetText() {
    const wxString *returns = &((wxListItem *)(wTheCall->self->ptr))->GetText();
    wStackPushChar( (char *)(returns->c_str()), W_TRUE );
}

// wxColour GetTextColour() const
void wxListItem_GetTextColour() {
    // make a pointer via copy constructor
    wxColour *returns = new wxColour(((wxListItem *)(wTheCall->self->ptr))->GetTextColour());
    wWrapPushObject( _wxColour, W_TRUE, (void *)returns );
}

// int GetWidth() const
void wxListItem_GetWidth() {
    int returns = ((wxListItem *)(wTheCall->self->ptr))->GetWidth();
    wStackPushNumber( (wNumber)returns);
}

// void SetAlign(wxListColumnFormat align)
void wxListItem_SetAlign() {
    wxListColumnFormat align = (wxListColumnFormat)(int)wStackPopNumber();
    ((wxListItem *)(wTheCall->self->ptr))->SetAlign((wxListColumnFormat)align);
    wWrapDerefArgs();
}

// %alias SetBackgroundColor void SetBackgroundColour(const wxColour& colBack)
void wxListItem_SetBackgroundColour() {
    wxColour *colBack = (wxColour *)wStackPopObjectPtr( _wxColour);
    ((wxListItem *)(wTheCall->self->ptr))->SetBackgroundColour(*colBack);
    wWrapDerefArgs();
}

// void SetColumn(int col)
void wxListItem_SetColumn() {
    int col = (int)wStackPopNumber();
    ((wxListItem *)(wTheCall->self->ptr))->SetColumn(col);
    wWrapDerefArgs();
}

// void SetData(long data)
void wxListItem_SetData() {
    long data = (long)wStackPopNumber();
    ((wxListItem *)(wTheCall->self->ptr))->SetData(data);
    wWrapDerefArgs();
}

// void SetFont(const wxFont& font)
void wxListItem_SetFont() {
    wxFont *font = (wxFont *)wStackPopObjectPtr( _wxFont);
    ((wxListItem *)(wTheCall->self->ptr))->SetFont(*font);
    wWrapDerefArgs();
}

// void SetId(long id)
void wxListItem_SetId() {
    long id = (long)wStackPopNumber();
    ((wxListItem *)(wTheCall->self->ptr))->SetId(id);
    wWrapDerefArgs();
}

// void SetImage(int image)
void wxListItem_SetImage() {
    int image = (int)wStackPopNumber();
    ((wxListItem *)(wTheCall->self->ptr))->SetImage(image);
    wWrapDerefArgs();
}

// void SetMask(long mask)
void wxListItem_SetMask() {
    long mask = (long)wStackPopNumber();
    ((wxListItem *)(wTheCall->self->ptr))->SetMask(mask);
    wWrapDerefArgs();
}

// void SetState(long state)
void wxListItem_SetState() {
    long state = (long)wStackPopNumber();
    ((wxListItem *)(wTheCall->self->ptr))->SetState(state);
    wWrapDerefArgs();
}

// void SetStateMask(long stateMask)
void wxListItem_SetStateMask() {
    long stateMask = (long)wStackPopNumber();
    ((wxListItem *)(wTheCall->self->ptr))->SetStateMask(stateMask);
    wWrapDerefArgs();
}

// void SetText(const wxString& text)
void wxListItem_SetText() {
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxListItem *)(wTheCall->self->ptr))->SetText(text);
    wWrapDerefArgs();
}

// %alias SetTextColor void SetTextColour(const wxColour& colText)
void wxListItem_SetTextColour() {
    wxColour *colText = (wxColour *)wStackPopObjectPtr( _wxColour);
    ((wxListItem *)(wTheCall->self->ptr))->SetTextColour(*colText);
    wWrapDerefArgs();
}

// void SetWidth(int width)
void wxListItem_SetWidth() {
    int width = (int)wStackPopNumber();
    ((wxListItem *)(wTheCall->self->ptr))->SetWidth(width);
    wWrapDerefArgs();
}

void wxListCtrl_del()
{
    delete (wxListCtrl *)(wTheCall->self->ptr);
}


// wxListCtrl(wxWindow* parent, wxWindowID id, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxLC_ICON, const wxValidator& validator = wxDefaultValidator, const wxString& name = "listCtrl")
void wxListCtrl_new() {
    wxString name = wxString((wTheCall->parmCount > 6 ? wStackPopChar() : "listCtrl"), *wxConvCurrent);
    const wxValidator *validator = (wTheCall->parmCount > 5 ? (wxValidator *)wStackPopObjectPtr( _wxValidator) : &wxDefaultValidator);
    long style = (wTheCall->parmCount > 4 ? (long)wStackPopNumber() : wxLC_ICON);
    const wxSize *size = (wTheCall->parmCount > 3 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 2 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxListCtrl *returns = new wxListCtrl(parent, id, *pos, *size, style, *validator, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxListCtrl, (void *)returns );
}

// ~wxListCtrl()
void wxListCtrl_finalize() {
    ((wxListCtrl *)(wTheCall->self->ptr))->~wxListCtrl();
}

// bool Arrange(int flag = wxLIST_ALIGN_DEFAULT)
void wxListCtrl_Arrange() {
    int flag = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : wxLIST_ALIGN_DEFAULT);
    bool returns = ((wxListCtrl *)(wTheCall->self->ptr))->Arrange(flag);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool Create(wxWindow* parent, wxWindowID id, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxLC_ICON, const wxValidator& validator = wxDefaultValidator, const wxString& name = "listCtrl")
void wxListCtrl_Create() {
    wxString name = wxString((wTheCall->parmCount > 6 ? wStackPopChar() : "listCtrl"), *wxConvCurrent);
    const wxValidator *validator = (wTheCall->parmCount > 5 ? (wxValidator *)wStackPopObjectPtr( _wxValidator) : &wxDefaultValidator);
    long style = (wTheCall->parmCount > 4 ? (long)wStackPopNumber() : wxLC_ICON);
    const wxSize *size = (wTheCall->parmCount > 3 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 2 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxListCtrl *)(wTheCall->self->ptr))->Create(parent, id, *pos, *size, style, *validator, name);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void ClearAll()
void wxListCtrl_ClearAll() {
    ((wxListCtrl *)(wTheCall->self->ptr))->ClearAll();
}

// bool DeleteItem(long item)
void wxListCtrl_DeleteItem() {
    long item = (long)wStackPopNumber();
    bool returns = ((wxListCtrl *)(wTheCall->self->ptr))->DeleteItem(item);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool DeleteAllItems()
void wxListCtrl_DeleteAllItems() {
    bool returns = ((wxListCtrl *)(wTheCall->self->ptr))->DeleteAllItems();
    wStackPushNumber( (wNumber)returns);
}

// bool DeleteColumn(int col)
void wxListCtrl_DeleteColumn() {
    int col = (int)wStackPopNumber();
    bool returns = ((wxListCtrl *)(wTheCall->self->ptr))->DeleteColumn(col);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void EditLabel(long item)
void wxListCtrl_EditLabel() {
    long item = (long)wStackPopNumber();
    ((wxListCtrl *)(wTheCall->self->ptr))->EditLabel(item);
    wWrapDerefArgs();
}

// bool EnsureVisible(long item)
void wxListCtrl_EnsureVisible() {
    long item = (long)wStackPopNumber();
    bool returns = ((wxListCtrl *)(wTheCall->self->ptr))->EnsureVisible(item);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// long FindItem(long start, const wxString& str, const bool partial = FALSE)
void wxListCtrl_FindItem() {
    const bool partial = (wTheCall->parmCount > 2 ? (bool)wStackPopNumber() : FALSE);
    wxString str = wxString(wStackPopChar(), *wxConvCurrent);
    long start = (long)wStackPopNumber();
    long returns = ((wxListCtrl *)(wTheCall->self->ptr))->FindItem(start, str, partial);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %rename FindItemData long FindItem(long start, long data)
void wxListCtrl_FindItemData() {
    long data = (long)wStackPopNumber();
    long start = (long)wStackPopNumber();
    long returns = ((wxListCtrl *)(wTheCall->self->ptr))->FindItem(start, data);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %rename FindItemAtPos long FindItem(long start, const wxPoint& pt, int direction)
void wxListCtrl_FindItemAtPos() {
    int direction = (int)wStackPopNumber();
    wxPoint *pt = (wxPoint *)wStackPopObjectPtr( _wxPoint);
    long start = (long)wStackPopNumber();
    long returns = ((wxListCtrl *)(wTheCall->self->ptr))->FindItem(start, *pt, direction);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool GetColumn(int col, wxListItem& item) const
void wxListCtrl_GetColumn() {
    wxListItem *item = (wxListItem *)wStackPopObjectPtr( _wxListItem);
    int col = (int)wStackPopNumber();
    bool returns = ((wxListCtrl *)(wTheCall->self->ptr))->GetColumn(col, *item);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int GetColumnWidth(int col) const
void wxListCtrl_GetColumnWidth() {
    int col = (int)wStackPopNumber();
    int returns = ((wxListCtrl *)(wTheCall->self->ptr))->GetColumnWidth(col);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int GetCountPerPage() const
void wxListCtrl_GetCountPerPage() {
    int returns = ((wxListCtrl *)(wTheCall->self->ptr))->GetCountPerPage();
    wStackPushNumber( (wNumber)returns);
}

// wxImageList* GetImageList(int which) const
void wxListCtrl_GetImageList() {
    int which = (int)wStackPopNumber();
    wxImageList *returns = ((wxListCtrl *)(wTheCall->self->ptr))->GetImageList(which);
    wWrapDerefArgs();
    wWrapPushObject( _wxImageList, W_TRUE, (void *)returns );
}

// bool GetItem(wxListItem& info) const
void wxListCtrl_GetItem() {
    wxListItem *info = (wxListItem *)wStackPopObjectPtr( _wxListItem);
    bool returns = ((wxListCtrl *)(wTheCall->self->ptr))->GetItem(*info);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// long GetItemData(long item) const
void wxListCtrl_GetItemData() {
    long item = (long)wStackPopNumber();
    long returns = ((wxListCtrl *)(wTheCall->self->ptr))->GetItemData(item);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool GetItemPosition(long item, wxPoint& pos) const
void wxListCtrl_GetItemPosition() {
    wxPoint *pos = (wxPoint *)wStackPopObjectPtr( _wxPoint);
    long item = (long)wStackPopNumber();
    bool returns = ((wxListCtrl *)(wTheCall->self->ptr))->GetItemPosition(item, *pos);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

void wxListCtrl_GetItemRect()
{
    int code = wStackPopNumber();
    long item = wStackPopNumber();

    wxRect *returns;
    ((wxListCtrl *)wTheCall->self->ptr)->GetItemRect(item,*returns,code);
    wWrapDerefArgs();
    wWrapSetThis( _wxRect, (void *)returns );        
}
// int GetItemState(long item, long stateMask) const
void wxListCtrl_GetItemState() {
    long stateMask = (long)wStackPopNumber();
    long item = (long)wStackPopNumber();
    int returns = ((wxListCtrl *)(wTheCall->self->ptr))->GetItemState(item, stateMask);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int GetItemCount() const
void wxListCtrl_GetItemCount() {
    int returns = ((wxListCtrl *)(wTheCall->self->ptr))->GetItemCount();
    wStackPushNumber( (wNumber)returns);
}

// int GetItemSpacing(bool isSmall) const
void wxListCtrl_GetItemSpacing() {
    bool isSmall = (bool)wStackPopNumber();
    int returns = ((wxListCtrl *)(wTheCall->self->ptr))->GetItemSpacing(isSmall);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// wxString GetItemText(long item) const
void wxListCtrl_GetItemText() {
    long item = (long)wStackPopNumber();
    wxString returns = ((wxListCtrl *)(wTheCall->self->ptr))->GetItemText(item);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// long GetNextItem(long item, int geometry = wxLIST_NEXT_ALL, int state = wxLIST_STATE_DONTCARE) const
void wxListCtrl_GetNextItem() {
    int state = (wTheCall->parmCount > 2 ? (int)wStackPopNumber() : wxLIST_STATE_DONTCARE);
    int geometry = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : wxLIST_NEXT_ALL);
    long item = (long)wStackPopNumber();
    long returns = ((wxListCtrl *)(wTheCall->self->ptr))->GetNextItem(item, geometry, state);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int GetSelectedItemCount() const
void wxListCtrl_GetSelectedItemCount() {
    int returns = ((wxListCtrl *)(wTheCall->self->ptr))->GetSelectedItemCount();
    wStackPushNumber( (wNumber)returns);
}

// %alias GetTextColor wxColour GetTextColour() const
void wxListCtrl_GetTextColour() {
    // make a pointer via copy constructor
    wxColour *returns = new wxColour(((wxListCtrl *)(wTheCall->self->ptr))->GetTextColour());
    wWrapPushObject( _wxColour, W_TRUE, (void *)returns );
}

// long GetTopItem() const
void wxListCtrl_GetTopItem() {
    long returns = ((wxListCtrl *)(wTheCall->self->ptr))->GetTopItem();
    wStackPushNumber( (wNumber)returns);
}

// long HitTest(const wxPoint& point, int& flags)
void wxListCtrl_HitTest() {
    int *flags = (int *)wStackPopObjectPtr( 0 );
    wxPoint *point = (wxPoint *)wStackPopObjectPtr( _wxPoint);
    long returns = ((wxListCtrl *)(wTheCall->self->ptr))->HitTest(*point, *flags);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// long InsertColumn(long col, wxListItem& info)
void wxListCtrl_InsertColumn() {
    wxListItem *info = (wxListItem *)wStackPopObjectPtr( _wxListItem);
    long col = (long)wStackPopNumber();
    long returns = ((wxListCtrl *)(wTheCall->self->ptr))->InsertColumn(col, *info);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %rename InsertColumnInfo long InsertColumn(long col, const wxString& heading, int format = wxLIST_FORMAT_LEFT, int width = -1)
void wxListCtrl_InsertColumnInfo() {
    int width = (wTheCall->parmCount > 3 ? (int)wStackPopNumber() : -1);
    int format = (wTheCall->parmCount > 2 ? (int)wStackPopNumber() : wxLIST_FORMAT_LEFT);
    wxString heading = wxString(wStackPopChar(), *wxConvCurrent);
    long col = (long)wStackPopNumber();
    long returns = ((wxListCtrl *)(wTheCall->self->ptr))->InsertColumn(col, heading, format, width);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// long InsertItem(wxListItem& info)
void wxListCtrl_InsertItem() {
    wxListItem *info = (wxListItem *)wStackPopObjectPtr( _wxListItem);
    long returns = ((wxListCtrl *)(wTheCall->self->ptr))->InsertItem(*info);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %rename InsertStringItem long InsertItem(long index, const wxString& label)
void wxListCtrl_InsertStringItem() {
    wxString label = wxString(wStackPopChar(), *wxConvCurrent);
    long index = (long)wStackPopNumber();
    long returns = ((wxListCtrl *)(wTheCall->self->ptr))->InsertItem(index, label);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %rename InsertImageItem long InsertItem(long index, int imageIndex)
void wxListCtrl_InsertImageItem() {
    int imageIndex = (int)wStackPopNumber();
    long index = (long)wStackPopNumber();
    long returns = ((wxListCtrl *)(wTheCall->self->ptr))->InsertItem(index, imageIndex);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %rename InsertImageStringItem long InsertItem(long index, const wxString& label, int imageIndex)
void wxListCtrl_InsertImageStringItem() {
    int imageIndex = (int)wStackPopNumber();
    wxString label = wxString(wStackPopChar(), *wxConvCurrent);
    long index = (long)wStackPopNumber();
    long returns = ((wxListCtrl *)(wTheCall->self->ptr))->InsertItem(index, label, imageIndex);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool ScrollList(int dx, int dy)
void wxListCtrl_ScrollList() {
    int dy = (int)wStackPopNumber();
    int dx = (int)wStackPopNumber();
    bool returns = ((wxListCtrl *)(wTheCall->self->ptr))->ScrollList(dx, dy);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %alias SetBackgroundColor void SetBackgroundColour(const wxColour& col)
void wxListCtrl_SetBackgroundColour() {
    wxColour *col = (wxColour *)wStackPopObjectPtr( _wxColour);
    ((wxListCtrl *)(wTheCall->self->ptr))->SetBackgroundColour(*col);
    wWrapDerefArgs();
}

// bool SetColumn(int col, wxListItem& item)
void wxListCtrl_SetColumn() {
    wxListItem *item = (wxListItem *)wStackPopObjectPtr( _wxListItem);
    int col = (int)wStackPopNumber();
    bool returns = ((wxListCtrl *)(wTheCall->self->ptr))->SetColumn(col, *item);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool SetColumnWidth(int col, int width)
void wxListCtrl_SetColumnWidth() {
    int width = (int)wStackPopNumber();
    int col = (int)wStackPopNumber();
    bool returns = ((wxListCtrl *)(wTheCall->self->ptr))->SetColumnWidth(col, width);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void SetImageList(wxImageList* imageList, int which)
void wxListCtrl_SetImageList() {
    int which = (int)wStackPopNumber();
    wxImageList *imageList = (wxImageList *)wStackPopObjectPtr( _wxImageList);
    ((wxListCtrl *)(wTheCall->self->ptr))->SetImageList(imageList, which);
    wWrapDerefArgs();
}

// bool SetItem(wxListItem& info)
void wxListCtrl_SetItem() {
    wxListItem *info = (wxListItem *)wStackPopObjectPtr( _wxListItem);
    bool returns = ((wxListCtrl *)(wTheCall->self->ptr))->SetItem(*info);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %rename SetStringItem long SetItem(long index, int col, const wxString& label, int imageId = -1)
void wxListCtrl_SetStringItem() {
    int imageId = (wTheCall->parmCount > 3 ? (int)wStackPopNumber() : -1);
    wxString label = wxString(wStackPopChar(), *wxConvCurrent);
    int col = (int)wStackPopNumber();
    long index = (long)wStackPopNumber();
    long returns = ((wxListCtrl *)(wTheCall->self->ptr))->SetItem(index, col, label, imageId);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool SetItemData(long item, long data)
void wxListCtrl_SetItemData() {
    long data = (long)wStackPopNumber();
    long item = (long)wStackPopNumber();
    bool returns = ((wxListCtrl *)(wTheCall->self->ptr))->SetItemData(item, data);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool SetItemImage(long item, int image, int selImage)
void wxListCtrl_SetItemImage() {
    int selImage = (int)wStackPopNumber();
    int image = (int)wStackPopNumber();
    long item = (long)wStackPopNumber();
    bool returns = ((wxListCtrl *)(wTheCall->self->ptr))->SetItemImage(item, image, selImage);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool SetItemPosition(long item, const wxPoint& pos)
void wxListCtrl_SetItemPosition() {
    wxPoint *pos = (wxPoint *)wStackPopObjectPtr( _wxPoint);
    long item = (long)wStackPopNumber();
    bool returns = ((wxListCtrl *)(wTheCall->self->ptr))->SetItemPosition(item, *pos);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool SetItemState(long item, long state, long stateMask)
void wxListCtrl_SetItemState() {
    long stateMask = (long)wStackPopNumber();
    long state = (long)wStackPopNumber();
    long item = (long)wStackPopNumber();
    bool returns = ((wxListCtrl *)(wTheCall->self->ptr))->SetItemState(item, state, stateMask);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void SetItemText(long item, const wxString& text)
void wxListCtrl_SetItemText() {
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    long item = (long)wStackPopNumber();
    ((wxListCtrl *)(wTheCall->self->ptr))->SetItemText(item, text);
    wWrapDerefArgs();
}

// void SetSingleStyle(long style, const bool add = TRUE)
void wxListCtrl_SetSingleStyle() {
    const bool add = (wTheCall->parmCount > 1 ? (bool)wStackPopNumber() : TRUE);
    long style = (long)wStackPopNumber();
    ((wxListCtrl *)(wTheCall->self->ptr))->SetSingleStyle(style, add);
    wWrapDerefArgs();
}

// %alias SetTextColor void SetTextColour(const wxColour& col)
void wxListCtrl_SetTextColour() {
    wxColour *col = (wxColour *)wStackPopObjectPtr( _wxColour);
    ((wxListCtrl *)(wTheCall->self->ptr))->SetTextColour(*col);
    wWrapDerefArgs();
}

// void SetWindowStyleFlag(long style)
void wxListCtrl_SetWindowStyleFlag() {
    long style = (long)wStackPopNumber();
    ((wxListCtrl *)(wTheCall->self->ptr))->SetWindowStyleFlag(style);
    wWrapDerefArgs();
}

void wxTextCtrl_del()
{
    delete (wxTextCtrl *)(wTheCall->self->ptr);
}


// wxTextCtrl(wxWindow *parent, wxWindowID id, const wxString& value = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = 0, const wxValidator& validator = wxDefaultValidator, const wxString& name = wxTextCtrlNameStr)
void wxTextCtrl_new() {
    wxString name = wxString((wTheCall->parmCount > 7 ? wStackPopChar() : wxTextCtrlNameStr), *wxConvCurrent);
    const wxValidator *validator = (wTheCall->parmCount > 6 ? (wxValidator *)wStackPopObjectPtr( _wxValidator) : &wxDefaultValidator);
    long style = (wTheCall->parmCount > 5 ? (long)wStackPopNumber() : 0);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 3 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxString value = wxString((wTheCall->parmCount > 2 ? wStackPopChar() : wxEmptyString), *wxConvCurrent);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxTextCtrl *returns = new wxTextCtrl(parent, id, value, *pos, *size, style, *validator, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxTextCtrl, (void *)returns );
}

// ~wxTextCtrl()
void wxTextCtrl_finalize() {
    ((wxTextCtrl *)(wTheCall->self->ptr))->~wxTextCtrl();
}

// void AppendText(const wxString& text)
void wxTextCtrl_AppendText() {
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxTextCtrl *)(wTheCall->self->ptr))->AppendText(text);
    wWrapDerefArgs();
}

// virtual bool CanCopy()
void wxTextCtrl_CanCopy() {
    bool returns = ((wxTextCtrl *)(wTheCall->self->ptr))->CanCopy();
    wStackPushNumber( (wNumber)returns);
}

// virtual bool CanCut()
void wxTextCtrl_CanCut() {
    bool returns = ((wxTextCtrl *)(wTheCall->self->ptr))->CanCut();
    wStackPushNumber( (wNumber)returns);
}

// virtual bool CanPaste()
void wxTextCtrl_CanPaste() {
    bool returns = ((wxTextCtrl *)(wTheCall->self->ptr))->CanPaste();
    wStackPushNumber( (wNumber)returns);
}

// virtual bool CanRedo()
void wxTextCtrl_CanRedo() {
    bool returns = ((wxTextCtrl *)(wTheCall->self->ptr))->CanRedo();
    wStackPushNumber( (wNumber)returns);
}

// virtual bool CanUndo()
void wxTextCtrl_CanUndo() {
    bool returns = ((wxTextCtrl *)(wTheCall->self->ptr))->CanUndo();
    wStackPushNumber( (wNumber)returns);
}

// virtual void Clear()
void wxTextCtrl_Clear() {
    ((wxTextCtrl *)(wTheCall->self->ptr))->Clear();
}

// virtual void Copy()
void wxTextCtrl_Copy() {
    ((wxTextCtrl *)(wTheCall->self->ptr))->Copy();
}

// bool Create(wxWindow* parent, wxWindowID id, const wxString& value = "", const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = 0, const wxValidator& validator = wxDefaultValidator, const wxString& name = "text")
void wxTextCtrl_Create() {
    wxString name = wxString((wTheCall->parmCount > 7 ? wStackPopChar() : "text"), *wxConvCurrent);
    const wxValidator *validator = (wTheCall->parmCount > 6 ? (wxValidator *)wStackPopObjectPtr( _wxValidator) : &wxDefaultValidator);
    long style = (wTheCall->parmCount > 5 ? (long)wStackPopNumber() : 0);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 3 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxString value = wxString((wTheCall->parmCount > 2 ? wStackPopChar() : ""), *wxConvCurrent);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxTextCtrl *)(wTheCall->self->ptr))->Create(parent, id, value, *pos, *size, style, *validator, name);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// virtual void Cut()
void wxTextCtrl_Cut() {
    ((wxTextCtrl *)(wTheCall->self->ptr))->Cut();
}

// void DiscardEdits()
void wxTextCtrl_DiscardEdits() {
    ((wxTextCtrl *)(wTheCall->self->ptr))->DiscardEdits();
}

// virtual long GetInsertionPoint() const
void wxTextCtrl_GetInsertionPoint() {
    long returns = ((wxTextCtrl *)(wTheCall->self->ptr))->GetInsertionPoint();
    wStackPushNumber( (wNumber)returns);
}

// virtual long GetLastPosition() const
void wxTextCtrl_GetLastPosition() {
    long returns = ((wxTextCtrl *)(wTheCall->self->ptr))->GetLastPosition();
    wStackPushNumber( (wNumber)returns);
}

// int GetLineLength(long lineNo) const
void wxTextCtrl_GetLineLength() {
    long lineNo = (long)wStackPopNumber();
    int returns = ((wxTextCtrl *)(wTheCall->self->ptr))->GetLineLength(lineNo);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// wxString GetLineText(long lineNo) const
void wxTextCtrl_GetLineText() {
    long lineNo = (long)wStackPopNumber();
    wxString returns = ((wxTextCtrl *)(wTheCall->self->ptr))->GetLineText(lineNo);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// int GetNumberOfLines() const
void wxTextCtrl_GetNumberOfLines() {
    int returns = ((wxTextCtrl *)(wTheCall->self->ptr))->GetNumberOfLines();
    wStackPushNumber( (wNumber)returns);
}

void wxTextCtrl_GetSelection()
{
    long from, to;
    ((wxTextCtrl *)wTheCall->self->ptr)->GetSelection(&from, &to);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)from );
    wStackPushNumber( (wNumber)to );
}

void wxTextCtrl_GetSelectionFrom()
{
    long from, to;
    ((wxTextCtrl *)wTheCall->self->ptr)->GetSelection(&from, &to);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)from );
}

void wxTextCtrl_GetSelectionTo()
{
    long from, to;
    ((wxTextCtrl *)wTheCall->self->ptr)->GetSelection(&from, &to);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)to );
}

// wxString GetValue() const
void wxTextCtrl_GetValue() {
    wxString returns = ((wxTextCtrl *)(wTheCall->self->ptr))->GetValue();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// bool IsModified() const
void wxTextCtrl_IsModified() {
    bool returns = ((wxTextCtrl *)(wTheCall->self->ptr))->IsModified();
    wStackPushNumber( (wNumber)returns);
}

// bool LoadFile(const wxString& filename)
void wxTextCtrl_LoadFile() {
    wxString filename = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = ((wxTextCtrl *)(wTheCall->self->ptr))->LoadFile(filename);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// virtual void Paste()
void wxTextCtrl_Paste() {
    ((wxTextCtrl *)(wTheCall->self->ptr))->Paste();
}

// bool PositionToXY(long pos, long *x, long *y) const
void wxTextCtrl_PositionToXY() {
    long *y = (long *)wStackPopObjectPtr( NULL );
    long *x = (long *)wStackPopObjectPtr( NULL );
    long pos = (long)wStackPopNumber();
    bool returns = ((wxTextCtrl *)(wTheCall->self->ptr))->PositionToXY(pos, x, y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// virtual void Redo()
void wxTextCtrl_Redo() {
    ((wxTextCtrl *)(wTheCall->self->ptr))->Redo();
}

// virtual void Remove(long from, long to)
void wxTextCtrl_Remove() {
    long to = (long)wStackPopNumber();
    long from = (long)wStackPopNumber();
    ((wxTextCtrl *)(wTheCall->self->ptr))->Remove(from, to);
    wWrapDerefArgs();
}

// virtual void Replace(long from, long to, const wxString& value)
void wxTextCtrl_Replace() {
    wxString value = wxString(wStackPopChar(), *wxConvCurrent);
    long to = (long)wStackPopNumber();
    long from = (long)wStackPopNumber();
    ((wxTextCtrl *)(wTheCall->self->ptr))->Replace(from, to, value);
    wWrapDerefArgs();
}

// bool SaveFile(const wxString& filename)
void wxTextCtrl_SaveFile() {
    wxString filename = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = ((wxTextCtrl *)(wTheCall->self->ptr))->SaveFile(filename);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// virtual void SetEditable(const bool editable)
void wxTextCtrl_SetEditable() {
    bool editable = (bool)wStackPopNumber();
    ((wxTextCtrl *)(wTheCall->self->ptr))->SetEditable(editable);
    wWrapDerefArgs();
}

// virtual void SetInsertionPoint(long pos)
void wxTextCtrl_SetInsertionPoint() {
    long pos = (long)wStackPopNumber();
    ((wxTextCtrl *)(wTheCall->self->ptr))->SetInsertionPoint(pos);
    wWrapDerefArgs();
}

// virtual void SetInsertionPointEnd()
void wxTextCtrl_SetInsertionPointEnd() {
    ((wxTextCtrl *)(wTheCall->self->ptr))->SetInsertionPointEnd();
}

// virtual void SetSelection(long from, long to)
void wxTextCtrl_SetSelection() {
    long to = (long)wStackPopNumber();
    long from = (long)wStackPopNumber();
    ((wxTextCtrl *)(wTheCall->self->ptr))->SetSelection(from, to);
    wWrapDerefArgs();
}

// virtual void SetValue(const wxString& value)
void wxTextCtrl_SetValue() {
    wxString value = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxTextCtrl *)(wTheCall->self->ptr))->SetValue(value);
    wWrapDerefArgs();
}

// void ShowPosition(long pos)
void wxTextCtrl_ShowPosition() {
    long pos = (long)wStackPopNumber();
    ((wxTextCtrl *)(wTheCall->self->ptr))->ShowPosition(pos);
    wWrapDerefArgs();
}

// virtual void Undo()
void wxTextCtrl_Undo() {
    ((wxTextCtrl *)(wTheCall->self->ptr))->Undo();
}

// void WriteText(const wxString& text)
void wxTextCtrl_WriteText() {
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxTextCtrl *)(wTheCall->self->ptr))->WriteText(text);
    wWrapDerefArgs();
}

// long XYToPosition(long x, long y)
void wxTextCtrl_XYToPosition() {
    long y = (long)wStackPopNumber();
    long x = (long)wStackPopNumber();
    long returns = ((wxTextCtrl *)(wTheCall->self->ptr))->XYToPosition(x, y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

void wxTreeCtrl_del()
{
    delete (wxTreeCtrl *)(wTheCall->self->ptr);
}


// wxTreeCtrl(wxWindow* parent, wxWindowID id, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxTR_HAS_BUTTONS, const wxValidator& validator = wxDefaultValidator, const wxString& name = "listCtrl")
void wxTreeCtrl_new() {
    wxString name = wxString((wTheCall->parmCount > 6 ? wStackPopChar() : "listCtrl"), *wxConvCurrent);
    const wxValidator *validator = (wTheCall->parmCount > 5 ? (wxValidator *)wStackPopObjectPtr( _wxValidator) : &wxDefaultValidator);
    long style = (wTheCall->parmCount > 4 ? (long)wStackPopNumber() : wxTR_HAS_BUTTONS);
    const wxSize *size = (wTheCall->parmCount > 3 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 2 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxTreeCtrl *returns = new wxTreeCtrl(parent, id, *pos, *size, style, *validator, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxTreeCtrl, (void *)returns );
}

// ~wxTreeCtrl()
void wxTreeCtrl_finalize() {
    ((wxTreeCtrl *)(wTheCall->self->ptr))->~wxTreeCtrl();
}

// wxTreeItemId AddRoot(const wxString& text, int image = -1, int selImage = -1, wxTreeItemData* data = NULL)
void wxTreeCtrl_AddRoot() {
    wxTreeItemData *data = (wTheCall->parmCount > 3 ? (wxTreeItemData *)wStackPopObjectPtr( _wxTreeItemData) : NULL);
    int selImage = (wTheCall->parmCount > 2 ? (int)wStackPopNumber() : -1);
    int image = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : -1);
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    // make a pointer via copy constructor
    wxTreeItemId *returns = new wxTreeItemId(((wxTreeCtrl *)(wTheCall->self->ptr))->AddRoot(text, image, selImage, data));
    wWrapDerefArgs();
    wWrapPushObject( _wxTreeItemId, W_TRUE, (void *)returns );
}

// wxTreeItemId AppendItem(const wxTreeItemId& parent, const wxString& text, int image = -1, int selImage = -1, wxTreeItemData* data = NULL)
void wxTreeCtrl_AppendItem() {
    wxTreeItemData *data = (wTheCall->parmCount > 4 ? (wxTreeItemData *)wStackPopObjectPtr( _wxTreeItemData) : NULL);
    int selImage = (wTheCall->parmCount > 3 ? (int)wStackPopNumber() : -1);
    int image = (wTheCall->parmCount > 2 ? (int)wStackPopNumber() : -1);
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    wxTreeItemId *parent = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    // make a pointer via copy constructor
    wxTreeItemId *returns = new wxTreeItemId(((wxTreeCtrl *)(wTheCall->self->ptr))->AppendItem(*parent, text, image, selImage, data));
    wWrapDerefArgs();
    wWrapPushObject( _wxTreeItemId, W_TRUE, (void *)returns );
}

// void Collapse(const wxTreeItemId& item)
void wxTreeCtrl_Collapse() {
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    ((wxTreeCtrl *)(wTheCall->self->ptr))->Collapse(*item);
    wWrapDerefArgs();
}

// void CollapseAndReset(const wxTreeItemId& item)
void wxTreeCtrl_CollapseAndReset() {
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    ((wxTreeCtrl *)(wTheCall->self->ptr))->CollapseAndReset(*item);
    wWrapDerefArgs();
}

// bool Create(wxWindow* parent, wxWindowID id, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxTR_HAS_BUTTONS, const wxValidator& validator = wxDefaultValidator, const wxString& name = "listCtrl")
void wxTreeCtrl_Create() {
    wxString name = wxString((wTheCall->parmCount > 6 ? wStackPopChar() : "listCtrl"), *wxConvCurrent);
    const wxValidator *validator = (wTheCall->parmCount > 5 ? (wxValidator *)wStackPopObjectPtr( _wxValidator) : &wxDefaultValidator);
    long style = (wTheCall->parmCount > 4 ? (long)wStackPopNumber() : wxTR_HAS_BUTTONS);
    const wxSize *size = (wTheCall->parmCount > 3 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 2 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxTreeCtrl *)(wTheCall->self->ptr))->Create(parent, id, *pos, *size, style, *validator, name);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void Delete(const wxTreeItemId& item)
void wxTreeCtrl_Delete() {
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    ((wxTreeCtrl *)(wTheCall->self->ptr))->Delete(*item);
    wWrapDerefArgs();
}

// void DeleteAllItems()
void wxTreeCtrl_DeleteAllItems() {
    ((wxTreeCtrl *)(wTheCall->self->ptr))->DeleteAllItems();
}

// void EditLabel(const wxTreeItemId& item)
void wxTreeCtrl_EditLabel() {
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    ((wxTreeCtrl *)(wTheCall->self->ptr))->EditLabel(*item);
    wWrapDerefArgs();
}

// void EnsureVisible(const wxTreeItemId& item)
void wxTreeCtrl_EnsureVisible() {
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    ((wxTreeCtrl *)(wTheCall->self->ptr))->EnsureVisible(*item);
    wWrapDerefArgs();
}

// void Expand(const wxTreeItemId& item)
void wxTreeCtrl_Expand() {
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    ((wxTreeCtrl *)(wTheCall->self->ptr))->Expand(*item);
    wWrapDerefArgs();
}

// size_t GetChildrenCount(const wxTreeItemId& item, bool recursively = TRUE) const
void wxTreeCtrl_GetChildrenCount() {
    bool recursively = (wTheCall->parmCount > 1 ? (bool)wStackPopNumber() : TRUE);
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    size_t returns = ((wxTreeCtrl *)(wTheCall->self->ptr))->GetChildrenCount(*item, recursively);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int GetCount() const
void wxTreeCtrl_GetCount() {
    int returns = ((wxTreeCtrl *)(wTheCall->self->ptr))->GetCount();
    wStackPushNumber( (wNumber)returns);
}

void wxTreeCtrl_GetFirstChild()
{
// long cookie
long cookie = (long)wStackPopNumber();
// const wxTreeItemId& item
wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
wxTreeItemId *returns = new wxTreeItemId(((wxTreeCtrl *)(wTheCall->self->ptr))->GetFirstChild(*item, cookie));
wWrapDerefArgs();
wWrapPushObject( _wxTreeItemId, W_TRUE, (void *)returns );    
wStackPushNumber( (wNumber)cookie );
}
// wxTreeItemId GetFirstVisibleItem() const
void wxTreeCtrl_GetFirstVisibleItem() {
    // make a pointer via copy constructor
    wxTreeItemId *returns = new wxTreeItemId(((wxTreeCtrl *)(wTheCall->self->ptr))->GetFirstVisibleItem());
    wWrapPushObject( _wxTreeItemId, W_TRUE, (void *)returns );
}

// wxImageList* GetImageList() const
void wxTreeCtrl_GetImageList() {
    wxImageList *returns = ((wxTreeCtrl *)(wTheCall->self->ptr))->GetImageList();
    wWrapPushObject( _wxImageList, W_TRUE, (void *)returns );
}

// int GetIndent() const
void wxTreeCtrl_GetIndent() {
    int returns = ((wxTreeCtrl *)(wTheCall->self->ptr))->GetIndent();
    wStackPushNumber( (wNumber)returns);
}

// wxTreeItemData* GetItemData(const wxTreeItemId& item) const
void wxTreeCtrl_GetItemData() {
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    wxTreeItemData *returns = ((wxTreeCtrl *)(wTheCall->self->ptr))->GetItemData(*item);
    wWrapDerefArgs();
    wWrapPushObject( _wxTreeItemData, W_TRUE, (void *)returns );
}

// int GetItemImage(const wxTreeItemId& item, wxTreeItemIcon which = wxTreeItemIcon_Normal) const
void wxTreeCtrl_GetItemImage() {
    wxTreeItemIcon which = (wTheCall->parmCount > 1 ? (wxTreeItemIcon)(int)wStackPopNumber() : wxTreeItemIcon_Normal);
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    int returns = ((wxTreeCtrl *)(wTheCall->self->ptr))->GetItemImage(*item, (wxTreeItemIcon)which);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// wxString GetItemText(const wxTreeItemId& item) const
void wxTreeCtrl_GetItemText() {
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    wxString returns = ((wxTreeCtrl *)(wTheCall->self->ptr))->GetItemText(*item);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxTreeItemId GetLastChild(const wxTreeItemId& item) const
void wxTreeCtrl_GetLastChild() {
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    // make a pointer via copy constructor
    wxTreeItemId *returns = new wxTreeItemId(((wxTreeCtrl *)(wTheCall->self->ptr))->GetLastChild(*item));
    wWrapDerefArgs();
    wWrapPushObject( _wxTreeItemId, W_TRUE, (void *)returns );
}

void wxTreeCtrl_GetNextChild()
{
// long cookie
long cookie = (long)wStackPopNumber();
// const wxTreeItemId& item
wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
// call GetNextChild
// make a pointer via copy constructor
wxTreeItemId *returns = new wxTreeItemId(((wxTreeCtrl *)(wTheCall->self->ptr))->GetNextChild(*item, cookie));
wWrapDerefArgs();
wWrapPushObject( _wxTreeItemId, W_TRUE, (void *)returns );    
wStackPushNumber( (wNumber)cookie );
}
// wxTreeItemId GetNextSibling(const wxTreeItemId& item) const
void wxTreeCtrl_GetNextSibling() {
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    // make a pointer via copy constructor
    wxTreeItemId *returns = new wxTreeItemId(((wxTreeCtrl *)(wTheCall->self->ptr))->GetNextSibling(*item));
    wWrapDerefArgs();
    wWrapPushObject( _wxTreeItemId, W_TRUE, (void *)returns );
}

// wxTreeItemId GetNextVisible(const wxTreeItemId& item) const
void wxTreeCtrl_GetNextVisible() {
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    // make a pointer via copy constructor
    wxTreeItemId *returns = new wxTreeItemId(((wxTreeCtrl *)(wTheCall->self->ptr))->GetNextVisible(*item));
    wWrapDerefArgs();
    wWrapPushObject( _wxTreeItemId, W_TRUE, (void *)returns );
}

// wxTreeItemId GetParent(const wxTreeItemId& item) const
void wxTreeCtrl_GetParent() {
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    // make a pointer via copy constructor
    wxTreeItemId *returns = new wxTreeItemId(((wxTreeCtrl *)(wTheCall->self->ptr))->GetParent(*item));
    wWrapDerefArgs();
    wWrapPushObject( _wxTreeItemId, W_TRUE, (void *)returns );
}

// wxTreeItemId GetPrevSibling(const wxTreeItemId& item) const
void wxTreeCtrl_GetPrevSibling() {
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    // make a pointer via copy constructor
    wxTreeItemId *returns = new wxTreeItemId(((wxTreeCtrl *)(wTheCall->self->ptr))->GetPrevSibling(*item));
    wWrapDerefArgs();
    wWrapPushObject( _wxTreeItemId, W_TRUE, (void *)returns );
}

// wxTreeItemId GetPrevVisible(const wxTreeItemId& item) const
void wxTreeCtrl_GetPrevVisible() {
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    // make a pointer via copy constructor
    wxTreeItemId *returns = new wxTreeItemId(((wxTreeCtrl *)(wTheCall->self->ptr))->GetPrevVisible(*item));
    wWrapDerefArgs();
    wWrapPushObject( _wxTreeItemId, W_TRUE, (void *)returns );
}

// wxTreeItemId GetRootItem() const
void wxTreeCtrl_GetRootItem() {
    // make a pointer via copy constructor
    wxTreeItemId *returns = new wxTreeItemId(((wxTreeCtrl *)(wTheCall->self->ptr))->GetRootItem());
    wWrapPushObject( _wxTreeItemId, W_TRUE, (void *)returns );
}

// int GetItemSelectedImage(const wxTreeItemId& item) const
void wxTreeCtrl_GetItemSelectedImage() {
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    int returns = ((wxTreeCtrl *)(wTheCall->self->ptr))->GetItemSelectedImage(*item);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// wxTreeItemId GetSelection() const
void wxTreeCtrl_GetSelection() {
    // make a pointer via copy constructor
    wxTreeItemId *returns = new wxTreeItemId(((wxTreeCtrl *)(wTheCall->self->ptr))->GetSelection());
    wWrapPushObject( _wxTreeItemId, W_TRUE, (void *)returns );
}

// size_t GetSelections(wxArrayTreeItemIds& selection) const
void wxTreeCtrl_GetSelections() {
    wxArrayTreeItemIds *selection = (wxArrayTreeItemIds *)wStackPopObjectPtr( _wxArrayTreeItemIds);
    size_t returns = ((wxTreeCtrl *)(wTheCall->self->ptr))->GetSelections(*selection);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// wxImageList* GetStateImageList() const
void wxTreeCtrl_GetStateImageList() {
    wxImageList *returns = ((wxTreeCtrl *)(wTheCall->self->ptr))->GetStateImageList();
    wWrapPushObject( _wxImageList, W_TRUE, (void *)returns );
}

// wxTreeItemId HitTest(const wxPoint& point, int& flags)
void wxTreeCtrl_HitTest() {
    int *flags = (int *)wStackPopObjectPtr( 0 );
    wxPoint *point = (wxPoint *)wStackPopObjectPtr( _wxPoint);
    // make a pointer via copy constructor
    wxTreeItemId *returns = new wxTreeItemId(((wxTreeCtrl *)(wTheCall->self->ptr))->HitTest(*point, *flags));
    wWrapDerefArgs();
    wWrapPushObject( _wxTreeItemId, W_TRUE, (void *)returns );
}

// wxTreeItemId InsertItem(const wxTreeItemId& parent, const wxTreeItemId& previous, const wxString& text, int image = -1, int selImage = -1, wxTreeItemData* data = NULL)
void wxTreeCtrl_InsertItem() {
    wxTreeItemData *data = (wTheCall->parmCount > 5 ? (wxTreeItemData *)wStackPopObjectPtr( _wxTreeItemData) : NULL);
    int selImage = (wTheCall->parmCount > 4 ? (int)wStackPopNumber() : -1);
    int image = (wTheCall->parmCount > 3 ? (int)wStackPopNumber() : -1);
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    wxTreeItemId *previous = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    wxTreeItemId *parent = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    // make a pointer via copy constructor
    wxTreeItemId *returns = new wxTreeItemId(((wxTreeCtrl *)(wTheCall->self->ptr))->InsertItem(*parent, *previous, text, image, selImage, data));
    wWrapDerefArgs();
    wWrapPushObject( _wxTreeItemId, W_TRUE, (void *)returns );
}

// %rename InsertItemBefore wxTreeItemId InsertItem(const wxTreeItemId& parent, size_t before, const wxString& text, int image = -1, int selImage = -1, wxTreeItemData* data = NULL)
void wxTreeCtrl_InsertItemBefore() {
    wxTreeItemData *data = (wTheCall->parmCount > 5 ? (wxTreeItemData *)wStackPopObjectPtr( _wxTreeItemData) : NULL);
    int selImage = (wTheCall->parmCount > 4 ? (int)wStackPopNumber() : -1);
    int image = (wTheCall->parmCount > 3 ? (int)wStackPopNumber() : -1);
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    size_t before = (size_t)wStackPopNumber();
    wxTreeItemId *parent = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    // make a pointer via copy constructor
    wxTreeItemId *returns = new wxTreeItemId(((wxTreeCtrl *)(wTheCall->self->ptr))->InsertItem(*parent, before, text, image, selImage, data));
    wWrapDerefArgs();
    wWrapPushObject( _wxTreeItemId, W_TRUE, (void *)returns );
}

// bool IsBold(const wxTreeItemId& item) const
void wxTreeCtrl_IsBold() {
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    bool returns = ((wxTreeCtrl *)(wTheCall->self->ptr))->IsBold(*item);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool IsExpanded(const wxTreeItemId& item) const
void wxTreeCtrl_IsExpanded() {
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    bool returns = ((wxTreeCtrl *)(wTheCall->self->ptr))->IsExpanded(*item);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool IsSelected(const wxTreeItemId& item) const
void wxTreeCtrl_IsSelected() {
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    bool returns = ((wxTreeCtrl *)(wTheCall->self->ptr))->IsSelected(*item);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool IsVisible(const wxTreeItemId& item) const
void wxTreeCtrl_IsVisible() {
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    bool returns = ((wxTreeCtrl *)(wTheCall->self->ptr))->IsVisible(*item);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool ItemHasChildren(const wxTreeItemId& item) const
void wxTreeCtrl_ItemHasChildren() {
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    bool returns = ((wxTreeCtrl *)(wTheCall->self->ptr))->ItemHasChildren(*item);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// wxTreeItemId PrependItem(const wxTreeItemId& parent, const wxString& text, int image = -1, int selImage = -1, wxTreeItemData* data = NULL)
void wxTreeCtrl_PrependItem() {
    wxTreeItemData *data = (wTheCall->parmCount > 4 ? (wxTreeItemData *)wStackPopObjectPtr( _wxTreeItemData) : NULL);
    int selImage = (wTheCall->parmCount > 3 ? (int)wStackPopNumber() : -1);
    int image = (wTheCall->parmCount > 2 ? (int)wStackPopNumber() : -1);
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    wxTreeItemId *parent = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    // make a pointer via copy constructor
    wxTreeItemId *returns = new wxTreeItemId(((wxTreeCtrl *)(wTheCall->self->ptr))->PrependItem(*parent, text, image, selImage, data));
    wWrapDerefArgs();
    wWrapPushObject( _wxTreeItemId, W_TRUE, (void *)returns );
}

// void ScrollTo(const wxTreeItemId& item)
void wxTreeCtrl_ScrollTo() {
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    ((wxTreeCtrl *)(wTheCall->self->ptr))->ScrollTo(*item);
    wWrapDerefArgs();
}

// void SelectItem(const wxTreeItemId& item)
void wxTreeCtrl_SelectItem() {
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    ((wxTreeCtrl *)(wTheCall->self->ptr))->SelectItem(*item);
    wWrapDerefArgs();
}

// void SetIndent(int indent)
void wxTreeCtrl_SetIndent() {
    int indent = (int)wStackPopNumber();
    ((wxTreeCtrl *)(wTheCall->self->ptr))->SetIndent(indent);
    wWrapDerefArgs();
}

// void SetImageList(wxImageList* imageList)
void wxTreeCtrl_SetImageList() {
    wxImageList *imageList = (wxImageList *)wStackPopObjectPtr( _wxImageList);
    ((wxTreeCtrl *)(wTheCall->self->ptr))->SetImageList(imageList);
    wWrapDerefArgs();
}

// %alias SetItemBackgroundColor void SetItemBackgroundColour(const wxTreeItemId& item, const wxColour& col)
void wxTreeCtrl_SetItemBackgroundColour() {
    wxColour *col = (wxColour *)wStackPopObjectPtr( _wxColour);
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    ((wxTreeCtrl *)(wTheCall->self->ptr))->SetItemBackgroundColour(*item, *col);
    wWrapDerefArgs();
}

// void SetItemBold(const wxTreeItemId& item, bool bold = TRUE)
void wxTreeCtrl_SetItemBold() {
    bool bold = (wTheCall->parmCount > 1 ? (bool)wStackPopNumber() : TRUE);
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    ((wxTreeCtrl *)(wTheCall->self->ptr))->SetItemBold(*item, bold);
    wWrapDerefArgs();
}

// void SetItemData(const wxTreeItemId& item, wxTreeItemData* data)
void wxTreeCtrl_SetItemData() {
    wxTreeItemData *data = (wxTreeItemData *)wStackPopObjectPtr( _wxTreeItemData);
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    ((wxTreeCtrl *)(wTheCall->self->ptr))->SetItemData(*item, data);
    wWrapDerefArgs();
}

// void SetItemFont(const wxTreeItemId& item, const wxFont& font)
void wxTreeCtrl_SetItemFont() {
    wxFont *font = (wxFont *)wStackPopObjectPtr( _wxFont);
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    ((wxTreeCtrl *)(wTheCall->self->ptr))->SetItemFont(*item, *font);
    wWrapDerefArgs();
}

// void SetItemHasChildren(const wxTreeItemId& item, bool hasChildren = TRUE)
void wxTreeCtrl_SetItemHasChildren() {
    bool hasChildren = (wTheCall->parmCount > 1 ? (bool)wStackPopNumber() : TRUE);
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    ((wxTreeCtrl *)(wTheCall->self->ptr))->SetItemHasChildren(*item, hasChildren);
    wWrapDerefArgs();
}

// void SetItemImage(const wxTreeItemId& item, int image, wxTreeItemIcon which = wxTreeItemIcon_Normal)
void wxTreeCtrl_SetItemImage() {
    wxTreeItemIcon which = (wTheCall->parmCount > 2 ? (wxTreeItemIcon)(int)wStackPopNumber() : wxTreeItemIcon_Normal);
    int image = (int)wStackPopNumber();
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    ((wxTreeCtrl *)(wTheCall->self->ptr))->SetItemImage(*item, image, (wxTreeItemIcon)which);
    wWrapDerefArgs();
}

// void SetItemSelectedImage(const wxTreeItemId& item, int selImage)
void wxTreeCtrl_SetItemSelectedImage() {
    int selImage = (int)wStackPopNumber();
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    ((wxTreeCtrl *)(wTheCall->self->ptr))->SetItemSelectedImage(*item, selImage);
    wWrapDerefArgs();
}

// void SetItemText(const wxTreeItemId& item, const wxString& text)
void wxTreeCtrl_SetItemText() {
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    ((wxTreeCtrl *)(wTheCall->self->ptr))->SetItemText(*item, text);
    wWrapDerefArgs();
}

// %alias SetItemTextColor void SetItemTextColour(const wxTreeItemId& item, const wxColour& col)
void wxTreeCtrl_SetItemTextColour() {
    wxColour *col = (wxColour *)wStackPopObjectPtr( _wxColour);
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    ((wxTreeCtrl *)(wTheCall->self->ptr))->SetItemTextColour(*item, *col);
    wWrapDerefArgs();
}

// void SetStateImageList(wxImageList* imageList)
void wxTreeCtrl_SetStateImageList() {
    wxImageList *imageList = (wxImageList *)wStackPopObjectPtr( _wxImageList);
    ((wxTreeCtrl *)(wTheCall->self->ptr))->SetStateImageList(imageList);
    wWrapDerefArgs();
}

// void SortChildren(const wxTreeItemId& item)
void wxTreeCtrl_SortChildren() {
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    ((wxTreeCtrl *)(wTheCall->self->ptr))->SortChildren(*item);
    wWrapDerefArgs();
}

// void Toggle(const wxTreeItemId& item)
void wxTreeCtrl_Toggle() {
    wxTreeItemId *item = (wxTreeItemId *)wStackPopObjectPtr( _wxTreeItemId);
    ((wxTreeCtrl *)(wTheCall->self->ptr))->Toggle(*item);
    wWrapDerefArgs();
}

// void Unselect()
void wxTreeCtrl_Unselect() {
    ((wxTreeCtrl *)(wTheCall->self->ptr))->Unselect();
}

// void UnselectAll()
void wxTreeCtrl_UnselectAll() {
    ((wxTreeCtrl *)(wTheCall->self->ptr))->UnselectAll();
}

void wxScrollBar_del()
{
    delete (wxScrollBar *)(wTheCall->self->ptr);
}


// wxScrollBar(wxWindow* parent, wxWindowID id, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxSB_HORIZONTAL, const wxValidator& validator = wxDefaultValidator, const wxString& name = "scrollBar")
void wxScrollBar_new() {
    wxString name = wxString((wTheCall->parmCount > 6 ? wStackPopChar() : "scrollBar"), *wxConvCurrent);
    const wxValidator *validator = (wTheCall->parmCount > 5 ? (wxValidator *)wStackPopObjectPtr( _wxValidator) : &wxDefaultValidator);
    long style = (wTheCall->parmCount > 4 ? (long)wStackPopNumber() : wxSB_HORIZONTAL);
    const wxSize *size = (wTheCall->parmCount > 3 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 2 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxScrollBar *returns = new wxScrollBar(parent, id, *pos, *size, style, *validator, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxScrollBar, (void *)returns );
}

// ~wxScrollBar()
void wxScrollBar_finalize() {
    ((wxScrollBar *)(wTheCall->self->ptr))->~wxScrollBar();
}

// bool Create(wxWindow* parent, wxWindowID id, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxSB_HORIZONTAL, const wxValidator& validator = wxDefaultValidator, const wxString& name = "scrollBar")
void wxScrollBar_Create() {
    wxString name = wxString((wTheCall->parmCount > 6 ? wStackPopChar() : "scrollBar"), *wxConvCurrent);
    const wxValidator *validator = (wTheCall->parmCount > 5 ? (wxValidator *)wStackPopObjectPtr( _wxValidator) : &wxDefaultValidator);
    long style = (wTheCall->parmCount > 4 ? (long)wStackPopNumber() : wxSB_HORIZONTAL);
    const wxSize *size = (wTheCall->parmCount > 3 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 2 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxScrollBar *)(wTheCall->self->ptr))->Create(parent, id, *pos, *size, style, *validator, name);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int GetRange() const
void wxScrollBar_GetRange() {
    int returns = ((wxScrollBar *)(wTheCall->self->ptr))->GetRange();
    wStackPushNumber( (wNumber)returns);
}

// int GetPageSize() const
void wxScrollBar_GetPageSize() {
    int returns = ((wxScrollBar *)(wTheCall->self->ptr))->GetPageSize();
    wStackPushNumber( (wNumber)returns);
}

// int GetThumbPosition() const
void wxScrollBar_GetThumbPosition() {
    int returns = ((wxScrollBar *)(wTheCall->self->ptr))->GetThumbPosition();
    wStackPushNumber( (wNumber)returns);
}

// void SetThumbPosition(int viewStart)
void wxScrollBar_SetThumbPosition() {
    int viewStart = (int)wStackPopNumber();
    ((wxScrollBar *)(wTheCall->self->ptr))->SetThumbPosition(viewStart);
    wWrapDerefArgs();
}

// virtual void SetScrollbar(int position, int thumbSize, int range, int pageSize, const bool refresh = TRUE)
void wxScrollBar_SetScrollbar() {
    const bool refresh = (wTheCall->parmCount > 4 ? (bool)wStackPopNumber() : TRUE);
    int pageSize = (int)wStackPopNumber();
    int range = (int)wStackPopNumber();
    int thumbSize = (int)wStackPopNumber();
    int position = (int)wStackPopNumber();
    ((wxScrollBar *)(wTheCall->self->ptr))->SetScrollbar(position, thumbSize, range, pageSize, refresh);
    wWrapDerefArgs();
}

void wxSpinButton_del()
{
    delete (wxSpinButton *)(wTheCall->self->ptr);
}


// wxSpinButton(wxWindow *parent, wxWindowID id = -1, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxSP_VERTICAL | wxSP_ARROW_KEYS, const wxString& name = "wxSpinButton")
void wxSpinButton_new() {
    wxString name = wxString((wTheCall->parmCount > 5 ? wStackPopChar() : "wxSpinButton"), *wxConvCurrent);
    long style = (wTheCall->parmCount > 4 ? (long)wStackPopNumber() : wxSP_VERTICAL | wxSP_ARROW_KEYS);
    const wxSize *size = (wTheCall->parmCount > 3 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 2 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxWindowID id = (wTheCall->parmCount > 1 ? (wxWindowID)wStackPopNumber() : -1);
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxSpinButton *returns = new wxSpinButton(parent, id, *pos, *size, style, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxSpinButton, (void *)returns );
}

// ~wxSpinButton()
void wxSpinButton_finalize() {
    ((wxSpinButton *)(wTheCall->self->ptr))->~wxSpinButton();
}

// bool Create(wxWindow *parent, wxWindowID id = -1, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxSP_VERTICAL | wxSP_ARROW_KEYS, const wxString& name = "wxSpinButton")
void wxSpinButton_Create() {
    wxString name = wxString((wTheCall->parmCount > 5 ? wStackPopChar() : "wxSpinButton"), *wxConvCurrent);
    long style = (wTheCall->parmCount > 4 ? (long)wStackPopNumber() : wxSP_VERTICAL | wxSP_ARROW_KEYS);
    const wxSize *size = (wTheCall->parmCount > 3 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 2 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxWindowID id = (wTheCall->parmCount > 1 ? (wxWindowID)wStackPopNumber() : -1);
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxSpinButton *)(wTheCall->self->ptr))->Create(parent, id, *pos, *size, style, name);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int GetMax() const
void wxSpinButton_GetMax() {
    int returns = ((wxSpinButton *)(wTheCall->self->ptr))->GetMax();
    wStackPushNumber( (wNumber)returns);
}

// int GetMin() const
void wxSpinButton_GetMin() {
    int returns = ((wxSpinButton *)(wTheCall->self->ptr))->GetMin();
    wStackPushNumber( (wNumber)returns);
}

// int GetValue() const
void wxSpinButton_GetValue() {
    int returns = ((wxSpinButton *)(wTheCall->self->ptr))->GetValue();
    wStackPushNumber( (wNumber)returns);
}

// void SetRange(int min, int max)
void wxSpinButton_SetRange() {
    int max = (int)wStackPopNumber();
    int min = (int)wStackPopNumber();
    ((wxSpinButton *)(wTheCall->self->ptr))->SetRange(min, max);
    wWrapDerefArgs();
}

// void SetValue(int value)
void wxSpinButton_SetValue() {
    int value = (int)wStackPopNumber();
    ((wxSpinButton *)(wTheCall->self->ptr))->SetValue(value);
    wWrapDerefArgs();
}

void wxSpinCtrl_del()
{
    delete (wxSpinCtrl *)(wTheCall->self->ptr);
}


// wxSpinCtrl(wxWindow* parent, wxWindowID id = -1, const wxString& value = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxSP_ARROW_KEYS, int min = 0, int max = 100, int initial = 0, const wxString& name = "wxSpinCtrl")
void wxSpinCtrl_new() {
    wxString name = wxString((wTheCall->parmCount > 9 ? wStackPopChar() : "wxSpinCtrl"), *wxConvCurrent);
    int initial = (wTheCall->parmCount > 8 ? (int)wStackPopNumber() : 0);
    int max = (wTheCall->parmCount > 7 ? (int)wStackPopNumber() : 100);
    int min = (wTheCall->parmCount > 6 ? (int)wStackPopNumber() : 0);
    long style = (wTheCall->parmCount > 5 ? (long)wStackPopNumber() : wxSP_ARROW_KEYS);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 3 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxString value = wxString((wTheCall->parmCount > 2 ? wStackPopChar() : wxEmptyString), *wxConvCurrent);
    wxWindowID id = (wTheCall->parmCount > 1 ? (wxWindowID)wStackPopNumber() : -1);
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxSpinCtrl *returns = new wxSpinCtrl(parent, id, value, *pos, *size, style, min, max, initial, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxSpinCtrl, (void *)returns );
}

// bool Create(wxWindow* parent, wxWindowID id = -1, const wxString& value = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxSP_ARROW_KEYS, int min = 0, int max = 100, int initial = 0, const wxString& name = "wxSpinCtrl")
void wxSpinCtrl_Create() {
    wxString name = wxString((wTheCall->parmCount > 9 ? wStackPopChar() : "wxSpinCtrl"), *wxConvCurrent);
    int initial = (wTheCall->parmCount > 8 ? (int)wStackPopNumber() : 0);
    int max = (wTheCall->parmCount > 7 ? (int)wStackPopNumber() : 100);
    int min = (wTheCall->parmCount > 6 ? (int)wStackPopNumber() : 0);
    long style = (wTheCall->parmCount > 5 ? (long)wStackPopNumber() : wxSP_ARROW_KEYS);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 3 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxString value = wxString((wTheCall->parmCount > 2 ? wStackPopChar() : wxEmptyString), *wxConvCurrent);
    wxWindowID id = (wTheCall->parmCount > 1 ? (wxWindowID)wStackPopNumber() : -1);
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxSpinCtrl *)(wTheCall->self->ptr))->Create(parent, id, value, *pos, *size, style, min, max, initial, name);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void SetValue(const wxString& text)
void wxSpinCtrl_SetValue() {
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxSpinCtrl *)(wTheCall->self->ptr))->SetValue(text);
    wWrapDerefArgs();
}

// int GetValue() const
void wxSpinCtrl_GetValue() {
    int returns = ((wxSpinCtrl *)(wTheCall->self->ptr))->GetValue();
    wStackPushNumber( (wNumber)returns);
}

// void SetRange(int minVal, int maxVal)
void wxSpinCtrl_SetRange() {
    int maxVal = (int)wStackPopNumber();
    int minVal = (int)wStackPopNumber();
    ((wxSpinCtrl *)(wTheCall->self->ptr))->SetRange(minVal, maxVal);
    wWrapDerefArgs();
}

// int GetMin() const
void wxSpinCtrl_GetMin() {
    int returns = ((wxSpinCtrl *)(wTheCall->self->ptr))->GetMin();
    wStackPushNumber( (wNumber)returns);
}

// int GetMax() const
void wxSpinCtrl_GetMax() {
    int returns = ((wxSpinCtrl *)(wTheCall->self->ptr))->GetMax();
    wStackPushNumber( (wNumber)returns);
}

void wxStaticText_del()
{
    delete (wxStaticText *)(wTheCall->self->ptr);
}


// wxStaticText(wxWindow* parent, wxWindowID id, const wxString& label, const wxPoint& pos, const wxSize& size = wxDefaultSize, long style = 0, const wxString& name = "staticText")
void wxStaticText_new() {
    wxString name = wxString((wTheCall->parmCount > 6 ? wStackPopChar() : "staticText"), *wxConvCurrent);
    long style = (wTheCall->parmCount > 5 ? (long)wStackPopNumber() : 0);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    wxPoint *pos = (wxPoint *)wStackPopObjectPtr( _wxPoint);
    wxString label = wxString(wStackPopChar(), *wxConvCurrent);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxStaticText *returns = new wxStaticText(parent, id, label, *pos, *size, style, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxStaticText, (void *)returns );
}

// bool Create(wxWindow* parent, wxWindowID id, const wxString& label, const wxPoint& pos, const wxSize& size = wxDefaultSize, long style = 0, const wxString& name = "staticText")
void wxStaticText_Create() {
    wxString name = wxString((wTheCall->parmCount > 6 ? wStackPopChar() : "staticText"), *wxConvCurrent);
    long style = (wTheCall->parmCount > 5 ? (long)wStackPopNumber() : 0);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    wxPoint *pos = (wxPoint *)wStackPopObjectPtr( _wxPoint);
    wxString label = wxString(wStackPopChar(), *wxConvCurrent);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxStaticText *)(wTheCall->self->ptr))->Create(parent, id, label, *pos, *size, style, name);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// wxString GetLabel() const
void wxStaticText_GetLabel() {
    wxString returns = ((wxStaticText *)(wTheCall->self->ptr))->GetLabel();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// virtual void SetLabel(const wxString& label)
void wxStaticText_SetLabel() {
    wxString label = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxStaticText *)(wTheCall->self->ptr))->SetLabel(label);
    wWrapDerefArgs();
}

void wxStaticBitmap_del()
{
    delete (wxStaticBitmap *)(wTheCall->self->ptr);
}


// virtual void SetBitmap(const wxBitmap& label)
void wxStaticBitmap_SetBitmap() {
    wxBitmap *label = (wxBitmap *)wStackPopObjectPtr( _wxBitmap);
    ((wxStaticBitmap *)(wTheCall->self->ptr))->SetBitmap(*label);
    wWrapDerefArgs();
}

void wxRadioBox_del()
{
    delete (wxRadioBox *)(wTheCall->self->ptr);
}


// wxRadioBox(wxWindow* parent, wxWindowID id, const wxString& label, const wxPoint& point = wxDefaultPosition, const wxSize& size = wxDefaultSize, int n = 0, const wxString choices[] = NULL, int majorDimension = 0, long style = wxRA_SPECIFY_COLS, const wxValidator& validator = wxDefaultValidator, const wxString& name = "radioBox")
void wxRadioBox_new() {
    wxString name = wxString((wTheCall->parmCount > 10 ? wStackPopChar() : "radioBox"), *wxConvCurrent);
    const wxValidator *validator = (wTheCall->parmCount > 9 ? (wxValidator *)wStackPopObjectPtr( _wxValidator) : &wxDefaultValidator);
    long style = (wTheCall->parmCount > 8 ? (long)wStackPopNumber() : wxRA_SPECIFY_COLS);
    int majorDimension = (wTheCall->parmCount > 7 ? (int)wStackPopNumber() : 0);
    if (wTheCall->parmCount > 5) wStackPopNumber();
    wxString choices[1];
    int n = (wTheCall->parmCount > 5 ? (int)wStackPopNumber() : 0);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *point = (wTheCall->parmCount > 3 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxString label = wxString(wStackPopChar(), *wxConvCurrent);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxRadioBox *returns = new wxRadioBox(parent, id, label, *point, *size, n, choices, majorDimension, style, *validator, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxRadioBox, (void *)returns );
}

// ~wxRadioBox()
void wxRadioBox_finalize() {
    ((wxRadioBox *)(wTheCall->self->ptr))->~wxRadioBox();
}

// bool Create(wxWindow* parent, wxWindowID id, const wxString& label, const wxPoint& point = wxDefaultPosition, const wxSize& size = wxDefaultSize, int n = 0, const wxString choices[] = NULL, int majorDimension = 0, long style = wxRA_SPECIFY_COLS, const wxValidator& validator = wxDefaultValidator, const wxString& name = "radioBox")
void wxRadioBox_Create() {
    wxString name = wxString((wTheCall->parmCount > 10 ? wStackPopChar() : "radioBox"), *wxConvCurrent);
    const wxValidator *validator = (wTheCall->parmCount > 9 ? (wxValidator *)wStackPopObjectPtr( _wxValidator) : &wxDefaultValidator);
    long style = (wTheCall->parmCount > 8 ? (long)wStackPopNumber() : wxRA_SPECIFY_COLS);
    int majorDimension = (wTheCall->parmCount > 7 ? (int)wStackPopNumber() : 0);
    if (wTheCall->parmCount > 5) wStackPopNumber();
    wxString choices[1];
    int n = (wTheCall->parmCount > 5 ? (int)wStackPopNumber() : 0);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *point = (wTheCall->parmCount > 3 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxString label = wxString(wStackPopChar(), *wxConvCurrent);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxRadioBox *)(wTheCall->self->ptr))->Create(parent, id, label, *point, *size, n, choices, majorDimension, style, *validator, name);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void Enable(const bool enable)
void wxRadioBox_Enable() {
    bool enable = (bool)wStackPopNumber();
    ((wxRadioBox *)(wTheCall->self->ptr))->Enable(enable);
    wWrapDerefArgs();
}

// %rename EnableItem void Enable(int n, const bool enable)
void wxRadioBox_EnableItem() {
    bool enable = (bool)wStackPopNumber();
    int n = (int)wStackPopNumber();
    ((wxRadioBox *)(wTheCall->self->ptr))->Enable(n, enable);
    wWrapDerefArgs();
}

// int FindString(const wxString& string) const
void wxRadioBox_FindString() {
    wxString string = wxString(wStackPopChar(), *wxConvCurrent);
    int returns = ((wxRadioBox *)(wTheCall->self->ptr))->FindString(string);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int GetSelection() const
void wxRadioBox_GetSelection() {
    int returns = ((wxRadioBox *)(wTheCall->self->ptr))->GetSelection();
    wStackPushNumber( (wNumber)returns);
}

// wxString GetStringSelection() const
void wxRadioBox_GetStringSelection() {
    wxString returns = ((wxRadioBox *)(wTheCall->self->ptr))->GetStringSelection();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// void SetSelection(int n)
void wxRadioBox_SetSelection() {
    int n = (int)wStackPopNumber();
    ((wxRadioBox *)(wTheCall->self->ptr))->SetSelection(n);
    wWrapDerefArgs();
}

// void SetStringSelection(const wxString& string)
void wxRadioBox_SetStringSelection() {
    wxString string = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxRadioBox *)(wTheCall->self->ptr))->SetStringSelection(string);
    wWrapDerefArgs();
}

// void Show(const bool show)
void wxRadioBox_Show() {
    bool show = (bool)wStackPopNumber();
    ((wxRadioBox *)(wTheCall->self->ptr))->Show(show);
    wWrapDerefArgs();
}

// %rename ShowItem void Show(int item, const bool show)
void wxRadioBox_ShowItem() {
    bool show = (bool)wStackPopNumber();
    int item = (int)wStackPopNumber();
    ((wxRadioBox *)(wTheCall->self->ptr))->Show(item, show);
    wWrapDerefArgs();
}

// wxString GetString(int n) const
void wxRadioBox_GetString() {
    int n = (int)wStackPopNumber();
    wxString returns = ((wxRadioBox *)(wTheCall->self->ptr))->GetString(n);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

void wxRadioButton_del()
{
    delete (wxRadioButton *)(wTheCall->self->ptr);
}


// wxRadioButton(wxWindow* parent, wxWindowID id, const wxString& label, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = 0, const wxValidator& validator = wxDefaultValidator, const wxString& name = "radioButton")
void wxRadioButton_new() {
    wxString name = wxString((wTheCall->parmCount > 7 ? wStackPopChar() : "radioButton"), *wxConvCurrent);
    const wxValidator *validator = (wTheCall->parmCount > 6 ? (wxValidator *)wStackPopObjectPtr( _wxValidator) : &wxDefaultValidator);
    long style = (wTheCall->parmCount > 5 ? (long)wStackPopNumber() : 0);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 3 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxString label = wxString(wStackPopChar(), *wxConvCurrent);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxRadioButton *returns = new wxRadioButton(parent, id, label, *pos, *size, style, *validator, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxRadioButton, (void *)returns );
}

// ~wxRadioButton()
void wxRadioButton_finalize() {
    ((wxRadioButton *)(wTheCall->self->ptr))->~wxRadioButton();
}

// bool Create(wxWindow* parent, wxWindowID id, const wxString& label, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = 0, const wxValidator& validator = wxDefaultValidator, const wxString& name = "radioButton")
void wxRadioButton_Create() {
    wxString name = wxString((wTheCall->parmCount > 7 ? wStackPopChar() : "radioButton"), *wxConvCurrent);
    const wxValidator *validator = (wTheCall->parmCount > 6 ? (wxValidator *)wStackPopObjectPtr( _wxValidator) : &wxDefaultValidator);
    long style = (wTheCall->parmCount > 5 ? (long)wStackPopNumber() : 0);
    const wxSize *size = (wTheCall->parmCount > 4 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 3 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxString label = wxString(wStackPopChar(), *wxConvCurrent);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxRadioButton *)(wTheCall->self->ptr))->Create(parent, id, label, *pos, *size, style, *validator, name);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool GetValue() const
void wxRadioButton_GetValue() {
    bool returns = ((wxRadioButton *)(wTheCall->self->ptr))->GetValue();
    wStackPushNumber( (wNumber)returns);
}

// void SetValue(const bool value)
void wxRadioButton_SetValue() {
    bool value = (bool)wStackPopNumber();
    ((wxRadioButton *)(wTheCall->self->ptr))->SetValue(value);
    wWrapDerefArgs();
}

void wxSlider_del()
{
    delete (wxSlider *)(wTheCall->self->ptr);
}


// wxSlider(wxWindow* parent, wxWindowID id, int value , int minValue, int maxValue, const wxPoint& point = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxSL_HORIZONTAL, const wxValidator& validator = wxDefaultValidator, const wxString& name = "slider")
void wxSlider_new() {
    wxString name = wxString((wTheCall->parmCount > 9 ? wStackPopChar() : "slider"), *wxConvCurrent);
    const wxValidator *validator = (wTheCall->parmCount > 8 ? (wxValidator *)wStackPopObjectPtr( _wxValidator) : &wxDefaultValidator);
    long style = (wTheCall->parmCount > 7 ? (long)wStackPopNumber() : wxSL_HORIZONTAL);
    const wxSize *size = (wTheCall->parmCount > 6 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *point = (wTheCall->parmCount > 5 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    int maxValue = (int)wStackPopNumber();
    int minValue = (int)wStackPopNumber();
    int value = (int)wStackPopNumber();
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxSlider *returns = new wxSlider(parent, id, value, minValue, maxValue, *point, *size, style, *validator, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxSlider, (void *)returns );
}

// ~wxSlider()
void wxSlider_finalize() {
    ((wxSlider *)(wTheCall->self->ptr))->~wxSlider();
}

// void ClearSel()
void wxSlider_ClearSel() {
    ((wxSlider *)(wTheCall->self->ptr))->ClearSel();
}

// void ClearTicks()
void wxSlider_ClearTicks() {
    ((wxSlider *)(wTheCall->self->ptr))->ClearTicks();
}

// bool Create(wxWindow* parent, wxWindowID id, int value , int minValue, int maxValue, const wxPoint& point = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxSL_HORIZONTAL, const wxValidator& validator = wxDefaultValidator, const wxString& name = "slider")
void wxSlider_Create() {
    wxString name = wxString((wTheCall->parmCount > 9 ? wStackPopChar() : "slider"), *wxConvCurrent);
    const wxValidator *validator = (wTheCall->parmCount > 8 ? (wxValidator *)wStackPopObjectPtr( _wxValidator) : &wxDefaultValidator);
    long style = (wTheCall->parmCount > 7 ? (long)wStackPopNumber() : wxSL_HORIZONTAL);
    const wxSize *size = (wTheCall->parmCount > 6 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *point = (wTheCall->parmCount > 5 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    int maxValue = (int)wStackPopNumber();
    int minValue = (int)wStackPopNumber();
    int value = (int)wStackPopNumber();
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxSlider *)(wTheCall->self->ptr))->Create(parent, id, value, minValue, maxValue, *point, *size, style, *validator, name);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int GetLineSize() const
void wxSlider_GetLineSize() {
    int returns = ((wxSlider *)(wTheCall->self->ptr))->GetLineSize();
    wStackPushNumber( (wNumber)returns);
}

// int GetMax() const
void wxSlider_GetMax() {
    int returns = ((wxSlider *)(wTheCall->self->ptr))->GetMax();
    wStackPushNumber( (wNumber)returns);
}

// int GetMin() const
void wxSlider_GetMin() {
    int returns = ((wxSlider *)(wTheCall->self->ptr))->GetMin();
    wStackPushNumber( (wNumber)returns);
}

// int GetPageSize() const
void wxSlider_GetPageSize() {
    int returns = ((wxSlider *)(wTheCall->self->ptr))->GetPageSize();
    wStackPushNumber( (wNumber)returns);
}

// int GetSelEnd() const
void wxSlider_GetSelEnd() {
    int returns = ((wxSlider *)(wTheCall->self->ptr))->GetSelEnd();
    wStackPushNumber( (wNumber)returns);
}

// int GetSelStart() const
void wxSlider_GetSelStart() {
    int returns = ((wxSlider *)(wTheCall->self->ptr))->GetSelStart();
    wStackPushNumber( (wNumber)returns);
}

// int GetThumbLength() const
void wxSlider_GetThumbLength() {
    int returns = ((wxSlider *)(wTheCall->self->ptr))->GetThumbLength();
    wStackPushNumber( (wNumber)returns);
}

// int GetTickFreq() const
void wxSlider_GetTickFreq() {
    int returns = ((wxSlider *)(wTheCall->self->ptr))->GetTickFreq();
    wStackPushNumber( (wNumber)returns);
}

// int GetValue() const
void wxSlider_GetValue() {
    int returns = ((wxSlider *)(wTheCall->self->ptr))->GetValue();
    wStackPushNumber( (wNumber)returns);
}

// void SetRange(int minValue, int maxValue)
void wxSlider_SetRange() {
    int maxValue = (int)wStackPopNumber();
    int minValue = (int)wStackPopNumber();
    ((wxSlider *)(wTheCall->self->ptr))->SetRange(minValue, maxValue);
    wWrapDerefArgs();
}

// void SetTickFreq(int n, int pos)
void wxSlider_SetTickFreq() {
    int pos = (int)wStackPopNumber();
    int n = (int)wStackPopNumber();
    ((wxSlider *)(wTheCall->self->ptr))->SetTickFreq(n, pos);
    wWrapDerefArgs();
}

// void SetLineSize(int lineSize)
void wxSlider_SetLineSize() {
    int lineSize = (int)wStackPopNumber();
    ((wxSlider *)(wTheCall->self->ptr))->SetLineSize(lineSize);
    wWrapDerefArgs();
}

// void SetPageSize(int pageSize)
void wxSlider_SetPageSize() {
    int pageSize = (int)wStackPopNumber();
    ((wxSlider *)(wTheCall->self->ptr))->SetPageSize(pageSize);
    wWrapDerefArgs();
}

// void SetSelection(int startPos, int endPos)
void wxSlider_SetSelection() {
    int endPos = (int)wStackPopNumber();
    int startPos = (int)wStackPopNumber();
    ((wxSlider *)(wTheCall->self->ptr))->SetSelection(startPos, endPos);
    wWrapDerefArgs();
}

// void SetThumbLength(int len)
void wxSlider_SetThumbLength() {
    int len = (int)wStackPopNumber();
    ((wxSlider *)(wTheCall->self->ptr))->SetThumbLength(len);
    wWrapDerefArgs();
}

// void SetTick(int tickPos)
void wxSlider_SetTick() {
    int tickPos = (int)wStackPopNumber();
    ((wxSlider *)(wTheCall->self->ptr))->SetTick(tickPos);
    wWrapDerefArgs();
}

// void SetValue(int value)
void wxSlider_SetValue() {
    int value = (int)wStackPopNumber();
    ((wxSlider *)(wTheCall->self->ptr))->SetValue(value);
    wWrapDerefArgs();
}

void wxToolBarBase_del()
{
    delete (wxToolBarBase *)(wTheCall->self->ptr);
}


void wxToolBar_del()
{
    delete (wxToolBar *)(wTheCall->self->ptr);
}


// wxToolBar(wxWindow* parent, wxWindowID id, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxTB_HORIZONTAL | wxNO_BORDER, const wxString& name = wxPanelNameStr)
void wxToolBar_new() {
    wxString name = wxString((wTheCall->parmCount > 5 ? wStackPopChar() : wxPanelNameStr), *wxConvCurrent);
    long style = (wTheCall->parmCount > 4 ? (long)wStackPopNumber() : wxTB_HORIZONTAL | wxNO_BORDER);
    const wxSize *size = (wTheCall->parmCount > 3 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 2 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxToolBar *returns = new wxToolBar(parent, id, *pos, *size, style, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxToolBar, (void *)returns );
}

// ~wxToolBar()
void wxToolBar_finalize() {
    ((wxToolBar *)(wTheCall->self->ptr))->~wxToolBar();
}

// bool AddControl(wxControl* control)
void wxToolBar_AddControl() {
    wxControl *control = (wxControl *)wStackPopObjectPtr( _wxControl);
    bool returns = ((wxToolBar *)(wTheCall->self->ptr))->AddControl(control);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void AddSeparator()
void wxToolBar_AddSeparator() {
    ((wxToolBar *)(wTheCall->self->ptr))->AddSeparator();
}

// bool DeleteTool(int toolId)
void wxToolBar_DeleteTool() {
    int toolId = (int)wStackPopNumber();
    bool returns = ((wxToolBar *)(wTheCall->self->ptr))->DeleteTool(toolId);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool DeleteToolByPos(size_t pos)
void wxToolBar_DeleteToolByPos() {
    size_t pos = (size_t)wStackPopNumber();
    bool returns = ((wxToolBar *)(wTheCall->self->ptr))->DeleteToolByPos(pos);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void EnableTool(int toolId, const bool enable)
void wxToolBar_EnableTool() {
    bool enable = (bool)wStackPopNumber();
    int toolId = (int)wStackPopNumber();
    ((wxToolBar *)(wTheCall->self->ptr))->EnableTool(toolId, enable);
    wWrapDerefArgs();
}

// wxSize GetToolSize()
void wxToolBar_GetToolSize() {
    // make a pointer via copy constructor
    wxSize *returns = new wxSize(((wxToolBar *)(wTheCall->self->ptr))->GetToolSize());
    wWrapPushObject( _wxSize, W_TRUE, (void *)returns );
}

// wxSize GetToolBitmapSize()
void wxToolBar_GetToolBitmapSize() {
    // make a pointer via copy constructor
    wxSize *returns = new wxSize(((wxToolBar *)(wTheCall->self->ptr))->GetToolBitmapSize());
    wWrapPushObject( _wxSize, W_TRUE, (void *)returns );
}

// wxObject* GetToolClientData(int toolId) const
void wxToolBar_GetToolClientData() {
    int toolId = (int)wStackPopNumber();
    wxObject *returns = ((wxToolBar *)(wTheCall->self->ptr))->GetToolClientData(toolId);
    wWrapDerefArgs();
    wWrapPushObject( _wxObject, W_TRUE, (void *)returns );
}

// bool GetToolEnabled(int toolId) const
void wxToolBar_GetToolEnabled() {
    int toolId = (int)wStackPopNumber();
    bool returns = ((wxToolBar *)(wTheCall->self->ptr))->GetToolEnabled(toolId);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// wxString GetToolLongHelp(int toolId) const
void wxToolBar_GetToolLongHelp() {
    int toolId = (int)wStackPopNumber();
    wxString returns = ((wxToolBar *)(wTheCall->self->ptr))->GetToolLongHelp(toolId);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// int GetToolPacking() const
void wxToolBar_GetToolPacking() {
    int returns = ((wxToolBar *)(wTheCall->self->ptr))->GetToolPacking();
    wStackPushNumber( (wNumber)returns);
}

// int GetToolSeparation() const
void wxToolBar_GetToolSeparation() {
    int returns = ((wxToolBar *)(wTheCall->self->ptr))->GetToolSeparation();
    wStackPushNumber( (wNumber)returns);
}

// wxString GetToolShortHelp(int toolId) const
void wxToolBar_GetToolShortHelp() {
    int toolId = (int)wStackPopNumber();
    wxString returns = ((wxToolBar *)(wTheCall->self->ptr))->GetToolShortHelp(toolId);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// bool GetToolState(int toolId) const
void wxToolBar_GetToolState() {
    int toolId = (int)wStackPopNumber();
    bool returns = ((wxToolBar *)(wTheCall->self->ptr))->GetToolState(toolId);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool Realize()
void wxToolBar_Realize() {
    bool returns = ((wxToolBar *)(wTheCall->self->ptr))->Realize();
    wStackPushNumber( (wNumber)returns);
}

// void SetToolBitmapSize(const wxSize& size)
void wxToolBar_SetToolBitmapSize() {
    wxSize *size = (wxSize *)wStackPopObjectPtr( _wxSize);
    ((wxToolBar *)(wTheCall->self->ptr))->SetToolBitmapSize(*size);
    wWrapDerefArgs();
}

// void SetToolLongHelp(int toolId, const wxString& helpString)
void wxToolBar_SetToolLongHelp() {
    wxString helpString = wxString(wStackPopChar(), *wxConvCurrent);
    int toolId = (int)wStackPopNumber();
    ((wxToolBar *)(wTheCall->self->ptr))->SetToolLongHelp(toolId, helpString);
    wWrapDerefArgs();
}

// void SetToolPacking(int packing)
void wxToolBar_SetToolPacking() {
    int packing = (int)wStackPopNumber();
    ((wxToolBar *)(wTheCall->self->ptr))->SetToolPacking(packing);
    wWrapDerefArgs();
}

// void SetToolShortHelp(int toolId, const wxString& helpString)
void wxToolBar_SetToolShortHelp() {
    wxString helpString = wxString(wStackPopChar(), *wxConvCurrent);
    int toolId = (int)wStackPopNumber();
    ((wxToolBar *)(wTheCall->self->ptr))->SetToolShortHelp(toolId, helpString);
    wWrapDerefArgs();
}

// void SetToolSeparation(int separation)
void wxToolBar_SetToolSeparation() {
    int separation = (int)wStackPopNumber();
    ((wxToolBar *)(wTheCall->self->ptr))->SetToolSeparation(separation);
    wWrapDerefArgs();
}

// void ToggleTool(int toolId, const bool toggle)
void wxToolBar_ToggleTool() {
    bool toggle = (bool)wStackPopNumber();
    int toolId = (int)wStackPopNumber();
    ((wxToolBar *)(wTheCall->self->ptr))->ToggleTool(toolId, toggle);
    wWrapDerefArgs();
}

void wxNotebook_del()
{
    delete (wxNotebook *)(wTheCall->self->ptr);
}


// wxNotebook(wxWindow* parent, wxWindowID id, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = 0, const wxString& name = "notebook")
void wxNotebook_new() {
    wxString name = wxString((wTheCall->parmCount > 5 ? wStackPopChar() : "notebook"), *wxConvCurrent);
    long style = (wTheCall->parmCount > 4 ? (long)wStackPopNumber() : 0);
    const wxSize *size = (wTheCall->parmCount > 3 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 2 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxNotebook *returns = new wxNotebook(parent, id, *pos, *size, style, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxNotebook, (void *)returns );
}

// ~wxNotebook()
void wxNotebook_finalize() {
    ((wxNotebook *)(wTheCall->self->ptr))->~wxNotebook();
}

// bool AddPage(wxNotebookPage* page, const wxString& text, bool select = FALSE, int imageId = -1)
void wxNotebook_AddPage() {
    int imageId = (wTheCall->parmCount > 3 ? (int)wStackPopNumber() : -1);
    bool select = (wTheCall->parmCount > 2 ? (bool)wStackPopNumber() : FALSE);
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    wxWindow *page = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxNotebook *)(wTheCall->self->ptr))->AddPage(page, text, select, imageId);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void AdvanceSelection(bool forward = TRUE)
void wxNotebook_AdvanceSelection() {
    bool forward = (wTheCall->parmCount > 0 ? (bool)wStackPopNumber() : TRUE);
    ((wxNotebook *)(wTheCall->self->ptr))->AdvanceSelection(forward);
    wWrapDerefArgs();
}

// bool Create(wxWindow* parent, wxWindowID id, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = 0, const wxString& name = "notebook")
void wxNotebook_Create() {
    wxString name = wxString((wTheCall->parmCount > 5 ? wStackPopChar() : "notebook"), *wxConvCurrent);
    long style = (wTheCall->parmCount > 4 ? (long)wStackPopNumber() : 0);
    const wxSize *size = (wTheCall->parmCount > 3 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 2 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxNotebook *)(wTheCall->self->ptr))->Create(parent, id, *pos, *size, style, name);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool DeleteAllPages()
void wxNotebook_DeleteAllPages() {
    bool returns = ((wxNotebook *)(wTheCall->self->ptr))->DeleteAllPages();
    wStackPushNumber( (wNumber)returns);
}

// bool DeletePage(int page)
void wxNotebook_DeletePage() {
    int page = (int)wStackPopNumber();
    bool returns = ((wxNotebook *)(wTheCall->self->ptr))->DeletePage(page);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// wxImageList* GetImageList() const
void wxNotebook_GetImageList() {
    wxImageList *returns = ((wxNotebook *)(wTheCall->self->ptr))->GetImageList();
    wWrapPushObject( _wxImageList, W_TRUE, (void *)returns );
}

// wxNotebookPage* GetPage(int page)
void wxNotebook_GetPage() {
    int page = (int)wStackPopNumber();
    wxWindow *returns = ((wxNotebook *)(wTheCall->self->ptr))->GetPage(page);
    wWrapDerefArgs();
    wWrapPushObject( _wxWindow, W_TRUE, (void *)returns );
}

// int GetPageCount() const
void wxNotebook_GetPageCount() {
    int returns = ((wxNotebook *)(wTheCall->self->ptr))->GetPageCount();
    wStackPushNumber( (wNumber)returns);
}

// int GetPageImage(int nPage) const
void wxNotebook_GetPageImage() {
    int nPage = (int)wStackPopNumber();
    int returns = ((wxNotebook *)(wTheCall->self->ptr))->GetPageImage(nPage);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// wxString GetPageText(int nPage) const
void wxNotebook_GetPageText() {
    int nPage = (int)wStackPopNumber();
    wxString returns = ((wxNotebook *)(wTheCall->self->ptr))->GetPageText(nPage);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// int GetRowCount() const
void wxNotebook_GetRowCount() {
    int returns = ((wxNotebook *)(wTheCall->self->ptr))->GetRowCount();
    wStackPushNumber( (wNumber)returns);
}

// int GetSelection() const
void wxNotebook_GetSelection() {
    int returns = ((wxNotebook *)(wTheCall->self->ptr))->GetSelection();
    wStackPushNumber( (wNumber)returns);
}

// bool InsertPage(int index, wxNotebookPage* page, const wxString& text, bool select = FALSE, int imageId = -1)
void wxNotebook_InsertPage() {
    int imageId = (wTheCall->parmCount > 4 ? (int)wStackPopNumber() : -1);
    bool select = (wTheCall->parmCount > 3 ? (bool)wStackPopNumber() : FALSE);
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    wxWindow *page = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    int index = (int)wStackPopNumber();
    bool returns = ((wxNotebook *)(wTheCall->self->ptr))->InsertPage(index, page, text, select, imageId);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool RemovePage(int page)
void wxNotebook_RemovePage() {
    int page = (int)wStackPopNumber();
    bool returns = ((wxNotebook *)(wTheCall->self->ptr))->RemovePage(page);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void SetImageList(wxImageList* imageList)
void wxNotebook_SetImageList() {
    wxImageList *imageList = (wxImageList *)wStackPopObjectPtr( _wxImageList);
    ((wxNotebook *)(wTheCall->self->ptr))->SetImageList(imageList);
    wWrapDerefArgs();
}

// void SetPadding(const wxSize& padding)
void wxNotebook_SetPadding() {
    wxSize *padding = (wxSize *)wStackPopObjectPtr( _wxSize);
    ((wxNotebook *)(wTheCall->self->ptr))->SetPadding(*padding);
    wWrapDerefArgs();
}

// void SetPageSize(const wxSize& size)
void wxNotebook_SetPageSize() {
    wxSize *size = (wxSize *)wStackPopObjectPtr( _wxSize);
    ((wxNotebook *)(wTheCall->self->ptr))->SetPageSize(*size);
    wWrapDerefArgs();
}

// bool SetPageImage(int page, int image)
void wxNotebook_SetPageImage() {
    int image = (int)wStackPopNumber();
    int page = (int)wStackPopNumber();
    bool returns = ((wxNotebook *)(wTheCall->self->ptr))->SetPageImage(page, image);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool SetPageText(int page, const wxString& text)
void wxNotebook_SetPageText() {
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    int page = (int)wStackPopNumber();
    bool returns = ((wxNotebook *)(wTheCall->self->ptr))->SetPageText(page, text);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int SetSelection(int page)
void wxNotebook_SetSelection() {
    int page = (int)wStackPopNumber();
    int returns = ((wxNotebook *)(wTheCall->self->ptr))->SetSelection(page);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

void wxSashWindow_del()
{
    delete (wxSashWindow *)(wTheCall->self->ptr);
}


// wxSashWindow(wxWindow *parent, wxWindowID id = -1, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxSW_3D|wxCLIP_CHILDREN, const wxString& name = "sashWindow")
void wxSashWindow_new() {
    wxString name = wxString((wTheCall->parmCount > 5 ? wStackPopChar() : "sashWindow"), *wxConvCurrent);
    long style = (wTheCall->parmCount > 4 ? (long)wStackPopNumber() : wxSW_3D|wxCLIP_CHILDREN);
    const wxSize *size = (wTheCall->parmCount > 3 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 2 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxWindowID id = (wTheCall->parmCount > 1 ? (wxWindowID)wStackPopNumber() : -1);
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxSashWindow *returns = new wxSashWindow(parent, id, *pos, *size, style, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxSashWindow, (void *)returns );
}

// ~wxSashWindow()
void wxSashWindow_finalize() {
    ((wxSashWindow *)(wTheCall->self->ptr))->~wxSashWindow();
}

// bool GetSashVisible(wxSashEdgePosition edge) const
void wxSashWindow_GetSashVisible() {
    wxSashEdgePosition edge = (wxSashEdgePosition)(int)wStackPopNumber();
    bool returns = ((wxSashWindow *)(wTheCall->self->ptr))->GetSashVisible((wxSashEdgePosition)edge);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int GetMaximumSizeX() const
void wxSashWindow_GetMaximumSizeX() {
    int returns = ((wxSashWindow *)(wTheCall->self->ptr))->GetMaximumSizeX();
    wStackPushNumber( (wNumber)returns);
}

// int GetMaximumSizeY() const
void wxSashWindow_GetMaximumSizeY() {
    int returns = ((wxSashWindow *)(wTheCall->self->ptr))->GetMaximumSizeY();
    wStackPushNumber( (wNumber)returns);
}

// int GetMinimumSizeX()
void wxSashWindow_GetMinimumSizeX() {
    int returns = ((wxSashWindow *)(wTheCall->self->ptr))->GetMinimumSizeX();
    wStackPushNumber( (wNumber)returns);
}

// int GetMinimumSizeY() const
void wxSashWindow_GetMinimumSizeY() {
    int returns = ((wxSashWindow *)(wTheCall->self->ptr))->GetMinimumSizeY();
    wStackPushNumber( (wNumber)returns);
}

// bool HasBorder(wxSashEdgePosition edge) const
void wxSashWindow_HasBorder() {
    wxSashEdgePosition edge = (wxSashEdgePosition)(int)wStackPopNumber();
    bool returns = ((wxSashWindow *)(wTheCall->self->ptr))->HasBorder((wxSashEdgePosition)edge);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void SetMaximumSizeX(int min)
void wxSashWindow_SetMaximumSizeX() {
    int min = (int)wStackPopNumber();
    ((wxSashWindow *)(wTheCall->self->ptr))->SetMaximumSizeX(min);
    wWrapDerefArgs();
}

// void SetMaximumSizeY(int min)
void wxSashWindow_SetMaximumSizeY() {
    int min = (int)wStackPopNumber();
    ((wxSashWindow *)(wTheCall->self->ptr))->SetMaximumSizeY(min);
    wWrapDerefArgs();
}

// void SetMinimumSizeX(int min)
void wxSashWindow_SetMinimumSizeX() {
    int min = (int)wStackPopNumber();
    ((wxSashWindow *)(wTheCall->self->ptr))->SetMinimumSizeX(min);
    wWrapDerefArgs();
}

// void SetMinimumSizeY(int min)
void wxSashWindow_SetMinimumSizeY() {
    int min = (int)wStackPopNumber();
    ((wxSashWindow *)(wTheCall->self->ptr))->SetMinimumSizeY(min);
    wWrapDerefArgs();
}

// void SetSashVisible(wxSashEdgePosition edge, bool visible)
void wxSashWindow_SetSashVisible() {
    bool visible = (bool)wStackPopNumber();
    wxSashEdgePosition edge = (wxSashEdgePosition)(int)wStackPopNumber();
    ((wxSashWindow *)(wTheCall->self->ptr))->SetSashVisible((wxSashEdgePosition)edge, visible);
    wWrapDerefArgs();
}

// void SetSashBorder(wxSashEdgePosition edge, bool hasBorder)
void wxSashWindow_SetSashBorder() {
    bool hasBorder = (bool)wStackPopNumber();
    wxSashEdgePosition edge = (wxSashEdgePosition)(int)wStackPopNumber();
    ((wxSashWindow *)(wTheCall->self->ptr))->SetSashBorder((wxSashEdgePosition)edge, hasBorder);
    wWrapDerefArgs();
}

void wxSashLayoutWindow_del()
{
    delete (wxSashLayoutWindow *)(wTheCall->self->ptr);
}


// wxSashLayoutWindow(wxWindow *parent, wxWindowID id = -1, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = wxSW_3D|wxCLIP_CHILDREN, const wxString& name = "layoutWindow")
void wxSashLayoutWindow_new() {
    wxString name = wxString((wTheCall->parmCount > 5 ? wStackPopChar() : "layoutWindow"), *wxConvCurrent);
    long style = (wTheCall->parmCount > 4 ? (long)wStackPopNumber() : wxSW_3D|wxCLIP_CHILDREN);
    const wxSize *size = (wTheCall->parmCount > 3 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 2 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxWindowID id = (wTheCall->parmCount > 1 ? (wxWindowID)wStackPopNumber() : -1);
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxSashLayoutWindow *returns = new wxSashLayoutWindow(parent, id, *pos, *size, style, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxSashLayoutWindow, (void *)returns );
}

// ~wxSashLayoutWindow()
void wxSashLayoutWindow_finalize() {
    ((wxSashLayoutWindow *)(wTheCall->self->ptr))->~wxSashLayoutWindow();
}

// wxLayoutAlignment GetAlignment() const
void wxSashLayoutWindow_GetAlignment() {
    wxLayoutAlignment returns = ((wxSashLayoutWindow *)(wTheCall->self->ptr))->GetAlignment();
    wStackPushNumber( (wNumber)returns);
}

// wxLayoutOrientation GetOrientation() const
void wxSashLayoutWindow_GetOrientation() {
    wxLayoutOrientation returns = ((wxSashLayoutWindow *)(wTheCall->self->ptr))->GetOrientation();
    wStackPushNumber( (wNumber)returns);
}

// void SetAlignment(wxLayoutAlignment alignment)
void wxSashLayoutWindow_SetAlignment() {
    wxLayoutAlignment alignment = (wxLayoutAlignment)(int)wStackPopNumber();
    ((wxSashLayoutWindow *)(wTheCall->self->ptr))->SetAlignment((wxLayoutAlignment)alignment);
    wWrapDerefArgs();
}

// void SetDefaultSize(const wxSize& size)
void wxSashLayoutWindow_SetDefaultSize() {
    wxSize *size = (wxSize *)wStackPopObjectPtr( _wxSize);
    ((wxSashLayoutWindow *)(wTheCall->self->ptr))->SetDefaultSize(*size);
    wWrapDerefArgs();
}

// void SetOrientation(wxLayoutOrientation orientation)
void wxSashLayoutWindow_SetOrientation() {
    wxLayoutOrientation orientation = (wxLayoutOrientation)(int)wStackPopNumber();
    ((wxSashLayoutWindow *)(wTheCall->self->ptr))->SetOrientation((wxLayoutOrientation)orientation);
    wWrapDerefArgs();
}

void wxColourDialog_del()
{
    delete (wxColourDialog *)(wTheCall->self->ptr);
}


// wxColourDialog(wxWindow* parent, wxColourData* data = NULL)
void wxColourDialog_new() {
    wxColourData *data = (wTheCall->parmCount > 1 ? (wxColourData *)wStackPopObjectPtr( _wxColourData) : NULL);
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxColourDialog *returns = new wxColourDialog(parent, data);
    wWrapDerefArgs();
    wWrapSetThis( _wxColourDialog, (void *)returns );
}

// %ctor wxColorDialog(wxWindow* parent, wxColourData* data = NULL)
void wxColorDialog_new() {
    wxColourData *data = (wTheCall->parmCount > 1 ? (wxColourData *)wStackPopObjectPtr( _wxColourData) : NULL);
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxColourDialog *returns = new wxColourDialog(parent, data);
    wWrapDerefArgs();
    wWrapSetThis( _wxColorDialog, (void *)returns );
}

// ~wxColourDialog()
void wxColourDialog_finalize() {
    ((wxColourDialog *)(wTheCall->self->ptr))->~wxColourDialog();
}

// bool Create(wxWindow* parent, wxColourData* data = NULL)
void wxColourDialog_Create() {
    wxColourData *data = (wTheCall->parmCount > 1 ? (wxColourData *)wStackPopObjectPtr( _wxColourData) : NULL);
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxColourDialog *)(wTheCall->self->ptr))->Create(parent, data);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %alias GetColorData wxColourData& GetColourData()
void wxColourDialog_GetColourData() {
    wxColourData *returns = &((wxColourDialog *)(wTheCall->self->ptr))->GetColourData();
    wWrapPushObject( _wxColourData, W_TRUE, (void *)returns );
}

// int ShowModal()
void wxColourDialog_ShowModal() {
    int returns = ((wxColourDialog *)(wTheCall->self->ptr))->ShowModal();
    wStackPushNumber( (wNumber)returns);
}

void wxFileDialog_del()
{
    delete (wxFileDialog *)(wTheCall->self->ptr);
}


// wxFileDialog(wxWindow* parent, const wxString& message = "Choose a file", const wxString& defaultDir = "", const wxString& defaultFile = "", const wxString& wildcard = "*.*", long style = 0, const wxPoint& pos = wxDefaultPosition)
void wxFileDialog_new() {
    const wxPoint *pos = (wTheCall->parmCount > 6 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    long style = (wTheCall->parmCount > 5 ? (long)wStackPopNumber() : 0);
    wxString wildcard = wxString((wTheCall->parmCount > 4 ? wStackPopChar() : "*.*"), *wxConvCurrent);
    wxString defaultFile = wxString((wTheCall->parmCount > 3 ? wStackPopChar() : ""), *wxConvCurrent);
    wxString defaultDir = wxString((wTheCall->parmCount > 2 ? wStackPopChar() : ""), *wxConvCurrent);
    wxString message = wxString((wTheCall->parmCount > 1 ? wStackPopChar() : "Choose a file"), *wxConvCurrent);
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxFileDialog *returns = new wxFileDialog(parent, message, defaultDir, defaultFile, wildcard, style, *pos);
    wWrapDerefArgs();
    wWrapSetThis( _wxFileDialog, (void *)returns );
}

// ~wxFileDialog()
void wxFileDialog_finalize() {
    ((wxFileDialog *)(wTheCall->self->ptr))->~wxFileDialog();
}

// wxString GetDirectory() const
void wxFileDialog_GetDirectory() {
    wxString returns = ((wxFileDialog *)(wTheCall->self->ptr))->GetDirectory();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxString GetFilename() const
void wxFileDialog_GetFilename() {
    wxString returns = ((wxFileDialog *)(wTheCall->self->ptr))->GetFilename();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// int GetFilterIndex() const
void wxFileDialog_GetFilterIndex() {
    int returns = ((wxFileDialog *)(wTheCall->self->ptr))->GetFilterIndex();
    wStackPushNumber( (wNumber)returns);
}

// wxString GetMessage() const
void wxFileDialog_GetMessage() {
    wxString returns = ((wxFileDialog *)(wTheCall->self->ptr))->GetMessage();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxString GetPath() const
void wxFileDialog_GetPath() {
    wxString returns = ((wxFileDialog *)(wTheCall->self->ptr))->GetPath();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// long GetStyle() const
void wxFileDialog_GetStyle() {
    long returns = ((wxFileDialog *)(wTheCall->self->ptr))->GetStyle();
    wStackPushNumber( (wNumber)returns);
}

// wxString GetWildcard() const
void wxFileDialog_GetWildcard() {
    wxString returns = ((wxFileDialog *)(wTheCall->self->ptr))->GetWildcard();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// void SetDirectory(const wxString& directory)
void wxFileDialog_SetDirectory() {
    wxString directory = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxFileDialog *)(wTheCall->self->ptr))->SetDirectory(directory);
    wWrapDerefArgs();
}

// void SetFilename(const wxString& setfilename)
void wxFileDialog_SetFilename() {
    wxString setfilename = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxFileDialog *)(wTheCall->self->ptr))->SetFilename(setfilename);
    wWrapDerefArgs();
}

// void SetMessage(const wxString& message)
void wxFileDialog_SetMessage() {
    wxString message = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxFileDialog *)(wTheCall->self->ptr))->SetMessage(message);
    wWrapDerefArgs();
}

// void SetPath(const wxString& path)
void wxFileDialog_SetPath() {
    wxString path = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxFileDialog *)(wTheCall->self->ptr))->SetPath(path);
    wWrapDerefArgs();
}

// void SetStyle(long style)
void wxFileDialog_SetStyle() {
    long style = (long)wStackPopNumber();
    ((wxFileDialog *)(wTheCall->self->ptr))->SetStyle(style);
    wWrapDerefArgs();
}

// void SetWildcard(const wxString& wildCard)
void wxFileDialog_SetWildcard() {
    wxString wildCard = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxFileDialog *)(wTheCall->self->ptr))->SetWildcard(wildCard);
    wWrapDerefArgs();
}

// int ShowModal()
void wxFileDialog_ShowModal() {
    int returns = ((wxFileDialog *)(wTheCall->self->ptr))->ShowModal();
    wStackPushNumber( (wNumber)returns);
}

void wxDirDialog_del()
{
    delete (wxDirDialog *)(wTheCall->self->ptr);
}


// wxDirDialog(wxWindow* parent, const wxString& message = "Choose a directory", const wxString& defaultPath = "", long style = 0, const wxPoint& pos = wxDefaultPosition)
void wxDirDialog_new() {
    const wxPoint *pos = (wTheCall->parmCount > 4 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    long style = (wTheCall->parmCount > 3 ? (long)wStackPopNumber() : 0);
    wxString defaultPath = wxString((wTheCall->parmCount > 2 ? wStackPopChar() : ""), *wxConvCurrent);
    wxString message = wxString((wTheCall->parmCount > 1 ? wStackPopChar() : "Choose a directory"), *wxConvCurrent);
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxDirDialog *returns = new wxDirDialog(parent, message, defaultPath, style, *pos);
    wWrapDerefArgs();
    wWrapSetThis( _wxDirDialog, (void *)returns );
}

// ~wxDirDialog()
void wxDirDialog_finalize() {
    ((wxDirDialog *)(wTheCall->self->ptr))->~wxDirDialog();
}

// wxString GetPath() const
void wxDirDialog_GetPath() {
    wxString returns = ((wxDirDialog *)(wTheCall->self->ptr))->GetPath();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxString GetMessage() const
void wxDirDialog_GetMessage() {
    wxString returns = ((wxDirDialog *)(wTheCall->self->ptr))->GetMessage();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// long GetStyle() const
void wxDirDialog_GetStyle() {
    long returns = ((wxDirDialog *)(wTheCall->self->ptr))->GetStyle();
    wStackPushNumber( (wNumber)returns);
}

// void SetMessage(const wxString& message)
void wxDirDialog_SetMessage() {
    wxString message = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxDirDialog *)(wTheCall->self->ptr))->SetMessage(message);
    wWrapDerefArgs();
}

// void SetPath(const wxString& path)
void wxDirDialog_SetPath() {
    wxString path = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxDirDialog *)(wTheCall->self->ptr))->SetPath(path);
    wWrapDerefArgs();
}

// void SetStyle(long style)
void wxDirDialog_SetStyle() {
    long style = (long)wStackPopNumber();
    ((wxDirDialog *)(wTheCall->self->ptr))->SetStyle(style);
    wWrapDerefArgs();
}

// int ShowModal()
void wxDirDialog_ShowModal() {
    int returns = ((wxDirDialog *)(wTheCall->self->ptr))->ShowModal();
    wStackPushNumber( (wNumber)returns);
}

void wxSingleChoiceDialog_del()
{
    delete (wxSingleChoiceDialog *)(wTheCall->self->ptr);
}


// ~wxSingleChoiceDialog()
void wxSingleChoiceDialog_finalize() {
    ((wxSingleChoiceDialog *)(wTheCall->self->ptr))->~wxSingleChoiceDialog();
}

// int GetSelection() const
void wxSingleChoiceDialog_GetSelection() {
    int returns = ((wxSingleChoiceDialog *)(wTheCall->self->ptr))->GetSelection();
    wStackPushNumber( (wNumber)returns);
}

// char* GetSelectionClientData() const
void wxSingleChoiceDialog_GetSelectionClientData() {
    char *returns = ((wxSingleChoiceDialog *)(wTheCall->self->ptr))->GetSelectionClientData();
    wWrapPushObject( _wxSingleChoiceDialog, W_TRUE, (void *)returns );
}

// wxString GetStringSelection() const
void wxSingleChoiceDialog_GetStringSelection() {
    wxString returns = ((wxSingleChoiceDialog *)(wTheCall->self->ptr))->GetStringSelection();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// void SetSelection(int selection) const
void wxSingleChoiceDialog_SetSelection() {
    int selection = (int)wStackPopNumber();
    ((wxSingleChoiceDialog *)(wTheCall->self->ptr))->SetSelection(selection);
    wWrapDerefArgs();
}

// int ShowModal()
void wxSingleChoiceDialog_ShowModal() {
    int returns = ((wxSingleChoiceDialog *)(wTheCall->self->ptr))->ShowModal();
    wStackPushNumber( (wNumber)returns);
}

void wxTextEntryDialog_del()
{
    delete (wxTextEntryDialog *)(wTheCall->self->ptr);
}


// wxTextEntryDialog(wxWindow* parent, const wxString& message, const wxString& caption = "Please enter text", const wxString& defaultValue = "", long style = wxOK | wxCANCEL | wxCENTRE, const wxPoint& pos = wxDefaultPosition)
void wxTextEntryDialog_new() {
    const wxPoint *pos = (wTheCall->parmCount > 5 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    long style = (wTheCall->parmCount > 4 ? (long)wStackPopNumber() : wxOK | wxCANCEL | wxCENTRE);
    wxString defaultValue = wxString((wTheCall->parmCount > 3 ? wStackPopChar() : ""), *wxConvCurrent);
    wxString caption = wxString((wTheCall->parmCount > 2 ? wStackPopChar() : "Please enter text"), *wxConvCurrent);
    wxString message = wxString(wStackPopChar(), *wxConvCurrent);
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxTextEntryDialog *returns = new wxTextEntryDialog(parent, message, caption, defaultValue, style, *pos);
    wWrapDerefArgs();
    wWrapSetThis( _wxTextEntryDialog, (void *)returns );
}

// ~wxTextEntryDialog()
void wxTextEntryDialog_finalize() {
    ((wxTextEntryDialog *)(wTheCall->self->ptr))->~wxTextEntryDialog();
}

// wxString GetValue() const
void wxTextEntryDialog_GetValue() {
    wxString returns = ((wxTextEntryDialog *)(wTheCall->self->ptr))->GetValue();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// void SetValue(const wxString& value)
void wxTextEntryDialog_SetValue() {
    wxString value = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxTextEntryDialog *)(wTheCall->self->ptr))->SetValue(value);
    wWrapDerefArgs();
}

// int ShowModal()
void wxTextEntryDialog_ShowModal() {
    int returns = ((wxTextEntryDialog *)(wTheCall->self->ptr))->ShowModal();
    wStackPushNumber( (wNumber)returns);
}

void wxFontData_del()
{
    delete (wxFontData *)(wTheCall->self->ptr);
}


// wxFontData()
void wxFontData_new() {
    wxFontData *returns = new wxFontData();
    wWrapSetThis( _wxFontData, (void *)returns );
}

// ~wxFontData()
void wxFontData_finalize() {
    ((wxFontData *)(wTheCall->self->ptr))->~wxFontData();
}

// void EnableEffects(bool enable)
void wxFontData_EnableEffects() {
    bool enable = (bool)wStackPopNumber();
    ((wxFontData *)(wTheCall->self->ptr))->EnableEffects(enable);
    wWrapDerefArgs();
}

// bool GetAllowSymbols()
void wxFontData_GetAllowSymbols() {
    bool returns = ((wxFontData *)(wTheCall->self->ptr))->GetAllowSymbols();
    wStackPushNumber( (wNumber)returns);
}

// %alias GetColor wxColour& GetColour()
void wxFontData_GetColour() {
    wxColour *returns = &((wxFontData *)(wTheCall->self->ptr))->GetColour();
    wWrapPushObject( _wxColour, W_TRUE, (void *)returns );
}

// wxFont GetChosenFont()
void wxFontData_GetChosenFont() {
    // make a pointer via copy constructor
    wxFont *returns = new wxFont(((wxFontData *)(wTheCall->self->ptr))->GetChosenFont());
    wWrapPushObject( _wxFont, W_TRUE, (void *)returns );
}

// bool GetEnableEffects()
void wxFontData_GetEnableEffects() {
    bool returns = ((wxFontData *)(wTheCall->self->ptr))->GetEnableEffects();
    wStackPushNumber( (wNumber)returns);
}

// wxFont GetInitialFont()
void wxFontData_GetInitialFont() {
    // make a pointer via copy constructor
    wxFont *returns = new wxFont(((wxFontData *)(wTheCall->self->ptr))->GetInitialFont());
    wWrapPushObject( _wxFont, W_TRUE, (void *)returns );
}

// bool GetShowHelp()
void wxFontData_GetShowHelp() {
    bool returns = ((wxFontData *)(wTheCall->self->ptr))->GetShowHelp();
    wStackPushNumber( (wNumber)returns);
}

// void SetAllowSymbols(bool allowSymbols)
void wxFontData_SetAllowSymbols() {
    bool allowSymbols = (bool)wStackPopNumber();
    ((wxFontData *)(wTheCall->self->ptr))->SetAllowSymbols(allowSymbols);
    wWrapDerefArgs();
}

// void SetChosenFont(const wxFont& font)
void wxFontData_SetChosenFont() {
    wxFont *font = (wxFont *)wStackPopObjectPtr( _wxFont);
    ((wxFontData *)(wTheCall->self->ptr))->SetChosenFont(*font);
    wWrapDerefArgs();
}

// void SetColour(const wxColour& colour)
void wxFontData_SetColour() {
    wxColour *colour = (wxColour *)wStackPopObjectPtr( _wxColour);
    ((wxFontData *)(wTheCall->self->ptr))->SetColour(*colour);
    wWrapDerefArgs();
}

// void SetInitialFont(const wxFont&font)
void wxFontData_SetInitialFont() {
    wxFont *font = (wxFont *)wStackPopObjectPtr( _wxFont);
    ((wxFontData *)(wTheCall->self->ptr))->SetInitialFont(*font);
    wWrapDerefArgs();
}

// void SetRange(int min, int max)
void wxFontData_SetRange() {
    int max = (int)wStackPopNumber();
    int min = (int)wStackPopNumber();
    ((wxFontData *)(wTheCall->self->ptr))->SetRange(min, max);
    wWrapDerefArgs();
}

// void SetShowHelp(bool showHelp)
void wxFontData_SetShowHelp() {
    bool showHelp = (bool)wStackPopNumber();
    ((wxFontData *)(wTheCall->self->ptr))->SetShowHelp(showHelp);
    wWrapDerefArgs();
}

void wxFontDialog_del()
{
    delete (wxFontDialog *)(wTheCall->self->ptr);
}


// wxFontDialog(wxWindow* parent, wxFontData* data = NULL)
void wxFontDialog_new() {
    wxFontData *data = (wTheCall->parmCount > 1 ? (wxFontData *)wStackPopObjectPtr( _wxFontData) : NULL);
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxFontDialog *returns = new wxFontDialog(parent, data);
    wWrapDerefArgs();
    wWrapSetThis( _wxFontDialog, (void *)returns );
}

// ~wxFontDialog()
void wxFontDialog_finalize() {
    ((wxFontDialog *)(wTheCall->self->ptr))->~wxFontDialog();
}

// wxFontData& GetFontData()
void wxFontDialog_GetFontData() {
    wxFontData *returns = &((wxFontDialog *)(wTheCall->self->ptr))->GetFontData();
    wWrapPushObject( _wxFontData, W_TRUE, (void *)returns );
}

// int ShowModal()
void wxFontDialog_ShowModal() {
    int returns = ((wxFontDialog *)(wTheCall->self->ptr))->ShowModal();
    wStackPushNumber( (wNumber)returns);
}

void wxPageSetupDialogData_del()
{
    delete (wxPageSetupDialogData *)(wTheCall->self->ptr);
}


// wxPageSetupDialogData()
void wxPageSetupDialogData_new() {
    wxPageSetupDialogData *returns = new wxPageSetupDialogData();
    wWrapSetThis( _wxPageSetupDialogData, (void *)returns );
}

// ~wxPageSetupDialogData()
void wxPageSetupDialogData_finalize() {
    ((wxPageSetupDialogData *)(wTheCall->self->ptr))->~wxPageSetupDialogData();
}

// void EnableHelp(bool flag)
void wxPageSetupDialogData_EnableHelp() {
    bool flag = (bool)wStackPopNumber();
    ((wxPageSetupDialogData *)(wTheCall->self->ptr))->EnableHelp(flag);
    wWrapDerefArgs();
}

// void EnableMargins(bool flag)
void wxPageSetupDialogData_EnableMargins() {
    bool flag = (bool)wStackPopNumber();
    ((wxPageSetupDialogData *)(wTheCall->self->ptr))->EnableMargins(flag);
    wWrapDerefArgs();
}

// void EnableOrientation(bool flag)
void wxPageSetupDialogData_EnableOrientation() {
    bool flag = (bool)wStackPopNumber();
    ((wxPageSetupDialogData *)(wTheCall->self->ptr))->EnableOrientation(flag);
    wWrapDerefArgs();
}

// void EnablePaper(bool flag)
void wxPageSetupDialogData_EnablePaper() {
    bool flag = (bool)wStackPopNumber();
    ((wxPageSetupDialogData *)(wTheCall->self->ptr))->EnablePaper(flag);
    wWrapDerefArgs();
}

// void EnablePrinter(bool flag)
void wxPageSetupDialogData_EnablePrinter() {
    bool flag = (bool)wStackPopNumber();
    ((wxPageSetupDialogData *)(wTheCall->self->ptr))->EnablePrinter(flag);
    wWrapDerefArgs();
}

// bool GetDefaultMinMargins() const
void wxPageSetupDialogData_GetDefaultMinMargins() {
    bool returns = ((wxPageSetupDialogData *)(wTheCall->self->ptr))->GetDefaultMinMargins();
    wStackPushNumber( (wNumber)returns);
}

// bool GetEnableMargins() const
void wxPageSetupDialogData_GetEnableMargins() {
    bool returns = ((wxPageSetupDialogData *)(wTheCall->self->ptr))->GetEnableMargins();
    wStackPushNumber( (wNumber)returns);
}

// bool GetEnableOrientation() const
void wxPageSetupDialogData_GetEnableOrientation() {
    bool returns = ((wxPageSetupDialogData *)(wTheCall->self->ptr))->GetEnableOrientation();
    wStackPushNumber( (wNumber)returns);
}

// bool GetEnablePaper() const
void wxPageSetupDialogData_GetEnablePaper() {
    bool returns = ((wxPageSetupDialogData *)(wTheCall->self->ptr))->GetEnablePaper();
    wStackPushNumber( (wNumber)returns);
}

// bool GetEnablePrinter() const
void wxPageSetupDialogData_GetEnablePrinter() {
    bool returns = ((wxPageSetupDialogData *)(wTheCall->self->ptr))->GetEnablePrinter();
    wStackPushNumber( (wNumber)returns);
}

// bool GetEnableHelp() const
void wxPageSetupDialogData_GetEnableHelp() {
    bool returns = ((wxPageSetupDialogData *)(wTheCall->self->ptr))->GetEnableHelp();
    wStackPushNumber( (wNumber)returns);
}

// bool GetDefaultInfo() const
void wxPageSetupDialogData_GetDefaultInfo() {
    bool returns = ((wxPageSetupDialogData *)(wTheCall->self->ptr))->GetDefaultInfo();
    wStackPushNumber( (wNumber)returns);
}

// wxPoint GetMarginTopLeft() const
void wxPageSetupDialogData_GetMarginTopLeft() {
    // make a pointer via copy constructor
    wxPoint *returns = new wxPoint(((wxPageSetupDialogData *)(wTheCall->self->ptr))->GetMarginTopLeft());
    wWrapPushObject( _wxPoint, W_TRUE, (void *)returns );
}

// wxPoint GetMarginBottomRight() const
void wxPageSetupDialogData_GetMarginBottomRight() {
    // make a pointer via copy constructor
    wxPoint *returns = new wxPoint(((wxPageSetupDialogData *)(wTheCall->self->ptr))->GetMarginBottomRight());
    wWrapPushObject( _wxPoint, W_TRUE, (void *)returns );
}

// wxPoint GetMinMarginTopLeft() const
void wxPageSetupDialogData_GetMinMarginTopLeft() {
    // make a pointer via copy constructor
    wxPoint *returns = new wxPoint(((wxPageSetupDialogData *)(wTheCall->self->ptr))->GetMinMarginTopLeft());
    wWrapPushObject( _wxPoint, W_TRUE, (void *)returns );
}

// wxPoint GetMinMarginBottomRight() const
void wxPageSetupDialogData_GetMinMarginBottomRight() {
    // make a pointer via copy constructor
    wxPoint *returns = new wxPoint(((wxPageSetupDialogData *)(wTheCall->self->ptr))->GetMinMarginBottomRight());
    wWrapPushObject( _wxPoint, W_TRUE, (void *)returns );
}

// wxPaperSize GetPaperId() const
void wxPageSetupDialogData_GetPaperId() {
    wxPaperSize returns = ((wxPageSetupDialogData *)(wTheCall->self->ptr))->GetPaperId();
    wStackPushNumber( (wNumber)returns);
}

// wxSize GetPaperSize() const
void wxPageSetupDialogData_GetPaperSize() {
    // make a pointer via copy constructor
    wxSize *returns = new wxSize(((wxPageSetupDialogData *)(wTheCall->self->ptr))->GetPaperSize());
    wWrapPushObject( _wxSize, W_TRUE, (void *)returns );
}

// wxPrintData& GetPrintData()
void wxPageSetupDialogData_GetPrintData() {
    wxPrintData *returns = &((wxPageSetupDialogData *)(wTheCall->self->ptr))->GetPrintData();
    wWrapPushObject( _wxPrintData, W_TRUE, (void *)returns );
}

// bool Ok() const
void wxPageSetupDialogData_Ok() {
    bool returns = ((wxPageSetupDialogData *)(wTheCall->self->ptr))->Ok();
    wStackPushNumber( (wNumber)returns);
}

// void SetDefaultInfo(bool flag)
void wxPageSetupDialogData_SetDefaultInfo() {
    bool flag = (bool)wStackPopNumber();
    ((wxPageSetupDialogData *)(wTheCall->self->ptr))->SetDefaultInfo(flag);
    wWrapDerefArgs();
}

// void SetDefaultMinMargins(bool flag)
void wxPageSetupDialogData_SetDefaultMinMargins() {
    bool flag = (bool)wStackPopNumber();
    ((wxPageSetupDialogData *)(wTheCall->self->ptr))->SetDefaultMinMargins(flag);
    wWrapDerefArgs();
}

// void SetMarginTopLeft(const wxPoint& pt)
void wxPageSetupDialogData_SetMarginTopLeft() {
    wxPoint *pt = (wxPoint *)wStackPopObjectPtr( _wxPoint);
    ((wxPageSetupDialogData *)(wTheCall->self->ptr))->SetMarginTopLeft(*pt);
    wWrapDerefArgs();
}

// void SetMarginBottomRight(const wxPoint& pt)
void wxPageSetupDialogData_SetMarginBottomRight() {
    wxPoint *pt = (wxPoint *)wStackPopObjectPtr( _wxPoint);
    ((wxPageSetupDialogData *)(wTheCall->self->ptr))->SetMarginBottomRight(*pt);
    wWrapDerefArgs();
}

// void SetMinMarginTopLeft(const wxPoint& pt)
void wxPageSetupDialogData_SetMinMarginTopLeft() {
    wxPoint *pt = (wxPoint *)wStackPopObjectPtr( _wxPoint);
    ((wxPageSetupDialogData *)(wTheCall->self->ptr))->SetMinMarginTopLeft(*pt);
    wWrapDerefArgs();
}

// void SetMinMarginBottomRight(const wxPoint& pt)
void wxPageSetupDialogData_SetMinMarginBottomRight() {
    wxPoint *pt = (wxPoint *)wStackPopObjectPtr( _wxPoint);
    ((wxPageSetupDialogData *)(wTheCall->self->ptr))->SetMinMarginBottomRight(*pt);
    wWrapDerefArgs();
}

// void SetPaperId(wxPaperSize& id)
void wxPageSetupDialogData_SetPaperId() {
    wxPaperSize *id = (wxPaperSize *)wStackPopObjectPtr( 0 );
    ((wxPageSetupDialogData *)(wTheCall->self->ptr))->SetPaperId((wxPaperSize)*id);
    wWrapDerefArgs();
}

// void SetPaperSize(const wxSize& size)
void wxPageSetupDialogData_SetPaperSize() {
    wxSize *size = (wxSize *)wStackPopObjectPtr( _wxSize);
    ((wxPageSetupDialogData *)(wTheCall->self->ptr))->SetPaperSize(*size);
    wWrapDerefArgs();
}

// void SetPrintData(const wxPrintData& printData)
void wxPageSetupDialogData_SetPrintData() {
    wxPrintData *printData = (wxPrintData *)wStackPopObjectPtr( _wxPrintData);
    ((wxPageSetupDialogData *)(wTheCall->self->ptr))->SetPrintData(*printData);
    wWrapDerefArgs();
}

void wxPageSetupDialog_del()
{
    delete (wxPageSetupDialog *)(wTheCall->self->ptr);
}


// wxPageSetupDialog(wxWindow* parent, wxPageSetupDialogData* data = NULL)
void wxPageSetupDialog_new() {
    wxPageSetupDialogData *data = (wTheCall->parmCount > 1 ? (wxPageSetupDialogData *)wStackPopObjectPtr( _wxPageSetupDialogData) : NULL);
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxPageSetupDialog *returns = new wxPageSetupDialog(parent, data);
    wWrapDerefArgs();
    wWrapSetThis( _wxPageSetupDialog, (void *)returns );
}

// ~wxPageSetupDialog()
void wxPageSetupDialog_finalize() {
    ((wxPageSetupDialog *)(wTheCall->self->ptr))->~wxPageSetupDialog();
}

// wxPageSetupDialogData& GetPageSetupData()
void wxPageSetupDialog_GetPageSetupData() {
    wxPageSetupDialogData *returns = &((wxPageSetupDialog *)(wTheCall->self->ptr))->GetPageSetupData();
    wWrapPushObject( _wxPageSetupDialogData, W_TRUE, (void *)returns );
}

// int ShowModal()
void wxPageSetupDialog_ShowModal() {
    int returns = ((wxPageSetupDialog *)(wTheCall->self->ptr))->ShowModal();
    wStackPushNumber( (wNumber)returns);
}

void wxPrintDialog_del()
{
    delete (wxPrintDialog *)(wTheCall->self->ptr);
}


// wxPrintDialog(wxWindow* parent, wxPrintDialogData* data = NULL)
void wxPrintDialog_new() {
    wxPrintDialogData *data = (wTheCall->parmCount > 1 ? (wxPrintDialogData *)wStackPopObjectPtr( _wxPrintDialogData) : NULL);
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxPrintDialog *returns = new wxPrintDialog(parent, data);
    wWrapDerefArgs();
    wWrapSetThis( _wxPrintDialog, (void *)returns );
}

// ~wxPrintDialog()
void wxPrintDialog_finalize() {
    ((wxPrintDialog *)(wTheCall->self->ptr))->~wxPrintDialog();
}

// wxPrintDialogData& GetPrintDialogData()
void wxPrintDialog_GetPrintDialogData() {
    wxPrintDialogData *returns = &((wxPrintDialog *)(wTheCall->self->ptr))->GetPrintDialogData();
    wWrapPushObject( _wxPrintDialogData, W_TRUE, (void *)returns );
}

// wxDC* GetPrintDC()
void wxPrintDialog_GetPrintDC() {
    wxDC *returns = ((wxPrintDialog *)(wTheCall->self->ptr))->GetPrintDC();
    wWrapPushObject( _wxDC, W_TRUE, (void *)returns );
}

// int ShowModal()
void wxPrintDialog_ShowModal() {
    int returns = ((wxPrintDialog *)(wTheCall->self->ptr))->ShowModal();
    wStackPushNumber( (wNumber)returns);
}

void wxMessageDialog_del()
{
    delete (wxMessageDialog *)(wTheCall->self->ptr);
}


// wxMessageDialog(wxWindow* parent, const wxString& message, const wxString& caption = "Message box", long style = wxOK | wxCANCEL | wxCENTRE, const wxPoint& pos = wxDefaultPosition)
void wxMessageDialog_new() {
    const wxPoint *pos = (wTheCall->parmCount > 4 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    long style = (wTheCall->parmCount > 3 ? (long)wStackPopNumber() : wxOK | wxCANCEL | wxCENTRE);
    wxString caption = wxString((wTheCall->parmCount > 2 ? wStackPopChar() : "Message box"), *wxConvCurrent);
    wxString message = wxString(wStackPopChar(), *wxConvCurrent);
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxMessageDialog *returns = new wxMessageDialog(parent, message, caption, style, *pos);
    wWrapDerefArgs();
    wWrapSetThis( _wxMessageDialog, (void *)returns );
}

// ~wxMessageDialog()
void wxMessageDialog_finalize() {
    ((wxMessageDialog *)(wTheCall->self->ptr))->~wxMessageDialog();
}

// int ShowModal()
void wxMessageDialog_ShowModal() {
    int returns = ((wxMessageDialog *)(wTheCall->self->ptr))->ShowModal();
    wStackPushNumber( (wNumber)returns);
}

void wxMenu_del()
{
    delete (wxMenu *)(wTheCall->self->ptr);
}


// wxMenu(const wxString& title = "", long style = 0)
void wxMenu_new() {
    long style = (wTheCall->parmCount > 1 ? (long)wStackPopNumber() : 0);
    wxString title = wxString((wTheCall->parmCount > 0 ? wStackPopChar() : ""), *wxConvCurrent);
    wxMenu *returns = new wxMenu(title, style);
    wWrapDerefArgs();
    wWrapSetThis( _wxMenu, (void *)returns );
}

// ~wxMenu()
void wxMenu_finalize() {
    ((wxMenu *)(wTheCall->self->ptr))->~wxMenu();
}

// void Append(int id, const wxString& item, const wxString& helpString = "", const bool checkable = FALSE)
void wxMenu_Append() {
    const bool checkable = (wTheCall->parmCount > 3 ? (bool)wStackPopNumber() : FALSE);
    wxString helpString = wxString((wTheCall->parmCount > 2 ? wStackPopChar() : ""), *wxConvCurrent);
    wxString item = wxString(wStackPopChar(), *wxConvCurrent);
    int id = (int)wStackPopNumber();
    ((wxMenu *)(wTheCall->self->ptr))->Append(id, item, helpString, checkable);
    wWrapDerefArgs();
}

// %rename AppendMenu void Append(int id, const wxString& item, wxMenu *subMenu, const wxString& helpString = "")
void wxMenu_AppendMenu() {
    wxString helpString = wxString((wTheCall->parmCount > 3 ? wStackPopChar() : ""), *wxConvCurrent);
    wxMenu *subMenu = (wxMenu *)wStackPopObjectPtr( _wxMenu);
    wxString item = wxString(wStackPopChar(), *wxConvCurrent);
    int id = (int)wStackPopNumber();
    ((wxMenu *)(wTheCall->self->ptr))->Append(id, item, subMenu, helpString);
    wWrapDerefArgs();
}

// %rename AppendItem void Append(wxMenuItem* menuItem)
void wxMenu_AppendItem() {
    wxMenuItem *menuItem = (wxMenuItem *)wStackPopObjectPtr( _wxMenuItem);
    ((wxMenu *)(wTheCall->self->ptr))->Append(menuItem);
    wWrapDerefArgs();
}

// void AppendCheckItem(int id, const wxString&  item, const wxString& helpString = "")
void wxMenu_AppendCheckItem() {
    wxString helpString = wxString((wTheCall->parmCount > 2 ? wStackPopChar() : ""), *wxConvCurrent);
    wxString item = wxString(wStackPopChar(), *wxConvCurrent);
    int id = (int)wStackPopNumber();
    ((wxMenu *)(wTheCall->self->ptr))->AppendCheckItem(id, item, helpString);
    wWrapDerefArgs();
}

// void AppendRadioItem(int id, const wxString&  item, const wxString& helpString = "")
void wxMenu_AppendRadioItem() {
    wxString helpString = wxString((wTheCall->parmCount > 2 ? wStackPopChar() : ""), *wxConvCurrent);
    wxString item = wxString(wStackPopChar(), *wxConvCurrent);
    int id = (int)wStackPopNumber();
    ((wxMenu *)(wTheCall->self->ptr))->AppendRadioItem(id, item, helpString);
    wWrapDerefArgs();
}

// void AppendSeparator()
void wxMenu_AppendSeparator() {
    ((wxMenu *)(wTheCall->self->ptr))->AppendSeparator();
}

// void Break()
void wxMenu_Break() {
    ((wxMenu *)(wTheCall->self->ptr))->Break();
}

// void Check(int id, const bool check)
void wxMenu_Check() {
    bool check = (bool)wStackPopNumber();
    int id = (int)wStackPopNumber();
    ((wxMenu *)(wTheCall->self->ptr))->Check(id, check);
    wWrapDerefArgs();
}

// void Delete(int id)
void wxMenu_Delete() {
    int id = (int)wStackPopNumber();
    ((wxMenu *)(wTheCall->self->ptr))->Delete(id);
    wWrapDerefArgs();
}

// %rename DeleteItem void Delete(wxMenuItem *item)
void wxMenu_DeleteItem() {
    wxMenuItem *item = (wxMenuItem *)wStackPopObjectPtr( _wxMenuItem);
    ((wxMenu *)(wTheCall->self->ptr))->Delete(item);
    wWrapDerefArgs();
}

// void Destroy(int id)
void wxMenu_Destroy() {
    int id = (int)wStackPopNumber();
    ((wxMenu *)(wTheCall->self->ptr))->Destroy(id);
    wWrapDerefArgs();
}

// %rename DestroyMenuItem void Destroy(wxMenuItem *item)
void wxMenu_DestroyMenuItem() {
    wxMenuItem *item = (wxMenuItem *)wStackPopObjectPtr( _wxMenuItem);
    ((wxMenu *)(wTheCall->self->ptr))->Destroy(item);
    wWrapDerefArgs();
}

// void Enable(int id, const bool enable)
void wxMenu_Enable() {
    bool enable = (bool)wStackPopNumber();
    int id = (int)wStackPopNumber();
    ((wxMenu *)(wTheCall->self->ptr))->Enable(id, enable);
    wWrapDerefArgs();
}

// int FindItem(const wxString& itemString) const
void wxMenu_FindItem() {
    wxString itemString = wxString(wStackPopChar(), *wxConvCurrent);
    int returns = ((wxMenu *)(wTheCall->self->ptr))->FindItem(itemString);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// wxString GetHelpString(int id) const
void wxMenu_GetHelpString() {
    int id = (int)wStackPopNumber();
    wxString returns = ((wxMenu *)(wTheCall->self->ptr))->GetHelpString(id);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxString GetLabel(int id) const
void wxMenu_GetLabel() {
    int id = (int)wStackPopNumber();
    wxString returns = ((wxMenu *)(wTheCall->self->ptr))->GetLabel(id);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// size_t GetMenuItemCount() const
void wxMenu_GetMenuItemCount() {
    size_t returns = ((wxMenu *)(wTheCall->self->ptr))->GetMenuItemCount();
    wStackPushNumber( (wNumber)returns);
}

// wxMenuItemList& GetMenuItems() const
void wxMenu_GetMenuItems() {
    wxMenuItemList *returns = &((wxMenu *)(wTheCall->self->ptr))->GetMenuItems();
    wWrapPushObject( _wxMenuItemList, W_TRUE, (void *)returns );
}

// wxString GetTitle() const
void wxMenu_GetTitle() {
    wxString returns = ((wxMenu *)(wTheCall->self->ptr))->GetTitle();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// bool Insert(size_t pos, wxMenuItem *item)
void wxMenu_Insert() {
    wxMenuItem *item = (wxMenuItem *)wStackPopObjectPtr( _wxMenuItem);
    size_t pos = (size_t)wStackPopNumber();
    bool returns = ((wxMenu *)(wTheCall->self->ptr))->Insert(pos, item);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void InsertCheckItem(size_t pos, int id, const wxString&  item, const wxString& helpString = "")
void wxMenu_InsertCheckItem() {
    wxString helpString = wxString((wTheCall->parmCount > 3 ? wStackPopChar() : ""), *wxConvCurrent);
    wxString item = wxString(wStackPopChar(), *wxConvCurrent);
    int id = (int)wStackPopNumber();
    size_t pos = (size_t)wStackPopNumber();
    ((wxMenu *)(wTheCall->self->ptr))->InsertCheckItem(pos, id, item, helpString);
    wWrapDerefArgs();
}

// void InsertRadioItem(size_t pos, int id, const wxString&  item, const wxString& helpString = "")
void wxMenu_InsertRadioItem() {
    wxString helpString = wxString((wTheCall->parmCount > 3 ? wStackPopChar() : ""), *wxConvCurrent);
    wxString item = wxString(wStackPopChar(), *wxConvCurrent);
    int id = (int)wStackPopNumber();
    size_t pos = (size_t)wStackPopNumber();
    ((wxMenu *)(wTheCall->self->ptr))->InsertRadioItem(pos, id, item, helpString);
    wWrapDerefArgs();
}

// void InsertSeparator(size_t pos)
void wxMenu_InsertSeparator() {
    size_t pos = (size_t)wStackPopNumber();
    ((wxMenu *)(wTheCall->self->ptr))->InsertSeparator(pos);
    wWrapDerefArgs();
}

// bool IsChecked(int id) const
void wxMenu_IsChecked() {
    int id = (int)wStackPopNumber();
    bool returns = ((wxMenu *)(wTheCall->self->ptr))->IsChecked(id);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool IsEnabled(int id) const
void wxMenu_IsEnabled() {
    int id = (int)wStackPopNumber();
    bool returns = ((wxMenu *)(wTheCall->self->ptr))->IsEnabled(id);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %rename PrependItem void Prepend( wxMenuItem *item)
void wxMenu_PrependItem() {
    wxMenuItem *item = (wxMenuItem *)wStackPopObjectPtr( _wxMenuItem);
    ((wxMenu *)(wTheCall->self->ptr))->Prepend(item);
    wWrapDerefArgs();
}

// void Prepend(int id, const wxString& item, const wxString& helpString = "", wxItemKind kind = wxITEM_NORMAL)
void wxMenu_Prepend() {
    wxItemKind kind = (wTheCall->parmCount > 3 ? (wxItemKind)wStackPopNumber() : wxITEM_NORMAL);
    wxString helpString = wxString((wTheCall->parmCount > 2 ? wStackPopChar() : ""), *wxConvCurrent);
    wxString item = wxString(wStackPopChar(), *wxConvCurrent);
    int id = (int)wStackPopNumber();
    ((wxMenu *)(wTheCall->self->ptr))->Prepend(id, item, helpString, kind);
    wWrapDerefArgs();
}

// void PrependCheckItem(int id, const wxString&  item, const wxString& helpString = "")
void wxMenu_PrependCheckItem() {
    wxString helpString = wxString((wTheCall->parmCount > 2 ? wStackPopChar() : ""), *wxConvCurrent);
    wxString item = wxString(wStackPopChar(), *wxConvCurrent);
    int id = (int)wStackPopNumber();
    ((wxMenu *)(wTheCall->self->ptr))->PrependCheckItem(id, item, helpString);
    wWrapDerefArgs();
}

// void PrependRadioItem(int id, const wxString&  item, const wxString& helpString = "")
void wxMenu_PrependRadioItem() {
    wxString helpString = wxString((wTheCall->parmCount > 2 ? wStackPopChar() : ""), *wxConvCurrent);
    wxString item = wxString(wStackPopChar(), *wxConvCurrent);
    int id = (int)wStackPopNumber();
    ((wxMenu *)(wTheCall->self->ptr))->PrependRadioItem(id, item, helpString);
    wWrapDerefArgs();
}

// %rename RemoveById wxMenuItem * Remove(int id)
void wxMenu_RemoveById() {
    int id = (int)wStackPopNumber();
    wxMenuItem *returns = ((wxMenu *)(wTheCall->self->ptr))->Remove(id);
    wWrapDerefArgs();
    wWrapPushObject( _wxMenuItem, W_TRUE, (void *)returns );
}

// wxMenuItem * Remove(wxMenuItem *item)
void wxMenu_Remove() {
    wxMenuItem *item = (wxMenuItem *)wStackPopObjectPtr( _wxMenuItem);
    wxMenuItem *returns = ((wxMenu *)(wTheCall->self->ptr))->Remove(item);
    wWrapDerefArgs();
    wWrapPushObject( _wxMenuItem, W_TRUE, (void *)returns );
}

// void SetHelpString(int id, const wxString& helpString)
void wxMenu_SetHelpString() {
    wxString helpString = wxString(wStackPopChar(), *wxConvCurrent);
    int id = (int)wStackPopNumber();
    ((wxMenu *)(wTheCall->self->ptr))->SetHelpString(id, helpString);
    wWrapDerefArgs();
}

// void SetLabel(int id, const wxString& label)
void wxMenu_SetLabel() {
    wxString label = wxString(wStackPopChar(), *wxConvCurrent);
    int id = (int)wStackPopNumber();
    ((wxMenu *)(wTheCall->self->ptr))->SetLabel(id, label);
    wWrapDerefArgs();
}

// void SetTitle(const wxString& title)
void wxMenu_SetTitle() {
    wxString title = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxMenu *)(wTheCall->self->ptr))->SetTitle(title);
    wWrapDerefArgs();
}

// void UpdateUI(wxEvtHandler* source = NULL) const
void wxMenu_UpdateUI() {
    wxEvtHandler *source = (wTheCall->parmCount > 0 ? (wxEvtHandler *)wStackPopObjectPtr( _wxEvtHandler) : NULL);
    ((wxMenu *)(wTheCall->self->ptr))->UpdateUI(source);
    wWrapDerefArgs();
}

void wxMenuBar_del()
{
    delete (wxMenuBar *)(wTheCall->self->ptr);
}


// wxMenuBar(long style = 0)
void wxMenuBar_new() {
    long style = (wTheCall->parmCount > 0 ? (long)wStackPopNumber() : 0);
    wxMenuBar *returns = new wxMenuBar(style);
    wWrapDerefArgs();
    wWrapSetThis( _wxMenuBar, (void *)returns );
}

// ~wxMenuBar()
void wxMenuBar_finalize() {
    ((wxMenuBar *)(wTheCall->self->ptr))->~wxMenuBar();
}

// bool Append(wxMenu *menu, const wxString& title)
void wxMenuBar_Append() {
    wxString title = wxString(wStackPopChar(), *wxConvCurrent);
    wxMenu *menu = (wxMenu *)wStackPopObjectPtr( _wxMenu);
    bool returns = ((wxMenuBar *)(wTheCall->self->ptr))->Append(menu, title);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void Check(int id, const bool check)
void wxMenuBar_Check() {
    bool check = (bool)wStackPopNumber();
    int id = (int)wStackPopNumber();
    ((wxMenuBar *)(wTheCall->self->ptr))->Check(id, check);
    wWrapDerefArgs();
}

// void Enable(int id, const bool enable)
void wxMenuBar_Enable() {
    bool enable = (bool)wStackPopNumber();
    int id = (int)wStackPopNumber();
    ((wxMenuBar *)(wTheCall->self->ptr))->Enable(id, enable);
    wWrapDerefArgs();
}

// void EnableTop(int pos, const bool enable)
void wxMenuBar_EnableTop() {
    bool enable = (bool)wStackPopNumber();
    int pos = (int)wStackPopNumber();
    ((wxMenuBar *)(wTheCall->self->ptr))->EnableTop(pos, enable);
    wWrapDerefArgs();
}

// int FindMenu(const wxString& title) const
void wxMenuBar_FindMenu() {
    wxString title = wxString(wStackPopChar(), *wxConvCurrent);
    int returns = ((wxMenuBar *)(wTheCall->self->ptr))->FindMenu(title);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int FindMenuItem(const wxString& menuString, const wxString& itemString) const
void wxMenuBar_FindMenuItem() {
    wxString itemString = wxString(wStackPopChar(), *wxConvCurrent);
    wxString menuString = wxString(wStackPopChar(), *wxConvCurrent);
    int returns = ((wxMenuBar *)(wTheCall->self->ptr))->FindMenuItem(menuString, itemString);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// wxString GetHelpString(int id) const
void wxMenuBar_GetHelpString() {
    int id = (int)wStackPopNumber();
    wxString returns = ((wxMenuBar *)(wTheCall->self->ptr))->GetHelpString(id);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxString GetLabel(int id) const
void wxMenuBar_GetLabel() {
    int id = (int)wStackPopNumber();
    wxString returns = ((wxMenuBar *)(wTheCall->self->ptr))->GetLabel(id);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxString GetLabelTop(int pos) const
void wxMenuBar_GetLabelTop() {
    int pos = (int)wStackPopNumber();
    wxString returns = ((wxMenuBar *)(wTheCall->self->ptr))->GetLabelTop(pos);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxMenu* GetMenu(int menuIndex) const
void wxMenuBar_GetMenu() {
    int menuIndex = (int)wStackPopNumber();
    wxMenu *returns = ((wxMenuBar *)(wTheCall->self->ptr))->GetMenu(menuIndex);
    wWrapDerefArgs();
    wWrapPushObject( _wxMenu, W_TRUE, (void *)returns );
}

// int GetMenuCount() const
void wxMenuBar_GetMenuCount() {
    int returns = ((wxMenuBar *)(wTheCall->self->ptr))->GetMenuCount();
    wStackPushNumber( (wNumber)returns);
}

// bool Insert(size_t pos, wxMenu *menu, const wxString& title)
void wxMenuBar_Insert() {
    wxString title = wxString(wStackPopChar(), *wxConvCurrent);
    wxMenu *menu = (wxMenu *)wStackPopObjectPtr( _wxMenu);
    size_t pos = (size_t)wStackPopNumber();
    bool returns = ((wxMenuBar *)(wTheCall->self->ptr))->Insert(pos, menu, title);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool IsChecked(int id) const
void wxMenuBar_IsChecked() {
    int id = (int)wStackPopNumber();
    bool returns = ((wxMenuBar *)(wTheCall->self->ptr))->IsChecked(id);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool IsEnabled(int id) const
void wxMenuBar_IsEnabled() {
    int id = (int)wStackPopNumber();
    bool returns = ((wxMenuBar *)(wTheCall->self->ptr))->IsEnabled(id);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void Refresh()
void wxMenuBar_Refresh() {
    ((wxMenuBar *)(wTheCall->self->ptr))->Refresh();
}

// wxMenu * Remove(size_t pos)
void wxMenuBar_Remove() {
    size_t pos = (size_t)wStackPopNumber();
    wxMenu *returns = ((wxMenuBar *)(wTheCall->self->ptr))->Remove(pos);
    wWrapDerefArgs();
    wWrapPushObject( _wxMenu, W_TRUE, (void *)returns );
}

// wxMenu * Replace(size_t pos, wxMenu *menu, const wxString& title)
void wxMenuBar_Replace() {
    wxString title = wxString(wStackPopChar(), *wxConvCurrent);
    wxMenu *menu = (wxMenu *)wStackPopObjectPtr( _wxMenu);
    size_t pos = (size_t)wStackPopNumber();
    wxMenu *returns = ((wxMenuBar *)(wTheCall->self->ptr))->Replace(pos, menu, title);
    wWrapDerefArgs();
    wWrapPushObject( _wxMenu, W_TRUE, (void *)returns );
}

// void SetHelpString(int id, const wxString& helpString)
void wxMenuBar_SetHelpString() {
    wxString helpString = wxString(wStackPopChar(), *wxConvCurrent);
    int id = (int)wStackPopNumber();
    ((wxMenuBar *)(wTheCall->self->ptr))->SetHelpString(id, helpString);
    wWrapDerefArgs();
}

// void SetLabel(int id, const wxString& label)
void wxMenuBar_SetLabel() {
    wxString label = wxString(wStackPopChar(), *wxConvCurrent);
    int id = (int)wStackPopNumber();
    ((wxMenuBar *)(wTheCall->self->ptr))->SetLabel(id, label);
    wWrapDerefArgs();
}

// void SetLabelTop(int pos, const wxString& label)
void wxMenuBar_SetLabelTop() {
    wxString label = wxString(wStackPopChar(), *wxConvCurrent);
    int pos = (int)wStackPopNumber();
    ((wxMenuBar *)(wTheCall->self->ptr))->SetLabelTop(pos, label);
    wWrapDerefArgs();
}

void wxMenuItem_del()
{
    delete (wxMenuItem *)(wTheCall->self->ptr);
}


// wxMenuItem(wxMenu *parentMenu = NULL, int id = wxID_SEPARATOR, const wxString& text = wxEmptyString, const wxString& help = wxEmptyString, bool isCheckable = FALSE, wxMenu *subMenu = NULL)
void wxMenuItem_new() {
    wxMenu *subMenu = (wTheCall->parmCount > 5 ? (wxMenu *)wStackPopObjectPtr( _wxMenu) : NULL);
    bool isCheckable = (wTheCall->parmCount > 4 ? (bool)wStackPopNumber() : FALSE);
    wxString help = wxString((wTheCall->parmCount > 3 ? wStackPopChar() : wxEmptyString), *wxConvCurrent);
    wxString text = wxString((wTheCall->parmCount > 2 ? wStackPopChar() : wxEmptyString), *wxConvCurrent);
    int id = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : wxID_SEPARATOR);
    wxMenu *parentMenu = (wTheCall->parmCount > 0 ? (wxMenu *)wStackPopObjectPtr( _wxMenu) : NULL);
    wxMenuItem *returns = new wxMenuItem(parentMenu, id, text, help, isCheckable, subMenu);
    wWrapDerefArgs();
    wWrapSetThis( _wxMenuItem, (void *)returns );
}

// ~wxMenuItem()
void wxMenuItem_finalize() {
    ((wxMenuItem *)(wTheCall->self->ptr))->~wxMenuItem();
}

// void Check(bool check)
void wxMenuItem_Check() {
    bool check = (bool)wStackPopNumber();
    ((wxMenuItem *)(wTheCall->self->ptr))->Check(check);
    wWrapDerefArgs();
}

// void Enable(bool enable)
void wxMenuItem_Enable() {
    bool enable = (bool)wStackPopNumber();
    ((wxMenuItem *)(wTheCall->self->ptr))->Enable(enable);
    wWrapDerefArgs();
}

// wxString GetHelp() const
void wxMenuItem_GetHelp() {
    wxString returns = ((wxMenuItem *)(wTheCall->self->ptr))->GetHelp();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// int GetId() const
void wxMenuItem_GetId() {
    int returns = ((wxMenuItem *)(wTheCall->self->ptr))->GetId();
    wStackPushNumber( (wNumber)returns);
}

// wxString GetLabel() const
void wxMenuItem_GetLabel() {
    wxString returns = ((wxMenuItem *)(wTheCall->self->ptr))->GetLabel();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// static wxString GetLabelFromText(const wxString& text)
void wxMenuItem_GetLabelFromText() {
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    wxString returns = ((wxMenuItem *)(wTheCall->self->ptr))->GetLabelFromText(text);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxString GetText() const
void wxMenuItem_GetText() {
    wxString returns = ((wxMenuItem *)(wTheCall->self->ptr))->GetText();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxMenu* GetSubMenu() const
void wxMenuItem_GetSubMenu() {
    wxMenu *returns = ((wxMenuItem *)(wTheCall->self->ptr))->GetSubMenu();
    wWrapPushObject( _wxMenu, W_TRUE, (void *)returns );
}

// bool IsCheckable() const
void wxMenuItem_IsCheckable() {
    bool returns = ((wxMenuItem *)(wTheCall->self->ptr))->IsCheckable();
    wStackPushNumber( (wNumber)returns);
}

// bool IsChecked() const
void wxMenuItem_IsChecked() {
    bool returns = ((wxMenuItem *)(wTheCall->self->ptr))->IsChecked();
    wStackPushNumber( (wNumber)returns);
}

// bool IsEnabled() const
void wxMenuItem_IsEnabled() {
    bool returns = ((wxMenuItem *)(wTheCall->self->ptr))->IsEnabled();
    wStackPushNumber( (wNumber)returns);
}

// bool IsSeparator() const
void wxMenuItem_IsSeparator() {
    bool returns = ((wxMenuItem *)(wTheCall->self->ptr))->IsSeparator();
    wStackPushNumber( (wNumber)returns);
}

// void SetHelp(const wxString& helpString) const
void wxMenuItem_SetHelp() {
    wxString helpString = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxMenuItem *)(wTheCall->self->ptr))->SetHelp(helpString);
    wWrapDerefArgs();
}

void wxEvent_del()
{
    delete (wxEvent *)(wTheCall->self->ptr);
}


// wxObject* GetEventObject()
void wxEvent_GetEventObject() {
    wxObject *returns = ((wxEvent *)(wTheCall->self->ptr))->GetEventObject();
    wWrapPushObject( _wxObject, W_TRUE, (void *)returns );
}

// WXTYPE GetEventType()
void wxEvent_GetEventType() {
    WXTYPE returns = ((wxEvent *)(wTheCall->self->ptr))->GetEventType();
    wStackPushNumber( (wNumber)returns);
}

// int GetId()
void wxEvent_GetId() {
    int returns = ((wxEvent *)(wTheCall->self->ptr))->GetId();
    wStackPushNumber( (wNumber)returns);
}

// bool GetSkipped()
void wxEvent_GetSkipped() {
    bool returns = ((wxEvent *)(wTheCall->self->ptr))->GetSkipped();
    wStackPushNumber( (wNumber)returns);
}

// long GetTimestamp()
void wxEvent_GetTimestamp() {
    long returns = ((wxEvent *)(wTheCall->self->ptr))->GetTimestamp();
    wStackPushNumber( (wNumber)returns);
}

// void SetEventObject(wxObject* object)
void wxEvent_SetEventObject() {
    wxObject *object = (wxObject *)wStackPopObjectPtr( _wxObject);
    ((wxEvent *)(wTheCall->self->ptr))->SetEventObject(object);
    wWrapDerefArgs();
}

// void SetEventType(WXTYPE typ)
void wxEvent_SetEventType() {
    WXTYPE typ = (WXTYPE)wStackPopNumber();
    ((wxEvent *)(wTheCall->self->ptr))->SetEventType(typ);
    wWrapDerefArgs();
}

// void SetId(int id)
void wxEvent_SetId() {
    int id = (int)wStackPopNumber();
    ((wxEvent *)(wTheCall->self->ptr))->SetId(id);
    wWrapDerefArgs();
}

// void SetTimestamp(long timeStamp)
void wxEvent_SetTimestamp() {
    long timeStamp = (long)wStackPopNumber();
    ((wxEvent *)(wTheCall->self->ptr))->SetTimestamp(timeStamp);
    wWrapDerefArgs();
}

// void Skip(bool skip = TRUE)
void wxEvent_Skip() {
    bool skip = (wTheCall->parmCount > 0 ? (bool)wStackPopNumber() : TRUE);
    ((wxEvent *)(wTheCall->self->ptr))->Skip(skip);
    wWrapDerefArgs();
}

void wxTimerEvent_del()
{
    delete (wxTimerEvent *)(wTheCall->self->ptr);
}


// int GetInterval() const
void wxTimerEvent_GetInterval() {
    int returns = ((wxTimerEvent *)(wTheCall->self->ptr))->GetInterval();
    wStackPushNumber( (wNumber)returns);
}

void wxCommandEvent_del()
{
    delete (wxCommandEvent *)(wTheCall->self->ptr);
}


// wxCommandEvent(WXTYPE commandEventType = 0, int id = 0)
void wxCommandEvent_new() {
    int id = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : 0);
    WXTYPE commandEventType = (wTheCall->parmCount > 0 ? (WXTYPE)wStackPopNumber() : 0);
    wxCommandEvent *returns = new wxCommandEvent(commandEventType, id);
    wWrapDerefArgs();
    wWrapSetThis( _wxCommandEvent, (void *)returns );
}

// void* GetClientData()
void wxCommandEvent_GetClientData() {
    ((wxCommandEvent *)(wTheCall->self->ptr))->GetClientData();
}

// long GetExtraLong()
void wxCommandEvent_GetExtraLong() {
    long returns = ((wxCommandEvent *)(wTheCall->self->ptr))->GetExtraLong();
    wStackPushNumber( (wNumber)returns);
}

// int GetInt()
void wxCommandEvent_GetInt() {
    int returns = ((wxCommandEvent *)(wTheCall->self->ptr))->GetInt();
    wStackPushNumber( (wNumber)returns);
}

// int GetSelection()
void wxCommandEvent_GetSelection() {
    int returns = ((wxCommandEvent *)(wTheCall->self->ptr))->GetSelection();
    wStackPushNumber( (wNumber)returns);
}

// wxString GetString()
void wxCommandEvent_GetString() {
    wxString returns = ((wxCommandEvent *)(wTheCall->self->ptr))->GetString();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// bool IsChecked() const
void wxCommandEvent_IsChecked() {
    bool returns = ((wxCommandEvent *)(wTheCall->self->ptr))->IsChecked();
    wStackPushNumber( (wNumber)returns);
}

// bool IsSelection()
void wxCommandEvent_IsSelection() {
    bool returns = ((wxCommandEvent *)(wTheCall->self->ptr))->IsSelection();
    wStackPushNumber( (wNumber)returns);
}

// void SetClientData(void* clientData)
void wxCommandEvent_SetClientData() {
    void *clientData = (void *)wStackPopObjectPtr( NULL );
    ((wxCommandEvent *)(wTheCall->self->ptr))->SetClientData(clientData);
    wWrapDerefArgs();
}

// void SetExtraLong(int extraLong)
void wxCommandEvent_SetExtraLong() {
    int extraLong = (int)wStackPopNumber();
    ((wxCommandEvent *)(wTheCall->self->ptr))->SetExtraLong(extraLong);
    wWrapDerefArgs();
}

// void SetInt(int intCommand)
void wxCommandEvent_SetInt() {
    int intCommand = (int)wStackPopNumber();
    ((wxCommandEvent *)(wTheCall->self->ptr))->SetInt(intCommand);
    wWrapDerefArgs();
}

// void SetString(char* string)
void wxCommandEvent_SetString() {
    char *string = (char *)wStackPopObjectPtr( NULL );
    ((wxCommandEvent *)(wTheCall->self->ptr))->SetString(string);
    wWrapDerefArgs();
}

void wxNotifyEvent_del()
{
    delete (wxNotifyEvent *)(wTheCall->self->ptr);
}


// wxNotifyEvent(wxEventType eventType = wxEVT_NULL, int id = 0)
void wxNotifyEvent_new() {
    int id = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : 0);
    wxEventType eventType = (wTheCall->parmCount > 0 ? (wxEventType)wStackPopNumber() : wxEVT_NULL);
    wxNotifyEvent *returns = new wxNotifyEvent(eventType, id);
    wWrapDerefArgs();
    wWrapSetThis( _wxNotifyEvent, (void *)returns );
}

// bool IsAllowed() const
void wxNotifyEvent_IsAllowed() {
    bool returns = ((wxNotifyEvent *)(wTheCall->self->ptr))->IsAllowed();
    wStackPushNumber( (wNumber)returns);
}

// void Veto()
void wxNotifyEvent_Veto() {
    ((wxNotifyEvent *)(wTheCall->self->ptr))->Veto();
}

void wxActivateEvent_del()
{
    delete (wxActivateEvent *)(wTheCall->self->ptr);
}


// wxActivateEvent(WXTYPE eventType = 0, bool active = TRUE, int id = 0)
void wxActivateEvent_new() {
    int id = (wTheCall->parmCount > 2 ? (int)wStackPopNumber() : 0);
    bool active = (wTheCall->parmCount > 1 ? (bool)wStackPopNumber() : TRUE);
    WXTYPE eventType = (wTheCall->parmCount > 0 ? (WXTYPE)wStackPopNumber() : 0);
    wxActivateEvent *returns = new wxActivateEvent(eventType, active, id);
    wWrapDerefArgs();
    wWrapSetThis( _wxActivateEvent, (void *)returns );
}

// bool GetActive() const
void wxActivateEvent_GetActive() {
    bool returns = ((wxActivateEvent *)(wTheCall->self->ptr))->GetActive();
    wStackPushNumber( (wNumber)returns);
}

void wxCalendarEvent_del()
{
    delete (wxCalendarEvent *)(wTheCall->self->ptr);
}


// wxCalendarEvent(wxCalendarCtrl *cal, wxEventType type)
void wxCalendarEvent_new() {
    wxEventType type = (wxEventType)wStackPopNumber();
    wxCalendarCtrl *cal = (wxCalendarCtrl *)wStackPopObjectPtr( _wxCalendarCtrl);
    wxCalendarEvent *returns = new wxCalendarEvent(cal, type);
    wWrapDerefArgs();
    wWrapSetThis( _wxCalendarEvent, (void *)returns );
}

// const wxDateTime& GetDate() const
void wxCalendarEvent_GetDate() {
    const wxDateTime *returns = &((wxCalendarEvent *)(wTheCall->self->ptr))->GetDate();
    wWrapPushObject( _wxDateTime, W_TRUE, (void *)returns );
}

// wxDateTime::WeekDay GetWeekDay() const
void wxCalendarEvent_GetWeekDay() {
    wxDateTime::WeekDay returns = ((wxCalendarEvent *)(wTheCall->self->ptr))->GetWeekDay();
    wStackPushNumber( (wNumber)returns);
}

void wxCalculateLayoutEvent_del()
{
    delete (wxCalculateLayoutEvent *)(wTheCall->self->ptr);
}


// wxCalculateLayoutEvent(wxWindowID id = 0)
void wxCalculateLayoutEvent_new() {
    wxWindowID id = (wTheCall->parmCount > 0 ? (wxWindowID)wStackPopNumber() : 0);
    wxCalculateLayoutEvent *returns = new wxCalculateLayoutEvent(id);
    wWrapDerefArgs();
    wWrapSetThis( _wxCalculateLayoutEvent, (void *)returns );
}

// int GetFlags() const
void wxCalculateLayoutEvent_GetFlags() {
    int returns = ((wxCalculateLayoutEvent *)(wTheCall->self->ptr))->GetFlags();
    wStackPushNumber( (wNumber)returns);
}

// wxRect GetRect() const
void wxCalculateLayoutEvent_GetRect() {
    // make a pointer via copy constructor
    wxRect *returns = new wxRect(((wxCalculateLayoutEvent *)(wTheCall->self->ptr))->GetRect());
    wWrapPushObject( _wxRect, W_TRUE, (void *)returns );
}

// void SetFlags(int flags)
void wxCalculateLayoutEvent_SetFlags() {
    int flags = (int)wStackPopNumber();
    ((wxCalculateLayoutEvent *)(wTheCall->self->ptr))->SetFlags(flags);
    wWrapDerefArgs();
}

// void SetRect(const wxRect& rect)
void wxCalculateLayoutEvent_SetRect() {
    wxRect *rect = (wxRect *)wStackPopObjectPtr( _wxRect);
    ((wxCalculateLayoutEvent *)(wTheCall->self->ptr))->SetRect(*rect);
    wWrapDerefArgs();
}

void wxCloseEvent_del()
{
    delete (wxCloseEvent *)(wTheCall->self->ptr);
}


// wxCloseEvent(WXTYPE commandEventType = 0, int id = 0)
void wxCloseEvent_new() {
    int id = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : 0);
    WXTYPE commandEventType = (wTheCall->parmCount > 0 ? (WXTYPE)wStackPopNumber() : 0);
    wxCloseEvent *returns = new wxCloseEvent(commandEventType, id);
    wWrapDerefArgs();
    wWrapSetThis( _wxCloseEvent, (void *)returns );
}

// bool CanVeto()
void wxCloseEvent_CanVeto() {
    bool returns = ((wxCloseEvent *)(wTheCall->self->ptr))->CanVeto();
    wStackPushNumber( (wNumber)returns);
}

// bool GetLoggingOff() const
void wxCloseEvent_GetLoggingOff() {
    bool returns = ((wxCloseEvent *)(wTheCall->self->ptr))->GetLoggingOff();
    wStackPushNumber( (wNumber)returns);
}

// void SetCanVeto(bool canVeto)
void wxCloseEvent_SetCanVeto() {
    bool canVeto = (bool)wStackPopNumber();
    ((wxCloseEvent *)(wTheCall->self->ptr))->SetCanVeto(canVeto);
    wWrapDerefArgs();
}

// void SetLoggingOff(bool loggingOff) const
void wxCloseEvent_SetLoggingOff() {
    bool loggingOff = (bool)wStackPopNumber();
    ((wxCloseEvent *)(wTheCall->self->ptr))->SetLoggingOff(loggingOff);
    wWrapDerefArgs();
}

// void Veto(bool veto = TRUE)
void wxCloseEvent_Veto() {
    bool veto = (wTheCall->parmCount > 0 ? (bool)wStackPopNumber() : TRUE);
    ((wxCloseEvent *)(wTheCall->self->ptr))->Veto(veto);
    wWrapDerefArgs();
}

void wxDialUpEvent_del()
{
    delete (wxDialUpEvent *)(wTheCall->self->ptr);
}


// wxDialUpEvent(bool isConnected, bool isOwnEvent)
void wxDialUpEvent_new() {
    bool isOwnEvent = (bool)wStackPopNumber();
    bool isConnected = (bool)wStackPopNumber();
    wxDialUpEvent *returns = new wxDialUpEvent(isConnected, isOwnEvent);
    wWrapDerefArgs();
    wWrapSetThis( _wxDialUpEvent, (void *)returns );
}

// bool IsConnectedEvent() const
void wxDialUpEvent_IsConnectedEvent() {
    bool returns = ((wxDialUpEvent *)(wTheCall->self->ptr))->IsConnectedEvent();
    wStackPushNumber( (wNumber)returns);
}

// bool IsOwnEvent() const
void wxDialUpEvent_IsOwnEvent() {
    bool returns = ((wxDialUpEvent *)(wTheCall->self->ptr))->IsOwnEvent();
    wStackPushNumber( (wNumber)returns);
}

void wxDropFilesEvent_del()
{
    delete (wxDropFilesEvent *)(wTheCall->self->ptr);
}


// wxString* GetFiles() const
void wxDropFilesEvent_GetFiles() {
    wxString *returns = ((wxDropFilesEvent *)(wTheCall->self->ptr))->GetFiles();
    wStackPushChar( (char *)(returns->c_str()), W_TRUE );
}

// int GetNumberOfFiles() const
void wxDropFilesEvent_GetNumberOfFiles() {
    int returns = ((wxDropFilesEvent *)(wTheCall->self->ptr))->GetNumberOfFiles();
    wStackPushNumber( (wNumber)returns);
}

// wxPoint GetPosition() const
void wxDropFilesEvent_GetPosition() {
    // make a pointer via copy constructor
    wxPoint *returns = new wxPoint(((wxDropFilesEvent *)(wTheCall->self->ptr))->GetPosition());
    wWrapPushObject( _wxPoint, W_TRUE, (void *)returns );
}

void wxEraseEvent_del()
{
    delete (wxEraseEvent *)(wTheCall->self->ptr);
}


// wxEraseEvent(int id = 0, wxDC* dc = NULL)
void wxEraseEvent_new() {
    wxDC *dc = (wTheCall->parmCount > 1 ? (wxDC *)wStackPopObjectPtr( _wxDC) : NULL);
    int id = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : 0);
    wxEraseEvent *returns = new wxEraseEvent(id, dc);
    wWrapDerefArgs();
    wWrapSetThis( _wxEraseEvent, (void *)returns );
}

// wxDC* GetDC() const
void wxEraseEvent_GetDC() {
    wxDC *returns = ((wxEraseEvent *)(wTheCall->self->ptr))->GetDC();
    wWrapPushObject( _wxDC, W_TRUE, (void *)returns );
}

void wxFocusEvent_del()
{
    delete (wxFocusEvent *)(wTheCall->self->ptr);
}


// wxFocusEvent(WXTYPE eventType = 0, int id = 0)
void wxFocusEvent_new() {
    int id = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : 0);
    WXTYPE eventType = (wTheCall->parmCount > 0 ? (WXTYPE)wStackPopNumber() : 0);
    wxFocusEvent *returns = new wxFocusEvent(eventType, id);
    wWrapDerefArgs();
    wWrapSetThis( _wxFocusEvent, (void *)returns );
}

void wxKeyEvent_del()
{
    delete (wxKeyEvent *)(wTheCall->self->ptr);
}


// wxKeyEvent(WXTYPE keyEventType)
void wxKeyEvent_new() {
    WXTYPE keyEventType = (WXTYPE)wStackPopNumber();
    wxKeyEvent *returns = new wxKeyEvent(keyEventType);
    wWrapDerefArgs();
    wWrapSetThis( _wxKeyEvent, (void *)returns );
}

// bool AltDown() const
void wxKeyEvent_AltDown() {
    bool returns = ((wxKeyEvent *)(wTheCall->self->ptr))->AltDown();
    wStackPushNumber( (wNumber)returns);
}

// bool ControlDown() const
void wxKeyEvent_ControlDown() {
    bool returns = ((wxKeyEvent *)(wTheCall->self->ptr))->ControlDown();
    wStackPushNumber( (wNumber)returns);
}

// int GetKeyCode() const
void wxKeyEvent_GetKeyCode() {
    int returns = ((wxKeyEvent *)(wTheCall->self->ptr))->GetKeyCode();
    wStackPushNumber( (wNumber)returns);
}

// long GetX()
void wxKeyEvent_GetX() {
    long returns = ((wxKeyEvent *)(wTheCall->self->ptr))->GetX();
    wStackPushNumber( (wNumber)returns);
}

// long GetY() const
void wxKeyEvent_GetY() {
    long returns = ((wxKeyEvent *)(wTheCall->self->ptr))->GetY();
    wStackPushNumber( (wNumber)returns);
}

// bool MetaDown() const
void wxKeyEvent_MetaDown() {
    bool returns = ((wxKeyEvent *)(wTheCall->self->ptr))->MetaDown();
    wStackPushNumber( (wNumber)returns);
}

// wxPoint GetPosition() const
void wxKeyEvent_GetPosition() {
    // make a pointer via copy constructor
    wxPoint *returns = new wxPoint(((wxKeyEvent *)(wTheCall->self->ptr))->GetPosition());
    wWrapPushObject( _wxPoint, W_TRUE, (void *)returns );
}

void wxKeyEvent_GetPositionXY()
{
    long x, y;
    ((wxKeyEvent *)wTheCall->self->ptr)->GetPosition(&x, &y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)x );
    wStackPushNumber( (wNumber)y );
}

void wxKeyEvent_GetPositionX()
{
    long x, y;
    ((wxKeyEvent *)wTheCall->self->ptr)->GetPosition(&x, &y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)x );
}

void wxKeyEvent_GetPositionY()
{
    long x, y;
    ((wxKeyEvent *)wTheCall->self->ptr)->GetPosition(&x, &y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)y );
}
// bool HasModifiers() const
void wxKeyEvent_HasModifiers() {
    bool returns = ((wxKeyEvent *)(wTheCall->self->ptr))->HasModifiers();
    wStackPushNumber( (wNumber)returns);
}

// bool ShiftDown() const
void wxKeyEvent_ShiftDown() {
    bool returns = ((wxKeyEvent *)(wTheCall->self->ptr))->ShiftDown();
    wStackPushNumber( (wNumber)returns);
}

void wxIdleEvent_del()
{
    delete (wxIdleEvent *)(wTheCall->self->ptr);
}


// wxIdleEvent()
void wxIdleEvent_new() {
    wxIdleEvent *returns = new wxIdleEvent();
    wWrapSetThis( _wxIdleEvent, (void *)returns );
}

// void RequestMore(bool needMore = TRUE)
void wxIdleEvent_RequestMore() {
    bool needMore = (wTheCall->parmCount > 0 ? (bool)wStackPopNumber() : TRUE);
    ((wxIdleEvent *)(wTheCall->self->ptr))->RequestMore(needMore);
    wWrapDerefArgs();
}

// bool MoreRequested() const
void wxIdleEvent_MoreRequested() {
    bool returns = ((wxIdleEvent *)(wTheCall->self->ptr))->MoreRequested();
    wStackPushNumber( (wNumber)returns);
}

void wxInitDialogEvent_del()
{
    delete (wxInitDialogEvent *)(wTheCall->self->ptr);
}


// wxInitDialogEvent(int id = 0)
void wxInitDialogEvent_new() {
    int id = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : 0);
    wxInitDialogEvent *returns = new wxInitDialogEvent(id);
    wWrapDerefArgs();
    wWrapSetThis( _wxInitDialogEvent, (void *)returns );
}

void wxJoystick_del()
{
    delete (wxJoystick *)(wTheCall->self->ptr);
}


// wxJoystick(int joystick = wxJOYSTICK1)
void wxJoystick_new() {
    int joystick = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : wxJOYSTICK1);
    wxJoystick *returns = new wxJoystick(joystick);
    wWrapDerefArgs();
    wWrapSetThis( _wxJoystick, (void *)returns );
}

// ~wxJoystick()
void wxJoystick_finalize() {
    ((wxJoystick *)(wTheCall->self->ptr))->~wxJoystick();
}

// int GetButtonState() const
void wxJoystick_GetButtonState() {
    int returns = ((wxJoystick *)(wTheCall->self->ptr))->GetButtonState();
    wStackPushNumber( (wNumber)returns);
}

// int GetManufacturerId() const
void wxJoystick_GetManufacturerId() {
    int returns = ((wxJoystick *)(wTheCall->self->ptr))->GetManufacturerId();
    wStackPushNumber( (wNumber)returns);
}

// int GetMovementThreshold() const
void wxJoystick_GetMovementThreshold() {
    int returns = ((wxJoystick *)(wTheCall->self->ptr))->GetMovementThreshold();
    wStackPushNumber( (wNumber)returns);
}

// int GetNumberAxes() const
void wxJoystick_GetNumberAxes() {
    int returns = ((wxJoystick *)(wTheCall->self->ptr))->GetNumberAxes();
    wStackPushNumber( (wNumber)returns);
}

// int GetNumberButtons() const
void wxJoystick_GetNumberButtons() {
    int returns = ((wxJoystick *)(wTheCall->self->ptr))->GetNumberButtons();
    wStackPushNumber( (wNumber)returns);
}

// int GetNumberJoysticks() const
void wxJoystick_GetNumberJoysticks() {
    int returns = ((wxJoystick *)(wTheCall->self->ptr))->GetNumberJoysticks();
    wStackPushNumber( (wNumber)returns);
}

// int GetPollingMax() const
void wxJoystick_GetPollingMax() {
    int returns = ((wxJoystick *)(wTheCall->self->ptr))->GetPollingMax();
    wStackPushNumber( (wNumber)returns);
}

// int GetPollingMin() const
void wxJoystick_GetPollingMin() {
    int returns = ((wxJoystick *)(wTheCall->self->ptr))->GetPollingMin();
    wStackPushNumber( (wNumber)returns);
}

// int GetProductId() const
void wxJoystick_GetProductId() {
    int returns = ((wxJoystick *)(wTheCall->self->ptr))->GetProductId();
    wStackPushNumber( (wNumber)returns);
}

// wxString GetProductName() const
void wxJoystick_GetProductName() {
    wxString returns = ((wxJoystick *)(wTheCall->self->ptr))->GetProductName();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxPoint GetPosition() const
void wxJoystick_GetPosition() {
    // make a pointer via copy constructor
    wxPoint *returns = new wxPoint(((wxJoystick *)(wTheCall->self->ptr))->GetPosition());
    wWrapPushObject( _wxPoint, W_TRUE, (void *)returns );
}

// int GetPOVPosition() const
void wxJoystick_GetPOVPosition() {
    int returns = ((wxJoystick *)(wTheCall->self->ptr))->GetPOVPosition();
    wStackPushNumber( (wNumber)returns);
}

// int GetPOVCTSPosition() const
void wxJoystick_GetPOVCTSPosition() {
    int returns = ((wxJoystick *)(wTheCall->self->ptr))->GetPOVCTSPosition();
    wStackPushNumber( (wNumber)returns);
}

// int GetRudderMax() const
void wxJoystick_GetRudderMax() {
    int returns = ((wxJoystick *)(wTheCall->self->ptr))->GetRudderMax();
    wStackPushNumber( (wNumber)returns);
}

// int GetRudderMin() const
void wxJoystick_GetRudderMin() {
    int returns = ((wxJoystick *)(wTheCall->self->ptr))->GetRudderMin();
    wStackPushNumber( (wNumber)returns);
}

// int GetRudderPosition() const
void wxJoystick_GetRudderPosition() {
    int returns = ((wxJoystick *)(wTheCall->self->ptr))->GetRudderPosition();
    wStackPushNumber( (wNumber)returns);
}

// int GetUMax() const
void wxJoystick_GetUMax() {
    int returns = ((wxJoystick *)(wTheCall->self->ptr))->GetUMax();
    wStackPushNumber( (wNumber)returns);
}

// int GetUMin() const
void wxJoystick_GetUMin() {
    int returns = ((wxJoystick *)(wTheCall->self->ptr))->GetUMin();
    wStackPushNumber( (wNumber)returns);
}

// int GetUPosition() const
void wxJoystick_GetUPosition() {
    int returns = ((wxJoystick *)(wTheCall->self->ptr))->GetUPosition();
    wStackPushNumber( (wNumber)returns);
}

// int GetVMax() const
void wxJoystick_GetVMax() {
    int returns = ((wxJoystick *)(wTheCall->self->ptr))->GetVMax();
    wStackPushNumber( (wNumber)returns);
}

// int GetVMin() const
void wxJoystick_GetVMin() {
    int returns = ((wxJoystick *)(wTheCall->self->ptr))->GetVMin();
    wStackPushNumber( (wNumber)returns);
}

// int GetVPosition() const
void wxJoystick_GetVPosition() {
    int returns = ((wxJoystick *)(wTheCall->self->ptr))->GetVPosition();
    wStackPushNumber( (wNumber)returns);
}

// int GetXMax() const
void wxJoystick_GetXMax() {
    int returns = ((wxJoystick *)(wTheCall->self->ptr))->GetXMax();
    wStackPushNumber( (wNumber)returns);
}

// int GetXMin() const
void wxJoystick_GetXMin() {
    int returns = ((wxJoystick *)(wTheCall->self->ptr))->GetXMin();
    wStackPushNumber( (wNumber)returns);
}

// int GetYMax() const
void wxJoystick_GetYMax() {
    int returns = ((wxJoystick *)(wTheCall->self->ptr))->GetYMax();
    wStackPushNumber( (wNumber)returns);
}

// int GetYMin() const
void wxJoystick_GetYMin() {
    int returns = ((wxJoystick *)(wTheCall->self->ptr))->GetYMin();
    wStackPushNumber( (wNumber)returns);
}

// int GetZMax() const
void wxJoystick_GetZMax() {
    int returns = ((wxJoystick *)(wTheCall->self->ptr))->GetZMax();
    wStackPushNumber( (wNumber)returns);
}

// int GetZMin() const
void wxJoystick_GetZMin() {
    int returns = ((wxJoystick *)(wTheCall->self->ptr))->GetZMin();
    wStackPushNumber( (wNumber)returns);
}

// int GetZPosition() const
void wxJoystick_GetZPosition() {
    int returns = ((wxJoystick *)(wTheCall->self->ptr))->GetZPosition();
    wStackPushNumber( (wNumber)returns);
}

// bool HasPOV() const
void wxJoystick_HasPOV() {
    bool returns = ((wxJoystick *)(wTheCall->self->ptr))->HasPOV();
    wStackPushNumber( (wNumber)returns);
}

// bool HasPOV4Dir() const
void wxJoystick_HasPOV4Dir() {
    bool returns = ((wxJoystick *)(wTheCall->self->ptr))->HasPOV4Dir();
    wStackPushNumber( (wNumber)returns);
}

// bool HasPOVCTS() const
void wxJoystick_HasPOVCTS() {
    bool returns = ((wxJoystick *)(wTheCall->self->ptr))->HasPOVCTS();
    wStackPushNumber( (wNumber)returns);
}

// bool HasRudder() const
void wxJoystick_HasRudder() {
    bool returns = ((wxJoystick *)(wTheCall->self->ptr))->HasRudder();
    wStackPushNumber( (wNumber)returns);
}

// bool HasU() const
void wxJoystick_HasU() {
    bool returns = ((wxJoystick *)(wTheCall->self->ptr))->HasU();
    wStackPushNumber( (wNumber)returns);
}

// bool HasV() const
void wxJoystick_HasV() {
    bool returns = ((wxJoystick *)(wTheCall->self->ptr))->HasV();
    wStackPushNumber( (wNumber)returns);
}

// bool HasZ() const
void wxJoystick_HasZ() {
    bool returns = ((wxJoystick *)(wTheCall->self->ptr))->HasZ();
    wStackPushNumber( (wNumber)returns);
}

// bool IsOk() const
void wxJoystick_IsOk() {
    bool returns = ((wxJoystick *)(wTheCall->self->ptr))->IsOk();
    wStackPushNumber( (wNumber)returns);
}

// bool ReleaseCapture()
void wxJoystick_ReleaseCapture() {
    bool returns = ((wxJoystick *)(wTheCall->self->ptr))->ReleaseCapture();
    wStackPushNumber( (wNumber)returns);
}

// bool SetCapture(wxWindow* win, int pollingFreq = 0)
void wxJoystick_SetCapture() {
    int pollingFreq = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : 0);
    wxWindow *win = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxJoystick *)(wTheCall->self->ptr))->SetCapture(win, pollingFreq);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void SetMovementThreshold(int threshold)
void wxJoystick_SetMovementThreshold() {
    int threshold = (int)wStackPopNumber();
    ((wxJoystick *)(wTheCall->self->ptr))->SetMovementThreshold(threshold);
    wWrapDerefArgs();
}

void wxJoystickEvent_del()
{
    delete (wxJoystickEvent *)(wTheCall->self->ptr);
}


// wxJoystickEvent(WXTYPE eventType = 0, int state = 0, int joystick = wxJOYSTICK1, int change = 0)
void wxJoystickEvent_new() {
    int change = (wTheCall->parmCount > 3 ? (int)wStackPopNumber() : 0);
    int joystick = (wTheCall->parmCount > 2 ? (int)wStackPopNumber() : wxJOYSTICK1);
    int state = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : 0);
    WXTYPE eventType = (wTheCall->parmCount > 0 ? (WXTYPE)wStackPopNumber() : 0);
    wxJoystickEvent *returns = new wxJoystickEvent(eventType, state, joystick, change);
    wWrapDerefArgs();
    wWrapSetThis( _wxJoystickEvent, (void *)returns );
}

// bool ButtonDown(int button = wxJOY_BUTTON_ANY) const
void wxJoystickEvent_ButtonDown() {
    int button = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : wxJOY_BUTTON_ANY);
    bool returns = ((wxJoystickEvent *)(wTheCall->self->ptr))->ButtonDown(button);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool ButtonIsDown(int button = wxJOY_BUTTON_ANY) const
void wxJoystickEvent_ButtonIsDown() {
    int button = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : wxJOY_BUTTON_ANY);
    bool returns = ((wxJoystickEvent *)(wTheCall->self->ptr))->ButtonIsDown(button);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool ButtonUp(int button = wxJOY_BUTTON_ANY) const
void wxJoystickEvent_ButtonUp() {
    int button = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : wxJOY_BUTTON_ANY);
    bool returns = ((wxJoystickEvent *)(wTheCall->self->ptr))->ButtonUp(button);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int GetButtonChange() const
void wxJoystickEvent_GetButtonChange() {
    int returns = ((wxJoystickEvent *)(wTheCall->self->ptr))->GetButtonChange();
    wStackPushNumber( (wNumber)returns);
}

// int GetButtonState() const
void wxJoystickEvent_GetButtonState() {
    int returns = ((wxJoystickEvent *)(wTheCall->self->ptr))->GetButtonState();
    wStackPushNumber( (wNumber)returns);
}

// int GetJoystick() const
void wxJoystickEvent_GetJoystick() {
    int returns = ((wxJoystickEvent *)(wTheCall->self->ptr))->GetJoystick();
    wStackPushNumber( (wNumber)returns);
}

// wxPoint GetPosition() const
void wxJoystickEvent_GetPosition() {
    // make a pointer via copy constructor
    wxPoint *returns = new wxPoint(((wxJoystickEvent *)(wTheCall->self->ptr))->GetPosition());
    wWrapPushObject( _wxPoint, W_TRUE, (void *)returns );
}

// int GetZPosition() const
void wxJoystickEvent_GetZPosition() {
    int returns = ((wxJoystickEvent *)(wTheCall->self->ptr))->GetZPosition();
    wStackPushNumber( (wNumber)returns);
}

// bool IsButton() const
void wxJoystickEvent_IsButton() {
    bool returns = ((wxJoystickEvent *)(wTheCall->self->ptr))->IsButton();
    wStackPushNumber( (wNumber)returns);
}

// bool IsMove() const
void wxJoystickEvent_IsMove() {
    bool returns = ((wxJoystickEvent *)(wTheCall->self->ptr))->IsMove();
    wStackPushNumber( (wNumber)returns);
}

// bool IsZMove() const
void wxJoystickEvent_IsZMove() {
    bool returns = ((wxJoystickEvent *)(wTheCall->self->ptr))->IsZMove();
    wStackPushNumber( (wNumber)returns);
}

void wxListEvent_del()
{
    delete (wxListEvent *)(wTheCall->self->ptr);
}


// wxListEvent(WXTYPE commandType = 0, int id = 0)
void wxListEvent_new() {
    int id = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : 0);
    WXTYPE commandType = (wTheCall->parmCount > 0 ? (WXTYPE)wStackPopNumber() : 0);
    wxListEvent *returns = new wxListEvent(commandType, id);
    wWrapDerefArgs();
    wWrapSetThis( _wxListEvent, (void *)returns );
}

// int GetCode() const
void wxListEvent_GetCode() {
    int returns = ((wxListEvent *)(wTheCall->self->ptr))->GetCode();
    wStackPushNumber( (wNumber)returns);
}

// long GetIndex() const
void wxListEvent_GetIndex() {
    long returns = ((wxListEvent *)(wTheCall->self->ptr))->GetIndex();
    wStackPushNumber( (wNumber)returns);
}

// int GetColumn() const
void wxListEvent_GetColumn() {
    int returns = ((wxListEvent *)(wTheCall->self->ptr))->GetColumn();
    wStackPushNumber( (wNumber)returns);
}

// wxPoint GetPoint() const
void wxListEvent_GetPoint() {
    // make a pointer via copy constructor
    wxPoint *returns = new wxPoint(((wxListEvent *)(wTheCall->self->ptr))->GetPoint());
    wWrapPushObject( _wxPoint, W_TRUE, (void *)returns );
}

// const wxString& GetLabel() const
void wxListEvent_GetLabel() {
    const wxString *returns = &((wxListEvent *)(wTheCall->self->ptr))->GetLabel();
    wStackPushChar( (char *)(returns->c_str()), W_TRUE );
}

// const wxString& GetText() const
void wxListEvent_GetText() {
    const wxString *returns = &((wxListEvent *)(wTheCall->self->ptr))->GetText();
    wStackPushChar( (char *)(returns->c_str()), W_TRUE );
}

// int GetImage() const
void wxListEvent_GetImage() {
    int returns = ((wxListEvent *)(wTheCall->self->ptr))->GetImage();
    wStackPushNumber( (wNumber)returns);
}

// long GetData() const
void wxListEvent_GetData() {
    long returns = ((wxListEvent *)(wTheCall->self->ptr))->GetData();
    wStackPushNumber( (wNumber)returns);
}

// long GetMask() const
void wxListEvent_GetMask() {
    long returns = ((wxListEvent *)(wTheCall->self->ptr))->GetMask();
    wStackPushNumber( (wNumber)returns);
}

// const wxListItem& GetItem() const
void wxListEvent_GetItem() {
    const wxListItem *returns = &((wxListEvent *)(wTheCall->self->ptr))->GetItem();
    wWrapPushObject( _wxListItem, W_TRUE, (void *)returns );
}

void wxMenuEvent_del()
{
    delete (wxMenuEvent *)(wTheCall->self->ptr);
}


// wxMenuEvent(wxEventType type = wxEVT_NULL, int id = 0)
void wxMenuEvent_new() {
    int id = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : 0);
    wxEventType type = (wTheCall->parmCount > 0 ? (wxEventType)wStackPopNumber() : wxEVT_NULL);
    wxMenuEvent *returns = new wxMenuEvent(type, id);
    wWrapDerefArgs();
    wWrapSetThis( _wxMenuEvent, (void *)returns );
}

// int GetMenuId() const
void wxMenuEvent_GetMenuId() {
    int returns = ((wxMenuEvent *)(wTheCall->self->ptr))->GetMenuId();
    wStackPushNumber( (wNumber)returns);
}

void wxMouseEvent_del()
{
    delete (wxMouseEvent *)(wTheCall->self->ptr);
}


// bool AltDown()
void wxMouseEvent_AltDown() {
    bool returns = ((wxMouseEvent *)(wTheCall->self->ptr))->AltDown();
    wStackPushNumber( (wNumber)returns);
}

// bool Button(int button)
void wxMouseEvent_Button() {
    int button = (int)wStackPopNumber();
    bool returns = ((wxMouseEvent *)(wTheCall->self->ptr))->Button(button);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool ButtonDClick(int but = -1)
void wxMouseEvent_ButtonDClick() {
    int but = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : -1);
    bool returns = ((wxMouseEvent *)(wTheCall->self->ptr))->ButtonDClick(but);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool ButtonDown(int but = -1)
void wxMouseEvent_ButtonDown() {
    int but = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : -1);
    bool returns = ((wxMouseEvent *)(wTheCall->self->ptr))->ButtonDown(but);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool ButtonUp(int but = -1)
void wxMouseEvent_ButtonUp() {
    int but = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : -1);
    bool returns = ((wxMouseEvent *)(wTheCall->self->ptr))->ButtonUp(but);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool ControlDown()
void wxMouseEvent_ControlDown() {
    bool returns = ((wxMouseEvent *)(wTheCall->self->ptr))->ControlDown();
    wStackPushNumber( (wNumber)returns);
}

// bool Dragging()
void wxMouseEvent_Dragging() {
    bool returns = ((wxMouseEvent *)(wTheCall->self->ptr))->Dragging();
    wStackPushNumber( (wNumber)returns);
}

// bool Entering()
void wxMouseEvent_Entering() {
    bool returns = ((wxMouseEvent *)(wTheCall->self->ptr))->Entering();
    wStackPushNumber( (wNumber)returns);
}

// wxPoint GetPosition() const
void wxMouseEvent_GetPosition() {
    // make a pointer via copy constructor
    wxPoint *returns = new wxPoint(((wxMouseEvent *)(wTheCall->self->ptr))->GetPosition());
    wWrapPushObject( _wxPoint, W_TRUE, (void *)returns );
}

void wxMouseEvent_GetPositionXY()
{
    long x, y;
    ((wxMouseEvent *)wTheCall->self->ptr)->GetPosition(&x, &y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)x );
    wStackPushNumber( (wNumber)y );
}

void wxMouseEvent_GetPositionX()
{
    long x, y;
    ((wxMouseEvent *)wTheCall->self->ptr)->GetPosition(&x, &y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)x );
}

void wxMouseEvent_GetPositionY()
{
    long x, y;
    ((wxMouseEvent *)wTheCall->self->ptr)->GetPosition(&x, &y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)y );
}



// wxPoint GetLogicalPosition(const wxDC& dc) const
void wxMouseEvent_GetLogicalPosition() {
    wxDC *dc = (wxDC *)wStackPopObjectPtr( _wxDC);
    // make a pointer via copy constructor
    wxPoint *returns = new wxPoint(((wxMouseEvent *)(wTheCall->self->ptr))->GetLogicalPosition(*dc));
    wWrapDerefArgs();
    wWrapPushObject( _wxPoint, W_TRUE, (void *)returns );
}

// long GetX() const
void wxMouseEvent_GetX() {
    long returns = ((wxMouseEvent *)(wTheCall->self->ptr))->GetX();
    wStackPushNumber( (wNumber)returns);
}

// long GetY()
void wxMouseEvent_GetY() {
    long returns = ((wxMouseEvent *)(wTheCall->self->ptr))->GetY();
    wStackPushNumber( (wNumber)returns);
}

// bool IsButton() const
void wxMouseEvent_IsButton() {
    bool returns = ((wxMouseEvent *)(wTheCall->self->ptr))->IsButton();
    wStackPushNumber( (wNumber)returns);
}

// bool Leaving() const
void wxMouseEvent_Leaving() {
    bool returns = ((wxMouseEvent *)(wTheCall->self->ptr))->Leaving();
    wStackPushNumber( (wNumber)returns);
}

// bool LeftDClick() const
void wxMouseEvent_LeftDClick() {
    bool returns = ((wxMouseEvent *)(wTheCall->self->ptr))->LeftDClick();
    wStackPushNumber( (wNumber)returns);
}

// bool LeftDown() const
void wxMouseEvent_LeftDown() {
    bool returns = ((wxMouseEvent *)(wTheCall->self->ptr))->LeftDown();
    wStackPushNumber( (wNumber)returns);
}

// bool LeftIsDown() const
void wxMouseEvent_LeftIsDown() {
    bool returns = ((wxMouseEvent *)(wTheCall->self->ptr))->LeftIsDown();
    wStackPushNumber( (wNumber)returns);
}

// bool LeftUp() const
void wxMouseEvent_LeftUp() {
    bool returns = ((wxMouseEvent *)(wTheCall->self->ptr))->LeftUp();
    wStackPushNumber( (wNumber)returns);
}

// bool MetaDown() const
void wxMouseEvent_MetaDown() {
    bool returns = ((wxMouseEvent *)(wTheCall->self->ptr))->MetaDown();
    wStackPushNumber( (wNumber)returns);
}

// bool MiddleDClick() const
void wxMouseEvent_MiddleDClick() {
    bool returns = ((wxMouseEvent *)(wTheCall->self->ptr))->MiddleDClick();
    wStackPushNumber( (wNumber)returns);
}

// bool MiddleDown() const
void wxMouseEvent_MiddleDown() {
    bool returns = ((wxMouseEvent *)(wTheCall->self->ptr))->MiddleDown();
    wStackPushNumber( (wNumber)returns);
}

// bool MiddleIsDown() const
void wxMouseEvent_MiddleIsDown() {
    bool returns = ((wxMouseEvent *)(wTheCall->self->ptr))->MiddleIsDown();
    wStackPushNumber( (wNumber)returns);
}

// bool MiddleUp() const
void wxMouseEvent_MiddleUp() {
    bool returns = ((wxMouseEvent *)(wTheCall->self->ptr))->MiddleUp();
    wStackPushNumber( (wNumber)returns);
}

// bool Moving() const
void wxMouseEvent_Moving() {
    bool returns = ((wxMouseEvent *)(wTheCall->self->ptr))->Moving();
    wStackPushNumber( (wNumber)returns);
}

// bool RightDClick() const
void wxMouseEvent_RightDClick() {
    bool returns = ((wxMouseEvent *)(wTheCall->self->ptr))->RightDClick();
    wStackPushNumber( (wNumber)returns);
}

// bool RightDown() const
void wxMouseEvent_RightDown() {
    bool returns = ((wxMouseEvent *)(wTheCall->self->ptr))->RightDown();
    wStackPushNumber( (wNumber)returns);
}

// bool RightIsDown() const
void wxMouseEvent_RightIsDown() {
    bool returns = ((wxMouseEvent *)(wTheCall->self->ptr))->RightIsDown();
    wStackPushNumber( (wNumber)returns);
}

// bool RightUp() const
void wxMouseEvent_RightUp() {
    bool returns = ((wxMouseEvent *)(wTheCall->self->ptr))->RightUp();
    wStackPushNumber( (wNumber)returns);
}

// bool ShiftDown() const
void wxMouseEvent_ShiftDown() {
    bool returns = ((wxMouseEvent *)(wTheCall->self->ptr))->ShiftDown();
    wStackPushNumber( (wNumber)returns);
}

void wxMoveEvent_del()
{
    delete (wxMoveEvent *)(wTheCall->self->ptr);
}


// wxMoveEvent(const wxPoint& pt, int id = 0)
void wxMoveEvent_new() {
    int id = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : 0);
    wxPoint *pt = (wxPoint *)wStackPopObjectPtr( _wxPoint);
    wxMoveEvent *returns = new wxMoveEvent(*pt, id);
    wWrapDerefArgs();
    wWrapSetThis( _wxMoveEvent, (void *)returns );
}

// wxPoint GetPosition() const
void wxMoveEvent_GetPosition() {
    // make a pointer via copy constructor
    wxPoint *returns = new wxPoint(((wxMoveEvent *)(wTheCall->self->ptr))->GetPosition());
    wWrapPushObject( _wxPoint, W_TRUE, (void *)returns );
}

void wxNotebookEvent_del()
{
    delete (wxNotebookEvent *)(wTheCall->self->ptr);
}


// wxNotebookEvent(wxEventType eventType = wxEVT_NULL, int id = 0, int sel = -1, int oldSel = -1)
void wxNotebookEvent_new() {
    int oldSel = (wTheCall->parmCount > 3 ? (int)wStackPopNumber() : -1);
    int sel = (wTheCall->parmCount > 2 ? (int)wStackPopNumber() : -1);
    int id = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : 0);
    wxEventType eventType = (wTheCall->parmCount > 0 ? (wxEventType)wStackPopNumber() : wxEVT_NULL);
    wxNotebookEvent *returns = new wxNotebookEvent(eventType, id, sel, oldSel);
    wWrapDerefArgs();
    wWrapSetThis( _wxNotebookEvent, (void *)returns );
}

// int GetOldSelection() const
void wxNotebookEvent_GetOldSelection() {
    int returns = ((wxNotebookEvent *)(wTheCall->self->ptr))->GetOldSelection();
    wStackPushNumber( (wNumber)returns);
}

// int GetSelection() const
void wxNotebookEvent_GetSelection() {
    int returns = ((wxNotebookEvent *)(wTheCall->self->ptr))->GetSelection();
    wStackPushNumber( (wNumber)returns);
}

// void SetOldSelection(int page)
void wxNotebookEvent_SetOldSelection() {
    int page = (int)wStackPopNumber();
    ((wxNotebookEvent *)(wTheCall->self->ptr))->SetOldSelection(page);
    wWrapDerefArgs();
}

// void SetSelection(int page)
void wxNotebookEvent_SetSelection() {
    int page = (int)wStackPopNumber();
    ((wxNotebookEvent *)(wTheCall->self->ptr))->SetSelection(page);
    wWrapDerefArgs();
}

void wxPaintEvent_del()
{
    delete (wxPaintEvent *)(wTheCall->self->ptr);
}


// wxPaintEvent(int id = 0)
void wxPaintEvent_new() {
    int id = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : 0);
    wxPaintEvent *returns = new wxPaintEvent(id);
    wWrapDerefArgs();
    wWrapSetThis( _wxPaintEvent, (void *)returns );
}

void wxProcessEvent_del()
{
    delete (wxProcessEvent *)(wTheCall->self->ptr);
}


// wxProcessEvent(int id = 0, int pid = 0)
void wxProcessEvent_new() {
    int pid = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : 0);
    int id = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : 0);
    wxProcessEvent *returns = new wxProcessEvent(id, pid);
    wWrapDerefArgs();
    wWrapSetThis( _wxProcessEvent, (void *)returns );
}

// int GetPid() const
void wxProcessEvent_GetPid() {
    int returns = ((wxProcessEvent *)(wTheCall->self->ptr))->GetPid();
    wStackPushNumber( (wNumber)returns);
}

void wxQueryLayoutInfoEvent_del()
{
    delete (wxQueryLayoutInfoEvent *)(wTheCall->self->ptr);
}


// wxQueryLayoutInfoEvent(wxWindowID id = 0)
void wxQueryLayoutInfoEvent_new() {
    wxWindowID id = (wTheCall->parmCount > 0 ? (wxWindowID)wStackPopNumber() : 0);
    wxQueryLayoutInfoEvent *returns = new wxQueryLayoutInfoEvent(id);
    wWrapDerefArgs();
    wWrapSetThis( _wxQueryLayoutInfoEvent, (void *)returns );
}

// int GetFlags() const
void wxQueryLayoutInfoEvent_GetFlags() {
    int returns = ((wxQueryLayoutInfoEvent *)(wTheCall->self->ptr))->GetFlags();
    wStackPushNumber( (wNumber)returns);
}

// int GetOrientation()
void wxQueryLayoutInfoEvent_GetOrientation() {
    int returns = ((wxQueryLayoutInfoEvent *)(wTheCall->self->ptr))->GetOrientation();
    wStackPushNumber( (wNumber)returns);
}

// int GetRequestedLength() const
void wxQueryLayoutInfoEvent_GetRequestedLength() {
    int returns = ((wxQueryLayoutInfoEvent *)(wTheCall->self->ptr))->GetRequestedLength();
    wStackPushNumber( (wNumber)returns);
}

// wxSize GetSize() const
void wxQueryLayoutInfoEvent_GetSize() {
    // make a pointer via copy constructor
    wxSize *returns = new wxSize(((wxQueryLayoutInfoEvent *)(wTheCall->self->ptr))->GetSize());
    wWrapPushObject( _wxSize, W_TRUE, (void *)returns );
}

// void SetAlignment(wxLayoutAlignment alignment)
void wxQueryLayoutInfoEvent_SetAlignment() {
    wxLayoutAlignment alignment = (wxLayoutAlignment)(int)wStackPopNumber();
    ((wxQueryLayoutInfoEvent *)(wTheCall->self->ptr))->SetAlignment((wxLayoutAlignment)alignment);
    wWrapDerefArgs();
}

// void SetFlags(int flags)
void wxQueryLayoutInfoEvent_SetFlags() {
    int flags = (int)wStackPopNumber();
    ((wxQueryLayoutInfoEvent *)(wTheCall->self->ptr))->SetFlags(flags);
    wWrapDerefArgs();
}

// void SetOrientation(wxLayoutOrientation orientation)
void wxQueryLayoutInfoEvent_SetOrientation() {
    wxLayoutOrientation orientation = (wxLayoutOrientation)(int)wStackPopNumber();
    ((wxQueryLayoutInfoEvent *)(wTheCall->self->ptr))->SetOrientation((wxLayoutOrientation)orientation);
    wWrapDerefArgs();
}

// void SetRequestedLength(int length)
void wxQueryLayoutInfoEvent_SetRequestedLength() {
    int length = (int)wStackPopNumber();
    ((wxQueryLayoutInfoEvent *)(wTheCall->self->ptr))->SetRequestedLength(length);
    wWrapDerefArgs();
}

// void SetSize(const wxSize& size)
void wxQueryLayoutInfoEvent_SetSize() {
    wxSize *size = (wxSize *)wStackPopObjectPtr( _wxSize);
    ((wxQueryLayoutInfoEvent *)(wTheCall->self->ptr))->SetSize(*size);
    wWrapDerefArgs();
}

void wxScrollEvent_del()
{
    delete (wxScrollEvent *)(wTheCall->self->ptr);
}


// wxScrollEvent(WXTYPE commandType = 0, int id = 0, int pos = 0, int orientation = 0)
void wxScrollEvent_new() {
    int orientation = (wTheCall->parmCount > 3 ? (int)wStackPopNumber() : 0);
    int pos = (wTheCall->parmCount > 2 ? (int)wStackPopNumber() : 0);
    int id = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : 0);
    WXTYPE commandType = (wTheCall->parmCount > 0 ? (WXTYPE)wStackPopNumber() : 0);
    wxScrollEvent *returns = new wxScrollEvent(commandType, id, pos, orientation);
    wWrapDerefArgs();
    wWrapSetThis( _wxScrollEvent, (void *)returns );
}

// int GetOrientation() const
void wxScrollEvent_GetOrientation() {
    int returns = ((wxScrollEvent *)(wTheCall->self->ptr))->GetOrientation();
    wStackPushNumber( (wNumber)returns);
}

// int GetPosition() const
void wxScrollEvent_GetPosition() {
    int returns = ((wxScrollEvent *)(wTheCall->self->ptr))->GetPosition();
    wStackPushNumber( (wNumber)returns);
}

void wxScrollWinEvent_del()
{
    delete (wxScrollWinEvent *)(wTheCall->self->ptr);
}


// int GetOrientation() const
void wxScrollWinEvent_GetOrientation() {
    int returns = ((wxScrollWinEvent *)(wTheCall->self->ptr))->GetOrientation();
    wStackPushNumber( (wNumber)returns);
}

// int GetPosition() const
void wxScrollWinEvent_GetPosition() {
    int returns = ((wxScrollWinEvent *)(wTheCall->self->ptr))->GetPosition();
    wStackPushNumber( (wNumber)returns);
}

void wxSizeEvent_del()
{
    delete (wxSizeEvent *)(wTheCall->self->ptr);
}


// wxSizeEvent(const wxSize& sz, int id = 0)
void wxSizeEvent_new() {
    int id = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : 0);
    wxSize *sz = (wxSize *)wStackPopObjectPtr( _wxSize);
    wxSizeEvent *returns = new wxSizeEvent(*sz, id);
    wWrapDerefArgs();
    wWrapSetThis( _wxSizeEvent, (void *)returns );
}

// wxSize GetSize() const
void wxSizeEvent_GetSize() {
    // make a pointer via copy constructor
    wxSize *returns = new wxSize(((wxSizeEvent *)(wTheCall->self->ptr))->GetSize());
    wWrapPushObject( _wxSize, W_TRUE, (void *)returns );
}

void wxSocketEvent_del()
{
    delete (wxSocketEvent *)(wTheCall->self->ptr);
}


// wxSocketEvent(int id = 0)
void wxSocketEvent_new() {
    int id = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : 0);
    wxSocketEvent *returns = new wxSocketEvent(id);
    wWrapDerefArgs();
    wWrapSetThis( _wxSocketEvent, (void *)returns );
}

// void * GetClientData()
void wxSocketEvent_GetClientData() {
    ((wxSocketEvent *)(wTheCall->self->ptr))->GetClientData();
}

// wxSocketBase * GetSocket() const
void wxSocketEvent_GetSocket() {
    wxSocketBase *returns = ((wxSocketEvent *)(wTheCall->self->ptr))->GetSocket();
    wWrapPushObject( _wxSocketBase, W_TRUE, (void *)returns );
}

// wxSocketNotify GetSocketEvent() const
void wxSocketEvent_GetSocketEvent() {
    wxSocketNotify returns = ((wxSocketEvent *)(wTheCall->self->ptr))->GetSocketEvent();
    wStackPushNumber( (wNumber)returns);
}

void wxSpinEvent_del()
{
    delete (wxSpinEvent *)(wTheCall->self->ptr);
}


// wxSpinEvent(wxEventType commandType = wxEVT_NULL, int id = 0)
void wxSpinEvent_new() {
    int id = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : 0);
    wxEventType commandType = (wTheCall->parmCount > 0 ? (wxEventType)wStackPopNumber() : wxEVT_NULL);
    wxSpinEvent *returns = new wxSpinEvent(commandType, id);
    wWrapDerefArgs();
    wWrapSetThis( _wxSpinEvent, (void *)returns );
}

// int GetPosition() const
void wxSpinEvent_GetPosition() {
    int returns = ((wxSpinEvent *)(wTheCall->self->ptr))->GetPosition();
    wStackPushNumber( (wNumber)returns);
}

// void SetPosition(int pos)
void wxSpinEvent_SetPosition() {
    int pos = (int)wStackPopNumber();
    ((wxSpinEvent *)(wTheCall->self->ptr))->SetPosition(pos);
    wWrapDerefArgs();
}

void wxSysColourChangedEvent_del()
{
    delete (wxSysColourChangedEvent *)(wTheCall->self->ptr);
}


// wxSysColourChangedEvent()
void wxSysColourChangedEvent_new() {
    wxSysColourChangedEvent *returns = new wxSysColourChangedEvent();
    wWrapSetThis( _wxSysColourChangedEvent, (void *)returns );
}

void wxTreeEvent_del()
{
    delete (wxTreeEvent *)(wTheCall->self->ptr);
}


// wxTreeEvent(WXTYPE commandType = 0, int id = 0)
void wxTreeEvent_new() {
    int id = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : 0);
    WXTYPE commandType = (wTheCall->parmCount > 0 ? (WXTYPE)wStackPopNumber() : 0);
    wxTreeEvent *returns = new wxTreeEvent(commandType, id);
    wWrapDerefArgs();
    wWrapSetThis( _wxTreeEvent, (void *)returns );
}

// wxTreeItemId GetItem() const
void wxTreeEvent_GetItem() {
    // make a pointer via copy constructor
    wxTreeItemId *returns = new wxTreeItemId(((wxTreeEvent *)(wTheCall->self->ptr))->GetItem());
    wWrapPushObject( _wxTreeItemId, W_TRUE, (void *)returns );
}

// wxTreeItemId GetOldItem() const
void wxTreeEvent_GetOldItem() {
    // make a pointer via copy constructor
    wxTreeItemId *returns = new wxTreeItemId(((wxTreeEvent *)(wTheCall->self->ptr))->GetOldItem());
    wWrapPushObject( _wxTreeItemId, W_TRUE, (void *)returns );
}

// wxPoint GetPoint() const
void wxTreeEvent_GetPoint() {
    // make a pointer via copy constructor
    wxPoint *returns = new wxPoint(((wxTreeEvent *)(wTheCall->self->ptr))->GetPoint());
    wWrapPushObject( _wxPoint, W_TRUE, (void *)returns );
}

// int GetCode() const
void wxTreeEvent_GetCode() {
    int returns = ((wxTreeEvent *)(wTheCall->self->ptr))->GetCode();
    wStackPushNumber( (wNumber)returns);
}

// const wxString& GetLabel() const
void wxTreeEvent_GetLabel() {
    const wxString *returns = &((wxTreeEvent *)(wTheCall->self->ptr))->GetLabel();
    wStackPushChar( (char *)(returns->c_str()), W_TRUE );
}

void wxUpdateUIEvent_del()
{
    delete (wxUpdateUIEvent *)(wTheCall->self->ptr);
}


// wxUpdateUIEvent(wxWindowID commandId = 0)
void wxUpdateUIEvent_new() {
    wxWindowID commandId = (wTheCall->parmCount > 0 ? (wxWindowID)wStackPopNumber() : 0);
    wxUpdateUIEvent *returns = new wxUpdateUIEvent(commandId);
    wWrapDerefArgs();
    wWrapSetThis( _wxUpdateUIEvent, (void *)returns );
}

// void Check(bool check)
void wxUpdateUIEvent_Check() {
    bool check = (bool)wStackPopNumber();
    ((wxUpdateUIEvent *)(wTheCall->self->ptr))->Check(check);
    wWrapDerefArgs();
}

// void Enable(bool enable)
void wxUpdateUIEvent_Enable() {
    bool enable = (bool)wStackPopNumber();
    ((wxUpdateUIEvent *)(wTheCall->self->ptr))->Enable(enable);
    wWrapDerefArgs();
}

// bool GetChecked() const
void wxUpdateUIEvent_GetChecked() {
    bool returns = ((wxUpdateUIEvent *)(wTheCall->self->ptr))->GetChecked();
    wStackPushNumber( (wNumber)returns);
}

// bool GetEnabled() const
void wxUpdateUIEvent_GetEnabled() {
    bool returns = ((wxUpdateUIEvent *)(wTheCall->self->ptr))->GetEnabled();
    wStackPushNumber( (wNumber)returns);
}

// bool GetSetChecked() const
void wxUpdateUIEvent_GetSetChecked() {
    bool returns = ((wxUpdateUIEvent *)(wTheCall->self->ptr))->GetSetChecked();
    wStackPushNumber( (wNumber)returns);
}

// bool GetSetEnabled() const
void wxUpdateUIEvent_GetSetEnabled() {
    bool returns = ((wxUpdateUIEvent *)(wTheCall->self->ptr))->GetSetEnabled();
    wStackPushNumber( (wNumber)returns);
}

// bool GetSetText() const
void wxUpdateUIEvent_GetSetText() {
    bool returns = ((wxUpdateUIEvent *)(wTheCall->self->ptr))->GetSetText();
    wStackPushNumber( (wNumber)returns);
}

// wxString GetText() const
void wxUpdateUIEvent_GetText() {
    wxString returns = ((wxUpdateUIEvent *)(wTheCall->self->ptr))->GetText();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// void SetText(const wxString& text)
void wxUpdateUIEvent_SetText() {
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxUpdateUIEvent *)(wTheCall->self->ptr))->SetText(text);
    wWrapDerefArgs();
}

void wxWizardEvent_del()
{
    delete (wxWizardEvent *)(wTheCall->self->ptr);
}


// wxWizardEvent(wxEventType type = wxEVT_NULL, int id = -1, bool direction = TRUE)
void wxWizardEvent_new() {
    bool direction = (wTheCall->parmCount > 2 ? (bool)wStackPopNumber() : TRUE);
    int id = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : -1);
    wxEventType type = (wTheCall->parmCount > 0 ? (wxEventType)wStackPopNumber() : wxEVT_NULL);
    wxWizardEvent *returns = new wxWizardEvent(type, id, direction);
    wWrapDerefArgs();
    wWrapSetThis( _wxWizardEvent, (void *)returns );
}

// bool GetDirection() const
void wxWizardEvent_GetDirection() {
    bool returns = ((wxWizardEvent *)(wTheCall->self->ptr))->GetDirection();
    wStackPushNumber( (wNumber)returns);
}

void wxSplitterEvent_del()
{
    delete (wxSplitterEvent *)(wTheCall->self->ptr);
}


// wxSplitterEvent(wxEventType eventType = wxEVT_NULL, wxSplitterWindow * splitter = NULL)
void wxSplitterEvent_new() {
    wxSplitterWindow *splitter = (wTheCall->parmCount > 1 ? (wxSplitterWindow *)wStackPopObjectPtr( _wxSplitterWindow) : NULL);
    wxEventType eventType = (wTheCall->parmCount > 0 ? (wxEventType)wStackPopNumber() : wxEVT_NULL);
    wxSplitterEvent *returns = new wxSplitterEvent(eventType, splitter);
    wWrapDerefArgs();
    wWrapSetThis( _wxSplitterEvent, (void *)returns );
}

// int GetSashPosition() const
void wxSplitterEvent_GetSashPosition() {
    int returns = ((wxSplitterEvent *)(wTheCall->self->ptr))->GetSashPosition();
    wStackPushNumber( (wNumber)returns);
}

// int GetX() const
void wxSplitterEvent_GetX() {
    int returns = ((wxSplitterEvent *)(wTheCall->self->ptr))->GetX();
    wStackPushNumber( (wNumber)returns);
}

// int GetY() const
void wxSplitterEvent_GetY() {
    int returns = ((wxSplitterEvent *)(wTheCall->self->ptr))->GetY();
    wStackPushNumber( (wNumber)returns);
}

// wxWindow* GetWindowBeingRemoved() const
void wxSplitterEvent_GetWindowBeingRemoved() {
    wxWindow *returns = ((wxSplitterEvent *)(wTheCall->self->ptr))->GetWindowBeingRemoved();
    wWrapPushObject( _wxWindow, W_TRUE, (void *)returns );
}

// void SetSashPosition(int pos)
void wxSplitterEvent_SetSashPosition() {
    int pos = (int)wStackPopNumber();
    ((wxSplitterEvent *)(wTheCall->self->ptr))->SetSashPosition(pos);
    wWrapDerefArgs();
}

void wxSizer_del()
{
    delete (wxSizer *)(wTheCall->self->ptr);
}


// ~wxSizer()
void wxSizer_finalize() {
    ((wxSizer *)(wTheCall->self->ptr))->~wxSizer();
}

// %rename AddWindow void Add(wxWindow* window, int option = 0,int flag = 0, int border = 0, wxObject* userData = NULL)
void wxSizer_AddWindow() {
    wxObject *userData = (wTheCall->parmCount > 4 ? (wxObject *)wStackPopObjectPtr( _wxObject) : NULL);
    int border = (wTheCall->parmCount > 3 ? (int)wStackPopNumber() : 0);
    int flag = (wTheCall->parmCount > 2 ? (int)wStackPopNumber() : 0);
    int option = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : 0);
    wxWindow *window = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    ((wxSizer *)(wTheCall->self->ptr))->Add(window, option, flag, border, userData);
    wWrapDerefArgs();
}

// %rename AddSizer void Add(wxSizer* sizer, int option = 0, int flag = 0, int border = 0, wxObject* userData = NULL)
void wxSizer_AddSizer() {
    wxObject *userData = (wTheCall->parmCount > 4 ? (wxObject *)wStackPopObjectPtr( _wxObject) : NULL);
    int border = (wTheCall->parmCount > 3 ? (int)wStackPopNumber() : 0);
    int flag = (wTheCall->parmCount > 2 ? (int)wStackPopNumber() : 0);
    int option = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : 0);
    wxSizer *sizer = (wxSizer *)wStackPopObjectPtr( _wxSizer);
    ((wxSizer *)(wTheCall->self->ptr))->Add(sizer, option, flag, border, userData);
    wWrapDerefArgs();
}

// void Add(int width, int height, int option = 0, int flag = 0, int border = 0, wxObject* userData = NULL)
void wxSizer_Add() {
    wxObject *userData = (wTheCall->parmCount > 5 ? (wxObject *)wStackPopObjectPtr( _wxObject) : NULL);
    int border = (wTheCall->parmCount > 4 ? (int)wStackPopNumber() : 0);
    int flag = (wTheCall->parmCount > 3 ? (int)wStackPopNumber() : 0);
    int option = (wTheCall->parmCount > 2 ? (int)wStackPopNumber() : 0);
    int height = (int)wStackPopNumber();
    int width = (int)wStackPopNumber();
    ((wxSizer *)(wTheCall->self->ptr))->Add(width, height, option, flag, border, userData);
    wWrapDerefArgs();
}

// wxSize CalcMin()
void wxSizer_CalcMin() {
    // make a pointer via copy constructor
    wxSize *returns = new wxSize(((wxSizer *)(wTheCall->self->ptr))->CalcMin());
    wWrapPushObject( _wxSize, W_TRUE, (void *)returns );
}

// void Fit(wxWindow* window)
void wxSizer_Fit() {
    wxWindow *window = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    ((wxSizer *)(wTheCall->self->ptr))->Fit(window);
    wWrapDerefArgs();
}

// wxSize GetSize()
void wxSizer_GetSize() {
    // make a pointer via copy constructor
    wxSize *returns = new wxSize(((wxSizer *)(wTheCall->self->ptr))->GetSize());
    wWrapPushObject( _wxSize, W_TRUE, (void *)returns );
}

// wxPoint GetPosition()
void wxSizer_GetPosition() {
    // make a pointer via copy constructor
    wxPoint *returns = new wxPoint(((wxSizer *)(wTheCall->self->ptr))->GetPosition());
    wWrapPushObject( _wxPoint, W_TRUE, (void *)returns );
}

// wxSize GetMinSize()
void wxSizer_GetMinSize() {
    // make a pointer via copy constructor
    wxSize *returns = new wxSize(((wxSizer *)(wTheCall->self->ptr))->GetMinSize());
    wWrapPushObject( _wxSize, W_TRUE, (void *)returns );
}

// void Layout()
void wxSizer_Layout() {
    ((wxSizer *)(wTheCall->self->ptr))->Layout();
}

// %rename PrependWindow void Prepend(wxWindow* window, int option = 0, int flag = 0, int border = 0, wxObject* userData = NULL)
void wxSizer_PrependWindow() {
    wxObject *userData = (wTheCall->parmCount > 4 ? (wxObject *)wStackPopObjectPtr( _wxObject) : NULL);
    int border = (wTheCall->parmCount > 3 ? (int)wStackPopNumber() : 0);
    int flag = (wTheCall->parmCount > 2 ? (int)wStackPopNumber() : 0);
    int option = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : 0);
    wxWindow *window = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    ((wxSizer *)(wTheCall->self->ptr))->Prepend(window, option, flag, border, userData);
    wWrapDerefArgs();
}

// %rename PrependSizer void Prepend(wxSizer* sizer, int option = 0, int flag = 0, int border = 0, wxObject* userData = NULL)
void wxSizer_PrependSizer() {
    wxObject *userData = (wTheCall->parmCount > 4 ? (wxObject *)wStackPopObjectPtr( _wxObject) : NULL);
    int border = (wTheCall->parmCount > 3 ? (int)wStackPopNumber() : 0);
    int flag = (wTheCall->parmCount > 2 ? (int)wStackPopNumber() : 0);
    int option = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : 0);
    wxSizer *sizer = (wxSizer *)wStackPopObjectPtr( _wxSizer);
    ((wxSizer *)(wTheCall->self->ptr))->Prepend(sizer, option, flag, border, userData);
    wWrapDerefArgs();
}

// void Prepend(int width, int height, int option = 0, int flag = 0, int border= 0, wxObject* userData = NULL)
void wxSizer_Prepend() {
    wxObject *userData = (wTheCall->parmCount > 5 ? (wxObject *)wStackPopObjectPtr( _wxObject) : NULL);
    int border = (wTheCall->parmCount > 4 ? (int)wStackPopNumber() : 0);
    int flag = (wTheCall->parmCount > 3 ? (int)wStackPopNumber() : 0);
    int option = (wTheCall->parmCount > 2 ? (int)wStackPopNumber() : 0);
    int height = (int)wStackPopNumber();
    int width = (int)wStackPopNumber();
    ((wxSizer *)(wTheCall->self->ptr))->Prepend(width, height, option, flag, border, userData);
    wWrapDerefArgs();
}

// void RecalcSizes()
void wxSizer_RecalcSizes() {
    ((wxSizer *)(wTheCall->self->ptr))->RecalcSizes();
}

// %rename RemoveWindow bool Remove(wxWindow* window)
void wxSizer_RemoveWindow() {
    wxWindow *window = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    bool returns = ((wxSizer *)(wTheCall->self->ptr))->Remove(window);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// %rename RemoveSizer bool Remove(wxSizer* sizer)
void wxSizer_RemoveSizer() {
    wxSizer *sizer = (wxSizer *)wStackPopObjectPtr( _wxSizer);
    bool returns = ((wxSizer *)(wTheCall->self->ptr))->Remove(sizer);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool Remove(int nth)
void wxSizer_Remove() {
    int nth = (int)wStackPopNumber();
    bool returns = ((wxSizer *)(wTheCall->self->ptr))->Remove(nth);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void SetDimension(int x, int y, int width, int height)
void wxSizer_SetDimension() {
    int height = (int)wStackPopNumber();
    int width = (int)wStackPopNumber();
    int y = (int)wStackPopNumber();
    int x = (int)wStackPopNumber();
    ((wxSizer *)(wTheCall->self->ptr))->SetDimension(x, y, width, height);
    wWrapDerefArgs();
}

// void SetMinSize(int width, int height)
void wxSizer_SetMinSize() {
    int height = (int)wStackPopNumber();
    int width = (int)wStackPopNumber();
    ((wxSizer *)(wTheCall->self->ptr))->SetMinSize(width, height);
    wWrapDerefArgs();
}

// %rename SetWindowMinSize void SetItemMinSize(wxWindow* window, int width, int height)
void wxSizer_SetWindowMinSize() {
    int height = (int)wStackPopNumber();
    int width = (int)wStackPopNumber();
    wxWindow *window = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    ((wxSizer *)(wTheCall->self->ptr))->SetItemMinSize(window, width, height);
    wWrapDerefArgs();
}

// %rename SetSizerMinSize void SetItemMinSize(wxSizer* sizer, int width, int height)
void wxSizer_SetSizerMinSize() {
    int height = (int)wStackPopNumber();
    int width = (int)wStackPopNumber();
    wxSizer *sizer = (wxSizer *)wStackPopObjectPtr( _wxSizer);
    ((wxSizer *)(wTheCall->self->ptr))->SetItemMinSize(sizer, width, height);
    wWrapDerefArgs();
}

// void SetItemMinSize(int pos, int width, int height)
void wxSizer_SetItemMinSize() {
    int height = (int)wStackPopNumber();
    int width = (int)wStackPopNumber();
    int pos = (int)wStackPopNumber();
    ((wxSizer *)(wTheCall->self->ptr))->SetItemMinSize(pos, width, height);
    wWrapDerefArgs();
}

// void SetSizeHints(wxWindow* window)
void wxSizer_SetSizeHints() {
    wxWindow *window = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    ((wxSizer *)(wTheCall->self->ptr))->SetSizeHints(window);
    wWrapDerefArgs();
}

void wxGridSizer_del()
{
    delete (wxGridSizer *)(wTheCall->self->ptr);
}


// wxGridSizer(int cols, int rows, int vgap, int hgap)
void wxGridSizer_new() {
    int hgap = (int)wStackPopNumber();
    int vgap = (int)wStackPopNumber();
    int rows = (int)wStackPopNumber();
    int cols = (int)wStackPopNumber();
    wxGridSizer *returns = new wxGridSizer(cols, rows, vgap, hgap);
    wWrapDerefArgs();
    wWrapSetThis( _wxGridSizer, (void *)returns );
}

void wxFlexGridSizer_del()
{
    delete (wxFlexGridSizer *)(wTheCall->self->ptr);
}


// wxFlexGridSizer(int rows, int cols, int vgap, int hgap)
void wxFlexGridSizer_new() {
    int hgap = (int)wStackPopNumber();
    int vgap = (int)wStackPopNumber();
    int cols = (int)wStackPopNumber();
    int rows = (int)wStackPopNumber();
    wxFlexGridSizer *returns = new wxFlexGridSizer(rows, cols, vgap, hgap);
    wWrapDerefArgs();
    wWrapSetThis( _wxFlexGridSizer, (void *)returns );
}

void wxBoxSizer_del()
{
    delete (wxBoxSizer *)(wTheCall->self->ptr);
}


// wxBoxSizer(int orient)
void wxBoxSizer_new() {
    int orient = (int)wStackPopNumber();
    wxBoxSizer *returns = new wxBoxSizer(orient);
    wWrapDerefArgs();
    wWrapSetThis( _wxBoxSizer, (void *)returns );
}

// void RecalcSizes()
void wxBoxSizer_RecalcSizes() {
    ((wxBoxSizer *)(wTheCall->self->ptr))->RecalcSizes();
}

// wxSize CalcMin()
void wxBoxSizer_CalcMin() {
    // make a pointer via copy constructor
    wxSize *returns = new wxSize(((wxBoxSizer *)(wTheCall->self->ptr))->CalcMin());
    wWrapPushObject( _wxSize, W_TRUE, (void *)returns );
}

// int GetOrientation()
void wxBoxSizer_GetOrientation() {
    int returns = ((wxBoxSizer *)(wTheCall->self->ptr))->GetOrientation();
    wStackPushNumber( (wNumber)returns);
}

void wxStaticBoxSizer_del()
{
    delete (wxStaticBoxSizer *)(wTheCall->self->ptr);
}


// wxStaticBoxSizer(wxStaticBox* box, int orient)
void wxStaticBoxSizer_new() {
    int orient = (int)wStackPopNumber();
    wxStaticBox *box = (wxStaticBox *)wStackPopObjectPtr( _wxStaticBox);
    wxStaticBoxSizer *returns = new wxStaticBoxSizer(box, orient);
    wWrapDerefArgs();
    wWrapSetThis( _wxStaticBoxSizer, (void *)returns );
}

// wxStaticBox* GetStaticBox()
void wxStaticBoxSizer_GetStaticBox() {
    wxStaticBox *returns = ((wxStaticBoxSizer *)(wTheCall->self->ptr))->GetStaticBox();
    wWrapPushObject( _wxStaticBox, W_TRUE, (void *)returns );
}

void wxNotebookSizer_del()
{
    delete (wxNotebookSizer *)(wTheCall->self->ptr);
}


// wxNotebookSizer(wxNotebook* notebook)
void wxNotebookSizer_new() {
    wxNotebook *notebook = (wxNotebook *)wStackPopObjectPtr( _wxNotebook);
    wxNotebookSizer *returns = new wxNotebookSizer(notebook);
    wWrapDerefArgs();
    wWrapSetThis( _wxNotebookSizer, (void *)returns );
}

// wxNotebook* GetNotebook()
void wxNotebookSizer_GetNotebook() {
    wxNotebook *returns = ((wxNotebookSizer *)(wTheCall->self->ptr))->GetNotebook();
    wWrapPushObject( _wxNotebook, W_TRUE, (void *)returns );
}

void wxIndividualLayoutConstraint_del()
{
    delete (wxIndividualLayoutConstraint *)(wTheCall->self->ptr);
}


// wxIndividualLayoutConstraint()
void wxIndividualLayoutConstraint_new() {
    wxIndividualLayoutConstraint *returns = new wxIndividualLayoutConstraint();
    wWrapSetThis( _wxIndividualLayoutConstraint, (void *)returns );
}

// void Absolute(int value)
void wxIndividualLayoutConstraint_Absolute() {
    int value = (int)wStackPopNumber();
    ((wxIndividualLayoutConstraint *)(wTheCall->self->ptr))->Absolute(value);
    wWrapDerefArgs();
}

// void AsIs()
void wxIndividualLayoutConstraint_AsIs() {
    ((wxIndividualLayoutConstraint *)(wTheCall->self->ptr))->AsIs();
}

// void Unconstrained()
void wxIndividualLayoutConstraint_Unconstrained() {
    ((wxIndividualLayoutConstraint *)(wTheCall->self->ptr))->Unconstrained();
}

// void LeftOf(wxWindow *otherWin, int margin = 0)
void wxIndividualLayoutConstraint_LeftOf() {
    int margin = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : 0);
    wxWindow *otherWin = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    ((wxIndividualLayoutConstraint *)(wTheCall->self->ptr))->LeftOf(otherWin, margin);
    wWrapDerefArgs();
}

// void PercentOf(wxWindow *otherWin, wxEdge edge, int per)
void wxIndividualLayoutConstraint_PercentOf() {
    int per = (int)wStackPopNumber();
    wxEdge edge = (wxEdge)(int)wStackPopNumber();
    wxWindow *otherWin = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    ((wxIndividualLayoutConstraint *)(wTheCall->self->ptr))->PercentOf(otherWin, (wxEdge)edge, per);
    wWrapDerefArgs();
}

// void RightOf(wxWindow *otherWin, int margin = 0)
void wxIndividualLayoutConstraint_RightOf() {
    int margin = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : 0);
    wxWindow *otherWin = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    ((wxIndividualLayoutConstraint *)(wTheCall->self->ptr))->RightOf(otherWin, margin);
    wWrapDerefArgs();
}

// void SameAs(wxWindow *otherWin, wxEdge edge, int margin = 0)
void wxIndividualLayoutConstraint_SameAs() {
    int margin = (wTheCall->parmCount > 2 ? (int)wStackPopNumber() : 0);
    wxEdge edge = (wxEdge)(int)wStackPopNumber();
    wxWindow *otherWin = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    ((wxIndividualLayoutConstraint *)(wTheCall->self->ptr))->SameAs(otherWin, (wxEdge)edge, margin);
    wWrapDerefArgs();
}

// void Set(wxRelationship rel, wxWindow *otherWin, wxEdge otherEdge, int value = 0, int margin = 0)
void wxIndividualLayoutConstraint_Set() {
    int margin = (wTheCall->parmCount > 4 ? (int)wStackPopNumber() : 0);
    int value = (wTheCall->parmCount > 3 ? (int)wStackPopNumber() : 0);
    wxEdge otherEdge = (wxEdge)(int)wStackPopNumber();
    wxWindow *otherWin = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxRelationship rel = (wxRelationship)(int)wStackPopNumber();
    ((wxIndividualLayoutConstraint *)(wTheCall->self->ptr))->Set((wxRelationship)rel, otherWin, (wxEdge)otherEdge, value, margin);
    wWrapDerefArgs();
}

void wxLayoutConstraints_del()
{
    delete (wxLayoutConstraints *)(wTheCall->self->ptr);
}


// wxLayoutConstraints()
void wxLayoutConstraints_new() {
    wxLayoutConstraints *returns = new wxLayoutConstraints();
    wWrapSetThis( _wxLayoutConstraints, (void *)returns );
}

void wxFont_del()
{
    delete (wxFont *)(wTheCall->self->ptr);
}


// wxFont(int pointSize, int family, int style, int weight, const bool underline = FALSE, const wxString& faceName = "", wxFontEncoding encoding = wxFONTENCODING_DEFAULT)
void wxFont_new() {
    wxFontEncoding encoding = (wTheCall->parmCount > 6 ? (wxFontEncoding)(int)wStackPopNumber() : wxFONTENCODING_DEFAULT);
    wxString faceName = wxString((wTheCall->parmCount > 5 ? wStackPopChar() : ""), *wxConvCurrent);
    const bool underline = (wTheCall->parmCount > 4 ? (bool)wStackPopNumber() : FALSE);
    int weight = (int)wStackPopNumber();
    int style = (int)wStackPopNumber();
    int family = (int)wStackPopNumber();
    int pointSize = (int)wStackPopNumber();
    wxFont *returns = new wxFont(pointSize, family, style, weight, underline, faceName, (wxFontEncoding)encoding);
    wWrapDerefArgs();
    wWrapSetThis( _wxFont, (void *)returns );
}

// ~wxFont()
void wxFont_finalize() {
    ((wxFont *)(wTheCall->self->ptr))->~wxFont();
}

// static wxFontEncoding GetDefaultEncoding()
void wxFont_GetDefaultEncoding() {
    wxFontEncoding returns = ((wxFont *)(wTheCall->self->ptr))->GetDefaultEncoding();
    wStackPushNumber( (wNumber)returns);
}

// wxString GetFaceName() const
void wxFont_GetFaceName() {
    wxString returns = ((wxFont *)(wTheCall->self->ptr))->GetFaceName();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// int GetFamily() const
void wxFont_GetFamily() {
    int returns = ((wxFont *)(wTheCall->self->ptr))->GetFamily();
    wStackPushNumber( (wNumber)returns);
}

// int GetPointSize() const
void wxFont_GetPointSize() {
    int returns = ((wxFont *)(wTheCall->self->ptr))->GetPointSize();
    wStackPushNumber( (wNumber)returns);
}

// int GetStyle() const
void wxFont_GetStyle() {
    int returns = ((wxFont *)(wTheCall->self->ptr))->GetStyle();
    wStackPushNumber( (wNumber)returns);
}

// bool GetUnderlined() const
void wxFont_GetUnderlined() {
    bool returns = ((wxFont *)(wTheCall->self->ptr))->GetUnderlined();
    wStackPushNumber( (wNumber)returns);
}

// int GetWeight() const
void wxFont_GetWeight() {
    int returns = ((wxFont *)(wTheCall->self->ptr))->GetWeight();
    wStackPushNumber( (wNumber)returns);
}

// static void SetDefaultEncoding(wxFontEncoding encoding)
void wxFont_SetDefaultEncoding() {
    wxFontEncoding encoding = (wxFontEncoding)(int)wStackPopNumber();
    ((wxFont *)(wTheCall->self->ptr))->SetDefaultEncoding((wxFontEncoding)encoding);
    wWrapDerefArgs();
}

// void SetFaceName(const wxString& faceName)
void wxFont_SetFaceName() {
    wxString faceName = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxFont *)(wTheCall->self->ptr))->SetFaceName(faceName);
    wWrapDerefArgs();
}

// void SetFamily(int family)
void wxFont_SetFamily() {
    int family = (int)wStackPopNumber();
    ((wxFont *)(wTheCall->self->ptr))->SetFamily(family);
    wWrapDerefArgs();
}

// void SetPointSize(int pointSize)
void wxFont_SetPointSize() {
    int pointSize = (int)wStackPopNumber();
    ((wxFont *)(wTheCall->self->ptr))->SetPointSize(pointSize);
    wWrapDerefArgs();
}

// void SetStyle(int style)
void wxFont_SetStyle() {
    int style = (int)wStackPopNumber();
    ((wxFont *)(wTheCall->self->ptr))->SetStyle(style);
    wWrapDerefArgs();
}

// void SetUnderlined(const bool underlined)
void wxFont_SetUnderlined() {
    bool underlined = (bool)wStackPopNumber();
    ((wxFont *)(wTheCall->self->ptr))->SetUnderlined(underlined);
    wWrapDerefArgs();
}

// void SetWeight(int weight)
void wxFont_SetWeight() {
    int weight = (int)wStackPopNumber();
    ((wxFont *)(wTheCall->self->ptr))->SetWeight(weight);
    wWrapDerefArgs();
}

void wxTimer_del()
{
    delete (wxTimer *)(wTheCall->self->ptr);
}


// wxTimer(wxEvtHandler *owner, int id = -1)
void wxTimer_new() {
    int id = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : -1);
    wxEvtHandler *owner = (wxEvtHandler *)wStackPopObjectPtr( _wxEvtHandler);
    wxTimer *returns = new wxTimer(owner, id);
    wWrapDerefArgs();
    wWrapSetThis( _wxTimer, (void *)returns );
}

// ~wxTimer()
void wxTimer_finalize() {
    ((wxTimer *)(wTheCall->self->ptr))->~wxTimer();
}

// bool IsOneShot() const
void wxTimer_IsOneShot() {
    bool returns = ((wxTimer *)(wTheCall->self->ptr))->IsOneShot();
    wStackPushNumber( (wNumber)returns);
}

// bool IsRunning() const
void wxTimer_IsRunning() {
    bool returns = ((wxTimer *)(wTheCall->self->ptr))->IsRunning();
    wStackPushNumber( (wNumber)returns);
}

// void Notify()
void wxTimer_Notify() {
    ((wxTimer *)(wTheCall->self->ptr))->Notify();
}

// void SetOwner(wxEvtHandler *owner, int id = -1)
void wxTimer_SetOwner() {
    int id = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : -1);
    wxEvtHandler *owner = (wxEvtHandler *)wStackPopObjectPtr( _wxEvtHandler);
    ((wxTimer *)(wTheCall->self->ptr))->SetOwner(owner, id);
    wWrapDerefArgs();
}

// bool Start(int milliseconds = -1, bool oneShot=FALSE)
void wxTimer_Start() {
    bool oneShot = (wTheCall->parmCount > 1 ? (bool)wStackPopNumber() : FALSE);
    int milliseconds = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : -1);
    bool returns = ((wxTimer *)(wTheCall->self->ptr))->Start(milliseconds, oneShot);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void Stop()
void wxTimer_Stop() {
    ((wxTimer *)(wTheCall->self->ptr))->Stop();
}

void wxHtmlHelpController_del()
{
    delete (wxHtmlHelpController *)(wTheCall->self->ptr);
}


// wxHtmlHelpController(int style = wxHF_DEFAULT_STYLE)
void wxHtmlHelpController_new() {
    int style = (wTheCall->parmCount > 0 ? (int)wStackPopNumber() : wxHF_DEFAULT_STYLE);
    wxHtmlHelpController *returns = new wxHtmlHelpController(style);
    wWrapDerefArgs();
    wWrapSetThis( _wxHtmlHelpController, (void *)returns );
}

// bool AddBook(const wxString& book, bool show_wait_msg)
void wxHtmlHelpController_AddBook() {
    bool show_wait_msg = (bool)wStackPopNumber();
    wxString book = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = ((wxHtmlHelpController *)(wTheCall->self->ptr))->AddBook(book, show_wait_msg);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void Display(const wxString& x)
void wxHtmlHelpController_Display() {
    wxString x = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxHtmlHelpController *)(wTheCall->self->ptr))->Display(x);
    wWrapDerefArgs();
}

// %rename DisplayId void Display(const int id)
void wxHtmlHelpController_DisplayId() {
    int id = (int)wStackPopNumber();
    ((wxHtmlHelpController *)(wTheCall->self->ptr))->Display(id);
    wWrapDerefArgs();
}

// void DisplayContents()
void wxHtmlHelpController_DisplayContents() {
    ((wxHtmlHelpController *)(wTheCall->self->ptr))->DisplayContents();
}

// void DisplayIndex()
void wxHtmlHelpController_DisplayIndex() {
    ((wxHtmlHelpController *)(wTheCall->self->ptr))->DisplayIndex();
}

// bool KeywordSearch(const wxString& keyword)
void wxHtmlHelpController_KeywordSearch() {
    wxString keyword = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = ((wxHtmlHelpController *)(wTheCall->self->ptr))->KeywordSearch(keyword);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void ReadCustomization(wxConfigBase* cfg, wxString path = wxEmptyString)
void wxHtmlHelpController_ReadCustomization() {
    wxString path = wxString((wTheCall->parmCount > 1 ? wStackPopChar() : wxEmptyString), *wxConvCurrent);
    wxConfigBase *cfg = (wxConfigBase *)wStackPopObjectPtr( _wxConfigBase);
    ((wxHtmlHelpController *)(wTheCall->self->ptr))->ReadCustomization(cfg, path);
    wWrapDerefArgs();
}

// void SetTempDir(const wxString& path)
void wxHtmlHelpController_SetTempDir() {
    wxString path = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxHtmlHelpController *)(wTheCall->self->ptr))->SetTempDir(path);
    wWrapDerefArgs();
}

// void SetTitleFormat(const wxString& format)
void wxHtmlHelpController_SetTitleFormat() {
    wxString format = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxHtmlHelpController *)(wTheCall->self->ptr))->SetTitleFormat(format);
    wWrapDerefArgs();
}

// void UseConfig(wxConfigBase* config, const wxString& rootpath = wxEmptyString)
void wxHtmlHelpController_UseConfig() {
    wxString rootpath = wxString((wTheCall->parmCount > 1 ? wStackPopChar() : wxEmptyString), *wxConvCurrent);
    wxConfigBase *config = (wxConfigBase *)wStackPopObjectPtr( _wxConfigBase);
    ((wxHtmlHelpController *)(wTheCall->self->ptr))->UseConfig(config, rootpath);
    wWrapDerefArgs();
}

// void WriteCustomization(wxConfigBase* cfg, wxString path = wxEmptyString)
void wxHtmlHelpController_WriteCustomization() {
    wxString path = wxString((wTheCall->parmCount > 1 ? wStackPopChar() : wxEmptyString), *wxConvCurrent);
    wxConfigBase *cfg = (wxConfigBase *)wStackPopObjectPtr( _wxConfigBase);
    ((wxHtmlHelpController *)(wTheCall->self->ptr))->WriteCustomization(cfg, path);
    wWrapDerefArgs();
}

void wxStyledTextCtrl_del()
{
    delete (wxStyledTextCtrl *)(wTheCall->self->ptr);
}


// wxStyledTextCtrl(wxWindow *parent, wxWindowID id, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize, long style = 0, const wxString& name = wxSTCNameStr)
void wxStyledTextCtrl_new() {
    wxString name = wxString((wTheCall->parmCount > 5 ? wStackPopChar() : wxSTCNameStr), *wxConvCurrent);
    long style = (wTheCall->parmCount > 4 ? (long)wStackPopNumber() : 0);
    const wxSize *size = (wTheCall->parmCount > 3 ? (wxSize *)wStackPopObjectPtr( _wxSize) : &wxDefaultSize);
    const wxPoint *pos = (wTheCall->parmCount > 2 ? (wxPoint *)wStackPopObjectPtr( _wxPoint) : &wxDefaultPosition);
    wxWindowID id = (wxWindowID)wStackPopNumber();
    wxWindow *parent = (wxWindow *)wStackPopObjectPtr( _wxWindow);
    wxStyledTextCtrl *returns = new wxStyledTextCtrl(parent, id, *pos, *size, style, name);
    wWrapDerefArgs();
    wWrapSetThis( _wxStyledTextCtrl, (void *)returns );
}

// ~wxStyledTextCtrl()
void wxStyledTextCtrl_finalize() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->~wxStyledTextCtrl();
}

// long SendMsg(int msg, long wp, long lp)
void wxStyledTextCtrl_SendMsg() {
    long lp = (long)wStackPopNumber();
    long wp = (long)wStackPopNumber();
    int msg = (int)wStackPopNumber();
    long returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SendMsg(msg, wp, lp);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void AddText(const wxString& text)
void wxStyledTextCtrl_AddText() {
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->AddText(text);
    wWrapDerefArgs();
}

// void AddStyledText(const wxMemoryBuffer& data)
void wxStyledTextCtrl_AddStyledText() {
    wxMemoryBuffer *data = (wxMemoryBuffer *)wStackPopObjectPtr( _wxMemoryBuffer);
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->AddStyledText(*data);
    wWrapDerefArgs();
}

// void InsertText(int pos, const wxString& text)
void wxStyledTextCtrl_InsertText() {
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    int pos = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->InsertText(pos, text);
    wWrapDerefArgs();
}

// void ClearAll()
void wxStyledTextCtrl_ClearAll() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->ClearAll();
}

// void ClearDocumentStyle()
void wxStyledTextCtrl_ClearDocumentStyle() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->ClearDocumentStyle();
}

// int GetLength()
void wxStyledTextCtrl_GetLength() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetLength();
    wStackPushNumber( (wNumber)returns);
}

// int GetCharAt(int pos)
void wxStyledTextCtrl_GetCharAt() {
    int pos = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetCharAt(pos);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int GetCurrentPos()
void wxStyledTextCtrl_GetCurrentPos() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetCurrentPos();
    wStackPushNumber( (wNumber)returns);
}

// int GetAnchor()
void wxStyledTextCtrl_GetAnchor() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetAnchor();
    wStackPushNumber( (wNumber)returns);
}

// int GetStyleAt(int pos)
void wxStyledTextCtrl_GetStyleAt() {
    int pos = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetStyleAt(pos);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void Redo()
void wxStyledTextCtrl_Redo() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->Redo();
}

// void SetUndoCollection(bool collectUndo)
void wxStyledTextCtrl_SetUndoCollection() {
    bool collectUndo = (bool)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetUndoCollection(collectUndo);
    wWrapDerefArgs();
}

// void SelectAll()
void wxStyledTextCtrl_SelectAll() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SelectAll();
}

// void SetSavePoint()
void wxStyledTextCtrl_SetSavePoint() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetSavePoint();
}

// wxMemoryBuffer GetStyledText(int startPos, int endPos)
void wxStyledTextCtrl_GetStyledText() {
    int endPos = (int)wStackPopNumber();
    int startPos = (int)wStackPopNumber();
    // make a pointer via copy constructor
    wxMemoryBuffer *returns = new wxMemoryBuffer(((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetStyledText(startPos, endPos));
    wWrapDerefArgs();
    wWrapPushObject( _wxMemoryBuffer, W_TRUE, (void *)returns );
}

// bool CanRedo()
void wxStyledTextCtrl_CanRedo() {
    bool returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->CanRedo();
    wStackPushNumber( (wNumber)returns);
}

// int MarkerLineFromHandle(int handle)
void wxStyledTextCtrl_MarkerLineFromHandle() {
    int handle = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->MarkerLineFromHandle(handle);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void MarkerDeleteHandle(int handle)
void wxStyledTextCtrl_MarkerDeleteHandle() {
    int handle = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->MarkerDeleteHandle(handle);
    wWrapDerefArgs();
}

// bool GetUndoCollection()
void wxStyledTextCtrl_GetUndoCollection() {
    bool returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetUndoCollection();
    wStackPushNumber( (wNumber)returns);
}

// int GetViewWhiteSpace()
void wxStyledTextCtrl_GetViewWhiteSpace() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetViewWhiteSpace();
    wStackPushNumber( (wNumber)returns);
}

// void SetViewWhiteSpace(int viewWS)
void wxStyledTextCtrl_SetViewWhiteSpace() {
    int viewWS = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetViewWhiteSpace(viewWS);
    wWrapDerefArgs();
}

// int PositionFromPointClose(int x, int y)
void wxStyledTextCtrl_PositionFromPointClose() {
    int y = (int)wStackPopNumber();
    int x = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->PositionFromPointClose(x, y);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void GotoLine(int line)
void wxStyledTextCtrl_GotoLine() {
    int line = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GotoLine(line);
    wWrapDerefArgs();
}

// void GotoPos(int pos)
void wxStyledTextCtrl_GotoPos() {
    int pos = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GotoPos(pos);
    wWrapDerefArgs();
}

// void SetAnchor(int posAnchor)
void wxStyledTextCtrl_SetAnchor() {
    int posAnchor = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetAnchor(posAnchor);
    wWrapDerefArgs();
}

// wxString GetCurLine(int* linePos)
void wxStyledTextCtrl_GetCurLine() {
    int *linePos = (int *)wStackPopObjectPtr( NULL );
    wxString returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetCurLine(linePos);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// int GetEndStyled()
void wxStyledTextCtrl_GetEndStyled() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetEndStyled();
    wStackPushNumber( (wNumber)returns);
}

// void ConvertEOLs(int eolMode)
void wxStyledTextCtrl_ConvertEOLs() {
    int eolMode = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->ConvertEOLs(eolMode);
    wWrapDerefArgs();
}

// int GetEOLMode()
void wxStyledTextCtrl_GetEOLMode() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetEOLMode();
    wStackPushNumber( (wNumber)returns);
}

// void SetEOLMode(int eolMode)
void wxStyledTextCtrl_SetEOLMode() {
    int eolMode = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetEOLMode(eolMode);
    wWrapDerefArgs();
}

// void StartStyling(int pos, int mask)
void wxStyledTextCtrl_StartStyling() {
    int mask = (int)wStackPopNumber();
    int pos = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->StartStyling(pos, mask);
    wWrapDerefArgs();
}

// void SetStyling(int length, int style)
void wxStyledTextCtrl_SetStyling() {
    int style = (int)wStackPopNumber();
    int length = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetStyling(length, style);
    wWrapDerefArgs();
}

// bool GetBufferedDraw()
void wxStyledTextCtrl_GetBufferedDraw() {
    bool returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetBufferedDraw();
    wStackPushNumber( (wNumber)returns);
}

// void SetBufferedDraw(bool buffered)
void wxStyledTextCtrl_SetBufferedDraw() {
    bool buffered = (bool)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetBufferedDraw(buffered);
    wWrapDerefArgs();
}

// void SetTabWidth(int tabWidth)
void wxStyledTextCtrl_SetTabWidth() {
    int tabWidth = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetTabWidth(tabWidth);
    wWrapDerefArgs();
}

// int GetTabWidth()
void wxStyledTextCtrl_GetTabWidth() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetTabWidth();
    wStackPushNumber( (wNumber)returns);
}

// void SetCodePage(int codePage)
void wxStyledTextCtrl_SetCodePage() {
    int codePage = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetCodePage(codePage);
    wWrapDerefArgs();
}

// void MarkerDefine(int markerNumber, int markerSymbol, const wxColour& foreground, const wxColour& background)
void wxStyledTextCtrl_MarkerDefine() {
    wxColour *background = (wxColour *)wStackPopObjectPtr( _wxColour);
    wxColour *foreground = (wxColour *)wStackPopObjectPtr( _wxColour);
    int markerSymbol = (int)wStackPopNumber();
    int markerNumber = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->MarkerDefine(markerNumber, markerSymbol, *foreground, *background);
    wWrapDerefArgs();
}

// void MarkerSetForeground(int markerNumber, const wxColour& fore)
void wxStyledTextCtrl_MarkerSetForeground() {
    wxColour *fore = (wxColour *)wStackPopObjectPtr( _wxColour);
    int markerNumber = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->MarkerSetForeground(markerNumber, *fore);
    wWrapDerefArgs();
}

// void MarkerSetBackground(int markerNumber, const wxColour& back)
void wxStyledTextCtrl_MarkerSetBackground() {
    wxColour *back = (wxColour *)wStackPopObjectPtr( _wxColour);
    int markerNumber = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->MarkerSetBackground(markerNumber, *back);
    wWrapDerefArgs();
}

// int MarkerAdd(int line, int markerNumber)
void wxStyledTextCtrl_MarkerAdd() {
    int markerNumber = (int)wStackPopNumber();
    int line = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->MarkerAdd(line, markerNumber);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void MarkerDelete(int line, int markerNumber)
void wxStyledTextCtrl_MarkerDelete() {
    int markerNumber = (int)wStackPopNumber();
    int line = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->MarkerDelete(line, markerNumber);
    wWrapDerefArgs();
}

// void MarkerDeleteAll(int markerNumber)
void wxStyledTextCtrl_MarkerDeleteAll() {
    int markerNumber = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->MarkerDeleteAll(markerNumber);
    wWrapDerefArgs();
}

// int MarkerGet(int line)
void wxStyledTextCtrl_MarkerGet() {
    int line = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->MarkerGet(line);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int MarkerNext(int lineStart, int markerMask)
void wxStyledTextCtrl_MarkerNext() {
    int markerMask = (int)wStackPopNumber();
    int lineStart = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->MarkerNext(lineStart, markerMask);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int MarkerPrevious(int lineStart, int markerMask)
void wxStyledTextCtrl_MarkerPrevious() {
    int markerMask = (int)wStackPopNumber();
    int lineStart = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->MarkerPrevious(lineStart, markerMask);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void MarkerDefineBitmap(int markerNumber, const wxBitmap& bmp)
void wxStyledTextCtrl_MarkerDefineBitmap() {
    wxBitmap *bmp = (wxBitmap *)wStackPopObjectPtr( _wxBitmap);
    int markerNumber = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->MarkerDefineBitmap(markerNumber, *bmp);
    wWrapDerefArgs();
}

// void SetMarginType(int margin, int marginType)
void wxStyledTextCtrl_SetMarginType() {
    int marginType = (int)wStackPopNumber();
    int margin = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetMarginType(margin, marginType);
    wWrapDerefArgs();
}

// int GetMarginType(int margin)
void wxStyledTextCtrl_GetMarginType() {
    int margin = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetMarginType(margin);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void SetMarginWidth(int margin, int pixelWidth)
void wxStyledTextCtrl_SetMarginWidth() {
    int pixelWidth = (int)wStackPopNumber();
    int margin = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetMarginWidth(margin, pixelWidth);
    wWrapDerefArgs();
}

// int GetMarginWidth(int margin)
void wxStyledTextCtrl_GetMarginWidth() {
    int margin = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetMarginWidth(margin);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void SetMarginMask(int margin, int mask)
void wxStyledTextCtrl_SetMarginMask() {
    int mask = (int)wStackPopNumber();
    int margin = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetMarginMask(margin, mask);
    wWrapDerefArgs();
}

// int GetMarginMask(int margin)
void wxStyledTextCtrl_GetMarginMask() {
    int margin = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetMarginMask(margin);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void SetMarginSensitive(int margin, bool sensitive)
void wxStyledTextCtrl_SetMarginSensitive() {
    bool sensitive = (bool)wStackPopNumber();
    int margin = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetMarginSensitive(margin, sensitive);
    wWrapDerefArgs();
}

// bool GetMarginSensitive(int margin)
void wxStyledTextCtrl_GetMarginSensitive() {
    int margin = (int)wStackPopNumber();
    bool returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetMarginSensitive(margin);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void StyleClearAll()
void wxStyledTextCtrl_StyleClearAll() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->StyleClearAll();
}

// void StyleSetForeground(int style, const wxColour& fore)
void wxStyledTextCtrl_StyleSetForeground() {
    wxColour *fore = (wxColour *)wStackPopObjectPtr( _wxColour);
    int style = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->StyleSetForeground(style, *fore);
    wWrapDerefArgs();
}

// void StyleSetBackground(int style, const wxColour& back)
void wxStyledTextCtrl_StyleSetBackground() {
    wxColour *back = (wxColour *)wStackPopObjectPtr( _wxColour);
    int style = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->StyleSetBackground(style, *back);
    wWrapDerefArgs();
}

// void StyleSetBold(int style, bool bold)
void wxStyledTextCtrl_StyleSetBold() {
    bool bold = (bool)wStackPopNumber();
    int style = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->StyleSetBold(style, bold);
    wWrapDerefArgs();
}

// void StyleSetItalic(int style, bool italic)
void wxStyledTextCtrl_StyleSetItalic() {
    bool italic = (bool)wStackPopNumber();
    int style = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->StyleSetItalic(style, italic);
    wWrapDerefArgs();
}

// void StyleSetSize(int style, int sizePoints)
void wxStyledTextCtrl_StyleSetSize() {
    int sizePoints = (int)wStackPopNumber();
    int style = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->StyleSetSize(style, sizePoints);
    wWrapDerefArgs();
}

// void StyleSetFaceName(int style, const wxString& fontName)
void wxStyledTextCtrl_StyleSetFaceName() {
    wxString fontName = wxString(wStackPopChar(), *wxConvCurrent);
    int style = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->StyleSetFaceName(style, fontName);
    wWrapDerefArgs();
}

// void StyleSetEOLFilled(int style, bool filled)
void wxStyledTextCtrl_StyleSetEOLFilled() {
    bool filled = (bool)wStackPopNumber();
    int style = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->StyleSetEOLFilled(style, filled);
    wWrapDerefArgs();
}

// void StyleResetDefault()
void wxStyledTextCtrl_StyleResetDefault() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->StyleResetDefault();
}

// void StyleSetUnderline(int style, bool underline)
void wxStyledTextCtrl_StyleSetUnderline() {
    bool underline = (bool)wStackPopNumber();
    int style = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->StyleSetUnderline(style, underline);
    wWrapDerefArgs();
}

// void StyleSetCase(int style, int caseForce)
void wxStyledTextCtrl_StyleSetCase() {
    int caseForce = (int)wStackPopNumber();
    int style = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->StyleSetCase(style, caseForce);
    wWrapDerefArgs();
}

// void StyleSetCharacterSet(int style, int characterSet)
void wxStyledTextCtrl_StyleSetCharacterSet() {
    int characterSet = (int)wStackPopNumber();
    int style = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->StyleSetCharacterSet(style, characterSet);
    wWrapDerefArgs();
}

// void StyleSetHotSpot(int style, bool hotspot)
void wxStyledTextCtrl_StyleSetHotSpot() {
    bool hotspot = (bool)wStackPopNumber();
    int style = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->StyleSetHotSpot(style, hotspot);
    wWrapDerefArgs();
}

// void SetSelForeground(bool useSetting, const wxColour& fore)
void wxStyledTextCtrl_SetSelForeground() {
    wxColour *fore = (wxColour *)wStackPopObjectPtr( _wxColour);
    bool useSetting = (bool)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetSelForeground(useSetting, *fore);
    wWrapDerefArgs();
}

// void SetSelBackground(bool useSetting, const wxColour& back)
void wxStyledTextCtrl_SetSelBackground() {
    wxColour *back = (wxColour *)wStackPopObjectPtr( _wxColour);
    bool useSetting = (bool)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetSelBackground(useSetting, *back);
    wWrapDerefArgs();
}

// void SetCaretForeground(const wxColour& fore)
void wxStyledTextCtrl_SetCaretForeground() {
    wxColour *fore = (wxColour *)wStackPopObjectPtr( _wxColour);
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetCaretForeground(*fore);
    wWrapDerefArgs();
}

// void CmdKeyAssign(int key, int modifiers, int cmd)
void wxStyledTextCtrl_CmdKeyAssign() {
    int cmd = (int)wStackPopNumber();
    int modifiers = (int)wStackPopNumber();
    int key = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->CmdKeyAssign(key, modifiers, cmd);
    wWrapDerefArgs();
}

// void CmdKeyClear(int key, int modifiers)
void wxStyledTextCtrl_CmdKeyClear() {
    int modifiers = (int)wStackPopNumber();
    int key = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->CmdKeyClear(key, modifiers);
    wWrapDerefArgs();
}

// void CmdKeyClearAll()
void wxStyledTextCtrl_CmdKeyClearAll() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->CmdKeyClearAll();
}

// void SetStyleBytes(int length, char* styleBytes)
void wxStyledTextCtrl_SetStyleBytes() {
    char *styleBytes = (char *)wStackPopObjectPtr( NULL );
    int length = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetStyleBytes(length, styleBytes);
    wWrapDerefArgs();
}

// void StyleSetVisible(int style, bool visible)
void wxStyledTextCtrl_StyleSetVisible() {
    bool visible = (bool)wStackPopNumber();
    int style = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->StyleSetVisible(style, visible);
    wWrapDerefArgs();
}

// int GetCaretPeriod()
void wxStyledTextCtrl_GetCaretPeriod() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetCaretPeriod();
    wStackPushNumber( (wNumber)returns);
}

// void SetCaretPeriod(int periodMilliseconds)
void wxStyledTextCtrl_SetCaretPeriod() {
    int periodMilliseconds = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetCaretPeriod(periodMilliseconds);
    wWrapDerefArgs();
}

// void SetWordChars(const wxString& characters)
void wxStyledTextCtrl_SetWordChars() {
    wxString characters = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetWordChars(characters);
    wWrapDerefArgs();
}

// void BeginUndoAction()
void wxStyledTextCtrl_BeginUndoAction() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->BeginUndoAction();
}

// void EndUndoAction()
void wxStyledTextCtrl_EndUndoAction() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->EndUndoAction();
}

// void IndicatorSetStyle(int indic, int style)
void wxStyledTextCtrl_IndicatorSetStyle() {
    int style = (int)wStackPopNumber();
    int indic = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->IndicatorSetStyle(indic, style);
    wWrapDerefArgs();
}

// int IndicatorGetStyle(int indic)
void wxStyledTextCtrl_IndicatorGetStyle() {
    int indic = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->IndicatorGetStyle(indic);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void IndicatorSetForeground(int indic, const wxColour& fore)
void wxStyledTextCtrl_IndicatorSetForeground() {
    wxColour *fore = (wxColour *)wStackPopObjectPtr( _wxColour);
    int indic = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->IndicatorSetForeground(indic, *fore);
    wWrapDerefArgs();
}

// wxColour IndicatorGetForeground(int indic)
void wxStyledTextCtrl_IndicatorGetForeground() {
    int indic = (int)wStackPopNumber();
    // make a pointer via copy constructor
    wxColour *returns = new wxColour(((wxStyledTextCtrl *)(wTheCall->self->ptr))->IndicatorGetForeground(indic));
    wWrapDerefArgs();
    wWrapPushObject( _wxColour, W_TRUE, (void *)returns );
}

// void SetWhitespaceForeground(bool useSetting, const wxColour& fore)
void wxStyledTextCtrl_SetWhitespaceForeground() {
    wxColour *fore = (wxColour *)wStackPopObjectPtr( _wxColour);
    bool useSetting = (bool)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetWhitespaceForeground(useSetting, *fore);
    wWrapDerefArgs();
}

// void SetWhitespaceBackground(bool useSetting, const wxColour& back)
void wxStyledTextCtrl_SetWhitespaceBackground() {
    wxColour *back = (wxColour *)wStackPopObjectPtr( _wxColour);
    bool useSetting = (bool)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetWhitespaceBackground(useSetting, *back);
    wWrapDerefArgs();
}

// void SetStyleBits(int bits)
void wxStyledTextCtrl_SetStyleBits() {
    int bits = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetStyleBits(bits);
    wWrapDerefArgs();
}

// int GetStyleBits()
void wxStyledTextCtrl_GetStyleBits() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetStyleBits();
    wStackPushNumber( (wNumber)returns);
}

// void SetLineState(int line, int state)
void wxStyledTextCtrl_SetLineState() {
    int state = (int)wStackPopNumber();
    int line = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetLineState(line, state);
    wWrapDerefArgs();
}

// int GetLineState(int line)
void wxStyledTextCtrl_GetLineState() {
    int line = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetLineState(line);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int GetMaxLineState()
void wxStyledTextCtrl_GetMaxLineState() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetMaxLineState();
    wStackPushNumber( (wNumber)returns);
}

// bool GetCaretLineVisible()
void wxStyledTextCtrl_GetCaretLineVisible() {
    bool returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetCaretLineVisible();
    wStackPushNumber( (wNumber)returns);
}

// void SetCaretLineVisible(bool show)
void wxStyledTextCtrl_SetCaretLineVisible() {
    bool show = (bool)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetCaretLineVisible(show);
    wWrapDerefArgs();
}

// wxColour GetCaretLineBack()
void wxStyledTextCtrl_GetCaretLineBack() {
    // make a pointer via copy constructor
    wxColour *returns = new wxColour(((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetCaretLineBack());
    wWrapPushObject( _wxColour, W_TRUE, (void *)returns );
}

// void SetCaretLineBack(const wxColour& back)
void wxStyledTextCtrl_SetCaretLineBack() {
    wxColour *back = (wxColour *)wStackPopObjectPtr( _wxColour);
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetCaretLineBack(*back);
    wWrapDerefArgs();
}

// void StyleSetChangeable(int style, bool changeable)
void wxStyledTextCtrl_StyleSetChangeable() {
    bool changeable = (bool)wStackPopNumber();
    int style = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->StyleSetChangeable(style, changeable);
    wWrapDerefArgs();
}

// void AutoCompShow(int lenEntered, const wxString& itemList)
void wxStyledTextCtrl_AutoCompShow() {
    wxString itemList = wxString(wStackPopChar(), *wxConvCurrent);
    int lenEntered = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->AutoCompShow(lenEntered, itemList);
    wWrapDerefArgs();
}

// void AutoCompCancel()
void wxStyledTextCtrl_AutoCompCancel() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->AutoCompCancel();
}

// bool AutoCompActive()
void wxStyledTextCtrl_AutoCompActive() {
    bool returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->AutoCompActive();
    wStackPushNumber( (wNumber)returns);
}

// int AutoCompPosStart()
void wxStyledTextCtrl_AutoCompPosStart() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->AutoCompPosStart();
    wStackPushNumber( (wNumber)returns);
}

// void AutoCompComplete()
void wxStyledTextCtrl_AutoCompComplete() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->AutoCompComplete();
}

// void AutoCompStops(const wxString& characterSet)
void wxStyledTextCtrl_AutoCompStops() {
    wxString characterSet = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->AutoCompStops(characterSet);
    wWrapDerefArgs();
}

// void AutoCompSetSeparator(int separatorCharacter)
void wxStyledTextCtrl_AutoCompSetSeparator() {
    int separatorCharacter = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->AutoCompSetSeparator(separatorCharacter);
    wWrapDerefArgs();
}

// int AutoCompGetSeparator()
void wxStyledTextCtrl_AutoCompGetSeparator() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->AutoCompGetSeparator();
    wStackPushNumber( (wNumber)returns);
}

// void AutoCompSelect(const wxString& text)
void wxStyledTextCtrl_AutoCompSelect() {
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->AutoCompSelect(text);
    wWrapDerefArgs();
}

// void AutoCompSetCancelAtStart(bool cancel)
void wxStyledTextCtrl_AutoCompSetCancelAtStart() {
    bool cancel = (bool)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->AutoCompSetCancelAtStart(cancel);
    wWrapDerefArgs();
}

// bool AutoCompGetCancelAtStart()
void wxStyledTextCtrl_AutoCompGetCancelAtStart() {
    bool returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->AutoCompGetCancelAtStart();
    wStackPushNumber( (wNumber)returns);
}

// void AutoCompSetFillUps(const wxString& characterSet)
void wxStyledTextCtrl_AutoCompSetFillUps() {
    wxString characterSet = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->AutoCompSetFillUps(characterSet);
    wWrapDerefArgs();
}

// void AutoCompSetChooseSingle(bool chooseSingle)
void wxStyledTextCtrl_AutoCompSetChooseSingle() {
    bool chooseSingle = (bool)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->AutoCompSetChooseSingle(chooseSingle);
    wWrapDerefArgs();
}

// bool AutoCompGetChooseSingle()
void wxStyledTextCtrl_AutoCompGetChooseSingle() {
    bool returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->AutoCompGetChooseSingle();
    wStackPushNumber( (wNumber)returns);
}

// void AutoCompSetIgnoreCase(bool ignoreCase)
void wxStyledTextCtrl_AutoCompSetIgnoreCase() {
    bool ignoreCase = (bool)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->AutoCompSetIgnoreCase(ignoreCase);
    wWrapDerefArgs();
}

// bool AutoCompGetIgnoreCase()
void wxStyledTextCtrl_AutoCompGetIgnoreCase() {
    bool returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->AutoCompGetIgnoreCase();
    wStackPushNumber( (wNumber)returns);
}

// void UserListShow(int listType, const wxString& itemList)
void wxStyledTextCtrl_UserListShow() {
    wxString itemList = wxString(wStackPopChar(), *wxConvCurrent);
    int listType = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->UserListShow(listType, itemList);
    wWrapDerefArgs();
}

// void AutoCompSetAutoHide(bool autoHide)
void wxStyledTextCtrl_AutoCompSetAutoHide() {
    bool autoHide = (bool)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->AutoCompSetAutoHide(autoHide);
    wWrapDerefArgs();
}

// bool AutoCompGetAutoHide()
void wxStyledTextCtrl_AutoCompGetAutoHide() {
    bool returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->AutoCompGetAutoHide();
    wStackPushNumber( (wNumber)returns);
}

// void AutoCompSetDropRestOfWord(bool dropRestOfWord)
void wxStyledTextCtrl_AutoCompSetDropRestOfWord() {
    bool dropRestOfWord = (bool)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->AutoCompSetDropRestOfWord(dropRestOfWord);
    wWrapDerefArgs();
}

// bool AutoCompGetDropRestOfWord()
void wxStyledTextCtrl_AutoCompGetDropRestOfWord() {
    bool returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->AutoCompGetDropRestOfWord();
    wStackPushNumber( (wNumber)returns);
}

// void RegisterImage(int type, const wxBitmap& bmp)
void wxStyledTextCtrl_RegisterImage() {
    wxBitmap *bmp = (wxBitmap *)wStackPopObjectPtr( _wxBitmap);
    int type = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->RegisterImage(type, *bmp);
    wWrapDerefArgs();
}

// void ClearRegisteredImages()
void wxStyledTextCtrl_ClearRegisteredImages() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->ClearRegisteredImages();
}

// int AutoCompGetTypeSeparator()
void wxStyledTextCtrl_AutoCompGetTypeSeparator() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->AutoCompGetTypeSeparator();
    wStackPushNumber( (wNumber)returns);
}

// void AutoCompSetTypeSeparator(int separatorCharacter)
void wxStyledTextCtrl_AutoCompSetTypeSeparator() {
    int separatorCharacter = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->AutoCompSetTypeSeparator(separatorCharacter);
    wWrapDerefArgs();
}

// void SetIndent(int indentSize)
void wxStyledTextCtrl_SetIndent() {
    int indentSize = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetIndent(indentSize);
    wWrapDerefArgs();
}

// int GetIndent()
void wxStyledTextCtrl_GetIndent() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetIndent();
    wStackPushNumber( (wNumber)returns);
}

// void SetUseTabs(bool useTabs)
void wxStyledTextCtrl_SetUseTabs() {
    bool useTabs = (bool)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetUseTabs(useTabs);
    wWrapDerefArgs();
}

// bool GetUseTabs()
void wxStyledTextCtrl_GetUseTabs() {
    bool returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetUseTabs();
    wStackPushNumber( (wNumber)returns);
}

// void SetLineIndentation(int line, int indentSize)
void wxStyledTextCtrl_SetLineIndentation() {
    int indentSize = (int)wStackPopNumber();
    int line = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetLineIndentation(line, indentSize);
    wWrapDerefArgs();
}

// int GetLineIndentation(int line)
void wxStyledTextCtrl_GetLineIndentation() {
    int line = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetLineIndentation(line);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int GetLineIndentPosition(int line)
void wxStyledTextCtrl_GetLineIndentPosition() {
    int line = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetLineIndentPosition(line);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int GetColumn(int pos)
void wxStyledTextCtrl_GetColumn() {
    int pos = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetColumn(pos);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void SetUseHorizontalScrollBar(bool show)
void wxStyledTextCtrl_SetUseHorizontalScrollBar() {
    bool show = (bool)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetUseHorizontalScrollBar(show);
    wWrapDerefArgs();
}

// bool GetUseHorizontalScrollBar()
void wxStyledTextCtrl_GetUseHorizontalScrollBar() {
    bool returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetUseHorizontalScrollBar();
    wStackPushNumber( (wNumber)returns);
}

// void SetIndentationGuides(bool show)
void wxStyledTextCtrl_SetIndentationGuides() {
    bool show = (bool)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetIndentationGuides(show);
    wWrapDerefArgs();
}

// bool GetIndentationGuides()
void wxStyledTextCtrl_GetIndentationGuides() {
    bool returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetIndentationGuides();
    wStackPushNumber( (wNumber)returns);
}

// void SetHighlightGuide(int column)
void wxStyledTextCtrl_SetHighlightGuide() {
    int column = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetHighlightGuide(column);
    wWrapDerefArgs();
}

// int GetHighlightGuide()
void wxStyledTextCtrl_GetHighlightGuide() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetHighlightGuide();
    wStackPushNumber( (wNumber)returns);
}

// int GetLineEndPosition(int line)
void wxStyledTextCtrl_GetLineEndPosition() {
    int line = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetLineEndPosition(line);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int GetCodePage()
void wxStyledTextCtrl_GetCodePage() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetCodePage();
    wStackPushNumber( (wNumber)returns);
}

// wxColour GetCaretForeground()
void wxStyledTextCtrl_GetCaretForeground() {
    // make a pointer via copy constructor
    wxColour *returns = new wxColour(((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetCaretForeground());
    wWrapPushObject( _wxColour, W_TRUE, (void *)returns );
}

// bool GetReadOnly()
void wxStyledTextCtrl_GetReadOnly() {
    bool returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetReadOnly();
    wStackPushNumber( (wNumber)returns);
}

// void SetCurrentPos(int pos)
void wxStyledTextCtrl_SetCurrentPos() {
    int pos = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetCurrentPos(pos);
    wWrapDerefArgs();
}

// void SetSelectionStart(int pos)
void wxStyledTextCtrl_SetSelectionStart() {
    int pos = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetSelectionStart(pos);
    wWrapDerefArgs();
}

// int GetSelectionStart()
void wxStyledTextCtrl_GetSelectionStart() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetSelectionStart();
    wStackPushNumber( (wNumber)returns);
}

// void SetSelectionEnd(int pos)
void wxStyledTextCtrl_SetSelectionEnd() {
    int pos = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetSelectionEnd(pos);
    wWrapDerefArgs();
}

// int GetSelectionEnd()
void wxStyledTextCtrl_GetSelectionEnd() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetSelectionEnd();
    wStackPushNumber( (wNumber)returns);
}

// void SetPrintMagnification(int magnification)
void wxStyledTextCtrl_SetPrintMagnification() {
    int magnification = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetPrintMagnification(magnification);
    wWrapDerefArgs();
}

// int GetPrintMagnification()
void wxStyledTextCtrl_GetPrintMagnification() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetPrintMagnification();
    wStackPushNumber( (wNumber)returns);
}

// void SetPrintColourMode(int mode)
void wxStyledTextCtrl_SetPrintColourMode() {
    int mode = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetPrintColourMode(mode);
    wWrapDerefArgs();
}

// int GetPrintColourMode()
void wxStyledTextCtrl_GetPrintColourMode() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetPrintColourMode();
    wStackPushNumber( (wNumber)returns);
}

// int FindText(int minPos, int maxPos, const wxString& text, int flags)
void wxStyledTextCtrl_FindText() {
    int flags = (int)wStackPopNumber();
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    int maxPos = (int)wStackPopNumber();
    int minPos = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->FindText(minPos, maxPos, text, flags);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int GetFirstVisibleLine()
void wxStyledTextCtrl_GetFirstVisibleLine() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetFirstVisibleLine();
    wStackPushNumber( (wNumber)returns);
}

// wxString GetLine(int line)
void wxStyledTextCtrl_GetLine() {
    int line = (int)wStackPopNumber();
    wxString returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetLine(line);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// int GetLineCount()
void wxStyledTextCtrl_GetLineCount() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetLineCount();
    wStackPushNumber( (wNumber)returns);
}

// void SetMarginLeft(int pixelWidth)
void wxStyledTextCtrl_SetMarginLeft() {
    int pixelWidth = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetMarginLeft(pixelWidth);
    wWrapDerefArgs();
}

// int GetMarginLeft()
void wxStyledTextCtrl_GetMarginLeft() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetMarginLeft();
    wStackPushNumber( (wNumber)returns);
}

// void SetMarginRight(int pixelWidth)
void wxStyledTextCtrl_SetMarginRight() {
    int pixelWidth = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetMarginRight(pixelWidth);
    wWrapDerefArgs();
}

// int GetMarginRight()
void wxStyledTextCtrl_GetMarginRight() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetMarginRight();
    wStackPushNumber( (wNumber)returns);
}

// bool GetModify()
void wxStyledTextCtrl_GetModify() {
    bool returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetModify();
    wStackPushNumber( (wNumber)returns);
}

// void SetSelection(int start, int end)
void wxStyledTextCtrl_SetSelection() {
    int end = (int)wStackPopNumber();
    int start = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetSelection(start, end);
    wWrapDerefArgs();
}

// wxString GetSelectedText()
void wxStyledTextCtrl_GetSelectedText() {
    wxString returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetSelectedText();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxString GetTextRange(int startPos, int endPos)
void wxStyledTextCtrl_GetTextRange() {
    int endPos = (int)wStackPopNumber();
    int startPos = (int)wStackPopNumber();
    wxString returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetTextRange(startPos, endPos);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// void HideSelection(bool normal)
void wxStyledTextCtrl_HideSelection() {
    bool normal = (bool)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->HideSelection(normal);
    wWrapDerefArgs();
}

// int LineFromPosition(int pos)
void wxStyledTextCtrl_LineFromPosition() {
    int pos = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->LineFromPosition(pos);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int PositionFromLine(int line)
void wxStyledTextCtrl_PositionFromLine() {
    int line = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->PositionFromLine(line);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void LineScroll(int columns, int lines)
void wxStyledTextCtrl_LineScroll() {
    int lines = (int)wStackPopNumber();
    int columns = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->LineScroll(columns, lines);
    wWrapDerefArgs();
}

// void EnsureCaretVisible()
void wxStyledTextCtrl_EnsureCaretVisible() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->EnsureCaretVisible();
}

// void ReplaceSelection(const wxString& text)
void wxStyledTextCtrl_ReplaceSelection() {
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->ReplaceSelection(text);
    wWrapDerefArgs();
}

// void SetReadOnly(bool readOnly)
void wxStyledTextCtrl_SetReadOnly() {
    bool readOnly = (bool)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetReadOnly(readOnly);
    wWrapDerefArgs();
}

// bool CanPaste()
void wxStyledTextCtrl_CanPaste() {
    bool returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->CanPaste();
    wStackPushNumber( (wNumber)returns);
}

// bool CanUndo()
void wxStyledTextCtrl_CanUndo() {
    bool returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->CanUndo();
    wStackPushNumber( (wNumber)returns);
}

// void EmptyUndoBuffer()
void wxStyledTextCtrl_EmptyUndoBuffer() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->EmptyUndoBuffer();
}

// void Undo()
void wxStyledTextCtrl_Undo() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->Undo();
}

// void Cut()
void wxStyledTextCtrl_Cut() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->Cut();
}

// void Copy()
void wxStyledTextCtrl_Copy() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->Copy();
}

// void Paste()
void wxStyledTextCtrl_Paste() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->Paste();
}

// void Clear()
void wxStyledTextCtrl_Clear() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->Clear();
}

// void SetText(const wxString& text)
void wxStyledTextCtrl_SetText() {
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetText(text);
    wWrapDerefArgs();
}

// wxString GetText()
void wxStyledTextCtrl_GetText() {
    wxString returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetText();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// int GetTextLength()
void wxStyledTextCtrl_GetTextLength() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetTextLength();
    wStackPushNumber( (wNumber)returns);
}

// void SetOvertype(bool overtype)
void wxStyledTextCtrl_SetOvertype() {
    bool overtype = (bool)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetOvertype(overtype);
    wWrapDerefArgs();
}

// bool GetOvertype()
void wxStyledTextCtrl_GetOvertype() {
    bool returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetOvertype();
    wStackPushNumber( (wNumber)returns);
}

// void SetCaretWidth(int pixelWidth)
void wxStyledTextCtrl_SetCaretWidth() {
    int pixelWidth = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetCaretWidth(pixelWidth);
    wWrapDerefArgs();
}

// int GetCaretWidth()
void wxStyledTextCtrl_GetCaretWidth() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetCaretWidth();
    wStackPushNumber( (wNumber)returns);
}

// void SetTargetStart(int pos)
void wxStyledTextCtrl_SetTargetStart() {
    int pos = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetTargetStart(pos);
    wWrapDerefArgs();
}

// int GetTargetStart()
void wxStyledTextCtrl_GetTargetStart() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetTargetStart();
    wStackPushNumber( (wNumber)returns);
}

// void SetTargetEnd(int pos)
void wxStyledTextCtrl_SetTargetEnd() {
    int pos = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetTargetEnd(pos);
    wWrapDerefArgs();
}

// int GetTargetEnd()
void wxStyledTextCtrl_GetTargetEnd() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetTargetEnd();
    wStackPushNumber( (wNumber)returns);
}

// int ReplaceTarget(const wxString& text)
void wxStyledTextCtrl_ReplaceTarget() {
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->ReplaceTarget(text);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int ReplaceTargetRE(const wxString& text)
void wxStyledTextCtrl_ReplaceTargetRE() {
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->ReplaceTargetRE(text);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int SearchInTarget(const wxString& text)
void wxStyledTextCtrl_SearchInTarget() {
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SearchInTarget(text);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void SetSearchFlags(int flags)
void wxStyledTextCtrl_SetSearchFlags() {
    int flags = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetSearchFlags(flags);
    wWrapDerefArgs();
}

// int GetSearchFlags()
void wxStyledTextCtrl_GetSearchFlags() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetSearchFlags();
    wStackPushNumber( (wNumber)returns);
}

// void CallTipShow(int pos, const wxString& definition)
void wxStyledTextCtrl_CallTipShow() {
    wxString definition = wxString(wStackPopChar(), *wxConvCurrent);
    int pos = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->CallTipShow(pos, definition);
    wWrapDerefArgs();
}

// void CallTipCancel()
void wxStyledTextCtrl_CallTipCancel() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->CallTipCancel();
}

// bool CallTipActive()
void wxStyledTextCtrl_CallTipActive() {
    bool returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->CallTipActive();
    wStackPushNumber( (wNumber)returns);
}

// int CallTipPosAtStart()
void wxStyledTextCtrl_CallTipPosAtStart() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->CallTipPosAtStart();
    wStackPushNumber( (wNumber)returns);
}

// void CallTipSetHighlight(int start, int end)
void wxStyledTextCtrl_CallTipSetHighlight() {
    int end = (int)wStackPopNumber();
    int start = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->CallTipSetHighlight(start, end);
    wWrapDerefArgs();
}

// void CallTipSetBackground(const wxColour& back)
void wxStyledTextCtrl_CallTipSetBackground() {
    wxColour *back = (wxColour *)wStackPopObjectPtr( _wxColour);
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->CallTipSetBackground(*back);
    wWrapDerefArgs();
}

// void CallTipSetForeground(const wxColour& fore)
void wxStyledTextCtrl_CallTipSetForeground() {
    wxColour *fore = (wxColour *)wStackPopObjectPtr( _wxColour);
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->CallTipSetForeground(*fore);
    wWrapDerefArgs();
}

// void CallTipSetForegroundHighlight(const wxColour& fore)
void wxStyledTextCtrl_CallTipSetForegroundHighlight() {
    wxColour *fore = (wxColour *)wStackPopObjectPtr( _wxColour);
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->CallTipSetForegroundHighlight(*fore);
    wWrapDerefArgs();
}

// int VisibleFromDocLine(int line)
void wxStyledTextCtrl_VisibleFromDocLine() {
    int line = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->VisibleFromDocLine(line);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int DocLineFromVisible(int lineDisplay)
void wxStyledTextCtrl_DocLineFromVisible() {
    int lineDisplay = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->DocLineFromVisible(lineDisplay);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void SetFoldLevel(int line, int level)
void wxStyledTextCtrl_SetFoldLevel() {
    int level = (int)wStackPopNumber();
    int line = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetFoldLevel(line, level);
    wWrapDerefArgs();
}

// int GetFoldLevel(int line)
void wxStyledTextCtrl_GetFoldLevel() {
    int line = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetFoldLevel(line);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int GetLastChild(int line, int level)
void wxStyledTextCtrl_GetLastChild() {
    int level = (int)wStackPopNumber();
    int line = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetLastChild(line, level);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int GetFoldParent(int line)
void wxStyledTextCtrl_GetFoldParent() {
    int line = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetFoldParent(line);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void ShowLines(int lineStart, int lineEnd)
void wxStyledTextCtrl_ShowLines() {
    int lineEnd = (int)wStackPopNumber();
    int lineStart = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->ShowLines(lineStart, lineEnd);
    wWrapDerefArgs();
}

// void HideLines(int lineStart, int lineEnd)
void wxStyledTextCtrl_HideLines() {
    int lineEnd = (int)wStackPopNumber();
    int lineStart = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->HideLines(lineStart, lineEnd);
    wWrapDerefArgs();
}

// bool GetLineVisible(int line)
void wxStyledTextCtrl_GetLineVisible() {
    int line = (int)wStackPopNumber();
    bool returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetLineVisible(line);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void SetFoldExpanded(int line, bool expanded)
void wxStyledTextCtrl_SetFoldExpanded() {
    bool expanded = (bool)wStackPopNumber();
    int line = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetFoldExpanded(line, expanded);
    wWrapDerefArgs();
}

// bool GetFoldExpanded(int line)
void wxStyledTextCtrl_GetFoldExpanded() {
    int line = (int)wStackPopNumber();
    bool returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetFoldExpanded(line);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void ToggleFold(int line)
void wxStyledTextCtrl_ToggleFold() {
    int line = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->ToggleFold(line);
    wWrapDerefArgs();
}

// void EnsureVisible(int line)
void wxStyledTextCtrl_EnsureVisible() {
    int line = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->EnsureVisible(line);
    wWrapDerefArgs();
}

// void SetFoldFlags(int flags)
void wxStyledTextCtrl_SetFoldFlags() {
    int flags = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetFoldFlags(flags);
    wWrapDerefArgs();
}

// void EnsureVisibleEnforcePolicy(int line)
void wxStyledTextCtrl_EnsureVisibleEnforcePolicy() {
    int line = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->EnsureVisibleEnforcePolicy(line);
    wWrapDerefArgs();
}

// void SetTabIndents(bool tabIndents)
void wxStyledTextCtrl_SetTabIndents() {
    bool tabIndents = (bool)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetTabIndents(tabIndents);
    wWrapDerefArgs();
}

// bool GetTabIndents()
void wxStyledTextCtrl_GetTabIndents() {
    bool returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetTabIndents();
    wStackPushNumber( (wNumber)returns);
}

// void SetBackSpaceUnIndents(bool bsUnIndents)
void wxStyledTextCtrl_SetBackSpaceUnIndents() {
    bool bsUnIndents = (bool)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetBackSpaceUnIndents(bsUnIndents);
    wWrapDerefArgs();
}

// bool GetBackSpaceUnIndents()
void wxStyledTextCtrl_GetBackSpaceUnIndents() {
    bool returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetBackSpaceUnIndents();
    wStackPushNumber( (wNumber)returns);
}

// void SetMouseDwellTime(int periodMilliseconds)
void wxStyledTextCtrl_SetMouseDwellTime() {
    int periodMilliseconds = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetMouseDwellTime(periodMilliseconds);
    wWrapDerefArgs();
}

// int GetMouseDwellTime()
void wxStyledTextCtrl_GetMouseDwellTime() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetMouseDwellTime();
    wStackPushNumber( (wNumber)returns);
}

// int WordStartPosition(int pos, bool onlyWordCharacters)
void wxStyledTextCtrl_WordStartPosition() {
    bool onlyWordCharacters = (bool)wStackPopNumber();
    int pos = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->WordStartPosition(pos, onlyWordCharacters);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int WordEndPosition(int pos, bool onlyWordCharacters)
void wxStyledTextCtrl_WordEndPosition() {
    bool onlyWordCharacters = (bool)wStackPopNumber();
    int pos = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->WordEndPosition(pos, onlyWordCharacters);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void SetWrapMode(int mode)
void wxStyledTextCtrl_SetWrapMode() {
    int mode = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetWrapMode(mode);
    wWrapDerefArgs();
}

// int GetWrapMode()
void wxStyledTextCtrl_GetWrapMode() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetWrapMode();
    wStackPushNumber( (wNumber)returns);
}

// void SetLayoutCache(int mode)
void wxStyledTextCtrl_SetLayoutCache() {
    int mode = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetLayoutCache(mode);
    wWrapDerefArgs();
}

// int GetLayoutCache()
void wxStyledTextCtrl_GetLayoutCache() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetLayoutCache();
    wStackPushNumber( (wNumber)returns);
}

// void SetScrollWidth(int pixelWidth)
void wxStyledTextCtrl_SetScrollWidth() {
    int pixelWidth = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetScrollWidth(pixelWidth);
    wWrapDerefArgs();
}

// int GetScrollWidth()
void wxStyledTextCtrl_GetScrollWidth() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetScrollWidth();
    wStackPushNumber( (wNumber)returns);
}

// int TextWidth(int style, const wxString& text)
void wxStyledTextCtrl_TextWidth() {
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    int style = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->TextWidth(style, text);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void SetEndAtLastLine(bool endAtLastLine)
void wxStyledTextCtrl_SetEndAtLastLine() {
    bool endAtLastLine = (bool)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetEndAtLastLine(endAtLastLine);
    wWrapDerefArgs();
}

// int GetEndAtLastLine()
void wxStyledTextCtrl_GetEndAtLastLine() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetEndAtLastLine();
    wStackPushNumber( (wNumber)returns);
}

// int TextHeight(int line)
void wxStyledTextCtrl_TextHeight() {
    int line = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->TextHeight(line);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void SetUseVerticalScrollBar(bool show)
void wxStyledTextCtrl_SetUseVerticalScrollBar() {
    bool show = (bool)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetUseVerticalScrollBar(show);
    wWrapDerefArgs();
}

// bool GetUseVerticalScrollBar()
void wxStyledTextCtrl_GetUseVerticalScrollBar() {
    bool returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetUseVerticalScrollBar();
    wStackPushNumber( (wNumber)returns);
}

// void AppendText(int length, const wxString& text)
void wxStyledTextCtrl_AppendText() {
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    int length = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->AppendText(length, text);
    wWrapDerefArgs();
}

// bool GetTwoPhaseDraw()
void wxStyledTextCtrl_GetTwoPhaseDraw() {
    bool returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetTwoPhaseDraw();
    wStackPushNumber( (wNumber)returns);
}

// void SetTwoPhaseDraw(bool twoPhase)
void wxStyledTextCtrl_SetTwoPhaseDraw() {
    bool twoPhase = (bool)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetTwoPhaseDraw(twoPhase);
    wWrapDerefArgs();
}

// void TargetFromSelection()
void wxStyledTextCtrl_TargetFromSelection() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->TargetFromSelection();
}

// void LinesJoin()
void wxStyledTextCtrl_LinesJoin() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->LinesJoin();
}

// void LinesSplit(int pixelWidth)
void wxStyledTextCtrl_LinesSplit() {
    int pixelWidth = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->LinesSplit(pixelWidth);
    wWrapDerefArgs();
}

// void SetFoldMarginColour(bool useSetting, const wxColour& back)
void wxStyledTextCtrl_SetFoldMarginColour() {
    wxColour *back = (wxColour *)wStackPopObjectPtr( _wxColour);
    bool useSetting = (bool)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetFoldMarginColour(useSetting, *back);
    wWrapDerefArgs();
}

// void SetFoldMarginHiColour(bool useSetting, const wxColour& fore)
void wxStyledTextCtrl_SetFoldMarginHiColour() {
    wxColour *fore = (wxColour *)wStackPopObjectPtr( _wxColour);
    bool useSetting = (bool)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetFoldMarginHiColour(useSetting, *fore);
    wWrapDerefArgs();
}

// void LineDuplicate()
void wxStyledTextCtrl_LineDuplicate() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->LineDuplicate();
}

// void HomeDisplay()
void wxStyledTextCtrl_HomeDisplay() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->HomeDisplay();
}

// void HomeDisplayExtend()
void wxStyledTextCtrl_HomeDisplayExtend() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->HomeDisplayExtend();
}

// void LineEndDisplay()
void wxStyledTextCtrl_LineEndDisplay() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->LineEndDisplay();
}

// void LineEndDisplayExtend()
void wxStyledTextCtrl_LineEndDisplayExtend() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->LineEndDisplayExtend();
}

// void LineCopy()
void wxStyledTextCtrl_LineCopy() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->LineCopy();
}

// void MoveCaretInsideView()
void wxStyledTextCtrl_MoveCaretInsideView() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->MoveCaretInsideView();
}

// int LineLength(int line)
void wxStyledTextCtrl_LineLength() {
    int line = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->LineLength(line);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void BraceHighlight(int pos1, int pos2)
void wxStyledTextCtrl_BraceHighlight() {
    int pos2 = (int)wStackPopNumber();
    int pos1 = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->BraceHighlight(pos1, pos2);
    wWrapDerefArgs();
}

// void BraceBadLight(int pos)
void wxStyledTextCtrl_BraceBadLight() {
    int pos = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->BraceBadLight(pos);
    wWrapDerefArgs();
}

// int BraceMatch(int pos)
void wxStyledTextCtrl_BraceMatch() {
    int pos = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->BraceMatch(pos);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool GetViewEOL()
void wxStyledTextCtrl_GetViewEOL() {
    bool returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetViewEOL();
    wStackPushNumber( (wNumber)returns);
}

// void SetViewEOL(bool visible)
void wxStyledTextCtrl_SetViewEOL() {
    bool visible = (bool)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetViewEOL(visible);
    wWrapDerefArgs();
}

// void* GetDocPointer()
void wxStyledTextCtrl_GetDocPointer() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetDocPointer();
}

// void SetDocPointer(void* docPointer)
void wxStyledTextCtrl_SetDocPointer() {
    void *docPointer = (void *)wStackPopObjectPtr( NULL );
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetDocPointer(docPointer);
    wWrapDerefArgs();
}

// void SetModEventMask(int mask)
void wxStyledTextCtrl_SetModEventMask() {
    int mask = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetModEventMask(mask);
    wWrapDerefArgs();
}

// int GetEdgeColumn()
void wxStyledTextCtrl_GetEdgeColumn() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetEdgeColumn();
    wStackPushNumber( (wNumber)returns);
}

// void SetEdgeColumn(int column)
void wxStyledTextCtrl_SetEdgeColumn() {
    int column = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetEdgeColumn(column);
    wWrapDerefArgs();
}

// int GetEdgeMode()
void wxStyledTextCtrl_GetEdgeMode() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetEdgeMode();
    wStackPushNumber( (wNumber)returns);
}

// void SetEdgeMode(int mode)
void wxStyledTextCtrl_SetEdgeMode() {
    int mode = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetEdgeMode(mode);
    wWrapDerefArgs();
}

// wxColour GetEdgeColour()
void wxStyledTextCtrl_GetEdgeColour() {
    // make a pointer via copy constructor
    wxColour *returns = new wxColour(((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetEdgeColour());
    wWrapPushObject( _wxColour, W_TRUE, (void *)returns );
}

// void SetEdgeColour(const wxColour& edgeColour)
void wxStyledTextCtrl_SetEdgeColour() {
    wxColour *edgeColour = (wxColour *)wStackPopObjectPtr( _wxColour);
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetEdgeColour(*edgeColour);
    wWrapDerefArgs();
}

// void SearchAnchor()
void wxStyledTextCtrl_SearchAnchor() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SearchAnchor();
}

// int SearchNext(int flags, const wxString& text)
void wxStyledTextCtrl_SearchNext() {
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    int flags = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SearchNext(flags, text);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int SearchPrev(int flags, const wxString& text)
void wxStyledTextCtrl_SearchPrev() {
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    int flags = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SearchPrev(flags, text);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int LinesOnScreen()
void wxStyledTextCtrl_LinesOnScreen() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->LinesOnScreen();
    wStackPushNumber( (wNumber)returns);
}

// void UsePopUp(bool allowPopUp)
void wxStyledTextCtrl_UsePopUp() {
    bool allowPopUp = (bool)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->UsePopUp(allowPopUp);
    wWrapDerefArgs();
}

// bool SelectionIsRectangle()
void wxStyledTextCtrl_SelectionIsRectangle() {
    bool returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SelectionIsRectangle();
    wStackPushNumber( (wNumber)returns);
}

// void SetZoom(int zoom)
void wxStyledTextCtrl_SetZoom() {
    int zoom = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetZoom(zoom);
    wWrapDerefArgs();
}

// int GetZoom()
void wxStyledTextCtrl_GetZoom() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetZoom();
    wStackPushNumber( (wNumber)returns);
}

// void* CreateDocument()
void wxStyledTextCtrl_CreateDocument() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->CreateDocument();
}

// void AddRefDocument(void* docPointer)
void wxStyledTextCtrl_AddRefDocument() {
    void *docPointer = (void *)wStackPopObjectPtr( NULL );
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->AddRefDocument(docPointer);
    wWrapDerefArgs();
}

// void ReleaseDocument(void* docPointer)
void wxStyledTextCtrl_ReleaseDocument() {
    void *docPointer = (void *)wStackPopObjectPtr( NULL );
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->ReleaseDocument(docPointer);
    wWrapDerefArgs();
}

// int GetModEventMask()
void wxStyledTextCtrl_GetModEventMask() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetModEventMask();
    wStackPushNumber( (wNumber)returns);
}

// void SetSTCFocus(bool focus)
void wxStyledTextCtrl_SetSTCFocus() {
    bool focus = (bool)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetSTCFocus(focus);
    wWrapDerefArgs();
}

// bool GetSTCFocus()
void wxStyledTextCtrl_GetSTCFocus() {
    bool returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetSTCFocus();
    wStackPushNumber( (wNumber)returns);
}

// void SetStatus(int statusCode)
void wxStyledTextCtrl_SetStatus() {
    int statusCode = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetStatus(statusCode);
    wWrapDerefArgs();
}

// int GetStatus()
void wxStyledTextCtrl_GetStatus() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetStatus();
    wStackPushNumber( (wNumber)returns);
}

// void SetMouseDownCaptures(bool captures)
void wxStyledTextCtrl_SetMouseDownCaptures() {
    bool captures = (bool)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetMouseDownCaptures(captures);
    wWrapDerefArgs();
}

// bool GetMouseDownCaptures()
void wxStyledTextCtrl_GetMouseDownCaptures() {
    bool returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetMouseDownCaptures();
    wStackPushNumber( (wNumber)returns);
}

// void SetSTCCursor(int cursorType)
void wxStyledTextCtrl_SetSTCCursor() {
    int cursorType = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetSTCCursor(cursorType);
    wWrapDerefArgs();
}

// int GetSTCCursor()
void wxStyledTextCtrl_GetSTCCursor() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetSTCCursor();
    wStackPushNumber( (wNumber)returns);
}

// void SetControlCharSymbol(int symbol)
void wxStyledTextCtrl_SetControlCharSymbol() {
    int symbol = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetControlCharSymbol(symbol);
    wWrapDerefArgs();
}

// int GetControlCharSymbol()
void wxStyledTextCtrl_GetControlCharSymbol() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetControlCharSymbol();
    wStackPushNumber( (wNumber)returns);
}

// void WordPartLeft()
void wxStyledTextCtrl_WordPartLeft() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->WordPartLeft();
}

// void WordPartLeftExtend()
void wxStyledTextCtrl_WordPartLeftExtend() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->WordPartLeftExtend();
}

// void WordPartRight()
void wxStyledTextCtrl_WordPartRight() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->WordPartRight();
}

// void WordPartRightExtend()
void wxStyledTextCtrl_WordPartRightExtend() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->WordPartRightExtend();
}

// void SetVisiblePolicy(int visiblePolicy, int visibleSlop)
void wxStyledTextCtrl_SetVisiblePolicy() {
    int visibleSlop = (int)wStackPopNumber();
    int visiblePolicy = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetVisiblePolicy(visiblePolicy, visibleSlop);
    wWrapDerefArgs();
}

// void DelLineLeft()
void wxStyledTextCtrl_DelLineLeft() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->DelLineLeft();
}

// void DelLineRight()
void wxStyledTextCtrl_DelLineRight() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->DelLineRight();
}

// void SetXOffset(int newOffset)
void wxStyledTextCtrl_SetXOffset() {
    int newOffset = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetXOffset(newOffset);
    wWrapDerefArgs();
}

// int GetXOffset()
void wxStyledTextCtrl_GetXOffset() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetXOffset();
    wStackPushNumber( (wNumber)returns);
}

// void ChooseCaretX()
void wxStyledTextCtrl_ChooseCaretX() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->ChooseCaretX();
}

// void SetXCaretPolicy(int caretPolicy, int caretSlop)
void wxStyledTextCtrl_SetXCaretPolicy() {
    int caretSlop = (int)wStackPopNumber();
    int caretPolicy = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetXCaretPolicy(caretPolicy, caretSlop);
    wWrapDerefArgs();
}

// void SetYCaretPolicy(int caretPolicy, int caretSlop)
void wxStyledTextCtrl_SetYCaretPolicy() {
    int caretSlop = (int)wStackPopNumber();
    int caretPolicy = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetYCaretPolicy(caretPolicy, caretSlop);
    wWrapDerefArgs();
}

// void SetPrintWrapMode(int mode)
void wxStyledTextCtrl_SetPrintWrapMode() {
    int mode = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetPrintWrapMode(mode);
    wWrapDerefArgs();
}

// int GetPrintWrapMode()
void wxStyledTextCtrl_GetPrintWrapMode() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetPrintWrapMode();
    wStackPushNumber( (wNumber)returns);
}

// void SetHotspotActiveForeground(bool useSetting, const wxColour& fore)
void wxStyledTextCtrl_SetHotspotActiveForeground() {
    wxColour *fore = (wxColour *)wStackPopObjectPtr( _wxColour);
    bool useSetting = (bool)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetHotspotActiveForeground(useSetting, *fore);
    wWrapDerefArgs();
}

// void SetHotspotActiveBackground(bool useSetting, const wxColour& back)
void wxStyledTextCtrl_SetHotspotActiveBackground() {
    wxColour *back = (wxColour *)wStackPopObjectPtr( _wxColour);
    bool useSetting = (bool)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetHotspotActiveBackground(useSetting, *back);
    wWrapDerefArgs();
}

// void SetHotspotActiveUnderline(bool underline)
void wxStyledTextCtrl_SetHotspotActiveUnderline() {
    bool underline = (bool)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetHotspotActiveUnderline(underline);
    wWrapDerefArgs();
}

// int PositionBefore(int pos)
void wxStyledTextCtrl_PositionBefore() {
    int pos = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->PositionBefore(pos);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int PositionAfter(int pos)
void wxStyledTextCtrl_PositionAfter() {
    int pos = (int)wStackPopNumber();
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->PositionAfter(pos);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void CopyRange(int start, int end)
void wxStyledTextCtrl_CopyRange() {
    int end = (int)wStackPopNumber();
    int start = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->CopyRange(start, end);
    wWrapDerefArgs();
}

// void CopyText(int length, const wxString& text)
void wxStyledTextCtrl_CopyText() {
    wxString text = wxString(wStackPopChar(), *wxConvCurrent);
    int length = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->CopyText(length, text);
    wWrapDerefArgs();
}

// void StartRecord()
void wxStyledTextCtrl_StartRecord() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->StartRecord();
}

// void StopRecord()
void wxStyledTextCtrl_StopRecord() {
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->StopRecord();
}

// void SetLexer(int lexer)
void wxStyledTextCtrl_SetLexer() {
    int lexer = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetLexer(lexer);
    wWrapDerefArgs();
}

// int GetLexer()
void wxStyledTextCtrl_GetLexer() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetLexer();
    wStackPushNumber( (wNumber)returns);
}

// void Colourise(int start, int end)
void wxStyledTextCtrl_Colourise() {
    int end = (int)wStackPopNumber();
    int start = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->Colourise(start, end);
    wWrapDerefArgs();
}

// void SetProperty(const wxString& key, const wxString& value)
void wxStyledTextCtrl_SetProperty() {
    wxString value = wxString(wStackPopChar(), *wxConvCurrent);
    wxString key = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetProperty(key, value);
    wWrapDerefArgs();
}

// void SetKeyWords(int keywordSet, const wxString& keyWords)
void wxStyledTextCtrl_SetKeyWords() {
    wxString keyWords = wxString(wStackPopChar(), *wxConvCurrent);
    int keywordSet = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetKeyWords(keywordSet, keyWords);
    wWrapDerefArgs();
}

// void SetLexerLanguage(const wxString& language)
void wxStyledTextCtrl_SetLexerLanguage() {
    wxString language = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetLexerLanguage(language);
    wWrapDerefArgs();
}

// int GetCurrentLine()
void wxStyledTextCtrl_GetCurrentLine() {
    int returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetCurrentLine();
    wStackPushNumber( (wNumber)returns);
}

// void StyleSetSpec(int styleNum, const wxString& spec)
void wxStyledTextCtrl_StyleSetSpec() {
    wxString spec = wxString(wStackPopChar(), *wxConvCurrent);
    int styleNum = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->StyleSetSpec(styleNum, spec);
    wWrapDerefArgs();
}

// void StyleSetFont(int styleNum, wxFont& font)
void wxStyledTextCtrl_StyleSetFont() {
    wxFont *font = (wxFont *)wStackPopObjectPtr( _wxFont);
    int styleNum = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->StyleSetFont(styleNum, *font);
    wWrapDerefArgs();
}

// void StyleSetFontAttr(int styleNum, int size, const wxString& faceName, bool bold, bool italic, bool underline)
void wxStyledTextCtrl_StyleSetFontAttr() {
    bool underline = (bool)wStackPopNumber();
    bool italic = (bool)wStackPopNumber();
    bool bold = (bool)wStackPopNumber();
    wxString faceName = wxString(wStackPopChar(), *wxConvCurrent);
    int size = (int)wStackPopNumber();
    int styleNum = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->StyleSetFontAttr(styleNum, size, faceName, bold, italic, underline);
    wWrapDerefArgs();
}

// void CmdKeyExecute(int cmd)
void wxStyledTextCtrl_CmdKeyExecute() {
    int cmd = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->CmdKeyExecute(cmd);
    wWrapDerefArgs();
}

// void SetMargins(int left, int right)
void wxStyledTextCtrl_SetMargins() {
    int right = (int)wStackPopNumber();
    int left = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SetMargins(left, right);
    wWrapDerefArgs();
}

// void GetSelection(int* startPos, int* endPos)
void wxStyledTextCtrl_GetSelection() {
    int *endPos = (int *)wStackPopObjectPtr( NULL );
    int *startPos = (int *)wStackPopObjectPtr( NULL );
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->GetSelection(startPos, endPos);
    wWrapDerefArgs();
}

// wxPoint PointFromPosition(int pos)
void wxStyledTextCtrl_PointFromPosition() {
    int pos = (int)wStackPopNumber();
    // make a pointer via copy constructor
    wxPoint *returns = new wxPoint(((wxStyledTextCtrl *)(wTheCall->self->ptr))->PointFromPosition(pos));
    wWrapDerefArgs();
    wWrapPushObject( _wxPoint, W_TRUE, (void *)returns );
}

// void ScrollToLine(int line)
void wxStyledTextCtrl_ScrollToLine() {
    int line = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->ScrollToLine(line);
    wWrapDerefArgs();
}

// void ScrollToColumn(int column)
void wxStyledTextCtrl_ScrollToColumn() {
    int column = (int)wStackPopNumber();
    ((wxStyledTextCtrl *)(wTheCall->self->ptr))->ScrollToColumn(column);
    wWrapDerefArgs();
}

// bool SaveFile(const wxString& filename)
void wxStyledTextCtrl_SaveFile() {
    wxString filename = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->SaveFile(filename);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool LoadFile(const wxString& filename)
void wxStyledTextCtrl_LoadFile() {
    wxString filename = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->LoadFile(filename);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool DoDropText(long x, long y, const wxString& data)
void wxStyledTextCtrl_DoDropText() {
    wxString data = wxString(wStackPopChar(), *wxConvCurrent);
    long y = (long)wStackPopNumber();
    long x = (long)wStackPopNumber();
    bool returns = ((wxStyledTextCtrl *)(wTheCall->self->ptr))->DoDropText(x, y, data);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

void wxStyledTextEvent_del()
{
    delete (wxStyledTextEvent *)(wTheCall->self->ptr);
}


// wxStyledTextEvent(wxEventType commandType=0, int id=0);
void wxStyledTextEvent_new() {
    int id = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : 0);
    wxEventType commandType = (wTheCall->parmCount > 0 ? (wxEventType)wStackPopNumber() : 0);
    wxStyledTextEvent *returns = new wxStyledTextEvent(commandType, id);
    wWrapDerefArgs();
    wWrapSetThis( _wxStyledTextEvent, (void *)returns );
}

// ~wxStyledTextEvent()
void wxStyledTextEvent_finalize() {
    ((wxStyledTextEvent *)(wTheCall->self->ptr))->~wxStyledTextEvent();
}

// void SetPosition(int pos)
void wxStyledTextEvent_SetPosition() {
    int pos = (int)wStackPopNumber();
    ((wxStyledTextEvent *)(wTheCall->self->ptr))->SetPosition(pos);
    wWrapDerefArgs();
}

// void SetKey(int k)
void wxStyledTextEvent_SetKey() {
    int k = (int)wStackPopNumber();
    ((wxStyledTextEvent *)(wTheCall->self->ptr))->SetKey(k);
    wWrapDerefArgs();
}

// void SetModifiers(int m)
void wxStyledTextEvent_SetModifiers() {
    int m = (int)wStackPopNumber();
    ((wxStyledTextEvent *)(wTheCall->self->ptr))->SetModifiers(m);
    wWrapDerefArgs();
}

// void SetModificationType(int t)
void wxStyledTextEvent_SetModificationType() {
    int t = (int)wStackPopNumber();
    ((wxStyledTextEvent *)(wTheCall->self->ptr))->SetModificationType(t);
    wWrapDerefArgs();
}

// void SetText(const wxString& t)
void wxStyledTextEvent_SetText() {
    wxString t = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxStyledTextEvent *)(wTheCall->self->ptr))->SetText(t);
    wWrapDerefArgs();
}

// void SetLength(int len)
void wxStyledTextEvent_SetLength() {
    int len = (int)wStackPopNumber();
    ((wxStyledTextEvent *)(wTheCall->self->ptr))->SetLength(len);
    wWrapDerefArgs();
}

// void SetLinesAdded(int num)
void wxStyledTextEvent_SetLinesAdded() {
    int num = (int)wStackPopNumber();
    ((wxStyledTextEvent *)(wTheCall->self->ptr))->SetLinesAdded(num);
    wWrapDerefArgs();
}

// void SetLine(int val)
void wxStyledTextEvent_SetLine() {
    int val = (int)wStackPopNumber();
    ((wxStyledTextEvent *)(wTheCall->self->ptr))->SetLine(val);
    wWrapDerefArgs();
}

// void SetFoldLevelNow(int val)
void wxStyledTextEvent_SetFoldLevelNow() {
    int val = (int)wStackPopNumber();
    ((wxStyledTextEvent *)(wTheCall->self->ptr))->SetFoldLevelNow(val);
    wWrapDerefArgs();
}

// void SetFoldLevelPrev(int val)
void wxStyledTextEvent_SetFoldLevelPrev() {
    int val = (int)wStackPopNumber();
    ((wxStyledTextEvent *)(wTheCall->self->ptr))->SetFoldLevelPrev(val);
    wWrapDerefArgs();
}

// void SetMargin(int val)
void wxStyledTextEvent_SetMargin() {
    int val = (int)wStackPopNumber();
    ((wxStyledTextEvent *)(wTheCall->self->ptr))->SetMargin(val);
    wWrapDerefArgs();
}

// void SetMessage(int val)
void wxStyledTextEvent_SetMessage() {
    int val = (int)wStackPopNumber();
    ((wxStyledTextEvent *)(wTheCall->self->ptr))->SetMessage(val);
    wWrapDerefArgs();
}

// void SetWParam(int val)
void wxStyledTextEvent_SetWParam() {
    int val = (int)wStackPopNumber();
    ((wxStyledTextEvent *)(wTheCall->self->ptr))->SetWParam(val);
    wWrapDerefArgs();
}

// void SetLParam(int val)
void wxStyledTextEvent_SetLParam() {
    int val = (int)wStackPopNumber();
    ((wxStyledTextEvent *)(wTheCall->self->ptr))->SetLParam(val);
    wWrapDerefArgs();
}

// void SetListType(int val)
void wxStyledTextEvent_SetListType() {
    int val = (int)wStackPopNumber();
    ((wxStyledTextEvent *)(wTheCall->self->ptr))->SetListType(val);
    wWrapDerefArgs();
}

// void SetX(int val)
void wxStyledTextEvent_SetX() {
    int val = (int)wStackPopNumber();
    ((wxStyledTextEvent *)(wTheCall->self->ptr))->SetX(val);
    wWrapDerefArgs();
}

// void SetY(int val)
void wxStyledTextEvent_SetY() {
    int val = (int)wStackPopNumber();
    ((wxStyledTextEvent *)(wTheCall->self->ptr))->SetY(val);
    wWrapDerefArgs();
}

// void SetDragText(const wxString& val)
void wxStyledTextEvent_SetDragText() {
    wxString val = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxStyledTextEvent *)(wTheCall->self->ptr))->SetDragText(val);
    wWrapDerefArgs();
}

// void SetDragAllowMove(bool val)
void wxStyledTextEvent_SetDragAllowMove() {
    bool val = (bool)wStackPopNumber();
    ((wxStyledTextEvent *)(wTheCall->self->ptr))->SetDragAllowMove(val);
    wWrapDerefArgs();
}

// int  GetPosition()
void wxStyledTextEvent_GetPosition() {
    int returns = ((wxStyledTextEvent *)(wTheCall->self->ptr))->GetPosition();
    wStackPushNumber( (wNumber)returns);
}

// int  GetKey()
void wxStyledTextEvent_GetKey() {
    int returns = ((wxStyledTextEvent *)(wTheCall->self->ptr))->GetKey();
    wStackPushNumber( (wNumber)returns);
}

// int  GetModifiers()
void wxStyledTextEvent_GetModifiers() {
    int returns = ((wxStyledTextEvent *)(wTheCall->self->ptr))->GetModifiers();
    wStackPushNumber( (wNumber)returns);
}

// int  GetModificationType()
void wxStyledTextEvent_GetModificationType() {
    int returns = ((wxStyledTextEvent *)(wTheCall->self->ptr))->GetModificationType();
    wStackPushNumber( (wNumber)returns);
}

// wxString GetText() const
void wxStyledTextEvent_GetText() {
    wxString returns = ((wxStyledTextEvent *)(wTheCall->self->ptr))->GetText();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// int  GetLength() const
void wxStyledTextEvent_GetLength() {
    int returns = ((wxStyledTextEvent *)(wTheCall->self->ptr))->GetLength();
    wStackPushNumber( (wNumber)returns);
}

// int  GetLinesAdded() const
void wxStyledTextEvent_GetLinesAdded() {
    int returns = ((wxStyledTextEvent *)(wTheCall->self->ptr))->GetLinesAdded();
    wStackPushNumber( (wNumber)returns);
}

// int  GetLine() const
void wxStyledTextEvent_GetLine() {
    int returns = ((wxStyledTextEvent *)(wTheCall->self->ptr))->GetLine();
    wStackPushNumber( (wNumber)returns);
}

// int  GetFoldLevelNow() const
void wxStyledTextEvent_GetFoldLevelNow() {
    int returns = ((wxStyledTextEvent *)(wTheCall->self->ptr))->GetFoldLevelNow();
    wStackPushNumber( (wNumber)returns);
}

// int  GetFoldLevelPrev() const
void wxStyledTextEvent_GetFoldLevelPrev() {
    int returns = ((wxStyledTextEvent *)(wTheCall->self->ptr))->GetFoldLevelPrev();
    wStackPushNumber( (wNumber)returns);
}

// int  GetMargin() const
void wxStyledTextEvent_GetMargin() {
    int returns = ((wxStyledTextEvent *)(wTheCall->self->ptr))->GetMargin();
    wStackPushNumber( (wNumber)returns);
}

// int  GetMessage() const
void wxStyledTextEvent_GetMessage() {
    int returns = ((wxStyledTextEvent *)(wTheCall->self->ptr))->GetMessage();
    wStackPushNumber( (wNumber)returns);
}

// int  GetWParam() const
void wxStyledTextEvent_GetWParam() {
    int returns = ((wxStyledTextEvent *)(wTheCall->self->ptr))->GetWParam();
    wStackPushNumber( (wNumber)returns);
}

// int  GetLParam() const
void wxStyledTextEvent_GetLParam() {
    int returns = ((wxStyledTextEvent *)(wTheCall->self->ptr))->GetLParam();
    wStackPushNumber( (wNumber)returns);
}

// int  GetListType() const
void wxStyledTextEvent_GetListType() {
    int returns = ((wxStyledTextEvent *)(wTheCall->self->ptr))->GetListType();
    wStackPushNumber( (wNumber)returns);
}

// int  GetX() const
void wxStyledTextEvent_GetX() {
    int returns = ((wxStyledTextEvent *)(wTheCall->self->ptr))->GetX();
    wStackPushNumber( (wNumber)returns);
}

// int  GetY() const
void wxStyledTextEvent_GetY() {
    int returns = ((wxStyledTextEvent *)(wTheCall->self->ptr))->GetY();
    wStackPushNumber( (wNumber)returns);
}

// wxString GetDragText()
void wxStyledTextEvent_GetDragText() {
    wxString returns = ((wxStyledTextEvent *)(wTheCall->self->ptr))->GetDragText();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// bool GetDragAllowMove()
void wxStyledTextEvent_GetDragAllowMove() {
    bool returns = ((wxStyledTextEvent *)(wTheCall->self->ptr))->GetDragAllowMove();
    wStackPushNumber( (wNumber)returns);
}

// bool GetShift()
void wxStyledTextEvent_GetShift() {
    bool returns = ((wxStyledTextEvent *)(wTheCall->self->ptr))->GetShift();
    wStackPushNumber( (wNumber)returns);
}

// bool GetControl()
void wxStyledTextEvent_GetControl() {
    bool returns = ((wxStyledTextEvent *)(wTheCall->self->ptr))->GetControl();
    wStackPushNumber( (wNumber)returns);
}

// bool GetAlt()
void wxStyledTextEvent_GetAlt() {
    bool returns = ((wxStyledTextEvent *)(wTheCall->self->ptr))->GetAlt();
    wStackPushNumber( (wNumber)returns);
}

// virtual wxEvent* Clone()
void wxStyledTextEvent_Clone() {
    wxEvent *returns = ((wxStyledTextEvent *)(wTheCall->self->ptr))->Clone();
    wWrapPushObject( _wxEvent, W_TRUE, (void *)returns );
}

void wxDir_del()
{
    delete (wxDir *)(wTheCall->self->ptr);
}


// wxDir()
void wxDir_new() {
    wxDir *returns = new wxDir();
    wWrapSetThis( _wxDir, (void *)returns );
}

// ~wxDir()
void wxDir_finalize() {
    ((wxDir *)(wTheCall->self->ptr))->~wxDir();
}

// static bool Exists(const wxString& dir)
void wxDir_Exists() {
    wxString dir = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = ((wxDir *)(wTheCall->self->ptr))->Exists(dir);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool Open(const wxString& dir)
void wxDir_Open() {
    wxString dir = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = ((wxDir *)(wTheCall->self->ptr))->Open(dir);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool IsOpened() const
void wxDir_IsOpened() {
    bool returns = ((wxDir *)(wTheCall->self->ptr))->IsOpened();
    wStackPushNumber( (wNumber)returns);
}

	// char *GetFirst(const wxString& filespec = wxEmptyString, int flags = wxDIR_DEFAULT) const
void wxDir_GetFirst()
	{
		// int flags		
		int flags = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : wxDIR_DEFAULT );
	
		// const wxString& value = wxEmptyString
    wxString filespec = (wTheCall->parmCount > 0 ? wStackPopChar() : wxEmptyString);
		
    // allocate string to hold the result
    wxString filename = wxString();
		
		// call wxDir::GetFirst
    ((wxDir *)wTheCall->self->ptr)->GetFirst(&filename, filespec, flags);
		
		wWrapDerefArgs();
    wStackPushChar( (char *)(filename.c_str()), W_TRUE );    
	}
// char *GetNext()
void wxDir_GetNext()
	{
    // allocate string to hold the result
    wxString filename = wxString();
		
    // call wxDir::GetNext
    ((wxDir *)wTheCall->self->ptr)->GetNext(&filename);
		
		wWrapDerefArgs();
    wStackPushChar( (char *)(filename.c_str()), W_TRUE );    
	}
// bool HasFiles(const wxString& filespec = wxEmptyString)
void wxDir_HasFiles() {
    wxString filespec = wxString((wTheCall->parmCount > 0 ? wStackPopChar() : wxEmptyString), *wxConvCurrent);
    bool returns = ((wxDir *)(wTheCall->self->ptr))->HasFiles(filespec);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool HasSubDirs(const wxString& dirspec = wxEmptyString)
void wxDir_HasSubDirs() {
    wxString dirspec = wxString((wTheCall->parmCount > 0 ? wStackPopChar() : wxEmptyString), *wxConvCurrent);
    bool returns = ((wxDir *)(wTheCall->self->ptr))->HasSubDirs(dirspec);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

void wxStreamBase_del()
{
    delete (wxStreamBase *)(wTheCall->self->ptr);
}


// wxStreamBase()
void wxStreamBase_new() {
    wxStreamBase *returns = new wxStreamBase();
    wWrapSetThis( _wxStreamBase, (void *)returns );
}

// ~wxStreamBase()
void wxStreamBase_finalize() {
    ((wxStreamBase *)(wTheCall->self->ptr))->~wxStreamBase();
}

// int IsOk() const
void wxStreamBase_IsOk() {
    int returns = ((wxStreamBase *)(wTheCall->self->ptr))->IsOk();
    wStackPushNumber( (wNumber)returns);
}

// int LastError() const
void wxStreamBase_LastError() {
    int returns = ((wxStreamBase *)(wTheCall->self->ptr))->LastError();
    wStackPushNumber( (wNumber)returns);
}

// size_t GetSize() const
void wxStreamBase_GetSize() {
    size_t returns = ((wxStreamBase *)(wTheCall->self->ptr))->GetSize();
    wStackPushNumber( (wNumber)returns);
}

void wxInputStream_del()
{
    delete (wxInputStream *)(wTheCall->self->ptr);
}


// char GetC()
void wxInputStream_GetC() {
    char returns = ((wxInputStream *)(wTheCall->self->ptr))->GetC();
    wStackPushNumber( (wNumber)returns);
}

// boolean Eof() const
void wxInputStream_Eof() {
    boolean returns = ((wxInputStream *)(wTheCall->self->ptr))->Eof();
    wStackPushNumber( (wNumber)returns);
}

// size_t LastRead() const
void wxInputStream_LastRead() {
    size_t returns = ((wxInputStream *)(wTheCall->self->ptr))->LastRead();
    wStackPushNumber( (wNumber)returns);
}

// char Peek()
void wxInputStream_Peek() {
    char returns = ((wxInputStream *)(wTheCall->self->ptr))->Peek();
    wStackPushNumber( (wNumber)returns);
}

// void Read(void * buffer, size_t size)
void wxInputStream_Read()
{
    // the number of bytes
    int size = (int)wStackPopNumber();

    // allocate a buffer of the requested size
    void *buffer = wMalloc( size );

    // call Read
    ((wxInputStream*)(wTheCall->self->ptr))->Read(buffer, size);

    // clear the args
    wWrapDerefArgs();

    // wrap the buffer into a string
    wStackPushChar( (char *)(buffer), W_TRUE );

    // free the buffer
    wFree( buffer );
}

// off_t SeekI(off_t pos, wxSeekMode mode = wxFromStart)
void wxInputStream_SeekI() {
    wxSeekMode mode = (wTheCall->parmCount > 1 ? (wxSeekMode)wStackPopNumber() : wxFromStart);
    off_t pos = (off_t)wStackPopNumber();
    off_t returns = ((wxInputStream *)(wTheCall->self->ptr))->SeekI(pos, mode);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// off_t TellI() const
void wxInputStream_TellI() {
    off_t returns = ((wxInputStream *)(wTheCall->self->ptr))->TellI();
    wStackPushNumber( (wNumber)returns);
}

void wxOutputStream_del()
{
    delete (wxOutputStream *)(wTheCall->self->ptr);
}


// wxOutputStream()
void wxOutputStream_new() {
    wxOutputStream *returns = new wxOutputStream();
    wWrapSetThis( _wxOutputStream, (void *)returns );
}

// ~wxOutputStream()
void wxOutputStream_finalize() {
    ((wxOutputStream *)(wTheCall->self->ptr))->~wxOutputStream();
}

// size_t LastWrite() const
void wxOutputStream_LastWrite() {
    size_t returns = ((wxOutputStream *)(wTheCall->self->ptr))->LastWrite();
    wStackPushNumber( (wNumber)returns);
}

// void PutC(char c)
void wxOutputStream_PutC() {
    char c = (char)wStackPopNumber();
    ((wxOutputStream *)(wTheCall->self->ptr))->PutC(c);
    wWrapDerefArgs();
}

// off_t SeekO(off_t pos, wxSeekMode mode)
void wxOutputStream_SeekO() {
    wxSeekMode mode = (wxSeekMode)wStackPopNumber();
    off_t pos = (off_t)wStackPopNumber();
    off_t returns = ((wxOutputStream *)(wTheCall->self->ptr))->SeekO(pos, mode);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// off_t TellO() const
void wxOutputStream_TellO() {
    off_t returns = ((wxOutputStream *)(wTheCall->self->ptr))->TellO();
    wStackPushNumber( (wNumber)returns);
}

// wxOutputStream& Write(const void *buffer, size_t size)
void wxOutputStream_Write()
{
    // get pointer to the string
    wVariant *theString = wStackPopString();
    int nbytes = wStringCount( theString );
    void *buffer = (void *)wStringChar( theString );

    // call Write
    ((wxOutputStream *)(wTheCall->self->ptr))->Write(buffer, nbytes);

    // clear the args
    wWrapDerefArgs();
}

// void WriteFromStream(wxInputStream& stream_in)
void wxOutputStream_WriteFromStream()
{
    // get the input stream
    wxInputStream *stream_in = (wxInputStream *)wStackPopObjectPtr( _wxInputStream );

    // call Write
    ((wxOutputStream *)(wTheCall->self->ptr))->Write(*stream_in);

    // clear the args
    wWrapDerefArgs();
}
void wxSocketBase_del()
{
    delete (wxSocketBase *)(wTheCall->self->ptr);
}


// wxSocketBase()
void wxSocketBase_new() {
    wxSocketBase *returns = new wxSocketBase();
    wWrapSetThis( _wxSocketBase, (void *)returns );
}

// ~wxSocketBase()
void wxSocketBase_finalize() {
    ((wxSocketBase *)(wTheCall->self->ptr))->~wxSocketBase();
}

// void Close()
void wxSocketBase_Close() {
    ((wxSocketBase *)(wTheCall->self->ptr))->Close();
}

// bool Destroy()
void wxSocketBase_Destroy() {
    bool returns = ((wxSocketBase *)(wTheCall->self->ptr))->Destroy();
    wStackPushNumber( (wNumber)returns);
}

// bool Error() const
void wxSocketBase_Error() {
    bool returns = ((wxSocketBase *)(wTheCall->self->ptr))->Error();
    wStackPushNumber( (wNumber)returns);
}

// void * GetClientData() const
void wxSocketBase_GetClientData() {
    ((wxSocketBase *)(wTheCall->self->ptr))->GetClientData();
}

void wxSocketBase_GetLocal()
{
    wxSockAddress *returns;
    ((wxSocketBase *)wTheCall->self->ptr)->GetLocal(*returns);
    wWrapDerefArgs();
    wWrapSetThis( _wxSocketBase, (void *)returns );        
}
// int GetFlags() const
void wxSocketBase_GetFlags() {
    int returns = ((wxSocketBase *)(wTheCall->self->ptr))->GetFlags();
    wStackPushNumber( (wNumber)returns);
}

void wxSocketBase_GetPeer()
{
    wxSockAddress *returns;
    ((wxSocketBase *)wTheCall->self->ptr)->GetPeer(*returns);
    wWrapDerefArgs();
    wWrapSetThis( _wxSocketBase, (void *)returns );        
}
// void InterruptWait()
void wxSocketBase_InterruptWait() {
    ((wxSocketBase *)(wTheCall->self->ptr))->InterruptWait();
}

// bool IsConnected() const
void wxSocketBase_IsConnected() {
    bool returns = ((wxSocketBase *)(wTheCall->self->ptr))->IsConnected();
    wStackPushNumber( (wNumber)returns);
}

// bool IsData() const
void wxSocketBase_IsData() {
    bool returns = ((wxSocketBase *)(wTheCall->self->ptr))->IsData();
    wStackPushNumber( (wNumber)returns);
}

// bool IsDisconnected() const
void wxSocketBase_IsDisconnected() {
    bool returns = ((wxSocketBase *)(wTheCall->self->ptr))->IsDisconnected();
    wStackPushNumber( (wNumber)returns);
}

// unsigned int LastCount() const
void wxSocketBase_LastCount() {
    unsigned int returns = ((wxSocketBase *)(wTheCall->self->ptr))->LastCount();
    wStackPushNumber( (wNumber)returns);
}

// int LastError() const
void wxSocketBase_LastError() {
    int returns = ((wxSocketBase *)(wTheCall->self->ptr))->LastError();
    wStackPushNumber( (wNumber)returns);
}

// void Notify(bool notify)
void wxSocketBase_Notify() {
    bool notify = (bool)wStackPopNumber();
    ((wxSocketBase *)(wTheCall->self->ptr))->Notify(notify);
    wWrapDerefArgs();
}

// bool Ok() const
void wxSocketBase_Ok() {
    bool returns = ((wxSocketBase *)(wTheCall->self->ptr))->Ok();
    wStackPushNumber( (wNumber)returns);
}

// void RestoreState()
void wxSocketBase_RestoreState() {
    ((wxSocketBase *)(wTheCall->self->ptr))->RestoreState();
}

// void SaveState()
void wxSocketBase_SaveState() {
    ((wxSocketBase *)(wTheCall->self->ptr))->SaveState();
}

// void SetClientData(void *data)
void wxSocketBase_SetClientData() {
    void *data = (void *)wStackPopObjectPtr( NULL );
    ((wxSocketBase *)(wTheCall->self->ptr))->SetClientData(data);
    wWrapDerefArgs();
}

// void SetEventHandler(wxEvtHandler& handler, int id = -1)
void wxSocketBase_SetEventHandler() {
    int id = (wTheCall->parmCount > 1 ? (int)wStackPopNumber() : -1);
    wxEvtHandler *handler = (wxEvtHandler *)wStackPopObjectPtr( _wxEvtHandler);
    ((wxSocketBase *)(wTheCall->self->ptr))->SetEventHandler(*handler, id);
    wWrapDerefArgs();
}

// void SetFlags(int flags)
void wxSocketBase_SetFlags() {
    int flags = (int)wStackPopNumber();
    ((wxSocketBase *)(wTheCall->self->ptr))->SetFlags(flags);
    wWrapDerefArgs();
}

// void SetNotify(int flags)
void wxSocketBase_SetNotify() {
    int flags = (int)wStackPopNumber();
    ((wxSocketBase *)(wTheCall->self->ptr))->SetNotify(flags);
    wWrapDerefArgs();
}

// void SetTimeout(int seconds)
void wxSocketBase_SetTimeout() {
    int seconds = (int)wStackPopNumber();
    ((wxSocketBase *)(wTheCall->self->ptr))->SetTimeout(seconds);
    wWrapDerefArgs();
}

// wxSocketBase Peek(void * buffer, wxUint32 nbytes)
void wxSocketBase_Peek()
{
    // get the number of bytes
    int nbytes = (int)wStackPopNumber();

    // allocate a buffer of the requested size
    void *buffer = wMalloc( nbytes );

    // call Peek    
    ((wxSocketBase *)(wTheCall->self->ptr))->Peek(buffer, nbytes);

    // clear the args
    wWrapDerefArgs();

    // wrap the buffer into a string
    wStackPushChar( (char *)(buffer), W_TRUE );

    // free the buffer
    wFree( buffer );
}

// wxSocketBase Read(void * buffer, wxUint32 nbytes)
void wxSocketBase_Read()
{
    // get the number of bytes
    int nbytes = (int)wStackPopNumber();

    // allocate a buffer of the requested size
    void *buffer = wMalloc( nbytes );

    // call Read
    ((wxSocketBase *)(wTheCall->self->ptr))->Read(buffer, nbytes);

    // clear the args
    wWrapDerefArgs();

    // wrap the buffer into a string
    wStackPushChar( (char *)(buffer), W_TRUE );

    // free the buffer
    wFree( buffer );
}


// wxSocketBase ReadMsg(void * buffer, wxUint32 nbytes)
void wxSocketBase_ReadMsg()
{
    // get the number of bytes
    int nbytes = (int)wStackPopNumber();

    // allocate a buffer of the requested size
    void *buffer = wMalloc( nbytes );

    // call ReadMsg
    ((wxSocketBase *)(wTheCall->self->ptr))->ReadMsg(buffer, nbytes);

    // clear the args
    wWrapDerefArgs();

    // wrap the buffer into a string
    wStackPushChar( (char *)(buffer), W_TRUE );

    // free the buffer
    wFree( buffer );
}

// bool Wait(long seconds = -1, long millisecond = 0)
void wxSocketBase_Wait() {
    long millisecond = (wTheCall->parmCount > 1 ? (long)wStackPopNumber() : 0);
    long seconds = (wTheCall->parmCount > 0 ? (long)wStackPopNumber() : -1);
    bool returns = ((wxSocketBase *)(wTheCall->self->ptr))->Wait(seconds, millisecond);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool WaitForLost(long seconds = -1, long millisecond = 0)
void wxSocketBase_WaitForLost() {
    long millisecond = (wTheCall->parmCount > 1 ? (long)wStackPopNumber() : 0);
    long seconds = (wTheCall->parmCount > 0 ? (long)wStackPopNumber() : -1);
    bool returns = ((wxSocketBase *)(wTheCall->self->ptr))->WaitForLost(seconds, millisecond);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool WaitForRead(long seconds = -1, long millisecond = 0)
void wxSocketBase_WaitForRead() {
    long millisecond = (wTheCall->parmCount > 1 ? (long)wStackPopNumber() : 0);
    long seconds = (wTheCall->parmCount > 0 ? (long)wStackPopNumber() : -1);
    bool returns = ((wxSocketBase *)(wTheCall->self->ptr))->WaitForRead(seconds, millisecond);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool WaitForWrite(long seconds = -1, long millisecond = 0)
void wxSocketBase_WaitForWrite() {
    long millisecond = (wTheCall->parmCount > 1 ? (long)wStackPopNumber() : 0);
    long seconds = (wTheCall->parmCount > 0 ? (long)wStackPopNumber() : -1);
    bool returns = ((wxSocketBase *)(wTheCall->self->ptr))->WaitForWrite(seconds, millisecond);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void Write(void * buffer, wxUint32 nbytes)
void wxSocketBase_Write()
{
    // get the string
    wVariant *theString = wStackPopString();
    int nbytes = wStringCount( theString );
    void *buffer = (void *)wStringChar( theString );

    // call Write
    ((wxSocketBase *)(wTheCall->self->ptr))->Write(buffer, nbytes);

    // clear the args
    wWrapDerefArgs();
}

// void WriteMsg(void * buffer, wxUint32 nbytes)
void wxSocketBase_WriteMsg()
{
    // get the string
    wVariant *theString = wStackPopString();
    int nbytes = wStringCount( theString );
    void *buffer = (void *)wStringChar( theString );

    // call Write
    ((wxSocketBase *)(wTheCall->self->ptr))->WriteMsg(buffer, nbytes);

    // clear the args
    wWrapDerefArgs();
}
void wxSocketClient_del()
{
    delete (wxSocketClient *)(wTheCall->self->ptr);
}


// wxSocketClient(wxSocketFlags flags = wxSOCKET_NONE)
void wxSocketClient_new() {
    wxSocketFlags flags = (wTheCall->parmCount > 0 ? (wxSocketFlags)wStackPopNumber() : wxSOCKET_NONE);
    wxSocketClient *returns = new wxSocketClient(flags);
    wWrapDerefArgs();
    wWrapSetThis( _wxSocketClient, (void *)returns );
}

// ~wxSocketClient()
void wxSocketClient_finalize() {
    ((wxSocketClient *)(wTheCall->self->ptr))->~wxSocketClient();
}

// bool Connect(wxSockAddress& address, bool wait = TRUE)
void wxSocketClient_Connect() {
    bool wait = (wTheCall->parmCount > 1 ? (bool)wStackPopNumber() : TRUE);
    wxSockAddress *address = (wxSockAddress *)wStackPopObjectPtr( _wxSockAddress);
    bool returns = ((wxSocketClient *)(wTheCall->self->ptr))->Connect(*address, wait);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool WaitOnConnect(long seconds = -1, long milliseconds = 0)
void wxSocketClient_WaitOnConnect() {
    long milliseconds = (wTheCall->parmCount > 1 ? (long)wStackPopNumber() : 0);
    long seconds = (wTheCall->parmCount > 0 ? (long)wStackPopNumber() : -1);
    bool returns = ((wxSocketClient *)(wTheCall->self->ptr))->WaitOnConnect(seconds, milliseconds);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

void wxProtocol_del()
{
    delete (wxProtocol *)(wTheCall->self->ptr);
}


// bool Reconnect()
void wxProtocol_Reconnect() {
    bool returns = ((wxProtocol *)(wTheCall->self->ptr))->Reconnect();
    wStackPushNumber( (wNumber)returns);
}

// wxInputStream *GetInputStream(const wxString& path)
void wxProtocol_GetInputStream() {
    wxString path = wxString(wStackPopChar(), *wxConvCurrent);
    wxInputStream *returns = ((wxProtocol *)(wTheCall->self->ptr))->GetInputStream(path);
    wWrapDerefArgs();
    wWrapPushObject( _wxInputStream, W_TRUE, (void *)returns );
}

// bool Abort()
void wxProtocol_Abort() {
    bool returns = ((wxProtocol *)(wTheCall->self->ptr))->Abort();
    wStackPushNumber( (wNumber)returns);
}

// wxString GetContentType()
void wxProtocol_GetContentType() {
    wxString returns = ((wxProtocol *)(wTheCall->self->ptr))->GetContentType();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// void  SetUser(const wxString& user)
void wxProtocol_SetUser() {
    wxString user = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxProtocol *)(wTheCall->self->ptr))->SetUser(user);
    wWrapDerefArgs();
}

// void SetPassword(const wxString& user)
void wxProtocol_SetPassword() {
    wxString user = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxProtocol *)(wTheCall->self->ptr))->SetPassword(user);
    wWrapDerefArgs();
}

void wxFTP_del()
{
    delete (wxFTP *)(wTheCall->self->ptr);
}


// wxFTP()
void wxFTP_new() {
    wxFTP *returns = new wxFTP();
    wWrapSetThis( _wxFTP, (void *)returns );
}

// ~wxFTP()
void wxFTP_finalize() {
    ((wxFTP *)(wTheCall->self->ptr))->~wxFTP();
}

// bool Abort()
void wxFTP_Abort() {
    bool returns = ((wxFTP *)(wTheCall->self->ptr))->Abort();
    wStackPushNumber( (wNumber)returns);
}

// bool CheckCommand(const wxString& command, char ret)
void wxFTP_CheckCommand() {
    char ret = (char)wStackPopNumber();
    wxString command = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = ((wxFTP *)(wTheCall->self->ptr))->CheckCommand(command, ret);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool Connect(const wxString& host)
void wxFTP_Connect() {
    wxString host = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = ((wxFTP *)(wTheCall->self->ptr))->Connect(host);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// char SendCommand(const wxString& command)
void wxFTP_SendCommand() {
    wxString command = wxString(wStackPopChar(), *wxConvCurrent);
    char returns = ((wxFTP *)(wTheCall->self->ptr))->SendCommand(command);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// const wxString& GetLastResult()
void wxFTP_GetLastResult() {
    const wxString *returns = &((wxFTP *)(wTheCall->self->ptr))->GetLastResult();
    wStackPushChar( (char *)(returns->c_str()), W_TRUE );
}

// bool ChDir(const wxString& dir)
void wxFTP_ChDir() {
    wxString dir = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = ((wxFTP *)(wTheCall->self->ptr))->ChDir(dir);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool MkDir(const wxString& dir)
void wxFTP_MkDir() {
    wxString dir = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = ((wxFTP *)(wTheCall->self->ptr))->MkDir(dir);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool RmDir(const wxString& dir)
void wxFTP_RmDir() {
    wxString dir = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = ((wxFTP *)(wTheCall->self->ptr))->RmDir(dir);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// wxString Pwd()
void wxFTP_Pwd() {
    wxString returns = ((wxFTP *)(wTheCall->self->ptr))->Pwd();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// bool Rename(const wxString& src, const wxString& dst)
void wxFTP_Rename() {
    wxString dst = wxString(wStackPopChar(), *wxConvCurrent);
    wxString src = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = ((wxFTP *)(wTheCall->self->ptr))->Rename(src, dst);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool RmFile(const wxString& path)
void wxFTP_RmFile() {
    wxString path = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = ((wxFTP *)(wTheCall->self->ptr))->RmFile(path);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// bool SetAscii()
void wxFTP_SetAscii() {
    bool returns = ((wxFTP *)(wTheCall->self->ptr))->SetAscii();
    wStackPushNumber( (wNumber)returns);
}

// bool SetBinary()
void wxFTP_SetBinary() {
    bool returns = ((wxFTP *)(wTheCall->self->ptr))->SetBinary();
    wStackPushNumber( (wNumber)returns);
}

// bool SetTransferMode(int mode)
void wxFTP_SetTransferMode() {
    int mode = (int)wStackPopNumber();
    bool returns = ((wxFTP *)(wTheCall->self->ptr))->SetTransferMode(mode);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// void SetUser(const wxString& user)
void wxFTP_SetUser() {
    wxString user = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxFTP *)(wTheCall->self->ptr))->SetUser(user);
    wWrapDerefArgs();
}

// void SetPassword(const wxString& passwd)
void wxFTP_SetPassword() {
    wxString passwd = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxFTP *)(wTheCall->self->ptr))->SetPassword(passwd);
    wWrapDerefArgs();
}

// bool FileExists(const wxString& filename)
void wxFTP_FileExists() {
    wxString filename = wxString(wStackPopChar(), *wxConvCurrent);
    bool returns = ((wxFTP *)(wTheCall->self->ptr))->FileExists(filename);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// int GetFileSize(const wxString& filename)
void wxFTP_GetFileSize() {
    wxString filename = wxString(wStackPopChar(), *wxConvCurrent);
    int returns = ((wxFTP *)(wTheCall->self->ptr))->GetFileSize(filename);
    wWrapDerefArgs();
    wStackPushNumber( (wNumber)returns);
}

// wxOutputStream * GetOutputStream(const wxString& file)
void wxFTP_GetOutputStream() {
    wxString file = wxString(wStackPopChar(), *wxConvCurrent);
    wxOutputStream *returns = ((wxFTP *)(wTheCall->self->ptr))->GetOutputStream(file);
    wWrapDerefArgs();
    wWrapPushObject( _wxOutputStream, W_TRUE, (void *)returns );
}

// wxInputStream * GetInputStream(const wxString& path)
void wxFTP_GetInputStream() {
    wxString path = wxString(wStackPopChar(), *wxConvCurrent);
    wxInputStream *returns = ((wxFTP *)(wTheCall->self->ptr))->GetInputStream(path);
    wWrapDerefArgs();
    wWrapPushObject( _wxInputStream, W_TRUE, (void *)returns );
}

void wxHTTP_del()
{
    delete (wxHTTP *)(wTheCall->self->ptr);
}


// wxInputStream * GetInputStream(const wxString& path)
void wxHTTP_GetInputStream() {
    wxString path = wxString(wStackPopChar(), *wxConvCurrent);
    wxInputStream *returns = ((wxHTTP *)(wTheCall->self->ptr))->GetInputStream(path);
    wWrapDerefArgs();
    wWrapPushObject( _wxInputStream, W_TRUE, (void *)returns );
}

// void SetHeader(const wxString& header, const wxString& h_data)
void wxHTTP_SetHeader() {
    wxString h_data = wxString(wStackPopChar(), *wxConvCurrent);
    wxString header = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxHTTP *)(wTheCall->self->ptr))->SetHeader(header, h_data);
    wWrapDerefArgs();
}

// wxString GetHeader(const wxString& header)
void wxHTTP_GetHeader() {
    wxString header = wxString(wStackPopChar(), *wxConvCurrent);
    wxString returns = ((wxHTTP *)(wTheCall->self->ptr))->GetHeader(header);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

void wxURL_del()
{
    delete (wxURL *)(wTheCall->self->ptr);
}


// wxURL(const wxString& url)
void wxURL_new() {
    wxString url = wxString(wStackPopChar(), *wxConvCurrent);
    wxURL *returns = new wxURL(url);
    wWrapDerefArgs();
    wWrapSetThis( _wxURL, (void *)returns );
}

// ~wxURL()
void wxURL_finalize() {
    ((wxURL *)(wTheCall->self->ptr))->~wxURL();
}

// wxString GetProtocolName() const
void wxURL_GetProtocolName() {
    wxString returns = ((wxURL *)(wTheCall->self->ptr))->GetProtocolName();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// wxProtocol& GetProtocol()
void wxURL_GetProtocol() {
    wxProtocol *returns = &((wxURL *)(wTheCall->self->ptr))->GetProtocol();
    wWrapPushObject( _wxProtocol, W_TRUE, (void *)returns );
}

// wxString GetPath()
void wxURL_GetPath() {
    wxString returns = ((wxURL *)(wTheCall->self->ptr))->GetPath();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}

// int GetError() const
void wxURL_GetError() {
    int returns = ((wxURL *)(wTheCall->self->ptr))->GetError();
    wStackPushNumber( (wNumber)returns);
}

// wxInputStream * GetInputStream()
void wxURL_GetInputStream() {
    wxInputStream *returns = ((wxURL *)(wTheCall->self->ptr))->GetInputStream();
    wWrapPushObject( _wxInputStream, W_TRUE, (void *)returns );
}

// static void SetDefaultProxy(const wxString& url_proxy)
void wxURL_SetDefaultProxy() {
    wxString url_proxy = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxURL *)(wTheCall->self->ptr))->SetDefaultProxy(url_proxy);
    wWrapDerefArgs();
}

// void SetProxy(const wxString& url_proxy)
void wxURL_SetProxy() {
    wxString url_proxy = wxString(wStackPopChar(), *wxConvCurrent);
    ((wxURL *)(wTheCall->self->ptr))->SetProxy(url_proxy);
    wWrapDerefArgs();
}

// static wxString ConvertToValidURI(const wxString& uri)
void wxURL_ConvertToValidURI() {
    wxString uri = wxString(wStackPopChar(), *wxConvCurrent);
    wxString returns = ((wxURL *)(wTheCall->self->ptr))->ConvertToValidURI(uri);
    wWrapDerefArgs();
    wStackPushChar( (char *)(returns.c_str()), W_TRUE );
}
// wInitWrappers: link methods to classes
void wInitWrappers()
{    _wxResourceTable = wWrapClass( 0, 0, "wxresourcetable" );
    _wxAcceleratorTable = wWrapClass( 0, 0, "wxacceleratortable" );
    _wxArrayInt = wWrapClass( 0, 0, "wxarrayint" );
    _wxArrayTreeItemIds = wWrapClass( 0, 0, "wxarraytreeitemids" );
    _wxCalendarDateAttr = wWrapClass( 0, 0, "wxcalendardateattr" );
    _wxCaret = wWrapClass( 0, 0, "wxcaret" );
    _wxClassInfo = wWrapClass( 0, 0, "wxclassinfo" );
    _wxDateSpan = wWrapClass( 0, 0, "wxdatespan" );
    _wxDropTarget = wWrapClass( 0, 0, "wxdroptarget" );
    _wxIcon = wWrapClass( 0, 0, "wxicon" );
    _wxLog = wWrapClass( 0, 0, "wxlog" );
    _wxMDIClientWindow = wWrapClass( 0, 0, "wxmdiclientwindow" );
    _wxMenuItemList = wWrapClass( 0, 0, "wxmenuitemlist" );
    _wxObjectRefData = wWrapClass( 0, 0, "wxobjectrefdata" );
    _wxPrintDialogData = wWrapClass( 0, 0, "wxprintdialogdata" );
    _wxRegion = wWrapClass( 0, 0, "wxregion" );
    _wxRect = wWrapClass( 0, 0, "wxrect" );
    _wxToolTip = wWrapClass( 0, 0, "wxtooltip" );
    _wxTreeItemData = wWrapClass( 0, 0, "wxtreeitemdata" );
    _wxTreeItemId = wWrapClass( 0, 0, "wxtreeitemid" );
    _wxValidator = wWrapClass( 0, 0, "wxvalidator" );
    _wxWindowList = wWrapClass( 0, 0, "wxwindowlist" );
    _wxMask = wWrapClass( 0, 0, "wxmask" );
    _wxProcess = wWrapClass( 0, 0, "wxprocess" );
    _wxImageHandler = wWrapClass( 0, 0, "wximagehandler" );
    _wxGridTableBase = wWrapClass( 0, 0, "wxgridtablebase" );
    _wxConfigBase = wWrapClass( 0, 0, "wxconfigbase" );
    _wxHtmlHelpData = wWrapClass( 0, 0, "wxhtmlhelpdata" );
    _wxMemoryBuffer = wWrapClass( 0, 0, "wxmemorybuffer" );
    _wxNodeBase = wWrapClass( 0, 0, "wxnodebase" );
    _wxSockAddress = wWrapClass( 0, 0, "wxsockaddress" );
    _wxTimeSpan = wWrapClass( 0, 0, "wxtimespan" );
    _wxLocale = wWrapClass( 0, 0, "wxlocale" );
    _wxObject = wWrapClass( 0, 0, "wxobject" );
    _wxNode = wWrapClass( 0, 0, "wxnode" );
    _wxList = wWrapClass( 0, _wxObject, "wxlist" );
    _wxListKey = wWrapClass( 0, _wxList, "wxlistkey" );
    _wxDataFormat = wWrapClass( 0, 0, "wxdataformat" );
    _wxTipProvider = wWrapClass( 0, 0, "wxtipprovider" );
    _wxPoint = wWrapClass( 0, 0, "wxpoint" );
    _wxSize = wWrapClass( 0, 0, "wxsize" );
    _wxColourData = wWrapClass( 0, _wxObject, "wxcolourdata" );
    _wxColour = wWrapClass( 0, _wxObject, "wxcolour" );
    _wxColor = wWrapClass( 0, _wxColour, "wxcolor" );
    _wxGDIObject = wWrapClass( 0, _wxObject, "wxgdiobject" );
    _wxPen = wWrapClass( 0, _wxGDIObject, "wxpen" );
    _wxPenFromColour = wWrapClass( 0, _wxPen, "wxpenfromcolour" );
    _wxPenFromColor = wWrapClass( 0, _wxPen, "wxpenfromcolor" );
    _wxPenFromColourName = wWrapClass( 0, _wxPen, "wxpenfromcolourname" );
    _wxPenFromColorName = wWrapClass( 0, _wxPen, "wxpenfromcolorname" );
    _wxPenCopy = wWrapClass( 0, _wxPen, "wxpencopy" );
    _wxPalette = wWrapClass( 0, _wxGDIObject, "wxpalette" );
    _wxBrush = wWrapClass( 0, _wxGDIObject, "wxbrush" );
    _wxBrushFromColourName = wWrapClass( 0, _wxBrush, "wxbrushfromcolourname" );
    _wxBrushFromColorName = wWrapClass( 0, _wxBrush, "wxbrushfromcolorname" );
    _wxBrushFromBitmap = wWrapClass( 0, _wxBrush, "wxbrushfrombitmap" );
    _wxBrushCopy = wWrapClass( 0, _wxBrush, "wxbrushcopy" );
    _wxBrushList = wWrapClass( 0, _wxList, "wxbrushlist" );
    _wxDC = wWrapClass( 0, _wxObject, "wxdc" );
    _wxMemoryDC = wWrapClass( 0, _wxDC, "wxmemorydc" );
    _wxPrintData = wWrapClass( 0, _wxObject, "wxprintdata" );
    _wxWindowDC = wWrapClass( 0, _wxDC, "wxwindowdc" );
    _wxClientDC = wWrapClass( 0, _wxWindowDC, "wxclientdc" );
    _wxPaintDC = wWrapClass( 0, _wxWindowDC, "wxpaintdc" );
    _wxScreenDC = wWrapClass( 0, _wxDC, "wxscreendc" );
    _wxBitmap = wWrapClass( 0, _wxGDIObject, "wxbitmap" );
    _wxBitmapCopy = wWrapClass( 0, _wxBitmap, "wxbitmapcopy" );
    _wxEmptyBitmap = wWrapClass( 0, _wxBitmap, "wxemptybitmap" );
    _wxImage = wWrapClass( 0, _wxObject, "wximage" );
    _wxNullImage = wWrapClass( 0, _wxImage, "wxnullimage" );
    _wxImageFromBitmap = wWrapClass( 0, _wxImage, "wximagefrombitmap" );
    _wxEmptyImage = wWrapClass( 0, _wxImage, "wxemptyimage" );
    _wxImageFromData = wWrapClass( 0, _wxImage, "wximagefromdata" );
    _wxImageFromFile = wWrapClass( 0, _wxImage, "wximagefromfile" );
    _wxImageList = wWrapClass( 0, _wxObject, "wximagelist" );
    _wxCursor = wWrapClass( 0, _wxBitmap, "wxcursor" );
    _wxEvtHandler = wWrapClass( 0, _wxObject, "wxevthandler" );
    _wxApp = wWrapClass( 0, _wxEvtHandler, "wxapp" );
    _wxWindow = wWrapClass( 0, _wxEvtHandler, "wxwindow" );
    _wxPanel = wWrapClass( 0, _wxWindow, "wxpanel" );
    _wxDialog = wWrapClass( 0, _wxWindow, "wxdialog" );
    _wxFindReplaceData = wWrapClass( 0, _wxObject, "wxfindreplacedata" );
    _wxFindReplaceDialog = wWrapClass( 0, _wxDialog, "wxfindreplacedialog" );
    _wxFrame = wWrapClass( 0, _wxWindow, "wxframe" );
    _wxMDIParentFrame = wWrapClass( 0, _wxFrame, "wxmdiparentframe" );
    _wxMDIChildFrame = wWrapClass( 0, _wxFrame, "wxmdichildframe" );
    _wxMiniFrame = wWrapClass( 0, _wxFrame, "wxminiframe" );
    _wxScrolledWindow = wWrapClass( 0, _wxPanel, "wxscrolledwindow" );
    _wxHtmlFilter = wWrapClass( 0, _wxObject, "wxhtmlfilter" );
    _wxHtmlWindow = wWrapClass( 0, _wxScrolledWindow, "wxhtmlwindow" );
    _wxSplitterWindow = wWrapClass( 0, _wxWindow, "wxsplitterwindow" );
    _wxStatusBar = wWrapClass( 0, _wxWindow, "wxstatusbar" );
    _wxControl = wWrapClass( 0, _wxWindow, "wxcontrol" );
    _wxButton = wWrapClass( 0, _wxControl, "wxbutton" );
    _wxBitmapButton = wWrapClass( 0, _wxButton, "wxbitmapbutton" );
    _wxDateTime = wWrapClass( 0, 0, "wxdatetime" );
    _wxCalendarCtrl = wWrapClass( 0, _wxControl, "wxcalendarctrl" );
    _wxCheckBox = wWrapClass( 0, _wxControl, "wxcheckbox" );
    _wxChoice = wWrapClass( 0, _wxControl, "wxchoice" );
    _wxComboBox = wWrapClass( 0, _wxChoice, "wxcombobox" );
    _wxGauge = wWrapClass( 0, _wxControl, "wxgauge" );
    _wxStaticBox = wWrapClass( 0, _wxControl, "wxstaticbox" );
    _wxListBox = wWrapClass( 0, _wxControl, "wxlistbox" );
    _wxCheckListBox = wWrapClass( 0, _wxListBox, "wxchecklistbox" );
    _wxListItem = wWrapClass( 0, _wxObject, "wxlistitem" );
    _wxListCtrl = wWrapClass( 0, _wxControl, "wxlistctrl" );
    _wxTextCtrl = wWrapClass( 0, _wxControl, "wxtextctrl" );
    _wxTreeCtrl = wWrapClass( 0, _wxControl, "wxtreectrl" );
    _wxScrollBar = wWrapClass( 0, _wxControl, "wxscrollbar" );
    _wxSpinButton = wWrapClass( 0, _wxControl, "wxspinbutton" );
    _wxSpinCtrl = wWrapClass( 0, _wxControl, "wxspinctrl" );
    _wxStaticText = wWrapClass( 0, _wxControl, "wxstatictext" );
    _wxStaticBitmap = wWrapClass( 0, _wxControl, "wxstaticbitmap" );
    _wxRadioBox = wWrapClass( 0, _wxControl, "wxradiobox" );
    _wxRadioButton = wWrapClass( 0, _wxControl, "wxradiobutton" );
    _wxSlider = wWrapClass( 0, _wxControl, "wxslider" );
    _wxToolBarBase = wWrapClass( 0, _wxControl, "wxtoolbarbase" );
    _wxToolBar = wWrapClass( 0, _wxToolBarBase, "wxtoolbar" );
    _wxNotebook = wWrapClass( 0, _wxControl, "wxnotebook" );
    _wxSashWindow = wWrapClass( 0, _wxWindow, "wxsashwindow" );
    _wxSashLayoutWindow = wWrapClass( 0, _wxSashWindow, "wxsashlayoutwindow" );
    _wxColourDialog = wWrapClass( 0, _wxDialog, "wxcolourdialog" );
    _wxColorDialog = wWrapClass( 0, _wxColourDialog, "wxcolordialog" );
    _wxFileDialog = wWrapClass( 0, _wxDialog, "wxfiledialog" );
    _wxDirDialog = wWrapClass( 0, _wxDialog, "wxdirdialog" );
    _wxSingleChoiceDialog = wWrapClass( 0, _wxDialog, "wxsinglechoicedialog" );
    _wxTextEntryDialog = wWrapClass( 0, _wxDialog, "wxtextentrydialog" );
    _wxFontData = wWrapClass( 0, _wxObject, "wxfontdata" );
    _wxFontDialog = wWrapClass( 0, _wxDialog, "wxfontdialog" );
    _wxPageSetupDialogData = wWrapClass( 0, _wxObject, "wxpagesetupdialogdata" );
    _wxPageSetupDialog = wWrapClass( 0, _wxDialog, "wxpagesetupdialog" );
    _wxPrintDialog = wWrapClass( 0, _wxDialog, "wxprintdialog" );
    _wxMessageDialog = wWrapClass( 0, _wxDialog, "wxmessagedialog" );
    _wxMenu = wWrapClass( 0, _wxEvtHandler, "wxmenu" );
    _wxMenuBar = wWrapClass( 0, _wxEvtHandler, "wxmenubar" );
    _wxMenuItem = wWrapClass( 0, _wxObject, "wxmenuitem" );
    _wxEvent = wWrapClass( 0, _wxObject, "wxevent" );
    _wxTimerEvent = wWrapClass( 0, _wxObject, "wxtimerevent" );
    _wxCommandEvent = wWrapClass( 0, _wxEvent, "wxcommandevent" );
    _wxNotifyEvent = wWrapClass( 0, _wxCommandEvent, "wxnotifyevent" );
    _wxActivateEvent = wWrapClass( 0, _wxEvent, "wxactivateevent" );
    _wxCalendarEvent = wWrapClass( 0, _wxEvent, "wxcalendarevent" );
    _wxCalculateLayoutEvent = wWrapClass( 0, _wxEvent, "wxcalculatelayoutevent" );
    _wxCloseEvent = wWrapClass( 0, _wxEvent, "wxcloseevent" );
    _wxDialUpEvent = wWrapClass( 0, _wxCommandEvent, "wxdialupevent" );
    _wxDropFilesEvent = wWrapClass( 0, _wxEvent, "wxdropfilesevent" );
    _wxEraseEvent = wWrapClass( 0, _wxEvent, "wxeraseevent" );
    _wxFocusEvent = wWrapClass( 0, _wxEvent, "wxfocusevent" );
    _wxKeyEvent = wWrapClass( 0, _wxEvent, "wxkeyevent" );
    _wxIdleEvent = wWrapClass( 0, _wxEvent, "wxidleevent" );
    _wxInitDialogEvent = wWrapClass( 0, _wxEvent, "wxinitdialogevent" );
    _wxJoystick = wWrapClass( 0, _wxObject, "wxjoystick" );
    _wxJoystickEvent = wWrapClass( 0, _wxEvent, "wxjoystickevent" );
    _wxListEvent = wWrapClass( 0, _wxNotifyEvent, "wxlistevent" );
    _wxMenuEvent = wWrapClass( 0, _wxEvent, "wxmenuevent" );
    _wxMouseEvent = wWrapClass( 0, _wxEvent, "wxmouseevent" );
    _wxMoveEvent = wWrapClass( 0, _wxEvent, "wxmoveevent" );
    _wxNotebookEvent = wWrapClass( 0, _wxNotifyEvent, "wxnotebookevent" );
    _wxPaintEvent = wWrapClass( 0, _wxEvent, "wxpaintevent" );
    _wxProcessEvent = wWrapClass( 0, _wxEvent, "wxprocessevent" );
    _wxQueryLayoutInfoEvent = wWrapClass( 0, _wxEvent, "wxquerylayoutinfoevent" );
    _wxScrollEvent = wWrapClass( 0, _wxCommandEvent, "wxscrollevent" );
    _wxScrollWinEvent = wWrapClass( 0, _wxEvent, "wxscrollwinevent" );
    _wxSizeEvent = wWrapClass( 0, _wxEvent, "wxsizeevent" );
    _wxSocketEvent = wWrapClass( 0, _wxEvent, "wxsocketevent" );
    _wxSpinEvent = wWrapClass( 0, _wxNotifyEvent, "wxspinevent" );
    _wxSysColourChangedEvent = wWrapClass( 0, _wxEvent, "wxsyscolourchangedevent" );
    _wxTreeEvent = wWrapClass( 0, _wxNotifyEvent, "wxtreeevent" );
    _wxUpdateUIEvent = wWrapClass( 0, _wxEvent, "wxupdateuievent" );
    _wxWizardEvent = wWrapClass( 0, _wxNotifyEvent, "wxwizardevent" );
    _wxSplitterEvent = wWrapClass( 0, _wxNotifyEvent, "wxsplitterevent" );
    _wxSizer = wWrapClass( 0, _wxObject, "wxsizer" );
    _wxGridSizer = wWrapClass( 0, _wxSizer, "wxgridsizer" );
    _wxFlexGridSizer = wWrapClass( 0, _wxGridSizer, "wxflexgridsizer" );
    _wxBoxSizer = wWrapClass( 0, _wxSizer, "wxboxsizer" );
    _wxStaticBoxSizer = wWrapClass( 0, _wxBoxSizer, "wxstaticboxsizer" );
    _wxNotebookSizer = wWrapClass( 0, _wxSizer, "wxnotebooksizer" );
    _wxIndividualLayoutConstraint = wWrapClass( 0, _wxObject, "wxindividuallayoutconstraint" );
    _wxLayoutConstraints = wWrapClass( 0, _wxObject, "wxlayoutconstraints" );
    _wxFont = wWrapClass( 0, _wxGDIObject, "wxfont" );
    _wxTimer = wWrapClass( 0, _wxObject, "wxtimer" );
    _wxHtmlHelpController = wWrapClass( 0, _wxObject, "wxhtmlhelpcontroller" );
    _wxStyledTextCtrl = wWrapClass( 0, _wxControl, "wxstyledtextctrl" );
    _wxStyledTextEvent = wWrapClass( 0, _wxCommandEvent, "wxstyledtextevent" );
    _wxDir = wWrapClass( 0, 0, "wxdir" );
    _wxStreamBase = wWrapClass( 0, 0, "wxstreambase" );
    _wxInputStream = wWrapClass( 0, _wxStreamBase, "wxinputstream" );
    _wxOutputStream = wWrapClass( 0, _wxStreamBase, "wxoutputstream" );
    _wxSocketBase = wWrapClass( 0, _wxObject, "wxsocketbase" );
    _wxSocketClient = wWrapClass( 0, _wxSocketBase, "wxsocketclient" );
    _wxProtocol = wWrapClass( 0, _wxSocketClient, "wxprotocol" );
    _wxFTP = wWrapClass( 0, _wxProtocol, "wxftp" );
    _wxHTTP = wWrapClass( 0, _wxProtocol, "wxhttp" );
    _wxURL = wWrapClass( 0, _wxObject, "wxurl" );
    wWrapMethod( 0, _wxAcceleratorTable, "del", wxAcceleratorTable_del, 0, 0 );
    wWrapMethod( 0, _wxArrayInt, "del", wxArrayInt_del, 0, 0 );
    wWrapMethod( 0, _wxArrayTreeItemIds, "del", wxArrayTreeItemIds_del, 0, 0 );
    wWrapMethod( 0, _wxCalendarDateAttr, "del", wxCalendarDateAttr_del, 0, 0 );
    wWrapMethod( 0, _wxCaret, "del", wxCaret_del, 0, 0 );
    wWrapMethod( 0, _wxClassInfo, "del", wxClassInfo_del, 0, 0 );
    wWrapMethod( 0, _wxDateSpan, "del", wxDateSpan_del, 0, 0 );
    wWrapMethod( 0, _wxDropTarget, "del", wxDropTarget_del, 0, 0 );
    wWrapMethod( 0, _wxIcon, "del", wxIcon_del, 0, 0 );
    wWrapMethod( 0, _wxLog, "del", wxLog_del, 0, 0 );
    wWrapMethod( 0, _wxMDIClientWindow, "del", wxMDIClientWindow_del, 0, 0 );
    wWrapMethod( 0, _wxMenuItemList, "del", wxMenuItemList_del, 0, 0 );
    wWrapMethod( 0, _wxObjectRefData, "del", wxObjectRefData_del, 0, 0 );
    wWrapMethod( 0, _wxPrintDialogData, "del", wxPrintDialogData_del, 0, 0 );
    wWrapMethod( 0, _wxRegion, "del", wxRegion_del, 0, 0 );
    wWrapMethod( 0, _wxRect, "del", wxRect_del, 0, 0 );
    wWrapMethod( 0, _wxToolTip, "del", wxToolTip_del, 0, 0 );
    wWrapMethod( 0, _wxTreeItemData, "del", wxTreeItemData_del, 0, 0 );
    wWrapMethod( 0, _wxTreeItemId, "del", wxTreeItemId_del, 0, 0 );
    wWrapMethod( 0, _wxValidator, "del", wxValidator_del, 0, 0 );
    wWrapMethod( 0, _wxWindowList, "del", wxWindowList_del, 0, 0 );
    wWrapMethod( 0, _wxMask, "del", wxMask_del, 0, 0 );
    wWrapMethod( 0, _wxProcess, "del", wxProcess_del, 0, 0 );
    wWrapMethod( 0, _wxImageHandler, "del", wxImageHandler_del, 0, 0 );
    wWrapMethod( 0, _wxGridTableBase, "del", wxGridTableBase_del, 0, 0 );
    wWrapMethod( 0, _wxConfigBase, "del", wxConfigBase_del, 0, 0 );
    wWrapMethod( 0, _wxHtmlHelpData, "del", wxHtmlHelpData_del, 0, 0 );
    wWrapMethod( 0, _wxMemoryBuffer, "del", wxMemoryBuffer_del, 0, 0 );
    wWrapMethod( 0, _wxNodeBase, "del", wxNodeBase_del, 0, 0 );
    wWrapMethod( 0, _wxSockAddress, "del", wxSockAddress_del, 0, 0 );
    wWrapMethod( 0, _wxTimeSpan, "del", wxTimeSpan_del, 0, 0 );
    wBuiltinNew( "wxfileselector", builtin_wxFileSelector, 1, 9 );
    wBuiltinNew( "wxgetcolourfromuser", builtin_wxGetColourFromUser, 2, 2 );
    wBuiltinNew( "wxgetcolorfromuser", builtin_wxGetColourFromUser, 2, 2 );
    wBuiltinNew( "wxgetnumberfromuser", builtin_wxGetNumberFromUser, 4, 8 );
    wBuiltinNew( "wxgetpasswordfromuser", builtin_wxGetPasswordFromUser, 1, 4 );
    wBuiltinNew( "wxgettextfromuser", builtin_wxGetTextFromUser, 1, 7 );
    wBuiltinNew( "wxmessagebox", builtin_wxMessageBox, 1, 6 );
    wBuiltinNew( "wxnewid", builtin_wxNewId, 0, 0 );
    wBuiltinNew( "wxregisterid", builtin_wxRegisterId, 1, 1 );
    wBuiltinNew( "wxbeginbusycursor", builtin_wxBeginBusyCursor, 0, 1 );
    wBuiltinNew( "wxbell", builtin_wxBell, 0, 0 );
    wBuiltinNew( "wxcreatedynamicobject", builtin_wxCreateDynamicObject, 1, 1 );
    wBuiltinNew( "wxdisplaysize", builtin_wxDisplaySize, 2, 2 );
    wBuiltinNew( "wxenabletoplevelwindows", builtin_wxEnableTopLevelWindows, 0, 1 );
    wBuiltinNew( "wxendbusycursor", builtin_wxEndBusyCursor, 0, 0 );
    wBuiltinNew( "wxerror", builtin_wxError, 1, 2 );
    wBuiltinNew( "wxexecute", builtin_wxExecute, 1, 3 );
    wBuiltinNew( "wxexit", builtin_wxExit, 0, 0 );
    wBuiltinNew( "wxfatalerror", builtin_wxFatalError, 1, 2 );
    wBuiltinNew( "wxfindmenuitemid", builtin_wxFindMenuItemId, 3, 3 );
    wBuiltinNew( "wxfindwindowbylabel", builtin_wxFindWindowByLabel, 1, 2 );
    wBuiltinNew( "wxfindwindowbyname", builtin_wxFindWindowByName, 1, 2 );
    wBuiltinNew( "wxfindwindowatpoint", builtin_wxFindWindowAtPoint, 1, 1 );
    wBuiltinNew( "wxfindwindowatpointer", builtin_wxFindWindowAtPointer, 1, 1 );
    wBuiltinNew( "wxgethomedir", builtin_wxGetHomeDir, 0, 0 );
    wBuiltinNew( "wxgetmouseposition", builtin_wxGetMousePosition, 0, 0 );
    wBuiltinNew( "wxgetosdescription", builtin_wxGetOsDescription, 0, 0 );
    wBuiltinNew( "wxgetosversion", builtin_wxGetOsVersion, 0, 0 );
    wBuiltinNew( "wxgettranslation", builtin_wxGetTranslation, 1, 1 );
    wBuiltinNew( "wxhandlefatalexceptions", builtin_wxHandleFatalExceptions, 0, 1 );
    wBuiltinNew( "wxisbusy", builtin_wxIsBusy, 0, 0 );
    wBuiltinNew( "wxnow", builtin_wxNow, 0, 0 );
    wBuiltinNew( "wxpostevent", builtin_wxPostEvent, 2, 2 );
    wBuiltinNew( "wxsafeyield", builtin_wxSafeYield, 0, 1 );
    wBuiltinNew( "wxshell", builtin_wxShell, 0, 1 );
    wBuiltinNew( "wxsleep", builtin_wxSleep, 1, 1 );
    wBuiltinNew( "wxtrap", builtin_wxTrap, 0, 0 );
    wBuiltinNew( "wxusleep", builtin_wxUsleep, 1, 1 );
    wBuiltinNew( "wxyield", builtin_wxYield, 0, 0 );
    wBuiltinNew( "wxwakeupidle", builtin_wxWakeUpIdle, 0, 0 );
    wBuiltinNew( "builtin_getenvvalue", builtin_builtin_getEnvValue, 1, 1 );
    wBuiltinNew( "wxgetenvvalue", builtin_builtin_getEnvValue, 1, 1 );
    wBuiltinNew( "wxsetenv", builtin_wxSetEnv, 2, 2 );
    wBuiltinNew( "wxunsetenv", builtin_wxUnsetEnv, 1, 1 );
    wBuiltinNew( "wxdirexists", builtin_wxDirExists, 1, 1 );
    wBuiltinNew( "wxdos2unixfilename", builtin_wxDos2UnixFilename, 1, 1 );
    wBuiltinNew( "wxfileexists", builtin_wxFileExists, 1, 1 );
    wBuiltinNew( "wxfilemodificationtime", builtin_wxFileModificationTime, 1, 1 );
    wBuiltinNew( "wxfilenamefrompath", builtin_wxFileNameFromPath, 1, 1 );
    wBuiltinNew( "wxfindfirstfile", builtin_wxFindFirstFile, 1, 2 );
    wBuiltinNew( "wxfindnextfile", builtin_wxFindNextFile, 0, 0 );
    wBuiltinNew( "wxgetosdirectory", builtin_wxGetOSDirectory, 0, 0 );
    wBuiltinNew( "wxisabsolutepath", builtin_wxIsAbsolutePath, 1, 1 );
    wBuiltinNew( "wxpathonly", builtin_wxPathOnly, 1, 1 );
    wBuiltinNew( "wxunix2dosfilename", builtin_wxUnix2DosFilename, 1, 1 );
    wBuiltinNew( "wxconcatfiles", builtin_wxConcatFiles, 3, 3 );
    wBuiltinNew( "wxcopyfile", builtin_wxCopyFile, 2, 3 );
    wBuiltinNew( "wxgetcwd", builtin_wxGetCwd, 0, 0 );
    wBuiltinNew( "wxgetworkingdirectory", builtin_wxGetWorkingDirectory, 0, 2 );
    wBuiltinNew( "wxgettempfilename", builtin_wxGetTempFileName, 2, 2 );
    wBuiltinNew( "wxiswild", builtin_wxIsWild, 1, 1 );
    wBuiltinNew( "wxmatchwild", builtin_wxMatchWild, 3, 3 );
    wBuiltinNew( "wxmkdir", builtin_wxMkdir, 1, 2 );
    wBuiltinNew( "wxremovefile", builtin_wxRemoveFile, 1, 1 );
    wBuiltinNew( "wxrenamefile", builtin_wxRenameFile, 2, 2 );
    wBuiltinNew( "wxrmdir", builtin_wxRmdir, 1, 2 );
    wBuiltinNew( "wxsetworkingdirectory", builtin_wxSetWorkingDirectory, 1, 1 );
    wWrapMethod( 0, _wxLocale, "del", wxLocale_del, 0, 0 );
    wWrapMethod( 0, _wxLocale, "new", wxLocale_new, 0, 0 );
    wWrapMethod( 0, _wxLocale, "finalize", wxLocale_finalize, 0, 0 );
    wWrapMethod( 0, _wxLocale, "addcatalog", wxLocale_AddCatalog, 1, 1 );
    wWrapMethod( 0, _wxLocale, "addcataloglookuppathprefix", wxLocale_AddCatalogLookupPathPrefix, 1, 1 );
    wWrapMethod( 0, _wxLocale, "getcanonicalname", wxLocale_GetCanonicalName, 0, 0 );
    wWrapMethod( 0, _wxLocale, "getlanguage", wxLocale_GetLanguage, 0, 0 );
    wWrapMethod( 0, _wxLocale, "getlocale", wxLocale_GetLocale, 0, 0 );
    wWrapMethod( 0, _wxLocale, "getname", wxLocale_GetName, 0, 0 );
    wWrapMethod( 0, _wxLocale, "getstring", wxLocale_GetString, 1, 2 );
    wWrapMethod( 0, _wxLocale, "getsysname", wxLocale_GetSysName, 0, 0 );
    wWrapMethod( 0, _wxLocale, "getsystemencoding", wxLocale_GetSystemEncoding, 0, 0 );
    wWrapMethod( 0, _wxLocale, "getsystemencodingname", wxLocale_GetSystemEncodingName, 0, 0 );
    wWrapMethod( 0, _wxLocale, "getsystemlanguage", wxLocale_GetSystemLanguage, 0, 0 );
    wWrapMethod( 0, _wxLocale, "init", wxLocale_Init, 0, 2 );
    wWrapMethod( 0, _wxLocale, "isloaded", wxLocale_IsLoaded, 1, 1 );
    wWrapMethod( 0, _wxLocale, "isok", wxLocale_IsOk, 0, 0 );
    wWrapMethod( 0, _wxObject, "del", wxObject_del, 0, 0 );
    wWrapMethod( 0, _wxObject, "new", wxObject_new, 0, 0 );
    wWrapMethod( 0, _wxObject, "finalize", wxObject_finalize, 0, 0 );
    wWrapMethod( 0, _wxObject, "getclassinfo", wxObject_GetClassInfo, 0, 0 );
    wWrapMethod( 0, _wxObject, "getrefdata", wxObject_GetRefData, 0, 0 );
    wWrapMethod( 0, _wxObject, "iskindof", wxObject_IsKindOf, 1, 1 );
    wWrapMethod( 0, _wxObject, "ref", wxObject_Ref, 1, 1 );
    wWrapMethod( 0, _wxObject, "setrefdata", wxObject_SetRefData, 1, 1 );
    wWrapMethod( 0, _wxObject, "unref", wxObject_UnRef, 0, 0 );
    wWrapMethod( 0, _wxNode, "del", wxNode_del, 0, 0 );
    wWrapMethod( 0, _wxNode, "data", wxNode_Data, 0, 0 );
    wWrapMethod( 0, _wxNode, "next", wxNode_Next, 0, 0 );
    wWrapMethod( 0, _wxNode, "getprevious", wxNode_GetPrevious, 0, 0 );
    wWrapMethod( 0, _wxNode, "setdata", wxNode_SetData, 1, 1 );
    wWrapMethod( 0, _wxList, "del", wxList_del, 0, 0 );
    wWrapMethod( 0, _wxList, "new", wxList_new, 0, 0 );
    wWrapMethod( 0, _wxListKey, "new", wxListKey_new, 1, 1 );
    wWrapMethod( 0, _wxList, "finalize", wxList_finalize, 0, 0 );
    wWrapMethod( 0, _wxList, "append", wxList_Append, 1, 1 );
    wWrapMethod( 0, _wxList, "appendnumerickey", wxList_AppendNumericKey, 2, 2 );
    wWrapMethod( 0, _wxList, "appendstringkey", wxList_AppendStringKey, 2, 2 );
    wWrapMethod( 0, _wxList, "clear", wxList_Clear, 0, 0 );
    wWrapMethod( 0, _wxList, "deletecontents", wxList_DeleteContents, 1, 1 );
    wWrapMethod( 0, _wxList, "deletenode", wxList_DeleteNode, 1, 1 );
    wWrapMethod( 0, _wxList, "deleteobject", wxList_DeleteObject, 1, 1 );
    wWrapMethod( 0, _wxList, "findnumerickey", wxList_FindNumericKey, 1, 1 );
    wWrapMethod( 0, _wxList, "findstringkey", wxList_FindStringKey, 1, 1 );
    wWrapMethod( 0, _wxList, "getcount", wxList_GetCount, 0, 0 );
    wWrapMethod( 0, _wxList, "getfirst", wxList_GetFirst, 0, 0 );
    wWrapMethod( 0, _wxList, "getlast", wxList_GetLast, 0, 0 );
    wWrapMethod( 0, _wxList, "indexof", wxList_IndexOf, 1, 1 );
    wWrapMethod( 0, _wxList, "insert", wxList_Insert, 1, 1 );
    wWrapMethod( 0, _wxList, "insertat", wxList_InsertAt, 2, 2 );
    wWrapMethod( 0, _wxList, "insertbefore", wxList_InsertBefore, 2, 2 );
    wWrapMethod( 0, _wxList, "isempty", wxList_IsEmpty, 0, 0 );
    wWrapMethod( 0, _wxList, "item", wxList_Item, 1, 1 );
    wWrapMethod( 0, _wxDataFormat, "del", wxDataFormat_del, 0, 0 );
    wWrapMethod( 0, _wxDataFormat, "new", wxDataFormat_new, 1, 1 );
    wWrapMethod( 0, _wxTipProvider, "del", wxTipProvider_del, 0, 0 );
    wWrapMethod( 0, _wxTipProvider, "gettip", wxTipProvider_GetTip, 0, 0 );
    wWrapMethod( 0, _wxTipProvider, "getcurrenttip", wxTipProvider_GetCurrentTip, 0, 0 );
    wBuiltinNew( "wxshowtip", builtin_wxShowTip, 2, 3 );
    wBuiltinNew( "wxcreatefiletipprovider", builtin_wxCreateFileTipProvider, 2, 2 );
    wWrapMethod( 0, _wxPoint, "del", wxPoint_del, 0, 0 );
    wWrapMethod( 0, _wxPoint, "new", wxPoint_new, 2, 2 );
    wWrapMethod( 0, _wxPoint, "finalize", wxPoint_finalize, 0, 0 );
    wWrapMethod( 0, _wxPoint, "get", wxPoint_Get, 0, 0 );
    wWrapMethod( 0, _wxPoint, "getx", wxPoint_GetX, 0, 0 );
    wWrapMethod( 0, _wxPoint, "gety", wxPoint_GetY, 0, 0 );
    wWrapMethod( 0, _wxSize, "del", wxSize_del, 0, 0 );
    wWrapMethod( 0, _wxSize, "new", wxSize_new, 2, 2 );
    wWrapMethod( 0, _wxSize, "finalize", wxSize_finalize, 0, 0 );
    wWrapMethod( 0, _wxSize, "getwidth", wxSize_GetWidth, 0, 0 );
    wWrapMethod( 0, _wxSize, "getheight", wxSize_GetHeight, 0, 0 );
    wWrapMethod( 0, _wxSize, "set", wxSize_Set, 2, 2 );
    wWrapMethod( 0, _wxSize, "setheight", wxSize_SetHeight, 1, 1 );
    wWrapMethod( 0, _wxSize, "setwidth", wxSize_SetWidth, 1, 1 );
    wWrapMethod( 0, _wxColourData, "del", wxColourData_del, 0, 0 );
    wWrapMethod( 0, _wxColourData, "new", wxColourData_new, 0, 0 );
    wWrapMethod( 0, _wxColourData, "wxcolordata", wxColourData_new, 0, 0 );
    wWrapMethod( 0, _wxColourData, "finalize", wxColourData_finalize, 0, 0 );
    wWrapMethod( 0, _wxColourData, "getchoosefull", wxColourData_GetChooseFull, 0, 0 );
    wWrapMethod( 0, _wxColourData, "getcolour", wxColourData_GetColour, 0, 0 );
    wWrapMethod( 0, _wxColourData, "getcolor", wxColourData_GetColour, 0, 0 );
    wWrapMethod( 0, _wxColourData, "getcustomcolour", wxColourData_GetCustomColour, 1, 1 );
    wWrapMethod( 0, _wxColourData, "getcustomcolor", wxColourData_GetCustomColour, 1, 1 );
    wWrapMethod( 0, _wxColourData, "setchoosefull", wxColourData_SetChooseFull, 1, 1 );
    wWrapMethod( 0, _wxColourData, "setcolour", wxColourData_SetColour, 1, 1 );
    wWrapMethod( 0, _wxColourData, "setcolor", wxColourData_SetColour, 1, 1 );
    wWrapMethod( 0, _wxColourData, "setcustomcolour", wxColourData_SetCustomColour, 2, 2 );
    wWrapMethod( 0, _wxColourData, "setcustomcolor", wxColourData_SetCustomColour, 2, 2 );
    wWrapMethod( 0, _wxColour, "del", wxColour_del, 0, 0 );
    wWrapMethod( 0, _wxColour, "new", wxColour_new, 3, 3 );
    wWrapMethod( 0, _wxColor, "new", wxColor_new, 3, 3 );
    wWrapMethod( 0, _wxColour, "blue", wxColour_Blue, 0, 0 );
    wWrapMethod( 0, _wxColour, "getpixel", wxColour_GetPixel, 0, 0 );
    wWrapMethod( 0, _wxColour, "green", wxColour_Green, 0, 0 );
    wWrapMethod( 0, _wxColour, "ok", wxColour_Ok, 0, 0 );
    wWrapMethod( 0, _wxColour, "red", wxColour_Red, 0, 0 );
    wWrapMethod( 0, _wxColour, "set", wxColour_Set, 3, 3 );
    wWrapMethod( 0, _wxGDIObject, "del", wxGDIObject_del, 0, 0 );
    wWrapMethod( 0, _wxGDIObject, "new", wxGDIObject_new, 0, 0 );
    wWrapMethod( 0, _wxPen, "del", wxPen_del, 0, 0 );
    wWrapMethod( 0, _wxPen, "new", wxPen_new, 0, 0 );
    wWrapMethod( 0, _wxPen, "finalize", wxPen_finalize, 0, 0 );
    wWrapMethod( 0, _wxPen, "getcap", wxPen_GetCap, 0, 0 );
    wWrapMethod( 0, _wxPen, "getcolour", wxPen_GetColour, 0, 0 );
    wWrapMethod( 0, _wxPen, "getjoin", wxPen_GetJoin, 0, 0 );
    wWrapMethod( 0, _wxPen, "getstyle", wxPen_GetStyle, 0, 0 );
    wWrapMethod( 0, _wxPen, "getwidth", wxPen_GetWidth, 0, 0 );
    wWrapMethod( 0, _wxPen, "ok", wxPen_Ok, 0, 0 );
    wWrapMethod( 0, _wxPen, "setcap", wxPen_SetCap, 1, 1 );
    wWrapMethod( 0, _wxPen, "setcolour", wxPen_SetColour, 1, 1 );
    wWrapMethod( 0, _wxPen, "setcolor", wxPen_SetColour, 1, 1 );
    wWrapMethod( 0, _wxPen, "setcolourstring", wxPen_SetColourString, 1, 1 );
    wWrapMethod( 0, _wxPen, "setcolorstring", wxPen_SetColourString, 1, 1 );
    wWrapMethod( 0, _wxPen, "setcolourrgb", wxPen_SetColourRGB, 3, 3 );
    wWrapMethod( 0, _wxPen, "setcolorrgb", wxPen_SetColourRGB, 3, 3 );
    wWrapMethod( 0, _wxPen, "setjoin", wxPen_SetJoin, 1, 1 );
    wWrapMethod( 0, _wxPen, "setstyle", wxPen_SetStyle, 1, 1 );
    wWrapMethod( 0, _wxPen, "setwidth", wxPen_SetWidth, 1, 1 );
    wWrapMethod( 0, _wxPenFromColour, "new", wxPenFromColour_new, 3, 3 );
    wWrapMethod( 0, _wxPenFromColor, "new", wxPenFromColor_new, 3, 3 );
    wWrapMethod( 0, _wxPenFromColourName, "new", wxPenFromColourName_new, 3, 3 );
    wWrapMethod( 0, _wxPenFromColorName, "new", wxPenFromColorName_new, 3, 3 );
    wWrapMethod( 0, _wxPenCopy, "new", wxPenCopy_new, 1, 1 );
    wWrapMethod( 0, _wxPalette, "del", wxPalette_del, 0, 0 );
    wWrapMethod( 0, _wxPalette, "new", wxPalette_new, 4, 4 );
    wWrapMethod( 0, _wxPalette, "finalize", wxPalette_finalize, 0, 0 );
    wWrapMethod( 0, _wxPalette, "create", wxPalette_Create, 4, 4 );
    wWrapMethod( 0, _wxPalette, "getpixel", wxPalette_GetPixel, 3, 3 );
    wWrapMethod( 0, _wxPalette, "ok", wxPalette_Ok, 0, 0 );
    wWrapMethod( 0, _wxBrush, "del", wxBrush_del, 0, 0 );
    wWrapMethod( 0, _wxBrush, "new", wxBrush_new, 2, 2 );
    wWrapMethod( 0, _wxBrushFromColourName, "new", wxBrushFromColourName_new, 2, 2 );
    wWrapMethod( 0, _wxBrushFromColorName, "new", wxBrushFromColorName_new, 2, 2 );
    wWrapMethod( 0, _wxBrushFromBitmap, "new", wxBrushFromBitmap_new, 1, 1 );
    wWrapMethod( 0, _wxBrushCopy, "new", wxBrushCopy_new, 1, 1 );
    wWrapMethod( 0, _wxBrush, "finalize", wxBrush_finalize, 0, 0 );
    wWrapMethod( 0, _wxBrush, "getcolour", wxBrush_GetColour, 0, 0 );
    wWrapMethod( 0, _wxBrush, "getcolor", wxBrush_GetColour, 0, 0 );
    wWrapMethod( 0, _wxBrush, "getstipple", wxBrush_GetStipple, 0, 0 );
    wWrapMethod( 0, _wxBrush, "getstyle", wxBrush_GetStyle, 0, 0 );
    wWrapMethod( 0, _wxBrush, "ok", wxBrush_Ok, 0, 0 );
    wWrapMethod( 0, _wxBrush, "setcolour", wxBrush_SetColour, 1, 1 );
    wWrapMethod( 0, _wxBrush, "setcolor", wxBrush_SetColour, 1, 1 );
    wWrapMethod( 0, _wxBrush, "setcolourstring", wxBrush_SetColourString, 1, 1 );
    wWrapMethod( 0, _wxBrush, "setcolorstring", wxBrush_SetColourString, 1, 1 );
    wWrapMethod( 0, _wxBrush, "setcolourrgb", wxBrush_SetColourRGB, 3, 3 );
    wWrapMethod( 0, _wxBrush, "setcolorrgb", wxBrush_SetColourRGB, 3, 3 );
    wWrapMethod( 0, _wxBrush, "setstipple", wxBrush_SetStipple, 1, 1 );
    wWrapMethod( 0, _wxBrush, "setstyle", wxBrush_SetStyle, 1, 1 );
    wWrapMethod( 0, _wxBrushList, "del", wxBrushList_del, 0, 0 );
    wWrapMethod( 0, _wxBrushList, "new", wxBrushList_new, 0, 0 );
    wWrapMethod( 0, _wxBrushList, "findorcreatebrush", wxBrushList_FindOrCreateBrush, 2, 2 );
    wWrapMethod( 0, _wxDC, "del", wxDC_del, 0, 0 );
    wWrapMethod( 0, _wxDC, "finalize", wxDC_finalize, 0, 0 );
    wWrapMethod( 0, _wxDC, "begindrawing", wxDC_BeginDrawing, 0, 0 );
    wWrapMethod( 0, _wxDC, "blit", wxDC_Blit, 7, 9 );
    wWrapMethod( 0, _wxDC, "calcboundingbox", wxDC_CalcBoundingBox, 2, 2 );
    wWrapMethod( 0, _wxDC, "clear", wxDC_Clear, 0, 0 );
    wWrapMethod( 0, _wxDC, "crosshair", wxDC_CrossHair, 2, 2 );
    wWrapMethod( 0, _wxDC, "destroyclippingregion", wxDC_DestroyClippingRegion, 0, 0 );
    wWrapMethod( 0, _wxDC, "devicetologicalx", wxDC_DeviceToLogicalX, 1, 1 );
    wWrapMethod( 0, _wxDC, "devicetologicalxrel", wxDC_DeviceToLogicalXRel, 1, 1 );
    wWrapMethod( 0, _wxDC, "devicetologicaly", wxDC_DeviceToLogicalY, 1, 1 );
    wWrapMethod( 0, _wxDC, "devicetologicalyrel", wxDC_DeviceToLogicalYRel, 1, 1 );
    wWrapMethod( 0, _wxDC, "drawarc", wxDC_DrawArc, 6, 6 );
    wWrapMethod( 0, _wxDC, "drawbitmap", wxDC_DrawBitmap, 4, 4 );
    wWrapMethod( 0, _wxDC, "drawcheckmark", wxDC_DrawCheckMark, 4, 4 );
    wWrapMethod( 0, _wxDC, "drawcheckmarkrect", wxDC_DrawCheckMarkRect, 1, 1 );
    wWrapMethod( 0, _wxDC, "drawellipse", wxDC_DrawEllipse, 4, 4 );
    wWrapMethod( 0, _wxDC, "drawellipticarc", wxDC_DrawEllipticArc, 6, 6 );
    wWrapMethod( 0, _wxDC, "drawicon", wxDC_DrawIcon, 3, 3 );
    wWrapMethod( 0, _wxDC, "drawline", wxDC_DrawLine, 4, 4 );
    wWrapMethod( 0, _wxDC, "drawlines", wxDC_DrawLines, 2, 4 );
    wWrapMethod( 0, _wxDC, "drawlinesfromlist", wxDC_DrawLinesFromList, 1, 3 );
    wWrapMethod( 0, _wxDC, "drawpolygon", wxDC_DrawPolygon, 2, 5 );
    wWrapMethod( 0, _wxDC, "drawpolygonfromlist", wxDC_DrawPolygonFromList, 1, 4 );
    wWrapMethod( 0, _wxDC, "drawpoint", wxDC_DrawPoint, 2, 2 );
    wWrapMethod( 0, _wxDC, "drawrectangle", wxDC_DrawRectangle, 4, 4 );
    wWrapMethod( 0, _wxDC, "drawrotatedtext", wxDC_DrawRotatedText, 4, 4 );
    wWrapMethod( 0, _wxDC, "drawroundedrectangle", wxDC_DrawRoundedRectangle, 4, 5 );
    wWrapMethod( 0, _wxDC, "drawsplinefromlist", wxDC_DrawSplineFromList, 1, 1 );
    wWrapMethod( 0, _wxDC, "drawtext", wxDC_DrawText, 3, 3 );
    wWrapMethod( 0, _wxDC, "enddoc", wxDC_EndDoc, 0, 0 );
    wWrapMethod( 0, _wxDC, "enddrawing", wxDC_EndDrawing, 0, 0 );
    wWrapMethod( 0, _wxDC, "endpage", wxDC_EndPage, 0, 0 );
    wWrapMethod( 0, _wxDC, "floodfill", wxDC_FloodFill, 3, 4 );
    wWrapMethod( 0, _wxDC, "getbackground", wxDC_GetBackground, 0, 0 );
    wWrapMethod( 0, _wxDC, "getbackgroundmode", wxDC_GetBackgroundMode, 0, 0 );
    wWrapMethod( 0, _wxDC, "getbrush", wxDC_GetBrush, 0, 0 );
    wWrapMethod( 0, _wxDC, "getcharheight", wxDC_GetCharHeight, 0, 0 );
    wWrapMethod( 0, _wxDC, "getcharwidth", wxDC_GetCharWidth, 0, 0 );
    wWrapMethod( 0, _wxDC, "getpixelbox", wxDC_GetClippingBox, 0, 0 );
    wWrapMethod( 0, _wxDC, "getpixelboxx", wxDC_GetClippingBoxX, 0, 0 );
    wWrapMethod( 0, _wxDC, "getpixelboxy", wxDC_GetClippingBoxY, 0, 0 );
    wWrapMethod( 0, _wxDC, "getpixelboxwidth", wxDC_GetClippingBoxWidth, 0, 0 );
    wWrapMethod( 0, _wxDC, "getpixelboxheight", wxDC_GetClippingBoxHeight, 0, 0 );
    wWrapMethod( 0, _wxDC, "getfont", wxDC_GetFont, 0, 0 );
    wWrapMethod( 0, _wxDC, "getlogicalfunction", wxDC_GetLogicalFunction, 0, 0 );
    wWrapMethod( 0, _wxDC, "getmapmode", wxDC_GetMapMode, 0, 0 );
    wWrapMethod( 0, _wxDC, "getoptimization", wxDC_GetOptimization, 0, 0 );
    wWrapMethod( 0, _wxDC, "getpen", wxDC_GetPen, 0, 0 );
    wWrapMethod( 0, _wxDC, "getpixel", wxDC_GetPixel, 2, 0 );
    wWrapMethod( 0, _wxDC, "getsize", wxDC_GetSize, 0, 0 );
    wWrapMethod( 0, _wxDC, "getsizex", wxDC_GetSizeX, 0, 0 );
    wWrapMethod( 0, _wxDC, "getsizey", wxDC_GetSizeY, 0, 0 );
    wWrapMethod( 0, _wxDC, "gettextbackground", wxDC_GetTextBackground, 0, 0 );
    wWrapMethod( 0, _wxDC, "gettextextentwidth", wxDC_GetTextExtentWidth, 1, 1 );
    wWrapMethod( 0, _wxDC, "gettextextentheight", wxDC_GetTextExtentHeight, 1, 1 );
    wWrapMethod( 0, _wxDC, "gettextextentdescent", wxDC_GetTextExtentDescent, 1, 1 );
    wWrapMethod( 0, _wxDC, "gettextextentexternalleading", wxDC_GetTextExtentExternalLeading, 1, 1 );
    wWrapMethod( 0, _wxDC, "gettextforeground", wxDC_GetTextForeground, 0, 0 );
    wWrapMethod( 0, _wxDC, "getuserscale", wxDC_GetUserScale, 0, 0 );
    wWrapMethod( 0, _wxDC, "getuserscalex", wxDC_GetUserScaleX, 0, 0 );
    wWrapMethod( 0, _wxDC, "getuserscaley", wxDC_GetUserScaleY, 0, 0 );
    wWrapMethod( 0, _wxDC, "logicaltodevicex", wxDC_LogicalToDeviceX, 1, 1 );
    wWrapMethod( 0, _wxDC, "logicaltodevicexrel", wxDC_LogicalToDeviceXRel, 1, 1 );
    wWrapMethod( 0, _wxDC, "logicaltodevicey", wxDC_LogicalToDeviceY, 1, 1 );
    wWrapMethod( 0, _wxDC, "logicaltodeviceyrel", wxDC_LogicalToDeviceYRel, 1, 1 );
    wWrapMethod( 0, _wxDC, "maxx", wxDC_MaxX, 0, 0 );
    wWrapMethod( 0, _wxDC, "maxy", wxDC_MaxY, 0, 0 );
    wWrapMethod( 0, _wxDC, "minx", wxDC_MinX, 0, 0 );
    wWrapMethod( 0, _wxDC, "miny", wxDC_MinY, 0, 0 );
    wWrapMethod( 0, _wxDC, "ok", wxDC_Ok, 0, 0 );
    wWrapMethod( 0, _wxDC, "resetboundingbox", wxDC_ResetBoundingBox, 0, 0 );
    wWrapMethod( 0, _wxDC, "setdeviceorigin", wxDC_SetDeviceOrigin, 2, 2 );
    wWrapMethod( 0, _wxDC, "setbackground", wxDC_SetBackground, 1, 1 );
    wWrapMethod( 0, _wxDC, "setbackgroundmode", wxDC_SetBackgroundMode, 1, 1 );
    wWrapMethod( 0, _wxDC, "setclippingregionxy", wxDC_SetClippingRegionXY, 4, 4 );
    wWrapMethod( 0, _wxDC, "setclippingregion", wxDC_SetClippingRegion, 1, 1 );
    wWrapMethod( 0, _wxDC, "setpalette", wxDC_SetPalette, 1, 1 );
    wWrapMethod( 0, _wxDC, "setbrush", wxDC_SetBrush, 1, 1 );
    wWrapMethod( 0, _wxDC, "setfont", wxDC_SetFont, 1, 1 );
    wWrapMethod( 0, _wxDC, "setoptimization", wxDC_SetOptimization, 1, 1 );
    wWrapMethod( 0, _wxDC, "setpen", wxDC_SetPen, 1, 1 );
    wWrapMethod( 0, _wxDC, "settextbackground", wxDC_SetTextBackground, 1, 1 );
    wWrapMethod( 0, _wxDC, "settextforeground", wxDC_SetTextForeground, 1, 1 );
    wWrapMethod( 0, _wxDC, "setuserscale", wxDC_SetUserScale, 2, 2 );
    wWrapMethod( 0, _wxDC, "startdoc", wxDC_StartDoc, 1, 1 );
    wWrapMethod( 0, _wxDC, "startpage", wxDC_StartPage, 0, 0 );
    wWrapMethod( 0, _wxMemoryDC, "del", wxMemoryDC_del, 0, 0 );
    wWrapMethod( 0, _wxMemoryDC, "new", wxMemoryDC_new, 0, 0 );
    wWrapMethod( 0, _wxMemoryDC, "selectobject", wxMemoryDC_SelectObject, 1, 1 );
    wWrapMethod( 0, _wxPrintData, "del", wxPrintData_del, 0, 0 );
    wWrapMethod( 0, _wxPrintData, "new", wxPrintData_new, 0, 0 );
    wWrapMethod( 0, _wxPrintData, "finalize", wxPrintData_finalize, 0, 0 );
    wWrapMethod( 0, _wxPrintData, "getcollate", wxPrintData_GetCollate, 0, 0 );
    wWrapMethod( 0, _wxPrintData, "getcolour", wxPrintData_GetColour, 0, 0 );
    wWrapMethod( 0, _wxPrintData, "getduplex", wxPrintData_GetDuplex, 0, 0 );
    wWrapMethod( 0, _wxPrintData, "getnocopies", wxPrintData_GetNoCopies, 0, 0 );
    wWrapMethod( 0, _wxPrintData, "getorientation", wxPrintData_GetOrientation, 0, 0 );
    wWrapMethod( 0, _wxPrintData, "getpaperid", wxPrintData_GetPaperId, 0, 0 );
    wWrapMethod( 0, _wxPrintData, "getprintername", wxPrintData_GetPrinterName, 0, 0 );
    wWrapMethod( 0, _wxPrintData, "getquality", wxPrintData_GetQuality, 0, 0 );
    wWrapMethod( 0, _wxPrintData, "ok", wxPrintData_Ok, 0, 0 );
    wWrapMethod( 0, _wxPrintData, "setcollate", wxPrintData_SetCollate, 1, 1 );
    wWrapMethod( 0, _wxPrintData, "setcolour", wxPrintData_SetColour, 1, 1 );
    wWrapMethod( 0, _wxPrintData, "setcolor", wxPrintData_SetColour, 1, 1 );
    wWrapMethod( 0, _wxPrintData, "setduplex", wxPrintData_SetDuplex, 1, 1 );
    wWrapMethod( 0, _wxPrintData, "setnocopies", wxPrintData_SetNoCopies, 1, 1 );
    wWrapMethod( 0, _wxPrintData, "setorientation", wxPrintData_SetOrientation, 1, 1 );
    wWrapMethod( 0, _wxPrintData, "setpaperid", wxPrintData_SetPaperId, 1, 1 );
    wWrapMethod( 0, _wxPrintData, "setprintername", wxPrintData_SetPrinterName, 1, 1 );
    wWrapMethod( 0, _wxPrintData, "setquality", wxPrintData_SetQuality, 1, 1 );
    wWrapMethod( 0, _wxWindowDC, "del", wxWindowDC_del, 0, 0 );
    wWrapMethod( 0, _wxWindowDC, "new", wxWindowDC_new, 1, 1 );
    wWrapMethod( 0, _wxClientDC, "del", wxClientDC_del, 0, 0 );
    wWrapMethod( 0, _wxClientDC, "new", wxClientDC_new, 1, 1 );
    wWrapMethod( 0, _wxPaintDC, "del", wxPaintDC_del, 0, 0 );
    wWrapMethod( 0, _wxPaintDC, "new", wxPaintDC_new, 1, 1 );
    wWrapMethod( 0, _wxScreenDC, "del", wxScreenDC_del, 0, 0 );
    wWrapMethod( 0, _wxScreenDC, "new", wxScreenDC_new, 0, 0 );
    wWrapMethod( 0, _wxScreenDC, "startdrawingontop", wxScreenDC_StartDrawingOnTop, 1, 1 );
    wWrapMethod( 0, _wxScreenDC, "startdrawingontoprect", wxScreenDC_StartDrawingOnTopRect, 0, 1 );
    wWrapMethod( 0, _wxScreenDC, "enddrawingontop", wxScreenDC_EndDrawingOnTop, 0, 0 );
    wWrapMethod( 0, _wxBitmap, "del", wxBitmap_del, 0, 0 );
    wWrapMethod( 0, _wxBitmapCopy, "new", wxBitmapCopy_new, 1, 1 );
    wWrapMethod( 0, _wxEmptyBitmap, "new", wxEmptyBitmap_new, 2, 3 );
    wWrapMethod( 0, _wxBitmap, "finalize", wxBitmap_finalize, 0, 0 );
    wWrapMethod( 0, _wxBitmap, "create", wxBitmap_Create, 2, 3 );
    wWrapMethod( 0, _wxBitmap, "getdepth", wxBitmap_GetDepth, 0, 0 );
    wWrapMethod( 0, _wxBitmap, "getheight", wxBitmap_GetHeight, 0, 0 );
    wWrapMethod( 0, _wxBitmap, "getpalette", wxBitmap_GetPalette, 0, 0 );
    wWrapMethod( 0, _wxBitmap, "getmask", wxBitmap_GetMask, 0, 0 );
    wWrapMethod( 0, _wxBitmap, "getwidth", wxBitmap_GetWidth, 0, 0 );
    wWrapMethod( 0, _wxBitmap, "getsubbitmap", wxBitmap_GetSubBitmap, 1, 1 );
    wWrapMethod( 0, _wxBitmap, "loadfile", wxBitmap_LoadFile, 2, 2 );
    wWrapMethod( 0, _wxBitmap, "ok", wxBitmap_Ok, 0, 0 );
    wWrapMethod( 0, _wxBitmap, "savefile", wxBitmap_SaveFile, 2, 3 );
    wWrapMethod( 0, _wxBitmap, "setdepth", wxBitmap_SetDepth, 1, 1 );
    wWrapMethod( 0, _wxBitmap, "setheight", wxBitmap_SetHeight, 1, 1 );
    wWrapMethod( 0, _wxBitmap, "setmask", wxBitmap_SetMask, 1, 1 );
    wWrapMethod( 0, _wxBitmap, "setwidth", wxBitmap_SetWidth, 1, 1 );
    wWrapMethod( 0, _wxImage, "del", wxImage_del, 0, 0 );
    wWrapMethod( 0, _wxImage, "new", wxImage_new, 1, 1 );
    wWrapMethod( 0, _wxNullImage, "new", wxNullImage_new, 0, 0 );
    wWrapMethod( 0, _wxImageFromBitmap, "new", wxImageFromBitmap_new, 1, 1 );
    wWrapMethod( 0, _wxEmptyImage, "new", wxEmptyImage_new, 2, 2 );
    wWrapMethod( 0, _wxImageFromData, "new", wxImageFromData_new, 3, 4 );
    wWrapMethod( 0, _wxImageFromFile, "new", wxImageFromFile_new, 1, 2 );
    wWrapMethod( 0, _wxImage, "finalize", wxImage_finalize, 0, 0 );
    wWrapMethod( 0, _wxImage, "addhandler", wxImage_AddHandler, 1, 1 );
    wWrapMethod( 0, _wxImage, "cleanuphandlers", wxImage_CleanUpHandlers, 0, 0 );
    wWrapMethod( 0, _wxImage, "converttobitmap", wxImage_ConvertToBitmap, 0, 0 );
    wWrapMethod( 0, _wxImage, "copy", wxImage_Copy, 0, 0 );
    wWrapMethod( 0, _wxImage, "getblue", wxImage_GetBlue, 2, 2 );
    wWrapMethod( 0, _wxImage, "getdata", wxImage_GetData, 0, 0 );
    wWrapMethod( 0, _wxImage, "getgreen", wxImage_GetGreen, 2, 2 );
    wWrapMethod( 0, _wxImage, "getred", wxImage_GetRed, 2, 2 );
    wWrapMethod( 0, _wxImage, "gethandlers", wxImage_GetHandlers, 0, 0 );
    wWrapMethod( 0, _wxImage, "getheight", wxImage_GetHeight, 0, 0 );
    wWrapMethod( 0, _wxImage, "getmaskblue", wxImage_GetMaskBlue, 0, 0 );
    wWrapMethod( 0, _wxImage, "getmaskgreen", wxImage_GetMaskGreen, 0, 0 );
    wWrapMethod( 0, _wxImage, "getmaskred", wxImage_GetMaskRed, 0, 0 );
    wWrapMethod( 0, _wxImage, "getpalette", wxImage_GetPalette, 0, 0 );
    wWrapMethod( 0, _wxImage, "getsubimage", wxImage_GetSubImage, 1, 1 );
    wWrapMethod( 0, _wxImage, "getwidth", wxImage_GetWidth, 0, 0 );
    wWrapMethod( 0, _wxImage, "hasmask", wxImage_HasMask, 0, 0 );
    wWrapMethod( 0, _wxImage, "initstandardhandlers", wxImage_InitStandardHandlers, 0, 0 );
    wWrapMethod( 0, _wxImage, "inserthandler", wxImage_InsertHandler, 1, 1 );
    wWrapMethod( 0, _wxImage, "loadfile", wxImage_LoadFile, 1, 2 );
    wWrapMethod( 0, _wxImage, "loadmimefile", wxImage_LoadMimeFile, 2, 2 );
    wWrapMethod( 0, _wxImage, "ok", wxImage_Ok, 0, 0 );
    wWrapMethod( 0, _wxImage, "removehandler", wxImage_RemoveHandler, 1, 1 );
    wWrapMethod( 0, _wxImage, "savefile", wxImage_SaveFile, 2, 2 );
    wWrapMethod( 0, _wxImage, "savemimefile", wxImage_SaveMimeFile, 2, 2 );
    wWrapMethod( 0, _wxImage, "mirror", wxImage_Mirror, 0, 1 );
    wWrapMethod( 0, _wxImage, "replace", wxImage_Replace, 6, 6 );
    wWrapMethod( 0, _wxImage, "rotate", wxImage_Rotate, 2, 4 );
    wWrapMethod( 0, _wxImage, "rotate90", wxImage_Rotate90, 0, 1 );
    wWrapMethod( 0, _wxImage, "scale", wxImage_Scale, 2, 2 );
    wWrapMethod( 0, _wxImage, "setdata", wxImage_SetData, 1, 1 );
    wWrapMethod( 0, _wxImage, "setmask", wxImage_SetMask, 0, 1 );
    wWrapMethod( 0, _wxImage, "setmaskcolour", wxImage_SetMaskColour, 3, 3 );
    wWrapMethod( 0, _wxImage, "setmaskcolor", wxImage_SetMaskColour, 3, 3 );
    wWrapMethod( 0, _wxImage, "setpalette", wxImage_SetPalette, 1, 1 );
    wWrapMethod( 0, _wxImage, "setrgb", wxImage_SetRGB, 5, 5 );
    wWrapMethod( 0, _wxImageList, "del", wxImageList_del, 0, 0 );
    wWrapMethod( 0, _wxImageList, "new", wxImageList_new, 0, 0 );
    wWrapMethod( 0, _wxImageList, "add", wxImageList_Add, 1, 2 );
    wWrapMethod( 0, _wxImageList, "addwithcolourmask", wxImageList_AddWithColourMask, 2, 2 );
    wWrapMethod( 0, _wxImageList, "addicon", wxImageList_AddIcon, 1, 1 );
    wWrapMethod( 0, _wxImageList, "create", wxImageList_Create, 2, 4 );
    wWrapMethod( 0, _wxImageList, "draw", wxImageList_Draw, 4, 6 );
    wWrapMethod( 0, _wxImageList, "getimagecount", wxImageList_GetImageCount, 0, 0 );
    wWrapMethod( 0, _wxImageList, "getsize", wxImageList_GetSize, 1, 0 );
    wWrapMethod( 0, _wxImageList, "getsizewidth", wxImageList_GetSizeWidth, 1, 0 );
    wWrapMethod( 0, _wxImageList, "getsizeheight", wxImageList_GetSizeHeight, 1, 0 );
    wWrapMethod( 0, _wxImageList, "remove", wxImageList_Remove, 1, 1 );
    wWrapMethod( 0, _wxImageList, "removeall", wxImageList_RemoveAll, 0, 0 );
    wWrapMethod( 0, _wxImageList, "replace", wxImageList_Replace, 2, 3 );
    wWrapMethod( 0, _wxImageList, "replaceicon", wxImageList_ReplaceIcon, 2, 2 );
    wWrapMethod( 0, _wxCursor, "del", wxCursor_del, 0, 0 );
    wWrapMethod( 0, _wxEvtHandler, "del", wxEvtHandler_del, 0, 0 );
    wWrapMethod( 0, _wxEvtHandler, "new", wxEvtHandler_new, 0, 0 );
    wWrapMethod( 0, _wxEvtHandler, "finalize", wxEvtHandler_finalize, 0, 0 );
    wWrapMethod( 0, _wxApp, "del", wxApp_del, 0, 0 );
    wWrapMethod( 0, _wxApp, "createlogtarget", wxApp_CreateLogTarget, 0, 0 );
    wWrapMethod( 0, _wxApp, "dispatch", wxApp_Dispatch, 0, 0 );
    wWrapMethod( 0, _wxApp, "getappname", wxApp_GetAppName, 0, 0 );
    wWrapMethod( 0, _wxApp, "getclassname", wxApp_GetClassName, 0, 0 );
    wWrapMethod( 0, _wxApp, "gettopwindow", wxApp_GetTopWindow, 0, 0 );
    wWrapMethod( 0, _wxApp, "getusebestvisual", wxApp_GetUseBestVisual, 0, 0 );
    wWrapMethod( 0, _wxApp, "getvendorname", wxApp_GetVendorName, 0, 0 );
    wWrapMethod( 0, _wxApp, "exitmainloop", wxApp_ExitMainLoop, 0, 0 );
    wWrapMethod( 0, _wxApp, "initialized", wxApp_Initialized, 0, 0 );
    wWrapMethod( 0, _wxApp, "mainloop", wxApp_MainLoop, 0, 0 );
    wWrapMethod( 0, _wxApp, "pending", wxApp_Pending, 0, 0 );
    wWrapMethod( 0, _wxApp, "sendidleevents", wxApp_SendIdleEvents, 0, 0 );
    wWrapMethod( 0, _wxApp, "setappname", wxApp_SetAppName, 1, 1 );
    wWrapMethod( 0, _wxApp, "setclassname", wxApp_SetClassName, 1, 1 );
    wWrapMethod( 0, _wxApp, "setexitonframedelete", wxApp_SetExitOnFrameDelete, 1, 1 );
    wWrapMethod( 0, _wxApp, "settopwindow", wxApp_SetTopWindow, 1, 1 );
    wWrapMethod( 0, _wxApp, "setvendorname", wxApp_SetVendorName, 1, 1 );
    wWrapMethod( 0, _wxApp, "getstdicon", wxApp_GetStdIcon, 1, 1 );
    wWrapMethod( 0, _wxApp, "setusebestvisual", wxApp_SetUseBestVisual, 1, 1 );
    wWrapMethod( 0, _wxWindow, "del", wxWindow_del, 0, 0 );
    wWrapMethod( 0, _wxWindow, "new", wxWindow_new, 2, 6 );
    wWrapMethod( 0, _wxWindow, "finalize", wxWindow_finalize, 0, 0 );
    wWrapMethod( 0, _wxWindow, "addchild", wxWindow_AddChild, 1, 1 );
    wWrapMethod( 0, _wxWindow, "capturemouse", wxWindow_CaptureMouse, 0, 0 );
    wWrapMethod( 0, _wxWindow, "center", wxWindow_Center, 0, 1 );
    wWrapMethod( 0, _wxWindow, "centeronparent", wxWindow_CenterOnParent, 0, 1 );
    wWrapMethod( 0, _wxWindow, "centeronscreen", wxWindow_CenterOnScreen, 0, 1 );
    wWrapMethod( 0, _wxWindow, "centre", wxWindow_Centre, 0, 1 );
    wWrapMethod( 0, _wxWindow, "centreonparent", wxWindow_CentreOnParent, 0, 1 );
    wWrapMethod( 0, _wxWindow, "centreonscreen", wxWindow_CentreOnScreen, 0, 1 );
    wWrapMethod( 0, _wxWindow, "clear", wxWindow_Clear, 0, 0 );
    wWrapMethod( 0, _wxWindow, "clienttoscreen", wxWindow_ClientToScreen, 2, 0 );
    wWrapMethod( 0, _wxWindow, "clienttoscreenx", wxWindow_ClientToScreenX, 1, 0 );
    wWrapMethod( 0, _wxWindow, "clienttoscreeny", wxWindow_ClientToScreenY, 1, 0 );
    wWrapMethod( 0, _wxWindow, "close", wxWindow_Close, 0, 1 );
    wWrapMethod( 0, _wxWindow, "convertdialogpointtopixels", wxWindow_ConvertDialogPointToPixels, 1, 1 );
    wWrapMethod( 0, _wxWindow, "convertdialogsizetopixels", wxWindow_ConvertDialogSizeToPixels, 1, 1 );
    wWrapMethod( 0, _wxWindow, "destroy", wxWindow_Destroy, 0, 0 );
    wWrapMethod( 0, _wxWindow, "destroychildren", wxWindow_DestroyChildren, 0, 0 );
    wWrapMethod( 0, _wxWindow, "enable", wxWindow_Enable, 1, 1 );
    wWrapMethod( 0, _wxWindow, "findfocus", wxWindow_FindFocus, 0, 0 );
    wWrapMethod( 0, _wxWindow, "findwindow", wxWindow_FindWindow, 1, 1 );
    wWrapMethod( 0, _wxWindow, "fit", wxWindow_Fit, 0, 0 );
    wWrapMethod( 0, _wxWindow, "fitinside", wxWindow_FitInside, 0, 0 );
    wWrapMethod( 0, _wxWindow, "freeze", wxWindow_Freeze, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getadjustedbestsize", wxWindow_GetAdjustedBestSize, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getbackgroundcolour", wxWindow_GetBackgroundColour, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getbackgroundcolor", wxWindow_GetBackgroundColour, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getbestsize", wxWindow_GetBestSize, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getcaret", wxWindow_GetCaret, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getcapture", wxWindow_GetCapture, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getcharheight", wxWindow_GetCharHeight, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getcharwidth", wxWindow_GetCharWidth, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getchildren", wxWindow_GetChildren, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getclientsizewidth", wxWindow_GetClientSizeWidth, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getclientsizeheight", wxWindow_GetClientSizeHeight, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getclientsize", wxWindow_GetClientSize, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getconstraints", wxWindow_GetConstraints, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getdroptarget", wxWindow_GetDropTarget, 0, 0 );
    wWrapMethod( 0, _wxWindow, "geteventhandler", wxWindow_GetEventHandler, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getextrastyle", wxWindow_GetExtraStyle, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getfont", wxWindow_GetFont, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getforegroundcolour", wxWindow_GetForegroundColour, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getforegroundcolor", wxWindow_GetForegroundColour, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getgrandparent", wxWindow_GetGrandParent, 0, 0 );
    wWrapMethod( 0, _wxWindow, "gethelptext", wxWindow_GetHelpText, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getid", wxWindow_GetId, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getlabel", wxWindow_GetLabel, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getname", wxWindow_GetName, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getparent", wxWindow_GetParent, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getposition", wxWindow_GetPosition, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getpositionx", wxWindow_GetPositionX, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getpositiony", wxWindow_GetPositionY, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getrect", wxWindow_GetRect, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getscrollthumb", wxWindow_GetScrollThumb, 1, 1 );
    wWrapMethod( 0, _wxWindow, "getscrollpos", wxWindow_GetScrollPos, 1, 1 );
    wWrapMethod( 0, _wxWindow, "getscrollrange", wxWindow_GetScrollRange, 1, 1 );
    wWrapMethod( 0, _wxWindow, "getsize", wxWindow_GetSize, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getsizewidth", wxWindow_GetSizeWidth, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getsizeheight", wxWindow_GetSizeHeight, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getsizer", wxWindow_GetSizer, 0, 0 );
    wWrapMethod( 0, _wxWindow, "gettextextent", wxWindow_GetTextExtent, 1, 0 );
    wWrapMethod( 0, _wxWindow, "gettextextentx", wxWindow_GetTextExtentX, 1, 0 );
    wWrapMethod( 0, _wxWindow, "gettextextenty", wxWindow_GetTextExtentY, 1, 0 );
    wWrapMethod( 0, _wxWindow, "gettextextentdescent", wxWindow_GetTextExtentX, 1, 0 );
    wWrapMethod( 0, _wxWindow, "gettextextentexternalleading", wxWindow_GetTextExtentX, 1, 0 );
    wWrapMethod( 0, _wxWindow, "gettitle", wxWindow_GetTitle, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getupdateregion", wxWindow_GetUpdateRegion, 0, 0 );
    wWrapMethod( 0, _wxWindow, "gettooltip", wxWindow_GetToolTip, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getvalidator", wxWindow_GetValidator, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getvirtualsize", wxWindow_GetVirtualSize, 0, 0 );
    wWrapMethod( 0, _wxWindow, "getwindowstyleflag", wxWindow_GetWindowStyleFlag, 0, 0 );
    wWrapMethod( 0, _wxWindow, "hascapture", wxWindow_HasCapture, 0, 0 );
    wWrapMethod( 0, _wxWindow, "hide", wxWindow_Hide, 0, 0 );
    wWrapMethod( 0, _wxWindow, "initdialog", wxWindow_InitDialog, 0, 0 );
    wWrapMethod( 0, _wxWindow, "isenabled", wxWindow_IsEnabled, 0, 0 );
    wWrapMethod( 0, _wxWindow, "isexposed", wxWindow_IsExposed, 2, 2 );
    wWrapMethod( 0, _wxWindow, "isexposedpoint", wxWindow_IsExposedPoint, 1, 1 );
    wWrapMethod( 0, _wxWindow, "isexposedrect", wxWindow_IsExposedRect, 1, 1 );
    wWrapMethod( 0, _wxWindow, "isretained", wxWindow_IsRetained, 0, 0 );
    wWrapMethod( 0, _wxWindow, "isshown", wxWindow_IsShown, 0, 0 );
    wWrapMethod( 0, _wxWindow, "istoplevel", wxWindow_IsTopLevel, 0, 0 );
    wWrapMethod( 0, _wxWindow, "layout", wxWindow_Layout, 0, 0 );
    wWrapMethod( 0, _wxWindow, "lower", wxWindow_Lower, 0, 0 );
    wWrapMethod( 0, _wxWindow, "makemodal", wxWindow_MakeModal, 1, 1 );
    wWrapMethod( 0, _wxWindow, "move", wxWindow_Move, 2, 2 );
    wWrapMethod( 0, _wxWindow, "movexy", wxWindow_MoveXY, 1, 1 );
    wWrapMethod( 0, _wxWindow, "popeventhandler", wxWindow_PopEventHandler, 0, 1 );
    wWrapMethod( 0, _wxWindow, "popupmenu", wxWindow_PopupMenu, 2, 2 );
    wWrapMethod( 0, _wxWindow, "popupmenuxy", wxWindow_PopupMenuXY, 3, 3 );
    wWrapMethod( 0, _wxWindow, "pusheventhandler", wxWindow_PushEventHandler, 1, 1 );
    wWrapMethod( 0, _wxWindow, "raise", wxWindow_Raise, 0, 0 );
    wWrapMethod( 0, _wxWindow, "refresh", wxWindow_Refresh, 0, 2 );
    wWrapMethod( 0, _wxWindow, "releasemouse", wxWindow_ReleaseMouse, 0, 0 );
    wWrapMethod( 0, _wxWindow, "removechild", wxWindow_RemoveChild, 1, 1 );
    wWrapMethod( 0, _wxWindow, "removeeventhandler", wxWindow_RemoveEventHandler, 1, 1 );
    wWrapMethod( 0, _wxWindow, "reparent", wxWindow_Reparent, 1, 1 );
    wWrapMethod( 0, _wxWindow, "screentoclient", wxWindow_ScreenToClient, 1, 1 );
    wWrapMethod( 0, _wxWindow, "screentoclientxy", wxWindow_ScreenToClientXY, 2, 2 );
    wWrapMethod( 0, _wxWindow, "scrolllines", wxWindow_ScrollLines, 1, 1 );
    wWrapMethod( 0, _wxWindow, "scrollpages", wxWindow_ScrollPages, 1, 1 );
    wWrapMethod( 0, _wxWindow, "scrollwindow", wxWindow_ScrollWindow, 2, 3 );
    wWrapMethod( 0, _wxWindow, "setacceleratortable", wxWindow_SetAcceleratorTable, 1, 1 );
    wWrapMethod( 0, _wxWindow, "setautolayout", wxWindow_SetAutoLayout, 1, 1 );
    wWrapMethod( 0, _wxWindow, "setbackgroundcolour", wxWindow_SetBackgroundColour, 1, 1 );
    wWrapMethod( 0, _wxWindow, "setbackgroundcolor", wxWindow_SetBackgroundColour, 1, 1 );
    wWrapMethod( 0, _wxWindow, "setcaret", wxWindow_SetCaret, 1, 1 );
    wWrapMethod( 0, _wxWindow, "setclientsize", wxWindow_SetClientSize, 1, 1 );
    wWrapMethod( 0, _wxWindow, "setclientsizewh", wxWindow_SetClientSizeWH, 2, 2 );
    wWrapMethod( 0, _wxWindow, "setcontainingsizer", wxWindow_SetContainingSizer, 1, 1 );
    wWrapMethod( 0, _wxWindow, "setcursor", wxWindow_SetCursor, 1, 1 );
    wWrapMethod( 0, _wxWindow, "setconstraints", wxWindow_SetConstraints, 1, 1 );
    wWrapMethod( 0, _wxWindow, "setdroptarget", wxWindow_SetDropTarget, 1, 1 );
    wWrapMethod( 0, _wxWindow, "seteventhandler", wxWindow_SetEventHandler, 1, 1 );
    wWrapMethod( 0, _wxWindow, "setextrastyle", wxWindow_SetExtraStyle, 1, 1 );
    wWrapMethod( 0, _wxWindow, "setfocus", wxWindow_SetFocus, 0, 0 );
    wWrapMethod( 0, _wxWindow, "setfocusfromkbd", wxWindow_SetFocusFromKbd, 0, 0 );
    wWrapMethod( 0, _wxWindow, "setfont", wxWindow_SetFont, 1, 1 );
    wWrapMethod( 0, _wxWindow, "setforegroundcolour", wxWindow_SetForegroundColour, 1, 1 );
    wWrapMethod( 0, _wxWindow, "setforegroundcolor", wxWindow_SetForegroundColour, 1, 1 );
    wWrapMethod( 0, _wxWindow, "sethelptext", wxWindow_SetHelpText, 1, 1 );
    wWrapMethod( 0, _wxWindow, "setid", wxWindow_SetId, 1, 1 );
    wWrapMethod( 0, _wxWindow, "setname", wxWindow_SetName, 1, 1 );
    wWrapMethod( 0, _wxWindow, "setscrollbar", wxWindow_SetScrollbar, 4, 5 );
    wWrapMethod( 0, _wxWindow, "setscrollpos", wxWindow_SetScrollPos, 2, 3 );
    wWrapMethod( 0, _wxWindow, "setdimensions", wxWindow_SetDimensions, 4, 5 );
    wWrapMethod( 0, _wxWindow, "setsize", wxWindow_SetSize, 2, 2 );
    wWrapMethod( 0, _wxWindow, "setposition", wxWindow_SetPosition, 1, 1 );
    wWrapMethod( 0, _wxWindow, "setsizehints", wxWindow_SetSizeHints, 0, 6 );
    wWrapMethod( 0, _wxWindow, "setsizer", wxWindow_SetSizer, 1, 1 );
    wWrapMethod( 0, _wxWindow, "setsizerandfit", wxWindow_SetSizerAndFit, 1, 2 );
    wWrapMethod( 0, _wxWindow, "settitle", wxWindow_SetTitle, 1, 1 );
    wWrapMethod( 0, _wxWindow, "setthemeenabled", wxWindow_SetThemeEnabled, 1, 1 );
    wWrapMethod( 0, _wxWindow, "setvalidator", wxWindow_SetValidator, 1, 1 );
    wWrapMethod( 0, _wxWindow, "settooltip", wxWindow_SetToolTip, 1, 1 );
    wWrapMethod( 0, _wxWindow, "setwindowstyle", wxWindow_SetWindowStyle, 1, 1 );
    wWrapMethod( 0, _wxWindow, "setwindowstyleflag", wxWindow_SetWindowStyleFlag, 1, 1 );
    wWrapMethod( 0, _wxWindow, "show", wxWindow_Show, 1, 1 );
    wWrapMethod( 0, _wxWindow, "thaw", wxWindow_Thaw, 0, 0 );
    wWrapMethod( 0, _wxWindow, "transferdatafromwindow", wxWindow_TransferDataFromWindow, 0, 0 );
    wWrapMethod( 0, _wxWindow, "transferdatatowindow", wxWindow_TransferDataToWindow, 0, 0 );
    wWrapMethod( 0, _wxWindow, "update", wxWindow_Update, 0, 0 );
    wWrapMethod( 0, _wxWindow, "validate", wxWindow_Validate, 0, 0 );
    wWrapMethod( 0, _wxWindow, "warppointer", wxWindow_WarpPointer, 2, 2 );
    wWrapMethod( 0, _wxPanel, "del", wxPanel_del, 0, 0 );
    wWrapMethod( 0, _wxPanel, "new", wxPanel_new, 2, 6 );
    wWrapMethod( 0, _wxPanel, "finalize", wxPanel_finalize, 0, 0 );
    wWrapMethod( 0, _wxPanel, "create", wxPanel_Create, 2, 6 );
    wWrapMethod( 0, _wxPanel, "initdialog", wxPanel_InitDialog, 0, 0 );
    wWrapMethod( 0, _wxPanel, "setdefaultitem", wxPanel_SetDefaultItem, 1, 1 );
    wWrapMethod( 0, _wxDialog, "del", wxDialog_del, 0, 0 );
    wWrapMethod( 0, _wxDialog, "new", wxDialog_new, 3, 7 );
    wWrapMethod( 0, _wxDialog, "finalize", wxDialog_finalize, 0, 0 );
    wWrapMethod( 0, _wxDialog, "centre", wxDialog_Centre, 0, 1 );
    wWrapMethod( 0, _wxDialog, "center", wxDialog_Centre, 0, 1 );
    wWrapMethod( 0, _wxDialog, "create", wxDialog_Create, 3, 7 );
    wWrapMethod( 0, _wxDialog, "endmodal", wxDialog_EndModal, 1, 1 );
    wWrapMethod( 0, _wxDialog, "getreturncode", wxDialog_GetReturnCode, 0, 0 );
    wWrapMethod( 0, _wxDialog, "gettitle", wxDialog_GetTitle, 0, 0 );
    wWrapMethod( 0, _wxDialog, "iconize", wxDialog_Iconize, 1, 1 );
    wWrapMethod( 0, _wxDialog, "isiconized", wxDialog_IsIconized, 0, 0 );
    wWrapMethod( 0, _wxDialog, "ismodal", wxDialog_IsModal, 0, 0 );
    wWrapMethod( 0, _wxDialog, "setmodal", wxDialog_SetModal, 1, 1 );
    wWrapMethod( 0, _wxDialog, "setreturncode", wxDialog_SetReturnCode, 1, 1 );
    wWrapMethod( 0, _wxDialog, "settitle", wxDialog_SetTitle, 1, 1 );
    wWrapMethod( 0, _wxDialog, "show", wxDialog_Show, 1, 1 );
    wWrapMethod( 0, _wxDialog, "showmodal", wxDialog_ShowModal, 0, 0 );
    wWrapMethod( 0, _wxFindReplaceData, "del", wxFindReplaceData_del, 0, 0 );
    wWrapMethod( 0, _wxFindReplaceData, "new", wxFindReplaceData_new, 0, 1 );
    wWrapMethod( 0, _wxFindReplaceData, "getfindstring", wxFindReplaceData_GetFindString, 0, 0 );
    wWrapMethod( 0, _wxFindReplaceData, "getreplacestring", wxFindReplaceData_GetReplaceString, 0, 0 );
    wWrapMethod( 0, _wxFindReplaceData, "getflags", wxFindReplaceData_GetFlags, 0, 0 );
    wWrapMethod( 0, _wxFindReplaceData, "setflags", wxFindReplaceData_SetFlags, 1, 1 );
    wWrapMethod( 0, _wxFindReplaceData, "setfindstring", wxFindReplaceData_SetFindString, 1, 1 );
    wWrapMethod( 0, _wxFindReplaceData, "setreplacestring", wxFindReplaceData_SetReplaceString, 1, 1 );
    wWrapMethod( 0, _wxFindReplaceDialog, "del", wxFindReplaceDialog_del, 0, 0 );
    wWrapMethod( 0, _wxFindReplaceDialog, "new", wxFindReplaceDialog_new, 3, 4 );
    wWrapMethod( 0, _wxFindReplaceDialog, "finalize", wxFindReplaceDialog_finalize, 0, 0 );
    wWrapMethod( 0, _wxFindReplaceDialog, "create", wxFindReplaceDialog_Create, 3, 4 );
    wWrapMethod( 0, _wxFindReplaceDialog, "getdata", wxFindReplaceDialog_GetData, 0, 0 );
    wWrapMethod( 0, _wxFrame, "del", wxFrame_del, 0, 0 );
    wWrapMethod( 0, _wxFrame, "new", wxFrame_new, 3, 7 );
    wWrapMethod( 0, _wxFrame, "finalize", wxFrame_finalize, 0, 0 );
    wWrapMethod( 0, _wxFrame, "centre", wxFrame_Centre, 0, 1 );
    wWrapMethod( 0, _wxFrame, "center", wxFrame_Centre, 0, 1 );
    wWrapMethod( 0, _wxFrame, "command", wxFrame_Command, 1, 1 );
    wWrapMethod( 0, _wxFrame, "create", wxFrame_Create, 3, 7 );
    wWrapMethod( 0, _wxFrame, "createstatusbar", wxFrame_CreateStatusBar, 0, 4 );
    wWrapMethod( 0, _wxFrame, "createtoolbar", wxFrame_CreateToolBar, 0, 3 );
    wWrapMethod( 0, _wxFrame, "getclientareaorigin", wxFrame_GetClientAreaOrigin, 0, 0 );
    wWrapMethod( 0, _wxFrame, "getmenubar", wxFrame_GetMenuBar, 0, 0 );
    wWrapMethod( 0, _wxFrame, "getstatusbar", wxFrame_GetStatusBar, 0, 0 );
    wWrapMethod( 0, _wxFrame, "gettitle", wxFrame_GetTitle, 0, 0 );
    wWrapMethod( 0, _wxFrame, "gettoolbar", wxFrame_GetToolBar, 0, 0 );
    wWrapMethod( 0, _wxFrame, "iconize", wxFrame_Iconize, 1, 1 );
    wWrapMethod( 0, _wxFrame, "isiconized", wxFrame_IsIconized, 0, 0 );
    wWrapMethod( 0, _wxFrame, "ismaximized", wxFrame_IsMaximized, 0, 0 );
    wWrapMethod( 0, _wxFrame, "maximize", wxFrame_Maximize, 1, 1 );
    wWrapMethod( 0, _wxFrame, "seticon", wxFrame_SetIcon, 1, 1 );
    wWrapMethod( 0, _wxFrame, "setmenubar", wxFrame_SetMenuBar, 1, 1 );
    wWrapMethod( 0, _wxFrame, "setstatusbar", wxFrame_SetStatusBar, 1, 1 );
    wWrapMethod( 0, _wxFrame, "setstatustext", wxFrame_SetStatusText, 1, 2 );
    wWrapMethod( 0, _wxFrame, "setstatuswidths", wxFrame_SetStatusWidths, 2, 2 );
    wWrapMethod( 0, _wxFrame, "settoolbar", wxFrame_SetToolBar, 1, 1 );
    wWrapMethod( 0, _wxFrame, "settitle", wxFrame_SetTitle, 1, 1 );
    wWrapMethod( 0, _wxMDIParentFrame, "del", wxMDIParentFrame_del, 0, 0 );
    wWrapMethod( 0, _wxMDIParentFrame, "new", wxMDIParentFrame_new, 3, 7 );
    wWrapMethod( 0, _wxMDIParentFrame, "finalize", wxMDIParentFrame_finalize, 0, 0 );
    wWrapMethod( 0, _wxMDIParentFrame, "activatenext", wxMDIParentFrame_ActivateNext, 0, 0 );
    wWrapMethod( 0, _wxMDIParentFrame, "activateprevious", wxMDIParentFrame_ActivatePrevious, 0, 0 );
    wWrapMethod( 0, _wxMDIParentFrame, "arrangeicons", wxMDIParentFrame_ArrangeIcons, 0, 0 );
    wWrapMethod( 0, _wxMDIParentFrame, "cascade", wxMDIParentFrame_Cascade, 0, 0 );
    wWrapMethod( 0, _wxMDIParentFrame, "create", wxMDIParentFrame_Create, 3, 7 );
    wWrapMethod( 0, _wxMDIParentFrame, "getclientsize", wxMDIParentFrame_GetClientSize, 0, 0 );
    wWrapMethod( 0, _wxMDIParentFrame, "getclientsizewidth", wxMDIParentFrame_GetClientSizeWidth, 0, 0 );
    wWrapMethod( 0, _wxMDIParentFrame, "getclientsizeheight", wxMDIParentFrame_GetClientSizeHeight, 0, 0 );
    wWrapMethod( 0, _wxMDIParentFrame, "getactivechild", wxMDIParentFrame_GetActiveChild, 0, 0 );
    wWrapMethod( 0, _wxMDIParentFrame, "getclientwindow", wxMDIParentFrame_GetClientWindow, 0, 0 );
    wWrapMethod( 0, _wxMDIParentFrame, "gettoolbar", wxMDIParentFrame_GetToolBar, 0, 0 );
    wWrapMethod( 0, _wxMDIParentFrame, "settoolbar", wxMDIParentFrame_SetToolBar, 1, 1 );
    wWrapMethod( 0, _wxMDIParentFrame, "tile", wxMDIParentFrame_Tile, 0, 0 );
    wWrapMethod( 0, _wxMDIChildFrame, "del", wxMDIChildFrame_del, 0, 0 );
    wWrapMethod( 0, _wxMDIChildFrame, "new", wxMDIChildFrame_new, 3, 7 );
    wWrapMethod( 0, _wxMDIChildFrame, "finalize", wxMDIChildFrame_finalize, 0, 0 );
    wWrapMethod( 0, _wxMDIChildFrame, "activate", wxMDIChildFrame_Activate, 0, 0 );
    wWrapMethod( 0, _wxMDIChildFrame, "create", wxMDIChildFrame_Create, 3, 7 );
    wWrapMethod( 0, _wxMDIChildFrame, "restore", wxMDIChildFrame_Restore, 0, 0 );
    wWrapMethod( 0, _wxMiniFrame, "del", wxMiniFrame_del, 0, 0 );
    wWrapMethod( 0, _wxMiniFrame, "new", wxMiniFrame_new, 3, 7 );
    wWrapMethod( 0, _wxMiniFrame, "finalize", wxMiniFrame_finalize, 0, 0 );
    wWrapMethod( 0, _wxMiniFrame, "create", wxMiniFrame_Create, 3, 7 );
    wWrapMethod( 0, _wxScrolledWindow, "del", wxScrolledWindow_del, 0, 0 );
    wWrapMethod( 0, _wxScrolledWindow, "new", wxScrolledWindow_new, 1, 6 );
    wWrapMethod( 0, _wxScrolledWindow, "finalize", wxScrolledWindow_finalize, 0, 0 );
    wWrapMethod( 0, _wxScrolledWindow, "calcscrolledposition", wxScrolledWindow_CalcScrolledPosition, 4, 4 );
    wWrapMethod( 0, _wxScrolledWindow, "calcunscrolledposition", wxScrolledWindow_CalcUnscrolledPosition, 4, 4 );
    wWrapMethod( 0, _wxScrolledWindow, "create", wxScrolledWindow_Create, 1, 6 );
    wWrapMethod( 0, _wxScrolledWindow, "enablescrolling", wxScrolledWindow_EnableScrolling, 2, 2 );
    wWrapMethod( 0, _wxScrolledWindow, "getscrollpixelsperunit", wxScrolledWindow_GetScrollPixelsPerUnit, 0, 0 );
    wWrapMethod( 0, _wxScrolledWindow, "getscrollpixelsperunitx", wxScrolledWindow_GetScrollPixelsPerUnitX, 0, 0 );
    wWrapMethod( 0, _wxScrolledWindow, "getscrollpixelsperunity", wxScrolledWindow_GetScrollPixelsPerUnitY, 0, 0 );
    wWrapMethod( 0, _wxScrolledWindow, "getvirtualsize", wxScrolledWindow_GetVirtualSize, 0, 0 );
    wWrapMethod( 0, _wxScrolledWindow, "getvirtualsizex", wxScrolledWindow_GetVirtualSizeX, 0, 0 );
    wWrapMethod( 0, _wxScrolledWindow, "getvirtualsizey", wxScrolledWindow_GetVirtualSizeY, 0, 0 );
    wWrapMethod( 0, _wxScrolledWindow, "isretained", wxScrolledWindow_IsRetained, 0, 0 );
    wWrapMethod( 0, _wxScrolledWindow, "preparedc", wxScrolledWindow_PrepareDC, 1, 1 );
    wWrapMethod( 0, _wxScrolledWindow, "scroll", wxScrolledWindow_Scroll, 2, 2 );
    wWrapMethod( 0, _wxScrolledWindow, "setscrollbars", wxScrolledWindow_SetScrollbars, 4, 7 );
    wWrapMethod( 0, _wxScrolledWindow, "settargetwindow", wxScrolledWindow_SetTargetWindow, 1, 1 );
    wWrapMethod( 0, _wxScrolledWindow, "getviewstart", wxScrolledWindow_GetViewStart, 0, 0 );
    wWrapMethod( 0, _wxScrolledWindow, "getviewstartx", wxScrolledWindow_GetViewStartX, 0, 0 );
    wWrapMethod( 0, _wxScrolledWindow, "getviewstarty", wxScrolledWindow_GetViewStartY, 0, 0 );
    wWrapMethod( 0, _wxHtmlFilter, "del", wxHtmlFilter_del, 0, 0 );
    wWrapMethod( 0, _wxHtmlWindow, "del", wxHtmlWindow_del, 0, 0 );
    wWrapMethod( 0, _wxHtmlWindow, "new", wxHtmlWindow_new, 1, 6 );
    wWrapMethod( 0, _wxHtmlWindow, "addfilter", wxHtmlWindow_AddFilter, 1, 1 );
    wWrapMethod( 0, _wxHtmlWindow, "appendtopage", wxHtmlWindow_AppendToPage, 1, 1 );
    wWrapMethod( 0, _wxHtmlWindow, "getopenedanchor", wxHtmlWindow_GetOpenedAnchor, 0, 0 );
    wWrapMethod( 0, _wxHtmlWindow, "getopenedpage", wxHtmlWindow_GetOpenedPage, 0, 0 );
    wWrapMethod( 0, _wxHtmlWindow, "getopenedpagetitle", wxHtmlWindow_GetOpenedPageTitle, 0, 0 );
    wWrapMethod( 0, _wxHtmlWindow, "getrelatedframe", wxHtmlWindow_GetRelatedFrame, 0, 0 );
    wWrapMethod( 0, _wxHtmlWindow, "historyback", wxHtmlWindow_HistoryBack, 0, 0 );
    wWrapMethod( 0, _wxHtmlWindow, "historycanback", wxHtmlWindow_HistoryCanBack, 0, 0 );
    wWrapMethod( 0, _wxHtmlWindow, "historycanforward", wxHtmlWindow_HistoryCanForward, 0, 0 );
    wWrapMethod( 0, _wxHtmlWindow, "historyclear", wxHtmlWindow_HistoryClear, 0, 0 );
    wWrapMethod( 0, _wxHtmlWindow, "historyforward", wxHtmlWindow_HistoryForward, 0, 0 );
    wWrapMethod( 0, _wxHtmlWindow, "loadpage", wxHtmlWindow_LoadPage, 1, 1 );
    wWrapMethod( 0, _wxHtmlWindow, "readcustomization", wxHtmlWindow_ReadCustomization, 1, 2 );
    wWrapMethod( 0, _wxHtmlWindow, "setborders", wxHtmlWindow_SetBorders, 1, 1 );
    wWrapMethod( 0, _wxHtmlWindow, "setfonts", wxHtmlWindow_SetFonts, 2, 3 );
    wWrapMethod( 0, _wxHtmlWindow, "setpage", wxHtmlWindow_SetPage, 1, 1 );
    wWrapMethod( 0, _wxHtmlWindow, "setrelatedframe", wxHtmlWindow_SetRelatedFrame, 2, 2 );
    wWrapMethod( 0, _wxHtmlWindow, "setrelatedstatusbar", wxHtmlWindow_SetRelatedStatusBar, 1, 1 );
    wWrapMethod( 0, _wxHtmlWindow, "writecustomization", wxHtmlWindow_WriteCustomization, 1, 2 );
    wWrapMethod( 0, _wxSplitterWindow, "del", wxSplitterWindow_del, 0, 0 );
    wWrapMethod( 0, _wxSplitterWindow, "new", wxSplitterWindow_new, 2, 6 );
    wWrapMethod( 0, _wxSplitterWindow, "finalize", wxSplitterWindow_finalize, 0, 0 );
    wWrapMethod( 0, _wxSplitterWindow, "create", wxSplitterWindow_Create, 1, 6 );
    wWrapMethod( 0, _wxSplitterWindow, "getminimumpanesize", wxSplitterWindow_GetMinimumPaneSize, 0, 0 );
    wWrapMethod( 0, _wxSplitterWindow, "getsashposition", wxSplitterWindow_GetSashPosition, 0, 0 );
    wWrapMethod( 0, _wxSplitterWindow, "getsplitmode", wxSplitterWindow_GetSplitMode, 0, 0 );
    wWrapMethod( 0, _wxSplitterWindow, "getwindow1", wxSplitterWindow_GetWindow1, 0, 0 );
    wWrapMethod( 0, _wxSplitterWindow, "getwindow2", wxSplitterWindow_GetWindow2, 0, 0 );
    wWrapMethod( 0, _wxSplitterWindow, "initialize", wxSplitterWindow_Initialize, 1, 1 );
    wWrapMethod( 0, _wxSplitterWindow, "issplit", wxSplitterWindow_IsSplit, 0, 0 );
    wWrapMethod( 0, _wxSplitterWindow, "replacewindow", wxSplitterWindow_ReplaceWindow, 2, 2 );
    wWrapMethod( 0, _wxSplitterWindow, "setsashposition", wxSplitterWindow_SetSashPosition, 1, 2 );
    wWrapMethod( 0, _wxSplitterWindow, "setminimumpanesize", wxSplitterWindow_SetMinimumPaneSize, 1, 1 );
    wWrapMethod( 0, _wxSplitterWindow, "setsplitmode", wxSplitterWindow_SetSplitMode, 1, 1 );
    wWrapMethod( 0, _wxSplitterWindow, "splithorizontally", wxSplitterWindow_SplitHorizontally, 2, 3 );
    wWrapMethod( 0, _wxSplitterWindow, "splitvertically", wxSplitterWindow_SplitVertically, 2, 3 );
    wWrapMethod( 0, _wxSplitterWindow, "unsplit", wxSplitterWindow_Unsplit, 0, 1 );
    wWrapMethod( 0, _wxStatusBar, "del", wxStatusBar_del, 0, 0 );
    wWrapMethod( 0, _wxStatusBar, "finalize", wxStatusBar_finalize, 0, 0 );
    wWrapMethod( 0, _wxStatusBar, "create", wxStatusBar_Create, 3, 4 );
    wWrapMethod( 0, _wxStatusBar, "getfieldrect", wxStatusBar_GetFieldRect, 2, 2 );
    wWrapMethod( 0, _wxStatusBar, "getfieldscount", wxStatusBar_GetFieldsCount, 0, 0 );
    wWrapMethod( 0, _wxStatusBar, "getstatustext", wxStatusBar_GetStatusText, 0, 1 );
    wWrapMethod( 0, _wxStatusBar, "setfieldscount", wxStatusBar_SetFieldsCount, 0, 2 );
    wWrapMethod( 0, _wxStatusBar, "setminheight", wxStatusBar_SetMinHeight, 1, 1 );
    wWrapMethod( 0, _wxStatusBar, "setstatustext", wxStatusBar_SetStatusText, 1, 2 );
    wWrapMethod( 0, _wxStatusBar, "setstatuswidths", wxStatusBar_SetStatusWidths, 2, 2 );
    wWrapMethod( 0, _wxControl, "del", wxControl_del, 0, 0 );
    wWrapMethod( 0, _wxControl, "command", wxControl_Command, 1, 1 );
    wWrapMethod( 0, _wxControl, "getlabel", wxControl_GetLabel, 0, 0 );
    wWrapMethod( 0, _wxControl, "setlabel", wxControl_SetLabel, 1, 1 );
    wWrapMethod( 0, _wxButton, "del", wxButton_del, 0, 0 );
    wWrapMethod( 0, _wxButton, "new", wxButton_new, 3, 8 );
    wWrapMethod( 0, _wxButton, "finalize", wxButton_finalize, 0, 0 );
    wWrapMethod( 0, _wxButton, "create", wxButton_Create, 3, 8 );
    wWrapMethod( 0, _wxButton, "getlabel", wxButton_GetLabel, 0, 0 );
    wWrapMethod( 0, _wxButton, "getdefaultsize", wxButton_GetDefaultSize, 0, 0 );
    wWrapMethod( 0, _wxButton, "setdefault", wxButton_SetDefault, 0, 0 );
    wWrapMethod( 0, _wxButton, "setlabel", wxButton_SetLabel, 1, 1 );
    wWrapMethod( 0, _wxBitmapButton, "del", wxBitmapButton_del, 0, 0 );
    wWrapMethod( 0, _wxBitmapButton, "new", wxBitmapButton_new, 3, 8 );
    wWrapMethod( 0, _wxBitmapButton, "finalize", wxBitmapButton_finalize, 0, 0 );
    wWrapMethod( 0, _wxBitmapButton, "create", wxBitmapButton_Create, 4, 8 );
    wWrapMethod( 0, _wxBitmapButton, "getbitmapdisabled", wxBitmapButton_GetBitmapDisabled, 0, 0 );
    wWrapMethod( 0, _wxBitmapButton, "getbitmapfocus", wxBitmapButton_GetBitmapFocus, 0, 0 );
    wWrapMethod( 0, _wxBitmapButton, "getbitmaplabel", wxBitmapButton_GetBitmapLabel, 0, 0 );
    wWrapMethod( 0, _wxBitmapButton, "getbitmapselected", wxBitmapButton_GetBitmapSelected, 0, 0 );
    wWrapMethod( 0, _wxBitmapButton, "setbitmapdisabled", wxBitmapButton_SetBitmapDisabled, 1, 1 );
    wWrapMethod( 0, _wxBitmapButton, "setbitmapfocus", wxBitmapButton_SetBitmapFocus, 1, 1 );
    wWrapMethod( 0, _wxBitmapButton, "setbitmaplabel", wxBitmapButton_SetBitmapLabel, 1, 1 );
    wWrapMethod( 0, _wxBitmapButton, "setbitmapselected", wxBitmapButton_SetBitmapSelected, 1, 1 );
    wWrapMethod( 0, _wxDateTime, "del", wxDateTime_del, 0, 0 );
    wWrapMethod( 0, _wxDateTime, "new", wxDateTime_new, 0, 0 );
    wWrapMethod( 0, _wxDateTime, "settocurrent", wxDateTime_SetToCurrent, 0, 0 );
    wWrapMethod( 0, _wxDateTime, "settimet", wxDateTime_SetTimeT, 1, 1 );
    wWrapMethod( 0, _wxDateTime, "setjdn", wxDateTime_SetJDN, 1, 1 );
    wWrapMethod( 0, _wxDateTime, "sethms", wxDateTime_SetHMS, 1, 4 );
    wWrapMethod( 0, _wxDateTime, "set", wxDateTime_Set, 1, 7 );
    wWrapMethod( 0, _wxDateTime, "resettime", wxDateTime_ResetTime, 0, 0 );
    wWrapMethod( 0, _wxDateTime, "setyear", wxDateTime_SetYear, 1, 1 );
    wWrapMethod( 0, _wxDateTime, "setmonth", wxDateTime_SetMonth, 1, 1 );
    wWrapMethod( 0, _wxDateTime, "setday", wxDateTime_SetDay, 1, 1 );
    wWrapMethod( 0, _wxDateTime, "sethour", wxDateTime_SetHour, 1, 1 );
    wWrapMethod( 0, _wxDateTime, "setminute", wxDateTime_SetMinute, 1, 1 );
    wWrapMethod( 0, _wxDateTime, "setsecond", wxDateTime_SetSecond, 1, 1 );
    wWrapMethod( 0, _wxDateTime, "setmillisecond", wxDateTime_SetMillisecond, 1, 1 );
    wWrapMethod( 0, _wxDateTime, "isvalid", wxDateTime_IsValid, 0, 0 );
    wWrapMethod( 0, _wxDateTime, "getticks", wxDateTime_GetTicks, 0, 0 );
    wWrapMethod( 0, _wxDateTime, "getyear", wxDateTime_GetYear, 0, 1 );
    wWrapMethod( 0, _wxDateTime, "getmonth", wxDateTime_GetMonth, 0, 1 );
    wWrapMethod( 0, _wxDateTime, "getday", wxDateTime_GetDay, 0, 1 );
    wWrapMethod( 0, _wxDateTime, "getweekdaytz", wxDateTime_GetWeekDayTZ, 0, 1 );
    wWrapMethod( 0, _wxDateTime, "gethour", wxDateTime_GetHour, 0, 1 );
    wWrapMethod( 0, _wxDateTime, "getminute", wxDateTime_GetMinute, 0, 1 );
    wWrapMethod( 0, _wxDateTime, "getsecond", wxDateTime_GetSecond, 0, 1 );
    wWrapMethod( 0, _wxDateTime, "getmillisecond", wxDateTime_GetMillisecond, 0, 1 );
    wWrapMethod( 0, _wxDateTime, "getdayofyear", wxDateTime_GetDayOfYear, 0, 1 );
    wWrapMethod( 0, _wxDateTime, "getweekofyear", wxDateTime_GetWeekOfYear, 0, 2 );
    wWrapMethod( 0, _wxDateTime, "getweekofmonth", wxDateTime_GetWeekOfMonth, 0, 2 );
    wWrapMethod( 0, _wxDateTime, "isworkday", wxDateTime_IsWorkDay, 0, 1 );
    wWrapMethod( 0, _wxDateTime, "setfromdos", wxDateTime_SetFromDOS, 1, 1 );
    wWrapMethod( 0, _wxDateTime, "getasdos", wxDateTime_GetAsDOS, 0, 0 );
    wWrapMethod( 0, _wxDateTime, "isequalto", wxDateTime_IsEqualTo, 1, 1 );
    wWrapMethod( 0, _wxDateTime, "isearlierthan", wxDateTime_IsEarlierThan, 1, 1 );
    wWrapMethod( 0, _wxDateTime, "islaterthan", wxDateTime_IsLaterThan, 1, 1 );
    wWrapMethod( 0, _wxDateTime, "isstrictlybetween", wxDateTime_IsStrictlyBetween, 2, 2 );
    wWrapMethod( 0, _wxDateTime, "isbetween", wxDateTime_IsBetween, 2, 2 );
    wWrapMethod( 0, _wxDateTime, "issamedate", wxDateTime_IsSameDate, 1, 1 );
    wWrapMethod( 0, _wxDateTime, "issametime", wxDateTime_IsSameTime, 1, 1 );
    wWrapMethod( 0, _wxDateTime, "isequalupto", wxDateTime_IsEqualUpTo, 2, 2 );
    wWrapMethod( 0, _wxDateTime, "addts", wxDateTime_AddTS, 1, 1 );
    wWrapMethod( 0, _wxDateTime, "subtractts", wxDateTime_SubtractTS, 1, 1 );
    wWrapMethod( 0, _wxDateTime, "addds", wxDateTime_AddDS, 1, 1 );
    wWrapMethod( 0, _wxDateTime, "subtractds", wxDateTime_SubtractDS, 1, 1 );
    wWrapMethod( 0, _wxDateTime, "subtract", wxDateTime_Subtract, 1, 1 );
    wWrapMethod( 0, _wxDateTime, "parserfc822date", wxDateTime_ParseRfc822Date, 1, 1 );
    wWrapMethod( 0, _wxDateTime, "parseformat", wxDateTime_ParseFormat, 1, 3 );
    wWrapMethod( 0, _wxDateTime, "parsedatetime", wxDateTime_ParseDateTime, 1, 1 );
    wWrapMethod( 0, _wxDateTime, "parsedate", wxDateTime_ParseDate, 1, 1 );
    wWrapMethod( 0, _wxDateTime, "parsetime", wxDateTime_ParseTime, 1, 1 );
    wWrapMethod( 0, _wxDateTime, "format", wxDateTime_Format, 0, 2 );
    wWrapMethod( 0, _wxDateTime, "formatdate", wxDateTime_FormatDate, 0, 0 );
    wWrapMethod( 0, _wxDateTime, "formattime", wxDateTime_FormatTime, 0, 0 );
    wWrapMethod( 0, _wxDateTime, "formatisodate", wxDateTime_FormatISODate, 0, 0 );
    wWrapMethod( 0, _wxDateTime, "formatisotime", wxDateTime_FormatISOTime, 0, 0 );
    wWrapMethod( 0, _wxDateTime, "settoweekdayinsameweek", wxDateTime_SetToWeekDayInSameWeek, 1, 2 );
    wWrapMethod( 0, _wxDateTime, "getweekdayinsameweek", wxDateTime_GetWeekDayInSameWeek, 1, 2 );
    wWrapMethod( 0, _wxDateTime, "settonextweekday", wxDateTime_SetToNextWeekDay, 1, 1 );
    wWrapMethod( 0, _wxDateTime, "getnextweekday", wxDateTime_GetNextWeekDay, 1, 1 );
    wWrapMethod( 0, _wxDateTime, "settoprevweekday", wxDateTime_SetToPrevWeekDay, 1, 1 );
    wWrapMethod( 0, _wxDateTime, "getprevweekday", wxDateTime_GetPrevWeekDay, 1, 1 );
    wWrapMethod( 0, _wxDateTime, "settoweekday", wxDateTime_SetToWeekDay, 1, 4 );
    wWrapMethod( 0, _wxDateTime, "getweekday", wxDateTime_GetWeekDay, 1, 4 );
    wWrapMethod( 0, _wxDateTime, "settolastweekday", wxDateTime_SetToLastWeekDay, 1, 3 );
    wWrapMethod( 0, _wxDateTime, "getlastweekday", wxDateTime_GetLastWeekDay, 1, 3 );
    wWrapMethod( 0, _wxDateTime, "settotheweek", wxDateTime_SetToTheWeek, 1, 3 );
    wWrapMethod( 0, _wxDateTime, "getweek", wxDateTime_GetWeek, 1, 3 );
    wWrapMethod( 0, _wxDateTime, "settolastmonthday", wxDateTime_SetToLastMonthDay, 0, 2 );
    wWrapMethod( 0, _wxDateTime, "getlastmonthday", wxDateTime_GetLastMonthDay, 0, 2 );
    wWrapMethod( 0, _wxDateTime, "settoyearday", wxDateTime_SetToYearDay, 1, 1 );
    wWrapMethod( 0, _wxDateTime, "getyearday", wxDateTime_GetYearDay, 1, 1 );
    wWrapMethod( 0, _wxDateTime, "getjuliandaynumber", wxDateTime_GetJulianDayNumber, 0, 0 );
    wWrapMethod( 0, _wxDateTime, "getjdn", wxDateTime_GetJDN, 0, 0 );
    wWrapMethod( 0, _wxDateTime, "getmodifiedjuliandaynumber", wxDateTime_GetModifiedJulianDayNumber, 0, 0 );
    wWrapMethod( 0, _wxDateTime, "getmjd", wxDateTime_GetMJD, 0, 0 );
    wWrapMethod( 0, _wxDateTime, "getratadie", wxDateTime_GetRataDie, 0, 0 );
    wWrapMethod( 0, _wxDateTime, "totimezone", wxDateTime_ToTimezone, 1, 2 );
    wWrapMethod( 0, _wxDateTime, "maketimezone", wxDateTime_MakeTimezone, 1, 2 );
    wWrapMethod( 0, _wxDateTime, "togmt", wxDateTime_ToGMT, 0, 1 );
    wWrapMethod( 0, _wxDateTime, "makegmt", wxDateTime_MakeGMT, 0, 1 );
    wWrapMethod( 0, _wxDateTime, "isdst", wxDateTime_IsDST, 0, 1 );
    wBuiltinNew( "wxdatetime_convertyeartobc", builtin_wxDateTime_ConvertYearToBC, 1, 1 );
    wBuiltinNew( "wxdatetime_getbegindst", builtin_wxDateTime_GetBeginDST, 0, 2 );
    wBuiltinNew( "wxdatetime_getcountry", builtin_wxDateTime_GetCountry, 0, 0 );
    wBuiltinNew( "wxdatetime_getcurrentyear", builtin_wxDateTime_GetCurrentYear, 0, 1 );
    wBuiltinNew( "wxdatetime_getcurrentmonth", builtin_wxDateTime_GetCurrentMonth, 0, 1 );
    wBuiltinNew( "wxdatetime_getcentury", builtin_wxDateTime_GetCentury, 0, 1 );
    wBuiltinNew( "wxdatetime_getenddst", builtin_wxDateTime_GetEndDST, 0, 2 );
    wBuiltinNew( "wxdatetime_getmonthname", builtin_wxDateTime_GetMonthName, 1, 2 );
    wBuiltinNew( "wxdatetime_getnumberofdaysinyear", builtin_wxDateTime_GetNumberOfDaysInYear, 1, 2 );
    wBuiltinNew( "wxdatetime_getnumberofdaysinmonth", builtin_wxDateTime_GetNumberOfDaysInMonth, 1, 3 );
    wBuiltinNew( "wxdatetime_getweekdayname", builtin_wxDateTime_GetWeekDayName, 1, 2 );
    wBuiltinNew( "wxdatetime_isleapyear", builtin_wxDateTime_IsLeapYear, 0, 2 );
    wBuiltinNew( "wxdatetime_iswesteuropeancountry", builtin_wxDateTime_IsWestEuropeanCountry, 0, 1 );
    wBuiltinNew( "wxdatetime_isdstapplicable", builtin_wxDateTime_IsDSTApplicable, 0, 2 );
    wBuiltinNew( "wxdatetime_wxdatetime", builtin_wxDateTime_wxDateTime, 0, 0 );
    wBuiltinNew( "wxdatetime_setcountry", builtin_wxDateTime_SetCountry, 1, 1 );
    wBuiltinNew( "wxdatetime_today", builtin_wxDateTime_Today, 0, 0 );
    wBuiltinNew( "wxdatetime_unow", builtin_wxDateTime_UNow, 0, 0 );
    wWrapMethod( 0, _wxCalendarCtrl, "del", wxCalendarCtrl_del, 0, 0 );
    wWrapMethod( 0, _wxCalendarCtrl, "new", wxCalendarCtrl_new, 2, 7 );
    wWrapMethod( 0, _wxCalendarCtrl, "create", wxCalendarCtrl_Create, 2, 7 );
    wWrapMethod( 0, _wxCalendarCtrl, "finalize", wxCalendarCtrl_finalize, 0, 0 );
    wWrapMethod( 0, _wxCalendarCtrl, "setdate", wxCalendarCtrl_SetDate, 1, 1 );
    wWrapMethod( 0, _wxCalendarCtrl, "getdate", wxCalendarCtrl_GetDate, 0, 0 );
    wWrapMethod( 0, _wxCalendarCtrl, "enableyearchange", wxCalendarCtrl_EnableYearChange, 0, 1 );
    wWrapMethod( 0, _wxCalendarCtrl, "enablemonthchange", wxCalendarCtrl_EnableMonthChange, 0, 1 );
    wWrapMethod( 0, _wxCalendarCtrl, "enableholidaydisplay", wxCalendarCtrl_EnableHolidayDisplay, 0, 1 );
    wWrapMethod( 0, _wxCalendarCtrl, "setheadercolours", wxCalendarCtrl_SetHeaderColours, 2, 2 );
    wWrapMethod( 0, _wxCalendarCtrl, "setheadercolors", wxCalendarCtrl_SetHeaderColours, 2, 2 );
    wWrapMethod( 0, _wxCalendarCtrl, "getheadercolourfg", wxCalendarCtrl_GetHeaderColourFg, 0, 0 );
    wWrapMethod( 0, _wxCalendarCtrl, "getheadercolorfg", wxCalendarCtrl_GetHeaderColourFg, 0, 0 );
    wWrapMethod( 0, _wxCalendarCtrl, "getheadercolourbg", wxCalendarCtrl_GetHeaderColourBg, 0, 0 );
    wWrapMethod( 0, _wxCalendarCtrl, "getheadercolorbg", wxCalendarCtrl_GetHeaderColourBg, 0, 0 );
    wWrapMethod( 0, _wxCalendarCtrl, "sethighlightcolours", wxCalendarCtrl_SetHighlightColours, 2, 2 );
    wWrapMethod( 0, _wxCalendarCtrl, "sethighlightcolors", wxCalendarCtrl_SetHighlightColours, 2, 2 );
    wWrapMethod( 0, _wxCalendarCtrl, "gethighlightcolourfg", wxCalendarCtrl_GetHighlightColourFg, 0, 0 );
    wWrapMethod( 0, _wxCalendarCtrl, "gethighlightcolorfg", wxCalendarCtrl_GetHighlightColourFg, 0, 0 );
    wWrapMethod( 0, _wxCalendarCtrl, "gethighlightcolourbg", wxCalendarCtrl_GetHighlightColourBg, 0, 0 );
    wWrapMethod( 0, _wxCalendarCtrl, "gethighlightcolorbg", wxCalendarCtrl_GetHighlightColourBg, 0, 0 );
    wWrapMethod( 0, _wxCalendarCtrl, "setholidaycolours", wxCalendarCtrl_SetHolidayColours, 2, 2 );
    wWrapMethod( 0, _wxCalendarCtrl, "setholidaycolors", wxCalendarCtrl_SetHolidayColours, 2, 2 );
    wWrapMethod( 0, _wxCalendarCtrl, "getholidaycolourfg", wxCalendarCtrl_GetHolidayColourFg, 0, 0 );
    wWrapMethod( 0, _wxCalendarCtrl, "getholidaycolorfg", wxCalendarCtrl_GetHolidayColourFg, 0, 0 );
    wWrapMethod( 0, _wxCalendarCtrl, "getholidaycolourbg", wxCalendarCtrl_GetHolidayColourBg, 0, 0 );
    wWrapMethod( 0, _wxCalendarCtrl, "getholidaycolorbg", wxCalendarCtrl_GetHolidayColourBg, 0, 0 );
    wWrapMethod( 0, _wxCalendarCtrl, "getattr", wxCalendarCtrl_GetAttr, 1, 1 );
    wWrapMethod( 0, _wxCalendarCtrl, "setattr", wxCalendarCtrl_SetAttr, 2, 2 );
    wWrapMethod( 0, _wxCalendarCtrl, "setholiday", wxCalendarCtrl_SetHoliday, 1, 1 );
    wWrapMethod( 0, _wxCalendarCtrl, "resetattr", wxCalendarCtrl_ResetAttr, 1, 1 );
    wWrapMethod( 0, _wxCheckBox, "del", wxCheckBox_del, 0, 0 );
    wWrapMethod( 0, _wxCheckBox, "new", wxCheckBox_new, 3, 8 );
    wWrapMethod( 0, _wxCheckBox, "finalize", wxCheckBox_finalize, 0, 0 );
    wWrapMethod( 0, _wxCheckBox, "create", wxCheckBox_Create, 3, 8 );
    wWrapMethod( 0, _wxCheckBox, "getvalue", wxCheckBox_GetValue, 0, 0 );
    wWrapMethod( 0, _wxCheckBox, "setvalue", wxCheckBox_SetValue, 1, 1 );
    wWrapMethod( 0, _wxChoice, "del", wxChoice_del, 0, 0 );
    wWrapMethod( 0, _wxChoice, "new", wxChoice_new, 2, 9 );
    wWrapMethod( 0, _wxChoice, "finalize", wxChoice_finalize, 0, 0 );
    wWrapMethod( 0, _wxChoice, "append", wxChoice_Append, 1, 1 );
    wWrapMethod( 0, _wxChoice, "clear", wxChoice_Clear, 0, 0 );
    wWrapMethod( 0, _wxChoice, "create", wxChoice_Create, 2, 9 );
    wWrapMethod( 0, _wxChoice, "findstring", wxChoice_FindString, 1, 1 );
    wWrapMethod( 0, _wxChoice, "getcolumns", wxChoice_GetColumns, 0, 0 );
    wWrapMethod( 0, _wxChoice, "getclientdata", wxChoice_GetClientData, 1, 1 );
    wWrapMethod( 0, _wxChoice, "getselection", wxChoice_GetSelection, 0, 0 );
    wWrapMethod( 0, _wxChoice, "getstring", wxChoice_GetString, 1, 1 );
    wWrapMethod( 0, _wxChoice, "getstringselection", wxChoice_GetStringSelection, 0, 0 );
    wWrapMethod( 0, _wxChoice, "setclientdata", wxChoice_SetClientData, 2, 2 );
    wWrapMethod( 0, _wxChoice, "setcolumns", wxChoice_SetColumns, 0, 1 );
    wWrapMethod( 0, _wxChoice, "setselection", wxChoice_SetSelection, 1, 1 );
    wWrapMethod( 0, _wxChoice, "setstringselection", wxChoice_SetStringSelection, 1, 1 );
    wWrapMethod( 0, _wxComboBox, "del", wxComboBox_del, 0, 0 );
    wWrapMethod( 0, _wxComboBox, "new", wxComboBox_new, 2, 10 );
    wWrapMethod( 0, _wxComboBox, "finalize", wxComboBox_finalize, 0, 0 );
    wWrapMethod( 0, _wxComboBox, "append", wxComboBox_Append, 1, 1 );
    wWrapMethod( 0, _wxComboBox, "clear", wxComboBox_Clear, 0, 0 );
    wWrapMethod( 0, _wxComboBox, "create", wxComboBox_Create, 2, 10 );
    wWrapMethod( 0, _wxComboBox, "copy", wxComboBox_Copy, 0, 0 );
    wWrapMethod( 0, _wxComboBox, "cut", wxComboBox_Cut, 0, 0 );
    wWrapMethod( 0, _wxComboBox, "delete", wxComboBox_Delete, 1, 1 );
    wWrapMethod( 0, _wxComboBox, "findstring", wxComboBox_FindString, 1, 1 );
    wWrapMethod( 0, _wxComboBox, "getclientdata", wxComboBox_GetClientData, 1, 1 );
    wWrapMethod( 0, _wxComboBox, "getinsertionpoint", wxComboBox_GetInsertionPoint, 0, 0 );
    wWrapMethod( 0, _wxComboBox, "getlastposition", wxComboBox_GetLastPosition, 0, 0 );
    wWrapMethod( 0, _wxComboBox, "getselection", wxComboBox_GetSelection, 0, 0 );
    wWrapMethod( 0, _wxComboBox, "getstring", wxComboBox_GetString, 1, 1 );
    wWrapMethod( 0, _wxComboBox, "getstringselection", wxComboBox_GetStringSelection, 0, 0 );
    wWrapMethod( 0, _wxComboBox, "getvalue", wxComboBox_GetValue, 0, 0 );
    wWrapMethod( 0, _wxComboBox, "paste", wxComboBox_Paste, 0, 0 );
    wWrapMethod( 0, _wxComboBox, "replace", wxComboBox_Replace, 3, 3 );
    wWrapMethod( 0, _wxComboBox, "remove", wxComboBox_Remove, 2, 2 );
    wWrapMethod( 0, _wxComboBox, "setclientdata", wxComboBox_SetClientData, 2, 2 );
    wWrapMethod( 0, _wxComboBox, "setinsertionpoint", wxComboBox_SetInsertionPoint, 1, 1 );
    wWrapMethod( 0, _wxComboBox, "setinsertionpointend", wxComboBox_SetInsertionPointEnd, 0, 0 );
    wWrapMethod( 0, _wxComboBox, "setselection", wxComboBox_SetSelection, 1, 1 );
    wWrapMethod( 0, _wxComboBox, "setmark", wxComboBox_SetMark, 2, 2 );
    wWrapMethod( 0, _wxComboBox, "setvalue", wxComboBox_SetValue, 1, 1 );
    wWrapMethod( 0, _wxGauge, "del", wxGauge_del, 0, 0 );
    wWrapMethod( 0, _wxGauge, "new", wxGauge_new, 3, 8 );
    wWrapMethod( 0, _wxGauge, "finalize", wxGauge_finalize, 0, 0 );
    wWrapMethod( 0, _wxGauge, "create", wxGauge_Create, 3, 8 );
    wWrapMethod( 0, _wxGauge, "getbezelface", wxGauge_GetBezelFace, 0, 0 );
    wWrapMethod( 0, _wxGauge, "getrange", wxGauge_GetRange, 0, 0 );
    wWrapMethod( 0, _wxGauge, "getshadowwidth", wxGauge_GetShadowWidth, 0, 0 );
    wWrapMethod( 0, _wxGauge, "getvalue", wxGauge_GetValue, 0, 0 );
    wWrapMethod( 0, _wxGauge, "setbezelface", wxGauge_SetBezelFace, 1, 1 );
    wWrapMethod( 0, _wxGauge, "setrange", wxGauge_SetRange, 1, 1 );
    wWrapMethod( 0, _wxGauge, "setshadowwidth", wxGauge_SetShadowWidth, 1, 1 );
    wWrapMethod( 0, _wxGauge, "setvalue", wxGauge_SetValue, 1, 1 );
    wWrapMethod( 0, _wxStaticBox, "del", wxStaticBox_del, 0, 0 );
    wWrapMethod( 0, _wxStaticBox, "new", wxStaticBox_new, 3, 7 );
    wWrapMethod( 0, _wxStaticBox, "finalize", wxStaticBox_finalize, 0, 0 );
    wWrapMethod( 0, _wxStaticBox, "create", wxStaticBox_Create, 3, 7 );
    wWrapMethod( 0, _wxListBox, "del", wxListBox_del, 0, 0 );
    wWrapMethod( 0, _wxListBox, "new", wxListBox_new, 2, 9 );
    wWrapMethod( 0, _wxListBox, "finalize", wxListBox_finalize, 0, 0 );
    wWrapMethod( 0, _wxListBox, "append", wxListBox_Append, 1, 1 );
    wWrapMethod( 0, _wxListBox, "clear", wxListBox_Clear, 0, 0 );
    wWrapMethod( 0, _wxListBox, "create", wxListBox_Create, 2, 9 );
    wWrapMethod( 0, _wxListBox, "delete", wxListBox_Delete, 1, 1 );
    wWrapMethod( 0, _wxListBox, "deselect", wxListBox_Deselect, 1, 1 );
    wWrapMethod( 0, _wxListBox, "findstring", wxListBox_FindString, 1, 1 );
    wWrapMethod( 0, _wxListBox, "getclientdata", wxListBox_GetClientData, 1, 1 );
    wWrapMethod( 0, _wxListBox, "getcount", wxListBox_GetCount, 0, 0 );
    wWrapMethod( 0, _wxListBox, "getselection", wxListBox_GetSelection, 0, 0 );
    wWrapMethod( 0, _wxListBox, "getselections", wxListBox_GetSelections, 1, 1 );
    wWrapMethod( 0, _wxListBox, "getstring", wxListBox_GetString, 1, 1 );
    wWrapMethod( 0, _wxListBox, "getstringselection", wxListBox_GetStringSelection, 0, 0 );
    wWrapMethod( 0, _wxListBox, "selected", wxListBox_Selected, 1, 1 );
    wWrapMethod( 0, _wxListBox, "setclientdata", wxListBox_SetClientData, 2, 2 );
    wWrapMethod( 0, _wxListBox, "setfirstitem", wxListBox_SetFirstItem, 1, 1 );
    wWrapMethod( 0, _wxListBox, "setselection", wxListBox_SetSelection, 1, 2 );
    wWrapMethod( 0, _wxListBox, "setstring", wxListBox_SetString, 2, 2 );
    wWrapMethod( 0, _wxListBox, "setstringselection", wxListBox_SetStringSelection, 1, 2 );
    wWrapMethod( 0, _wxCheckListBox, "del", wxCheckListBox_del, 0, 0 );
    wWrapMethod( 0, _wxCheckListBox, "new", wxCheckListBox_new, 2, 9 );
    wWrapMethod( 0, _wxCheckListBox, "finalize", wxCheckListBox_finalize, 0, 0 );
    wWrapMethod( 0, _wxCheckListBox, "check", wxCheckListBox_Check, 1, 2 );
    wWrapMethod( 0, _wxCheckListBox, "ischecked", wxCheckListBox_IsChecked, 1, 1 );
    wWrapMethod( 0, _wxListItem, "del", wxListItem_del, 0, 0 );
    wWrapMethod( 0, _wxListItem, "new", wxListItem_new, 0, 0 );
    wWrapMethod( 0, _wxListItem, "clear", wxListItem_Clear, 0, 0 );
    wWrapMethod( 0, _wxListItem, "getalign", wxListItem_GetAlign, 0, 0 );
    wWrapMethod( 0, _wxListItem, "getbackgroundcolour", wxListItem_GetBackgroundColour, 0, 0 );
    wWrapMethod( 0, _wxListItem, "getcolumn", wxListItem_GetColumn, 0, 0 );
    wWrapMethod( 0, _wxListItem, "getdata", wxListItem_GetData, 0, 0 );
    wWrapMethod( 0, _wxListItem, "getfont", wxListItem_GetFont, 0, 0 );
    wWrapMethod( 0, _wxListItem, "getid", wxListItem_GetId, 0, 0 );
    wWrapMethod( 0, _wxListItem, "getimage", wxListItem_GetImage, 0, 0 );
    wWrapMethod( 0, _wxListItem, "getmask", wxListItem_GetMask, 0, 0 );
    wWrapMethod( 0, _wxListItem, "getstate", wxListItem_GetState, 0, 0 );
    wWrapMethod( 0, _wxListItem, "gettext", wxListItem_GetText, 0, 0 );
    wWrapMethod( 0, _wxListItem, "gettextcolour", wxListItem_GetTextColour, 0, 0 );
    wWrapMethod( 0, _wxListItem, "getwidth", wxListItem_GetWidth, 0, 0 );
    wWrapMethod( 0, _wxListItem, "setalign", wxListItem_SetAlign, 1, 1 );
    wWrapMethod( 0, _wxListItem, "setbackgroundcolour", wxListItem_SetBackgroundColour, 1, 1 );
    wWrapMethod( 0, _wxListItem, "setbackgroundcolor", wxListItem_SetBackgroundColour, 1, 1 );
    wWrapMethod( 0, _wxListItem, "setcolumn", wxListItem_SetColumn, 1, 1 );
    wWrapMethod( 0, _wxListItem, "setdata", wxListItem_SetData, 1, 1 );
    wWrapMethod( 0, _wxListItem, "setfont", wxListItem_SetFont, 1, 1 );
    wWrapMethod( 0, _wxListItem, "setid", wxListItem_SetId, 1, 1 );
    wWrapMethod( 0, _wxListItem, "setimage", wxListItem_SetImage, 1, 1 );
    wWrapMethod( 0, _wxListItem, "setmask", wxListItem_SetMask, 1, 1 );
    wWrapMethod( 0, _wxListItem, "setstate", wxListItem_SetState, 1, 1 );
    wWrapMethod( 0, _wxListItem, "setstatemask", wxListItem_SetStateMask, 1, 1 );
    wWrapMethod( 0, _wxListItem, "settext", wxListItem_SetText, 1, 1 );
    wWrapMethod( 0, _wxListItem, "settextcolour", wxListItem_SetTextColour, 1, 1 );
    wWrapMethod( 0, _wxListItem, "settextcolor", wxListItem_SetTextColour, 1, 1 );
    wWrapMethod( 0, _wxListItem, "setwidth", wxListItem_SetWidth, 1, 1 );
    wWrapMethod( 0, _wxListCtrl, "del", wxListCtrl_del, 0, 0 );
    wWrapMethod( 0, _wxListCtrl, "new", wxListCtrl_new, 2, 7 );
    wWrapMethod( 0, _wxListCtrl, "finalize", wxListCtrl_finalize, 0, 0 );
    wWrapMethod( 0, _wxListCtrl, "arrange", wxListCtrl_Arrange, 0, 1 );
    wWrapMethod( 0, _wxListCtrl, "create", wxListCtrl_Create, 2, 7 );
    wWrapMethod( 0, _wxListCtrl, "clearall", wxListCtrl_ClearAll, 0, 0 );
    wWrapMethod( 0, _wxListCtrl, "deleteitem", wxListCtrl_DeleteItem, 1, 1 );
    wWrapMethod( 0, _wxListCtrl, "deleteallitems", wxListCtrl_DeleteAllItems, 0, 0 );
    wWrapMethod( 0, _wxListCtrl, "deletecolumn", wxListCtrl_DeleteColumn, 1, 1 );
    wWrapMethod( 0, _wxListCtrl, "editlabel", wxListCtrl_EditLabel, 1, 1 );
    wWrapMethod( 0, _wxListCtrl, "ensurevisible", wxListCtrl_EnsureVisible, 1, 1 );
    wWrapMethod( 0, _wxListCtrl, "finditem", wxListCtrl_FindItem, 2, 3 );
    wWrapMethod( 0, _wxListCtrl, "finditemdata", wxListCtrl_FindItemData, 2, 2 );
    wWrapMethod( 0, _wxListCtrl, "finditematpos", wxListCtrl_FindItemAtPos, 3, 3 );
    wWrapMethod( 0, _wxListCtrl, "getcolumn", wxListCtrl_GetColumn, 2, 2 );
    wWrapMethod( 0, _wxListCtrl, "getcolumnwidth", wxListCtrl_GetColumnWidth, 1, 1 );
    wWrapMethod( 0, _wxListCtrl, "getcountperpage", wxListCtrl_GetCountPerPage, 0, 0 );
    wWrapMethod( 0, _wxListCtrl, "getimagelist", wxListCtrl_GetImageList, 1, 1 );
    wWrapMethod( 0, _wxListCtrl, "getitem", wxListCtrl_GetItem, 1, 1 );
    wWrapMethod( 0, _wxListCtrl, "getitemdata", wxListCtrl_GetItemData, 1, 1 );
    wWrapMethod( 0, _wxListCtrl, "getitemposition", wxListCtrl_GetItemPosition, 2, 2 );
    wWrapMethod( 0, _wxListCtrl, "getitemrect", wxListCtrl_GetItemRect, 2, 0 );
    wWrapMethod( 0, _wxListCtrl, "getitemstate", wxListCtrl_GetItemState, 2, 2 );
    wWrapMethod( 0, _wxListCtrl, "getitemcount", wxListCtrl_GetItemCount, 0, 0 );
    wWrapMethod( 0, _wxListCtrl, "getitemspacing", wxListCtrl_GetItemSpacing, 1, 1 );
    wWrapMethod( 0, _wxListCtrl, "getitemtext", wxListCtrl_GetItemText, 1, 1 );
    wWrapMethod( 0, _wxListCtrl, "getnextitem", wxListCtrl_GetNextItem, 1, 3 );
    wWrapMethod( 0, _wxListCtrl, "getselecteditemcount", wxListCtrl_GetSelectedItemCount, 0, 0 );
    wWrapMethod( 0, _wxListCtrl, "gettextcolour", wxListCtrl_GetTextColour, 0, 0 );
    wWrapMethod( 0, _wxListCtrl, "gettextcolor", wxListCtrl_GetTextColour, 0, 0 );
    wWrapMethod( 0, _wxListCtrl, "gettopitem", wxListCtrl_GetTopItem, 0, 0 );
    wWrapMethod( 0, _wxListCtrl, "hittest", wxListCtrl_HitTest, 2, 2 );
    wWrapMethod( 0, _wxListCtrl, "insertcolumn", wxListCtrl_InsertColumn, 2, 2 );
    wWrapMethod( 0, _wxListCtrl, "insertcolumninfo", wxListCtrl_InsertColumnInfo, 2, 4 );
    wWrapMethod( 0, _wxListCtrl, "insertitem", wxListCtrl_InsertItem, 1, 1 );
    wWrapMethod( 0, _wxListCtrl, "insertstringitem", wxListCtrl_InsertStringItem, 2, 2 );
    wWrapMethod( 0, _wxListCtrl, "insertimageitem", wxListCtrl_InsertImageItem, 2, 2 );
    wWrapMethod( 0, _wxListCtrl, "insertimagestringitem", wxListCtrl_InsertImageStringItem, 3, 3 );
    wWrapMethod( 0, _wxListCtrl, "scrolllist", wxListCtrl_ScrollList, 2, 2 );
    wWrapMethod( 0, _wxListCtrl, "setbackgroundcolour", wxListCtrl_SetBackgroundColour, 1, 1 );
    wWrapMethod( 0, _wxListCtrl, "setbackgroundcolor", wxListCtrl_SetBackgroundColour, 1, 1 );
    wWrapMethod( 0, _wxListCtrl, "setcolumn", wxListCtrl_SetColumn, 2, 2 );
    wWrapMethod( 0, _wxListCtrl, "setcolumnwidth", wxListCtrl_SetColumnWidth, 2, 2 );
    wWrapMethod( 0, _wxListCtrl, "setimagelist", wxListCtrl_SetImageList, 2, 2 );
    wWrapMethod( 0, _wxListCtrl, "setitem", wxListCtrl_SetItem, 1, 1 );
    wWrapMethod( 0, _wxListCtrl, "setstringitem", wxListCtrl_SetStringItem, 3, 4 );
    wWrapMethod( 0, _wxListCtrl, "setitemdata", wxListCtrl_SetItemData, 2, 2 );
    wWrapMethod( 0, _wxListCtrl, "setitemimage", wxListCtrl_SetItemImage, 3, 3 );
    wWrapMethod( 0, _wxListCtrl, "setitemposition", wxListCtrl_SetItemPosition, 2, 2 );
    wWrapMethod( 0, _wxListCtrl, "setitemstate", wxListCtrl_SetItemState, 3, 3 );
    wWrapMethod( 0, _wxListCtrl, "setitemtext", wxListCtrl_SetItemText, 2, 2 );
    wWrapMethod( 0, _wxListCtrl, "setsinglestyle", wxListCtrl_SetSingleStyle, 1, 2 );
    wWrapMethod( 0, _wxListCtrl, "settextcolour", wxListCtrl_SetTextColour, 1, 1 );
    wWrapMethod( 0, _wxListCtrl, "settextcolor", wxListCtrl_SetTextColour, 1, 1 );
    wWrapMethod( 0, _wxListCtrl, "setwindowstyleflag", wxListCtrl_SetWindowStyleFlag, 1, 1 );
    wWrapMethod( 0, _wxTextCtrl, "del", wxTextCtrl_del, 0, 0 );
    wWrapMethod( 0, _wxTextCtrl, "new", wxTextCtrl_new, 2, 8 );
    wWrapMethod( 0, _wxTextCtrl, "finalize", wxTextCtrl_finalize, 0, 0 );
    wWrapMethod( 0, _wxTextCtrl, "appendtext", wxTextCtrl_AppendText, 1, 1 );
    wWrapMethod( 0, _wxTextCtrl, "cancopy", wxTextCtrl_CanCopy, 0, 0 );
    wWrapMethod( 0, _wxTextCtrl, "cancut", wxTextCtrl_CanCut, 0, 0 );
    wWrapMethod( 0, _wxTextCtrl, "canpaste", wxTextCtrl_CanPaste, 0, 0 );
    wWrapMethod( 0, _wxTextCtrl, "canredo", wxTextCtrl_CanRedo, 0, 0 );
    wWrapMethod( 0, _wxTextCtrl, "canundo", wxTextCtrl_CanUndo, 0, 0 );
    wWrapMethod( 0, _wxTextCtrl, "clear", wxTextCtrl_Clear, 0, 0 );
    wWrapMethod( 0, _wxTextCtrl, "copy", wxTextCtrl_Copy, 0, 0 );
    wWrapMethod( 0, _wxTextCtrl, "create", wxTextCtrl_Create, 2, 8 );
    wWrapMethod( 0, _wxTextCtrl, "cut", wxTextCtrl_Cut, 0, 0 );
    wWrapMethod( 0, _wxTextCtrl, "discardedits", wxTextCtrl_DiscardEdits, 0, 0 );
    wWrapMethod( 0, _wxTextCtrl, "getinsertionpoint", wxTextCtrl_GetInsertionPoint, 0, 0 );
    wWrapMethod( 0, _wxTextCtrl, "getlastposition", wxTextCtrl_GetLastPosition, 0, 0 );
    wWrapMethod( 0, _wxTextCtrl, "getlinelength", wxTextCtrl_GetLineLength, 1, 1 );
    wWrapMethod( 0, _wxTextCtrl, "getlinetext", wxTextCtrl_GetLineText, 1, 1 );
    wWrapMethod( 0, _wxTextCtrl, "getnumberoflines", wxTextCtrl_GetNumberOfLines, 0, 0 );
    wWrapMethod( 0, _wxTextCtrl, "getselection", wxTextCtrl_GetSelection, 0, 0 );
    wWrapMethod( 0, _wxTextCtrl, "getselectionfrom", wxTextCtrl_GetSelectionFrom, 0, 0 );
    wWrapMethod( 0, _wxTextCtrl, "getselectionto", wxTextCtrl_GetSelectionTo, 0, 0 );
    wWrapMethod( 0, _wxTextCtrl, "getvalue", wxTextCtrl_GetValue, 0, 0 );
    wWrapMethod( 0, _wxTextCtrl, "ismodified", wxTextCtrl_IsModified, 0, 0 );
    wWrapMethod( 0, _wxTextCtrl, "loadfile", wxTextCtrl_LoadFile, 1, 1 );
    wWrapMethod( 0, _wxTextCtrl, "paste", wxTextCtrl_Paste, 0, 0 );
    wWrapMethod( 0, _wxTextCtrl, "positiontoxy", wxTextCtrl_PositionToXY, 3, 3 );
    wWrapMethod( 0, _wxTextCtrl, "redo", wxTextCtrl_Redo, 0, 0 );
    wWrapMethod( 0, _wxTextCtrl, "remove", wxTextCtrl_Remove, 2, 2 );
    wWrapMethod( 0, _wxTextCtrl, "replace", wxTextCtrl_Replace, 3, 3 );
    wWrapMethod( 0, _wxTextCtrl, "savefile", wxTextCtrl_SaveFile, 1, 1 );
    wWrapMethod( 0, _wxTextCtrl, "seteditable", wxTextCtrl_SetEditable, 1, 1 );
    wWrapMethod( 0, _wxTextCtrl, "setinsertionpoint", wxTextCtrl_SetInsertionPoint, 1, 1 );
    wWrapMethod( 0, _wxTextCtrl, "setinsertionpointend", wxTextCtrl_SetInsertionPointEnd, 0, 0 );
    wWrapMethod( 0, _wxTextCtrl, "setselection", wxTextCtrl_SetSelection, 2, 2 );
    wWrapMethod( 0, _wxTextCtrl, "setvalue", wxTextCtrl_SetValue, 1, 1 );
    wWrapMethod( 0, _wxTextCtrl, "showposition", wxTextCtrl_ShowPosition, 1, 1 );
    wWrapMethod( 0, _wxTextCtrl, "undo", wxTextCtrl_Undo, 0, 0 );
    wWrapMethod( 0, _wxTextCtrl, "writetext", wxTextCtrl_WriteText, 1, 1 );
    wWrapMethod( 0, _wxTextCtrl, "xytoposition", wxTextCtrl_XYToPosition, 2, 2 );
    wWrapMethod( 0, _wxTreeCtrl, "del", wxTreeCtrl_del, 0, 0 );
    wWrapMethod( 0, _wxTreeCtrl, "new", wxTreeCtrl_new, 2, 7 );
    wWrapMethod( 0, _wxTreeCtrl, "finalize", wxTreeCtrl_finalize, 0, 0 );
    wWrapMethod( 0, _wxTreeCtrl, "addroot", wxTreeCtrl_AddRoot, 1, 4 );
    wWrapMethod( 0, _wxTreeCtrl, "appenditem", wxTreeCtrl_AppendItem, 2, 5 );
    wWrapMethod( 0, _wxTreeCtrl, "collapse", wxTreeCtrl_Collapse, 1, 1 );
    wWrapMethod( 0, _wxTreeCtrl, "collapseandreset", wxTreeCtrl_CollapseAndReset, 1, 1 );
    wWrapMethod( 0, _wxTreeCtrl, "create", wxTreeCtrl_Create, 2, 7 );
    wWrapMethod( 0, _wxTreeCtrl, "delete", wxTreeCtrl_Delete, 1, 1 );
    wWrapMethod( 0, _wxTreeCtrl, "deleteallitems", wxTreeCtrl_DeleteAllItems, 0, 0 );
    wWrapMethod( 0, _wxTreeCtrl, "editlabel", wxTreeCtrl_EditLabel, 1, 1 );
    wWrapMethod( 0, _wxTreeCtrl, "ensurevisible", wxTreeCtrl_EnsureVisible, 1, 1 );
    wWrapMethod( 0, _wxTreeCtrl, "expand", wxTreeCtrl_Expand, 1, 1 );
    wWrapMethod( 0, _wxTreeCtrl, "getchildrencount", wxTreeCtrl_GetChildrenCount, 1, 2 );
    wWrapMethod( 0, _wxTreeCtrl, "getcount", wxTreeCtrl_GetCount, 0, 0 );
    wWrapMethod( 0, _wxTreeCtrl, "getfirstchild", wxTreeCtrl_GetFirstChild, 2, 0 );
    wWrapMethod( 0, _wxTreeCtrl, "getfirstvisibleitem", wxTreeCtrl_GetFirstVisibleItem, 0, 0 );
    wWrapMethod( 0, _wxTreeCtrl, "getimagelist", wxTreeCtrl_GetImageList, 0, 0 );
    wWrapMethod( 0, _wxTreeCtrl, "getindent", wxTreeCtrl_GetIndent, 0, 0 );
    wWrapMethod( 0, _wxTreeCtrl, "getitemdata", wxTreeCtrl_GetItemData, 1, 1 );
    wWrapMethod( 0, _wxTreeCtrl, "getitemimage", wxTreeCtrl_GetItemImage, 1, 2 );
    wWrapMethod( 0, _wxTreeCtrl, "getitemtext", wxTreeCtrl_GetItemText, 1, 1 );
    wWrapMethod( 0, _wxTreeCtrl, "getlastchild", wxTreeCtrl_GetLastChild, 1, 1 );
    wWrapMethod( 0, _wxTreeCtrl, "getnextchild", wxTreeCtrl_GetNextChild, 2, 0 );
    wWrapMethod( 0, _wxTreeCtrl, "getnextsibling", wxTreeCtrl_GetNextSibling, 1, 1 );
    wWrapMethod( 0, _wxTreeCtrl, "getnextvisible", wxTreeCtrl_GetNextVisible, 1, 1 );
    wWrapMethod( 0, _wxTreeCtrl, "getparent", wxTreeCtrl_GetParent, 1, 1 );
    wWrapMethod( 0, _wxTreeCtrl, "getprevsibling", wxTreeCtrl_GetPrevSibling, 1, 1 );
    wWrapMethod( 0, _wxTreeCtrl, "getprevvisible", wxTreeCtrl_GetPrevVisible, 1, 1 );
    wWrapMethod( 0, _wxTreeCtrl, "getrootitem", wxTreeCtrl_GetRootItem, 0, 0 );
    wWrapMethod( 0, _wxTreeCtrl, "getitemselectedimage", wxTreeCtrl_GetItemSelectedImage, 1, 1 );
    wWrapMethod( 0, _wxTreeCtrl, "getselection", wxTreeCtrl_GetSelection, 0, 0 );
    wWrapMethod( 0, _wxTreeCtrl, "getselections", wxTreeCtrl_GetSelections, 1, 1 );
    wWrapMethod( 0, _wxTreeCtrl, "getstateimagelist", wxTreeCtrl_GetStateImageList, 0, 0 );
    wWrapMethod( 0, _wxTreeCtrl, "hittest", wxTreeCtrl_HitTest, 2, 2 );
    wWrapMethod( 0, _wxTreeCtrl, "insertitem", wxTreeCtrl_InsertItem, 3, 6 );
    wWrapMethod( 0, _wxTreeCtrl, "insertitembefore", wxTreeCtrl_InsertItemBefore, 3, 6 );
    wWrapMethod( 0, _wxTreeCtrl, "isbold", wxTreeCtrl_IsBold, 1, 1 );
    wWrapMethod( 0, _wxTreeCtrl, "isexpanded", wxTreeCtrl_IsExpanded, 1, 1 );
    wWrapMethod( 0, _wxTreeCtrl, "isselected", wxTreeCtrl_IsSelected, 1, 1 );
    wWrapMethod( 0, _wxTreeCtrl, "isvisible", wxTreeCtrl_IsVisible, 1, 1 );
    wWrapMethod( 0, _wxTreeCtrl, "itemhaschildren", wxTreeCtrl_ItemHasChildren, 1, 1 );
    wWrapMethod( 0, _wxTreeCtrl, "prependitem", wxTreeCtrl_PrependItem, 2, 5 );
    wWrapMethod( 0, _wxTreeCtrl, "scrollto", wxTreeCtrl_ScrollTo, 1, 1 );
    wWrapMethod( 0, _wxTreeCtrl, "selectitem", wxTreeCtrl_SelectItem, 1, 1 );
    wWrapMethod( 0, _wxTreeCtrl, "setindent", wxTreeCtrl_SetIndent, 1, 1 );
    wWrapMethod( 0, _wxTreeCtrl, "setimagelist", wxTreeCtrl_SetImageList, 1, 1 );
    wWrapMethod( 0, _wxTreeCtrl, "setitembackgroundcolour", wxTreeCtrl_SetItemBackgroundColour, 2, 2 );
    wWrapMethod( 0, _wxTreeCtrl, "setitembackgroundcolor", wxTreeCtrl_SetItemBackgroundColour, 2, 2 );
    wWrapMethod( 0, _wxTreeCtrl, "setitembold", wxTreeCtrl_SetItemBold, 1, 2 );
    wWrapMethod( 0, _wxTreeCtrl, "setitemdata", wxTreeCtrl_SetItemData, 2, 2 );
    wWrapMethod( 0, _wxTreeCtrl, "setitemfont", wxTreeCtrl_SetItemFont, 2, 2 );
    wWrapMethod( 0, _wxTreeCtrl, "setitemhaschildren", wxTreeCtrl_SetItemHasChildren, 1, 2 );
    wWrapMethod( 0, _wxTreeCtrl, "setitemimage", wxTreeCtrl_SetItemImage, 2, 3 );
    wWrapMethod( 0, _wxTreeCtrl, "setitemselectedimage", wxTreeCtrl_SetItemSelectedImage, 2, 2 );
    wWrapMethod( 0, _wxTreeCtrl, "setitemtext", wxTreeCtrl_SetItemText, 2, 2 );
    wWrapMethod( 0, _wxTreeCtrl, "setitemtextcolour", wxTreeCtrl_SetItemTextColour, 2, 2 );
    wWrapMethod( 0, _wxTreeCtrl, "setitemtextcolor", wxTreeCtrl_SetItemTextColour, 2, 2 );
    wWrapMethod( 0, _wxTreeCtrl, "setstateimagelist", wxTreeCtrl_SetStateImageList, 1, 1 );
    wWrapMethod( 0, _wxTreeCtrl, "sortchildren", wxTreeCtrl_SortChildren, 1, 1 );
    wWrapMethod( 0, _wxTreeCtrl, "toggle", wxTreeCtrl_Toggle, 1, 1 );
    wWrapMethod( 0, _wxTreeCtrl, "unselect", wxTreeCtrl_Unselect, 0, 0 );
    wWrapMethod( 0, _wxTreeCtrl, "unselectall", wxTreeCtrl_UnselectAll, 0, 0 );
    wWrapMethod( 0, _wxScrollBar, "del", wxScrollBar_del, 0, 0 );
    wWrapMethod( 0, _wxScrollBar, "new", wxScrollBar_new, 2, 7 );
    wWrapMethod( 0, _wxScrollBar, "finalize", wxScrollBar_finalize, 0, 0 );
    wWrapMethod( 0, _wxScrollBar, "create", wxScrollBar_Create, 2, 7 );
    wWrapMethod( 0, _wxScrollBar, "getrange", wxScrollBar_GetRange, 0, 0 );
    wWrapMethod( 0, _wxScrollBar, "getpagesize", wxScrollBar_GetPageSize, 0, 0 );
    wWrapMethod( 0, _wxScrollBar, "getthumbposition", wxScrollBar_GetThumbPosition, 0, 0 );
    wWrapMethod( 0, _wxScrollBar, "setthumbposition", wxScrollBar_SetThumbPosition, 1, 1 );
    wWrapMethod( 0, _wxScrollBar, "setscrollbar", wxScrollBar_SetScrollbar, 4, 5 );
    wWrapMethod( 0, _wxSpinButton, "del", wxSpinButton_del, 0, 0 );
    wWrapMethod( 0, _wxSpinButton, "new", wxSpinButton_new, 1, 6 );
    wWrapMethod( 0, _wxSpinButton, "finalize", wxSpinButton_finalize, 0, 0 );
    wWrapMethod( 0, _wxSpinButton, "create", wxSpinButton_Create, 1, 6 );
    wWrapMethod( 0, _wxSpinButton, "getmax", wxSpinButton_GetMax, 0, 0 );
    wWrapMethod( 0, _wxSpinButton, "getmin", wxSpinButton_GetMin, 0, 0 );
    wWrapMethod( 0, _wxSpinButton, "getvalue", wxSpinButton_GetValue, 0, 0 );
    wWrapMethod( 0, _wxSpinButton, "setrange", wxSpinButton_SetRange, 2, 2 );
    wWrapMethod( 0, _wxSpinButton, "setvalue", wxSpinButton_SetValue, 1, 1 );
    wWrapMethod( 0, _wxSpinCtrl, "del", wxSpinCtrl_del, 0, 0 );
    wWrapMethod( 0, _wxSpinCtrl, "new", wxSpinCtrl_new, 1, 10 );
    wWrapMethod( 0, _wxSpinCtrl, "create", wxSpinCtrl_Create, 1, 10 );
    wWrapMethod( 0, _wxSpinCtrl, "setvalue", wxSpinCtrl_SetValue, 1, 1 );
    wWrapMethod( 0, _wxSpinCtrl, "getvalue", wxSpinCtrl_GetValue, 0, 0 );
    wWrapMethod( 0, _wxSpinCtrl, "setrange", wxSpinCtrl_SetRange, 2, 2 );
    wWrapMethod( 0, _wxSpinCtrl, "getmin", wxSpinCtrl_GetMin, 0, 0 );
    wWrapMethod( 0, _wxSpinCtrl, "getmax", wxSpinCtrl_GetMax, 0, 0 );
    wWrapMethod( 0, _wxStaticText, "del", wxStaticText_del, 0, 0 );
    wWrapMethod( 0, _wxStaticText, "new", wxStaticText_new, 4, 7 );
    wWrapMethod( 0, _wxStaticText, "create", wxStaticText_Create, 4, 7 );
    wWrapMethod( 0, _wxStaticText, "getlabel", wxStaticText_GetLabel, 0, 0 );
    wWrapMethod( 0, _wxStaticText, "setlabel", wxStaticText_SetLabel, 1, 1 );
    wWrapMethod( 0, _wxStaticBitmap, "del", wxStaticBitmap_del, 0, 0 );
    wWrapMethod( 0, _wxStaticBitmap, "setbitmap", wxStaticBitmap_SetBitmap, 1, 1 );
    wWrapMethod( 0, _wxRadioBox, "del", wxRadioBox_del, 0, 0 );
    wWrapMethod( 0, _wxRadioBox, "new", wxRadioBox_new, 3, 11 );
    wWrapMethod( 0, _wxRadioBox, "finalize", wxRadioBox_finalize, 0, 0 );
    wWrapMethod( 0, _wxRadioBox, "create", wxRadioBox_Create, 3, 11 );
    wWrapMethod( 0, _wxRadioBox, "enable", wxRadioBox_Enable, 1, 1 );
    wWrapMethod( 0, _wxRadioBox, "enableitem", wxRadioBox_EnableItem, 2, 2 );
    wWrapMethod( 0, _wxRadioBox, "findstring", wxRadioBox_FindString, 1, 1 );
    wWrapMethod( 0, _wxRadioBox, "getselection", wxRadioBox_GetSelection, 0, 0 );
    wWrapMethod( 0, _wxRadioBox, "getstringselection", wxRadioBox_GetStringSelection, 0, 0 );
    wWrapMethod( 0, _wxRadioBox, "setselection", wxRadioBox_SetSelection, 1, 1 );
    wWrapMethod( 0, _wxRadioBox, "setstringselection", wxRadioBox_SetStringSelection, 1, 1 );
    wWrapMethod( 0, _wxRadioBox, "show", wxRadioBox_Show, 1, 1 );
    wWrapMethod( 0, _wxRadioBox, "showitem", wxRadioBox_ShowItem, 2, 2 );
    wWrapMethod( 0, _wxRadioBox, "getstring", wxRadioBox_GetString, 1, 1 );
    wWrapMethod( 0, _wxRadioButton, "del", wxRadioButton_del, 0, 0 );
    wWrapMethod( 0, _wxRadioButton, "new", wxRadioButton_new, 3, 8 );
    wWrapMethod( 0, _wxRadioButton, "finalize", wxRadioButton_finalize, 0, 0 );
    wWrapMethod( 0, _wxRadioButton, "create", wxRadioButton_Create, 3, 8 );
    wWrapMethod( 0, _wxRadioButton, "getvalue", wxRadioButton_GetValue, 0, 0 );
    wWrapMethod( 0, _wxRadioButton, "setvalue", wxRadioButton_SetValue, 1, 1 );
    wWrapMethod( 0, _wxSlider, "del", wxSlider_del, 0, 0 );
    wWrapMethod( 0, _wxSlider, "new", wxSlider_new, 5, 10 );
    wWrapMethod( 0, _wxSlider, "finalize", wxSlider_finalize, 0, 0 );
    wWrapMethod( 0, _wxSlider, "clearsel", wxSlider_ClearSel, 0, 0 );
    wWrapMethod( 0, _wxSlider, "clearticks", wxSlider_ClearTicks, 0, 0 );
    wWrapMethod( 0, _wxSlider, "create", wxSlider_Create, 5, 10 );
    wWrapMethod( 0, _wxSlider, "getlinesize", wxSlider_GetLineSize, 0, 0 );
    wWrapMethod( 0, _wxSlider, "getmax", wxSlider_GetMax, 0, 0 );
    wWrapMethod( 0, _wxSlider, "getmin", wxSlider_GetMin, 0, 0 );
    wWrapMethod( 0, _wxSlider, "getpagesize", wxSlider_GetPageSize, 0, 0 );
    wWrapMethod( 0, _wxSlider, "getselend", wxSlider_GetSelEnd, 0, 0 );
    wWrapMethod( 0, _wxSlider, "getselstart", wxSlider_GetSelStart, 0, 0 );
    wWrapMethod( 0, _wxSlider, "getthumblength", wxSlider_GetThumbLength, 0, 0 );
    wWrapMethod( 0, _wxSlider, "gettickfreq", wxSlider_GetTickFreq, 0, 0 );
    wWrapMethod( 0, _wxSlider, "getvalue", wxSlider_GetValue, 0, 0 );
    wWrapMethod( 0, _wxSlider, "setrange", wxSlider_SetRange, 2, 2 );
    wWrapMethod( 0, _wxSlider, "settickfreq", wxSlider_SetTickFreq, 2, 2 );
    wWrapMethod( 0, _wxSlider, "setlinesize", wxSlider_SetLineSize, 1, 1 );
    wWrapMethod( 0, _wxSlider, "setpagesize", wxSlider_SetPageSize, 1, 1 );
    wWrapMethod( 0, _wxSlider, "setselection", wxSlider_SetSelection, 2, 2 );
    wWrapMethod( 0, _wxSlider, "setthumblength", wxSlider_SetThumbLength, 1, 1 );
    wWrapMethod( 0, _wxSlider, "settick", wxSlider_SetTick, 1, 1 );
    wWrapMethod( 0, _wxSlider, "setvalue", wxSlider_SetValue, 1, 1 );
    wWrapMethod( 0, _wxToolBarBase, "del", wxToolBarBase_del, 0, 0 );
    wWrapMethod( 0, _wxToolBar, "del", wxToolBar_del, 0, 0 );
    wWrapMethod( 0, _wxToolBar, "new", wxToolBar_new, 2, 6 );
    wWrapMethod( 0, _wxToolBar, "finalize", wxToolBar_finalize, 0, 0 );
    wWrapMethod( 0, _wxToolBar, "addcontrol", wxToolBar_AddControl, 1, 1 );
    wWrapMethod( 0, _wxToolBar, "addseparator", wxToolBar_AddSeparator, 0, 0 );
    wWrapMethod( 0, _wxToolBar, "deletetool", wxToolBar_DeleteTool, 1, 1 );
    wWrapMethod( 0, _wxToolBar, "deletetoolbypos", wxToolBar_DeleteToolByPos, 1, 1 );
    wWrapMethod( 0, _wxToolBar, "enabletool", wxToolBar_EnableTool, 2, 2 );
    wWrapMethod( 0, _wxToolBar, "gettoolsize", wxToolBar_GetToolSize, 0, 0 );
    wWrapMethod( 0, _wxToolBar, "gettoolbitmapsize", wxToolBar_GetToolBitmapSize, 0, 0 );
    wWrapMethod( 0, _wxToolBar, "gettoolclientdata", wxToolBar_GetToolClientData, 1, 1 );
    wWrapMethod( 0, _wxToolBar, "gettoolenabled", wxToolBar_GetToolEnabled, 1, 1 );
    wWrapMethod( 0, _wxToolBar, "gettoollonghelp", wxToolBar_GetToolLongHelp, 1, 1 );
    wWrapMethod( 0, _wxToolBar, "gettoolpacking", wxToolBar_GetToolPacking, 0, 0 );
    wWrapMethod( 0, _wxToolBar, "gettoolseparation", wxToolBar_GetToolSeparation, 0, 0 );
    wWrapMethod( 0, _wxToolBar, "gettoolshorthelp", wxToolBar_GetToolShortHelp, 1, 1 );
    wWrapMethod( 0, _wxToolBar, "gettoolstate", wxToolBar_GetToolState, 1, 1 );
    wWrapMethod( 0, _wxToolBar, "realize", wxToolBar_Realize, 0, 0 );
    wWrapMethod( 0, _wxToolBar, "settoolbitmapsize", wxToolBar_SetToolBitmapSize, 1, 1 );
    wWrapMethod( 0, _wxToolBar, "settoollonghelp", wxToolBar_SetToolLongHelp, 2, 2 );
    wWrapMethod( 0, _wxToolBar, "settoolpacking", wxToolBar_SetToolPacking, 1, 1 );
    wWrapMethod( 0, _wxToolBar, "settoolshorthelp", wxToolBar_SetToolShortHelp, 2, 2 );
    wWrapMethod( 0, _wxToolBar, "settoolseparation", wxToolBar_SetToolSeparation, 1, 1 );
    wWrapMethod( 0, _wxToolBar, "toggletool", wxToolBar_ToggleTool, 2, 2 );
    wWrapMethod( 0, _wxNotebook, "del", wxNotebook_del, 0, 0 );
    wWrapMethod( 0, _wxNotebook, "new", wxNotebook_new, 2, 6 );
    wWrapMethod( 0, _wxNotebook, "finalize", wxNotebook_finalize, 0, 0 );
    wWrapMethod( 0, _wxNotebook, "addpage", wxNotebook_AddPage, 2, 4 );
    wWrapMethod( 0, _wxNotebook, "advanceselection", wxNotebook_AdvanceSelection, 0, 1 );
    wWrapMethod( 0, _wxNotebook, "create", wxNotebook_Create, 2, 6 );
    wWrapMethod( 0, _wxNotebook, "deleteallpages", wxNotebook_DeleteAllPages, 0, 0 );
    wWrapMethod( 0, _wxNotebook, "deletepage", wxNotebook_DeletePage, 1, 1 );
    wWrapMethod( 0, _wxNotebook, "getimagelist", wxNotebook_GetImageList, 0, 0 );
    wWrapMethod( 0, _wxNotebook, "getpage", wxNotebook_GetPage, 1, 1 );
    wWrapMethod( 0, _wxNotebook, "getpagecount", wxNotebook_GetPageCount, 0, 0 );
    wWrapMethod( 0, _wxNotebook, "getpageimage", wxNotebook_GetPageImage, 1, 1 );
    wWrapMethod( 0, _wxNotebook, "getpagetext", wxNotebook_GetPageText, 1, 1 );
    wWrapMethod( 0, _wxNotebook, "getrowcount", wxNotebook_GetRowCount, 0, 0 );
    wWrapMethod( 0, _wxNotebook, "getselection", wxNotebook_GetSelection, 0, 0 );
    wWrapMethod( 0, _wxNotebook, "insertpage", wxNotebook_InsertPage, 3, 5 );
    wWrapMethod( 0, _wxNotebook, "removepage", wxNotebook_RemovePage, 1, 1 );
    wWrapMethod( 0, _wxNotebook, "setimagelist", wxNotebook_SetImageList, 1, 1 );
    wWrapMethod( 0, _wxNotebook, "setpadding", wxNotebook_SetPadding, 1, 1 );
    wWrapMethod( 0, _wxNotebook, "setpagesize", wxNotebook_SetPageSize, 1, 1 );
    wWrapMethod( 0, _wxNotebook, "setpageimage", wxNotebook_SetPageImage, 2, 2 );
    wWrapMethod( 0, _wxNotebook, "setpagetext", wxNotebook_SetPageText, 2, 2 );
    wWrapMethod( 0, _wxNotebook, "setselection", wxNotebook_SetSelection, 1, 1 );
    wWrapMethod( 0, _wxSashWindow, "del", wxSashWindow_del, 0, 0 );
    wWrapMethod( 0, _wxSashWindow, "new", wxSashWindow_new, 1, 6 );
    wWrapMethod( 0, _wxSashWindow, "finalize", wxSashWindow_finalize, 0, 0 );
    wWrapMethod( 0, _wxSashWindow, "getsashvisible", wxSashWindow_GetSashVisible, 1, 1 );
    wWrapMethod( 0, _wxSashWindow, "getmaximumsizex", wxSashWindow_GetMaximumSizeX, 0, 0 );
    wWrapMethod( 0, _wxSashWindow, "getmaximumsizey", wxSashWindow_GetMaximumSizeY, 0, 0 );
    wWrapMethod( 0, _wxSashWindow, "getminimumsizex", wxSashWindow_GetMinimumSizeX, 0, 0 );
    wWrapMethod( 0, _wxSashWindow, "getminimumsizey", wxSashWindow_GetMinimumSizeY, 0, 0 );
    wWrapMethod( 0, _wxSashWindow, "hasborder", wxSashWindow_HasBorder, 1, 1 );
    wWrapMethod( 0, _wxSashWindow, "setmaximumsizex", wxSashWindow_SetMaximumSizeX, 1, 1 );
    wWrapMethod( 0, _wxSashWindow, "setmaximumsizey", wxSashWindow_SetMaximumSizeY, 1, 1 );
    wWrapMethod( 0, _wxSashWindow, "setminimumsizex", wxSashWindow_SetMinimumSizeX, 1, 1 );
    wWrapMethod( 0, _wxSashWindow, "setminimumsizey", wxSashWindow_SetMinimumSizeY, 1, 1 );
    wWrapMethod( 0, _wxSashWindow, "setsashvisible", wxSashWindow_SetSashVisible, 2, 2 );
    wWrapMethod( 0, _wxSashWindow, "setsashborder", wxSashWindow_SetSashBorder, 2, 2 );
    wWrapMethod( 0, _wxSashLayoutWindow, "del", wxSashLayoutWindow_del, 0, 0 );
    wWrapMethod( 0, _wxSashLayoutWindow, "new", wxSashLayoutWindow_new, 1, 6 );
    wWrapMethod( 0, _wxSashLayoutWindow, "finalize", wxSashLayoutWindow_finalize, 0, 0 );
    wWrapMethod( 0, _wxSashLayoutWindow, "getalignment", wxSashLayoutWindow_GetAlignment, 0, 0 );
    wWrapMethod( 0, _wxSashLayoutWindow, "getorientation", wxSashLayoutWindow_GetOrientation, 0, 0 );
    wWrapMethod( 0, _wxSashLayoutWindow, "setalignment", wxSashLayoutWindow_SetAlignment, 1, 1 );
    wWrapMethod( 0, _wxSashLayoutWindow, "setdefaultsize", wxSashLayoutWindow_SetDefaultSize, 1, 1 );
    wWrapMethod( 0, _wxSashLayoutWindow, "setorientation", wxSashLayoutWindow_SetOrientation, 1, 1 );
    wWrapMethod( 0, _wxColourDialog, "del", wxColourDialog_del, 0, 0 );
    wWrapMethod( 0, _wxColourDialog, "new", wxColourDialog_new, 1, 2 );
    wWrapMethod( 0, _wxColorDialog, "new", wxColorDialog_new, 1, 2 );
    wWrapMethod( 0, _wxColourDialog, "finalize", wxColourDialog_finalize, 0, 0 );
    wWrapMethod( 0, _wxColourDialog, "create", wxColourDialog_Create, 1, 2 );
    wWrapMethod( 0, _wxColourDialog, "getcolourdata", wxColourDialog_GetColourData, 0, 0 );
    wWrapMethod( 0, _wxColourDialog, "getcolordata", wxColourDialog_GetColourData, 0, 0 );
    wWrapMethod( 0, _wxColourDialog, "showmodal", wxColourDialog_ShowModal, 0, 0 );
    wWrapMethod( 0, _wxFileDialog, "del", wxFileDialog_del, 0, 0 );
    wWrapMethod( 0, _wxFileDialog, "new", wxFileDialog_new, 1, 7 );
    wWrapMethod( 0, _wxFileDialog, "finalize", wxFileDialog_finalize, 0, 0 );
    wWrapMethod( 0, _wxFileDialog, "getdirectory", wxFileDialog_GetDirectory, 0, 0 );
    wWrapMethod( 0, _wxFileDialog, "getfilename", wxFileDialog_GetFilename, 0, 0 );
    wWrapMethod( 0, _wxFileDialog, "getfilterindex", wxFileDialog_GetFilterIndex, 0, 0 );
    wWrapMethod( 0, _wxFileDialog, "getmessage", wxFileDialog_GetMessage, 0, 0 );
    wWrapMethod( 0, _wxFileDialog, "getpath", wxFileDialog_GetPath, 0, 0 );
    wWrapMethod( 0, _wxFileDialog, "getstyle", wxFileDialog_GetStyle, 0, 0 );
    wWrapMethod( 0, _wxFileDialog, "getwildcard", wxFileDialog_GetWildcard, 0, 0 );
    wWrapMethod( 0, _wxFileDialog, "setdirectory", wxFileDialog_SetDirectory, 1, 1 );
    wWrapMethod( 0, _wxFileDialog, "setfilename", wxFileDialog_SetFilename, 1, 1 );
    wWrapMethod( 0, _wxFileDialog, "setmessage", wxFileDialog_SetMessage, 1, 1 );
    wWrapMethod( 0, _wxFileDialog, "setpath", wxFileDialog_SetPath, 1, 1 );
    wWrapMethod( 0, _wxFileDialog, "setstyle", wxFileDialog_SetStyle, 1, 1 );
    wWrapMethod( 0, _wxFileDialog, "setwildcard", wxFileDialog_SetWildcard, 1, 1 );
    wWrapMethod( 0, _wxFileDialog, "showmodal", wxFileDialog_ShowModal, 0, 0 );
    wWrapMethod( 0, _wxDirDialog, "del", wxDirDialog_del, 0, 0 );
    wWrapMethod( 0, _wxDirDialog, "new", wxDirDialog_new, 1, 5 );
    wWrapMethod( 0, _wxDirDialog, "finalize", wxDirDialog_finalize, 0, 0 );
    wWrapMethod( 0, _wxDirDialog, "getpath", wxDirDialog_GetPath, 0, 0 );
    wWrapMethod( 0, _wxDirDialog, "getmessage", wxDirDialog_GetMessage, 0, 0 );
    wWrapMethod( 0, _wxDirDialog, "getstyle", wxDirDialog_GetStyle, 0, 0 );
    wWrapMethod( 0, _wxDirDialog, "setmessage", wxDirDialog_SetMessage, 1, 1 );
    wWrapMethod( 0, _wxDirDialog, "setpath", wxDirDialog_SetPath, 1, 1 );
    wWrapMethod( 0, _wxDirDialog, "setstyle", wxDirDialog_SetStyle, 1, 1 );
    wWrapMethod( 0, _wxDirDialog, "showmodal", wxDirDialog_ShowModal, 0, 0 );
    wWrapMethod( 0, _wxSingleChoiceDialog, "del", wxSingleChoiceDialog_del, 0, 0 );
    wWrapMethod( 0, _wxSingleChoiceDialog, "finalize", wxSingleChoiceDialog_finalize, 0, 0 );
    wWrapMethod( 0, _wxSingleChoiceDialog, "getselection", wxSingleChoiceDialog_GetSelection, 0, 0 );
    wWrapMethod( 0, _wxSingleChoiceDialog, "getselectionclientdata", wxSingleChoiceDialog_GetSelectionClientData, 0, 0 );
    wWrapMethod( 0, _wxSingleChoiceDialog, "getstringselection", wxSingleChoiceDialog_GetStringSelection, 0, 0 );
    wWrapMethod( 0, _wxSingleChoiceDialog, "setselection", wxSingleChoiceDialog_SetSelection, 1, 1 );
    wWrapMethod( 0, _wxSingleChoiceDialog, "showmodal", wxSingleChoiceDialog_ShowModal, 0, 0 );
    wWrapMethod( 0, _wxTextEntryDialog, "del", wxTextEntryDialog_del, 0, 0 );
    wWrapMethod( 0, _wxTextEntryDialog, "new", wxTextEntryDialog_new, 2, 6 );
    wWrapMethod( 0, _wxTextEntryDialog, "finalize", wxTextEntryDialog_finalize, 0, 0 );
    wWrapMethod( 0, _wxTextEntryDialog, "getvalue", wxTextEntryDialog_GetValue, 0, 0 );
    wWrapMethod( 0, _wxTextEntryDialog, "setvalue", wxTextEntryDialog_SetValue, 1, 1 );
    wWrapMethod( 0, _wxTextEntryDialog, "showmodal", wxTextEntryDialog_ShowModal, 0, 0 );
    wWrapMethod( 0, _wxFontData, "del", wxFontData_del, 0, 0 );
    wWrapMethod( 0, _wxFontData, "new", wxFontData_new, 0, 0 );
    wWrapMethod( 0, _wxFontData, "finalize", wxFontData_finalize, 0, 0 );
    wWrapMethod( 0, _wxFontData, "enableeffects", wxFontData_EnableEffects, 1, 1 );
    wWrapMethod( 0, _wxFontData, "getallowsymbols", wxFontData_GetAllowSymbols, 0, 0 );
    wWrapMethod( 0, _wxFontData, "getcolour", wxFontData_GetColour, 0, 0 );
    wWrapMethod( 0, _wxFontData, "getcolor", wxFontData_GetColour, 0, 0 );
    wWrapMethod( 0, _wxFontData, "getchosenfont", wxFontData_GetChosenFont, 0, 0 );
    wWrapMethod( 0, _wxFontData, "getenableeffects", wxFontData_GetEnableEffects, 0, 0 );
    wWrapMethod( 0, _wxFontData, "getinitialfont", wxFontData_GetInitialFont, 0, 0 );
    wWrapMethod( 0, _wxFontData, "getshowhelp", wxFontData_GetShowHelp, 0, 0 );
    wWrapMethod( 0, _wxFontData, "setallowsymbols", wxFontData_SetAllowSymbols, 1, 1 );
    wWrapMethod( 0, _wxFontData, "setchosenfont", wxFontData_SetChosenFont, 1, 1 );
    wWrapMethod( 0, _wxFontData, "setcolour", wxFontData_SetColour, 1, 1 );
    wWrapMethod( 0, _wxFontData, "setinitialfont", wxFontData_SetInitialFont, 1, 1 );
    wWrapMethod( 0, _wxFontData, "setrange", wxFontData_SetRange, 2, 2 );
    wWrapMethod( 0, _wxFontData, "setshowhelp", wxFontData_SetShowHelp, 1, 1 );
    wWrapMethod( 0, _wxFontDialog, "del", wxFontDialog_del, 0, 0 );
    wWrapMethod( 0, _wxFontDialog, "new", wxFontDialog_new, 1, 2 );
    wWrapMethod( 0, _wxFontDialog, "finalize", wxFontDialog_finalize, 0, 0 );
    wWrapMethod( 0, _wxFontDialog, "getfontdata", wxFontDialog_GetFontData, 0, 0 );
    wWrapMethod( 0, _wxFontDialog, "showmodal", wxFontDialog_ShowModal, 0, 0 );
    wWrapMethod( 0, _wxPageSetupDialogData, "del", wxPageSetupDialogData_del, 0, 0 );
    wWrapMethod( 0, _wxPageSetupDialogData, "new", wxPageSetupDialogData_new, 0, 0 );
    wWrapMethod( 0, _wxPageSetupDialogData, "finalize", wxPageSetupDialogData_finalize, 0, 0 );
    wWrapMethod( 0, _wxPageSetupDialogData, "enablehelp", wxPageSetupDialogData_EnableHelp, 1, 1 );
    wWrapMethod( 0, _wxPageSetupDialogData, "enablemargins", wxPageSetupDialogData_EnableMargins, 1, 1 );
    wWrapMethod( 0, _wxPageSetupDialogData, "enableorientation", wxPageSetupDialogData_EnableOrientation, 1, 1 );
    wWrapMethod( 0, _wxPageSetupDialogData, "enablepaper", wxPageSetupDialogData_EnablePaper, 1, 1 );
    wWrapMethod( 0, _wxPageSetupDialogData, "enableprinter", wxPageSetupDialogData_EnablePrinter, 1, 1 );
    wWrapMethod( 0, _wxPageSetupDialogData, "getdefaultminmargins", wxPageSetupDialogData_GetDefaultMinMargins, 0, 0 );
    wWrapMethod( 0, _wxPageSetupDialogData, "getenablemargins", wxPageSetupDialogData_GetEnableMargins, 0, 0 );
    wWrapMethod( 0, _wxPageSetupDialogData, "getenableorientation", wxPageSetupDialogData_GetEnableOrientation, 0, 0 );
    wWrapMethod( 0, _wxPageSetupDialogData, "getenablepaper", wxPageSetupDialogData_GetEnablePaper, 0, 0 );
    wWrapMethod( 0, _wxPageSetupDialogData, "getenableprinter", wxPageSetupDialogData_GetEnablePrinter, 0, 0 );
    wWrapMethod( 0, _wxPageSetupDialogData, "getenablehelp", wxPageSetupDialogData_GetEnableHelp, 0, 0 );
    wWrapMethod( 0, _wxPageSetupDialogData, "getdefaultinfo", wxPageSetupDialogData_GetDefaultInfo, 0, 0 );
    wWrapMethod( 0, _wxPageSetupDialogData, "getmargintopleft", wxPageSetupDialogData_GetMarginTopLeft, 0, 0 );
    wWrapMethod( 0, _wxPageSetupDialogData, "getmarginbottomright", wxPageSetupDialogData_GetMarginBottomRight, 0, 0 );
    wWrapMethod( 0, _wxPageSetupDialogData, "getminmargintopleft", wxPageSetupDialogData_GetMinMarginTopLeft, 0, 0 );
    wWrapMethod( 0, _wxPageSetupDialogData, "getminmarginbottomright", wxPageSetupDialogData_GetMinMarginBottomRight, 0, 0 );
    wWrapMethod( 0, _wxPageSetupDialogData, "getpaperid", wxPageSetupDialogData_GetPaperId, 0, 0 );
    wWrapMethod( 0, _wxPageSetupDialogData, "getpapersize", wxPageSetupDialogData_GetPaperSize, 0, 0 );
    wWrapMethod( 0, _wxPageSetupDialogData, "getprintdata", wxPageSetupDialogData_GetPrintData, 0, 0 );
    wWrapMethod( 0, _wxPageSetupDialogData, "ok", wxPageSetupDialogData_Ok, 0, 0 );
    wWrapMethod( 0, _wxPageSetupDialogData, "setdefaultinfo", wxPageSetupDialogData_SetDefaultInfo, 1, 1 );
    wWrapMethod( 0, _wxPageSetupDialogData, "setdefaultminmargins", wxPageSetupDialogData_SetDefaultMinMargins, 1, 1 );
    wWrapMethod( 0, _wxPageSetupDialogData, "setmargintopleft", wxPageSetupDialogData_SetMarginTopLeft, 1, 1 );
    wWrapMethod( 0, _wxPageSetupDialogData, "setmarginbottomright", wxPageSetupDialogData_SetMarginBottomRight, 1, 1 );
    wWrapMethod( 0, _wxPageSetupDialogData, "setminmargintopleft", wxPageSetupDialogData_SetMinMarginTopLeft, 1, 1 );
    wWrapMethod( 0, _wxPageSetupDialogData, "setminmarginbottomright", wxPageSetupDialogData_SetMinMarginBottomRight, 1, 1 );
    wWrapMethod( 0, _wxPageSetupDialogData, "setpaperid", wxPageSetupDialogData_SetPaperId, 1, 1 );
    wWrapMethod( 0, _wxPageSetupDialogData, "setpapersize", wxPageSetupDialogData_SetPaperSize, 1, 1 );
    wWrapMethod( 0, _wxPageSetupDialogData, "setprintdata", wxPageSetupDialogData_SetPrintData, 1, 1 );
    wWrapMethod( 0, _wxPageSetupDialog, "del", wxPageSetupDialog_del, 0, 0 );
    wWrapMethod( 0, _wxPageSetupDialog, "new", wxPageSetupDialog_new, 1, 2 );
    wWrapMethod( 0, _wxPageSetupDialog, "finalize", wxPageSetupDialog_finalize, 0, 0 );
    wWrapMethod( 0, _wxPageSetupDialog, "getpagesetupdata", wxPageSetupDialog_GetPageSetupData, 0, 0 );
    wWrapMethod( 0, _wxPageSetupDialog, "showmodal", wxPageSetupDialog_ShowModal, 0, 0 );
    wWrapMethod( 0, _wxPrintDialog, "del", wxPrintDialog_del, 0, 0 );
    wWrapMethod( 0, _wxPrintDialog, "new", wxPrintDialog_new, 1, 2 );
    wWrapMethod( 0, _wxPrintDialog, "finalize", wxPrintDialog_finalize, 0, 0 );
    wWrapMethod( 0, _wxPrintDialog, "getprintdialogdata", wxPrintDialog_GetPrintDialogData, 0, 0 );
    wWrapMethod( 0, _wxPrintDialog, "getprintdc", wxPrintDialog_GetPrintDC, 0, 0 );
    wWrapMethod( 0, _wxPrintDialog, "showmodal", wxPrintDialog_ShowModal, 0, 0 );
    wWrapMethod( 0, _wxMessageDialog, "del", wxMessageDialog_del, 0, 0 );
    wWrapMethod( 0, _wxMessageDialog, "new", wxMessageDialog_new, 2, 5 );
    wWrapMethod( 0, _wxMessageDialog, "finalize", wxMessageDialog_finalize, 0, 0 );
    wWrapMethod( 0, _wxMessageDialog, "showmodal", wxMessageDialog_ShowModal, 0, 0 );
    wWrapMethod( 0, _wxMenu, "del", wxMenu_del, 0, 0 );
    wWrapMethod( 0, _wxMenu, "new", wxMenu_new, 0, 2 );
    wWrapMethod( 0, _wxMenu, "finalize", wxMenu_finalize, 0, 0 );
    wWrapMethod( 0, _wxMenu, "append", wxMenu_Append, 2, 4 );
    wWrapMethod( 0, _wxMenu, "appendmenu", wxMenu_AppendMenu, 3, 4 );
    wWrapMethod( 0, _wxMenu, "appenditem", wxMenu_AppendItem, 1, 1 );
    wWrapMethod( 0, _wxMenu, "appendcheckitem", wxMenu_AppendCheckItem, 2, 3 );
    wWrapMethod( 0, _wxMenu, "appendradioitem", wxMenu_AppendRadioItem, 2, 3 );
    wWrapMethod( 0, _wxMenu, "appendseparator", wxMenu_AppendSeparator, 0, 0 );
    wWrapMethod( 0, _wxMenu, "break", wxMenu_Break, 0, 0 );
    wWrapMethod( 0, _wxMenu, "check", wxMenu_Check, 2, 2 );
    wWrapMethod( 0, _wxMenu, "delete", wxMenu_Delete, 1, 1 );
    wWrapMethod( 0, _wxMenu, "deleteitem", wxMenu_DeleteItem, 1, 1 );
    wWrapMethod( 0, _wxMenu, "destroy", wxMenu_Destroy, 1, 1 );
    wWrapMethod( 0, _wxMenu, "destroymenuitem", wxMenu_DestroyMenuItem, 1, 1 );
    wWrapMethod( 0, _wxMenu, "enable", wxMenu_Enable, 2, 2 );
    wWrapMethod( 0, _wxMenu, "finditem", wxMenu_FindItem, 1, 1 );
    wWrapMethod( 0, _wxMenu, "gethelpstring", wxMenu_GetHelpString, 1, 1 );
    wWrapMethod( 0, _wxMenu, "getlabel", wxMenu_GetLabel, 1, 1 );
    wWrapMethod( 0, _wxMenu, "getmenuitemcount", wxMenu_GetMenuItemCount, 0, 0 );
    wWrapMethod( 0, _wxMenu, "getmenuitems", wxMenu_GetMenuItems, 0, 0 );
    wWrapMethod( 0, _wxMenu, "gettitle", wxMenu_GetTitle, 0, 0 );
    wWrapMethod( 0, _wxMenu, "insert", wxMenu_Insert, 2, 2 );
    wWrapMethod( 0, _wxMenu, "insertcheckitem", wxMenu_InsertCheckItem, 3, 4 );
    wWrapMethod( 0, _wxMenu, "insertradioitem", wxMenu_InsertRadioItem, 3, 4 );
    wWrapMethod( 0, _wxMenu, "insertseparator", wxMenu_InsertSeparator, 1, 1 );
    wWrapMethod( 0, _wxMenu, "ischecked", wxMenu_IsChecked, 1, 1 );
    wWrapMethod( 0, _wxMenu, "isenabled", wxMenu_IsEnabled, 1, 1 );
    wWrapMethod( 0, _wxMenu, "prependitem", wxMenu_PrependItem, 1, 1 );
    wWrapMethod( 0, _wxMenu, "prepend", wxMenu_Prepend, 2, 4 );
    wWrapMethod( 0, _wxMenu, "prependcheckitem", wxMenu_PrependCheckItem, 2, 3 );
    wWrapMethod( 0, _wxMenu, "prependradioitem", wxMenu_PrependRadioItem, 2, 3 );
    wWrapMethod( 0, _wxMenu, "removebyid", wxMenu_RemoveById, 1, 1 );
    wWrapMethod( 0, _wxMenu, "remove", wxMenu_Remove, 1, 1 );
    wWrapMethod( 0, _wxMenu, "sethelpstring", wxMenu_SetHelpString, 2, 2 );
    wWrapMethod( 0, _wxMenu, "setlabel", wxMenu_SetLabel, 2, 2 );
    wWrapMethod( 0, _wxMenu, "settitle", wxMenu_SetTitle, 1, 1 );
    wWrapMethod( 0, _wxMenu, "updateui", wxMenu_UpdateUI, 0, 1 );
    wWrapMethod( 0, _wxMenuBar, "del", wxMenuBar_del, 0, 0 );
    wWrapMethod( 0, _wxMenuBar, "new", wxMenuBar_new, 0, 1 );
    wWrapMethod( 0, _wxMenuBar, "finalize", wxMenuBar_finalize, 0, 0 );
    wWrapMethod( 0, _wxMenuBar, "append", wxMenuBar_Append, 2, 2 );
    wWrapMethod( 0, _wxMenuBar, "check", wxMenuBar_Check, 2, 2 );
    wWrapMethod( 0, _wxMenuBar, "enable", wxMenuBar_Enable, 2, 2 );
    wWrapMethod( 0, _wxMenuBar, "enabletop", wxMenuBar_EnableTop, 2, 2 );
    wWrapMethod( 0, _wxMenuBar, "findmenu", wxMenuBar_FindMenu, 1, 1 );
    wWrapMethod( 0, _wxMenuBar, "findmenuitem", wxMenuBar_FindMenuItem, 2, 2 );
    wWrapMethod( 0, _wxMenuBar, "gethelpstring", wxMenuBar_GetHelpString, 1, 1 );
    wWrapMethod( 0, _wxMenuBar, "getlabel", wxMenuBar_GetLabel, 1, 1 );
    wWrapMethod( 0, _wxMenuBar, "getlabeltop", wxMenuBar_GetLabelTop, 1, 1 );
    wWrapMethod( 0, _wxMenuBar, "getmenu", wxMenuBar_GetMenu, 1, 1 );
    wWrapMethod( 0, _wxMenuBar, "getmenucount", wxMenuBar_GetMenuCount, 0, 0 );
    wWrapMethod( 0, _wxMenuBar, "insert", wxMenuBar_Insert, 3, 3 );
    wWrapMethod( 0, _wxMenuBar, "ischecked", wxMenuBar_IsChecked, 1, 1 );
    wWrapMethod( 0, _wxMenuBar, "isenabled", wxMenuBar_IsEnabled, 1, 1 );
    wWrapMethod( 0, _wxMenuBar, "refresh", wxMenuBar_Refresh, 0, 0 );
    wWrapMethod( 0, _wxMenuBar, "remove", wxMenuBar_Remove, 1, 1 );
    wWrapMethod( 0, _wxMenuBar, "replace", wxMenuBar_Replace, 3, 3 );
    wWrapMethod( 0, _wxMenuBar, "sethelpstring", wxMenuBar_SetHelpString, 2, 2 );
    wWrapMethod( 0, _wxMenuBar, "setlabel", wxMenuBar_SetLabel, 2, 2 );
    wWrapMethod( 0, _wxMenuBar, "setlabeltop", wxMenuBar_SetLabelTop, 2, 2 );
    wWrapMethod( 0, _wxMenuItem, "del", wxMenuItem_del, 0, 0 );
    wWrapMethod( 0, _wxMenuItem, "new", wxMenuItem_new, 0, 6 );
    wWrapMethod( 0, _wxMenuItem, "finalize", wxMenuItem_finalize, 0, 0 );
    wWrapMethod( 0, _wxMenuItem, "check", wxMenuItem_Check, 1, 1 );
    wWrapMethod( 0, _wxMenuItem, "enable", wxMenuItem_Enable, 1, 1 );
    wWrapMethod( 0, _wxMenuItem, "gethelp", wxMenuItem_GetHelp, 0, 0 );
    wWrapMethod( 0, _wxMenuItem, "getid", wxMenuItem_GetId, 0, 0 );
    wWrapMethod( 0, _wxMenuItem, "getlabel", wxMenuItem_GetLabel, 0, 0 );
    wWrapMethod( 0, _wxMenuItem, "getlabelfromtext", wxMenuItem_GetLabelFromText, 1, 1 );
    wWrapMethod( 0, _wxMenuItem, "gettext", wxMenuItem_GetText, 0, 0 );
    wWrapMethod( 0, _wxMenuItem, "getsubmenu", wxMenuItem_GetSubMenu, 0, 0 );
    wWrapMethod( 0, _wxMenuItem, "ischeckable", wxMenuItem_IsCheckable, 0, 0 );
    wWrapMethod( 0, _wxMenuItem, "ischecked", wxMenuItem_IsChecked, 0, 0 );
    wWrapMethod( 0, _wxMenuItem, "isenabled", wxMenuItem_IsEnabled, 0, 0 );
    wWrapMethod( 0, _wxMenuItem, "isseparator", wxMenuItem_IsSeparator, 0, 0 );
    wWrapMethod( 0, _wxMenuItem, "sethelp", wxMenuItem_SetHelp, 1, 1 );
    wWrapMethod( 0, _wxEvent, "del", wxEvent_del, 0, 0 );
    wWrapMethod( 0, _wxEvent, "geteventobject", wxEvent_GetEventObject, 0, 0 );
    wWrapMethod( 0, _wxEvent, "geteventtype", wxEvent_GetEventType, 0, 0 );
    wWrapMethod( 0, _wxEvent, "getid", wxEvent_GetId, 0, 0 );
    wWrapMethod( 0, _wxEvent, "getskipped", wxEvent_GetSkipped, 0, 0 );
    wWrapMethod( 0, _wxEvent, "gettimestamp", wxEvent_GetTimestamp, 0, 0 );
    wWrapMethod( 0, _wxEvent, "seteventobject", wxEvent_SetEventObject, 1, 1 );
    wWrapMethod( 0, _wxEvent, "seteventtype", wxEvent_SetEventType, 1, 1 );
    wWrapMethod( 0, _wxEvent, "setid", wxEvent_SetId, 1, 1 );
    wWrapMethod( 0, _wxEvent, "settimestamp", wxEvent_SetTimestamp, 1, 1 );
    wWrapMethod( 0, _wxEvent, "skip", wxEvent_Skip, 0, 1 );
    wWrapMethod( 0, _wxTimerEvent, "del", wxTimerEvent_del, 0, 0 );
    wWrapMethod( 0, _wxTimerEvent, "getinterval", wxTimerEvent_GetInterval, 0, 0 );
    wWrapMethod( 0, _wxCommandEvent, "del", wxCommandEvent_del, 0, 0 );
    wWrapMethod( 0, _wxCommandEvent, "new", wxCommandEvent_new, 0, 2 );
    wWrapMethod( 0, _wxCommandEvent, "getclientdata", wxCommandEvent_GetClientData, 0, 0 );
    wWrapMethod( 0, _wxCommandEvent, "getextralong", wxCommandEvent_GetExtraLong, 0, 0 );
    wWrapMethod( 0, _wxCommandEvent, "getint", wxCommandEvent_GetInt, 0, 0 );
    wWrapMethod( 0, _wxCommandEvent, "getselection", wxCommandEvent_GetSelection, 0, 0 );
    wWrapMethod( 0, _wxCommandEvent, "getstring", wxCommandEvent_GetString, 0, 0 );
    wWrapMethod( 0, _wxCommandEvent, "ischecked", wxCommandEvent_IsChecked, 0, 0 );
    wWrapMethod( 0, _wxCommandEvent, "isselection", wxCommandEvent_IsSelection, 0, 0 );
    wWrapMethod( 0, _wxCommandEvent, "setclientdata", wxCommandEvent_SetClientData, 1, 1 );
    wWrapMethod( 0, _wxCommandEvent, "setextralong", wxCommandEvent_SetExtraLong, 1, 1 );
    wWrapMethod( 0, _wxCommandEvent, "setint", wxCommandEvent_SetInt, 1, 1 );
    wWrapMethod( 0, _wxCommandEvent, "setstring", wxCommandEvent_SetString, 1, 1 );
    wWrapMethod( 0, _wxNotifyEvent, "del", wxNotifyEvent_del, 0, 0 );
    wWrapMethod( 0, _wxNotifyEvent, "new", wxNotifyEvent_new, 0, 2 );
    wWrapMethod( 0, _wxNotifyEvent, "isallowed", wxNotifyEvent_IsAllowed, 0, 0 );
    wWrapMethod( 0, _wxNotifyEvent, "veto", wxNotifyEvent_Veto, 0, 0 );
    wWrapMethod( 0, _wxActivateEvent, "del", wxActivateEvent_del, 0, 0 );
    wWrapMethod( 0, _wxActivateEvent, "new", wxActivateEvent_new, 0, 3 );
    wWrapMethod( 0, _wxActivateEvent, "getactive", wxActivateEvent_GetActive, 0, 0 );
    wWrapMethod( 0, _wxCalendarEvent, "del", wxCalendarEvent_del, 0, 0 );
    wWrapMethod( 0, _wxCalendarEvent, "new", wxCalendarEvent_new, 2, 2 );
    wWrapMethod( 0, _wxCalendarEvent, "getdate", wxCalendarEvent_GetDate, 0, 0 );
    wWrapMethod( 0, _wxCalendarEvent, "getweekday", wxCalendarEvent_GetWeekDay, 0, 0 );
    wWrapMethod( 0, _wxCalculateLayoutEvent, "del", wxCalculateLayoutEvent_del, 0, 0 );
    wWrapMethod( 0, _wxCalculateLayoutEvent, "new", wxCalculateLayoutEvent_new, 0, 1 );
    wWrapMethod( 0, _wxCalculateLayoutEvent, "getflags", wxCalculateLayoutEvent_GetFlags, 0, 0 );
    wWrapMethod( 0, _wxCalculateLayoutEvent, "getrect", wxCalculateLayoutEvent_GetRect, 0, 0 );
    wWrapMethod( 0, _wxCalculateLayoutEvent, "setflags", wxCalculateLayoutEvent_SetFlags, 1, 1 );
    wWrapMethod( 0, _wxCalculateLayoutEvent, "setrect", wxCalculateLayoutEvent_SetRect, 1, 1 );
    wWrapMethod( 0, _wxCloseEvent, "del", wxCloseEvent_del, 0, 0 );
    wWrapMethod( 0, _wxCloseEvent, "new", wxCloseEvent_new, 0, 2 );
    wWrapMethod( 0, _wxCloseEvent, "canveto", wxCloseEvent_CanVeto, 0, 0 );
    wWrapMethod( 0, _wxCloseEvent, "getloggingoff", wxCloseEvent_GetLoggingOff, 0, 0 );
    wWrapMethod( 0, _wxCloseEvent, "setcanveto", wxCloseEvent_SetCanVeto, 1, 1 );
    wWrapMethod( 0, _wxCloseEvent, "setloggingoff", wxCloseEvent_SetLoggingOff, 1, 1 );
    wWrapMethod( 0, _wxCloseEvent, "veto", wxCloseEvent_Veto, 0, 1 );
    wWrapMethod( 0, _wxDialUpEvent, "del", wxDialUpEvent_del, 0, 0 );
    wWrapMethod( 0, _wxDialUpEvent, "new", wxDialUpEvent_new, 2, 2 );
    wWrapMethod( 0, _wxDialUpEvent, "isconnectedevent", wxDialUpEvent_IsConnectedEvent, 0, 0 );
    wWrapMethod( 0, _wxDialUpEvent, "isownevent", wxDialUpEvent_IsOwnEvent, 0, 0 );
    wWrapMethod( 0, _wxDropFilesEvent, "del", wxDropFilesEvent_del, 0, 0 );
    wWrapMethod( 0, _wxDropFilesEvent, "getfiles", wxDropFilesEvent_GetFiles, 0, 0 );
    wWrapMethod( 0, _wxDropFilesEvent, "getnumberoffiles", wxDropFilesEvent_GetNumberOfFiles, 0, 0 );
    wWrapMethod( 0, _wxDropFilesEvent, "getposition", wxDropFilesEvent_GetPosition, 0, 0 );
    wWrapMethod( 0, _wxEraseEvent, "del", wxEraseEvent_del, 0, 0 );
    wWrapMethod( 0, _wxEraseEvent, "new", wxEraseEvent_new, 0, 2 );
    wWrapMethod( 0, _wxEraseEvent, "getdc", wxEraseEvent_GetDC, 0, 0 );
    wWrapMethod( 0, _wxFocusEvent, "del", wxFocusEvent_del, 0, 0 );
    wWrapMethod( 0, _wxFocusEvent, "new", wxFocusEvent_new, 0, 2 );
    wWrapMethod( 0, _wxKeyEvent, "del", wxKeyEvent_del, 0, 0 );
    wWrapMethod( 0, _wxKeyEvent, "new", wxKeyEvent_new, 1, 1 );
    wWrapMethod( 0, _wxKeyEvent, "altdown", wxKeyEvent_AltDown, 0, 0 );
    wWrapMethod( 0, _wxKeyEvent, "controldown", wxKeyEvent_ControlDown, 0, 0 );
    wWrapMethod( 0, _wxKeyEvent, "getkeycode", wxKeyEvent_GetKeyCode, 0, 0 );
    wWrapMethod( 0, _wxKeyEvent, "getx", wxKeyEvent_GetX, 0, 0 );
    wWrapMethod( 0, _wxKeyEvent, "gety", wxKeyEvent_GetY, 0, 0 );
    wWrapMethod( 0, _wxKeyEvent, "metadown", wxKeyEvent_MetaDown, 0, 0 );
    wWrapMethod( 0, _wxKeyEvent, "getposition", wxKeyEvent_GetPosition, 0, 0 );
    wWrapMethod( 0, _wxKeyEvent, "getpositionxy", wxKeyEvent_GetPositionXY, 0, 0 );
    wWrapMethod( 0, _wxKeyEvent, "getpositionx", wxKeyEvent_GetPositionX, 0, 0 );
    wWrapMethod( 0, _wxKeyEvent, "getpositiony", wxKeyEvent_GetPositionY, 0, 0 );
    wWrapMethod( 0, _wxKeyEvent, "hasmodifiers", wxKeyEvent_HasModifiers, 0, 0 );
    wWrapMethod( 0, _wxKeyEvent, "shiftdown", wxKeyEvent_ShiftDown, 0, 0 );
    wWrapMethod( 0, _wxIdleEvent, "del", wxIdleEvent_del, 0, 0 );
    wWrapMethod( 0, _wxIdleEvent, "new", wxIdleEvent_new, 0, 0 );
    wWrapMethod( 0, _wxIdleEvent, "requestmore", wxIdleEvent_RequestMore, 0, 1 );
    wWrapMethod( 0, _wxIdleEvent, "morerequested", wxIdleEvent_MoreRequested, 0, 0 );
    wWrapMethod( 0, _wxInitDialogEvent, "del", wxInitDialogEvent_del, 0, 0 );
    wWrapMethod( 0, _wxInitDialogEvent, "new", wxInitDialogEvent_new, 0, 1 );
    wWrapMethod( 0, _wxJoystick, "del", wxJoystick_del, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "new", wxJoystick_new, 0, 1 );
    wWrapMethod( 0, _wxJoystick, "finalize", wxJoystick_finalize, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "getbuttonstate", wxJoystick_GetButtonState, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "getmanufacturerid", wxJoystick_GetManufacturerId, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "getmovementthreshold", wxJoystick_GetMovementThreshold, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "getnumberaxes", wxJoystick_GetNumberAxes, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "getnumberbuttons", wxJoystick_GetNumberButtons, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "getnumberjoysticks", wxJoystick_GetNumberJoysticks, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "getpollingmax", wxJoystick_GetPollingMax, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "getpollingmin", wxJoystick_GetPollingMin, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "getproductid", wxJoystick_GetProductId, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "getproductname", wxJoystick_GetProductName, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "getposition", wxJoystick_GetPosition, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "getpovposition", wxJoystick_GetPOVPosition, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "getpovctsposition", wxJoystick_GetPOVCTSPosition, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "getruddermax", wxJoystick_GetRudderMax, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "getruddermin", wxJoystick_GetRudderMin, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "getrudderposition", wxJoystick_GetRudderPosition, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "getumax", wxJoystick_GetUMax, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "getumin", wxJoystick_GetUMin, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "getuposition", wxJoystick_GetUPosition, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "getvmax", wxJoystick_GetVMax, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "getvmin", wxJoystick_GetVMin, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "getvposition", wxJoystick_GetVPosition, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "getxmax", wxJoystick_GetXMax, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "getxmin", wxJoystick_GetXMin, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "getymax", wxJoystick_GetYMax, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "getymin", wxJoystick_GetYMin, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "getzmax", wxJoystick_GetZMax, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "getzmin", wxJoystick_GetZMin, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "getzposition", wxJoystick_GetZPosition, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "haspov", wxJoystick_HasPOV, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "haspov4dir", wxJoystick_HasPOV4Dir, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "haspovcts", wxJoystick_HasPOVCTS, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "hasrudder", wxJoystick_HasRudder, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "hasu", wxJoystick_HasU, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "hasv", wxJoystick_HasV, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "hasz", wxJoystick_HasZ, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "isok", wxJoystick_IsOk, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "releasecapture", wxJoystick_ReleaseCapture, 0, 0 );
    wWrapMethod( 0, _wxJoystick, "setcapture", wxJoystick_SetCapture, 1, 2 );
    wWrapMethod( 0, _wxJoystick, "setmovementthreshold", wxJoystick_SetMovementThreshold, 1, 1 );
    wWrapMethod( 0, _wxJoystickEvent, "del", wxJoystickEvent_del, 0, 0 );
    wWrapMethod( 0, _wxJoystickEvent, "new", wxJoystickEvent_new, 0, 4 );
    wWrapMethod( 0, _wxJoystickEvent, "buttondown", wxJoystickEvent_ButtonDown, 0, 1 );
    wWrapMethod( 0, _wxJoystickEvent, "buttonisdown", wxJoystickEvent_ButtonIsDown, 0, 1 );
    wWrapMethod( 0, _wxJoystickEvent, "buttonup", wxJoystickEvent_ButtonUp, 0, 1 );
    wWrapMethod( 0, _wxJoystickEvent, "getbuttonchange", wxJoystickEvent_GetButtonChange, 0, 0 );
    wWrapMethod( 0, _wxJoystickEvent, "getbuttonstate", wxJoystickEvent_GetButtonState, 0, 0 );
    wWrapMethod( 0, _wxJoystickEvent, "getjoystick", wxJoystickEvent_GetJoystick, 0, 0 );
    wWrapMethod( 0, _wxJoystickEvent, "getposition", wxJoystickEvent_GetPosition, 0, 0 );
    wWrapMethod( 0, _wxJoystickEvent, "getzposition", wxJoystickEvent_GetZPosition, 0, 0 );
    wWrapMethod( 0, _wxJoystickEvent, "isbutton", wxJoystickEvent_IsButton, 0, 0 );
    wWrapMethod( 0, _wxJoystickEvent, "ismove", wxJoystickEvent_IsMove, 0, 0 );
    wWrapMethod( 0, _wxJoystickEvent, "iszmove", wxJoystickEvent_IsZMove, 0, 0 );
    wWrapMethod( 0, _wxListEvent, "del", wxListEvent_del, 0, 0 );
    wWrapMethod( 0, _wxListEvent, "new", wxListEvent_new, 0, 2 );
    wWrapMethod( 0, _wxListEvent, "getcode", wxListEvent_GetCode, 0, 0 );
    wWrapMethod( 0, _wxListEvent, "getindex", wxListEvent_GetIndex, 0, 0 );
    wWrapMethod( 0, _wxListEvent, "getcolumn", wxListEvent_GetColumn, 0, 0 );
    wWrapMethod( 0, _wxListEvent, "getpoint", wxListEvent_GetPoint, 0, 0 );
    wWrapMethod( 0, _wxListEvent, "getlabel", wxListEvent_GetLabel, 0, 0 );
    wWrapMethod( 0, _wxListEvent, "gettext", wxListEvent_GetText, 0, 0 );
    wWrapMethod( 0, _wxListEvent, "getimage", wxListEvent_GetImage, 0, 0 );
    wWrapMethod( 0, _wxListEvent, "getdata", wxListEvent_GetData, 0, 0 );
    wWrapMethod( 0, _wxListEvent, "getmask", wxListEvent_GetMask, 0, 0 );
    wWrapMethod( 0, _wxListEvent, "getitem", wxListEvent_GetItem, 0, 0 );
    wWrapMethod( 0, _wxMenuEvent, "del", wxMenuEvent_del, 0, 0 );
    wWrapMethod( 0, _wxMenuEvent, "new", wxMenuEvent_new, 0, 2 );
    wWrapMethod( 0, _wxMenuEvent, "getmenuid", wxMenuEvent_GetMenuId, 0, 0 );
    wWrapMethod( 0, _wxMouseEvent, "del", wxMouseEvent_del, 0, 0 );
    wWrapMethod( 0, _wxMouseEvent, "altdown", wxMouseEvent_AltDown, 0, 0 );
    wWrapMethod( 0, _wxMouseEvent, "button", wxMouseEvent_Button, 1, 1 );
    wWrapMethod( 0, _wxMouseEvent, "buttondclick", wxMouseEvent_ButtonDClick, 0, 1 );
    wWrapMethod( 0, _wxMouseEvent, "buttondown", wxMouseEvent_ButtonDown, 0, 1 );
    wWrapMethod( 0, _wxMouseEvent, "buttonup", wxMouseEvent_ButtonUp, 0, 1 );
    wWrapMethod( 0, _wxMouseEvent, "controldown", wxMouseEvent_ControlDown, 0, 0 );
    wWrapMethod( 0, _wxMouseEvent, "dragging", wxMouseEvent_Dragging, 0, 0 );
    wWrapMethod( 0, _wxMouseEvent, "entering", wxMouseEvent_Entering, 0, 0 );
    wWrapMethod( 0, _wxMouseEvent, "getposition", wxMouseEvent_GetPosition, 0, 0 );
    wWrapMethod( 0, _wxMouseEvent, "getpositionxy", wxMouseEvent_GetPositionXY, 0, 0 );
    wWrapMethod( 0, _wxMouseEvent, "getpositionx", wxMouseEvent_GetPositionX, 0, 0 );
    wWrapMethod( 0, _wxMouseEvent, "getpositiony", wxMouseEvent_GetPositionY, 0, 0 );
    wWrapMethod( 0, _wxMouseEvent, "getlogicalposition", wxMouseEvent_GetLogicalPosition, 1, 1 );
    wWrapMethod( 0, _wxMouseEvent, "getx", wxMouseEvent_GetX, 0, 0 );
    wWrapMethod( 0, _wxMouseEvent, "gety", wxMouseEvent_GetY, 0, 0 );
    wWrapMethod( 0, _wxMouseEvent, "isbutton", wxMouseEvent_IsButton, 0, 0 );
    wWrapMethod( 0, _wxMouseEvent, "leaving", wxMouseEvent_Leaving, 0, 0 );
    wWrapMethod( 0, _wxMouseEvent, "leftdclick", wxMouseEvent_LeftDClick, 0, 0 );
    wWrapMethod( 0, _wxMouseEvent, "leftdown", wxMouseEvent_LeftDown, 0, 0 );
    wWrapMethod( 0, _wxMouseEvent, "leftisdown", wxMouseEvent_LeftIsDown, 0, 0 );
    wWrapMethod( 0, _wxMouseEvent, "leftup", wxMouseEvent_LeftUp, 0, 0 );
    wWrapMethod( 0, _wxMouseEvent, "metadown", wxMouseEvent_MetaDown, 0, 0 );
    wWrapMethod( 0, _wxMouseEvent, "middledclick", wxMouseEvent_MiddleDClick, 0, 0 );
    wWrapMethod( 0, _wxMouseEvent, "middledown", wxMouseEvent_MiddleDown, 0, 0 );
    wWrapMethod( 0, _wxMouseEvent, "middleisdown", wxMouseEvent_MiddleIsDown, 0, 0 );
    wWrapMethod( 0, _wxMouseEvent, "middleup", wxMouseEvent_MiddleUp, 0, 0 );
    wWrapMethod( 0, _wxMouseEvent, "moving", wxMouseEvent_Moving, 0, 0 );
    wWrapMethod( 0, _wxMouseEvent, "rightdclick", wxMouseEvent_RightDClick, 0, 0 );
    wWrapMethod( 0, _wxMouseEvent, "rightdown", wxMouseEvent_RightDown, 0, 0 );
    wWrapMethod( 0, _wxMouseEvent, "rightisdown", wxMouseEvent_RightIsDown, 0, 0 );
    wWrapMethod( 0, _wxMouseEvent, "rightup", wxMouseEvent_RightUp, 0, 0 );
    wWrapMethod( 0, _wxMouseEvent, "shiftdown", wxMouseEvent_ShiftDown, 0, 0 );
    wWrapMethod( 0, _wxMoveEvent, "del", wxMoveEvent_del, 0, 0 );
    wWrapMethod( 0, _wxMoveEvent, "new", wxMoveEvent_new, 1, 2 );
    wWrapMethod( 0, _wxMoveEvent, "getposition", wxMoveEvent_GetPosition, 0, 0 );
    wWrapMethod( 0, _wxNotebookEvent, "del", wxNotebookEvent_del, 0, 0 );
    wWrapMethod( 0, _wxNotebookEvent, "new", wxNotebookEvent_new, 0, 4 );
    wWrapMethod( 0, _wxNotebookEvent, "getoldselection", wxNotebookEvent_GetOldSelection, 0, 0 );
    wWrapMethod( 0, _wxNotebookEvent, "getselection", wxNotebookEvent_GetSelection, 0, 0 );
    wWrapMethod( 0, _wxNotebookEvent, "setoldselection", wxNotebookEvent_SetOldSelection, 1, 1 );
    wWrapMethod( 0, _wxNotebookEvent, "setselection", wxNotebookEvent_SetSelection, 1, 1 );
    wWrapMethod( 0, _wxPaintEvent, "del", wxPaintEvent_del, 0, 0 );
    wWrapMethod( 0, _wxPaintEvent, "new", wxPaintEvent_new, 0, 1 );
    wWrapMethod( 0, _wxProcessEvent, "del", wxProcessEvent_del, 0, 0 );
    wWrapMethod( 0, _wxProcessEvent, "new", wxProcessEvent_new, 0, 2 );
    wWrapMethod( 0, _wxProcessEvent, "getpid", wxProcessEvent_GetPid, 0, 0 );
    wWrapMethod( 0, _wxQueryLayoutInfoEvent, "del", wxQueryLayoutInfoEvent_del, 0, 0 );
    wWrapMethod( 0, _wxQueryLayoutInfoEvent, "new", wxQueryLayoutInfoEvent_new, 0, 1 );
    wWrapMethod( 0, _wxQueryLayoutInfoEvent, "getflags", wxQueryLayoutInfoEvent_GetFlags, 0, 0 );
    wWrapMethod( 0, _wxQueryLayoutInfoEvent, "getorientation", wxQueryLayoutInfoEvent_GetOrientation, 0, 0 );
    wWrapMethod( 0, _wxQueryLayoutInfoEvent, "getrequestedlength", wxQueryLayoutInfoEvent_GetRequestedLength, 0, 0 );
    wWrapMethod( 0, _wxQueryLayoutInfoEvent, "getsize", wxQueryLayoutInfoEvent_GetSize, 0, 0 );
    wWrapMethod( 0, _wxQueryLayoutInfoEvent, "setalignment", wxQueryLayoutInfoEvent_SetAlignment, 1, 1 );
    wWrapMethod( 0, _wxQueryLayoutInfoEvent, "setflags", wxQueryLayoutInfoEvent_SetFlags, 1, 1 );
    wWrapMethod( 0, _wxQueryLayoutInfoEvent, "setorientation", wxQueryLayoutInfoEvent_SetOrientation, 1, 1 );
    wWrapMethod( 0, _wxQueryLayoutInfoEvent, "setrequestedlength", wxQueryLayoutInfoEvent_SetRequestedLength, 1, 1 );
    wWrapMethod( 0, _wxQueryLayoutInfoEvent, "setsize", wxQueryLayoutInfoEvent_SetSize, 1, 1 );
    wWrapMethod( 0, _wxScrollEvent, "del", wxScrollEvent_del, 0, 0 );
    wWrapMethod( 0, _wxScrollEvent, "new", wxScrollEvent_new, 0, 4 );
    wWrapMethod( 0, _wxScrollEvent, "getorientation", wxScrollEvent_GetOrientation, 0, 0 );
    wWrapMethod( 0, _wxScrollEvent, "getposition", wxScrollEvent_GetPosition, 0, 0 );
    wWrapMethod( 0, _wxScrollWinEvent, "del", wxScrollWinEvent_del, 0, 0 );
    wWrapMethod( 0, _wxScrollWinEvent, "getorientation", wxScrollWinEvent_GetOrientation, 0, 0 );
    wWrapMethod( 0, _wxScrollWinEvent, "getposition", wxScrollWinEvent_GetPosition, 0, 0 );
    wWrapMethod( 0, _wxSizeEvent, "del", wxSizeEvent_del, 0, 0 );
    wWrapMethod( 0, _wxSizeEvent, "new", wxSizeEvent_new, 1, 2 );
    wWrapMethod( 0, _wxSizeEvent, "getsize", wxSizeEvent_GetSize, 0, 0 );
    wWrapMethod( 0, _wxSocketEvent, "del", wxSocketEvent_del, 0, 0 );
    wWrapMethod( 0, _wxSocketEvent, "new", wxSocketEvent_new, 0, 1 );
    wWrapMethod( 0, _wxSocketEvent, "getclientdata", wxSocketEvent_GetClientData, 0, 0 );
    wWrapMethod( 0, _wxSocketEvent, "getsocket", wxSocketEvent_GetSocket, 0, 0 );
    wWrapMethod( 0, _wxSocketEvent, "getsocketevent", wxSocketEvent_GetSocketEvent, 0, 0 );
    wWrapMethod( 0, _wxSpinEvent, "del", wxSpinEvent_del, 0, 0 );
    wWrapMethod( 0, _wxSpinEvent, "new", wxSpinEvent_new, 0, 2 );
    wWrapMethod( 0, _wxSpinEvent, "getposition", wxSpinEvent_GetPosition, 0, 0 );
    wWrapMethod( 0, _wxSpinEvent, "setposition", wxSpinEvent_SetPosition, 1, 1 );
    wWrapMethod( 0, _wxSysColourChangedEvent, "del", wxSysColourChangedEvent_del, 0, 0 );
    wWrapMethod( 0, _wxSysColourChangedEvent, "new", wxSysColourChangedEvent_new, 0, 0 );
    wWrapMethod( 0, _wxTreeEvent, "del", wxTreeEvent_del, 0, 0 );
    wWrapMethod( 0, _wxTreeEvent, "new", wxTreeEvent_new, 0, 2 );
    wWrapMethod( 0, _wxTreeEvent, "getitem", wxTreeEvent_GetItem, 0, 0 );
    wWrapMethod( 0, _wxTreeEvent, "getolditem", wxTreeEvent_GetOldItem, 0, 0 );
    wWrapMethod( 0, _wxTreeEvent, "getpoint", wxTreeEvent_GetPoint, 0, 0 );
    wWrapMethod( 0, _wxTreeEvent, "getcode", wxTreeEvent_GetCode, 0, 0 );
    wWrapMethod( 0, _wxTreeEvent, "getlabel", wxTreeEvent_GetLabel, 0, 0 );
    wWrapMethod( 0, _wxUpdateUIEvent, "del", wxUpdateUIEvent_del, 0, 0 );
    wWrapMethod( 0, _wxUpdateUIEvent, "new", wxUpdateUIEvent_new, 0, 1 );
    wWrapMethod( 0, _wxUpdateUIEvent, "check", wxUpdateUIEvent_Check, 1, 1 );
    wWrapMethod( 0, _wxUpdateUIEvent, "enable", wxUpdateUIEvent_Enable, 1, 1 );
    wWrapMethod( 0, _wxUpdateUIEvent, "getchecked", wxUpdateUIEvent_GetChecked, 0, 0 );
    wWrapMethod( 0, _wxUpdateUIEvent, "getenabled", wxUpdateUIEvent_GetEnabled, 0, 0 );
    wWrapMethod( 0, _wxUpdateUIEvent, "getsetchecked", wxUpdateUIEvent_GetSetChecked, 0, 0 );
    wWrapMethod( 0, _wxUpdateUIEvent, "getsetenabled", wxUpdateUIEvent_GetSetEnabled, 0, 0 );
    wWrapMethod( 0, _wxUpdateUIEvent, "getsettext", wxUpdateUIEvent_GetSetText, 0, 0 );
    wWrapMethod( 0, _wxUpdateUIEvent, "gettext", wxUpdateUIEvent_GetText, 0, 0 );
    wWrapMethod( 0, _wxUpdateUIEvent, "settext", wxUpdateUIEvent_SetText, 1, 1 );
    wWrapMethod( 0, _wxWizardEvent, "del", wxWizardEvent_del, 0, 0 );
    wWrapMethod( 0, _wxWizardEvent, "new", wxWizardEvent_new, 0, 3 );
    wWrapMethod( 0, _wxWizardEvent, "getdirection", wxWizardEvent_GetDirection, 0, 0 );
    wWrapMethod( 0, _wxSplitterEvent, "del", wxSplitterEvent_del, 0, 0 );
    wWrapMethod( 0, _wxSplitterEvent, "new", wxSplitterEvent_new, 0, 2 );
    wWrapMethod( 0, _wxSplitterEvent, "getsashposition", wxSplitterEvent_GetSashPosition, 0, 0 );
    wWrapMethod( 0, _wxSplitterEvent, "getx", wxSplitterEvent_GetX, 0, 0 );
    wWrapMethod( 0, _wxSplitterEvent, "gety", wxSplitterEvent_GetY, 0, 0 );
    wWrapMethod( 0, _wxSplitterEvent, "getwindowbeingremoved", wxSplitterEvent_GetWindowBeingRemoved, 0, 0 );
    wWrapMethod( 0, _wxSplitterEvent, "setsashposition", wxSplitterEvent_SetSashPosition, 1, 1 );
    wWrapMethod( 0, _wxSizer, "del", wxSizer_del, 0, 0 );
    wWrapMethod( 0, _wxSizer, "finalize", wxSizer_finalize, 0, 0 );
    wWrapMethod( 0, _wxSizer, "addwindow", wxSizer_AddWindow, 1, 5 );
    wWrapMethod( 0, _wxSizer, "addsizer", wxSizer_AddSizer, 1, 5 );
    wWrapMethod( 0, _wxSizer, "add", wxSizer_Add, 2, 6 );
    wWrapMethod( 0, _wxSizer, "calcmin", wxSizer_CalcMin, 0, 0 );
    wWrapMethod( 0, _wxSizer, "fit", wxSizer_Fit, 1, 1 );
    wWrapMethod( 0, _wxSizer, "getsize", wxSizer_GetSize, 0, 0 );
    wWrapMethod( 0, _wxSizer, "getposition", wxSizer_GetPosition, 0, 0 );
    wWrapMethod( 0, _wxSizer, "getminsize", wxSizer_GetMinSize, 0, 0 );
    wWrapMethod( 0, _wxSizer, "layout", wxSizer_Layout, 0, 0 );
    wWrapMethod( 0, _wxSizer, "prependwindow", wxSizer_PrependWindow, 1, 5 );
    wWrapMethod( 0, _wxSizer, "prependsizer", wxSizer_PrependSizer, 1, 5 );
    wWrapMethod( 0, _wxSizer, "prepend", wxSizer_Prepend, 2, 6 );
    wWrapMethod( 0, _wxSizer, "recalcsizes", wxSizer_RecalcSizes, 0, 0 );
    wWrapMethod( 0, _wxSizer, "removewindow", wxSizer_RemoveWindow, 1, 1 );
    wWrapMethod( 0, _wxSizer, "removesizer", wxSizer_RemoveSizer, 1, 1 );
    wWrapMethod( 0, _wxSizer, "remove", wxSizer_Remove, 1, 1 );
    wWrapMethod( 0, _wxSizer, "setdimension", wxSizer_SetDimension, 4, 4 );
    wWrapMethod( 0, _wxSizer, "setminsize", wxSizer_SetMinSize, 2, 2 );
    wWrapMethod( 0, _wxSizer, "setwindowminsize", wxSizer_SetWindowMinSize, 3, 3 );
    wWrapMethod( 0, _wxSizer, "setsizerminsize", wxSizer_SetSizerMinSize, 3, 3 );
    wWrapMethod( 0, _wxSizer, "setitemminsize", wxSizer_SetItemMinSize, 3, 3 );
    wWrapMethod( 0, _wxSizer, "setsizehints", wxSizer_SetSizeHints, 1, 1 );
    wWrapMethod( 0, _wxGridSizer, "del", wxGridSizer_del, 0, 0 );
    wWrapMethod( 0, _wxGridSizer, "new", wxGridSizer_new, 4, 4 );
    wWrapMethod( 0, _wxFlexGridSizer, "del", wxFlexGridSizer_del, 0, 0 );
    wWrapMethod( 0, _wxFlexGridSizer, "new", wxFlexGridSizer_new, 4, 4 );
    wWrapMethod( 0, _wxBoxSizer, "del", wxBoxSizer_del, 0, 0 );
    wWrapMethod( 0, _wxBoxSizer, "new", wxBoxSizer_new, 1, 1 );
    wWrapMethod( 0, _wxBoxSizer, "recalcsizes", wxBoxSizer_RecalcSizes, 0, 0 );
    wWrapMethod( 0, _wxBoxSizer, "calcmin", wxBoxSizer_CalcMin, 0, 0 );
    wWrapMethod( 0, _wxBoxSizer, "getorientation", wxBoxSizer_GetOrientation, 0, 0 );
    wWrapMethod( 0, _wxStaticBoxSizer, "del", wxStaticBoxSizer_del, 0, 0 );
    wWrapMethod( 0, _wxStaticBoxSizer, "new", wxStaticBoxSizer_new, 2, 2 );
    wWrapMethod( 0, _wxStaticBoxSizer, "getstaticbox", wxStaticBoxSizer_GetStaticBox, 0, 0 );
    wWrapMethod( 0, _wxNotebookSizer, "del", wxNotebookSizer_del, 0, 0 );
    wWrapMethod( 0, _wxNotebookSizer, "new", wxNotebookSizer_new, 1, 1 );
    wWrapMethod( 0, _wxNotebookSizer, "getnotebook", wxNotebookSizer_GetNotebook, 0, 0 );
    wWrapMethod( 0, _wxIndividualLayoutConstraint, "del", wxIndividualLayoutConstraint_del, 0, 0 );
    wWrapMethod( 0, _wxIndividualLayoutConstraint, "new", wxIndividualLayoutConstraint_new, 0, 0 );
    wWrapMethod( 0, _wxIndividualLayoutConstraint, "absolute", wxIndividualLayoutConstraint_Absolute, 1, 1 );
    wWrapMethod( 0, _wxIndividualLayoutConstraint, "asis", wxIndividualLayoutConstraint_AsIs, 0, 0 );
    wWrapMethod( 0, _wxIndividualLayoutConstraint, "unconstrained", wxIndividualLayoutConstraint_Unconstrained, 0, 0 );
    wWrapMethod( 0, _wxIndividualLayoutConstraint, "leftof", wxIndividualLayoutConstraint_LeftOf, 1, 2 );
    wWrapMethod( 0, _wxIndividualLayoutConstraint, "percentof", wxIndividualLayoutConstraint_PercentOf, 3, 3 );
    wWrapMethod( 0, _wxIndividualLayoutConstraint, "rightof", wxIndividualLayoutConstraint_RightOf, 1, 2 );
    wWrapMethod( 0, _wxIndividualLayoutConstraint, "sameas", wxIndividualLayoutConstraint_SameAs, 2, 3 );
    wWrapMethod( 0, _wxIndividualLayoutConstraint, "set", wxIndividualLayoutConstraint_Set, 3, 5 );
    wWrapMethod( 0, _wxLayoutConstraints, "del", wxLayoutConstraints_del, 0, 0 );
    wWrapMethod( 0, _wxLayoutConstraints, "new", wxLayoutConstraints_new, 0, 0 );
    wWrapMethod( 0, _wxFont, "del", wxFont_del, 0, 0 );
    wWrapMethod( 0, _wxFont, "new", wxFont_new, 4, 7 );
    wWrapMethod( 0, _wxFont, "finalize", wxFont_finalize, 0, 0 );
    wWrapMethod( 0, _wxFont, "getdefaultencoding", wxFont_GetDefaultEncoding, 0, 0 );
    wWrapMethod( 0, _wxFont, "getfacename", wxFont_GetFaceName, 0, 0 );
    wWrapMethod( 0, _wxFont, "getfamily", wxFont_GetFamily, 0, 0 );
    wWrapMethod( 0, _wxFont, "getpointsize", wxFont_GetPointSize, 0, 0 );
    wWrapMethod( 0, _wxFont, "getstyle", wxFont_GetStyle, 0, 0 );
    wWrapMethod( 0, _wxFont, "getunderlined", wxFont_GetUnderlined, 0, 0 );
    wWrapMethod( 0, _wxFont, "getweight", wxFont_GetWeight, 0, 0 );
    wWrapMethod( 0, _wxFont, "setdefaultencoding", wxFont_SetDefaultEncoding, 1, 1 );
    wWrapMethod( 0, _wxFont, "setfacename", wxFont_SetFaceName, 1, 1 );
    wWrapMethod( 0, _wxFont, "setfamily", wxFont_SetFamily, 1, 1 );
    wWrapMethod( 0, _wxFont, "setpointsize", wxFont_SetPointSize, 1, 1 );
    wWrapMethod( 0, _wxFont, "setstyle", wxFont_SetStyle, 1, 1 );
    wWrapMethod( 0, _wxFont, "setunderlined", wxFont_SetUnderlined, 1, 1 );
    wWrapMethod( 0, _wxFont, "setweight", wxFont_SetWeight, 1, 1 );
    wWrapMethod( 0, _wxTimer, "del", wxTimer_del, 0, 0 );
    wWrapMethod( 0, _wxTimer, "new", wxTimer_new, 1, 2 );
    wWrapMethod( 0, _wxTimer, "finalize", wxTimer_finalize, 0, 0 );
    wWrapMethod( 0, _wxTimer, "isoneshot", wxTimer_IsOneShot, 0, 0 );
    wWrapMethod( 0, _wxTimer, "isrunning", wxTimer_IsRunning, 0, 0 );
    wWrapMethod( 0, _wxTimer, "notify", wxTimer_Notify, 0, 0 );
    wWrapMethod( 0, _wxTimer, "setowner", wxTimer_SetOwner, 1, 2 );
    wWrapMethod( 0, _wxTimer, "start", wxTimer_Start, 0, 2 );
    wWrapMethod( 0, _wxTimer, "stop", wxTimer_Stop, 0, 0 );
    wWrapMethod( 0, _wxHtmlHelpController, "del", wxHtmlHelpController_del, 0, 0 );
    wWrapMethod( 0, _wxHtmlHelpController, "new", wxHtmlHelpController_new, 0, 1 );
    wWrapMethod( 0, _wxHtmlHelpController, "addbook", wxHtmlHelpController_AddBook, 2, 2 );
    wWrapMethod( 0, _wxHtmlHelpController, "display", wxHtmlHelpController_Display, 1, 1 );
    wWrapMethod( 0, _wxHtmlHelpController, "displayid", wxHtmlHelpController_DisplayId, 1, 1 );
    wWrapMethod( 0, _wxHtmlHelpController, "displaycontents", wxHtmlHelpController_DisplayContents, 0, 0 );
    wWrapMethod( 0, _wxHtmlHelpController, "displayindex", wxHtmlHelpController_DisplayIndex, 0, 0 );
    wWrapMethod( 0, _wxHtmlHelpController, "keywordsearch", wxHtmlHelpController_KeywordSearch, 1, 1 );
    wWrapMethod( 0, _wxHtmlHelpController, "readcustomization", wxHtmlHelpController_ReadCustomization, 1, 2 );
    wWrapMethod( 0, _wxHtmlHelpController, "settempdir", wxHtmlHelpController_SetTempDir, 1, 1 );
    wWrapMethod( 0, _wxHtmlHelpController, "settitleformat", wxHtmlHelpController_SetTitleFormat, 1, 1 );
    wWrapMethod( 0, _wxHtmlHelpController, "useconfig", wxHtmlHelpController_UseConfig, 1, 2 );
    wWrapMethod( 0, _wxHtmlHelpController, "writecustomization", wxHtmlHelpController_WriteCustomization, 1, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "del", wxStyledTextCtrl_del, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "new", wxStyledTextCtrl_new, 2, 6 );
    wWrapMethod( 0, _wxStyledTextCtrl, "finalize", wxStyledTextCtrl_finalize, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "sendmsg", wxStyledTextCtrl_SendMsg, 3, 3 );
    wWrapMethod( 0, _wxStyledTextCtrl, "addtext", wxStyledTextCtrl_AddText, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "addstyledtext", wxStyledTextCtrl_AddStyledText, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "inserttext", wxStyledTextCtrl_InsertText, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "clearall", wxStyledTextCtrl_ClearAll, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "cleardocumentstyle", wxStyledTextCtrl_ClearDocumentStyle, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getlength", wxStyledTextCtrl_GetLength, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getcharat", wxStyledTextCtrl_GetCharAt, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getcurrentpos", wxStyledTextCtrl_GetCurrentPos, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getanchor", wxStyledTextCtrl_GetAnchor, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getstyleat", wxStyledTextCtrl_GetStyleAt, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "redo", wxStyledTextCtrl_Redo, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setundocollection", wxStyledTextCtrl_SetUndoCollection, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "selectall", wxStyledTextCtrl_SelectAll, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setsavepoint", wxStyledTextCtrl_SetSavePoint, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getstyledtext", wxStyledTextCtrl_GetStyledText, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "canredo", wxStyledTextCtrl_CanRedo, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "markerlinefromhandle", wxStyledTextCtrl_MarkerLineFromHandle, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "markerdeletehandle", wxStyledTextCtrl_MarkerDeleteHandle, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getundocollection", wxStyledTextCtrl_GetUndoCollection, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getviewwhitespace", wxStyledTextCtrl_GetViewWhiteSpace, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setviewwhitespace", wxStyledTextCtrl_SetViewWhiteSpace, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "positionfrompointclose", wxStyledTextCtrl_PositionFromPointClose, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "gotoline", wxStyledTextCtrl_GotoLine, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "gotopos", wxStyledTextCtrl_GotoPos, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setanchor", wxStyledTextCtrl_SetAnchor, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getcurline", wxStyledTextCtrl_GetCurLine, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getendstyled", wxStyledTextCtrl_GetEndStyled, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "converteols", wxStyledTextCtrl_ConvertEOLs, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "geteolmode", wxStyledTextCtrl_GetEOLMode, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "seteolmode", wxStyledTextCtrl_SetEOLMode, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "startstyling", wxStyledTextCtrl_StartStyling, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setstyling", wxStyledTextCtrl_SetStyling, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getbuffereddraw", wxStyledTextCtrl_GetBufferedDraw, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setbuffereddraw", wxStyledTextCtrl_SetBufferedDraw, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "settabwidth", wxStyledTextCtrl_SetTabWidth, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "gettabwidth", wxStyledTextCtrl_GetTabWidth, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setcodepage", wxStyledTextCtrl_SetCodePage, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "markerdefine", wxStyledTextCtrl_MarkerDefine, 4, 4 );
    wWrapMethod( 0, _wxStyledTextCtrl, "markersetforeground", wxStyledTextCtrl_MarkerSetForeground, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "markersetbackground", wxStyledTextCtrl_MarkerSetBackground, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "markeradd", wxStyledTextCtrl_MarkerAdd, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "markerdelete", wxStyledTextCtrl_MarkerDelete, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "markerdeleteall", wxStyledTextCtrl_MarkerDeleteAll, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "markerget", wxStyledTextCtrl_MarkerGet, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "markernext", wxStyledTextCtrl_MarkerNext, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "markerprevious", wxStyledTextCtrl_MarkerPrevious, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "markerdefinebitmap", wxStyledTextCtrl_MarkerDefineBitmap, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setmargintype", wxStyledTextCtrl_SetMarginType, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getmargintype", wxStyledTextCtrl_GetMarginType, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setmarginwidth", wxStyledTextCtrl_SetMarginWidth, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getmarginwidth", wxStyledTextCtrl_GetMarginWidth, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setmarginmask", wxStyledTextCtrl_SetMarginMask, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getmarginmask", wxStyledTextCtrl_GetMarginMask, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setmarginsensitive", wxStyledTextCtrl_SetMarginSensitive, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getmarginsensitive", wxStyledTextCtrl_GetMarginSensitive, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "styleclearall", wxStyledTextCtrl_StyleClearAll, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "stylesetforeground", wxStyledTextCtrl_StyleSetForeground, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "stylesetbackground", wxStyledTextCtrl_StyleSetBackground, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "stylesetbold", wxStyledTextCtrl_StyleSetBold, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "stylesetitalic", wxStyledTextCtrl_StyleSetItalic, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "stylesetsize", wxStyledTextCtrl_StyleSetSize, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "stylesetfacename", wxStyledTextCtrl_StyleSetFaceName, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "styleseteolfilled", wxStyledTextCtrl_StyleSetEOLFilled, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "styleresetdefault", wxStyledTextCtrl_StyleResetDefault, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "stylesetunderline", wxStyledTextCtrl_StyleSetUnderline, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "stylesetcase", wxStyledTextCtrl_StyleSetCase, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "stylesetcharacterset", wxStyledTextCtrl_StyleSetCharacterSet, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "stylesethotspot", wxStyledTextCtrl_StyleSetHotSpot, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setselforeground", wxStyledTextCtrl_SetSelForeground, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setselbackground", wxStyledTextCtrl_SetSelBackground, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setcaretforeground", wxStyledTextCtrl_SetCaretForeground, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "cmdkeyassign", wxStyledTextCtrl_CmdKeyAssign, 3, 3 );
    wWrapMethod( 0, _wxStyledTextCtrl, "cmdkeyclear", wxStyledTextCtrl_CmdKeyClear, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "cmdkeyclearall", wxStyledTextCtrl_CmdKeyClearAll, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setstylebytes", wxStyledTextCtrl_SetStyleBytes, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "stylesetvisible", wxStyledTextCtrl_StyleSetVisible, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getcaretperiod", wxStyledTextCtrl_GetCaretPeriod, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setcaretperiod", wxStyledTextCtrl_SetCaretPeriod, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setwordchars", wxStyledTextCtrl_SetWordChars, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "beginundoaction", wxStyledTextCtrl_BeginUndoAction, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "endundoaction", wxStyledTextCtrl_EndUndoAction, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "indicatorsetstyle", wxStyledTextCtrl_IndicatorSetStyle, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "indicatorgetstyle", wxStyledTextCtrl_IndicatorGetStyle, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "indicatorsetforeground", wxStyledTextCtrl_IndicatorSetForeground, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "indicatorgetforeground", wxStyledTextCtrl_IndicatorGetForeground, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setwhitespaceforeground", wxStyledTextCtrl_SetWhitespaceForeground, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setwhitespacebackground", wxStyledTextCtrl_SetWhitespaceBackground, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setstylebits", wxStyledTextCtrl_SetStyleBits, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getstylebits", wxStyledTextCtrl_GetStyleBits, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setlinestate", wxStyledTextCtrl_SetLineState, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getlinestate", wxStyledTextCtrl_GetLineState, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getmaxlinestate", wxStyledTextCtrl_GetMaxLineState, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getcaretlinevisible", wxStyledTextCtrl_GetCaretLineVisible, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setcaretlinevisible", wxStyledTextCtrl_SetCaretLineVisible, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getcaretlineback", wxStyledTextCtrl_GetCaretLineBack, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setcaretlineback", wxStyledTextCtrl_SetCaretLineBack, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "stylesetchangeable", wxStyledTextCtrl_StyleSetChangeable, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "autocompshow", wxStyledTextCtrl_AutoCompShow, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "autocompcancel", wxStyledTextCtrl_AutoCompCancel, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "autocompactive", wxStyledTextCtrl_AutoCompActive, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "autocompposstart", wxStyledTextCtrl_AutoCompPosStart, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "autocompcomplete", wxStyledTextCtrl_AutoCompComplete, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "autocompstops", wxStyledTextCtrl_AutoCompStops, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "autocompsetseparator", wxStyledTextCtrl_AutoCompSetSeparator, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "autocompgetseparator", wxStyledTextCtrl_AutoCompGetSeparator, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "autocompselect", wxStyledTextCtrl_AutoCompSelect, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "autocompsetcancelatstart", wxStyledTextCtrl_AutoCompSetCancelAtStart, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "autocompgetcancelatstart", wxStyledTextCtrl_AutoCompGetCancelAtStart, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "autocompsetfillups", wxStyledTextCtrl_AutoCompSetFillUps, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "autocompsetchoosesingle", wxStyledTextCtrl_AutoCompSetChooseSingle, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "autocompgetchoosesingle", wxStyledTextCtrl_AutoCompGetChooseSingle, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "autocompsetignorecase", wxStyledTextCtrl_AutoCompSetIgnoreCase, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "autocompgetignorecase", wxStyledTextCtrl_AutoCompGetIgnoreCase, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "userlistshow", wxStyledTextCtrl_UserListShow, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "autocompsetautohide", wxStyledTextCtrl_AutoCompSetAutoHide, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "autocompgetautohide", wxStyledTextCtrl_AutoCompGetAutoHide, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "autocompsetdroprestofword", wxStyledTextCtrl_AutoCompSetDropRestOfWord, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "autocompgetdroprestofword", wxStyledTextCtrl_AutoCompGetDropRestOfWord, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "registerimage", wxStyledTextCtrl_RegisterImage, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "clearregisteredimages", wxStyledTextCtrl_ClearRegisteredImages, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "autocompgettypeseparator", wxStyledTextCtrl_AutoCompGetTypeSeparator, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "autocompsettypeseparator", wxStyledTextCtrl_AutoCompSetTypeSeparator, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setindent", wxStyledTextCtrl_SetIndent, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getindent", wxStyledTextCtrl_GetIndent, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setusetabs", wxStyledTextCtrl_SetUseTabs, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getusetabs", wxStyledTextCtrl_GetUseTabs, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setlineindentation", wxStyledTextCtrl_SetLineIndentation, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getlineindentation", wxStyledTextCtrl_GetLineIndentation, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getlineindentposition", wxStyledTextCtrl_GetLineIndentPosition, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getcolumn", wxStyledTextCtrl_GetColumn, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setusehorizontalscrollbar", wxStyledTextCtrl_SetUseHorizontalScrollBar, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getusehorizontalscrollbar", wxStyledTextCtrl_GetUseHorizontalScrollBar, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setindentationguides", wxStyledTextCtrl_SetIndentationGuides, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getindentationguides", wxStyledTextCtrl_GetIndentationGuides, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "sethighlightguide", wxStyledTextCtrl_SetHighlightGuide, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "gethighlightguide", wxStyledTextCtrl_GetHighlightGuide, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getlineendposition", wxStyledTextCtrl_GetLineEndPosition, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getcodepage", wxStyledTextCtrl_GetCodePage, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getcaretforeground", wxStyledTextCtrl_GetCaretForeground, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getreadonly", wxStyledTextCtrl_GetReadOnly, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setcurrentpos", wxStyledTextCtrl_SetCurrentPos, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setselectionstart", wxStyledTextCtrl_SetSelectionStart, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getselectionstart", wxStyledTextCtrl_GetSelectionStart, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setselectionend", wxStyledTextCtrl_SetSelectionEnd, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getselectionend", wxStyledTextCtrl_GetSelectionEnd, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setprintmagnification", wxStyledTextCtrl_SetPrintMagnification, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getprintmagnification", wxStyledTextCtrl_GetPrintMagnification, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setprintcolourmode", wxStyledTextCtrl_SetPrintColourMode, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getprintcolourmode", wxStyledTextCtrl_GetPrintColourMode, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "findtext", wxStyledTextCtrl_FindText, 4, 4 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getfirstvisibleline", wxStyledTextCtrl_GetFirstVisibleLine, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getline", wxStyledTextCtrl_GetLine, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getlinecount", wxStyledTextCtrl_GetLineCount, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setmarginleft", wxStyledTextCtrl_SetMarginLeft, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getmarginleft", wxStyledTextCtrl_GetMarginLeft, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setmarginright", wxStyledTextCtrl_SetMarginRight, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getmarginright", wxStyledTextCtrl_GetMarginRight, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getmodify", wxStyledTextCtrl_GetModify, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setselection", wxStyledTextCtrl_SetSelection, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getselectedtext", wxStyledTextCtrl_GetSelectedText, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "gettextrange", wxStyledTextCtrl_GetTextRange, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "hideselection", wxStyledTextCtrl_HideSelection, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "linefromposition", wxStyledTextCtrl_LineFromPosition, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "positionfromline", wxStyledTextCtrl_PositionFromLine, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "linescroll", wxStyledTextCtrl_LineScroll, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "ensurecaretvisible", wxStyledTextCtrl_EnsureCaretVisible, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "replaceselection", wxStyledTextCtrl_ReplaceSelection, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setreadonly", wxStyledTextCtrl_SetReadOnly, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "canpaste", wxStyledTextCtrl_CanPaste, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "canundo", wxStyledTextCtrl_CanUndo, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "emptyundobuffer", wxStyledTextCtrl_EmptyUndoBuffer, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "undo", wxStyledTextCtrl_Undo, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "cut", wxStyledTextCtrl_Cut, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "copy", wxStyledTextCtrl_Copy, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "paste", wxStyledTextCtrl_Paste, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "clear", wxStyledTextCtrl_Clear, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "settext", wxStyledTextCtrl_SetText, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "gettext", wxStyledTextCtrl_GetText, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "gettextlength", wxStyledTextCtrl_GetTextLength, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setovertype", wxStyledTextCtrl_SetOvertype, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getovertype", wxStyledTextCtrl_GetOvertype, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setcaretwidth", wxStyledTextCtrl_SetCaretWidth, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getcaretwidth", wxStyledTextCtrl_GetCaretWidth, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "settargetstart", wxStyledTextCtrl_SetTargetStart, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "gettargetstart", wxStyledTextCtrl_GetTargetStart, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "settargetend", wxStyledTextCtrl_SetTargetEnd, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "gettargetend", wxStyledTextCtrl_GetTargetEnd, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "replacetarget", wxStyledTextCtrl_ReplaceTarget, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "replacetargetre", wxStyledTextCtrl_ReplaceTargetRE, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "searchintarget", wxStyledTextCtrl_SearchInTarget, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setsearchflags", wxStyledTextCtrl_SetSearchFlags, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getsearchflags", wxStyledTextCtrl_GetSearchFlags, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "calltipshow", wxStyledTextCtrl_CallTipShow, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "calltipcancel", wxStyledTextCtrl_CallTipCancel, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "calltipactive", wxStyledTextCtrl_CallTipActive, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "calltipposatstart", wxStyledTextCtrl_CallTipPosAtStart, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "calltipsethighlight", wxStyledTextCtrl_CallTipSetHighlight, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "calltipsetbackground", wxStyledTextCtrl_CallTipSetBackground, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "calltipsetforeground", wxStyledTextCtrl_CallTipSetForeground, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "calltipsetforegroundhighlight", wxStyledTextCtrl_CallTipSetForegroundHighlight, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "visiblefromdocline", wxStyledTextCtrl_VisibleFromDocLine, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "doclinefromvisible", wxStyledTextCtrl_DocLineFromVisible, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setfoldlevel", wxStyledTextCtrl_SetFoldLevel, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getfoldlevel", wxStyledTextCtrl_GetFoldLevel, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getlastchild", wxStyledTextCtrl_GetLastChild, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getfoldparent", wxStyledTextCtrl_GetFoldParent, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "showlines", wxStyledTextCtrl_ShowLines, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "hidelines", wxStyledTextCtrl_HideLines, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getlinevisible", wxStyledTextCtrl_GetLineVisible, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setfoldexpanded", wxStyledTextCtrl_SetFoldExpanded, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getfoldexpanded", wxStyledTextCtrl_GetFoldExpanded, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "togglefold", wxStyledTextCtrl_ToggleFold, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "ensurevisible", wxStyledTextCtrl_EnsureVisible, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setfoldflags", wxStyledTextCtrl_SetFoldFlags, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "ensurevisibleenforcepolicy", wxStyledTextCtrl_EnsureVisibleEnforcePolicy, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "settabindents", wxStyledTextCtrl_SetTabIndents, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "gettabindents", wxStyledTextCtrl_GetTabIndents, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setbackspaceunindents", wxStyledTextCtrl_SetBackSpaceUnIndents, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getbackspaceunindents", wxStyledTextCtrl_GetBackSpaceUnIndents, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setmousedwelltime", wxStyledTextCtrl_SetMouseDwellTime, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getmousedwelltime", wxStyledTextCtrl_GetMouseDwellTime, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "wordstartposition", wxStyledTextCtrl_WordStartPosition, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "wordendposition", wxStyledTextCtrl_WordEndPosition, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setwrapmode", wxStyledTextCtrl_SetWrapMode, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getwrapmode", wxStyledTextCtrl_GetWrapMode, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setlayoutcache", wxStyledTextCtrl_SetLayoutCache, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getlayoutcache", wxStyledTextCtrl_GetLayoutCache, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setscrollwidth", wxStyledTextCtrl_SetScrollWidth, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getscrollwidth", wxStyledTextCtrl_GetScrollWidth, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "textwidth", wxStyledTextCtrl_TextWidth, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setendatlastline", wxStyledTextCtrl_SetEndAtLastLine, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getendatlastline", wxStyledTextCtrl_GetEndAtLastLine, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "textheight", wxStyledTextCtrl_TextHeight, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setuseverticalscrollbar", wxStyledTextCtrl_SetUseVerticalScrollBar, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getuseverticalscrollbar", wxStyledTextCtrl_GetUseVerticalScrollBar, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "appendtext", wxStyledTextCtrl_AppendText, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "gettwophasedraw", wxStyledTextCtrl_GetTwoPhaseDraw, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "settwophasedraw", wxStyledTextCtrl_SetTwoPhaseDraw, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "targetfromselection", wxStyledTextCtrl_TargetFromSelection, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "linesjoin", wxStyledTextCtrl_LinesJoin, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "linessplit", wxStyledTextCtrl_LinesSplit, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setfoldmargincolour", wxStyledTextCtrl_SetFoldMarginColour, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setfoldmarginhicolour", wxStyledTextCtrl_SetFoldMarginHiColour, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "lineduplicate", wxStyledTextCtrl_LineDuplicate, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "homedisplay", wxStyledTextCtrl_HomeDisplay, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "homedisplayextend", wxStyledTextCtrl_HomeDisplayExtend, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "lineenddisplay", wxStyledTextCtrl_LineEndDisplay, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "lineenddisplayextend", wxStyledTextCtrl_LineEndDisplayExtend, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "linecopy", wxStyledTextCtrl_LineCopy, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "movecaretinsideview", wxStyledTextCtrl_MoveCaretInsideView, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "linelength", wxStyledTextCtrl_LineLength, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "bracehighlight", wxStyledTextCtrl_BraceHighlight, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "bracebadlight", wxStyledTextCtrl_BraceBadLight, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "bracematch", wxStyledTextCtrl_BraceMatch, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getvieweol", wxStyledTextCtrl_GetViewEOL, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setvieweol", wxStyledTextCtrl_SetViewEOL, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getdocpointer", wxStyledTextCtrl_GetDocPointer, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setdocpointer", wxStyledTextCtrl_SetDocPointer, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setmodeventmask", wxStyledTextCtrl_SetModEventMask, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getedgecolumn", wxStyledTextCtrl_GetEdgeColumn, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setedgecolumn", wxStyledTextCtrl_SetEdgeColumn, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getedgemode", wxStyledTextCtrl_GetEdgeMode, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setedgemode", wxStyledTextCtrl_SetEdgeMode, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getedgecolour", wxStyledTextCtrl_GetEdgeColour, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setedgecolour", wxStyledTextCtrl_SetEdgeColour, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "searchanchor", wxStyledTextCtrl_SearchAnchor, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "searchnext", wxStyledTextCtrl_SearchNext, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "searchprev", wxStyledTextCtrl_SearchPrev, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "linesonscreen", wxStyledTextCtrl_LinesOnScreen, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "usepopup", wxStyledTextCtrl_UsePopUp, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "selectionisrectangle", wxStyledTextCtrl_SelectionIsRectangle, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setzoom", wxStyledTextCtrl_SetZoom, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getzoom", wxStyledTextCtrl_GetZoom, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "createdocument", wxStyledTextCtrl_CreateDocument, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "addrefdocument", wxStyledTextCtrl_AddRefDocument, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "releasedocument", wxStyledTextCtrl_ReleaseDocument, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getmodeventmask", wxStyledTextCtrl_GetModEventMask, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setstcfocus", wxStyledTextCtrl_SetSTCFocus, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getstcfocus", wxStyledTextCtrl_GetSTCFocus, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setstatus", wxStyledTextCtrl_SetStatus, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getstatus", wxStyledTextCtrl_GetStatus, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setmousedowncaptures", wxStyledTextCtrl_SetMouseDownCaptures, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getmousedowncaptures", wxStyledTextCtrl_GetMouseDownCaptures, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setstccursor", wxStyledTextCtrl_SetSTCCursor, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getstccursor", wxStyledTextCtrl_GetSTCCursor, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setcontrolcharsymbol", wxStyledTextCtrl_SetControlCharSymbol, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getcontrolcharsymbol", wxStyledTextCtrl_GetControlCharSymbol, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "wordpartleft", wxStyledTextCtrl_WordPartLeft, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "wordpartleftextend", wxStyledTextCtrl_WordPartLeftExtend, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "wordpartright", wxStyledTextCtrl_WordPartRight, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "wordpartrightextend", wxStyledTextCtrl_WordPartRightExtend, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setvisiblepolicy", wxStyledTextCtrl_SetVisiblePolicy, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "dellineleft", wxStyledTextCtrl_DelLineLeft, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "dellineright", wxStyledTextCtrl_DelLineRight, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setxoffset", wxStyledTextCtrl_SetXOffset, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getxoffset", wxStyledTextCtrl_GetXOffset, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "choosecaretx", wxStyledTextCtrl_ChooseCaretX, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setxcaretpolicy", wxStyledTextCtrl_SetXCaretPolicy, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setycaretpolicy", wxStyledTextCtrl_SetYCaretPolicy, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setprintwrapmode", wxStyledTextCtrl_SetPrintWrapMode, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getprintwrapmode", wxStyledTextCtrl_GetPrintWrapMode, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "sethotspotactiveforeground", wxStyledTextCtrl_SetHotspotActiveForeground, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "sethotspotactivebackground", wxStyledTextCtrl_SetHotspotActiveBackground, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "sethotspotactiveunderline", wxStyledTextCtrl_SetHotspotActiveUnderline, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "positionbefore", wxStyledTextCtrl_PositionBefore, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "positionafter", wxStyledTextCtrl_PositionAfter, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "copyrange", wxStyledTextCtrl_CopyRange, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "copytext", wxStyledTextCtrl_CopyText, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "startrecord", wxStyledTextCtrl_StartRecord, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "stoprecord", wxStyledTextCtrl_StopRecord, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setlexer", wxStyledTextCtrl_SetLexer, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getlexer", wxStyledTextCtrl_GetLexer, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "colourise", wxStyledTextCtrl_Colourise, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setproperty", wxStyledTextCtrl_SetProperty, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setkeywords", wxStyledTextCtrl_SetKeyWords, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setlexerlanguage", wxStyledTextCtrl_SetLexerLanguage, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getcurrentline", wxStyledTextCtrl_GetCurrentLine, 0, 0 );
    wWrapMethod( 0, _wxStyledTextCtrl, "stylesetspec", wxStyledTextCtrl_StyleSetSpec, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "stylesetfont", wxStyledTextCtrl_StyleSetFont, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "stylesetfontattr", wxStyledTextCtrl_StyleSetFontAttr, 6, 6 );
    wWrapMethod( 0, _wxStyledTextCtrl, "cmdkeyexecute", wxStyledTextCtrl_CmdKeyExecute, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "setmargins", wxStyledTextCtrl_SetMargins, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "getselection", wxStyledTextCtrl_GetSelection, 2, 2 );
    wWrapMethod( 0, _wxStyledTextCtrl, "pointfromposition", wxStyledTextCtrl_PointFromPosition, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "scrolltoline", wxStyledTextCtrl_ScrollToLine, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "scrolltocolumn", wxStyledTextCtrl_ScrollToColumn, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "savefile", wxStyledTextCtrl_SaveFile, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "loadfile", wxStyledTextCtrl_LoadFile, 1, 1 );
    wWrapMethod( 0, _wxStyledTextCtrl, "dodroptext", wxStyledTextCtrl_DoDropText, 3, 3 );
    wWrapMethod( 0, _wxStyledTextEvent, "del", wxStyledTextEvent_del, 0, 0 );
    wWrapMethod( 0, _wxStyledTextEvent, "new", wxStyledTextEvent_new, 0, 2 );
    wWrapMethod( 0, _wxStyledTextEvent, "finalize", wxStyledTextEvent_finalize, 0, 0 );
    wWrapMethod( 0, _wxStyledTextEvent, "setposition", wxStyledTextEvent_SetPosition, 1, 1 );
    wWrapMethod( 0, _wxStyledTextEvent, "setkey", wxStyledTextEvent_SetKey, 1, 1 );
    wWrapMethod( 0, _wxStyledTextEvent, "setmodifiers", wxStyledTextEvent_SetModifiers, 1, 1 );
    wWrapMethod( 0, _wxStyledTextEvent, "setmodificationtype", wxStyledTextEvent_SetModificationType, 1, 1 );
    wWrapMethod( 0, _wxStyledTextEvent, "settext", wxStyledTextEvent_SetText, 1, 1 );
    wWrapMethod( 0, _wxStyledTextEvent, "setlength", wxStyledTextEvent_SetLength, 1, 1 );
    wWrapMethod( 0, _wxStyledTextEvent, "setlinesadded", wxStyledTextEvent_SetLinesAdded, 1, 1 );
    wWrapMethod( 0, _wxStyledTextEvent, "setline", wxStyledTextEvent_SetLine, 1, 1 );
    wWrapMethod( 0, _wxStyledTextEvent, "setfoldlevelnow", wxStyledTextEvent_SetFoldLevelNow, 1, 1 );
    wWrapMethod( 0, _wxStyledTextEvent, "setfoldlevelprev", wxStyledTextEvent_SetFoldLevelPrev, 1, 1 );
    wWrapMethod( 0, _wxStyledTextEvent, "setmargin", wxStyledTextEvent_SetMargin, 1, 1 );
    wWrapMethod( 0, _wxStyledTextEvent, "setmessage", wxStyledTextEvent_SetMessage, 1, 1 );
    wWrapMethod( 0, _wxStyledTextEvent, "setwparam", wxStyledTextEvent_SetWParam, 1, 1 );
    wWrapMethod( 0, _wxStyledTextEvent, "setlparam", wxStyledTextEvent_SetLParam, 1, 1 );
    wWrapMethod( 0, _wxStyledTextEvent, "setlisttype", wxStyledTextEvent_SetListType, 1, 1 );
    wWrapMethod( 0, _wxStyledTextEvent, "setx", wxStyledTextEvent_SetX, 1, 1 );
    wWrapMethod( 0, _wxStyledTextEvent, "sety", wxStyledTextEvent_SetY, 1, 1 );
    wWrapMethod( 0, _wxStyledTextEvent, "setdragtext", wxStyledTextEvent_SetDragText, 1, 1 );
    wWrapMethod( 0, _wxStyledTextEvent, "setdragallowmove", wxStyledTextEvent_SetDragAllowMove, 1, 1 );
    wWrapMethod( 0, _wxStyledTextEvent, "getposition", wxStyledTextEvent_GetPosition, 0, 0 );
    wWrapMethod( 0, _wxStyledTextEvent, "getkey", wxStyledTextEvent_GetKey, 0, 0 );
    wWrapMethod( 0, _wxStyledTextEvent, "getmodifiers", wxStyledTextEvent_GetModifiers, 0, 0 );
    wWrapMethod( 0, _wxStyledTextEvent, "getmodificationtype", wxStyledTextEvent_GetModificationType, 0, 0 );
    wWrapMethod( 0, _wxStyledTextEvent, "gettext", wxStyledTextEvent_GetText, 0, 0 );
    wWrapMethod( 0, _wxStyledTextEvent, "getlength", wxStyledTextEvent_GetLength, 0, 0 );
    wWrapMethod( 0, _wxStyledTextEvent, "getlinesadded", wxStyledTextEvent_GetLinesAdded, 0, 0 );
    wWrapMethod( 0, _wxStyledTextEvent, "getline", wxStyledTextEvent_GetLine, 0, 0 );
    wWrapMethod( 0, _wxStyledTextEvent, "getfoldlevelnow", wxStyledTextEvent_GetFoldLevelNow, 0, 0 );
    wWrapMethod( 0, _wxStyledTextEvent, "getfoldlevelprev", wxStyledTextEvent_GetFoldLevelPrev, 0, 0 );
    wWrapMethod( 0, _wxStyledTextEvent, "getmargin", wxStyledTextEvent_GetMargin, 0, 0 );
    wWrapMethod( 0, _wxStyledTextEvent, "getmessage", wxStyledTextEvent_GetMessage, 0, 0 );
    wWrapMethod( 0, _wxStyledTextEvent, "getwparam", wxStyledTextEvent_GetWParam, 0, 0 );
    wWrapMethod( 0, _wxStyledTextEvent, "getlparam", wxStyledTextEvent_GetLParam, 0, 0 );
    wWrapMethod( 0, _wxStyledTextEvent, "getlisttype", wxStyledTextEvent_GetListType, 0, 0 );
    wWrapMethod( 0, _wxStyledTextEvent, "getx", wxStyledTextEvent_GetX, 0, 0 );
    wWrapMethod( 0, _wxStyledTextEvent, "gety", wxStyledTextEvent_GetY, 0, 0 );
    wWrapMethod( 0, _wxStyledTextEvent, "getdragtext", wxStyledTextEvent_GetDragText, 0, 0 );
    wWrapMethod( 0, _wxStyledTextEvent, "getdragallowmove", wxStyledTextEvent_GetDragAllowMove, 0, 0 );
    wWrapMethod( 0, _wxStyledTextEvent, "getshift", wxStyledTextEvent_GetShift, 0, 0 );
    wWrapMethod( 0, _wxStyledTextEvent, "getcontrol", wxStyledTextEvent_GetControl, 0, 0 );
    wWrapMethod( 0, _wxStyledTextEvent, "getalt", wxStyledTextEvent_GetAlt, 0, 0 );
    wWrapMethod( 0, _wxStyledTextEvent, "clone", wxStyledTextEvent_Clone, 0, 0 );
    wWrapMethod( 0, _wxDir, "del", wxDir_del, 0, 0 );
    wWrapMethod( 0, _wxDir, "new", wxDir_new, 0, 0 );
    wWrapMethod( 0, _wxDir, "finalize", wxDir_finalize, 0, 0 );
    wWrapMethod( 0, _wxDir, "exists", wxDir_Exists, 1, 1 );
    wWrapMethod( 0, _wxDir, "open", wxDir_Open, 1, 1 );
    wWrapMethod( 0, _wxDir, "isopened", wxDir_IsOpened, 0, 0 );
    wWrapMethod( 0, _wxDir, "getfirst", wxDir_GetFirst, 0, 2 );
    wWrapMethod( 0, _wxDir, "getnext", wxDir_GetNext, 0, 0 );
    wWrapMethod( 0, _wxDir, "hasfiles", wxDir_HasFiles, 0, 1 );
    wWrapMethod( 0, _wxDir, "hassubdirs", wxDir_HasSubDirs, 0, 1 );
    wWrapMethod( 0, _wxStreamBase, "del", wxStreamBase_del, 0, 0 );
    wWrapMethod( 0, _wxStreamBase, "new", wxStreamBase_new, 0, 0 );
    wWrapMethod( 0, _wxStreamBase, "finalize", wxStreamBase_finalize, 0, 0 );
    wWrapMethod( 0, _wxStreamBase, "isok", wxStreamBase_IsOk, 0, 0 );
    wWrapMethod( 0, _wxStreamBase, "lasterror", wxStreamBase_LastError, 0, 0 );
    wWrapMethod( 0, _wxStreamBase, "getsize", wxStreamBase_GetSize, 0, 0 );
    wWrapMethod( 0, _wxInputStream, "del", wxInputStream_del, 0, 0 );
    wWrapMethod( 0, _wxInputStream, "getc", wxInputStream_GetC, 0, 0 );
    wWrapMethod( 0, _wxInputStream, "eof", wxInputStream_Eof, 0, 0 );
    wWrapMethod( 0, _wxInputStream, "lastread", wxInputStream_LastRead, 0, 0 );
    wWrapMethod( 0, _wxInputStream, "peek", wxInputStream_Peek, 0, 0 );
    wWrapMethod( 0, _wxInputStream, "read", wxInputStream_Read, 1, 0 );
    wWrapMethod( 0, _wxInputStream, "seeki", wxInputStream_SeekI, 1, 2 );
    wWrapMethod( 0, _wxInputStream, "telli", wxInputStream_TellI, 0, 0 );
    wWrapMethod( 0, _wxOutputStream, "del", wxOutputStream_del, 0, 0 );
    wWrapMethod( 0, _wxOutputStream, "new", wxOutputStream_new, 0, 0 );
    wWrapMethod( 0, _wxOutputStream, "finalize", wxOutputStream_finalize, 0, 0 );
    wWrapMethod( 0, _wxOutputStream, "lastwrite", wxOutputStream_LastWrite, 0, 0 );
    wWrapMethod( 0, _wxOutputStream, "putc", wxOutputStream_PutC, 1, 1 );
    wWrapMethod( 0, _wxOutputStream, "seeko", wxOutputStream_SeekO, 2, 2 );
    wWrapMethod( 0, _wxOutputStream, "tello", wxOutputStream_TellO, 0, 0 );
    wWrapMethod( 0, _wxOutputStream, "write", wxOutputStream_Write, 1, 0 );
    wWrapMethod( 0, _wxOutputStream, "writefromstream", wxOutputStream_WriteFromStream, 1, 0 );
    wWrapMethod( 0, _wxSocketBase, "del", wxSocketBase_del, 0, 0 );
    wWrapMethod( 0, _wxSocketBase, "new", wxSocketBase_new, 0, 0 );
    wWrapMethod( 0, _wxSocketBase, "finalize", wxSocketBase_finalize, 0, 0 );
    wWrapMethod( 0, _wxSocketBase, "close", wxSocketBase_Close, 0, 0 );
    wWrapMethod( 0, _wxSocketBase, "destroy", wxSocketBase_Destroy, 0, 0 );
    wWrapMethod( 0, _wxSocketBase, "error", wxSocketBase_Error, 0, 0 );
    wWrapMethod( 0, _wxSocketBase, "getclientdata", wxSocketBase_GetClientData, 0, 0 );
    wWrapMethod( 0, _wxSocketBase, "getlocal", wxSocketBase_GetLocal, 0, 0 );
    wWrapMethod( 0, _wxSocketBase, "getflags", wxSocketBase_GetFlags, 0, 0 );
    wWrapMethod( 0, _wxSocketBase, "getpeer", wxSocketBase_GetPeer, 0, 0 );
    wWrapMethod( 0, _wxSocketBase, "interruptwait", wxSocketBase_InterruptWait, 0, 0 );
    wWrapMethod( 0, _wxSocketBase, "isconnected", wxSocketBase_IsConnected, 0, 0 );
    wWrapMethod( 0, _wxSocketBase, "isdata", wxSocketBase_IsData, 0, 0 );
    wWrapMethod( 0, _wxSocketBase, "isdisconnected", wxSocketBase_IsDisconnected, 0, 0 );
    wWrapMethod( 0, _wxSocketBase, "lastcount", wxSocketBase_LastCount, 0, 0 );
    wWrapMethod( 0, _wxSocketBase, "lasterror", wxSocketBase_LastError, 0, 0 );
    wWrapMethod( 0, _wxSocketBase, "notify", wxSocketBase_Notify, 1, 1 );
    wWrapMethod( 0, _wxSocketBase, "ok", wxSocketBase_Ok, 0, 0 );
    wWrapMethod( 0, _wxSocketBase, "restorestate", wxSocketBase_RestoreState, 0, 0 );
    wWrapMethod( 0, _wxSocketBase, "savestate", wxSocketBase_SaveState, 0, 0 );
    wWrapMethod( 0, _wxSocketBase, "setclientdata", wxSocketBase_SetClientData, 1, 1 );
    wWrapMethod( 0, _wxSocketBase, "seteventhandler", wxSocketBase_SetEventHandler, 1, 2 );
    wWrapMethod( 0, _wxSocketBase, "setflags", wxSocketBase_SetFlags, 1, 1 );
    wWrapMethod( 0, _wxSocketBase, "setnotify", wxSocketBase_SetNotify, 1, 1 );
    wWrapMethod( 0, _wxSocketBase, "settimeout", wxSocketBase_SetTimeout, 1, 1 );
    wWrapMethod( 0, _wxSocketBase, "peek", wxSocketBase_Peek, 1, 0 );
    wWrapMethod( 0, _wxSocketBase, "read", wxSocketBase_Read, 1, 0 );
    wWrapMethod( 0, _wxSocketBase, "readmsg", wxSocketBase_ReadMsg, 1, 0 );
    wWrapMethod( 0, _wxSocketBase, "wait", wxSocketBase_Wait, 0, 2 );
    wWrapMethod( 0, _wxSocketBase, "waitforlost", wxSocketBase_WaitForLost, 0, 2 );
    wWrapMethod( 0, _wxSocketBase, "waitforread", wxSocketBase_WaitForRead, 0, 2 );
    wWrapMethod( 0, _wxSocketBase, "waitforwrite", wxSocketBase_WaitForWrite, 0, 2 );
    wWrapMethod( 0, _wxSocketBase, "write", wxSocketBase_Write, 1, 0 );
    wWrapMethod( 0, _wxSocketBase, "writemsg", wxSocketBase_WriteMsg, 1, 0 );
    wWrapMethod( 0, _wxSocketClient, "del", wxSocketClient_del, 0, 0 );
    wWrapMethod( 0, _wxSocketClient, "new", wxSocketClient_new, 0, 1 );
    wWrapMethod( 0, _wxSocketClient, "finalize", wxSocketClient_finalize, 0, 0 );
    wWrapMethod( 0, _wxSocketClient, "connect", wxSocketClient_Connect, 1, 2 );
    wWrapMethod( 0, _wxSocketClient, "waitonconnect", wxSocketClient_WaitOnConnect, 0, 2 );
    wWrapMethod( 0, _wxProtocol, "del", wxProtocol_del, 0, 0 );
    wWrapMethod( 0, _wxProtocol, "reconnect", wxProtocol_Reconnect, 0, 0 );
    wWrapMethod( 0, _wxProtocol, "getinputstream", wxProtocol_GetInputStream, 1, 1 );
    wWrapMethod( 0, _wxProtocol, "abort", wxProtocol_Abort, 0, 0 );
    wWrapMethod( 0, _wxProtocol, "getcontenttype", wxProtocol_GetContentType, 0, 0 );
    wWrapMethod( 0, _wxProtocol, "setuser", wxProtocol_SetUser, 1, 1 );
    wWrapMethod( 0, _wxProtocol, "setpassword", wxProtocol_SetPassword, 1, 1 );
    wWrapMethod( 0, _wxFTP, "del", wxFTP_del, 0, 0 );
    wWrapMethod( 0, _wxFTP, "new", wxFTP_new, 0, 0 );
    wWrapMethod( 0, _wxFTP, "finalize", wxFTP_finalize, 0, 0 );
    wWrapMethod( 0, _wxFTP, "abort", wxFTP_Abort, 0, 0 );
    wWrapMethod( 0, _wxFTP, "checkcommand", wxFTP_CheckCommand, 2, 2 );
    wWrapMethod( 0, _wxFTP, "connect", wxFTP_Connect, 1, 1 );
    wWrapMethod( 0, _wxFTP, "sendcommand", wxFTP_SendCommand, 1, 1 );
    wWrapMethod( 0, _wxFTP, "getlastresult", wxFTP_GetLastResult, 0, 0 );
    wWrapMethod( 0, _wxFTP, "chdir", wxFTP_ChDir, 1, 1 );
    wWrapMethod( 0, _wxFTP, "mkdir", wxFTP_MkDir, 1, 1 );
    wWrapMethod( 0, _wxFTP, "rmdir", wxFTP_RmDir, 1, 1 );
    wWrapMethod( 0, _wxFTP, "pwd", wxFTP_Pwd, 0, 0 );
    wWrapMethod( 0, _wxFTP, "rename", wxFTP_Rename, 2, 2 );
    wWrapMethod( 0, _wxFTP, "rmfile", wxFTP_RmFile, 1, 1 );
    wWrapMethod( 0, _wxFTP, "setascii", wxFTP_SetAscii, 0, 0 );
    wWrapMethod( 0, _wxFTP, "setbinary", wxFTP_SetBinary, 0, 0 );
    wWrapMethod( 0, _wxFTP, "settransfermode", wxFTP_SetTransferMode, 1, 1 );
    wWrapMethod( 0, _wxFTP, "setuser", wxFTP_SetUser, 1, 1 );
    wWrapMethod( 0, _wxFTP, "setpassword", wxFTP_SetPassword, 1, 1 );
    wWrapMethod( 0, _wxFTP, "fileexists", wxFTP_FileExists, 1, 1 );
    wWrapMethod( 0, _wxFTP, "getfilesize", wxFTP_GetFileSize, 1, 1 );
    wWrapMethod( 0, _wxFTP, "getoutputstream", wxFTP_GetOutputStream, 1, 1 );
    wWrapMethod( 0, _wxFTP, "getinputstream", wxFTP_GetInputStream, 1, 1 );
    wWrapMethod( 0, _wxHTTP, "del", wxHTTP_del, 0, 0 );
    wWrapMethod( 0, _wxHTTP, "getinputstream", wxHTTP_GetInputStream, 1, 1 );
    wWrapMethod( 0, _wxHTTP, "setheader", wxHTTP_SetHeader, 2, 2 );
    wWrapMethod( 0, _wxHTTP, "getheader", wxHTTP_GetHeader, 1, 1 );
    wWrapMethod( 0, _wxURL, "del", wxURL_del, 0, 0 );
    wWrapMethod( 0, _wxURL, "new", wxURL_new, 1, 1 );
    wWrapMethod( 0, _wxURL, "finalize", wxURL_finalize, 0, 0 );
    wWrapMethod( 0, _wxURL, "getprotocolname", wxURL_GetProtocolName, 0, 0 );
    wWrapMethod( 0, _wxURL, "getprotocol", wxURL_GetProtocol, 0, 0 );
    wWrapMethod( 0, _wxURL, "getpath", wxURL_GetPath, 0, 0 );
    wWrapMethod( 0, _wxURL, "geterror", wxURL_GetError, 0, 0 );
    wWrapMethod( 0, _wxURL, "getinputstream", wxURL_GetInputStream, 0, 0 );
    wWrapMethod( 0, _wxURL, "setdefaultproxy", wxURL_SetDefaultProxy, 1, 1 );
    wWrapMethod( 0, _wxURL, "setproxy", wxURL_SetProxy, 1, 1 );
    wWrapMethod( 0, _wxURL, "converttovaliduri", wxURL_ConvertToValidURI, 1, 1 );

	wLiteralAddStr( wxT("wxALL_FILES_PATTERN"), wxALL_FILES_PATTERN );
	wLiteralAddStr( wxT("wxALL_FILES"), wxALL_FILES );
	wLiteralAddNum( "wxBIG_ENDIAN", wxBIG_ENDIAN );
	wLiteralAddNum( "wxLITTLE_ENDIAN", wxLITTLE_ENDIAN );
	wLiteralAddNum( "wxPDP_ENDIAN", wxPDP_ENDIAN );
	wLiteralAddNum( "wxBYTE_ORDER", wxBYTE_ORDER );
	wLiteralAddNum( "wxED_CLIENT_MARGIN", wxED_CLIENT_MARGIN );
	wLiteralAddNum( "wxED_BUTTONS_BOTTOM", wxED_BUTTONS_BOTTOM );
	wLiteralAddNum( "wxED_BUTTONS_RIGHT", wxED_BUTTONS_RIGHT );
	wLiteralAddNum( "wxED_STATIC_LINE", wxED_STATIC_LINE );
	wLiteralAddNum( "wxEXT_DIALOG_STYLE", wxEXT_DIALOG_STYLE );
	wLiteralAddNum( "wxTB_HORIZONTAL", wxTB_HORIZONTAL );
	wLiteralAddNum( "wxTB_VERTICAL", wxTB_VERTICAL );
	wLiteralAddNum( "wxTB_3DBUTTONS", wxTB_3DBUTTONS );
	wLiteralAddNum( "wxTB_FLAT", wxTB_FLAT );
	wLiteralAddNum( "wxTB_DOCKABLE", wxTB_DOCKABLE );
	wLiteralAddNum( "wxMB_DOCKABLE", wxMB_DOCKABLE );
	wLiteralAddNum( "wxMENU_TEAROFF", wxMENU_TEAROFF );
	wLiteralAddNum( "wxCOLOURED", wxCOLOURED );
	wLiteralAddNum( "wxFIXED_LENGTH", wxFIXED_LENGTH );
	wLiteralAddNum( "wxLB_SORT", wxLB_SORT );
	wLiteralAddNum( "wxLB_SINGLE", wxLB_SINGLE );
	wLiteralAddNum( "wxLB_MULTIPLE", wxLB_MULTIPLE );
	wLiteralAddNum( "wxLB_EXTENDED", wxLB_EXTENDED );
	wLiteralAddNum( "wxLB_OWNERDRAW", wxLB_OWNERDRAW );
	wLiteralAddNum( "wxLB_NEEDED_SB", wxLB_NEEDED_SB );
	wLiteralAddNum( "wxLB_ALWAYS_SB", wxLB_ALWAYS_SB );
	wLiteralAddNum( "wxLB_HSCROLL", wxLB_HSCROLL );
	wLiteralAddNum( "wxPROCESS_ENTER", wxPROCESS_ENTER );
	wLiteralAddNum( "wxPASSWORD", wxPASSWORD );
	wLiteralAddNum( "wxCB_SIMPLE", wxCB_SIMPLE );
	wLiteralAddNum( "wxCB_SORT", wxCB_SORT );
	wLiteralAddNum( "wxCB_READONLY", wxCB_READONLY );
	wLiteralAddNum( "wxCB_DROPDOWN", wxCB_DROPDOWN );
	wLiteralAddNum( "wxRA_SPECIFY_COLS", wxRA_SPECIFY_COLS );
	wLiteralAddNum( "wxRA_SPECIFY_ROWS", wxRA_SPECIFY_ROWS );
	wLiteralAddNum( "wxRA_HORIZONTAL", wxRA_HORIZONTAL );
	wLiteralAddNum( "wxRA_VERTICAL", wxRA_VERTICAL );
	wLiteralAddNum( "wxRB_GROUP", wxRB_GROUP );
	wLiteralAddNum( "wxGA_HORIZONTAL", wxGA_HORIZONTAL );
	wLiteralAddNum( "wxGA_VERTICAL", wxGA_VERTICAL );
	wLiteralAddNum( "wxGA_PROGRESSBAR", wxGA_PROGRESSBAR );
	wLiteralAddNum( "wxGA_SMOOTH", wxGA_SMOOTH );
	wLiteralAddNum( "wxSL_HORIZONTAL", wxSL_HORIZONTAL );
	wLiteralAddNum( "wxSL_VERTICAL", wxSL_VERTICAL );
	wLiteralAddNum( "wxSL_NOTIFY_DRAG", wxSL_NOTIFY_DRAG );
	wLiteralAddNum( "wxSL_AUTOTICKS", wxSL_AUTOTICKS );
	wLiteralAddNum( "wxSL_LABELS", wxSL_LABELS );
	wLiteralAddNum( "wxSL_LEFT", wxSL_LEFT );
	wLiteralAddNum( "wxSL_TOP", wxSL_TOP );
	wLiteralAddNum( "wxSL_RIGHT", wxSL_RIGHT );
	wLiteralAddNum( "wxSL_BOTTOM", wxSL_BOTTOM );
	wLiteralAddNum( "wxSL_BOTH", wxSL_BOTH );
	wLiteralAddNum( "wxSL_SELRANGE", wxSL_SELRANGE );
	wLiteralAddNum( "wxSB_HORIZONTAL", wxSB_HORIZONTAL );
	wLiteralAddNum( "wxSB_VERTICAL", wxSB_VERTICAL );
	wLiteralAddNum( "wxBU_AUTODRAW", wxBU_AUTODRAW );
	wLiteralAddNum( "wxBU_NOAUTODRAW", wxBU_NOAUTODRAW );
	wLiteralAddNum( "wxBU_LEFT", wxBU_LEFT );
	wLiteralAddNum( "wxBU_TOP", wxBU_TOP );
	wLiteralAddNum( "wxBU_RIGHT", wxBU_RIGHT );
	wLiteralAddNum( "wxBU_BOTTOM", wxBU_BOTTOM );
	wLiteralAddNum( "wxTR_HAS_BUTTONS", wxTR_HAS_BUTTONS );
	wLiteralAddNum( "wxTR_EDIT_LABELS", wxTR_EDIT_LABELS );
	wLiteralAddNum( "wxTR_LINES_AT_ROOT", wxTR_LINES_AT_ROOT );
	wLiteralAddNum( "wxTR_SINGLE", wxTR_SINGLE );
	wLiteralAddNum( "wxTR_MULTIPLE", wxTR_MULTIPLE );
	wLiteralAddNum( "wxTR_EXTENDED", wxTR_EXTENDED );
	wLiteralAddNum( "wxTR_HAS_VARIABLE_ROW_HEIGHT", wxTR_HAS_VARIABLE_ROW_HEIGHT );
	wLiteralAddNum( "wxTR_NO_LINES", wxTR_NO_LINES );
	wLiteralAddNum( "wxTR_MAC_BUTTONS", wxTR_MAC_BUTTONS );
	wLiteralAddNum( "wxTR_ROW_LINES", wxTR_ROW_LINES );
	wLiteralAddNum( "wxLC_VRULES", wxLC_VRULES );
	wLiteralAddNum( "wxLC_HRULES", wxLC_HRULES );
	wLiteralAddNum( "wxLC_ICON", wxLC_ICON );
	wLiteralAddNum( "wxLC_SMALL_ICON", wxLC_SMALL_ICON );
	wLiteralAddNum( "wxLC_LIST", wxLC_LIST );
	wLiteralAddNum( "wxLC_REPORT", wxLC_REPORT );
	wLiteralAddNum( "wxLC_ALIGN_TOP", wxLC_ALIGN_TOP );
	wLiteralAddNum( "wxLC_ALIGN_LEFT", wxLC_ALIGN_LEFT );
	wLiteralAddNum( "wxLC_AUTOARRANGE", wxLC_AUTOARRANGE );
	wLiteralAddNum( "wxLC_USER_TEXT", wxLC_USER_TEXT );
	wLiteralAddNum( "wxLC_EDIT_LABELS", wxLC_EDIT_LABELS );
	wLiteralAddNum( "wxLC_NO_HEADER", wxLC_NO_HEADER );
	wLiteralAddNum( "wxLC_NO_SORT_HEADER", wxLC_NO_SORT_HEADER );
	wLiteralAddNum( "wxLC_SINGLE_SEL", wxLC_SINGLE_SEL );
	wLiteralAddNum( "wxLC_SORT_ASCENDING", wxLC_SORT_ASCENDING );
	wLiteralAddNum( "wxLC_SORT_DESCENDING", wxLC_SORT_DESCENDING );
	wLiteralAddNum( "wxLC_MASK_TYPE", wxLC_MASK_TYPE );
	wLiteralAddNum( "wxLC_MASK_ALIGN", wxLC_MASK_ALIGN );
	wLiteralAddNum( "wxLC_MASK_SORT", wxLC_MASK_SORT );
	wLiteralAddNum( "wxSP_HORIZONTAL", wxSP_HORIZONTAL );
	wLiteralAddNum( "wxSP_VERTICAL", wxSP_VERTICAL );
	wLiteralAddNum( "wxSP_ARROW_KEYS", wxSP_ARROW_KEYS );
	wLiteralAddNum( "wxSP_WRAP", wxSP_WRAP );
	wLiteralAddNum( "wxSP_NOBORDER", wxSP_NOBORDER );
	wLiteralAddNum( "wxSP_NOSASH", wxSP_NOSASH );
	wLiteralAddNum( "wxSP_BORDER", wxSP_BORDER );
	wLiteralAddNum( "wxSP_PERMIT_UNSPLIT", wxSP_PERMIT_UNSPLIT );
	wLiteralAddNum( "wxSP_LIVE_UPDATE", wxSP_LIVE_UPDATE );
	wLiteralAddNum( "wxSP_3DSASH", wxSP_3DSASH );
	wLiteralAddNum( "wxSP_3DBORDER", wxSP_3DBORDER );
	wLiteralAddNum( "wxSP_FULLSASH", wxSP_FULLSASH );
	wLiteralAddNum( "wxSP_3D", wxSP_3D );
	wLiteralAddNum( "wxTC_MULTILINE", wxTC_MULTILINE );
	wLiteralAddNum( "wxTC_RIGHTJUSTIFY", wxTC_RIGHTJUSTIFY );
	wLiteralAddNum( "wxTC_FIXEDWIDTH", wxTC_FIXEDWIDTH );
	wLiteralAddNum( "wxTC_OWNERDRAW", wxTC_OWNERDRAW );
	wLiteralAddNum( "wxNB_FIXEDWIDTH", wxNB_FIXEDWIDTH );
	wLiteralAddNum( "wxNB_LEFT", wxNB_LEFT );
	wLiteralAddNum( "wxNB_RIGHT", wxNB_RIGHT );
	wLiteralAddNum( "wxNB_BOTTOM", wxNB_BOTTOM );
	wLiteralAddNum( "wxST_SIZEGRIP", wxST_SIZEGRIP );
	wLiteralAddNum( "wxST_NO_AUTORESIZE", wxST_NO_AUTORESIZE );
	wLiteralAddNum( "wxLI_HORIZONTAL", wxLI_HORIZONTAL );
	wLiteralAddNum( "wxLI_VERTICAL", wxLI_VERTICAL );
	wLiteralAddNum( "wxPD_CAN_ABORT", wxPD_CAN_ABORT );
	wLiteralAddNum( "wxPD_APP_MODAL", wxPD_APP_MODAL );
	wLiteralAddNum( "wxPD_AUTO_HIDE", wxPD_AUTO_HIDE );
	wLiteralAddNum( "wxPD_ELAPSED_TIME", wxPD_ELAPSED_TIME );
	wLiteralAddNum( "wxPD_ESTIMATED_TIME", wxPD_ESTIMATED_TIME );
	wLiteralAddNum( "wxPD_REMAINING_TIME", wxPD_REMAINING_TIME );
	wLiteralAddNum( "wxHW_SCROLLBAR_NEVER", wxHW_SCROLLBAR_NEVER );
	wLiteralAddNum( "wxHW_SCROLLBAR_AUTO", wxHW_SCROLLBAR_AUTO );
	wLiteralAddNum( "wxCAL_SUNDAY_FIRST", wxCAL_SUNDAY_FIRST );
	wLiteralAddNum( "wxCAL_MONDAY_FIRST", wxCAL_MONDAY_FIRST );
	wLiteralAddNum( "wxCAL_SHOW_HOLIDAYS", wxCAL_SHOW_HOLIDAYS );
	wLiteralAddNum( "wxCAL_NO_YEAR_CHANGE", wxCAL_NO_YEAR_CHANGE );
	wLiteralAddNum( "wxCAL_NO_MONTH_CHANGE", wxCAL_NO_MONTH_CHANGE );
	wLiteralAddNum( "wxFORWARD", wxFORWARD );
	wLiteralAddNum( "wxBACKWARD", wxBACKWARD );
	wLiteralAddNum( "wxRESET", wxRESET );
	wLiteralAddNum( "wxHELP", wxHELP );
	wLiteralAddNum( "wxMORE", wxMORE );
	wLiteralAddNum( "wxSETUP", wxSETUP );
	wLiteralAddNum( "wxID_SEPARATOR", wxID_SEPARATOR );
	wLiteralAddNum( "wxID_LOWEST", wxID_LOWEST );
	wLiteralAddNum( "wxID_OPEN", wxID_OPEN );
	wLiteralAddNum( "wxID_CLOSE", wxID_CLOSE );
	wLiteralAddNum( "wxID_NEW", wxID_NEW );
	wLiteralAddNum( "wxID_SAVE", wxID_SAVE );
	wLiteralAddNum( "wxID_SAVEAS", wxID_SAVEAS );
	wLiteralAddNum( "wxID_REVERT", wxID_REVERT );
	wLiteralAddNum( "wxID_EXIT", wxID_EXIT );
	wLiteralAddNum( "wxID_UNDO", wxID_UNDO );
	wLiteralAddNum( "wxID_REDO", wxID_REDO );
	wLiteralAddNum( "wxID_HELP", wxID_HELP );
	wLiteralAddNum( "wxID_PRINT", wxID_PRINT );
	wLiteralAddNum( "wxID_PRINT_SETUP", wxID_PRINT_SETUP );
	wLiteralAddNum( "wxID_PREVIEW", wxID_PREVIEW );
	wLiteralAddNum( "wxID_ABOUT", wxID_ABOUT );
	wLiteralAddNum( "wxID_HELP_CONTENTS", wxID_HELP_CONTENTS );
	wLiteralAddNum( "wxID_HELP_COMMANDS", wxID_HELP_COMMANDS );
	wLiteralAddNum( "wxID_HELP_PROCEDURES", wxID_HELP_PROCEDURES );
	wLiteralAddNum( "wxID_HELP_CONTEXT", wxID_HELP_CONTEXT );
	wLiteralAddNum( "wxID_CUT", wxID_CUT );
	wLiteralAddNum( "wxID_COPY", wxID_COPY );
	wLiteralAddNum( "wxID_PASTE", wxID_PASTE );
	wLiteralAddNum( "wxID_CLEAR", wxID_CLEAR );
	wLiteralAddNum( "wxID_FIND", wxID_FIND );
	wLiteralAddNum( "wxID_DUPLICATE", wxID_DUPLICATE );
	wLiteralAddNum( "wxID_SELECTALL", wxID_SELECTALL );
	wLiteralAddNum( "wxID_FILE1", wxID_FILE1 );
	wLiteralAddNum( "wxID_FILE2", wxID_FILE2 );
	wLiteralAddNum( "wxID_FILE3", wxID_FILE3 );
	wLiteralAddNum( "wxID_FILE4", wxID_FILE4 );
	wLiteralAddNum( "wxID_FILE5", wxID_FILE5 );
	wLiteralAddNum( "wxID_FILE6", wxID_FILE6 );
	wLiteralAddNum( "wxID_FILE7", wxID_FILE7 );
	wLiteralAddNum( "wxID_FILE8", wxID_FILE8 );
	wLiteralAddNum( "wxID_FILE9", wxID_FILE9 );
	wLiteralAddNum( "wxID_OK", wxID_OK );
	wLiteralAddNum( "wxID_CANCEL", wxID_CANCEL );
	wLiteralAddNum( "wxID_APPLY", wxID_APPLY );
	wLiteralAddNum( "wxID_YES", wxID_YES );
	wLiteralAddNum( "wxID_NO", wxID_NO );
	wLiteralAddNum( "wxID_STATIC", wxID_STATIC );
	wLiteralAddNum( "wxID_FORWARD", wxID_FORWARD );
	wLiteralAddNum( "wxID_BACKWARD", wxID_BACKWARD );
	wLiteralAddNum( "wxID_DEFAULT", wxID_DEFAULT );
	wLiteralAddNum( "wxID_MORE", wxID_MORE );
	wLiteralAddNum( "wxID_SETUP", wxID_SETUP );
	wLiteralAddNum( "wxID_RESET", wxID_RESET );
	wLiteralAddNum( "wxID_CONTEXT_HELP", wxID_CONTEXT_HELP );
	wLiteralAddNum( "wxID_YESTOALL", wxID_YESTOALL );
	wLiteralAddNum( "wxID_NOTOALL", wxID_NOTOALL );
	wLiteralAddNum( "wxID_ABORT", wxID_ABORT );
	wLiteralAddNum( "wxID_RETRY", wxID_RETRY );
	wLiteralAddNum( "wxID_IGNORE", wxID_IGNORE );
	wLiteralAddNum( "wxID_FILEDLGG", wxID_FILEDLGG );
	wLiteralAddNum( "wxID_HIGHEST", wxID_HIGHEST );
	wLiteralAddNum( "wxSIZE_AUTO_WIDTH", wxSIZE_AUTO_WIDTH );
	wLiteralAddNum( "wxSIZE_AUTO_HEIGHT", wxSIZE_AUTO_HEIGHT );
	wLiteralAddNum( "wxSIZE_AUTO", wxSIZE_AUTO );
	wLiteralAddNum( "wxSIZE_USE_EXISTING", wxSIZE_USE_EXISTING );
	wLiteralAddNum( "wxSIZE_ALLOW_MINUS_ONE", wxSIZE_ALLOW_MINUS_ONE );
	wLiteralAddNum( "wxSIZE_NO_ADJUSTMENTS", wxSIZE_NO_ADJUSTMENTS );
	wLiteralAddNum( "wxFLOOD_SURFACE", wxFLOOD_SURFACE );
	wLiteralAddNum( "wxFLOOD_BORDER", wxFLOOD_BORDER );
	wLiteralAddNum( "wxODDEVEN_RULE", wxODDEVEN_RULE );
	wLiteralAddNum( "wxWINDING_RULE", wxWINDING_RULE );
	wLiteralAddNum( "wxTOOL_TOP", wxTOOL_TOP );
	wLiteralAddNum( "wxTOOL_BOTTOM", wxTOOL_BOTTOM );
	wLiteralAddNum( "wxTOOL_LEFT", wxTOOL_LEFT );
	wLiteralAddNum( "wxTOOL_RIGHT", wxTOOL_RIGHT );
	wLiteralAddNum( "wxMM_TEXT", wxMM_TEXT );
	wLiteralAddNum( "wxMM_LOMETRIC", wxMM_LOMETRIC );
	wLiteralAddNum( "wxMM_HIMETRIC", wxMM_HIMETRIC );
	wLiteralAddNum( "wxMM_LOENGLISH", wxMM_LOENGLISH );
	wLiteralAddNum( "wxMM_HIENGLISH", wxMM_HIENGLISH );
	wLiteralAddNum( "wxMM_TWIPS", wxMM_TWIPS );
	wLiteralAddNum( "wxMM_ISOTROPIC", wxMM_ISOTROPIC );
	wLiteralAddNum( "wxMM_ANISOTROPIC", wxMM_ANISOTROPIC );
	wLiteralAddNum( "wxMM_POINTS", wxMM_POINTS );
	wLiteralAddNum( "wxMM_METRIC", wxMM_METRIC );
	wLiteralAddNum( "wxPORTRAIT", wxPORTRAIT );
	wLiteralAddNum( "wxLANDSCAPE", wxLANDSCAPE );
	wLiteralAddNum( "wxPRINT_QUALITY_HIGH", wxPRINT_QUALITY_HIGH );
	wLiteralAddNum( "wxPRINT_QUALITY_MEDIUM", wxPRINT_QUALITY_MEDIUM );
	wLiteralAddNum( "wxPRINT_QUALITY_LOW", wxPRINT_QUALITY_LOW );
	wLiteralAddNum( "wxPRINT_QUALITY_DRAFT", wxPRINT_QUALITY_DRAFT );
	wLiteralAddNum( "wxEVT_COMMAND_BUTTON_CLICKED", wxEVT_COMMAND_BUTTON_CLICKED );
	wLiteralAddNum( "wxEVT_COMMAND_CHECKBOX_CLICKED", wxEVT_COMMAND_CHECKBOX_CLICKED );
	wLiteralAddNum( "wxEVT_COMMAND_CHOICE_SELECTED", wxEVT_COMMAND_CHOICE_SELECTED );
	wLiteralAddNum( "wxEVT_COMMAND_LISTBOX_SELECTED", wxEVT_COMMAND_LISTBOX_SELECTED );
	wLiteralAddNum( "wxEVT_COMMAND_LISTBOX_DOUBLECLICKED", wxEVT_COMMAND_LISTBOX_DOUBLECLICKED );
	wLiteralAddNum( "wxEVT_COMMAND_CHECKLISTBOX_TOGGLED", wxEVT_COMMAND_CHECKLISTBOX_TOGGLED );
	wLiteralAddNum( "wxEVT_COMMAND_TEXT_UPDATED", wxEVT_COMMAND_TEXT_UPDATED );
	wLiteralAddNum( "wxEVT_COMMAND_TEXT_ENTER", wxEVT_COMMAND_TEXT_ENTER );
	wLiteralAddNum( "wxEVT_COMMAND_MENU_SELECTED", wxEVT_COMMAND_MENU_SELECTED );
	wLiteralAddNum( "wxEVT_COMMAND_SLIDER_UPDATED", wxEVT_COMMAND_SLIDER_UPDATED );
	wLiteralAddNum( "wxEVT_COMMAND_RADIOBOX_SELECTED", wxEVT_COMMAND_RADIOBOX_SELECTED );
	wLiteralAddNum( "wxEVT_COMMAND_RADIOBUTTON_SELECTED", wxEVT_COMMAND_RADIOBUTTON_SELECTED );
	wLiteralAddNum( "wxEVT_COMMAND_SCROLLBAR_UPDATED", wxEVT_COMMAND_SCROLLBAR_UPDATED );
	wLiteralAddNum( "wxEVT_COMMAND_VLBOX_SELECTED", wxEVT_COMMAND_VLBOX_SELECTED );
	wLiteralAddNum( "wxEVT_COMMAND_COMBOBOX_SELECTED", wxEVT_COMMAND_COMBOBOX_SELECTED );
	wLiteralAddNum( "wxEVT_COMMAND_TOOL_RCLICKED", wxEVT_COMMAND_TOOL_RCLICKED );
	wLiteralAddNum( "wxEVT_COMMAND_TOOL_ENTER", wxEVT_COMMAND_TOOL_ENTER );
	wLiteralAddNum( "wxEVT_COMMAND_SPINCTRL_UPDATED", wxEVT_COMMAND_SPINCTRL_UPDATED );
	wLiteralAddNum( "wxEVT_SOCKET", wxEVT_SOCKET );
	wLiteralAddNum( "wxEVT_TIMER", wxEVT_TIMER );
	wLiteralAddNum( "wxEVT_LEFT_DOWN", wxEVT_LEFT_DOWN );
	wLiteralAddNum( "wxEVT_LEFT_UP", wxEVT_LEFT_UP );
	wLiteralAddNum( "wxEVT_MIDDLE_DOWN", wxEVT_MIDDLE_DOWN );
	wLiteralAddNum( "wxEVT_MIDDLE_UP", wxEVT_MIDDLE_UP );
	wLiteralAddNum( "wxEVT_RIGHT_DOWN", wxEVT_RIGHT_DOWN );
	wLiteralAddNum( "wxEVT_RIGHT_UP", wxEVT_RIGHT_UP );
	wLiteralAddNum( "wxEVT_MOTION", wxEVT_MOTION );
	wLiteralAddNum( "wxEVT_ENTER_WINDOW", wxEVT_ENTER_WINDOW );
	wLiteralAddNum( "wxEVT_LEAVE_WINDOW", wxEVT_LEAVE_WINDOW );
	wLiteralAddNum( "wxEVT_LEFT_DCLICK", wxEVT_LEFT_DCLICK );
	wLiteralAddNum( "wxEVT_MIDDLE_DCLICK", wxEVT_MIDDLE_DCLICK );
	wLiteralAddNum( "wxEVT_RIGHT_DCLICK", wxEVT_RIGHT_DCLICK );
	wLiteralAddNum( "wxEVT_SET_FOCUS", wxEVT_SET_FOCUS );
	wLiteralAddNum( "wxEVT_KILL_FOCUS", wxEVT_KILL_FOCUS );
	wLiteralAddNum( "wxEVT_MOUSEWHEEL", wxEVT_MOUSEWHEEL );
	wLiteralAddNum( "wxEVT_NC_LEFT_DOWN", wxEVT_NC_LEFT_DOWN );
	wLiteralAddNum( "wxEVT_NC_LEFT_UP", wxEVT_NC_LEFT_UP );
	wLiteralAddNum( "wxEVT_NC_MIDDLE_DOWN", wxEVT_NC_MIDDLE_DOWN );
	wLiteralAddNum( "wxEVT_NC_MIDDLE_UP", wxEVT_NC_MIDDLE_UP );
	wLiteralAddNum( "wxEVT_NC_RIGHT_DOWN", wxEVT_NC_RIGHT_DOWN );
	wLiteralAddNum( "wxEVT_NC_RIGHT_UP", wxEVT_NC_RIGHT_UP );
	wLiteralAddNum( "wxEVT_NC_MOTION", wxEVT_NC_MOTION );
	wLiteralAddNum( "wxEVT_NC_ENTER_WINDOW", wxEVT_NC_ENTER_WINDOW );
	wLiteralAddNum( "wxEVT_NC_LEAVE_WINDOW", wxEVT_NC_LEAVE_WINDOW );
	wLiteralAddNum( "wxEVT_NC_LEFT_DCLICK", wxEVT_NC_LEFT_DCLICK );
	wLiteralAddNum( "wxEVT_NC_MIDDLE_DCLICK", wxEVT_NC_MIDDLE_DCLICK );
	wLiteralAddNum( "wxEVT_NC_RIGHT_DCLICK", wxEVT_NC_RIGHT_DCLICK );
	wLiteralAddNum( "wxEVT_CHAR", wxEVT_CHAR );
	wLiteralAddNum( "wxEVT_CHAR_HOOK", wxEVT_CHAR_HOOK );
	wLiteralAddNum( "wxEVT_NAVIGATION_KEY", wxEVT_NAVIGATION_KEY );
	wLiteralAddNum( "wxEVT_KEY_DOWN", wxEVT_KEY_DOWN );
	wLiteralAddNum( "wxEVT_KEY_UP", wxEVT_KEY_UP );
	wLiteralAddNum( "wxEVT_SET_CURSOR", wxEVT_SET_CURSOR );
	wLiteralAddNum( "wxEVT_SCROLL_TOP", wxEVT_SCROLL_TOP );
	wLiteralAddNum( "wxEVT_SCROLL_BOTTOM", wxEVT_SCROLL_BOTTOM );
	wLiteralAddNum( "wxEVT_SCROLL_LINEUP", wxEVT_SCROLL_LINEUP );
	wLiteralAddNum( "wxEVT_SCROLL_LINEDOWN", wxEVT_SCROLL_LINEDOWN );
	wLiteralAddNum( "wxEVT_SCROLL_PAGEUP", wxEVT_SCROLL_PAGEUP );
	wLiteralAddNum( "wxEVT_SCROLL_PAGEDOWN", wxEVT_SCROLL_PAGEDOWN );
	wLiteralAddNum( "wxEVT_SCROLL_THUMBTRACK", wxEVT_SCROLL_THUMBTRACK );
	wLiteralAddNum( "wxEVT_SCROLL_THUMBRELEASE", wxEVT_SCROLL_THUMBRELEASE );
	wLiteralAddNum( "wxEVT_SCROLLWIN_TOP", wxEVT_SCROLLWIN_TOP );
	wLiteralAddNum( "wxEVT_SCROLLWIN_BOTTOM", wxEVT_SCROLLWIN_BOTTOM );
	wLiteralAddNum( "wxEVT_SCROLLWIN_LINEUP", wxEVT_SCROLLWIN_LINEUP );
	wLiteralAddNum( "wxEVT_SCROLLWIN_LINEDOWN", wxEVT_SCROLLWIN_LINEDOWN );
	wLiteralAddNum( "wxEVT_SCROLLWIN_PAGEUP", wxEVT_SCROLLWIN_PAGEUP );
	wLiteralAddNum( "wxEVT_SCROLLWIN_PAGEDOWN", wxEVT_SCROLLWIN_PAGEDOWN );
	wLiteralAddNum( "wxEVT_SCROLLWIN_THUMBTRACK", wxEVT_SCROLLWIN_THUMBTRACK );
	wLiteralAddNum( "wxEVT_SCROLLWIN_THUMBRELEASE", wxEVT_SCROLLWIN_THUMBRELEASE );
	wLiteralAddNum( "wxEVT_SIZE", wxEVT_SIZE );
	wLiteralAddNum( "wxEVT_MOVE", wxEVT_MOVE );
	wLiteralAddNum( "wxEVT_CLOSE_WINDOW", wxEVT_CLOSE_WINDOW );
	wLiteralAddNum( "wxEVT_END_SESSION", wxEVT_END_SESSION );
	wLiteralAddNum( "wxEVT_QUERY_END_SESSION", wxEVT_QUERY_END_SESSION );
	wLiteralAddNum( "wxEVT_ACTIVATE_APP", wxEVT_ACTIVATE_APP );
	wLiteralAddNum( "wxEVT_POWER", wxEVT_POWER );
	wLiteralAddNum( "wxEVT_ACTIVATE", wxEVT_ACTIVATE );
	wLiteralAddNum( "wxEVT_CREATE", wxEVT_CREATE );
	wLiteralAddNum( "wxEVT_DESTROY", wxEVT_DESTROY );
	wLiteralAddNum( "wxEVT_SHOW", wxEVT_SHOW );
	wLiteralAddNum( "wxEVT_ICONIZE", wxEVT_ICONIZE );
	wLiteralAddNum( "wxEVT_MAXIMIZE", wxEVT_MAXIMIZE );
	wLiteralAddNum( "wxEVT_MOUSE_CAPTURE_CHANGED", wxEVT_MOUSE_CAPTURE_CHANGED );
	wLiteralAddNum( "wxEVT_PAINT", wxEVT_PAINT );
	wLiteralAddNum( "wxEVT_ERASE_BACKGROUND", wxEVT_ERASE_BACKGROUND );
	wLiteralAddNum( "wxEVT_NC_PAINT", wxEVT_NC_PAINT );
	wLiteralAddNum( "wxEVT_PAINT_ICON", wxEVT_PAINT_ICON );
	wLiteralAddNum( "wxEVT_MENU_HIGHLIGHT", wxEVT_MENU_HIGHLIGHT );
	wLiteralAddNum( "wxEVT_CONTEXT_MENU", wxEVT_CONTEXT_MENU );
	wLiteralAddNum( "wxEVT_SYS_COLOUR_CHANGED", wxEVT_SYS_COLOUR_CHANGED );
	wLiteralAddNum( "wxEVT_SETTING_CHANGED", wxEVT_SETTING_CHANGED );
	wLiteralAddNum( "wxEVT_QUERY_NEW_PALETTE", wxEVT_QUERY_NEW_PALETTE );
	wLiteralAddNum( "wxEVT_PALETTE_CHANGED", wxEVT_PALETTE_CHANGED );
	wLiteralAddNum( "wxEVT_JOY_BUTTON_DOWN", wxEVT_JOY_BUTTON_DOWN );
	wLiteralAddNum( "wxEVT_JOY_BUTTON_UP", wxEVT_JOY_BUTTON_UP );
	wLiteralAddNum( "wxEVT_JOY_MOVE", wxEVT_JOY_MOVE );
	wLiteralAddNum( "wxEVT_JOY_ZMOVE", wxEVT_JOY_ZMOVE );
	wLiteralAddNum( "wxEVT_DROP_FILES", wxEVT_DROP_FILES );
	wLiteralAddNum( "wxEVT_DRAW_ITEM", wxEVT_DRAW_ITEM );
	wLiteralAddNum( "wxEVT_MEASURE_ITEM", wxEVT_MEASURE_ITEM );
	wLiteralAddNum( "wxEVT_COMPARE_ITEM", wxEVT_COMPARE_ITEM );
	wLiteralAddNum( "wxEVT_INIT_DIALOG", wxEVT_INIT_DIALOG );
	wLiteralAddNum( "wxEVT_IDLE", wxEVT_IDLE );
	wLiteralAddNum( "wxEVT_UPDATE_UI", wxEVT_UPDATE_UI );
	wLiteralAddNum( "wxEVT_COMMAND_LEFT_CLICK", wxEVT_COMMAND_LEFT_CLICK );
	wLiteralAddNum( "wxEVT_COMMAND_LEFT_DCLICK", wxEVT_COMMAND_LEFT_DCLICK );
	wLiteralAddNum( "wxEVT_COMMAND_RIGHT_CLICK", wxEVT_COMMAND_RIGHT_CLICK );
	wLiteralAddNum( "wxEVT_COMMAND_RIGHT_DCLICK", wxEVT_COMMAND_RIGHT_DCLICK );
	wLiteralAddNum( "wxEVT_COMMAND_SET_FOCUS", wxEVT_COMMAND_SET_FOCUS );
	wLiteralAddNum( "wxEVT_COMMAND_KILL_FOCUS", wxEVT_COMMAND_KILL_FOCUS );
	wLiteralAddNum( "wxEVT_COMMAND_ENTER", wxEVT_COMMAND_ENTER );
	wLiteralAddNum( "wxEVT_HELP", wxEVT_HELP );
	wLiteralAddNum( "wxEVT_DETAILED_HELP", wxEVT_DETAILED_HELP );
	wLiteralAddNum( "wxEVT_COMMAND_TOOL_CLICKED", wxEVT_COMMAND_TOOL_CLICKED );
	wLiteralAddNum( "wxHF_TOOLBAR", wxHF_TOOLBAR );
	wLiteralAddNum( "wxHF_FLAT_TOOLBAR", wxHF_FLAT_TOOLBAR );
	wLiteralAddNum( "wxHF_CONTENTS", wxHF_CONTENTS );
	wLiteralAddNum( "wxHF_INDEX", wxHF_INDEX );
	wLiteralAddNum( "wxHF_SEARCH", wxHF_SEARCH );
	wLiteralAddNum( "wxHF_BOOKMARKS", wxHF_BOOKMARKS );
	wLiteralAddNum( "wxHF_OPEN_FILES", wxHF_OPEN_FILES );
	wLiteralAddNum( "wxHF_PRINT", wxHF_PRINT );
	wLiteralAddNum( "wxHF_MERGE_BOOKS", wxHF_MERGE_BOOKS );
	wLiteralAddNum( "wxHF_ICONS_BOOK", wxHF_ICONS_BOOK );
	wLiteralAddNum( "wxHF_ICONS_FOLDER", wxHF_ICONS_FOLDER );
	wLiteralAddNum( "wxHF_ICONS_BOOK_CHAPTER", wxHF_ICONS_BOOK_CHAPTER );
	wLiteralAddNum( "wxHF_DEFAULT_STYLE", wxHF_DEFAULT_STYLE );
	wLiteralAddNum( "WXK_BACK", WXK_BACK );
	wLiteralAddNum( "WXK_TAB", WXK_TAB );
	wLiteralAddNum( "WXK_RETURN", WXK_RETURN );
	wLiteralAddNum( "WXK_ESCAPE", WXK_ESCAPE );
	wLiteralAddNum( "WXK_SPACE", WXK_SPACE );
	wLiteralAddNum( "WXK_DELETE", WXK_DELETE );
	wLiteralAddNum( "WXK_START", WXK_START );
	wLiteralAddNum( "WXK_LBUTTON", WXK_LBUTTON );
	wLiteralAddNum( "WXK_RBUTTON", WXK_RBUTTON );
	wLiteralAddNum( "WXK_CANCEL", WXK_CANCEL );
	wLiteralAddNum( "WXK_MBUTTON", WXK_MBUTTON );
	wLiteralAddNum( "WXK_CLEAR", WXK_CLEAR );
	wLiteralAddNum( "WXK_SHIFT", WXK_SHIFT );
	wLiteralAddNum( "WXK_ALT", WXK_ALT );
	wLiteralAddNum( "WXK_CONTROL", WXK_CONTROL );
	wLiteralAddNum( "WXK_MENU", WXK_MENU );
	wLiteralAddNum( "WXK_PAUSE", WXK_PAUSE );
	wLiteralAddNum( "WXK_CAPITAL", WXK_CAPITAL );
	wLiteralAddNum( "WXK_PRIOR", WXK_PRIOR );
	wLiteralAddNum( "WXK_NEXT", WXK_NEXT );
	wLiteralAddNum( "WXK_END", WXK_END );
	wLiteralAddNum( "WXK_HOME", WXK_HOME );
	wLiteralAddNum( "WXK_LEFT", WXK_LEFT );
	wLiteralAddNum( "WXK_UP", WXK_UP );
	wLiteralAddNum( "WXK_RIGHT", WXK_RIGHT );
	wLiteralAddNum( "WXK_DOWN", WXK_DOWN );
	wLiteralAddNum( "WXK_SELECT", WXK_SELECT );
	wLiteralAddNum( "WXK_PRINT", WXK_PRINT );
	wLiteralAddNum( "WXK_EXECUTE", WXK_EXECUTE );
	wLiteralAddNum( "WXK_SNAPSHOT", WXK_SNAPSHOT );
	wLiteralAddNum( "WXK_INSERT", WXK_INSERT );
	wLiteralAddNum( "WXK_HELP", WXK_HELP );
	wLiteralAddNum( "WXK_NUMPAD0", WXK_NUMPAD0 );
	wLiteralAddNum( "WXK_NUMPAD1", WXK_NUMPAD1 );
	wLiteralAddNum( "WXK_NUMPAD2", WXK_NUMPAD2 );
	wLiteralAddNum( "WXK_NUMPAD3", WXK_NUMPAD3 );
	wLiteralAddNum( "WXK_NUMPAD4", WXK_NUMPAD4 );
	wLiteralAddNum( "WXK_NUMPAD5", WXK_NUMPAD5 );
	wLiteralAddNum( "WXK_NUMPAD6", WXK_NUMPAD6 );
	wLiteralAddNum( "WXK_NUMPAD7", WXK_NUMPAD7 );
	wLiteralAddNum( "WXK_NUMPAD8", WXK_NUMPAD8 );
	wLiteralAddNum( "WXK_NUMPAD9", WXK_NUMPAD9 );
	wLiteralAddNum( "WXK_MULTIPLY", WXK_MULTIPLY );
	wLiteralAddNum( "WXK_ADD", WXK_ADD );
	wLiteralAddNum( "WXK_SEPARATOR", WXK_SEPARATOR );
	wLiteralAddNum( "WXK_SUBTRACT", WXK_SUBTRACT );
	wLiteralAddNum( "WXK_DECIMAL", WXK_DECIMAL );
	wLiteralAddNum( "WXK_DIVIDE", WXK_DIVIDE );
	wLiteralAddNum( "WXK_F1", WXK_F1 );
	wLiteralAddNum( "WXK_F2", WXK_F2 );
	wLiteralAddNum( "WXK_F3", WXK_F3 );
	wLiteralAddNum( "WXK_F4", WXK_F4 );
	wLiteralAddNum( "WXK_F5", WXK_F5 );
	wLiteralAddNum( "WXK_F6", WXK_F6 );
	wLiteralAddNum( "WXK_F7", WXK_F7 );
	wLiteralAddNum( "WXK_F8", WXK_F8 );
	wLiteralAddNum( "WXK_F9", WXK_F9 );
	wLiteralAddNum( "WXK_F10", WXK_F10 );
	wLiteralAddNum( "WXK_F11", WXK_F11 );
	wLiteralAddNum( "WXK_F12", WXK_F12 );
	wLiteralAddNum( "WXK_F13", WXK_F13 );
	wLiteralAddNum( "WXK_F14", WXK_F14 );
	wLiteralAddNum( "WXK_F15", WXK_F15 );
	wLiteralAddNum( "WXK_F16", WXK_F16 );
	wLiteralAddNum( "WXK_F17", WXK_F17 );
	wLiteralAddNum( "WXK_F18", WXK_F18 );
	wLiteralAddNum( "WXK_F19", WXK_F19 );
	wLiteralAddNum( "WXK_F20", WXK_F20 );
	wLiteralAddNum( "WXK_F21", WXK_F21 );
	wLiteralAddNum( "WXK_F22", WXK_F22 );
	wLiteralAddNum( "WXK_F23", WXK_F23 );
	wLiteralAddNum( "WXK_F24", WXK_F24 );
	wLiteralAddNum( "WXK_NUMLOCK", WXK_NUMLOCK );
	wLiteralAddNum( "WXK_SCROLL", WXK_SCROLL );
	wLiteralAddNum( "WXK_PAGEUP", WXK_PAGEUP );
	wLiteralAddNum( "WXK_PAGEDOWN", WXK_PAGEDOWN );
	wLiteralAddNum( "WXK_NUMPAD_SPACE", WXK_NUMPAD_SPACE );
	wLiteralAddNum( "WXK_NUMPAD_TAB", WXK_NUMPAD_TAB );
	wLiteralAddNum( "WXK_NUMPAD_ENTER", WXK_NUMPAD_ENTER );
	wLiteralAddNum( "WXK_NUMPAD_F1", WXK_NUMPAD_F1 );
	wLiteralAddNum( "WXK_NUMPAD_F2", WXK_NUMPAD_F2 );
	wLiteralAddNum( "WXK_NUMPAD_F3", WXK_NUMPAD_F3 );
	wLiteralAddNum( "WXK_NUMPAD_F4", WXK_NUMPAD_F4 );
	wLiteralAddNum( "WXK_NUMPAD_HOME", WXK_NUMPAD_HOME );
	wLiteralAddNum( "WXK_NUMPAD_LEFT", WXK_NUMPAD_LEFT );
	wLiteralAddNum( "WXK_NUMPAD_UP", WXK_NUMPAD_UP );
	wLiteralAddNum( "WXK_NUMPAD_RIGHT", WXK_NUMPAD_RIGHT );
	wLiteralAddNum( "WXK_NUMPAD_DOWN", WXK_NUMPAD_DOWN );
	wLiteralAddNum( "WXK_NUMPAD_PRIOR", WXK_NUMPAD_PRIOR );
	wLiteralAddNum( "WXK_NUMPAD_PAGEUP", WXK_NUMPAD_PAGEUP );
	wLiteralAddNum( "WXK_NUMPAD_NEXT", WXK_NUMPAD_NEXT );
	wLiteralAddNum( "WXK_NUMPAD_PAGEDOWN", WXK_NUMPAD_PAGEDOWN );
	wLiteralAddNum( "WXK_NUMPAD_END", WXK_NUMPAD_END );
	wLiteralAddNum( "WXK_NUMPAD_BEGIN", WXK_NUMPAD_BEGIN );
	wLiteralAddNum( "WXK_NUMPAD_INSERT", WXK_NUMPAD_INSERT );
	wLiteralAddNum( "WXK_NUMPAD_DELETE", WXK_NUMPAD_DELETE );
	wLiteralAddNum( "WXK_NUMPAD_EQUAL", WXK_NUMPAD_EQUAL );
	wLiteralAddNum( "WXK_NUMPAD_MULTIPLY", WXK_NUMPAD_MULTIPLY );
	wLiteralAddNum( "WXK_NUMPAD_ADD", WXK_NUMPAD_ADD );
	wLiteralAddNum( "WXK_NUMPAD_SEPARATOR", WXK_NUMPAD_SEPARATOR );
	wLiteralAddNum( "WXK_NUMPAD_SUBTRACT", WXK_NUMPAD_SUBTRACT );
	wLiteralAddNum( "WXK_NUMPAD_DECIMAL", WXK_NUMPAD_DECIMAL );
	wLiteralAddNum( "WXK_NUMPAD_DIVIDE", WXK_NUMPAD_DIVIDE );
	wLiteralAddPtr( "wxNullIcon", _wxIcon, (void *) new wxIcon(wxNullIcon));
	wLiteralAddNum( "wxOK", wxOK );
	wLiteralAddNum( "wxYES_NO", wxYES_NO );
	wLiteralAddNum( "wxCANCEL", wxCANCEL );
	wLiteralAddNum( "wxYES", wxYES );
	wLiteralAddNum( "wxNO", wxNO );
	wLiteralAddNum( "wxNO_DEFAULT", wxNO_DEFAULT );
	wLiteralAddNum( "wxYES_DEFAULT", wxYES_DEFAULT );
	wLiteralAddNum( "wxICON_EXCLAMATION", wxICON_EXCLAMATION );
	wLiteralAddNum( "wxICON_HAND", wxICON_HAND );
	wLiteralAddNum( "wxICON_WARNING", wxICON_WARNING );
	wLiteralAddNum( "wxICON_ERROR", wxICON_ERROR );
	wLiteralAddNum( "wxICON_QUESTION", wxICON_QUESTION );
	wLiteralAddNum( "wxICON_INFORMATION", wxICON_INFORMATION );
	wLiteralAddNum( "wxICON_STOP", wxICON_STOP );
	wLiteralAddNum( "wxICON_ASTERISK", wxICON_ASTERISK );
	wLiteralAddNum( "wxICON_MASK", wxICON_MASK );
	wLiteralAddNum( "wxUNKNOWN_PLATFORM", wxUNKNOWN_PLATFORM );
	wLiteralAddNum( "wxCURSES", wxCURSES );
	wLiteralAddNum( "wxXVIEW_X", wxXVIEW_X );
	wLiteralAddNum( "wxMOTIF_X", wxMOTIF_X );
	wLiteralAddNum( "wxCOSE_X", wxCOSE_X );
	wLiteralAddNum( "wxNEXTSTEP", wxNEXTSTEP );
	wLiteralAddNum( "wxBEOS", wxBEOS );
	wLiteralAddNum( "wxGTK", wxGTK );
	wLiteralAddNum( "wxGTK_WIN32", wxGTK_WIN32 );
	wLiteralAddNum( "wxGTK_OS2", wxGTK_OS2 );
	wLiteralAddNum( "wxGTK_BEOS", wxGTK_BEOS );
	wLiteralAddNum( "wxGEOS", wxGEOS );
	wLiteralAddNum( "wxOS2_PM", wxOS2_PM );
	wLiteralAddNum( "wxWINDOWS", wxWINDOWS );
	wLiteralAddNum( "wxPENWINDOWS", wxPENWINDOWS );
	wLiteralAddNum( "wxWINDOWS_NT", wxWINDOWS_NT );
	wLiteralAddNum( "wxWIN32S", wxWIN32S );
	wLiteralAddNum( "wxWIN95", wxWIN95 );
	wLiteralAddNum( "wxWIN386", wxWIN386 );
	wLiteralAddNum( "wxMGL_UNIX", wxMGL_UNIX );
	wLiteralAddNum( "wxMGL_X", wxMGL_X );
	wLiteralAddNum( "wxMGL_WIN32", wxMGL_WIN32 );
	wLiteralAddNum( "wxMGL_OS2", wxMGL_OS2 );
	wLiteralAddNum( "wxWINDOWS_OS2", wxWINDOWS_OS2 );
	wLiteralAddNum( "wxUNIX", wxUNIX );
	wLiteralAddNum( "wxLOCALE_LOAD_DEFAULT", wxLOCALE_LOAD_DEFAULT );
	wLiteralAddNum( "wxLOCALE_CONV_ENCODING", wxLOCALE_CONV_ENCODING );
	wLiteralAddNum( "wxLANGUAGE_DEFAULT", wxLANGUAGE_DEFAULT );
	wLiteralAddNum( "wxLANGUAGE_UNKNOWN", wxLANGUAGE_UNKNOWN );
	wLiteralAddNum( "wxLANGUAGE_USER_DEFINED", wxLANGUAGE_USER_DEFINED );
	wLiteralAddNum( "wxLANGUAGE_ABKHAZIAN", wxLANGUAGE_ABKHAZIAN );
	wLiteralAddNum( "wxLANGUAGE_AFAR", wxLANGUAGE_AFAR );
	wLiteralAddNum( "wxLANGUAGE_AFRIKAANS", wxLANGUAGE_AFRIKAANS );
	wLiteralAddNum( "wxLANGUAGE_ALBANIAN", wxLANGUAGE_ALBANIAN );
	wLiteralAddNum( "wxLANGUAGE_AMHARIC", wxLANGUAGE_AMHARIC );
	wLiteralAddNum( "wxLANGUAGE_ARABIC", wxLANGUAGE_ARABIC );
	wLiteralAddNum( "wxLANGUAGE_ARABIC_ALGERIA", wxLANGUAGE_ARABIC_ALGERIA );
	wLiteralAddNum( "wxLANGUAGE_ARABIC_BAHRAIN", wxLANGUAGE_ARABIC_BAHRAIN );
	wLiteralAddNum( "wxLANGUAGE_ARABIC_EGYPT", wxLANGUAGE_ARABIC_EGYPT );
	wLiteralAddNum( "wxLANGUAGE_ARABIC_IRAQ", wxLANGUAGE_ARABIC_IRAQ );
	wLiteralAddNum( "wxLANGUAGE_ARABIC_JORDAN", wxLANGUAGE_ARABIC_JORDAN );
	wLiteralAddNum( "wxLANGUAGE_ARABIC_KUWAIT", wxLANGUAGE_ARABIC_KUWAIT );
	wLiteralAddNum( "wxLANGUAGE_ARABIC_LEBANON", wxLANGUAGE_ARABIC_LEBANON );
	wLiteralAddNum( "wxLANGUAGE_ARABIC_LIBYA", wxLANGUAGE_ARABIC_LIBYA );
	wLiteralAddNum( "wxLANGUAGE_ARABIC_MOROCCO", wxLANGUAGE_ARABIC_MOROCCO );
	wLiteralAddNum( "wxLANGUAGE_ARABIC_OMAN", wxLANGUAGE_ARABIC_OMAN );
	wLiteralAddNum( "wxLANGUAGE_ARABIC_QATAR", wxLANGUAGE_ARABIC_QATAR );
	wLiteralAddNum( "wxLANGUAGE_ARABIC_SAUDI_ARABIA", wxLANGUAGE_ARABIC_SAUDI_ARABIA );
	wLiteralAddNum( "wxLANGUAGE_ARABIC_SUDAN", wxLANGUAGE_ARABIC_SUDAN );
	wLiteralAddNum( "wxLANGUAGE_ARABIC_SYRIA", wxLANGUAGE_ARABIC_SYRIA );
	wLiteralAddNum( "wxLANGUAGE_ARABIC_TUNISIA", wxLANGUAGE_ARABIC_TUNISIA );
	wLiteralAddNum( "wxLANGUAGE_ARABIC_UAE", wxLANGUAGE_ARABIC_UAE );
	wLiteralAddNum( "wxLANGUAGE_ARABIC_YEMEN", wxLANGUAGE_ARABIC_YEMEN );
	wLiteralAddNum( "wxLANGUAGE_ARMENIAN", wxLANGUAGE_ARMENIAN );
	wLiteralAddNum( "wxLANGUAGE_ASSAMESE", wxLANGUAGE_ASSAMESE );
	wLiteralAddNum( "wxLANGUAGE_AYMARA", wxLANGUAGE_AYMARA );
	wLiteralAddNum( "wxLANGUAGE_AZERI", wxLANGUAGE_AZERI );
	wLiteralAddNum( "wxLANGUAGE_AZERI_CYRILLIC", wxLANGUAGE_AZERI_CYRILLIC );
	wLiteralAddNum( "wxLANGUAGE_AZERI_LATIN", wxLANGUAGE_AZERI_LATIN );
	wLiteralAddNum( "wxLANGUAGE_BASHKIR", wxLANGUAGE_BASHKIR );
	wLiteralAddNum( "wxLANGUAGE_BASQUE", wxLANGUAGE_BASQUE );
	wLiteralAddNum( "wxLANGUAGE_BELARUSIAN", wxLANGUAGE_BELARUSIAN );
	wLiteralAddNum( "wxLANGUAGE_BENGALI", wxLANGUAGE_BENGALI );
	wLiteralAddNum( "wxLANGUAGE_BHUTANI", wxLANGUAGE_BHUTANI );
	wLiteralAddNum( "wxLANGUAGE_BIHARI", wxLANGUAGE_BIHARI );
	wLiteralAddNum( "wxLANGUAGE_BISLAMA", wxLANGUAGE_BISLAMA );
	wLiteralAddNum( "wxLANGUAGE_BRETON", wxLANGUAGE_BRETON );
	wLiteralAddNum( "wxLANGUAGE_BULGARIAN", wxLANGUAGE_BULGARIAN );
	wLiteralAddNum( "wxLANGUAGE_BURMESE", wxLANGUAGE_BURMESE );
	wLiteralAddNum( "wxLANGUAGE_CAMBODIAN", wxLANGUAGE_CAMBODIAN );
	wLiteralAddNum( "wxLANGUAGE_CATALAN", wxLANGUAGE_CATALAN );
	wLiteralAddNum( "wxLANGUAGE_CHINESE", wxLANGUAGE_CHINESE );
	wLiteralAddNum( "wxLANGUAGE_CHINESE_SIMPLIFIED", wxLANGUAGE_CHINESE_SIMPLIFIED );
	wLiteralAddNum( "wxLANGUAGE_CHINESE_TRADITIONAL", wxLANGUAGE_CHINESE_TRADITIONAL );
	wLiteralAddNum( "wxLANGUAGE_CHINESE_HONGKONG", wxLANGUAGE_CHINESE_HONGKONG );
	wLiteralAddNum( "wxLANGUAGE_CHINESE_MACAU", wxLANGUAGE_CHINESE_MACAU );
	wLiteralAddNum( "wxLANGUAGE_CHINESE_SINGAPORE", wxLANGUAGE_CHINESE_SINGAPORE );
	wLiteralAddNum( "wxLANGUAGE_CHINESE_TAIWAN", wxLANGUAGE_CHINESE_TAIWAN );
	wLiteralAddNum( "wxLANGUAGE_CORSICAN", wxLANGUAGE_CORSICAN );
	wLiteralAddNum( "wxLANGUAGE_CROATIAN", wxLANGUAGE_CROATIAN );
	wLiteralAddNum( "wxLANGUAGE_CZECH", wxLANGUAGE_CZECH );
	wLiteralAddNum( "wxLANGUAGE_DANISH", wxLANGUAGE_DANISH );
	wLiteralAddNum( "wxLANGUAGE_DUTCH", wxLANGUAGE_DUTCH );
	wLiteralAddNum( "wxLANGUAGE_DUTCH_BELGIAN", wxLANGUAGE_DUTCH_BELGIAN );
	wLiteralAddNum( "wxLANGUAGE_ENGLISH", wxLANGUAGE_ENGLISH );
	wLiteralAddNum( "wxLANGUAGE_ENGLISH_UK", wxLANGUAGE_ENGLISH_UK );
	wLiteralAddNum( "wxLANGUAGE_ENGLISH_US", wxLANGUAGE_ENGLISH_US );
	wLiteralAddNum( "wxLANGUAGE_ENGLISH_AUSTRALIA", wxLANGUAGE_ENGLISH_AUSTRALIA );
	wLiteralAddNum( "wxLANGUAGE_ENGLISH_BELIZE", wxLANGUAGE_ENGLISH_BELIZE );
	wLiteralAddNum( "wxLANGUAGE_ENGLISH_BOTSWANA", wxLANGUAGE_ENGLISH_BOTSWANA );
	wLiteralAddNum( "wxLANGUAGE_ENGLISH_CANADA", wxLANGUAGE_ENGLISH_CANADA );
	wLiteralAddNum( "wxLANGUAGE_ENGLISH_CARIBBEAN", wxLANGUAGE_ENGLISH_CARIBBEAN );
	wLiteralAddNum( "wxLANGUAGE_ENGLISH_DENMARK", wxLANGUAGE_ENGLISH_DENMARK );
	wLiteralAddNum( "wxLANGUAGE_ENGLISH_EIRE", wxLANGUAGE_ENGLISH_EIRE );
	wLiteralAddNum( "wxLANGUAGE_ENGLISH_JAMAICA", wxLANGUAGE_ENGLISH_JAMAICA );
	wLiteralAddNum( "wxLANGUAGE_ENGLISH_NEW_ZEALAND", wxLANGUAGE_ENGLISH_NEW_ZEALAND );
	wLiteralAddNum( "wxLANGUAGE_ENGLISH_PHILIPPINES", wxLANGUAGE_ENGLISH_PHILIPPINES );
	wLiteralAddNum( "wxLANGUAGE_ENGLISH_SOUTH_AFRICA", wxLANGUAGE_ENGLISH_SOUTH_AFRICA );
	wLiteralAddNum( "wxLANGUAGE_ENGLISH_TRINIDAD", wxLANGUAGE_ENGLISH_TRINIDAD );
	wLiteralAddNum( "wxLANGUAGE_ENGLISH_ZIMBABWE", wxLANGUAGE_ENGLISH_ZIMBABWE );
	wLiteralAddNum( "wxLANGUAGE_ESPERANTO", wxLANGUAGE_ESPERANTO );
	wLiteralAddNum( "wxLANGUAGE_ESTONIAN", wxLANGUAGE_ESTONIAN );
	wLiteralAddNum( "wxLANGUAGE_FAEROESE", wxLANGUAGE_FAEROESE );
	wLiteralAddNum( "wxLANGUAGE_FARSI", wxLANGUAGE_FARSI );
	wLiteralAddNum( "wxLANGUAGE_FIJI", wxLANGUAGE_FIJI );
	wLiteralAddNum( "wxLANGUAGE_FINNISH", wxLANGUAGE_FINNISH );
	wLiteralAddNum( "wxLANGUAGE_FRENCH", wxLANGUAGE_FRENCH );
	wLiteralAddNum( "wxLANGUAGE_FRENCH_BELGIAN", wxLANGUAGE_FRENCH_BELGIAN );
	wLiteralAddNum( "wxLANGUAGE_FRENCH_CANADIAN", wxLANGUAGE_FRENCH_CANADIAN );
	wLiteralAddNum( "wxLANGUAGE_FRENCH_LUXEMBOURG", wxLANGUAGE_FRENCH_LUXEMBOURG );
	wLiteralAddNum( "wxLANGUAGE_FRENCH_MONACO", wxLANGUAGE_FRENCH_MONACO );
	wLiteralAddNum( "wxLANGUAGE_FRENCH_SWISS", wxLANGUAGE_FRENCH_SWISS );
	wLiteralAddNum( "wxLANGUAGE_FRISIAN", wxLANGUAGE_FRISIAN );
	wLiteralAddNum( "wxLANGUAGE_GALICIAN", wxLANGUAGE_GALICIAN );
	wLiteralAddNum( "wxLANGUAGE_GEORGIAN", wxLANGUAGE_GEORGIAN );
	wLiteralAddNum( "wxLANGUAGE_GERMAN", wxLANGUAGE_GERMAN );
	wLiteralAddNum( "wxLANGUAGE_GERMAN_AUSTRIAN", wxLANGUAGE_GERMAN_AUSTRIAN );
	wLiteralAddNum( "wxLANGUAGE_GERMAN_BELGIUM", wxLANGUAGE_GERMAN_BELGIUM );
	wLiteralAddNum( "wxLANGUAGE_GERMAN_LIECHTENSTEIN", wxLANGUAGE_GERMAN_LIECHTENSTEIN );
	wLiteralAddNum( "wxLANGUAGE_GERMAN_LUXEMBOURG", wxLANGUAGE_GERMAN_LUXEMBOURG );
	wLiteralAddNum( "wxLANGUAGE_GERMAN_SWISS", wxLANGUAGE_GERMAN_SWISS );
	wLiteralAddNum( "wxLANGUAGE_GREEK", wxLANGUAGE_GREEK );
	wLiteralAddNum( "wxLANGUAGE_GREENLANDIC", wxLANGUAGE_GREENLANDIC );
	wLiteralAddNum( "wxLANGUAGE_GUARANI", wxLANGUAGE_GUARANI );
	wLiteralAddNum( "wxLANGUAGE_GUJARATI", wxLANGUAGE_GUJARATI );
	wLiteralAddNum( "wxLANGUAGE_HAUSA", wxLANGUAGE_HAUSA );
	wLiteralAddNum( "wxLANGUAGE_HEBREW", wxLANGUAGE_HEBREW );
	wLiteralAddNum( "wxLANGUAGE_HINDI", wxLANGUAGE_HINDI );
	wLiteralAddNum( "wxLANGUAGE_HUNGARIAN", wxLANGUAGE_HUNGARIAN );
	wLiteralAddNum( "wxLANGUAGE_ICELANDIC", wxLANGUAGE_ICELANDIC );
	wLiteralAddNum( "wxLANGUAGE_INDONESIAN", wxLANGUAGE_INDONESIAN );
	wLiteralAddNum( "wxLANGUAGE_INTERLINGUA", wxLANGUAGE_INTERLINGUA );
	wLiteralAddNum( "wxLANGUAGE_INTERLINGUE", wxLANGUAGE_INTERLINGUE );
	wLiteralAddNum( "wxLANGUAGE_INUKTITUT", wxLANGUAGE_INUKTITUT );
	wLiteralAddNum( "wxLANGUAGE_INUPIAK", wxLANGUAGE_INUPIAK );
	wLiteralAddNum( "wxLANGUAGE_IRISH", wxLANGUAGE_IRISH );
	wLiteralAddNum( "wxLANGUAGE_ITALIAN", wxLANGUAGE_ITALIAN );
	wLiteralAddNum( "wxLANGUAGE_ITALIAN_SWISS", wxLANGUAGE_ITALIAN_SWISS );
	wLiteralAddNum( "wxLANGUAGE_JAPANESE", wxLANGUAGE_JAPANESE );
	wLiteralAddNum( "wxLANGUAGE_JAVANESE", wxLANGUAGE_JAVANESE );
	wLiteralAddNum( "wxLANGUAGE_KANNADA", wxLANGUAGE_KANNADA );
	wLiteralAddNum( "wxLANGUAGE_KASHMIRI", wxLANGUAGE_KASHMIRI );
	wLiteralAddNum( "wxLANGUAGE_KASHMIRI_INDIA", wxLANGUAGE_KASHMIRI_INDIA );
	wLiteralAddNum( "wxLANGUAGE_KAZAKH", wxLANGUAGE_KAZAKH );
	wLiteralAddNum( "wxLANGUAGE_KERNEWEK", wxLANGUAGE_KERNEWEK );
	wLiteralAddNum( "wxLANGUAGE_KINYARWANDA", wxLANGUAGE_KINYARWANDA );
	wLiteralAddNum( "wxLANGUAGE_KIRGHIZ", wxLANGUAGE_KIRGHIZ );
	wLiteralAddNum( "wxLANGUAGE_KIRUNDI", wxLANGUAGE_KIRUNDI );
	wLiteralAddNum( "wxLANGUAGE_KONKANI", wxLANGUAGE_KONKANI );
	wLiteralAddNum( "wxLANGUAGE_KOREAN", wxLANGUAGE_KOREAN );
	wLiteralAddNum( "wxLANGUAGE_KURDISH", wxLANGUAGE_KURDISH );
	wLiteralAddNum( "wxLANGUAGE_LAOTHIAN", wxLANGUAGE_LAOTHIAN );
	wLiteralAddNum( "wxLANGUAGE_LATIN", wxLANGUAGE_LATIN );
	wLiteralAddNum( "wxLANGUAGE_LATVIAN", wxLANGUAGE_LATVIAN );
	wLiteralAddNum( "wxLANGUAGE_LINGALA", wxLANGUAGE_LINGALA );
	wLiteralAddNum( "wxLANGUAGE_LITHUANIAN", wxLANGUAGE_LITHUANIAN );
	wLiteralAddNum( "wxLANGUAGE_MACEDONIAN", wxLANGUAGE_MACEDONIAN );
	wLiteralAddNum( "wxLANGUAGE_MALAGASY", wxLANGUAGE_MALAGASY );
	wLiteralAddNum( "wxLANGUAGE_MALAY", wxLANGUAGE_MALAY );
	wLiteralAddNum( "wxLANGUAGE_MALAYALAM", wxLANGUAGE_MALAYALAM );
	wLiteralAddNum( "wxLANGUAGE_MALAY_BRUNEI_DARUSSALAM", wxLANGUAGE_MALAY_BRUNEI_DARUSSALAM );
	wLiteralAddNum( "wxLANGUAGE_MALAY_MALAYSIA", wxLANGUAGE_MALAY_MALAYSIA );
	wLiteralAddNum( "wxLANGUAGE_MALTESE", wxLANGUAGE_MALTESE );
	wLiteralAddNum( "wxLANGUAGE_MANIPURI", wxLANGUAGE_MANIPURI );
	wLiteralAddNum( "wxLANGUAGE_MAORI", wxLANGUAGE_MAORI );
	wLiteralAddNum( "wxLANGUAGE_MARATHI", wxLANGUAGE_MARATHI );
	wLiteralAddNum( "wxLANGUAGE_MOLDAVIAN", wxLANGUAGE_MOLDAVIAN );
	wLiteralAddNum( "wxLANGUAGE_MONGOLIAN", wxLANGUAGE_MONGOLIAN );
	wLiteralAddNum( "wxLANGUAGE_NAURU", wxLANGUAGE_NAURU );
	wLiteralAddNum( "wxLANGUAGE_NEPALI", wxLANGUAGE_NEPALI );
	wLiteralAddNum( "wxLANGUAGE_NEPALI_INDIA", wxLANGUAGE_NEPALI_INDIA );
	wLiteralAddNum( "wxLANGUAGE_NORWEGIAN_BOKMAL", wxLANGUAGE_NORWEGIAN_BOKMAL );
	wLiteralAddNum( "wxLANGUAGE_NORWEGIAN_NYNORSK", wxLANGUAGE_NORWEGIAN_NYNORSK );
	wLiteralAddNum( "wxLANGUAGE_OCCITAN", wxLANGUAGE_OCCITAN );
	wLiteralAddNum( "wxLANGUAGE_ORIYA", wxLANGUAGE_ORIYA );
	wLiteralAddNum( "wxLANGUAGE_OROMO", wxLANGUAGE_OROMO );
	wLiteralAddNum( "wxLANGUAGE_PASHTO", wxLANGUAGE_PASHTO );
	wLiteralAddNum( "wxLANGUAGE_POLISH", wxLANGUAGE_POLISH );
	wLiteralAddNum( "wxLANGUAGE_PORTUGUESE", wxLANGUAGE_PORTUGUESE );
	wLiteralAddNum( "wxLANGUAGE_PORTUGUESE_BRAZILIAN", wxLANGUAGE_PORTUGUESE_BRAZILIAN );
	wLiteralAddNum( "wxLANGUAGE_PUNJABI", wxLANGUAGE_PUNJABI );
	wLiteralAddNum( "wxLANGUAGE_QUECHUA", wxLANGUAGE_QUECHUA );
	wLiteralAddNum( "wxLANGUAGE_RHAETO_ROMANCE", wxLANGUAGE_RHAETO_ROMANCE );
	wLiteralAddNum( "wxLANGUAGE_ROMANIAN", wxLANGUAGE_ROMANIAN );
	wLiteralAddNum( "wxLANGUAGE_RUSSIAN", wxLANGUAGE_RUSSIAN );
	wLiteralAddNum( "wxLANGUAGE_RUSSIAN_UKRAINE", wxLANGUAGE_RUSSIAN_UKRAINE );
	wLiteralAddNum( "wxLANGUAGE_SAMOAN", wxLANGUAGE_SAMOAN );
	wLiteralAddNum( "wxLANGUAGE_SANGHO", wxLANGUAGE_SANGHO );
	wLiteralAddNum( "wxLANGUAGE_SANSKRIT", wxLANGUAGE_SANSKRIT );
	wLiteralAddNum( "wxLANGUAGE_SCOTS_GAELIC", wxLANGUAGE_SCOTS_GAELIC );
	wLiteralAddNum( "wxLANGUAGE_SERBIAN", wxLANGUAGE_SERBIAN );
	wLiteralAddNum( "wxLANGUAGE_SERBIAN_CYRILLIC", wxLANGUAGE_SERBIAN_CYRILLIC );
	wLiteralAddNum( "wxLANGUAGE_SERBIAN_LATIN", wxLANGUAGE_SERBIAN_LATIN );
	wLiteralAddNum( "wxLANGUAGE_SERBO_CROATIAN", wxLANGUAGE_SERBO_CROATIAN );
	wLiteralAddNum( "wxLANGUAGE_SESOTHO", wxLANGUAGE_SESOTHO );
	wLiteralAddNum( "wxLANGUAGE_SETSWANA", wxLANGUAGE_SETSWANA );
	wLiteralAddNum( "wxLANGUAGE_SHONA", wxLANGUAGE_SHONA );
	wLiteralAddNum( "wxLANGUAGE_SINDHI", wxLANGUAGE_SINDHI );
	wLiteralAddNum( "wxLANGUAGE_SINHALESE", wxLANGUAGE_SINHALESE );
	wLiteralAddNum( "wxLANGUAGE_SISWATI", wxLANGUAGE_SISWATI );
	wLiteralAddNum( "wxLANGUAGE_SLOVAK", wxLANGUAGE_SLOVAK );
	wLiteralAddNum( "wxLANGUAGE_SLOVENIAN", wxLANGUAGE_SLOVENIAN );
	wLiteralAddNum( "wxLANGUAGE_SOMALI", wxLANGUAGE_SOMALI );
	wLiteralAddNum( "wxLANGUAGE_SPANISH", wxLANGUAGE_SPANISH );
	wLiteralAddNum( "wxLANGUAGE_SPANISH_ARGENTINA", wxLANGUAGE_SPANISH_ARGENTINA );
	wLiteralAddNum( "wxLANGUAGE_SPANISH_BOLIVIA", wxLANGUAGE_SPANISH_BOLIVIA );
	wLiteralAddNum( "wxLANGUAGE_SPANISH_CHILE", wxLANGUAGE_SPANISH_CHILE );
	wLiteralAddNum( "wxLANGUAGE_SPANISH_COLOMBIA", wxLANGUAGE_SPANISH_COLOMBIA );
	wLiteralAddNum( "wxLANGUAGE_SPANISH_COSTA_RICA", wxLANGUAGE_SPANISH_COSTA_RICA );
	wLiteralAddNum( "wxLANGUAGE_SPANISH_DOMINICAN_REPUBLIC", wxLANGUAGE_SPANISH_DOMINICAN_REPUBLIC );
	wLiteralAddNum( "wxLANGUAGE_SPANISH_ECUADOR", wxLANGUAGE_SPANISH_ECUADOR );
	wLiteralAddNum( "wxLANGUAGE_SPANISH_EL_SALVADOR", wxLANGUAGE_SPANISH_EL_SALVADOR );
	wLiteralAddNum( "wxLANGUAGE_SPANISH_GUATEMALA", wxLANGUAGE_SPANISH_GUATEMALA );
	wLiteralAddNum( "wxLANGUAGE_SPANISH_HONDURAS", wxLANGUAGE_SPANISH_HONDURAS );
	wLiteralAddNum( "wxLANGUAGE_SPANISH_MEXICAN", wxLANGUAGE_SPANISH_MEXICAN );
	wLiteralAddNum( "wxLANGUAGE_SPANISH_MODERN", wxLANGUAGE_SPANISH_MODERN );
	wLiteralAddNum( "wxLANGUAGE_SPANISH_NICARAGUA", wxLANGUAGE_SPANISH_NICARAGUA );
	wLiteralAddNum( "wxLANGUAGE_SPANISH_PANAMA", wxLANGUAGE_SPANISH_PANAMA );
	wLiteralAddNum( "wxLANGUAGE_SPANISH_PARAGUAY", wxLANGUAGE_SPANISH_PARAGUAY );
	wLiteralAddNum( "wxLANGUAGE_SPANISH_PERU", wxLANGUAGE_SPANISH_PERU );
	wLiteralAddNum( "wxLANGUAGE_SPANISH_PUERTO_RICO", wxLANGUAGE_SPANISH_PUERTO_RICO );
	wLiteralAddNum( "wxLANGUAGE_SPANISH_URUGUAY", wxLANGUAGE_SPANISH_URUGUAY );
	wLiteralAddNum( "wxLANGUAGE_SPANISH_US", wxLANGUAGE_SPANISH_US );
	wLiteralAddNum( "wxLANGUAGE_SPANISH_VENEZUELA", wxLANGUAGE_SPANISH_VENEZUELA );
	wLiteralAddNum( "wxLANGUAGE_SUNDANESE", wxLANGUAGE_SUNDANESE );
	wLiteralAddNum( "wxLANGUAGE_SWAHILI", wxLANGUAGE_SWAHILI );
	wLiteralAddNum( "wxLANGUAGE_SWEDISH", wxLANGUAGE_SWEDISH );
	wLiteralAddNum( "wxLANGUAGE_SWEDISH_FINLAND", wxLANGUAGE_SWEDISH_FINLAND );
	wLiteralAddNum( "wxLANGUAGE_TAGALOG", wxLANGUAGE_TAGALOG );
	wLiteralAddNum( "wxLANGUAGE_TAJIK", wxLANGUAGE_TAJIK );
	wLiteralAddNum( "wxLANGUAGE_TAMIL", wxLANGUAGE_TAMIL );
	wLiteralAddNum( "wxLANGUAGE_TATAR", wxLANGUAGE_TATAR );
	wLiteralAddNum( "wxLANGUAGE_TELUGU", wxLANGUAGE_TELUGU );
	wLiteralAddNum( "wxLANGUAGE_THAI", wxLANGUAGE_THAI );
	wLiteralAddNum( "wxLANGUAGE_TIBETAN", wxLANGUAGE_TIBETAN );
	wLiteralAddNum( "wxLANGUAGE_TIGRINYA", wxLANGUAGE_TIGRINYA );
	wLiteralAddNum( "wxLANGUAGE_TONGA", wxLANGUAGE_TONGA );
	wLiteralAddNum( "wxLANGUAGE_TSONGA", wxLANGUAGE_TSONGA );
	wLiteralAddNum( "wxLANGUAGE_TURKISH", wxLANGUAGE_TURKISH );
	wLiteralAddNum( "wxLANGUAGE_TURKMEN", wxLANGUAGE_TURKMEN );
	wLiteralAddNum( "wxLANGUAGE_TWI", wxLANGUAGE_TWI );
	wLiteralAddNum( "wxLANGUAGE_UIGHUR", wxLANGUAGE_UIGHUR );
	wLiteralAddNum( "wxLANGUAGE_UKRAINIAN", wxLANGUAGE_UKRAINIAN );
	wLiteralAddNum( "wxLANGUAGE_URDU", wxLANGUAGE_URDU );
	wLiteralAddNum( "wxLANGUAGE_URDU_INDIA", wxLANGUAGE_URDU_INDIA );
	wLiteralAddNum( "wxLANGUAGE_URDU_PAKISTAN", wxLANGUAGE_URDU_PAKISTAN );
	wLiteralAddNum( "wxLANGUAGE_UZBEK", wxLANGUAGE_UZBEK );
	wLiteralAddNum( "wxLANGUAGE_UZBEK_CYRILLIC", wxLANGUAGE_UZBEK_CYRILLIC );
	wLiteralAddNum( "wxLANGUAGE_UZBEK_LATIN", wxLANGUAGE_UZBEK_LATIN );
	wLiteralAddNum( "wxLANGUAGE_VIETNAMESE", wxLANGUAGE_VIETNAMESE );
	wLiteralAddNum( "wxLANGUAGE_VOLAPUK", wxLANGUAGE_VOLAPUK );
	wLiteralAddNum( "wxLANGUAGE_WELSH", wxLANGUAGE_WELSH );
	wLiteralAddNum( "wxLANGUAGE_WOLOF", wxLANGUAGE_WOLOF );
	wLiteralAddNum( "wxLANGUAGE_XHOSA", wxLANGUAGE_XHOSA );
	wLiteralAddNum( "wxLANGUAGE_YIDDISH", wxLANGUAGE_YIDDISH );
	wLiteralAddNum( "wxLANGUAGE_YORUBA", wxLANGUAGE_YORUBA );
	wLiteralAddNum( "wxLANGUAGE_ZHUANG", wxLANGUAGE_ZHUANG );
	wLiteralAddNum( "wxLANGUAGE_ZULU", wxLANGUAGE_ZULU );
	wLiteralAddNum( "wxDF_INVALID", wxDF_INVALID );
	wLiteralAddNum( "wxDF_TEXT", wxDF_TEXT );
	wLiteralAddNum( "wxDF_BITMAP", wxDF_BITMAP );
	wLiteralAddNum( "wxDF_METAFILE", wxDF_METAFILE );
	wLiteralAddNum( "wxDF_SYLK", wxDF_SYLK );
	wLiteralAddNum( "wxDF_DIF", wxDF_DIF );
	wLiteralAddNum( "wxDF_TIFF", wxDF_TIFF );
	wLiteralAddNum( "wxDF_OEMTEXT", wxDF_OEMTEXT );
	wLiteralAddNum( "wxDF_DIB", wxDF_DIB );
	wLiteralAddNum( "wxDF_PALETTE", wxDF_PALETTE );
	wLiteralAddNum( "wxDF_PENDATA", wxDF_PENDATA );
	wLiteralAddNum( "wxDF_RIFF", wxDF_RIFF );
	wLiteralAddNum( "wxDF_WAVE", wxDF_WAVE );
	wLiteralAddNum( "wxDF_UNICODETEXT", wxDF_UNICODETEXT );
	wLiteralAddNum( "wxDF_ENHMETAFILE", wxDF_ENHMETAFILE );
	wLiteralAddNum( "wxDF_FILENAME", wxDF_FILENAME );
	wLiteralAddNum( "wxDF_LOCALE", wxDF_LOCALE );
	wLiteralAddNum( "wxDF_PRIVATE", wxDF_PRIVATE );
	wLiteralAddNum( "wxDF_MAX", wxDF_MAX );
	wLiteralAddPtr( "__wxDefaultPosition", _wxPoint, (void *)__wxDefaultPosition );
	wLiteralAddPtr( "wxDefaultPosition", _wxPoint, (void *)__wxDefaultPosition );
	wLiteralAddPtr( "__wxDefaultSize", _wxSize, (void *)__wxDefaultSize );
	wLiteralAddPtr( "wxDefaultSize", _wxSize, (void *)__wxDefaultSize );
	wLiteralAddPtr( "wxBLACK", _wxColour, (void *)wxBLACK );
	wLiteralAddPtr( "wxWHITE", _wxColour, (void *)wxWHITE );
	wLiteralAddPtr( "wxRED", _wxColour, (void *)wxRED );
	wLiteralAddPtr( "wxBLUE", _wxColour, (void *)wxBLUE );
	wLiteralAddPtr( "wxGREEN", _wxColour, (void *)wxGREEN );
	wLiteralAddPtr( "wxCYAN", _wxColour, (void *)wxCYAN );
	wLiteralAddPtr( "wxLIGHT_GREY", _wxColour, (void *)wxLIGHT_GREY );
	wLiteralAddPtr( "wxNullColour", _wxColour, (void *) new wxColour(wxNullColour));
	wLiteralAddPtr( "wxRED_PEN", _wxPen, (void *)wxRED_PEN );
	wLiteralAddPtr( "wxCYAN_PEN", _wxPen, (void *)wxCYAN_PEN );
	wLiteralAddPtr( "wxGREEN_PEN", _wxPen, (void *)wxGREEN_PEN );
	wLiteralAddPtr( "wxBLACK_PEN", _wxPen, (void *)wxBLACK_PEN );
	wLiteralAddPtr( "wxWHITE_PEN", _wxPen, (void *)wxWHITE_PEN );
	wLiteralAddPtr( "wxTRANSPARENT_PEN", _wxPen, (void *)wxTRANSPARENT_PEN );
	wLiteralAddPtr( "wxBLACK_DASHED_PEN", _wxPen, (void *)wxBLACK_DASHED_PEN );
	wLiteralAddPtr( "wxGREY_PEN", _wxPen, (void *)wxGREY_PEN );
	wLiteralAddPtr( "wxMEDIUM_GREY_PEN", _wxPen, (void *)wxMEDIUM_GREY_PEN );
	wLiteralAddPtr( "wxLIGHT_GREY_PEN", _wxPen, (void *)wxLIGHT_GREY_PEN );
	wLiteralAddPtr( "wxNullPen", _wxPen, (void *) new wxPen(wxNullPen));
	wLiteralAddNum( "wxSOLID", wxSOLID );
	wLiteralAddNum( "wxDOT", wxDOT );
	wLiteralAddNum( "wxLONG_DASH", wxLONG_DASH );
	wLiteralAddNum( "wxSHORT_DASH", wxSHORT_DASH );
	wLiteralAddNum( "wxDOT_DASH", wxDOT_DASH );
	wLiteralAddNum( "wxUSER_DASH", wxUSER_DASH );
	wLiteralAddNum( "wxTRANSPARENT", wxTRANSPARENT );
	wLiteralAddNum( "wxSTIPPLE", wxSTIPPLE );
	wLiteralAddNum( "wxBDIAGONAL_HATCH", wxBDIAGONAL_HATCH );
	wLiteralAddNum( "wxCROSSDIAG_HATCH", wxCROSSDIAG_HATCH );
	wLiteralAddNum( "wxFDIAGONAL_HATCH", wxFDIAGONAL_HATCH );
	wLiteralAddNum( "wxCROSS_HATCH", wxCROSS_HATCH );
	wLiteralAddNum( "wxHORIZONTAL_HATCH", wxHORIZONTAL_HATCH );
	wLiteralAddNum( "wxVERTICAL_HATCH", wxVERTICAL_HATCH );
	wLiteralAddNum( "wxJOIN_BEVEL", wxJOIN_BEVEL );
	wLiteralAddNum( "wxJOIN_MITER", wxJOIN_MITER );
	wLiteralAddNum( "wxJOIN_ROUND", wxJOIN_ROUND );
	wLiteralAddNum( "wxCAP_ROUND", wxCAP_ROUND );
	wLiteralAddNum( "wxCAP_PROJECTING", wxCAP_PROJECTING );
	wLiteralAddNum( "wxCAP_BUTT", wxCAP_BUTT );
	wLiteralAddPtr( "wxBLUE_BRUSH", _wxBrush, (void *)wxBLUE_BRUSH );
	wLiteralAddPtr( "wxGREEN_BRUSH", _wxBrush, (void *)wxGREEN_BRUSH );
	wLiteralAddPtr( "wxWHITE_BRUSH", _wxBrush, (void *)wxWHITE_BRUSH );
	wLiteralAddPtr( "wxBLACK_BRUSH", _wxBrush, (void *)wxBLACK_BRUSH );
	wLiteralAddPtr( "wxTRANSPARENT_BRUSH", _wxBrush, (void *)wxTRANSPARENT_BRUSH );
	wLiteralAddPtr( "wxCYAN_BRUSH", _wxBrush, (void *)wxCYAN_BRUSH );
	wLiteralAddPtr( "wxRED_BRUSH", _wxBrush, (void *)wxRED_BRUSH );
	wLiteralAddPtr( "wxGREY_BRUSH", _wxBrush, (void *)wxGREY_BRUSH );
	wLiteralAddPtr( "wxMEDIUM_GREY_BRUSH", _wxBrush, (void *)wxMEDIUM_GREY_BRUSH );
	wLiteralAddPtr( "wxLIGHT_GREY_BRUSH", _wxBrush, (void *)wxLIGHT_GREY_BRUSH );
	wLiteralAddPtr( "wxNullBrush", _wxBrush, (void *) new wxBrush(wxNullBrush));
	wLiteralAddNum( "wxCLEAR", wxCLEAR );
	wLiteralAddNum( "wxXOR", wxXOR );
	wLiteralAddNum( "wxINVERT", wxINVERT );
	wLiteralAddNum( "wxOR_REVERSE", wxOR_REVERSE );
	wLiteralAddNum( "wxAND_REVERSE", wxAND_REVERSE );
	wLiteralAddNum( "wxCOPY", wxCOPY );
	wLiteralAddNum( "wxAND", wxAND );
	wLiteralAddNum( "wxAND_INVERT", wxAND_INVERT );
	wLiteralAddNum( "wxNO_OP", wxNO_OP );
	wLiteralAddNum( "wxNOR", wxNOR );
	wLiteralAddNum( "wxEQUIV", wxEQUIV );
	wLiteralAddNum( "wxSRC_INVERT", wxSRC_INVERT );
	wLiteralAddNum( "wxOR_INVERT", wxOR_INVERT );
	wLiteralAddNum( "wxNAND", wxNAND );
	wLiteralAddNum( "wxOR", wxOR );
	wLiteralAddNum( "wxSET", wxSET );
	wLiteralAddNum( "wxPAPER_NONE", wxPAPER_NONE );
	wLiteralAddNum( "wxPAPER_LETTER", wxPAPER_LETTER );
	wLiteralAddNum( "wxPAPER_LEGAL", wxPAPER_LEGAL );
	wLiteralAddNum( "wxPAPER_A4", wxPAPER_A4 );
	wLiteralAddNum( "wxPAPER_CSHEET", wxPAPER_CSHEET );
	wLiteralAddNum( "wxPAPER_DSHEET", wxPAPER_DSHEET );
	wLiteralAddNum( "wxPAPER_ESHEET", wxPAPER_ESHEET );
	wLiteralAddNum( "wxPAPER_LETTERSMALL", wxPAPER_LETTERSMALL );
	wLiteralAddNum( "wxPAPER_TABLOID", wxPAPER_TABLOID );
	wLiteralAddNum( "wxPAPER_LEDGER", wxPAPER_LEDGER );
	wLiteralAddNum( "wxPAPER_STATEMENT", wxPAPER_STATEMENT );
	wLiteralAddNum( "wxPAPER_EXECUTIVE", wxPAPER_EXECUTIVE );
	wLiteralAddNum( "wxPAPER_A3", wxPAPER_A3 );
	wLiteralAddNum( "wxPAPER_A4SMALL", wxPAPER_A4SMALL );
	wLiteralAddNum( "wxPAPER_A5", wxPAPER_A5 );
	wLiteralAddNum( "wxPAPER_B4", wxPAPER_B4 );
	wLiteralAddNum( "wxPAPER_B5", wxPAPER_B5 );
	wLiteralAddNum( "wxPAPER_FOLIO", wxPAPER_FOLIO );
	wLiteralAddNum( "wxPAPER_QUARTO", wxPAPER_QUARTO );
	wLiteralAddNum( "wxPAPER_10X14", wxPAPER_10X14 );
	wLiteralAddNum( "wxPAPER_11X17", wxPAPER_11X17 );
	wLiteralAddNum( "wxPAPER_NOTE", wxPAPER_NOTE );
	wLiteralAddNum( "wxPAPER_ENV_9", wxPAPER_ENV_9 );
	wLiteralAddNum( "wxPAPER_ENV_10", wxPAPER_ENV_10 );
	wLiteralAddNum( "wxPAPER_ENV_11", wxPAPER_ENV_11 );
	wLiteralAddNum( "wxPAPER_ENV_12", wxPAPER_ENV_12 );
	wLiteralAddNum( "wxPAPER_ENV_14", wxPAPER_ENV_14 );
	wLiteralAddNum( "wxPAPER_ENV_DL", wxPAPER_ENV_DL );
	wLiteralAddNum( "wxPAPER_ENV_C5", wxPAPER_ENV_C5 );
	wLiteralAddNum( "wxPAPER_ENV_C3", wxPAPER_ENV_C3 );
	wLiteralAddNum( "wxPAPER_ENV_C4", wxPAPER_ENV_C4 );
	wLiteralAddNum( "wxPAPER_ENV_C6", wxPAPER_ENV_C6 );
	wLiteralAddNum( "wxPAPER_ENV_C65", wxPAPER_ENV_C65 );
	wLiteralAddNum( "wxPAPER_ENV_B4", wxPAPER_ENV_B4 );
	wLiteralAddNum( "wxPAPER_ENV_B5", wxPAPER_ENV_B5 );
	wLiteralAddNum( "wxPAPER_ENV_B6", wxPAPER_ENV_B6 );
	wLiteralAddNum( "wxPAPER_ENV_ITALY", wxPAPER_ENV_ITALY );
	wLiteralAddNum( "wxPAPER_ENV_MONARCH", wxPAPER_ENV_MONARCH );
	wLiteralAddNum( "wxPAPER_ENV_PERSONAL", wxPAPER_ENV_PERSONAL );
	wLiteralAddNum( "wxPAPER_FANFOLD_US", wxPAPER_FANFOLD_US );
	wLiteralAddNum( "wxPAPER_FANFOLD_STD_GERMAN", wxPAPER_FANFOLD_STD_GERMAN );
	wLiteralAddNum( "wxPAPER_FANFOLD_LGL_GERMAN", wxPAPER_FANFOLD_LGL_GERMAN );
	wLiteralAddNum( "wxPAPER_ISO_B4", wxPAPER_ISO_B4 );
	wLiteralAddNum( "wxPAPER_JAPANESE_POSTCARD", wxPAPER_JAPANESE_POSTCARD );
	wLiteralAddNum( "wxPAPER_9X11", wxPAPER_9X11 );
	wLiteralAddNum( "wxPAPER_10X11", wxPAPER_10X11 );
	wLiteralAddNum( "wxPAPER_15X11", wxPAPER_15X11 );
	wLiteralAddNum( "wxPAPER_ENV_INVITE", wxPAPER_ENV_INVITE );
	wLiteralAddNum( "wxPAPER_LETTER_EXTRA", wxPAPER_LETTER_EXTRA );
	wLiteralAddNum( "wxPAPER_LEGAL_EXTRA", wxPAPER_LEGAL_EXTRA );
	wLiteralAddNum( "wxPAPER_TABLOID_EXTRA", wxPAPER_TABLOID_EXTRA );
	wLiteralAddNum( "wxPAPER_A4_EXTRA", wxPAPER_A4_EXTRA );
	wLiteralAddNum( "wxPAPER_LETTER_TRANSVERSE", wxPAPER_LETTER_TRANSVERSE );
	wLiteralAddNum( "wxPAPER_A4_TRANSVERSE", wxPAPER_A4_TRANSVERSE );
	wLiteralAddNum( "wxPAPER_LETTER_EXTRA_TRANSVERSE", wxPAPER_LETTER_EXTRA_TRANSVERSE );
	wLiteralAddNum( "wxPAPER_A_PLUS", wxPAPER_A_PLUS );
	wLiteralAddNum( "wxPAPER_B_PLUS", wxPAPER_B_PLUS );
	wLiteralAddNum( "wxPAPER_LETTER_PLUS", wxPAPER_LETTER_PLUS );
	wLiteralAddNum( "wxPAPER_A4_PLUS", wxPAPER_A4_PLUS );
	wLiteralAddNum( "wxPAPER_A5_TRANSVERSE", wxPAPER_A5_TRANSVERSE );
	wLiteralAddNum( "wxPAPER_B5_TRANSVERSE", wxPAPER_B5_TRANSVERSE );
	wLiteralAddNum( "wxPAPER_A3_EXTRA", wxPAPER_A3_EXTRA );
	wLiteralAddNum( "wxPAPER_A5_EXTRA", wxPAPER_A5_EXTRA );
	wLiteralAddNum( "wxPAPER_B5_EXTRA", wxPAPER_B5_EXTRA );
	wLiteralAddNum( "wxPAPER_A2", wxPAPER_A2 );
	wLiteralAddNum( "wxPAPER_A3_TRANSVERSE", wxPAPER_A3_TRANSVERSE );
	wLiteralAddNum( "wxPAPER_A3_EXTRA_TRANSVERSE", wxPAPER_A3_EXTRA_TRANSVERSE );
	wLiteralAddNum( "wxDUPLEX_SIMPLEX", wxDUPLEX_SIMPLEX );
	wLiteralAddNum( "wxDUPLEX_HORIZONTAL", wxDUPLEX_HORIZONTAL );
	wLiteralAddNum( "wxDUPLEX_VERTICAL", wxDUPLEX_VERTICAL );
	wLiteralAddNum( "wxPRINT_MODE_NONE", wxPRINT_MODE_NONE );
	wLiteralAddNum( "wxPRINT_MODE_PREVIEW", wxPRINT_MODE_PREVIEW );
	wLiteralAddNum( "wxPRINT_MODE_FILE", wxPRINT_MODE_FILE );
	wLiteralAddNum( "wxPRINT_MODE_PRINTER", wxPRINT_MODE_PRINTER );
	wLiteralAddPtr( "wxNullBitmap", _wxBitmap, (void *) new wxBitmap(wxNullBitmap));
	wLiteralAddNum( "wxBITMAP_TYPE_INVALID", wxBITMAP_TYPE_INVALID );
	wLiteralAddNum( "wxBITMAP_TYPE_BMP", wxBITMAP_TYPE_BMP );
	wLiteralAddNum( "wxBITMAP_TYPE_BMP_RESOURCE", wxBITMAP_TYPE_BMP_RESOURCE );
	wLiteralAddNum( "wxBITMAP_TYPE_RESOURCE", wxBITMAP_TYPE_RESOURCE );
	wLiteralAddNum( "wxBITMAP_TYPE_ICO", wxBITMAP_TYPE_ICO );
	wLiteralAddNum( "wxBITMAP_TYPE_ICO_RESOURCE", wxBITMAP_TYPE_ICO_RESOURCE );
	wLiteralAddNum( "wxBITMAP_TYPE_CUR", wxBITMAP_TYPE_CUR );
	wLiteralAddNum( "wxBITMAP_TYPE_CUR_RESOURCE", wxBITMAP_TYPE_CUR_RESOURCE );
	wLiteralAddNum( "wxBITMAP_TYPE_XBM", wxBITMAP_TYPE_XBM );
	wLiteralAddNum( "wxBITMAP_TYPE_XBM_DATA", wxBITMAP_TYPE_XBM_DATA );
	wLiteralAddNum( "wxBITMAP_TYPE_XPM", wxBITMAP_TYPE_XPM );
	wLiteralAddNum( "wxBITMAP_TYPE_XPM_DATA", wxBITMAP_TYPE_XPM_DATA );
	wLiteralAddNum( "wxBITMAP_TYPE_TIF", wxBITMAP_TYPE_TIF );
	wLiteralAddNum( "wxBITMAP_TYPE_TIF_RESOURCE", wxBITMAP_TYPE_TIF_RESOURCE );
	wLiteralAddNum( "wxBITMAP_TYPE_GIF", wxBITMAP_TYPE_GIF );
	wLiteralAddNum( "wxBITMAP_TYPE_GIF_RESOURCE", wxBITMAP_TYPE_GIF_RESOURCE );
	wLiteralAddNum( "wxBITMAP_TYPE_PNG", wxBITMAP_TYPE_PNG );
	wLiteralAddNum( "wxBITMAP_TYPE_PNG_RESOURCE", wxBITMAP_TYPE_PNG_RESOURCE );
	wLiteralAddNum( "wxBITMAP_TYPE_JPEG", wxBITMAP_TYPE_JPEG );
	wLiteralAddNum( "wxBITMAP_TYPE_JPEG_RESOURCE", wxBITMAP_TYPE_JPEG_RESOURCE );
	wLiteralAddNum( "wxBITMAP_TYPE_PNM", wxBITMAP_TYPE_PNM );
	wLiteralAddNum( "wxBITMAP_TYPE_PNM_RESOURCE", wxBITMAP_TYPE_PNM_RESOURCE );
	wLiteralAddNum( "wxBITMAP_TYPE_PCX", wxBITMAP_TYPE_PCX );
	wLiteralAddNum( "wxBITMAP_TYPE_PCX_RESOURCE", wxBITMAP_TYPE_PCX_RESOURCE );
	wLiteralAddNum( "wxBITMAP_TYPE_PICT", wxBITMAP_TYPE_PICT );
	wLiteralAddNum( "wxBITMAP_TYPE_PICT_RESOURCE", wxBITMAP_TYPE_PICT_RESOURCE );
	wLiteralAddNum( "wxBITMAP_TYPE_ICON", wxBITMAP_TYPE_ICON );
	wLiteralAddNum( "wxBITMAP_TYPE_ICON_RESOURCE", wxBITMAP_TYPE_ICON_RESOURCE );
	wLiteralAddNum( "wxBITMAP_TYPE_MACCURSOR", wxBITMAP_TYPE_MACCURSOR );
	wLiteralAddNum( "wxBITMAP_TYPE_MACCURSOR_RESOURCE", wxBITMAP_TYPE_MACCURSOR_RESOURCE );
	wLiteralAddNum( "wxBITMAP_TYPE_ANY", wxBITMAP_TYPE_ANY );
	wLiteralAddNum( "wxIMAGELIST_DRAW_NORMAL", wxIMAGELIST_DRAW_NORMAL );
	wLiteralAddNum( "wxIMAGELIST_DRAW_TRANSPARENT", wxIMAGELIST_DRAW_TRANSPARENT );
	wLiteralAddNum( "wxIMAGELIST_DRAW_SELECTED", wxIMAGELIST_DRAW_SELECTED );
	wLiteralAddNum( "wxIMAGELIST_DRAW_FOCUSED", wxIMAGELIST_DRAW_FOCUSED );
	wLiteralAddPtr( "wxSTANDARD_CURSOR", _wxCursor, (void *)wxSTANDARD_CURSOR );
	wLiteralAddPtr( "wxHOURGLASS_CURSOR", _wxCursor, (void *)wxHOURGLASS_CURSOR );
	wLiteralAddPtr( "wxCROSS_CURSOR", _wxCursor, (void *)wxCROSS_CURSOR );
	wLiteralAddPtr( "wxNullCursor", _wxCursor, (void *) new wxCursor(wxNullCursor));
	wLiteralAddNum( "wxCURSOR_NONE", wxCURSOR_NONE );
	wLiteralAddNum( "wxCURSOR_ARROW", wxCURSOR_ARROW );
	wLiteralAddNum( "wxCURSOR_BULLSEYE", wxCURSOR_BULLSEYE );
	wLiteralAddNum( "wxCURSOR_CHAR", wxCURSOR_CHAR );
	wLiteralAddNum( "wxCURSOR_CROSS", wxCURSOR_CROSS );
	wLiteralAddNum( "wxCURSOR_HAND", wxCURSOR_HAND );
	wLiteralAddNum( "wxCURSOR_IBEAM", wxCURSOR_IBEAM );
	wLiteralAddNum( "wxCURSOR_LEFT_BUTTON", wxCURSOR_LEFT_BUTTON );
	wLiteralAddNum( "wxCURSOR_MAGNIFIER", wxCURSOR_MAGNIFIER );
	wLiteralAddNum( "wxCURSOR_MIDDLE_BUTTON", wxCURSOR_MIDDLE_BUTTON );
	wLiteralAddNum( "wxCURSOR_NO_ENTRY", wxCURSOR_NO_ENTRY );
	wLiteralAddNum( "wxCURSOR_PAINT_BRUSH", wxCURSOR_PAINT_BRUSH );
	wLiteralAddNum( "wxCURSOR_PENCIL", wxCURSOR_PENCIL );
	wLiteralAddNum( "wxCURSOR_POINT_LEFT", wxCURSOR_POINT_LEFT );
	wLiteralAddNum( "wxCURSOR_POINT_RIGHT", wxCURSOR_POINT_RIGHT );
	wLiteralAddNum( "wxCURSOR_QUESTION_ARROW", wxCURSOR_QUESTION_ARROW );
	wLiteralAddNum( "wxCURSOR_RIGHT_BUTTON", wxCURSOR_RIGHT_BUTTON );
	wLiteralAddNum( "wxCURSOR_SIZENESW", wxCURSOR_SIZENESW );
	wLiteralAddNum( "wxCURSOR_SIZENS", wxCURSOR_SIZENS );
	wLiteralAddNum( "wxCURSOR_SIZENWSE", wxCURSOR_SIZENWSE );
	wLiteralAddNum( "wxCURSOR_SIZEWE", wxCURSOR_SIZEWE );
	wLiteralAddNum( "wxCURSOR_SIZING", wxCURSOR_SIZING );
	wLiteralAddNum( "wxCURSOR_SPRAYCAN", wxCURSOR_SPRAYCAN );
	wLiteralAddNum( "wxCURSOR_WAIT", wxCURSOR_WAIT );
	wLiteralAddNum( "wxCURSOR_WATCH", wxCURSOR_WATCH );
	wLiteralAddNum( "wxCURSOR_BLANK", wxCURSOR_BLANK );
	wLiteralAddNum( "wxCURSOR_ARROWWAIT", wxCURSOR_ARROWWAIT );
	wLiteralAddNum( "wxCURSOR_MAX", wxCURSOR_MAX );
	wLiteralAddNum( "wxCENTRE_ON_SCREEN", wxCENTRE_ON_SCREEN );
	wLiteralAddNum( "wxCENTER_ON_SCREEN", wxCENTRE_ON_SCREEN );
	wLiteralAddNum( "wxVSCROLL", wxVSCROLL );
	wLiteralAddNum( "wxHSCROLL", wxHSCROLL );
	wLiteralAddNum( "wxCAPTION", wxCAPTION );
	wLiteralAddNum( "wxDOUBLE_BORDER", wxDOUBLE_BORDER );
	wLiteralAddNum( "wxSUNKEN_BORDER", wxSUNKEN_BORDER );
	wLiteralAddNum( "wxRAISED_BORDER", wxRAISED_BORDER );
	wLiteralAddNum( "wxBORDER", wxBORDER );
	wLiteralAddNum( "wxSIMPLE_BORDER", wxSIMPLE_BORDER );
	wLiteralAddNum( "wxSTATIC_BORDER", wxSTATIC_BORDER );
	wLiteralAddNum( "wxTRANSPARENT_WINDOW", wxTRANSPARENT_WINDOW );
	wLiteralAddNum( "wxNO_BORDER", wxNO_BORDER );
	wLiteralAddNum( "wxUSER_COLOURS", wxUSER_COLOURS );
	wLiteralAddNum( "wxUSER_COLORS", wxUSER_COLOURS );
	wLiteralAddNum( "wxNO_3D", wxNO_3D );
	wLiteralAddNum( "wxCLIP_CHILDREN", wxCLIP_CHILDREN );
	wLiteralAddNum( "wxCLIP_SIBLINGS", wxCLIP_SIBLINGS );
	wLiteralAddNum( "wxTAB_TRAVERSAL", wxTAB_TRAVERSAL );
	wLiteralAddNum( "wxWANTS_CHARS", wxWANTS_CHARS );
	wLiteralAddNum( "wxRETAINED", wxRETAINED );
	wLiteralAddNum( "wxBACKINGSTORE", wxBACKINGSTORE );
	wLiteralAddNum( "wxNO_FULL_REPAINT_ON_RESIZE", wxNO_FULL_REPAINT_ON_RESIZE );
	wLiteralAddNum( "wxWS_EX_VALIDATE_RECURSIVELY", wxWS_EX_VALIDATE_RECURSIVELY );
	wLiteralAddNum( "wxSTAY_ON_TOP", wxSTAY_ON_TOP );
	wLiteralAddNum( "wxICONIZE", wxICONIZE );
	wLiteralAddNum( "wxMINIMIZE", wxMINIMIZE );
	wLiteralAddNum( "wxMAXIMIZE", wxMAXIMIZE );
	wLiteralAddNum( "wxSYSTEM_MENU", wxSYSTEM_MENU );
	wLiteralAddNum( "wxMINIMIZE_BOX", wxMINIMIZE_BOX );
	wLiteralAddNum( "wxMAXIMIZE_BOX", wxMAXIMIZE_BOX );
	wLiteralAddNum( "wxTINY_CAPTION_HORIZ", wxTINY_CAPTION_HORIZ );
	wLiteralAddNum( "wxTINY_CAPTION_VERT", wxTINY_CAPTION_VERT );
	wLiteralAddNum( "wxRESIZE_BORDER", wxRESIZE_BORDER );
	wLiteralAddNum( "wxDIALOG_NO_PARENT", wxDIALOG_NO_PARENT );
	wLiteralAddNum( "wxFRAME_NO_TASKBAR", wxFRAME_NO_TASKBAR );
	wLiteralAddNum( "wxFRAME_TOOL_WINDOW", wxFRAME_TOOL_WINDOW );
	wLiteralAddNum( "wxRESIZE_BOX", wxRESIZE_BOX );
	wLiteralAddNum( "wxTHICK_FRAME", wxTHICK_FRAME );
	wLiteralAddNum( "wxDIALOG_MODAL", wxDIALOG_MODAL );
	wLiteralAddNum( "wxDIALOG_MODELESS", wxDIALOG_MODELESS );
	wLiteralAddNum( "wxFRAME_FLOAT_ON_PARENT", wxFRAME_FLOAT_ON_PARENT );
	wLiteralAddNum( "wxFRAME_EX_CONTEXTHELP", wxFRAME_EX_CONTEXTHELP );
	wLiteralAddNum( "wxDIALOG_EX_CONTEXTHELP", wxDIALOG_EX_CONTEXTHELP );
	wLiteralAddNum( "wxFRAME_NO_WINDOW_MENU", wxFRAME_NO_WINDOW_MENU );
	wLiteralAddNum( "wxDEFAULT_FRAME_STYLE", wxDEFAULT_FRAME_STYLE );
	wLiteralAddNum( "wxDEFAULT_DIALOG_STYLE", wxDEFAULT_DIALOG_STYLE );
	wLiteralAddNum( "wxFR_DOWN", wxFR_DOWN );
	wLiteralAddNum( "wxFR_WHOLEWORD", wxFR_WHOLEWORD );
	wLiteralAddNum( "wxFR_MATCHCASE", wxFR_MATCHCASE );
	wLiteralAddNum( "wxFR_REPLACEDIALOG", wxFR_REPLACEDIALOG );
	wLiteralAddNum( "wxFR_NOUPDOWN", wxFR_NOUPDOWN );
	wLiteralAddNum( "wxFR_NOMATCHCASE", wxFR_NOMATCHCASE );
	wLiteralAddNum( "wxFR_NOWHOLEWORD", wxFR_NOWHOLEWORD );
	wLiteralAddNum( "wxEVT_COMMAND_FIND", wxEVT_COMMAND_FIND );
	wLiteralAddNum( "wxEVT_COMMAND_FIND_NEXT", wxEVT_COMMAND_FIND_NEXT );
	wLiteralAddNum( "wxEVT_COMMAND_FIND_REPLACE", wxEVT_COMMAND_FIND_REPLACE );
	wLiteralAddNum( "wxEVT_COMMAND_FIND_REPLACE_ALL", wxEVT_COMMAND_FIND_REPLACE_ALL );
	wLiteralAddNum( "wxEVT_COMMAND_FIND_CLOSE", wxEVT_COMMAND_FIND_CLOSE );
	wLiteralAddNum( "wxHTML_URL_PAGE", wxHTML_URL_PAGE );
	wLiteralAddNum( "wxHTML_URL_IMAGE", wxHTML_URL_IMAGE );
	wLiteralAddNum( "wxHTML_URL_OTHER", wxHTML_URL_OTHER );
	wLiteralAddNum( "wxHTML_OPEN", wxHTML_OPEN );
	wLiteralAddNum( "wxHTML_BLOCK", wxHTML_BLOCK );
	wLiteralAddNum( "wxHTML_REDIRECT", wxHTML_REDIRECT );
	wLiteralAddNum( "wxTZ_Local", wxDateTime::Local );
	wLiteralAddNum( "wxTZ_GTM_1", wxDateTime::GMT_1 );
	wLiteralAddNum( "wxTZ_GTM_2", wxDateTime::GMT_2 );
	wLiteralAddNum( "wxTZ_GTM_3", wxDateTime::GMT_3 );
	wLiteralAddNum( "wxTZ_GTM_4", wxDateTime::GMT_4 );
	wLiteralAddNum( "wxTZ_GTM_5", wxDateTime::GMT_5 );
	wLiteralAddNum( "wxTZ_GTM_6", wxDateTime::GMT_6 );
	wLiteralAddNum( "wxTZ_GTM_7", wxDateTime::GMT_7 );
	wLiteralAddNum( "wxTZ_GTM_8", wxDateTime::GMT_8 );
	wLiteralAddNum( "wxTZ_GTM_9", wxDateTime::GMT_9 );
	wLiteralAddNum( "wxTZ_GTM_10", wxDateTime::GMT_10 );
	wLiteralAddNum( "wxTZ_GTM_11", wxDateTime::GMT_11 );
	wLiteralAddNum( "wxTZ_GTM_12", wxDateTime::GMT_12 );
	wLiteralAddNum( "wxTZ_GTM0", wxDateTime::GMT0 );
	wLiteralAddNum( "wxTZ_GTM1", wxDateTime::GMT1 );
	wLiteralAddNum( "wxTZ_GTM2", wxDateTime::GMT2 );
	wLiteralAddNum( "wxTZ_GTM3", wxDateTime::GMT3 );
	wLiteralAddNum( "wxTZ_GTM4", wxDateTime::GMT4 );
	wLiteralAddNum( "wxTZ_GTM5", wxDateTime::GMT5 );
	wLiteralAddNum( "wxTZ_GTM6", wxDateTime::GMT6 );
	wLiteralAddNum( "wxTZ_GTM7", wxDateTime::GMT7 );
	wLiteralAddNum( "wxTZ_GTM8", wxDateTime::GMT8 );
	wLiteralAddNum( "wxTZ_GTM9", wxDateTime::GMT9 );
	wLiteralAddNum( "wxTZ_GTM10", wxDateTime::GMT10 );
	wLiteralAddNum( "wxTZ_GTM11", wxDateTime::GMT11 );
	wLiteralAddNum( "wxTZ_GTM12", wxDateTime::GMT12 );
	wLiteralAddNum( "wxTZ_WET", wxDateTime::WET );
	wLiteralAddNum( "wxTZ_WESTT", wxDateTime::WEST );
	wLiteralAddNum( "wxTZ_CET", wxDateTime::CET );
	wLiteralAddNum( "wxTZ_CEST", wxDateTime::CEST );
	wLiteralAddNum( "wxTZ_EET", wxDateTime::EET );
	wLiteralAddNum( "wxTZ_EEST", wxDateTime::EEST );
	wLiteralAddNum( "wxTZ_MSK", wxDateTime::MSK );
	wLiteralAddNum( "wxTZ_MSD", wxDateTime::MSD );
	wLiteralAddNum( "wxTZ_AST", wxDateTime::AST );
	wLiteralAddNum( "wxTZ_ADT", wxDateTime::ADT );
	wLiteralAddNum( "wxTZ_EST", wxDateTime::EST );
	wLiteralAddNum( "wxTZ_EDT", wxDateTime::EDT );
	wLiteralAddNum( "wxTZ_CST", wxDateTime::CST );
	wLiteralAddNum( "wxTZ_CDT", wxDateTime::CDT );
	wLiteralAddNum( "wxTZ_MST", wxDateTime::MST );
	wLiteralAddNum( "wxTZ_MDTT", wxDateTime::MDT );
	wLiteralAddNum( "wxTZ_PST", wxDateTime::PST );
	wLiteralAddNum( "wxTZ_PDT", wxDateTime::PDT );
	wLiteralAddNum( "wxTZ_HST", wxDateTime::HST );
	wLiteralAddNum( "wxTZ_SKST", wxDateTime::AKST );
	wLiteralAddNum( "wxTZ_AKDT", wxDateTime::AKST );
	wLiteralAddNum( "wxTZ_A_WST", wxDateTime::A_WST );
	wLiteralAddNum( "wxTZ_A_CST", wxDateTime::A_CST );
	wLiteralAddNum( "wxTZ_A_EST", wxDateTime::A_EST );
	wLiteralAddNum( "wxTZ_A_ESST", wxDateTime::A_ESST );
	wLiteralAddNum( "wxDateTime_Jan", wxDateTime::Jan );
	wLiteralAddNum( "wxDateTime_Feb", wxDateTime::Feb );
	wLiteralAddNum( "wxDateTime_Mar", wxDateTime::Mar );
	wLiteralAddNum( "wxDateTime_Apr", wxDateTime::Apr );
	wLiteralAddNum( "wxDateTime_May", wxDateTime::May );
	wLiteralAddNum( "wxDateTime_Jun", wxDateTime::Jun );
	wLiteralAddNum( "wxDateTime_Jul", wxDateTime::Jul );
	wLiteralAddNum( "wxDateTime_Aug", wxDateTime::Aug );
	wLiteralAddNum( "wxDateTime_Sep", wxDateTime::Sep );
	wLiteralAddNum( "wxDateTime_Oct", wxDateTime::Oct );
	wLiteralAddNum( "wxDateTime_Nov", wxDateTime::Nov );
	wLiteralAddNum( "wxDateTime_Dec", wxDateTime::Dec );
	wLiteralAddNum( "wxDateTime_Inv_Month", wxDateTime::Inv_Month );
	wLiteralAddNum( "wxDateTime_Sun", wxDateTime::Sun );
	wLiteralAddNum( "wxDateTime_Mon", wxDateTime::Mon );
	wLiteralAddNum( "wxDateTime_Tue", wxDateTime::Tue );
	wLiteralAddNum( "wxDateTime_Wed", wxDateTime::Wed );
	wLiteralAddNum( "wxDateTime_Thu", wxDateTime::Thu );
	wLiteralAddNum( "wxDateTime_Fri", wxDateTime::Fri );
	wLiteralAddNum( "wxDateTime_Sat", wxDateTime::Sat );
	wLiteralAddNum( "wxDateTime_Inv_WeekDay", wxDateTime::Inv_WeekDay );
	wLiteralAddNum( "wxDateTime_Inv_Year", wxDateTime::Inv_Year );
	wLiteralAddNum( "wxDateTime_Name_Full", wxDateTime::Name_Full );
	wLiteralAddNum( "wxDateTime_Name_Abbr", wxDateTime::Name_Abbr );
	wLiteralAddNum( "wxDateTime_Gregorian", wxDateTime::Gregorian );
	wLiteralAddNum( "wxDateTime_Julian", wxDateTime::Julian );
	wLiteralAddNum( "wxDateTime_Unknown", wxDateTime::Country_Unknown );
	wLiteralAddNum( "wxDateTime_Default", wxDateTime::Country_Default );
	wLiteralAddNum( "wxDateTime_WesternEurope_Start", wxDateTime::Country_WesternEurope_Start );
	wLiteralAddNum( "wxDateTime_EEC", wxDateTime::Country_EEC );
	wLiteralAddNum( "wxDateTime_France", wxDateTime::France );
	wLiteralAddNum( "wxDateTime_Germany", wxDateTime::Germany );
	wLiteralAddNum( "wxDateTime_UK", wxDateTime::UK );
	wLiteralAddNum( "wxDateTime_Russia", wxDateTime::Russia );
	wLiteralAddNum( "wxDateTime_USA", wxDateTime::USA );
	wLiteralAddNum( "wxDateTime_Default_First", wxDateTime::Default_First );
	wLiteralAddNum( "wxDateTime_Monday_First", wxDateTime::Monday_First );
	wLiteralAddNum( "wxDateTime_Sunday_First", wxDateTime::Monday_First );
	wLiteralAddNum( "wxLIST_MASK_STATE", wxLIST_MASK_STATE );
	wLiteralAddNum( "wxLIST_MASK_TEXT", wxLIST_MASK_TEXT );
	wLiteralAddNum( "wxLIST_MASK_IMAGE", wxLIST_MASK_IMAGE );
	wLiteralAddNum( "wxLIST_MASK_DATA", wxLIST_MASK_DATA );
	wLiteralAddNum( "wxLIST_MASK_WIDTH", wxLIST_MASK_WIDTH );
	wLiteralAddNum( "wxLIST_MASK_FORMAT", wxLIST_MASK_FORMAT );
	wLiteralAddNum( "wxLIST_FORMAT_LEFT", wxLIST_FORMAT_LEFT );
	wLiteralAddNum( "wxLIST_FORMAT_RIGHT", wxLIST_FORMAT_RIGHT );
	wLiteralAddNum( "wxLIST_FORMAT_CENTRE", wxLIST_FORMAT_CENTRE );
	wLiteralAddNum( "wxLIST_FORMAT_CENTER", wxLIST_FORMAT_CENTER );
	wLiteralAddNum( "wxLIST_STATE_FOCUSED", wxLIST_STATE_FOCUSED );
	wLiteralAddNum( "wxLIST_STATE_SELECTED", wxLIST_STATE_SELECTED );
	wLiteralAddNum( "wxTE_PROCESS_ENTER", wxTE_PROCESS_ENTER );
	wLiteralAddNum( "wxTE_PROCESS_TAB", wxTE_PROCESS_TAB );
	wLiteralAddNum( "wxTE_MULTILINE", wxTE_MULTILINE );
	wLiteralAddNum( "wxTE_PASSWORD", wxTE_PASSWORD );
	wLiteralAddNum( "wxTE_READONLY", wxTE_READONLY );
	wLiteralAddNum( "wxTE_RICH", wxTE_RICH );
	wLiteralAddNum( "wxTE_RICH2", wxTE_RICH2 );
	wLiteralAddNum( "wxTE_AUTO_URL", wxTE_AUTO_URL );
	wLiteralAddNum( "wxTE_NOHIDESEL", wxTE_NOHIDESEL );
	wLiteralAddNum( "wxTE_LEFT", wxTE_LEFT );
	wLiteralAddNum( "wxTE_CENTRE", wxTE_CENTRE );
	wLiteralAddNum( "wxTE_CENTER", wxTE_CENTRE );
	wLiteralAddNum( "wxTE_RIGHT", wxTE_RIGHT );
	wLiteralAddNum( "wxTE_DONTWRAP", wxTE_DONTWRAP );
	wLiteralAddNum( "wxTE_LINEWRAP", wxTE_LINEWRAP );
	wLiteralAddNum( "wxTE_WORDWRAP", wxTE_WORDWRAP );
	wLiteralAddNum( "wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED", wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED );
	wLiteralAddNum( "wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGING", wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGING );
	wLiteralAddNum( "wxSASH_DRAG_NONE", wxSASH_DRAG_NONE );
	wLiteralAddNum( "wxSASH_DRAG_DRAGGING", wxSASH_DRAG_DRAGGING );
	wLiteralAddNum( "wxSASH_DRAG_LEFT_DOWN", wxSASH_DRAG_LEFT_DOWN );
	wLiteralAddNum( "wxSASH_TOP", wxSASH_TOP );
	wLiteralAddNum( "wxSASH_RIGHT", wxSASH_RIGHT );
	wLiteralAddNum( "wxSASH_BOTTOM", wxSASH_BOTTOM );
	wLiteralAddNum( "wxSASH_LEFT", wxSASH_LEFT );
	wLiteralAddNum( "wxSASH_NONE", wxSASH_NONE );
	wLiteralAddNum( "wxOPEN", wxOPEN );
	wLiteralAddNum( "wxSAVE", wxSAVE );
	wLiteralAddNum( "wxOVERWRITE_PROMPT", wxOVERWRITE_PROMPT );
	wLiteralAddNum( "wxHIDE_READONLY", wxHIDE_READONLY );
	wLiteralAddNum( "wxFILE_MUST_EXIST", wxFILE_MUST_EXIST );
	wLiteralAddNum( "wxMULTIPLE", wxMULTIPLE );
	wLiteralAddNum( "wxCHANGE_DIR", wxCHANGE_DIR );
	wLiteralAddNum( "wxJOYSTICK1", wxJOYSTICK1 );
	wLiteralAddNum( "wxJOYSTICK2", wxJOYSTICK2 );
	wLiteralAddNum( "wxJOY_BUTTON_ANY", wxJOY_BUTTON_ANY );
	wLiteralAddNum( "wxCENTRE", wxCENTRE );
	wLiteralAddNum( "wxCENTER", wxCENTRE );
	wLiteralAddNum( "wxHORIZONTAL", wxHORIZONTAL );
	wLiteralAddNum( "wxVERTICAL", wxVERTICAL );
	wLiteralAddNum( "wxBOTH", wxBOTH );
	wLiteralAddNum( "wxLEFT", wxLEFT );
	wLiteralAddNum( "wxRIGHT", wxRIGHT );
	wLiteralAddNum( "wxUP", wxUP );
	wLiteralAddNum( "wxDOWN", wxDOWN );
	wLiteralAddNum( "wxTOP", wxTOP );
	wLiteralAddNum( "wxBOTTOM", wxBOTTOM );
	wLiteralAddNum( "wxNORTH", wxNORTH );
	wLiteralAddNum( "wxSOUTH", wxSOUTH );
	wLiteralAddNum( "wxWEST", wxWEST );
	wLiteralAddNum( "wxEAST", wxEAST );
	wLiteralAddNum( "wxALL", wxALL );
	wLiteralAddNum( "wxALIGN_NOT", wxALIGN_NOT );
	wLiteralAddNum( "wxALIGN_CENTRE_HORIZONTAL", wxALIGN_CENTRE_HORIZONTAL );
	wLiteralAddNum( "wxALIGN_CENTER_HORIZONTAL", wxALIGN_CENTRE_HORIZONTAL );
	wLiteralAddNum( "wxALIGN_LEFT", wxALIGN_LEFT );
	wLiteralAddNum( "wxALIGN_TOP", wxALIGN_TOP );
	wLiteralAddNum( "wxALIGN_RIGHT", wxALIGN_RIGHT );
	wLiteralAddNum( "wxALIGN_BOTTOM", wxALIGN_BOTTOM );
	wLiteralAddNum( "wxALIGN_CENTRE_VERTICAL", wxALIGN_CENTRE_VERTICAL );
	wLiteralAddNum( "wxALIGN_CENTER_VERTICAL", wxALIGN_CENTRE_VERTICAL );
	wLiteralAddNum( "wxALIGN_CENTRE", wxALIGN_CENTRE );
	wLiteralAddNum( "wxALIGN_CENTER", wxALIGN_CENTRE );
	wLiteralAddNum( "wxSTRETCH_NOT", wxSTRETCH_NOT );
	wLiteralAddNum( "wxSHRINK", wxSHRINK );
	wLiteralAddNum( "wxGROW", wxGROW );
	wLiteralAddNum( "wxEXPAND", wxEXPAND );
	wLiteralAddNum( "wxSHAPED", wxSHAPED );
	wLiteralAddNum( "wxADJUST_MINSIZE", wxADJUST_MINSIZE );
	wLiteralAddNum( "wxDEFAULT", wxDEFAULT );
	wLiteralAddPtr( "wxNORMAL_FONT", _wxFont, (void *)wxNORMAL_FONT );
	wLiteralAddPtr( "wxSMALL_FONT", _wxFont, (void *)wxSMALL_FONT );
	wLiteralAddPtr( "wxITALIC_FONT", _wxFont, (void *)wxITALIC_FONT );
	wLiteralAddPtr( "wxSWISS_FONT", _wxFont, (void *)wxSWISS_FONT );
	wLiteralAddPtr( "wxNullFont", _wxFont, (void *) new wxFont(wxNullFont));
	wLiteralAddNum( "wxDECORATIVE", wxDECORATIVE );
	wLiteralAddNum( "wxROMAN", wxROMAN );
	wLiteralAddNum( "wxSCRIPT", wxSCRIPT );
	wLiteralAddNum( "wxSWISS", wxSWISS );
	wLiteralAddNum( "wxMODERN", wxMODERN );
	wLiteralAddNum( "wxTELETYPE", wxTELETYPE );
	wLiteralAddNum( "wxVARIABLE", wxVARIABLE );
	wLiteralAddNum( "wxFIXED", wxFIXED );
	wLiteralAddNum( "wxNORMAL", wxNORMAL );
	wLiteralAddNum( "wxLIGHT", wxLIGHT );
	wLiteralAddNum( "wxBOLD", wxBOLD );
	wLiteralAddNum( "wxITALIC", wxITALIC );
	wLiteralAddNum( "wxSLANT", wxSLANT );
	wLiteralAddNum( "wxSTC_INVALID_POSITION", wxSTC_INVALID_POSITION );
	wLiteralAddNum( "wxSTC_START", wxSTC_START );
	wLiteralAddNum( "wxSTC_OPTIONAL_START", wxSTC_OPTIONAL_START );
	wLiteralAddNum( "wxSTC_LEXER_START", wxSTC_LEXER_START );
	wLiteralAddNum( "wxSTC_CMD_REDO", wxSTC_CMD_REDO );
	wLiteralAddNum( "wxSTC_CMD_SELECTALL", wxSTC_CMD_SELECTALL );
	wLiteralAddNum( "wxSTC_WS_INVISIBLE", wxSTC_WS_INVISIBLE );
	wLiteralAddNum( "wxSTC_WS_VISIBLEALWAYS", wxSTC_WS_VISIBLEALWAYS );
	wLiteralAddNum( "wxSTC_WS_VISIBLEAFTERINDENT", wxSTC_WS_VISIBLEAFTERINDENT );
	wLiteralAddNum( "wxSTC_EOL_CRLF", wxSTC_EOL_CRLF );
	wLiteralAddNum( "wxSTC_EOL_CR", wxSTC_EOL_CR );
	wLiteralAddNum( "wxSTC_EOL_LF", wxSTC_EOL_LF );
	wLiteralAddNum( "wxSTC_CP_UTF8", wxSTC_CP_UTF8 );
	wLiteralAddNum( "wxSTC_MARKER_MAX", wxSTC_MARKER_MAX );
	wLiteralAddNum( "wxSTC_MARK_CIRCLE", wxSTC_MARK_CIRCLE );
	wLiteralAddNum( "wxSTC_MARK_ROUNDRECT", wxSTC_MARK_ROUNDRECT );
	wLiteralAddNum( "wxSTC_MARK_ARROW", wxSTC_MARK_ARROW );
	wLiteralAddNum( "wxSTC_MARK_SMALLRECT", wxSTC_MARK_SMALLRECT );
	wLiteralAddNum( "wxSTC_MARK_SHORTARROW", wxSTC_MARK_SHORTARROW );
	wLiteralAddNum( "wxSTC_MARK_EMPTY", wxSTC_MARK_EMPTY );
	wLiteralAddNum( "wxSTC_MARK_ARROWDOWN", wxSTC_MARK_ARROWDOWN );
	wLiteralAddNum( "wxSTC_MARK_MINUS", wxSTC_MARK_MINUS );
	wLiteralAddNum( "wxSTC_MARK_PLUS", wxSTC_MARK_PLUS );
	wLiteralAddNum( "wxSTC_MARK_VLINE", wxSTC_MARK_VLINE );
	wLiteralAddNum( "wxSTC_MARK_LCORNER", wxSTC_MARK_LCORNER );
	wLiteralAddNum( "wxSTC_MARK_TCORNER", wxSTC_MARK_TCORNER );
	wLiteralAddNum( "wxSTC_MARK_BOXPLUS", wxSTC_MARK_BOXPLUS );
	wLiteralAddNum( "wxSTC_MARK_BOXPLUSCONNECTED", wxSTC_MARK_BOXPLUSCONNECTED );
	wLiteralAddNum( "wxSTC_MARK_BOXMINUS", wxSTC_MARK_BOXMINUS );
	wLiteralAddNum( "wxSTC_MARK_BOXMINUSCONNECTED", wxSTC_MARK_BOXMINUSCONNECTED );
	wLiteralAddNum( "wxSTC_MARK_LCORNERCURVE", wxSTC_MARK_LCORNERCURVE );
	wLiteralAddNum( "wxSTC_MARK_TCORNERCURVE", wxSTC_MARK_TCORNERCURVE );
	wLiteralAddNum( "wxSTC_MARK_CIRCLEPLUS", wxSTC_MARK_CIRCLEPLUS );
	wLiteralAddNum( "wxSTC_MARK_CIRCLEPLUSCONNECTED", wxSTC_MARK_CIRCLEPLUSCONNECTED );
	wLiteralAddNum( "wxSTC_MARK_CIRCLEMINUS", wxSTC_MARK_CIRCLEMINUS );
	wLiteralAddNum( "wxSTC_MARK_CIRCLEMINUSCONNECTED", wxSTC_MARK_CIRCLEMINUSCONNECTED );
	wLiteralAddNum( "wxSTC_MARK_CHARACTER", wxSTC_MARK_CHARACTER );
	wLiteralAddNum( "wxSTC_MARKNUM_FOLDEREND", wxSTC_MARKNUM_FOLDEREND );
	wLiteralAddNum( "wxSTC_MARKNUM_FOLDEROPENMID", wxSTC_MARKNUM_FOLDEROPENMID );
	wLiteralAddNum( "wxSTC_MARKNUM_FOLDERMIDTAIL", wxSTC_MARKNUM_FOLDERMIDTAIL );
	wLiteralAddNum( "wxSTC_MARKNUM_FOLDERTAIL", wxSTC_MARKNUM_FOLDERTAIL );
	wLiteralAddNum( "wxSTC_MARKNUM_FOLDERSUB", wxSTC_MARKNUM_FOLDERSUB );
	wLiteralAddNum( "wxSTC_MARKNUM_FOLDER", wxSTC_MARKNUM_FOLDER );
	wLiteralAddNum( "wxSTC_MARKNUM_FOLDEROPEN", wxSTC_MARKNUM_FOLDEROPEN );
	wLiteralAddNum( "wxSTC_MARGIN_SYMBOL", wxSTC_MARGIN_SYMBOL );
	wLiteralAddNum( "wxSTC_MARGIN_NUMBER", wxSTC_MARGIN_NUMBER );
	wLiteralAddNum( "wxSTC_STYLE_DEFAULT", wxSTC_STYLE_DEFAULT );
	wLiteralAddNum( "wxSTC_STYLE_LINENUMBER", wxSTC_STYLE_LINENUMBER );
	wLiteralAddNum( "wxSTC_STYLE_BRACELIGHT", wxSTC_STYLE_BRACELIGHT );
	wLiteralAddNum( "wxSTC_STYLE_BRACEBAD", wxSTC_STYLE_BRACEBAD );
	wLiteralAddNum( "wxSTC_STYLE_CONTROLCHAR", wxSTC_STYLE_CONTROLCHAR );
	wLiteralAddNum( "wxSTC_STYLE_INDENTGUIDE", wxSTC_STYLE_INDENTGUIDE );
	wLiteralAddNum( "wxSTC_STYLE_LASTPREDEFINED", wxSTC_STYLE_LASTPREDEFINED );
	wLiteralAddNum( "wxSTC_STYLE_MAX", wxSTC_STYLE_MAX );
	wLiteralAddNum( "wxSTC_CHARSET_ANSI", wxSTC_CHARSET_ANSI );
	wLiteralAddNum( "wxSTC_CHARSET_DEFAULT", wxSTC_CHARSET_DEFAULT );
	wLiteralAddNum( "wxSTC_CHARSET_BALTIC", wxSTC_CHARSET_BALTIC );
	wLiteralAddNum( "wxSTC_CHARSET_CHINESEBIG5", wxSTC_CHARSET_CHINESEBIG5 );
	wLiteralAddNum( "wxSTC_CHARSET_EASTEUROPE", wxSTC_CHARSET_EASTEUROPE );
	wLiteralAddNum( "wxSTC_CHARSET_GB2312", wxSTC_CHARSET_GB2312 );
	wLiteralAddNum( "wxSTC_CHARSET_GREEK", wxSTC_CHARSET_GREEK );
	wLiteralAddNum( "wxSTC_CHARSET_HANGUL", wxSTC_CHARSET_HANGUL );
	wLiteralAddNum( "wxSTC_CHARSET_MAC", wxSTC_CHARSET_MAC );
	wLiteralAddNum( "wxSTC_CHARSET_OEM", wxSTC_CHARSET_OEM );
	wLiteralAddNum( "wxSTC_CHARSET_RUSSIAN", wxSTC_CHARSET_RUSSIAN );
	wLiteralAddNum( "wxSTC_CHARSET_SHIFTJIS", wxSTC_CHARSET_SHIFTJIS );
	wLiteralAddNum( "wxSTC_CHARSET_SYMBOL", wxSTC_CHARSET_SYMBOL );
	wLiteralAddNum( "wxSTC_CHARSET_TURKISH", wxSTC_CHARSET_TURKISH );
	wLiteralAddNum( "wxSTC_CHARSET_JOHAB", wxSTC_CHARSET_JOHAB );
	wLiteralAddNum( "wxSTC_CHARSET_HEBREW", wxSTC_CHARSET_HEBREW );
	wLiteralAddNum( "wxSTC_CHARSET_ARABIC", wxSTC_CHARSET_ARABIC );
	wLiteralAddNum( "wxSTC_CHARSET_VIETNAMESE", wxSTC_CHARSET_VIETNAMESE );
	wLiteralAddNum( "wxSTC_CHARSET_THAI", wxSTC_CHARSET_THAI );
	wLiteralAddNum( "wxSTC_CASE_MIXED", wxSTC_CASE_MIXED );
	wLiteralAddNum( "wxSTC_CASE_UPPER", wxSTC_CASE_UPPER );
	wLiteralAddNum( "wxSTC_CASE_LOWER", wxSTC_CASE_LOWER );
	wLiteralAddNum( "wxSTC_INDIC_MAX", wxSTC_INDIC_MAX );
	wLiteralAddNum( "wxSTC_INDIC_PLAIN", wxSTC_INDIC_PLAIN );
	wLiteralAddNum( "wxSTC_INDIC_SQUIGGLE", wxSTC_INDIC_SQUIGGLE );
	wLiteralAddNum( "wxSTC_INDIC_TT", wxSTC_INDIC_TT );
	wLiteralAddNum( "wxSTC_INDIC_DIAGONAL", wxSTC_INDIC_DIAGONAL );
	wLiteralAddNum( "wxSTC_INDIC_STRIKE", wxSTC_INDIC_STRIKE );
	wLiteralAddNum( "wxSTC_INDIC0_MASK", wxSTC_INDIC0_MASK );
	wLiteralAddNum( "wxSTC_INDIC1_MASK", wxSTC_INDIC1_MASK );
	wLiteralAddNum( "wxSTC_INDIC2_MASK", wxSTC_INDIC2_MASK );
	wLiteralAddNum( "wxSTC_INDICS_MASK", wxSTC_INDICS_MASK );
	wLiteralAddNum( "wxSTC_PRINT_NORMAL", wxSTC_PRINT_NORMAL );
	wLiteralAddNum( "wxSTC_PRINT_INVERTLIGHT", wxSTC_PRINT_INVERTLIGHT );
	wLiteralAddNum( "wxSTC_PRINT_BLACKONWHITE", wxSTC_PRINT_BLACKONWHITE );
	wLiteralAddNum( "wxSTC_PRINT_COLOURONWHITE", wxSTC_PRINT_COLOURONWHITE );
	wLiteralAddNum( "wxSTC_PRINT_COLORONWHITE", wxSTC_PRINT_COLOURONWHITE );
	wLiteralAddNum( "wxSTC_PRINT_COLOURONWHITEDEFAULTBG", wxSTC_PRINT_COLOURONWHITEDEFAULTBG );
	wLiteralAddNum( "wxSTC_PRINT_COLORONWHITEDEFAULTBG", wxSTC_PRINT_COLOURONWHITEDEFAULTBG );
	wLiteralAddNum( "wxSTC_FIND_WHOLEWORD", wxSTC_FIND_WHOLEWORD );
	wLiteralAddNum( "wxSTC_FIND_MATCHCASE", wxSTC_FIND_MATCHCASE );
	wLiteralAddNum( "wxSTC_FIND_WORDSTART", wxSTC_FIND_WORDSTART );
	wLiteralAddNum( "wxSTC_FIND_REGEXP", wxSTC_FIND_REGEXP );
	wLiteralAddNum( "wxSTC_CMD_UNDO", wxSTC_CMD_UNDO );
	wLiteralAddNum( "wxSTC_CMD_CUT", wxSTC_CMD_CUT );
	wLiteralAddNum( "wxSTC_CMD_COPY", wxSTC_CMD_COPY );
	wLiteralAddNum( "wxSTC_CMD_PASTE", wxSTC_CMD_PASTE );
	wLiteralAddNum( "wxSTC_FOLDLEVELBASE", wxSTC_FOLDLEVELBASE );
	wLiteralAddNum( "wxSTC_FOLDLEVELWHITEFLAG", wxSTC_FOLDLEVELWHITEFLAG );
	wLiteralAddNum( "wxSTC_FOLDLEVELHEADERFLAG", wxSTC_FOLDLEVELHEADERFLAG );
	wLiteralAddNum( "wxSTC_FOLDLEVELNUMBERMASK", wxSTC_FOLDLEVELNUMBERMASK );
	wLiteralAddNum( "wxSTC_TIME_FOREVER", wxSTC_TIME_FOREVER );
	wLiteralAddNum( "wxSTC_CMD_LINEDOWN", wxSTC_CMD_LINEDOWN );
	wLiteralAddNum( "wxSTC_CMD_LINEDOWNEXTEND", wxSTC_CMD_LINEDOWNEXTEND );
	wLiteralAddNum( "wxSTC_CMD_LINEUP", wxSTC_CMD_LINEUP );
	wLiteralAddNum( "wxSTC_CMD_LINEUPEXTEND", wxSTC_CMD_LINEUPEXTEND );
	wLiteralAddNum( "wxSTC_CMD_CHARLEFT", wxSTC_CMD_CHARLEFT );
	wLiteralAddNum( "wxSTC_CMD_CHARLEFTEXTEND", wxSTC_CMD_CHARLEFTEXTEND );
	wLiteralAddNum( "wxSTC_CMD_CHARRIGHT", wxSTC_CMD_CHARRIGHT );
	wLiteralAddNum( "wxSTC_CMD_CHARRIGHTEXTEND", wxSTC_CMD_CHARRIGHTEXTEND );
	wLiteralAddNum( "wxSTC_CMD_WORDLEFT", wxSTC_CMD_WORDLEFT );
	wLiteralAddNum( "wxSTC_CMD_WORDLEFTEXTEND", wxSTC_CMD_WORDLEFTEXTEND );
	wLiteralAddNum( "wxSTC_CMD_WORDRIGHT", wxSTC_CMD_WORDRIGHT );
	wLiteralAddNum( "wxSTC_CMD_WORDRIGHTEXTEND", wxSTC_CMD_WORDRIGHTEXTEND );
	wLiteralAddNum( "wxSTC_CMD_HOME", wxSTC_CMD_HOME );
	wLiteralAddNum( "wxSTC_CMD_HOMEEXTEND", wxSTC_CMD_HOMEEXTEND );
	wLiteralAddNum( "wxSTC_CMD_LINEEND", wxSTC_CMD_LINEEND );
	wLiteralAddNum( "wxSTC_CMD_LINEENDEXTEND", wxSTC_CMD_LINEENDEXTEND );
	wLiteralAddNum( "wxSTC_CMD_DOCUMENTSTART", wxSTC_CMD_DOCUMENTSTART );
	wLiteralAddNum( "wxSTC_CMD_DOCUMENTSTARTEXTEND", wxSTC_CMD_DOCUMENTSTARTEXTEND );
	wLiteralAddNum( "wxSTC_CMD_DOCUMENTEND", wxSTC_CMD_DOCUMENTEND );
	wLiteralAddNum( "wxSTC_CMD_DOCUMENTENDEXTEND", wxSTC_CMD_DOCUMENTENDEXTEND );
	wLiteralAddNum( "wxSTC_CMD_PAGEUP", wxSTC_CMD_PAGEUP );
	wLiteralAddNum( "wxSTC_CMD_PAGEUPEXTEND", wxSTC_CMD_PAGEUPEXTEND );
	wLiteralAddNum( "wxSTC_CMD_PAGEDOWN", wxSTC_CMD_PAGEDOWN );
	wLiteralAddNum( "wxSTC_CMD_PAGEDOWNEXTEND", wxSTC_CMD_PAGEDOWNEXTEND );
	wLiteralAddNum( "wxSTC_CMD_EDITTOGGLEOVERTYPE", wxSTC_CMD_EDITTOGGLEOVERTYPE );
	wLiteralAddNum( "wxSTC_CMD_CANCEL", wxSTC_CMD_CANCEL );
	wLiteralAddNum( "wxSTC_CMD_DELETEBACK", wxSTC_CMD_DELETEBACK );
	wLiteralAddNum( "wxSTC_CMD_TAB", wxSTC_CMD_TAB );
	wLiteralAddNum( "wxSTC_CMD_BACKTAB", wxSTC_CMD_BACKTAB );
	wLiteralAddNum( "wxSTC_CMD_NEWLINE", wxSTC_CMD_NEWLINE );
	wLiteralAddNum( "wxSTC_CMD_FORMFEED", wxSTC_CMD_FORMFEED );
	wLiteralAddNum( "wxSTC_CMD_VCHOME", wxSTC_CMD_VCHOME );
	wLiteralAddNum( "wxSTC_CMD_VCHOMEEXTEND", wxSTC_CMD_VCHOMEEXTEND );
	wLiteralAddNum( "wxSTC_CMD_ZOOMIN", wxSTC_CMD_ZOOMIN );
	wLiteralAddNum( "wxSTC_CMD_ZOOMOUT", wxSTC_CMD_ZOOMOUT );
	wLiteralAddNum( "wxSTC_CMD_DELWORDLEFT", wxSTC_CMD_DELWORDLEFT );
	wLiteralAddNum( "wxSTC_CMD_DELWORDRIGHT", wxSTC_CMD_DELWORDRIGHT );
	wLiteralAddNum( "wxSTC_CMD_LINECUT", wxSTC_CMD_LINECUT );
	wLiteralAddNum( "wxSTC_CMD_LINEDELETE", wxSTC_CMD_LINEDELETE );
	wLiteralAddNum( "wxSTC_CMD_LINETRANSPOSE", wxSTC_CMD_LINETRANSPOSE );
	wLiteralAddNum( "wxSTC_CMD_LOWERCASE", wxSTC_CMD_LOWERCASE );
	wLiteralAddNum( "wxSTC_CMD_UPPERCASE", wxSTC_CMD_UPPERCASE );
	wLiteralAddNum( "wxSTC_CMD_LINESCROLLDOWN", wxSTC_CMD_LINESCROLLDOWN );
	wLiteralAddNum( "wxSTC_CMD_LINESCROLLUP", wxSTC_CMD_LINESCROLLUP );
	wLiteralAddNum( "wxSTC_EDGE_NONE", wxSTC_EDGE_NONE );
	wLiteralAddNum( "wxSTC_EDGE_LINE", wxSTC_EDGE_LINE );
	wLiteralAddNum( "wxSTC_EDGE_BACKGROUND", wxSTC_EDGE_BACKGROUND );
	wLiteralAddNum( "wxSTC_CARET_SLOP", wxSTC_CARET_SLOP );
	wLiteralAddNum( "wxSTC_CARET_STRICT", wxSTC_CARET_STRICT );
	wLiteralAddNum( "wxSTC_CURSORNORMAL", wxSTC_CURSORNORMAL );
	wLiteralAddNum( "wxSTC_CURSORWAIT", wxSTC_CURSORWAIT );
	wLiteralAddNum( "wxSTC_VISIBLE_SLOP", wxSTC_VISIBLE_SLOP );
	wLiteralAddNum( "wxSTC_VISIBLE_STRICT", wxSTC_VISIBLE_STRICT );
	wLiteralAddNum( "wxSTC_MOD_INSERTTEXT", wxSTC_MOD_INSERTTEXT );
	wLiteralAddNum( "wxSTC_MOD_DELETETEXT", wxSTC_MOD_DELETETEXT );
	wLiteralAddNum( "wxSTC_MOD_CHANGESTYLE", wxSTC_MOD_CHANGESTYLE );
	wLiteralAddNum( "wxSTC_MOD_CHANGEFOLD", wxSTC_MOD_CHANGEFOLD );
	wLiteralAddNum( "wxSTC_PERFORMED_USER", wxSTC_PERFORMED_USER );
	wLiteralAddNum( "wxSTC_PERFORMED_UNDO", wxSTC_PERFORMED_UNDO );
	wLiteralAddNum( "wxSTC_PERFORMED_REDO", wxSTC_PERFORMED_REDO );
	wLiteralAddNum( "wxSTC_LASTSTEPINUNDOREDO", wxSTC_LASTSTEPINUNDOREDO );
	wLiteralAddNum( "wxSTC_MOD_CHANGEMARKER", wxSTC_MOD_CHANGEMARKER );
	wLiteralAddNum( "wxSTC_MOD_BEFOREINSERT", wxSTC_MOD_BEFOREINSERT );
	wLiteralAddNum( "wxSTC_MOD_BEFOREDELETE", wxSTC_MOD_BEFOREDELETE );
	wLiteralAddNum( "wxSTC_MODEVENTMASKALL", wxSTC_MODEVENTMASKALL );
	wLiteralAddNum( "wxSTC_KEY_DOWN", wxSTC_KEY_DOWN );
	wLiteralAddNum( "wxSTC_KEY_UP", wxSTC_KEY_UP );
	wLiteralAddNum( "wxSTC_KEY_LEFT", wxSTC_KEY_LEFT );
	wLiteralAddNum( "wxSTC_KEY_RIGHT", wxSTC_KEY_RIGHT );
	wLiteralAddNum( "wxSTC_KEY_HOME", wxSTC_KEY_HOME );
	wLiteralAddNum( "wxSTC_KEY_END", wxSTC_KEY_END );
	wLiteralAddNum( "wxSTC_KEY_PRIOR", wxSTC_KEY_PRIOR );
	wLiteralAddNum( "wxSTC_KEY_NEXT", wxSTC_KEY_NEXT );
	wLiteralAddNum( "wxSTC_KEY_DELETE", wxSTC_KEY_DELETE );
	wLiteralAddNum( "wxSTC_KEY_INSERT", wxSTC_KEY_INSERT );
	wLiteralAddNum( "wxSTC_KEY_ESCAPE", wxSTC_KEY_ESCAPE );
	wLiteralAddNum( "wxSTC_KEY_BACK", wxSTC_KEY_BACK );
	wLiteralAddNum( "wxSTC_KEY_TAB", wxSTC_KEY_TAB );
	wLiteralAddNum( "wxSTC_KEY_RETURN", wxSTC_KEY_RETURN );
	wLiteralAddNum( "wxSTC_KEY_ADD", wxSTC_KEY_ADD );
	wLiteralAddNum( "wxSTC_KEY_SUBTRACT", wxSTC_KEY_SUBTRACT );
	wLiteralAddNum( "wxSTC_KEY_DIVIDE", wxSTC_KEY_DIVIDE );
	wLiteralAddNum( "wxSTC_SCMOD_SHIFT", wxSTC_SCMOD_SHIFT );
	wLiteralAddNum( "wxSTC_SCMOD_CTRL", wxSTC_SCMOD_CTRL );
	wLiteralAddNum( "wxSTC_SCMOD_ALT", wxSTC_SCMOD_ALT );
	wLiteralAddNum( "wxSTC_LEX_CONTAINER", wxSTC_LEX_CONTAINER );
	wLiteralAddNum( "wxSTC_LEX_NULL", wxSTC_LEX_NULL );
	wLiteralAddNum( "wxSTC_LEX_PYTHON", wxSTC_LEX_PYTHON );
	wLiteralAddNum( "wxSTC_LEX_CPP", wxSTC_LEX_CPP );
	wLiteralAddNum( "wxSTC_LEX_HTML", wxSTC_LEX_HTML );
	wLiteralAddNum( "wxSTC_LEX_XML", wxSTC_LEX_XML );
	wLiteralAddNum( "wxSTC_LEX_PERL", wxSTC_LEX_PERL );
	wLiteralAddNum( "wxSTC_LEX_SQL", wxSTC_LEX_SQL );
	wLiteralAddNum( "wxSTC_LEX_VB", wxSTC_LEX_VB );
	wLiteralAddNum( "wxSTC_LEX_PROPERTIES", wxSTC_LEX_PROPERTIES );
	wLiteralAddNum( "wxSTC_LEX_ERRORLIST", wxSTC_LEX_ERRORLIST );
	wLiteralAddNum( "wxSTC_LEX_MAKEFILE", wxSTC_LEX_MAKEFILE );
	wLiteralAddNum( "wxSTC_LEX_BATCH", wxSTC_LEX_BATCH );
	wLiteralAddNum( "wxSTC_LEX_XCODE", wxSTC_LEX_XCODE );
	wLiteralAddNum( "wxSTC_LEX_LATEX", wxSTC_LEX_LATEX );
	wLiteralAddNum( "wxSTC_LEX_LUA", wxSTC_LEX_LUA );
	wLiteralAddNum( "wxSTC_LEX_DIFF", wxSTC_LEX_DIFF );
	wLiteralAddNum( "wxSTC_LEX_CONF", wxSTC_LEX_CONF );
	wLiteralAddNum( "wxSTC_LEX_PASCAL", wxSTC_LEX_PASCAL );
	wLiteralAddNum( "wxSTC_LEX_AVE", wxSTC_LEX_AVE );
	wLiteralAddNum( "wxSTC_LEX_ADA", wxSTC_LEX_ADA );
	wLiteralAddNum( "wxSTC_LEX_LISP", wxSTC_LEX_LISP );
	wLiteralAddNum( "wxSTC_LEX_RUBY", wxSTC_LEX_RUBY );
	wLiteralAddNum( "wxSTC_LEX_EIFFEL", wxSTC_LEX_EIFFEL );
	wLiteralAddNum( "wxSTC_LEX_EIFFELKW", wxSTC_LEX_EIFFELKW );
	wLiteralAddNum( "wxSTC_LEX_TCL", wxSTC_LEX_TCL );
	wLiteralAddNum( "wxSTC_LEX_NNCRONTAB", wxSTC_LEX_NNCRONTAB );
	wLiteralAddNum( "wxSTC_LEX_AUTOMATIC", wxSTC_LEX_AUTOMATIC );
	wLiteralAddNum( "wxSTC_P_DEFAULT", wxSTC_P_DEFAULT );
	wLiteralAddNum( "wxSTC_P_COMMENTLINE", wxSTC_P_COMMENTLINE );
	wLiteralAddNum( "wxSTC_P_NUMBER", wxSTC_P_NUMBER );
	wLiteralAddNum( "wxSTC_P_STRING", wxSTC_P_STRING );
	wLiteralAddNum( "wxSTC_P_CHARACTER", wxSTC_P_CHARACTER );
	wLiteralAddNum( "wxSTC_P_WORD", wxSTC_P_WORD );
	wLiteralAddNum( "wxSTC_P_TRIPLE", wxSTC_P_TRIPLE );
	wLiteralAddNum( "wxSTC_P_TRIPLEDOUBLE", wxSTC_P_TRIPLEDOUBLE );
	wLiteralAddNum( "wxSTC_P_CLASSNAME", wxSTC_P_CLASSNAME );
	wLiteralAddNum( "wxSTC_P_DEFNAME", wxSTC_P_DEFNAME );
	wLiteralAddNum( "wxSTC_P_OPERATOR", wxSTC_P_OPERATOR );
	wLiteralAddNum( "wxSTC_P_IDENTIFIER", wxSTC_P_IDENTIFIER );
	wLiteralAddNum( "wxSTC_P_COMMENTBLOCK", wxSTC_P_COMMENTBLOCK );
	wLiteralAddNum( "wxSTC_P_STRINGEOL", wxSTC_P_STRINGEOL );
	wLiteralAddNum( "wxSTC_C_DEFAULT", wxSTC_C_DEFAULT );
	wLiteralAddNum( "wxSTC_C_COMMENT", wxSTC_C_COMMENT );
	wLiteralAddNum( "wxSTC_C_COMMENTLINE", wxSTC_C_COMMENTLINE );
	wLiteralAddNum( "wxSTC_C_COMMENTDOC", wxSTC_C_COMMENTDOC );
	wLiteralAddNum( "wxSTC_C_NUMBER", wxSTC_C_NUMBER );
	wLiteralAddNum( "wxSTC_C_WORD", wxSTC_C_WORD );
	wLiteralAddNum( "wxSTC_C_STRING", wxSTC_C_STRING );
	wLiteralAddNum( "wxSTC_C_CHARACTER", wxSTC_C_CHARACTER );
	wLiteralAddNum( "wxSTC_C_UUID", wxSTC_C_UUID );
	wLiteralAddNum( "wxSTC_C_PREPROCESSOR", wxSTC_C_PREPROCESSOR );
	wLiteralAddNum( "wxSTC_C_OPERATOR", wxSTC_C_OPERATOR );
	wLiteralAddNum( "wxSTC_C_IDENTIFIER", wxSTC_C_IDENTIFIER );
	wLiteralAddNum( "wxSTC_C_STRINGEOL", wxSTC_C_STRINGEOL );
	wLiteralAddNum( "wxSTC_C_VERBATIM", wxSTC_C_VERBATIM );
	wLiteralAddNum( "wxSTC_C_REGEX", wxSTC_C_REGEX );
	wLiteralAddNum( "wxSTC_C_COMMENTLINEDOC", wxSTC_C_COMMENTLINEDOC );
	wLiteralAddNum( "wxSTC_C_WORD2", wxSTC_C_WORD2 );
	wLiteralAddNum( "wxSTC_C_COMMENTDOCKEYWORD", wxSTC_C_COMMENTDOCKEYWORD );
	wLiteralAddNum( "wxSTC_C_COMMENTDOCKEYWORDERROR", wxSTC_C_COMMENTDOCKEYWORDERROR );
	wLiteralAddNum( "wxSTC_H_DEFAULT", wxSTC_H_DEFAULT );
	wLiteralAddNum( "wxSTC_H_TAG", wxSTC_H_TAG );
	wLiteralAddNum( "wxSTC_H_TAGUNKNOWN", wxSTC_H_TAGUNKNOWN );
	wLiteralAddNum( "wxSTC_H_ATTRIBUTE", wxSTC_H_ATTRIBUTE );
	wLiteralAddNum( "wxSTC_H_ATTRIBUTEUNKNOWN", wxSTC_H_ATTRIBUTEUNKNOWN );
	wLiteralAddNum( "wxSTC_H_NUMBER", wxSTC_H_NUMBER );
	wLiteralAddNum( "wxSTC_H_DOUBLESTRING", wxSTC_H_DOUBLESTRING );
	wLiteralAddNum( "wxSTC_H_SINGLESTRING", wxSTC_H_SINGLESTRING );
	wLiteralAddNum( "wxSTC_H_OTHER", wxSTC_H_OTHER );
	wLiteralAddNum( "wxSTC_H_COMMENT", wxSTC_H_COMMENT );
	wLiteralAddNum( "wxSTC_H_ENTITY", wxSTC_H_ENTITY );
	wLiteralAddNum( "wxSTC_H_TAGEND", wxSTC_H_TAGEND );
	wLiteralAddNum( "wxSTC_H_XMLSTART", wxSTC_H_XMLSTART );
	wLiteralAddNum( "wxSTC_H_XMLEND", wxSTC_H_XMLEND );
	wLiteralAddNum( "wxSTC_H_SCRIPT", wxSTC_H_SCRIPT );
	wLiteralAddNum( "wxSTC_H_ASP", wxSTC_H_ASP );
	wLiteralAddNum( "wxSTC_H_ASPAT", wxSTC_H_ASPAT );
	wLiteralAddNum( "wxSTC_H_CDATA", wxSTC_H_CDATA );
	wLiteralAddNum( "wxSTC_H_QUESTION", wxSTC_H_QUESTION );
	wLiteralAddNum( "wxSTC_H_VALUE", wxSTC_H_VALUE );
	wLiteralAddNum( "wxSTC_H_XCCOMMENT", wxSTC_H_XCCOMMENT );
	wLiteralAddNum( "wxSTC_H_SGML_DEFAULT", wxSTC_H_SGML_DEFAULT );
	wLiteralAddNum( "wxSTC_H_SGML_COMMAND", wxSTC_H_SGML_COMMAND );
	wLiteralAddNum( "wxSTC_H_SGML_1ST_PARAM", wxSTC_H_SGML_1ST_PARAM );
	wLiteralAddNum( "wxSTC_H_SGML_DOUBLESTRING", wxSTC_H_SGML_DOUBLESTRING );
	wLiteralAddNum( "wxSTC_H_SGML_SIMPLESTRING", wxSTC_H_SGML_SIMPLESTRING );
	wLiteralAddNum( "wxSTC_H_SGML_ERROR", wxSTC_H_SGML_ERROR );
	wLiteralAddNum( "wxSTC_H_SGML_SPECIAL", wxSTC_H_SGML_SPECIAL );
	wLiteralAddNum( "wxSTC_H_SGML_ENTITY", wxSTC_H_SGML_ENTITY );
	wLiteralAddNum( "wxSTC_H_SGML_COMMENT", wxSTC_H_SGML_COMMENT );
	wLiteralAddNum( "wxSTC_H_SGML_1ST_PARAM_COMMENT", wxSTC_H_SGML_1ST_PARAM_COMMENT );
	wLiteralAddNum( "wxSTC_H_SGML_BLOCK_DEFAULT", wxSTC_H_SGML_BLOCK_DEFAULT );
	wLiteralAddNum( "wxSTC_HJ_START", wxSTC_HJ_START );
	wLiteralAddNum( "wxSTC_HJ_DEFAULT", wxSTC_HJ_DEFAULT );
	wLiteralAddNum( "wxSTC_HJ_COMMENT", wxSTC_HJ_COMMENT );
	wLiteralAddNum( "wxSTC_HJ_COMMENTLINE", wxSTC_HJ_COMMENTLINE );
	wLiteralAddNum( "wxSTC_HJ_COMMENTDOC", wxSTC_HJ_COMMENTDOC );
	wLiteralAddNum( "wxSTC_HJ_NUMBER", wxSTC_HJ_NUMBER );
	wLiteralAddNum( "wxSTC_HJ_WORD", wxSTC_HJ_WORD );
	wLiteralAddNum( "wxSTC_HJ_KEYWORD", wxSTC_HJ_KEYWORD );
	wLiteralAddNum( "wxSTC_HJ_DOUBLESTRING", wxSTC_HJ_DOUBLESTRING );
	wLiteralAddNum( "wxSTC_HJ_SINGLESTRING", wxSTC_HJ_SINGLESTRING );
	wLiteralAddNum( "wxSTC_HJ_SYMBOLS", wxSTC_HJ_SYMBOLS );
	wLiteralAddNum( "wxSTC_HJ_STRINGEOL", wxSTC_HJ_STRINGEOL );
	wLiteralAddNum( "wxSTC_HJ_REGEX", wxSTC_HJ_REGEX );
	wLiteralAddNum( "wxSTC_HJA_START", wxSTC_HJA_START );
	wLiteralAddNum( "wxSTC_HJA_DEFAULT", wxSTC_HJA_DEFAULT );
	wLiteralAddNum( "wxSTC_HJA_COMMENT", wxSTC_HJA_COMMENT );
	wLiteralAddNum( "wxSTC_HJA_COMMENTLINE", wxSTC_HJA_COMMENTLINE );
	wLiteralAddNum( "wxSTC_HJA_COMMENTDOC", wxSTC_HJA_COMMENTDOC );
	wLiteralAddNum( "wxSTC_HJA_NUMBER", wxSTC_HJA_NUMBER );
	wLiteralAddNum( "wxSTC_HJA_WORD", wxSTC_HJA_WORD );
	wLiteralAddNum( "wxSTC_HJA_KEYWORD", wxSTC_HJA_KEYWORD );
	wLiteralAddNum( "wxSTC_HJA_DOUBLESTRING", wxSTC_HJA_DOUBLESTRING );
	wLiteralAddNum( "wxSTC_HJA_SINGLESTRING", wxSTC_HJA_SINGLESTRING );
	wLiteralAddNum( "wxSTC_HJA_SYMBOLS", wxSTC_HJA_SYMBOLS );
	wLiteralAddNum( "wxSTC_HJA_STRINGEOL", wxSTC_HJA_STRINGEOL );
	wLiteralAddNum( "wxSTC_HJA_REGEX", wxSTC_HJA_REGEX );
	wLiteralAddNum( "wxSTC_HB_START", wxSTC_HB_START );
	wLiteralAddNum( "wxSTC_HB_DEFAULT", wxSTC_HB_DEFAULT );
	wLiteralAddNum( "wxSTC_HB_COMMENTLINE", wxSTC_HB_COMMENTLINE );
	wLiteralAddNum( "wxSTC_HB_NUMBER", wxSTC_HB_NUMBER );
	wLiteralAddNum( "wxSTC_HB_WORD", wxSTC_HB_WORD );
	wLiteralAddNum( "wxSTC_HB_STRING", wxSTC_HB_STRING );
	wLiteralAddNum( "wxSTC_HB_IDENTIFIER", wxSTC_HB_IDENTIFIER );
	wLiteralAddNum( "wxSTC_HB_STRINGEOL", wxSTC_HB_STRINGEOL );
	wLiteralAddNum( "wxSTC_HBA_START", wxSTC_HBA_START );
	wLiteralAddNum( "wxSTC_HBA_DEFAULT", wxSTC_HBA_DEFAULT );
	wLiteralAddNum( "wxSTC_HBA_COMMENTLINE", wxSTC_HBA_COMMENTLINE );
	wLiteralAddNum( "wxSTC_HBA_NUMBER", wxSTC_HBA_NUMBER );
	wLiteralAddNum( "wxSTC_HBA_WORD", wxSTC_HBA_WORD );
	wLiteralAddNum( "wxSTC_HBA_STRING", wxSTC_HBA_STRING );
	wLiteralAddNum( "wxSTC_HBA_IDENTIFIER", wxSTC_HBA_IDENTIFIER );
	wLiteralAddNum( "wxSTC_HBA_STRINGEOL", wxSTC_HBA_STRINGEOL );
	wLiteralAddNum( "wxSTC_HP_START", wxSTC_HP_START );
	wLiteralAddNum( "wxSTC_HP_DEFAULT", wxSTC_HP_DEFAULT );
	wLiteralAddNum( "wxSTC_HP_COMMENTLINE", wxSTC_HP_COMMENTLINE );
	wLiteralAddNum( "wxSTC_HP_NUMBER", wxSTC_HP_NUMBER );
	wLiteralAddNum( "wxSTC_HP_STRING", wxSTC_HP_STRING );
	wLiteralAddNum( "wxSTC_HP_CHARACTER", wxSTC_HP_CHARACTER );
	wLiteralAddNum( "wxSTC_HP_WORD", wxSTC_HP_WORD );
	wLiteralAddNum( "wxSTC_HP_TRIPLE", wxSTC_HP_TRIPLE );
	wLiteralAddNum( "wxSTC_HP_TRIPLEDOUBLE", wxSTC_HP_TRIPLEDOUBLE );
	wLiteralAddNum( "wxSTC_HP_CLASSNAME", wxSTC_HP_CLASSNAME );
	wLiteralAddNum( "wxSTC_HP_DEFNAME", wxSTC_HP_DEFNAME );
	wLiteralAddNum( "wxSTC_HP_OPERATOR", wxSTC_HP_OPERATOR );
	wLiteralAddNum( "wxSTC_HP_IDENTIFIER", wxSTC_HP_IDENTIFIER );
	wLiteralAddNum( "wxSTC_HPA_START", wxSTC_HPA_START );
	wLiteralAddNum( "wxSTC_HPA_DEFAULT", wxSTC_HPA_DEFAULT );
	wLiteralAddNum( "wxSTC_HPA_COMMENTLINE", wxSTC_HPA_COMMENTLINE );
	wLiteralAddNum( "wxSTC_HPA_NUMBER", wxSTC_HPA_NUMBER );
	wLiteralAddNum( "wxSTC_HPA_STRING", wxSTC_HPA_STRING );
	wLiteralAddNum( "wxSTC_HPA_CHARACTER", wxSTC_HPA_CHARACTER );
	wLiteralAddNum( "wxSTC_HPA_WORD", wxSTC_HPA_WORD );
	wLiteralAddNum( "wxSTC_HPA_TRIPLE", wxSTC_HPA_TRIPLE );
	wLiteralAddNum( "wxSTC_HPA_TRIPLEDOUBLE", wxSTC_HPA_TRIPLEDOUBLE );
	wLiteralAddNum( "wxSTC_HPA_CLASSNAME", wxSTC_HPA_CLASSNAME );
	wLiteralAddNum( "wxSTC_HPA_DEFNAME", wxSTC_HPA_DEFNAME );
	wLiteralAddNum( "wxSTC_HPA_OPERATOR", wxSTC_HPA_OPERATOR );
	wLiteralAddNum( "wxSTC_HPA_IDENTIFIER", wxSTC_HPA_IDENTIFIER );
	wLiteralAddNum( "wxSTC_HPHP_DEFAULT", wxSTC_HPHP_DEFAULT );
	wLiteralAddNum( "wxSTC_HPHP_HSTRING", wxSTC_HPHP_HSTRING );
	wLiteralAddNum( "wxSTC_HPHP_SIMPLESTRING", wxSTC_HPHP_SIMPLESTRING );
	wLiteralAddNum( "wxSTC_HPHP_WORD", wxSTC_HPHP_WORD );
	wLiteralAddNum( "wxSTC_HPHP_NUMBER", wxSTC_HPHP_NUMBER );
	wLiteralAddNum( "wxSTC_HPHP_VARIABLE", wxSTC_HPHP_VARIABLE );
	wLiteralAddNum( "wxSTC_HPHP_COMMENT", wxSTC_HPHP_COMMENT );
	wLiteralAddNum( "wxSTC_HPHP_COMMENTLINE", wxSTC_HPHP_COMMENTLINE );
	wLiteralAddNum( "wxSTC_HPHP_HSTRING_VARIABLE", wxSTC_HPHP_HSTRING_VARIABLE );
	wLiteralAddNum( "wxSTC_HPHP_OPERATOR", wxSTC_HPHP_OPERATOR );
	wLiteralAddNum( "wxSTC_PL_DEFAULT", wxSTC_PL_DEFAULT );
	wLiteralAddNum( "wxSTC_PL_ERROR", wxSTC_PL_ERROR );
	wLiteralAddNum( "wxSTC_PL_COMMENTLINE", wxSTC_PL_COMMENTLINE );
	wLiteralAddNum( "wxSTC_PL_POD", wxSTC_PL_POD );
	wLiteralAddNum( "wxSTC_PL_NUMBER", wxSTC_PL_NUMBER );
	wLiteralAddNum( "wxSTC_PL_WORD", wxSTC_PL_WORD );
	wLiteralAddNum( "wxSTC_PL_STRING", wxSTC_PL_STRING );
	wLiteralAddNum( "wxSTC_PL_CHARACTER", wxSTC_PL_CHARACTER );
	wLiteralAddNum( "wxSTC_PL_PUNCTUATION", wxSTC_PL_PUNCTUATION );
	wLiteralAddNum( "wxSTC_PL_PREPROCESSOR", wxSTC_PL_PREPROCESSOR );
	wLiteralAddNum( "wxSTC_PL_OPERATOR", wxSTC_PL_OPERATOR );
	wLiteralAddNum( "wxSTC_PL_IDENTIFIER", wxSTC_PL_IDENTIFIER );
	wLiteralAddNum( "wxSTC_PL_SCALAR", wxSTC_PL_SCALAR );
	wLiteralAddNum( "wxSTC_PL_ARRAY", wxSTC_PL_ARRAY );
	wLiteralAddNum( "wxSTC_PL_HASH", wxSTC_PL_HASH );
	wLiteralAddNum( "wxSTC_PL_SYMBOLTABLE", wxSTC_PL_SYMBOLTABLE );
	wLiteralAddNum( "wxSTC_PL_REGEX", wxSTC_PL_REGEX );
	wLiteralAddNum( "wxSTC_PL_REGSUBST", wxSTC_PL_REGSUBST );
	wLiteralAddNum( "wxSTC_PL_LONGQUOTE", wxSTC_PL_LONGQUOTE );
	wLiteralAddNum( "wxSTC_PL_BACKTICKS", wxSTC_PL_BACKTICKS );
	wLiteralAddNum( "wxSTC_PL_DATASECTION", wxSTC_PL_DATASECTION );
	wLiteralAddNum( "wxSTC_PL_HERE_DELIM", wxSTC_PL_HERE_DELIM );
	wLiteralAddNum( "wxSTC_PL_HERE_Q", wxSTC_PL_HERE_Q );
	wLiteralAddNum( "wxSTC_PL_HERE_QQ", wxSTC_PL_HERE_QQ );
	wLiteralAddNum( "wxSTC_PL_HERE_QX", wxSTC_PL_HERE_QX );
	wLiteralAddNum( "wxSTC_PL_STRING_Q", wxSTC_PL_STRING_Q );
	wLiteralAddNum( "wxSTC_PL_STRING_QQ", wxSTC_PL_STRING_QQ );
	wLiteralAddNum( "wxSTC_PL_STRING_QX", wxSTC_PL_STRING_QX );
	wLiteralAddNum( "wxSTC_PL_STRING_QR", wxSTC_PL_STRING_QR );
	wLiteralAddNum( "wxSTC_PL_STRING_QW", wxSTC_PL_STRING_QW );
	wLiteralAddNum( "wxSTC_L_DEFAULT", wxSTC_L_DEFAULT );
	wLiteralAddNum( "wxSTC_L_COMMAND", wxSTC_L_COMMAND );
	wLiteralAddNum( "wxSTC_L_TAG", wxSTC_L_TAG );
	wLiteralAddNum( "wxSTC_L_MATH", wxSTC_L_MATH );
	wLiteralAddNum( "wxSTC_L_COMMENT", wxSTC_L_COMMENT );
	wLiteralAddNum( "wxSTC_LUA_DEFAULT", wxSTC_LUA_DEFAULT );
	wLiteralAddNum( "wxSTC_LUA_COMMENT", wxSTC_LUA_COMMENT );
	wLiteralAddNum( "wxSTC_LUA_COMMENTLINE", wxSTC_LUA_COMMENTLINE );
	wLiteralAddNum( "wxSTC_LUA_COMMENTDOC", wxSTC_LUA_COMMENTDOC );
	wLiteralAddNum( "wxSTC_LUA_NUMBER", wxSTC_LUA_NUMBER );
	wLiteralAddNum( "wxSTC_LUA_WORD", wxSTC_LUA_WORD );
	wLiteralAddNum( "wxSTC_LUA_STRING", wxSTC_LUA_STRING );
	wLiteralAddNum( "wxSTC_LUA_CHARACTER", wxSTC_LUA_CHARACTER );
	wLiteralAddNum( "wxSTC_LUA_LITERALSTRING", wxSTC_LUA_LITERALSTRING );
	wLiteralAddNum( "wxSTC_LUA_PREPROCESSOR", wxSTC_LUA_PREPROCESSOR );
	wLiteralAddNum( "wxSTC_LUA_OPERATOR", wxSTC_LUA_OPERATOR );
	wLiteralAddNum( "wxSTC_LUA_IDENTIFIER", wxSTC_LUA_IDENTIFIER );
	wLiteralAddNum( "wxSTC_LUA_STRINGEOL", wxSTC_LUA_STRINGEOL );
	wLiteralAddNum( "wxSTC_ERR_DEFAULT", wxSTC_ERR_DEFAULT );
	wLiteralAddNum( "wxSTC_ERR_PYTHON", wxSTC_ERR_PYTHON );
	wLiteralAddNum( "wxSTC_ERR_GCC", wxSTC_ERR_GCC );
	wLiteralAddNum( "wxSTC_ERR_MS", wxSTC_ERR_MS );
	wLiteralAddNum( "wxSTC_ERR_CMD", wxSTC_ERR_CMD );
	wLiteralAddNum( "wxSTC_ERR_BORLAND", wxSTC_ERR_BORLAND );
	wLiteralAddNum( "wxSTC_ERR_PERL", wxSTC_ERR_PERL );
	wLiteralAddNum( "wxSTC_ERR_NET", wxSTC_ERR_NET );
	wLiteralAddNum( "wxSTC_ERR_LUA", wxSTC_ERR_LUA );
	wLiteralAddNum( "wxSTC_ERR_DIFF_CHANGED", wxSTC_ERR_DIFF_CHANGED );
	wLiteralAddNum( "wxSTC_ERR_DIFF_ADDITION", wxSTC_ERR_DIFF_ADDITION );
	wLiteralAddNum( "wxSTC_ERR_DIFF_DELETION", wxSTC_ERR_DIFF_DELETION );
	wLiteralAddNum( "wxSTC_ERR_DIFF_MESSAGE", wxSTC_ERR_DIFF_MESSAGE );
	wLiteralAddNum( "wxSTC_BAT_DEFAULT", wxSTC_BAT_DEFAULT );
	wLiteralAddNum( "wxSTC_BAT_COMMENT", wxSTC_BAT_COMMENT );
	wLiteralAddNum( "wxSTC_BAT_WORD", wxSTC_BAT_WORD );
	wLiteralAddNum( "wxSTC_BAT_LABEL", wxSTC_BAT_LABEL );
	wLiteralAddNum( "wxSTC_BAT_HIDE", wxSTC_BAT_HIDE );
	wLiteralAddNum( "wxSTC_BAT_COMMAND", wxSTC_BAT_COMMAND );
	wLiteralAddNum( "wxSTC_BAT_IDENTIFIER", wxSTC_BAT_IDENTIFIER );
	wLiteralAddNum( "wxSTC_BAT_OPERATOR", wxSTC_BAT_OPERATOR );
	wLiteralAddNum( "wxSTC_MAKE_DEFAULT", wxSTC_MAKE_DEFAULT );
	wLiteralAddNum( "wxSTC_MAKE_COMMENT", wxSTC_MAKE_COMMENT );
	wLiteralAddNum( "wxSTC_MAKE_PREPROCESSOR", wxSTC_MAKE_PREPROCESSOR );
	wLiteralAddNum( "wxSTC_MAKE_IDENTIFIER", wxSTC_MAKE_IDENTIFIER );
	wLiteralAddNum( "wxSTC_MAKE_OPERATOR", wxSTC_MAKE_OPERATOR );
	wLiteralAddNum( "wxSTC_MAKE_TARGET", wxSTC_MAKE_TARGET );
	wLiteralAddNum( "wxSTC_MAKE_IDEOL", wxSTC_MAKE_IDEOL );
	wLiteralAddNum( "wxSTC_CONF_DEFAULT", wxSTC_CONF_DEFAULT );
	wLiteralAddNum( "wxSTC_CONF_COMMENT", wxSTC_CONF_COMMENT );
	wLiteralAddNum( "wxSTC_CONF_NUMBER", wxSTC_CONF_NUMBER );
	wLiteralAddNum( "wxSTC_CONF_IDENTIFIER", wxSTC_CONF_IDENTIFIER );
	wLiteralAddNum( "wxSTC_CONF_EXTENSION", wxSTC_CONF_EXTENSION );
	wLiteralAddNum( "wxSTC_CONF_PARAMETER", wxSTC_CONF_PARAMETER );
	wLiteralAddNum( "wxSTC_CONF_STRING", wxSTC_CONF_STRING );
	wLiteralAddNum( "wxSTC_CONF_OPERATOR", wxSTC_CONF_OPERATOR );
	wLiteralAddNum( "wxSTC_CONF_IP", wxSTC_CONF_IP );
	wLiteralAddNum( "wxSTC_CONF_DIRECTIVE", wxSTC_CONF_DIRECTIVE );
	wLiteralAddNum( "wxSTC_AVE_DEFAULT", wxSTC_AVE_DEFAULT );
	wLiteralAddNum( "wxSTC_AVE_COMMENT", wxSTC_AVE_COMMENT );
	wLiteralAddNum( "wxSTC_AVE_NUMBER", wxSTC_AVE_NUMBER );
	wLiteralAddNum( "wxSTC_AVE_WORD", wxSTC_AVE_WORD );
	wLiteralAddNum( "wxSTC_AVE_STRING", wxSTC_AVE_STRING );
	wLiteralAddNum( "wxSTC_AVE_ENUM", wxSTC_AVE_ENUM );
	wLiteralAddNum( "wxSTC_AVE_STRINGEOL", wxSTC_AVE_STRINGEOL );
	wLiteralAddNum( "wxSTC_AVE_IDENTIFIER", wxSTC_AVE_IDENTIFIER );
	wLiteralAddNum( "wxSTC_AVE_OPERATOR", wxSTC_AVE_OPERATOR );
	wLiteralAddNum( "wxSTC_ADA_DEFAULT", wxSTC_ADA_DEFAULT );
	wLiteralAddNum( "wxSTC_ADA_NUMBER", wxSTC_ADA_NUMBER );
	wLiteralAddNum( "wxSTC_ADA_WORD", wxSTC_ADA_WORD );
	wLiteralAddNum( "wxSTC_ADA_STRING", wxSTC_ADA_STRING );
	wLiteralAddNum( "wxSTC_ADA_CHARACTER", wxSTC_ADA_CHARACTER );
	wLiteralAddNum( "wxSTC_ADA_IDENTIFIER", wxSTC_ADA_IDENTIFIER );
	wLiteralAddNum( "wxSTC_ADA_STRINGEOL", wxSTC_ADA_STRINGEOL );
	wLiteralAddNum( "wxSTC_LISP_DEFAULT", wxSTC_LISP_DEFAULT );
	wLiteralAddNum( "wxSTC_LISP_COMMENT", wxSTC_LISP_COMMENT );
	wLiteralAddNum( "wxSTC_LISP_NUMBER", wxSTC_LISP_NUMBER );
	wLiteralAddNum( "wxSTC_LISP_KEYWORD", wxSTC_LISP_KEYWORD );
	wLiteralAddNum( "wxSTC_LISP_STRING", wxSTC_LISP_STRING );
	wLiteralAddNum( "wxSTC_LISP_STRINGEOL", wxSTC_LISP_STRINGEOL );
	wLiteralAddNum( "wxSTC_LISP_IDENTIFIER", wxSTC_LISP_IDENTIFIER );
	wLiteralAddNum( "wxSTC_LISP_OPERATOR", wxSTC_LISP_OPERATOR );
	wLiteralAddNum( "wxSTC_EIFFEL_DEFAULT", wxSTC_EIFFEL_DEFAULT );
	wLiteralAddNum( "wxSTC_EIFFEL_COMMENTLINE", wxSTC_EIFFEL_COMMENTLINE );
	wLiteralAddNum( "wxSTC_EIFFEL_NUMBER", wxSTC_EIFFEL_NUMBER );
	wLiteralAddNum( "wxSTC_EIFFEL_WORD", wxSTC_EIFFEL_WORD );
	wLiteralAddNum( "wxSTC_EIFFEL_STRING", wxSTC_EIFFEL_STRING );
	wLiteralAddNum( "wxSTC_EIFFEL_CHARACTER", wxSTC_EIFFEL_CHARACTER );
	wLiteralAddNum( "wxSTC_EIFFEL_OPERATOR", wxSTC_EIFFEL_OPERATOR );
	wLiteralAddNum( "wxSTC_EIFFEL_IDENTIFIER", wxSTC_EIFFEL_IDENTIFIER );
	wLiteralAddNum( "wxSTC_EIFFEL_STRINGEOL", wxSTC_EIFFEL_STRINGEOL );
	wLiteralAddNum( "wxSTC_NNCRONTAB_DEFAULT", wxSTC_NNCRONTAB_DEFAULT );
	wLiteralAddNum( "wxSTC_NNCRONTAB_COMMENT", wxSTC_NNCRONTAB_COMMENT );
	wLiteralAddNum( "wxSTC_NNCRONTAB_TASK", wxSTC_NNCRONTAB_TASK );
	wLiteralAddNum( "wxSTC_NNCRONTAB_SECTION", wxSTC_NNCRONTAB_SECTION );
	wLiteralAddNum( "wxSTC_NNCRONTAB_KEYWORD", wxSTC_NNCRONTAB_KEYWORD );
	wLiteralAddNum( "wxSTC_NNCRONTAB_MODIFIER", wxSTC_NNCRONTAB_MODIFIER );
	wLiteralAddNum( "wxSTC_NNCRONTAB_ASTERISK", wxSTC_NNCRONTAB_ASTERISK );
	wLiteralAddNum( "wxSTC_NNCRONTAB_NUMBER", wxSTC_NNCRONTAB_NUMBER );
	wLiteralAddNum( "wxSTC_NNCRONTAB_STRING", wxSTC_NNCRONTAB_STRING );
	wLiteralAddNum( "wxSTC_NNCRONTAB_ENVIRONMENT", wxSTC_NNCRONTAB_ENVIRONMENT );
	wLiteralAddNum( "wxSTC_NNCRONTAB_IDENTIFIER", wxSTC_NNCRONTAB_IDENTIFIER );
	wLiteralAddNum( "wxSTC_MASK_FOLDERS", wxSTC_MASK_FOLDERS );
	wLiteralAddNum( "wxEVT_STC_CHANGE", wxEVT_STC_CHANGE );
	wLiteralAddNum( "wxEVT_STC_STYLENEEDED", wxEVT_STC_STYLENEEDED );
	wLiteralAddNum( "wxEVT_STC_CHARADDED", wxEVT_STC_CHARADDED );
	wLiteralAddNum( "wxEVT_STC_SAVEPOINTREACHED", wxEVT_STC_SAVEPOINTREACHED );
	wLiteralAddNum( "wxEVT_STC_SAVEPOINTLEFT", wxEVT_STC_SAVEPOINTLEFT );
	wLiteralAddNum( "wxEVT_STC_ROMODIFYATTEMPT", wxEVT_STC_ROMODIFYATTEMPT );
	wLiteralAddNum( "wxEVT_STC_KEY", wxEVT_STC_KEY );
	wLiteralAddNum( "wxEVT_STC_DOUBLECLICK", wxEVT_STC_DOUBLECLICK );
	wLiteralAddNum( "wxEVT_STC_UPDATEUI", wxEVT_STC_UPDATEUI );
	wLiteralAddNum( "wxEVT_STC_MODIFIED", wxEVT_STC_MODIFIED );
	wLiteralAddNum( "wxEVT_STC_MACRORECORD", wxEVT_STC_MACRORECORD );
	wLiteralAddNum( "wxEVT_STC_MARGINCLICK", wxEVT_STC_MARGINCLICK );
	wLiteralAddNum( "wxEVT_STC_NEEDSHOWN", wxEVT_STC_NEEDSHOWN );
	wLiteralAddNum( "wxEVT_STC_POSCHANGED", wxEVT_STC_POSCHANGED );
	wLiteralAddNum( "wxEVT_STC_PAINTED", wxEVT_STC_PAINTED );
	wLiteralAddNum( "wxEVT_STC_USERLISTSELECTION", wxEVT_STC_USERLISTSELECTION );
	wLiteralAddNum( "wxEVT_STC_URIDROPPED", wxEVT_STC_URIDROPPED );
	wLiteralAddNum( "wxEVT_STC_DWELLSTART", wxEVT_STC_DWELLSTART );
	wLiteralAddNum( "wxEVT_STC_DWELLEND", wxEVT_STC_DWELLEND );
	wLiteralAddNum( "wxEVT_STC_START_DRAG", wxEVT_STC_START_DRAG );
	wLiteralAddNum( "wxEVT_STC_DRAG_OVER", wxEVT_STC_DRAG_OVER );
	wLiteralAddNum( "wxEVT_STC_DO_DROP", wxEVT_STC_DO_DROP );
	wLiteralAddNum( "wxEVT_STC_ZOOM", wxEVT_STC_ZOOM );
	wLiteralAddNum( "wxEVT_STC_HOTSPOT_CLICK", wxEVT_STC_HOTSPOT_CLICK );
	wLiteralAddNum( "wxEVT_STC_HOTSPOT_DCLICK", wxEVT_STC_HOTSPOT_DCLICK );
	wLiteralAddNum( "wxEVT_STC_CALLTIP_CLICK", wxEVT_STC_CALLTIP_CLICK );
	wLiteralAddNum( "wxDIR_FILES", wxDIR_FILES );
	wLiteralAddNum( "wxDIR_DIRS", wxDIR_DIRS );
	wLiteralAddNum( "wxDIR_HIDDEN", wxDIR_HIDDEN );
	wLiteralAddNum( "wxDIR_DOTDOT", wxDIR_DOTDOT );
	wLiteralAddNum( "wxDIR_DEFAULT", wxDIR_DEFAULT );
	wLiteralAddNum( "wxSTREAM_NO_ERROR", wxSTREAM_NO_ERROR );
	wLiteralAddNum( "wxSTREAM_EOF", wxSTREAM_EOF );
	wLiteralAddNum( "wxSTREAM_WRITE_ERROR", wxSTREAM_WRITE_ERROR );
	wLiteralAddNum( "wxSTREAM_READ_ERROR", wxSTREAM_READ_ERROR );
	wLiteralAddNum( "wxSOCKET_NOERROR", wxSOCKET_NOERROR );
	wLiteralAddNum( "wxSOCKET_INVOP", wxSOCKET_INVOP );
	wLiteralAddNum( "wxSOCKET_IOERR", wxSOCKET_IOERR );
	wLiteralAddNum( "wxSOCKET_INVADDR", wxSOCKET_INVADDR );
	wLiteralAddNum( "wxSOCKET_INVSOCK", wxSOCKET_INVSOCK );
	wLiteralAddNum( "wxSOCKET_NOHOST", wxSOCKET_NOHOST );
	wLiteralAddNum( "wxSOCKET_INVPORT", wxSOCKET_INVPORT );
	wLiteralAddNum( "wxSOCKET_WOULDBLOCK", wxSOCKET_WOULDBLOCK );
	wLiteralAddNum( "wxSOCKET_TIMEDOUT", wxSOCKET_TIMEDOUT );
	wLiteralAddNum( "wxSOCKET_MEMERR", wxSOCKET_MEMERR );
	wLiteralAddNum( "wxSOCKET_NONE", wxSOCKET_NONE );
	wLiteralAddNum( "wxSOCKET_NOWAIT", wxSOCKET_NOWAIT );
	wLiteralAddNum( "wxSOCKET_WAITALL", wxSOCKET_WAITALL );
	wLiteralAddNum( "wxSOCKET_INPUT", wxSOCKET_INPUT );
	wLiteralAddNum( "wxSOCKET_OUTPUT", wxSOCKET_OUTPUT );
	wLiteralAddNum( "wxSOCKET_CONNECTION", wxSOCKET_CONNECTION );
	wLiteralAddNum( "wxSOCKET_LOST", wxSOCKET_LOST );
	wLiteralAddNum( "wxPROTO_NOERR", wxPROTO_NOERR );
	wLiteralAddNum( "wxPROTO_NETERR", wxPROTO_NETERR );
	wLiteralAddNum( "wxPROTO_PROTERR", wxPROTO_PROTERR );
	wLiteralAddNum( "wxPROTO_CONNERR", wxPROTO_CONNERR );
	wLiteralAddNum( "wxPROTO_INVVAL", wxPROTO_INVVAL );
	wLiteralAddNum( "wxPROTO_NOHNDLR", wxPROTO_NOHNDLR );
	wLiteralAddNum( "wxPROTO_NOFILE", wxPROTO_NOFILE );
	wLiteralAddNum( "wxPROTO_ABRT", wxPROTO_ABRT );
	wLiteralAddNum( "wxPROTO_RCNCT", wxPROTO_RCNCT );
	wLiteralAddNum( "wxURL_NOERR", wxURL_NOERR );
	wLiteralAddNum( "wxURL_SNTXERR", wxURL_SNTXERR );
	wLiteralAddNum( "wxURL_NOPROTO", wxURL_NOPROTO );
	wLiteralAddNum( "wxURL_NOHOST", wxURL_NOHOST );
	wLiteralAddNum( "wxURL_NOPATH", wxURL_NOPATH );
	wLiteralAddNum( "wxURL_CONNERR", wxURL_CONNERR );
	wLiteralAddNum( "wxURL_PROTOERR", wxURL_PROTOERR );
}
