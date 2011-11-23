module qt.gui.QAccessible;

public import qt.gui.QAccessible_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QObject;
public import qt.gui.QAccessibleInterface;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QAccessible : QtdObject
{
    public enum Method {
        ListSupportedMethods = 0,
        SetCursorPosition = 1,
        GetCursorPosition = 2,
        ForegroundColor = 3,
        BackgroundColor = 4
    }

    alias Method.ListSupportedMethods ListSupportedMethods;
    alias Method.SetCursorPosition SetCursorPosition;
    alias Method.GetCursorPosition GetCursorPosition;
    alias Method.ForegroundColor ForegroundColor;
    alias Method.BackgroundColor BackgroundColor;

    public enum Role {
        NoRole = 0,
        TitleBar = 1,
        MenuBar = 2,
        ScrollBar = 3,
        Grip = 4,
        Sound = 5,
        Cursor = 6,
        Caret = 7,
        AlertMessage = 8,
        Window = 9,
        Client = 10,
        PopupMenu = 11,
        MenuItem = 12,
        ToolTip = 13,
        Application = 14,
        Document = 15,
        Pane = 16,
        Chart = 17,
        Dialog = 18,
        Border = 19,
        Grouping = 20,
        Separator = 21,
        ToolBar = 22,
        StatusBar = 23,
        Table = 24,
        ColumnHeader = 25,
        RowHeader = 26,
        Column = 27,
        Row = 28,
        Cell = 29,
        Link = 30,
        HelpBalloon = 31,
        Assistant = 32,
        List = 33,
        ListItem = 34,
        Tree = 35,
        TreeItem = 36,
        PageTab = 37,
        PropertyPage = 38,
        Indicator = 39,
        Graphic = 40,
        StaticText = 41,
        EditableText = 42,
        PushButton = 43,
        CheckBox = 44,
        RadioButton = 45,
        ComboBox = 46,
        ProgressBar = 48,
        Dial = 49,
        HotkeyField = 50,
        Slider = 51,
        SpinBox = 52,
        Canvas = 53,
        Animation = 54,
        Equation = 55,
        ButtonDropDown = 56,
        ButtonMenu = 57,
        ButtonDropGrid = 58,
        Whitespace = 59,
        PageTabList = 60,
        Clock = 61,
        Splitter = 62,
        LayeredPane = 63,
        UserRole = 65535
    }

    alias Role.NoRole NoRole;
    alias Role.TitleBar TitleBar;
    alias Role.MenuBar MenuBar;
    alias Role.ScrollBar ScrollBar;
    alias Role.Grip Grip;
    alias Role.Sound Sound;
    alias Role.Cursor Cursor;
    alias Role.Caret Caret;
    alias Role.AlertMessage AlertMessage;
    alias Role.Window Window;
    alias Role.Client Client;
    alias Role.PopupMenu PopupMenu;
    alias Role.MenuItem MenuItem;
    alias Role.ToolTip ToolTip;
    alias Role.Application Application;
    alias Role.Document Document;
    alias Role.Pane Pane;
    alias Role.Chart Chart;
    alias Role.Dialog Dialog;
    alias Role.Border Border;
    alias Role.Grouping Grouping;
    alias Role.Separator Separator;
    alias Role.ToolBar ToolBar;
    alias Role.StatusBar StatusBar;
    alias Role.Table Table;
    alias Role.ColumnHeader ColumnHeader;
    alias Role.RowHeader RowHeader;
    alias Role.Column Column;
    alias Role.Row Row;
    alias Role.Cell Cell;
    alias Role.Link Link;
    alias Role.HelpBalloon HelpBalloon;
    alias Role.Assistant Assistant;
    alias Role.List List;
    alias Role.ListItem ListItem;
    alias Role.Tree Tree;
    alias Role.TreeItem TreeItem;
    alias Role.PageTab PageTab;
    alias Role.PropertyPage PropertyPage;
    alias Role.Indicator Indicator;
    alias Role.Graphic Graphic;
    alias Role.StaticText StaticText;
    alias Role.EditableText EditableText;
    alias Role.PushButton PushButton;
    alias Role.CheckBox CheckBox;
    alias Role.RadioButton RadioButton;
    alias Role.ComboBox ComboBox;
    alias Role.ProgressBar ProgressBar;
    alias Role.Dial Dial;
    alias Role.HotkeyField HotkeyField;
    alias Role.Slider Slider;
    alias Role.SpinBox SpinBox;
    alias Role.Canvas Canvas;
    alias Role.Animation Animation;
    alias Role.Equation Equation;
    alias Role.ButtonDropDown ButtonDropDown;
    alias Role.ButtonMenu ButtonMenu;
    alias Role.ButtonDropGrid ButtonDropGrid;
    alias Role.Whitespace Whitespace;
    alias Role.PageTabList PageTabList;
    alias Role.Clock Clock;
    alias Role.Splitter Splitter;
    alias Role.LayeredPane LayeredPane;
    alias Role.UserRole UserRole;

    public enum Action {
        DefaultAction = 0,
        Press = -1,
        SetFocus = -2,
        Increase = -3,
        Decrease = -4,
        Accept = -5,
        Cancel = -6,
        Select = -7,
        ClearSelection = -8,
        RemoveSelection = -9,
        ExtendSelection = -10,
        AddToSelection = -11
    }

    alias Action.DefaultAction DefaultAction;
    alias Action.Press Press;
    alias Action.SetFocus SetFocus;
    alias Action.Increase Increase;
    alias Action.Decrease Decrease;
    alias Action.Accept Accept;
    alias Action.Cancel Cancel;
    alias Action.Select Select;
    alias Action.ClearSelection ClearSelection;
    alias Action.RemoveSelection RemoveSelection;
    alias Action.ExtendSelection ExtendSelection;
    alias Action.AddToSelection AddToSelection;

    public enum Event {
        SoundPlayed = 1,
        Alert = 2,
        ForegroundChanged = 3,
        MenuStart = 4,
        MenuEnd = 5,
        PopupMenuStart = 6,
        PopupMenuEnd = 7,
        ContextHelpStart = 12,
        ContextHelpEnd = 13,
        DragDropStart = 14,
        DragDropEnd = 15,
        DialogStart = 16,
        DialogEnd = 17,
        ScrollingStart = 18,
        ScrollingEnd = 19,
        MenuCommand = 24,
        ObjectCreated = 32768,
        ObjectDestroyed = 32769,
        ObjectShow = 32770,
        ObjectHide = 32771,
        ObjectReorder = 32772,
        Focus = 32773,
        Selection = 32774,
        SelectionAdd = 32775,
        SelectionRemove = 32776,
        SelectionWithin = 32777,
        StateChanged = 32778,
        LocationChanged = 32779,
        NameChanged = 32780,
        DescriptionChanged = 32781,
        ValueChanged = 32782,
        ParentChanged = 32783,
        HelpChanged = 32928,
        DefaultActionChanged = 32944,
        AcceleratorChanged = 32960
    }

    alias Event.SoundPlayed SoundPlayed;
    alias Event.Alert Alert;
    alias Event.ForegroundChanged ForegroundChanged;
    alias Event.MenuStart MenuStart;
    alias Event.MenuEnd MenuEnd;
    alias Event.PopupMenuStart PopupMenuStart;
    alias Event.PopupMenuEnd PopupMenuEnd;
    alias Event.ContextHelpStart ContextHelpStart;
    alias Event.ContextHelpEnd ContextHelpEnd;
    alias Event.DragDropStart DragDropStart;
    alias Event.DragDropEnd DragDropEnd;
    alias Event.DialogStart DialogStart;
    alias Event.DialogEnd DialogEnd;
    alias Event.ScrollingStart ScrollingStart;
    alias Event.ScrollingEnd ScrollingEnd;
    alias Event.MenuCommand MenuCommand;
    alias Event.ObjectCreated ObjectCreated;
    alias Event.ObjectDestroyed ObjectDestroyed;
    alias Event.ObjectShow ObjectShow;
    alias Event.ObjectHide ObjectHide;
    alias Event.ObjectReorder ObjectReorder;
    alias Event.Focus Focus;
    alias Event.Selection Selection;
    alias Event.SelectionAdd SelectionAdd;
    alias Event.SelectionRemove SelectionRemove;
    alias Event.SelectionWithin SelectionWithin;
    alias Event.StateChanged StateChanged;
    alias Event.LocationChanged LocationChanged;
    alias Event.NameChanged NameChanged;
    alias Event.DescriptionChanged DescriptionChanged;
    alias Event.ValueChanged ValueChanged;
    alias Event.ParentChanged ParentChanged;
    alias Event.HelpChanged HelpChanged;
    alias Event.DefaultActionChanged DefaultActionChanged;
    alias Event.AcceleratorChanged AcceleratorChanged;

    public enum RelationFlag {
        Unrelated = 0,
        Self = 1,
        Ancestor = 2,
        Child = 4,
        Descendent = 8,
        Sibling = 16,
        HierarchyMask = 255,
        Up = 256,
        Down = 512,
        Left = 1024,
        Right = 2048,
        Covers = 4096,
        Covered = 8192,
        GeometryMask = 65280,
        FocusChild = 65536,
        Label = 131072,
        Labelled = 262144,
        Controller = 524288,
        Controlled = 1048576,
        LogicalMask = 16711680
    }

    alias RelationFlag.Unrelated Unrelated;
    alias RelationFlag.Self Self;
    alias RelationFlag.Ancestor Ancestor;
    alias RelationFlag.Child Child;
    alias RelationFlag.Descendent Descendent;
    alias RelationFlag.Sibling Sibling;
    alias RelationFlag.HierarchyMask HierarchyMask;
    alias RelationFlag.Up Up;
    alias RelationFlag.Down Down;
    alias RelationFlag.Left Left;
    alias RelationFlag.Right Right;
    alias RelationFlag.Covers Covers;
    alias RelationFlag.Covered Covered;
    alias RelationFlag.GeometryMask GeometryMask;
    alias RelationFlag.FocusChild FocusChild;
    alias RelationFlag.Label Label;
    alias RelationFlag.Labelled Labelled;
    alias RelationFlag.Controller Controller;
    alias RelationFlag.Controlled Controlled;
    alias RelationFlag.LogicalMask LogicalMask;

    public enum StateFlag {
        Normal = 0,
        Unavailable = 1,
        Selected = 2,
        Focused = 4,
        Pressed = 8,
        Checked = 16,
        Mixed = 32,
        ReadOnly = 64,
        HotTracked = 128,
        DefaultButton = 256,
        Expanded = 512,
        Collapsed = 1024,
        Busy = 2048,
        Marqueed = 8192,
        Animated = 16384,
        Invisible = 32768,
        Offscreen = 65536,
        Sizeable = 131072,
        Movable = 262144,
        SelfVoicing = 524288,
        Focusable = 1048576,
        Selectable = 2097152,
        Linked = 4194304,
        Traversed = 8388608,
        MultiSelectable = 16777216,
        ExtSelectable = 33554432,
        Protected = 536870912,
        HasPopup = 1073741824,
        Modal = -2147483648,
        HasInvokeExtension = 268435456
    }

    alias StateFlag.Normal Normal;
    alias StateFlag.Unavailable Unavailable;
    alias StateFlag.Selected Selected;
    alias StateFlag.Focused Focused;
    alias StateFlag.Pressed Pressed;
    alias StateFlag.Checked Checked;
    alias StateFlag.Mixed Mixed;
    alias StateFlag.ReadOnly ReadOnly;
    alias StateFlag.HotTracked HotTracked;
    alias StateFlag.DefaultButton DefaultButton;
    alias StateFlag.Expanded Expanded;
    alias StateFlag.Collapsed Collapsed;
    alias StateFlag.Busy Busy;
    alias StateFlag.Marqueed Marqueed;
    alias StateFlag.Animated Animated;
    alias StateFlag.Invisible Invisible;
    alias StateFlag.Offscreen Offscreen;
    alias StateFlag.Sizeable Sizeable;
    alias StateFlag.Movable Movable;
    alias StateFlag.SelfVoicing SelfVoicing;
    alias StateFlag.Focusable Focusable;
    alias StateFlag.Selectable Selectable;
    alias StateFlag.Linked Linked;
    alias StateFlag.Traversed Traversed;
    alias StateFlag.MultiSelectable MultiSelectable;
    alias StateFlag.ExtSelectable ExtSelectable;
    alias StateFlag.Protected Protected;
    alias StateFlag.HasPopup HasPopup;
    alias StateFlag.Modal Modal;
    alias StateFlag.HasInvokeExtension HasInvokeExtension;

    public enum Text {
        Name = 0,
        Description = 1,
        Value = 2,
        Help = 3,
        Accelerator = 4,
        UserText = 65535
    }

    alias Text.Name Name;
    alias Text.Description Description;
    alias Text.Value Value;
    alias Text.Help Help;
    alias Text.Accelerator Accelerator;
    alias Text.UserText UserText;


// Functions

    public this() {
        void* ret = qtd_QAccessible_QAccessible(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public static bool isActive() {
        return qtd_QAccessible_isActive();
    }

    public static QAccessibleInterface queryAccessibleInterface(QObject arg__1) {
        void* ret = qtd_QAccessible_queryAccessibleInterface_QObject(arg__1 is null ? null : arg__1.qtdNativeId);
        QAccessibleInterface __d_return_value = qtd_QAccessibleInterface_from_ptr(ret);

        return __d_return_value;
    }

    public static void setRootObject(QObject arg__1) {
        qtd_QAccessible_setRootObject_QObject(arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public static void updateAccessibility(QObject arg__1, int who, QAccessible.Event reason) {
        qtd_QAccessible_updateAccessibility_QObject_int_Event(arg__1 is null ? null : arg__1.qtdNativeId, who, reason);
    }
// Field accessors
    static QAccessible __getObject(void* nativeId) {
        return qtd_QAccessible_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QAccessible;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QAccessible_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QAccessible_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QAccessible_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
QAccessible qtd_QAccessible_from_ptr(void* ret) {
    auto return_value = new QAccessible(ret, QtdObjectInitFlags.nativeOwnership);
    return return_value;
}

extern (C) void qtd_QAccessible_delete(void *ptr);
extern (C) void qtd_QAccessible_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QAccessible_QAccessible(void *d_ptr);
private extern(C) bool  qtd_QAccessible_isActive();
private extern(C) void*  qtd_QAccessible_queryAccessibleInterface_QObject(void* arg__1);
private extern(C) void  qtd_QAccessible_setRootObject_QObject(void* arg__1);
private extern(C) void  qtd_QAccessible_updateAccessibility_QObject_int_Event(void* arg__1,
 int who1,
 int reason2);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QAccessible_initCallBacks(void* virtuals);

extern(C) void static_init_QAccessible() {
    qtd_QAccessible_initCallBacks(null);
}

// signal handlers

