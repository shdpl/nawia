module qt.core.QEvent;

public import qt.core.QEvent_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QEvent : QtdObject
{
    public enum Type {
        None = 0,
        Timer = 1,
        MouseButtonPress = 2,
        MouseButtonRelease = 3,
        MouseButtonDblClick = 4,
        MouseMove = 5,
        KeyPress = 6,
        KeyRelease = 7,
        FocusIn = 8,
        FocusOut = 9,
        Enter = 10,
        Leave = 11,
        Paint = 12,
        Move = 13,
        Resize = 14,
        Create = 15,
        Destroy = 16,
        Show = 17,
        Hide = 18,
        Close = 19,
        Quit = 20,
        ParentChange = 21,
        ParentAboutToChange = 131,
        ThreadChange = 22,
        WindowActivate = 24,
        WindowDeactivate = 25,
        ShowToParent = 26,
        HideToParent = 27,
        Wheel = 31,
        WindowTitleChange = 33,
        WindowIconChange = 34,
        ApplicationWindowIconChange = 35,
        ApplicationFontChange = 36,
        ApplicationLayoutDirectionChange = 37,
        ApplicationPaletteChange = 38,
        PaletteChange = 39,
        Clipboard = 40,
        Speech = 42,
        MetaCall = 43,
        SockAct = 50,
        WinEventAct = 132,
        DeferredDelete = 52,
        DragEnter = 60,
        DragMove = 61,
        DragLeave = 62,
        Drop = 63,
        DragResponse = 64,
        ChildAdded = 68,
        ChildPolished = 69,
        ChildRemoved = 71,
        ShowWindowRequest = 73,
        PolishRequest = 74,
        Polish = 75,
        LayoutRequest = 76,
        UpdateRequest = 77,
        UpdateLater = 78,
        EmbeddingControl = 79,
        ActivateControl = 80,
        DeactivateControl = 81,
        ContextMenu = 82,
        InputMethod = 83,
        AccessibilityPrepare = 86,
        TabletMove = 87,
        LocaleChange = 88,
        LanguageChange = 89,
        LayoutDirectionChange = 90,
        Style = 91,
        TabletPress = 92,
        TabletRelease = 93,
        OkRequest = 94,
        HelpRequest = 95,
        IconDrag = 96,
        FontChange = 97,
        EnabledChange = 98,
        ActivationChange = 99,
        StyleChange = 100,
        IconTextChange = 101,
        ModifiedChange = 102,
        MouseTrackingChange = 109,
        WindowBlocked = 103,
        WindowUnblocked = 104,
        WindowStateChange = 105,
        ToolTip = 110,
        WhatsThis = 111,
        StatusTip = 112,
        ActionChanged = 113,
        ActionAdded = 114,
        ActionRemoved = 115,
        FileOpen = 116,
        Shortcut = 117,
        ShortcutOverride = 51,
        WhatsThisClicked = 118,
        ToolBarChange = 120,
        ApplicationActivate = 121,
        ApplicationDeactivate = 122,
        QueryWhatsThis = 123,
        EnterWhatsThisMode = 124,
        LeaveWhatsThisMode = 125,
        ZOrderChange = 126,
        HoverEnter = 127,
        HoverLeave = 128,
        HoverMove = 129,
        AccessibilityHelp = 119,
        AccessibilityDescription = 130,
        AcceptDropsChange = 152,
        MenubarUpdated = 153,
        ZeroTimerEvent = 154,
        GraphicsSceneMouseMove = 155,
        GraphicsSceneMousePress = 156,
        GraphicsSceneMouseRelease = 157,
        GraphicsSceneMouseDoubleClick = 158,
        GraphicsSceneContextMenu = 159,
        GraphicsSceneHoverEnter = 160,
        GraphicsSceneHoverMove = 161,
        GraphicsSceneHoverLeave = 162,
        GraphicsSceneHelp = 163,
        GraphicsSceneDragEnter = 164,
        GraphicsSceneDragMove = 165,
        GraphicsSceneDragLeave = 166,
        GraphicsSceneDrop = 167,
        GraphicsSceneWheel = 168,
        KeyboardLayoutChange = 169,
        DynamicPropertyChange = 170,
        TabletEnterProximity = 171,
        TabletLeaveProximity = 172,
        NonClientAreaMouseMove = 173,
        NonClientAreaMouseButtonPress = 174,
        NonClientAreaMouseButtonRelease = 175,
        NonClientAreaMouseButtonDblClick = 176,
        MacSizeChange = 177,
        ContentsRectChange = 178,
        MacGLWindowChange = 179,
        FutureCallOut = 180,
        GraphicsSceneResize = 181,
        GraphicsSceneMove = 182,
        CursorChange = 183,
        ToolTipChange = 184,
        NetworkReplyUpdated = 185,
        GrabMouse = 186,
        UngrabMouse = 187,
        GrabKeyboard = 188,
        UngrabKeyboard = 189,
        MacGLClearDrawable = 191,
        StateMachineSignal = 192,
        StateMachineWrapped = 193,
        TouchBegin = 194,
        TouchUpdate = 195,
        TouchEnd = 196,
        NativeGesture = 197,
        RequestSoftwareInputPanel = 199,
        CloseSoftwareInputPanel = 200,
        UpdateSoftKeys = 201,
        WinIdChange = 203,
        Gesture = 198,
        GestureOverride = 202,
        User = 1000,
        MaxUser = 65535
    }

    alias Type.None None;
    alias Type.Timer Timer;
    alias Type.MouseButtonPress MouseButtonPress;
    alias Type.MouseButtonRelease MouseButtonRelease;
    alias Type.MouseButtonDblClick MouseButtonDblClick;
    alias Type.MouseMove MouseMove;
    alias Type.KeyPress KeyPress;
    alias Type.KeyRelease KeyRelease;
    alias Type.FocusIn FocusIn;
    alias Type.FocusOut FocusOut;
    alias Type.Enter Enter;
    alias Type.Leave Leave;
    alias Type.Paint Paint;
    alias Type.Move Move;
    alias Type.Resize Resize;
    alias Type.Create Create;
    alias Type.Destroy Destroy;
    alias Type.Show Show;
    alias Type.Hide Hide;
    alias Type.Close Close;
    alias Type.Quit Quit;
    alias Type.ParentChange ParentChange;
    alias Type.ParentAboutToChange ParentAboutToChange;
    alias Type.ThreadChange ThreadChange;
    alias Type.WindowActivate WindowActivate;
    alias Type.WindowDeactivate WindowDeactivate;
    alias Type.ShowToParent ShowToParent;
    alias Type.HideToParent HideToParent;
    alias Type.Wheel Wheel;
    alias Type.WindowTitleChange WindowTitleChange;
    alias Type.WindowIconChange WindowIconChange;
    alias Type.ApplicationWindowIconChange ApplicationWindowIconChange;
    alias Type.ApplicationFontChange ApplicationFontChange;
    alias Type.ApplicationLayoutDirectionChange ApplicationLayoutDirectionChange;
    alias Type.ApplicationPaletteChange ApplicationPaletteChange;
    alias Type.PaletteChange PaletteChange;
    alias Type.Clipboard Clipboard;
    alias Type.Speech Speech;
    alias Type.MetaCall MetaCall;
    alias Type.SockAct SockAct;
    alias Type.WinEventAct WinEventAct;
    alias Type.DeferredDelete DeferredDelete;
    alias Type.DragEnter DragEnter;
    alias Type.DragMove DragMove;
    alias Type.DragLeave DragLeave;
    alias Type.Drop Drop;
    alias Type.DragResponse DragResponse;
    alias Type.ChildAdded ChildAdded;
    alias Type.ChildPolished ChildPolished;
    alias Type.ChildRemoved ChildRemoved;
    alias Type.ShowWindowRequest ShowWindowRequest;
    alias Type.PolishRequest PolishRequest;
    alias Type.Polish Polish;
    alias Type.LayoutRequest LayoutRequest;
    alias Type.UpdateRequest UpdateRequest;
    alias Type.UpdateLater UpdateLater;
    alias Type.EmbeddingControl EmbeddingControl;
    alias Type.ActivateControl ActivateControl;
    alias Type.DeactivateControl DeactivateControl;
    alias Type.ContextMenu ContextMenu;
    alias Type.InputMethod InputMethod;
    alias Type.AccessibilityPrepare AccessibilityPrepare;
    alias Type.TabletMove TabletMove;
    alias Type.LocaleChange LocaleChange;
    alias Type.LanguageChange LanguageChange;
    alias Type.LayoutDirectionChange LayoutDirectionChange;
    alias Type.Style Style;
    alias Type.TabletPress TabletPress;
    alias Type.TabletRelease TabletRelease;
    alias Type.OkRequest OkRequest;
    alias Type.HelpRequest HelpRequest;
    alias Type.IconDrag IconDrag;
    alias Type.FontChange FontChange;
    alias Type.EnabledChange EnabledChange;
    alias Type.ActivationChange ActivationChange;
    alias Type.StyleChange StyleChange;
    alias Type.IconTextChange IconTextChange;
    alias Type.ModifiedChange ModifiedChange;
    alias Type.MouseTrackingChange MouseTrackingChange;
    alias Type.WindowBlocked WindowBlocked;
    alias Type.WindowUnblocked WindowUnblocked;
    alias Type.WindowStateChange WindowStateChange;
    alias Type.ToolTip ToolTip;
    alias Type.WhatsThis WhatsThis;
    alias Type.StatusTip StatusTip;
    alias Type.ActionChanged ActionChanged;
    alias Type.ActionAdded ActionAdded;
    alias Type.ActionRemoved ActionRemoved;
    alias Type.FileOpen FileOpen;
    alias Type.Shortcut Shortcut;
    alias Type.ShortcutOverride ShortcutOverride;
    alias Type.WhatsThisClicked WhatsThisClicked;
    alias Type.ToolBarChange ToolBarChange;
    alias Type.ApplicationActivate ApplicationActivate;
    alias Type.ApplicationDeactivate ApplicationDeactivate;
    alias Type.QueryWhatsThis QueryWhatsThis;
    alias Type.EnterWhatsThisMode EnterWhatsThisMode;
    alias Type.LeaveWhatsThisMode LeaveWhatsThisMode;
    alias Type.ZOrderChange ZOrderChange;
    alias Type.HoverEnter HoverEnter;
    alias Type.HoverLeave HoverLeave;
    alias Type.HoverMove HoverMove;
    alias Type.AccessibilityHelp AccessibilityHelp;
    alias Type.AccessibilityDescription AccessibilityDescription;
    alias Type.AcceptDropsChange AcceptDropsChange;
    alias Type.MenubarUpdated MenubarUpdated;
    alias Type.ZeroTimerEvent ZeroTimerEvent;
    alias Type.GraphicsSceneMouseMove GraphicsSceneMouseMove;
    alias Type.GraphicsSceneMousePress GraphicsSceneMousePress;
    alias Type.GraphicsSceneMouseRelease GraphicsSceneMouseRelease;
    alias Type.GraphicsSceneMouseDoubleClick GraphicsSceneMouseDoubleClick;
    alias Type.GraphicsSceneContextMenu GraphicsSceneContextMenu;
    alias Type.GraphicsSceneHoverEnter GraphicsSceneHoverEnter;
    alias Type.GraphicsSceneHoverMove GraphicsSceneHoverMove;
    alias Type.GraphicsSceneHoverLeave GraphicsSceneHoverLeave;
    alias Type.GraphicsSceneHelp GraphicsSceneHelp;
    alias Type.GraphicsSceneDragEnter GraphicsSceneDragEnter;
    alias Type.GraphicsSceneDragMove GraphicsSceneDragMove;
    alias Type.GraphicsSceneDragLeave GraphicsSceneDragLeave;
    alias Type.GraphicsSceneDrop GraphicsSceneDrop;
    alias Type.GraphicsSceneWheel GraphicsSceneWheel;
    alias Type.KeyboardLayoutChange KeyboardLayoutChange;
    alias Type.DynamicPropertyChange DynamicPropertyChange;
    alias Type.TabletEnterProximity TabletEnterProximity;
    alias Type.TabletLeaveProximity TabletLeaveProximity;
    alias Type.NonClientAreaMouseMove NonClientAreaMouseMove;
    alias Type.NonClientAreaMouseButtonPress NonClientAreaMouseButtonPress;
    alias Type.NonClientAreaMouseButtonRelease NonClientAreaMouseButtonRelease;
    alias Type.NonClientAreaMouseButtonDblClick NonClientAreaMouseButtonDblClick;
    alias Type.MacSizeChange MacSizeChange;
    alias Type.ContentsRectChange ContentsRectChange;
    alias Type.MacGLWindowChange MacGLWindowChange;
    alias Type.FutureCallOut FutureCallOut;
    alias Type.GraphicsSceneResize GraphicsSceneResize;
    alias Type.GraphicsSceneMove GraphicsSceneMove;
    alias Type.CursorChange CursorChange;
    alias Type.ToolTipChange ToolTipChange;
    alias Type.NetworkReplyUpdated NetworkReplyUpdated;
    alias Type.GrabMouse GrabMouse;
    alias Type.UngrabMouse UngrabMouse;
    alias Type.GrabKeyboard GrabKeyboard;
    alias Type.UngrabKeyboard UngrabKeyboard;
    alias Type.MacGLClearDrawable MacGLClearDrawable;
    alias Type.StateMachineSignal StateMachineSignal;
    alias Type.StateMachineWrapped StateMachineWrapped;
    alias Type.TouchBegin TouchBegin;
    alias Type.TouchUpdate TouchUpdate;
    alias Type.TouchEnd TouchEnd;
    alias Type.NativeGesture NativeGesture;
    alias Type.RequestSoftwareInputPanel RequestSoftwareInputPanel;
    alias Type.CloseSoftwareInputPanel CloseSoftwareInputPanel;
    alias Type.UpdateSoftKeys UpdateSoftKeys;
    alias Type.WinIdChange WinIdChange;
    alias Type.Gesture Gesture;
    alias Type.GestureOverride GestureOverride;
    alias Type.User User;
    alias Type.MaxUser MaxUser;


// Functions

    public this(QEvent.Type type) {
        void* ret = qtd_QEvent_QEvent_Type(cast(void*) this, type);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void accept() {
        qtd_QEvent_accept(qtdNativeId);
    }

    public final void ignore() {
        qtd_QEvent_ignore(qtdNativeId);
    }

    public final bool isAccepted() const {
        return qtd_QEvent_isAccepted_const(qtdNativeId);
    }

    public final void setAccepted(bool accepted) {
        qtd_QEvent_setAccepted_bool(qtdNativeId, accepted);
    }

    public final bool spontaneous() const {
        return qtd_QEvent_spontaneous_const(qtdNativeId);
    }

    public final QEvent.Type type() const {
        return cast(QEvent.Type) qtd_QEvent_type_const(qtdNativeId);
    }

    public static int registerEventType(int hint = -1) {
        return qtd_QEvent_registerEventType_int(hint);
    }
// Field accessors
    static QEvent __getObject(void* nativeId) {
        return qtd_QEvent_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QEvent;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QEvent_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QEvent_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QEvent_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QEvent_entity(void *q_ptr);

QEvent qtd_QEvent_from_ptr(void* ret) {
    auto return_value = new QEvent(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QEvent_delete(void *ptr);
extern (C) void qtd_QEvent_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QEvent_QEvent_Type(void *d_ptr,
 int type0);
private extern(C) void  qtd_QEvent_accept(void* __this_nativeId);
private extern(C) void  qtd_QEvent_ignore(void* __this_nativeId);
private extern(C) bool  qtd_QEvent_isAccepted_const(void* __this_nativeId);
private extern(C) void  qtd_QEvent_setAccepted_bool(void* __this_nativeId,
 bool accepted0);
private extern(C) bool  qtd_QEvent_spontaneous_const(void* __this_nativeId);
private extern(C) int  qtd_QEvent_type_const(void* __this_nativeId);
private extern(C) int  qtd_QEvent_registerEventType_int(int hint0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QEvent_initCallBacks(void* virtuals);

extern(C) void static_init_QEvent() {
    qtd_QEvent_initCallBacks(null);
}

// signal handlers

