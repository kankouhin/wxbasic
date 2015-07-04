// events.i
// used by events.awk to generate events.c
// (c) 2002 David Cuny

%event wxCommandEvent
    wxEVT_COMMAND_BUTTON_CLICKED
    wxEVT_COMMAND_CHECKBOX_CLICKED
    wxEVT_COMMAND_CHOICE_SELECTED
    wxEVT_COMMAND_LISTBOX_SELECTED
    wxEVT_COMMAND_LISTBOX_DOUBLECLICKED
    wxEVT_COMMAND_CHECKLISTBOX_TOGGLED
    wxEVT_COMMAND_TEXT_UPDATED
    wxEVT_COMMAND_TEXT_ENTER
    wxEVT_COMMAND_MENU_SELECTED
    wxEVT_COMMAND_MENU_SELECTED
    wxEVT_COMMAND_TOOL_CLICKED
    wxEVT_COMMAND_SLIDER_UPDATED
    wxEVT_COMMAND_RADIOBOX_SELECTED
    wxEVT_COMMAND_RADIOBUTTON_SELECTED
    wxEVT_COMMAND_SCROLLBAR_UPDATED
    wxEVT_COMMAND_VLBOX_SELECTED
    wxEVT_COMMAND_COMBOBOX_SELECTED
    wxEVT_COMMAND_TOOL_RCLICKED
    wxEVT_COMMAND_TOOL_ENTER
    wxEVT_COMMAND_SPINCTRL_UPDATED

%event wxSocketEvent
    wxEVT_SOCKET

%event wxTimerEvent
    wxEVT_TIMER

%event wxMouseEvent
    wxEVT_LEFT_DOWN
    wxEVT_LEFT_UP
    wxEVT_MIDDLE_DOWN
    wxEVT_MIDDLE_UP
    wxEVT_RIGHT_DOWN
    wxEVT_RIGHT_UP
    wxEVT_MOTION
    wxEVT_ENTER_WINDOW
    wxEVT_LEAVE_WINDOW
    wxEVT_LEFT_DCLICK
    wxEVT_MIDDLE_DCLICK
    wxEVT_RIGHT_DCLICK
    wxEVT_SET_FOCUS
    wxEVT_KILL_FOCUS

    wxEVT_NC_LEFT_DOWN
    wxEVT_NC_LEFT_UP
    wxEVT_NC_MIDDLE_DOWN
    wxEVT_NC_MIDDLE_UP
    wxEVT_NC_RIGHT_DOWN
    wxEVT_NC_RIGHT_UP
    wxEVT_NC_MOTION
    wxEVT_NC_ENTER_WINDOW
    wxEVT_NC_LEAVE_WINDOW
    wxEVT_NC_LEFT_DCLICK
    wxEVT_NC_MIDDLE_DCLICK
    wxEVT_NC_RIGHT_DCLICK

// should be return _wxKeyInput
%event
    wxEVT_CHAR
    wxEVT_CHAR_HOOK
    wxEVT_NAVIGATION_KEY
    wxEVT_KEY_DOWN
    wxEVT_KEY_UP

    wxEVT_SET_CURSOR

%event wxScrollEvent
    wxEVT_SCROLL_TOP
    wxEVT_SCROLL_BOTTOM
    wxEVT_SCROLL_LINEUP
    wxEVT_SCROLL_LINEDOWN
    wxEVT_SCROLL_PAGEUP
    wxEVT_SCROLL_PAGEDOWN
    wxEVT_SCROLL_THUMBTRACK
    wxEVT_SCROLL_THUMBRELEASE

%event wxScrollWinEvent
    wxEVT_SCROLLWIN_TOP
    wxEVT_SCROLLWIN_BOTTOM
    wxEVT_SCROLLWIN_LINEUP
    wxEVT_SCROLLWIN_LINEDOWN
    wxEVT_SCROLLWIN_PAGEUP
    wxEVT_SCROLLWIN_PAGEDOWN
    wxEVT_SCROLLWIN_THUMBTRACK
    wxEVT_SCROLLWIN_THUMBRELEASE

%event wxSizeEvent
    wxEVT_SIZE

%event wxMoveEvent
    wxEVT_MOVE

%event
    wxEVT_CLOSE_WINDOW

    wxEVT_END_SESSION
    wxEVT_QUERY_END_SESSION

%event wxActivateEvent
    wxEVT_ACTIVATE_APP
    wxEVT_ACTIVATE

%event
    wxEVT_POWER

%event
    wxEVT_CREATE
    wxEVT_DESTROY

    wxEVT_SHOW
    wxEVT_ICONIZE
    wxEVT_MAXIMIZE
    wxEVT_MOUSE_CAPTURE_CHANGED

%event wxPaintEvent
    wxEVT_PAINT

%event wxEraseEvent
    wxEVT_ERASE_BACKGROUND

%event
    wxEVT_NC_PAINT
    wxEVT_PAINT_ICON

%event wxMenuEvent
    wxEVT_MENU_CHAR
    wxEVT_MENU_INIT
    wxEVT_MENU_HIGHLIGHT

%event
    wxEVT_POPUP_MENU_INIT
    wxEVT_CONTEXT_MENU

%event wxSysColourChangedEvent
    wxEVT_SYS_COLOUR_CHANGED

%event
    wxEVT_SETTING_CHANGED
    wxEVT_QUERY_NEW_PALETTE
    wxEVT_PALETTE_CHANGED

%event wxJoystickEvent;
    wxEVT_JOY_BUTTON_DOWN
    wxEVT_JOY_BUTTON_UP
    wxEVT_JOY_MOVE
    wxEVT_JOY_ZMOVE

%event wxDropFilesEvent
    wxEVT_DROP_FILES

%event
    wxEVT_DRAW_ITEM
    wxEVT_MEASURE_ITEM
    wxEVT_COMPARE_ITEM

%event wxInitDialogEvent
    wxEVT_INIT_DIALOG

%event wxIdleEvent
    wxEVT_IDLE

%event wxUpdateUIEvent
    wxEVT_UPDATE_UI

%event wxProcessEvent
    wxEVT_END_PROCESS

// should return wxDialupManager
%event wxEvent
    wxEVT_DIALUP_CONNECTED
    wxEVT_DIALUP_DISCONNECTED

%event wxCommandEvent
    wxEVT_COMMAND_LEFT_CLICK
    wxEVT_COMMAND_LEFT_DCLICK
    wxEVT_COMMAND_RIGHT_CLICK
    wxEVT_COMMAND_RIGHT_DCLICK
    wxEVT_COMMAND_SET_FOCUS
    wxEVT_COMMAND_KILL_FOCUS
    wxEVT_COMMAND_ENTER

%event wxTreeEvent
    wxEVT_COMMAND_TREE_BEGIN_DRAG
    wxEVT_COMMAND_TREE_BEGIN_RDRAG
    wxEVT_COMMAND_TREE_BEGIN_LABEL_EDIT
    wxEVT_COMMAND_TREE_END_LABEL_EDIT
    wxEVT_COMMAND_TREE_DELETE_ITEM
    wxEVT_COMMAND_TREE_GET_INFO
    wxEVT_COMMAND_TREE_SET_INFO
    wxEVT_COMMAND_TREE_ITEM_EXPANDED
    wxEVT_COMMAND_TREE_ITEM_EXPANDING
    wxEVT_COMMAND_TREE_ITEM_COLLAPSED
    wxEVT_COMMAND_TREE_ITEM_COLLAPSING
    wxEVT_COMMAND_TREE_SEL_CHANGED
    wxEVT_COMMAND_TREE_SEL_CHANGING
    wxEVT_COMMAND_TREE_KEY_DOWN
    wxEVT_COMMAND_TREE_ITEM_ACTIVATED
    wxEVT_COMMAND_TREE_ITEM_RIGHT_CLICK
    wxEVT_COMMAND_TREE_ITEM_MIDDLE_CLICK
    wxEVT_COMMAND_TREE_END_DRAG

%event wxListEvent
    wxEVT_COMMAND_LIST_BEGIN_DRAG
    wxEVT_COMMAND_LIST_BEGIN_RDRAG
    wxEVT_COMMAND_LIST_BEGIN_LABEL_EDIT
    wxEVT_COMMAND_LIST_END_LABEL_EDIT
    wxEVT_COMMAND_LIST_DELETE_ITEM
    wxEVT_COMMAND_LIST_DELETE_ALL_ITEMS
    wxEVT_COMMAND_LIST_GET_INFO
    wxEVT_COMMAND_LIST_SET_INFO
    wxEVT_COMMAND_LIST_ITEM_SELECTED
    wxEVT_COMMAND_LIST_ITEM_DESELECTED
    wxEVT_COMMAND_LIST_KEY_DOWN
    wxEVT_COMMAND_LIST_INSERT_ITEM
    wxEVT_COMMAND_LIST_COL_CLICK
    wxEVT_COMMAND_LIST_ITEM_RIGHT_CLICK
    wxEVT_COMMAND_LIST_ITEM_MIDDLE_CLICK
    wxEVT_COMMAND_LIST_ITEM_ACTIVATED

%event wxNotebookEvent
    wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGED
    wxEVT_COMMAND_NOTEBOOK_PAGE_CHANGING
         
// wxSplitterEvent
%event
    wxEVT_COMMAND_SPLITTER_SASH_POS_CHANGED
    wxEVT_COMMAND_SPLITTER_SASH_POS_CHANGING
    wxEVT_COMMAND_SPLITTER_DOUBLECLICKED
    wxEVT_COMMAND_SPLITTER_UNSPLIT

%event wxWizardEvent
    wxEVT_WIZARD_PAGE_CHANGED
    wxEVT_WIZARD_PAGE_CHANGING
    wxEVT_WIZARD_CANCEL

%event wxCalendarEvent
    wxEVT_CALENDAR_SEL_CHANGED
    wxEVT_CALENDAR_DAY_CHANGED
    wxEVT_CALENDAR_MONTH_CHANGED
    wxEVT_CALENDAR_YEAR_CHANGED
    wxEVT_CALENDAR_DOUBLECLICKED
    wxEVT_CALENDAR_WEEKDAY_CLICKED

// event wxPlotEvent
//    wxEVT_PLOT_SEL_CHANGING
//    wxEVT_PLOT_SEL_CHANGED
//    wxEVT_PLOT_CLICKED
//    wxEVT_PLOT_DOUBLECLICKED
//    wxEVT_PLOT_ZOOM_IN
//    wxEVT_PLOT_ZOOM_OUT
//    wxEVT_PLOT_VALUE_SEL_CREATING
//    wxEVT_PLOT_VALUE_SEL_CREATED
//    wxEVT_PLOT_VALUE_SEL_CHANGING
//    wxEVT_PLOT_VALUE_SEL_CHANGED
//    wxEVT_PLOT_AREA_SEL_CREATING
//    wxEVT_PLOT_AREA_SEL_CREATED
//    wxEVT_PLOT_AREA_SEL_CHANGING
//    wxEVT_PLOT_AREA_SEL_CHANGED
//    wxEVT_PLOT_BEGIN_X_LABEL_EDIT
//    wxEVT_PLOT_END_X_LABEL_EDIT
//    wxEVT_PLOT_BEGIN_Y_LABEL_EDIT
//    wxEVT_PLOT_END_Y_LABEL_EDIT
//    wxEVT_PLOT_BEGIN_TITLE_EDIT
//    wxEVT_PLOT_END_TITLE_EDIT
//    wxEVT_PLOT_AREA_CREATE

