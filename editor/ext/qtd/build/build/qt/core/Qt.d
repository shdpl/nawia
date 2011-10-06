module qt.core.Qt;

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


public interface Qt
{
    public enum ShortcutContext {
        WidgetShortcut = 0,
        WindowShortcut = 1,
        ApplicationShortcut = 2,
        WidgetWithChildrenShortcut = 3
    }

    alias ShortcutContext.WidgetShortcut WidgetShortcut;
    alias ShortcutContext.WindowShortcut WindowShortcut;
    alias ShortcutContext.ApplicationShortcut ApplicationShortcut;
    alias ShortcutContext.WidgetWithChildrenShortcut WidgetWithChildrenShortcut;

    public enum CheckState {
        Unchecked = 0,
        PartiallyChecked = 1,
        Checked = 2
    }

    alias CheckState.Unchecked Unchecked;
    alias CheckState.PartiallyChecked PartiallyChecked;
    alias CheckState.Checked Checked;

    public enum FocusPolicy {
        NoFocus = 0,
        TabFocus = 1,
        ClickFocus = 2,
        StrongFocus = 11,
        WheelFocus = 15
    }

    alias FocusPolicy.NoFocus NoFocus;
    alias FocusPolicy.TabFocus TabFocus;
    alias FocusPolicy.ClickFocus ClickFocus;
    alias FocusPolicy.StrongFocus StrongFocus;
    alias FocusPolicy.WheelFocus WheelFocus;

    public enum DropAction {
        CopyAction = 1,
        MoveAction = 2,
        LinkAction = 4,
        ActionMask = 255,
        TargetMoveAction = 32770,
        IgnoreAction = 0
    }

    alias DropAction.CopyAction CopyAction;
    alias DropAction.MoveAction MoveAction;
    alias DropAction.LinkAction LinkAction;
    alias DropAction.ActionMask ActionMask;
    alias DropAction.TargetMoveAction TargetMoveAction;
    alias DropAction.IgnoreAction IgnoreAction;

    public enum WindowType {
        Widget = 0,
        Window = 1,
        Dialog = 3,
        Sheet = 5,
        Drawer = 7,
        Popup = 9,
        Tool = 11,
        ToolTip = 13,
        SplashScreen = 15,
        Desktop = 17,
        SubWindow = 18,
        WindowType_Mask = 255,
        MSWindowsFixedSizeDialogHint = 256,
        MSWindowsOwnDC = 512,
        X11BypassWindowManagerHint = 1024,
        FramelessWindowHint = 2048,
        WindowTitleHint = 4096,
        WindowSystemMenuHint = 8192,
        WindowMinimizeButtonHint = 16384,
        WindowMaximizeButtonHint = 32768,
        WindowMinMaxButtonsHint = 49152,
        WindowContextHelpButtonHint = 65536,
        WindowShadeButtonHint = 131072,
        WindowStaysOnTopHint = 262144,
        CustomizeWindowHint = 33554432,
        WindowStaysOnBottomHint = 67108864,
        WindowCloseButtonHint = 134217728,
        MacWindowToolBarButtonHint = 268435456,
        BypassGraphicsProxyWidget = 536870912,
        WindowOkButtonHint = 524288,
        WindowCancelButtonHint = 1048576,
        WindowSoftkeysVisibleHint = 1073741824,
        WindowSoftkeysRespondHint = -2147483648
    }

    alias WindowType.Widget Widget;
    alias WindowType.Window Window;
    alias WindowType.Dialog Dialog;
    alias WindowType.Sheet Sheet;
    alias WindowType.Drawer Drawer;
    alias WindowType.Popup Popup;
    alias WindowType.Tool Tool;
    alias WindowType.ToolTip ToolTip;
    alias WindowType.SplashScreen SplashScreen;
    alias WindowType.Desktop Desktop;
    alias WindowType.SubWindow SubWindow;
    alias WindowType.WindowType_Mask WindowType_Mask;
    alias WindowType.MSWindowsFixedSizeDialogHint MSWindowsFixedSizeDialogHint;
    alias WindowType.MSWindowsOwnDC MSWindowsOwnDC;
    alias WindowType.X11BypassWindowManagerHint X11BypassWindowManagerHint;
    alias WindowType.FramelessWindowHint FramelessWindowHint;
    alias WindowType.WindowTitleHint WindowTitleHint;
    alias WindowType.WindowSystemMenuHint WindowSystemMenuHint;
    alias WindowType.WindowMinimizeButtonHint WindowMinimizeButtonHint;
    alias WindowType.WindowMaximizeButtonHint WindowMaximizeButtonHint;
    alias WindowType.WindowMinMaxButtonsHint WindowMinMaxButtonsHint;
    alias WindowType.WindowContextHelpButtonHint WindowContextHelpButtonHint;
    alias WindowType.WindowShadeButtonHint WindowShadeButtonHint;
    alias WindowType.WindowStaysOnTopHint WindowStaysOnTopHint;
    alias WindowType.CustomizeWindowHint CustomizeWindowHint;
    alias WindowType.WindowStaysOnBottomHint WindowStaysOnBottomHint;
    alias WindowType.WindowCloseButtonHint WindowCloseButtonHint;
    alias WindowType.MacWindowToolBarButtonHint MacWindowToolBarButtonHint;
    alias WindowType.BypassGraphicsProxyWidget BypassGraphicsProxyWidget;
    alias WindowType.WindowOkButtonHint WindowOkButtonHint;
    alias WindowType.WindowCancelButtonHint WindowCancelButtonHint;
    alias WindowType.WindowSoftkeysVisibleHint WindowSoftkeysVisibleHint;
    alias WindowType.WindowSoftkeysRespondHint WindowSoftkeysRespondHint;

    public enum DateFormat {
        TextDate = 0,
        ISODate = 1,
        SystemLocaleDate = 2,
        LocaleDate = 3,
        SystemLocaleShortDate = 4,
        SystemLocaleLongDate = 5,
        DefaultLocaleShortDate = 6,
        DefaultLocaleLongDate = 7
    }

    alias DateFormat.TextDate TextDate;
    alias DateFormat.ISODate ISODate;
    alias DateFormat.SystemLocaleDate SystemLocaleDate;
    alias DateFormat.LocaleDate LocaleDate;
    alias DateFormat.SystemLocaleShortDate SystemLocaleShortDate;
    alias DateFormat.SystemLocaleLongDate SystemLocaleLongDate;
    alias DateFormat.DefaultLocaleShortDate DefaultLocaleShortDate;
    alias DateFormat.DefaultLocaleLongDate DefaultLocaleLongDate;

    public enum TextFormat {
        PlainText = 0,
        RichText = 1,
        AutoText = 2,
        LogText = 3
    }

    alias TextFormat.PlainText PlainText;
    alias TextFormat.RichText RichText;
    alias TextFormat.AutoText AutoText;
    alias TextFormat.LogText LogText;

    public enum PenJoinStyle {
        MiterJoin = 0,
        BevelJoin = 64,
        RoundJoin = 128,
        SvgMiterJoin = 256,
        MPenJoinStyle = 448
    }

    alias PenJoinStyle.MiterJoin MiterJoin;
    alias PenJoinStyle.BevelJoin BevelJoin;
    alias PenJoinStyle.RoundJoin RoundJoin;
    alias PenJoinStyle.SvgMiterJoin SvgMiterJoin;
    alias PenJoinStyle.MPenJoinStyle MPenJoinStyle;

    public enum CaseSensitivity {
        CaseInsensitive = 0,
        CaseSensitive = 1
    }

    alias CaseSensitivity.CaseInsensitive CaseInsensitive;
    alias CaseSensitivity.CaseSensitive CaseSensitive;

    public enum EventPriority {
        HighEventPriority = 1,
        NormalEventPriority = 0,
        LowEventPriority = -1
    }

    alias EventPriority.HighEventPriority HighEventPriority;
    alias EventPriority.NormalEventPriority NormalEventPriority;
    alias EventPriority.LowEventPriority LowEventPriority;

    public enum ImageConversionFlag {
        ColorMode_Mask = 3,
        AutoColor = 0,
        MonoOnly = 2,
        AlphaDither_Mask = 12,
        OrderedAlphaDither = 4,
        DiffuseAlphaDither = 8,
        Dither_Mask = 48,
        OrderedDither = 16,
        ThresholdDither = 32,
        DitherMode_Mask = 192,
        PreferDither = 64,
        AvoidDither = 128,
        NoOpaqueDetection = 256
    }

    alias ImageConversionFlag.ColorMode_Mask ColorMode_Mask;
    alias ImageConversionFlag.AutoColor AutoColor;
    alias ImageConversionFlag.MonoOnly MonoOnly;
    alias ImageConversionFlag.AlphaDither_Mask AlphaDither_Mask;
    alias ImageConversionFlag.OrderedAlphaDither OrderedAlphaDither;
    alias ImageConversionFlag.DiffuseAlphaDither DiffuseAlphaDither;
    alias ImageConversionFlag.Dither_Mask Dither_Mask;
    alias ImageConversionFlag.OrderedDither OrderedDither;
    alias ImageConversionFlag.ThresholdDither ThresholdDither;
    alias ImageConversionFlag.DitherMode_Mask DitherMode_Mask;
    alias ImageConversionFlag.PreferDither PreferDither;
    alias ImageConversionFlag.AvoidDither AvoidDither;
    alias ImageConversionFlag.NoOpaqueDetection NoOpaqueDetection;

    public enum BGMode {
        TransparentMode = 0,
        OpaqueMode = 1
    }

    alias BGMode.TransparentMode TransparentMode;
    alias BGMode.OpaqueMode OpaqueMode;

    public enum ConnectionType {
        AutoConnection = 0,
        DirectConnection = 1,
        QueuedConnection = 2,
        AutoCompatConnection = 3,
        BlockingQueuedConnection = 4,
        UniqueConnection = 128
    }

    alias ConnectionType.AutoConnection AutoConnection;
    alias ConnectionType.DirectConnection DirectConnection;
    alias ConnectionType.QueuedConnection QueuedConnection;
    alias ConnectionType.AutoCompatConnection AutoCompatConnection;
    alias ConnectionType.BlockingQueuedConnection BlockingQueuedConnection;
    alias ConnectionType.UniqueConnection UniqueConnection;

    public enum ToolBarArea {
        LeftToolBarArea = 1,
        RightToolBarArea = 2,
        TopToolBarArea = 4,
        BottomToolBarArea = 8,
        ToolBarArea_Mask = 15,
        NoToolBarArea = 0
    }

    alias ToolBarArea.LeftToolBarArea LeftToolBarArea;
    alias ToolBarArea.RightToolBarArea RightToolBarArea;
    alias ToolBarArea.TopToolBarArea TopToolBarArea;
    alias ToolBarArea.BottomToolBarArea BottomToolBarArea;
    alias ToolBarArea.ToolBarArea_Mask ToolBarArea_Mask;
    alias ToolBarArea.NoToolBarArea NoToolBarArea;

    public enum SizeMode {
        AbsoluteSize = 0,
        RelativeSize = 1
    }

    alias SizeMode.AbsoluteSize AbsoluteSize;
    alias SizeMode.RelativeSize RelativeSize;

    public enum FocusReason {
        MouseFocusReason = 0,
        TabFocusReason = 1,
        BacktabFocusReason = 2,
        ActiveWindowFocusReason = 3,
        PopupFocusReason = 4,
        ShortcutFocusReason = 5,
        MenuBarFocusReason = 6,
        OtherFocusReason = 7,
        NoFocusReason = 8
    }

    alias FocusReason.MouseFocusReason MouseFocusReason;
    alias FocusReason.TabFocusReason TabFocusReason;
    alias FocusReason.BacktabFocusReason BacktabFocusReason;
    alias FocusReason.ActiveWindowFocusReason ActiveWindowFocusReason;
    alias FocusReason.PopupFocusReason PopupFocusReason;
    alias FocusReason.ShortcutFocusReason ShortcutFocusReason;
    alias FocusReason.MenuBarFocusReason MenuBarFocusReason;
    alias FocusReason.OtherFocusReason OtherFocusReason;
    alias FocusReason.NoFocusReason NoFocusReason;

    public enum Modifier {
        META = 0,
        SHIFT = 0,
        CTRL = 0,
        ALT = 0,
        MODIFIER_MASK = 0,
        UNICODE_ACCEL = 0
    }

    alias Modifier.META META;
    alias Modifier.SHIFT SHIFT;
    alias Modifier.CTRL CTRL;
    alias Modifier.ALT ALT;
    alias Modifier.MODIFIER_MASK MODIFIER_MASK;
    alias Modifier.UNICODE_ACCEL UNICODE_ACCEL;

    public enum WhiteSpaceMode {
        WhiteSpaceNormal = 0,
        WhiteSpacePre = 1,
        WhiteSpaceNoWrap = 2,
        WhiteSpaceModeUndefined = -1
    }

    alias WhiteSpaceMode.WhiteSpaceNormal WhiteSpaceNormal;
    alias WhiteSpaceMode.WhiteSpacePre WhiteSpacePre;
    alias WhiteSpaceMode.WhiteSpaceNoWrap WhiteSpaceNoWrap;
    alias WhiteSpaceMode.WhiteSpaceModeUndefined WhiteSpaceModeUndefined;

    public enum AspectRatioMode {
        IgnoreAspectRatio = 0,
        KeepAspectRatio = 1,
        KeepAspectRatioByExpanding = 2
    }

    alias AspectRatioMode.IgnoreAspectRatio IgnoreAspectRatio;
    alias AspectRatioMode.KeepAspectRatio KeepAspectRatio;
    alias AspectRatioMode.KeepAspectRatioByExpanding KeepAspectRatioByExpanding;

    public enum SizeHint {
        MinimumSize = 0,
        PreferredSize = 1,
        MaximumSize = 2,
        MinimumDescent = 3,
        NSizeHints = 4
    }

    alias SizeHint.MinimumSize MinimumSize;
    alias SizeHint.PreferredSize PreferredSize;
    alias SizeHint.MaximumSize MaximumSize;
    alias SizeHint.MinimumDescent MinimumDescent;
    alias SizeHint.NSizeHints NSizeHints;

    public enum AlignmentFlag {
        AlignLeft = 1,
        AlignRight = 2,
        AlignHCenter = 4,
        AlignJustify = 8,
        AlignAbsolute = 16,
        AlignHorizontal_Mask = 31,
        AlignTop = 32,
        AlignBottom = 64,
        AlignVCenter = 128,
        AlignVertical_Mask = 224,
        AlignCenter = 132
    }

    alias AlignmentFlag.AlignLeft AlignLeft;
    alias AlignmentFlag.AlignRight AlignRight;
    alias AlignmentFlag.AlignHCenter AlignHCenter;
    alias AlignmentFlag.AlignJustify AlignJustify;
    alias AlignmentFlag.AlignAbsolute AlignAbsolute;
    alias AlignmentFlag.AlignHorizontal_Mask AlignHorizontal_Mask;
    alias AlignmentFlag.AlignTop AlignTop;
    alias AlignmentFlag.AlignBottom AlignBottom;
    alias AlignmentFlag.AlignVCenter AlignVCenter;
    alias AlignmentFlag.AlignVertical_Mask AlignVertical_Mask;
    alias AlignmentFlag.AlignCenter AlignCenter;

    public enum ContextMenuPolicy {
        NoContextMenu = 0,
        DefaultContextMenu = 1,
        ActionsContextMenu = 2,
        CustomContextMenu = 3,
        PreventContextMenu = 4
    }

    alias ContextMenuPolicy.NoContextMenu NoContextMenu;
    alias ContextMenuPolicy.DefaultContextMenu DefaultContextMenu;
    alias ContextMenuPolicy.ActionsContextMenu ActionsContextMenu;
    alias ContextMenuPolicy.CustomContextMenu CustomContextMenu;
    alias ContextMenuPolicy.PreventContextMenu PreventContextMenu;

    public enum DockWidgetArea {
        LeftDockWidgetArea = 1,
        RightDockWidgetArea = 2,
        TopDockWidgetArea = 4,
        BottomDockWidgetArea = 8,
        DockWidgetArea_Mask = 15,
        NoDockWidgetArea = 0
    }

    alias DockWidgetArea.LeftDockWidgetArea LeftDockWidgetArea;
    alias DockWidgetArea.RightDockWidgetArea RightDockWidgetArea;
    alias DockWidgetArea.TopDockWidgetArea TopDockWidgetArea;
    alias DockWidgetArea.BottomDockWidgetArea BottomDockWidgetArea;
    alias DockWidgetArea.DockWidgetArea_Mask DockWidgetArea_Mask;
    alias DockWidgetArea.NoDockWidgetArea NoDockWidgetArea;

    public enum UIEffect {
        UI_General = 0,
        UI_AnimateMenu = 1,
        UI_FadeMenu = 2,
        UI_AnimateCombo = 3,
        UI_AnimateTooltip = 4,
        UI_FadeTooltip = 5,
        UI_AnimateToolBox = 6
    }

    alias UIEffect.UI_General UI_General;
    alias UIEffect.UI_AnimateMenu UI_AnimateMenu;
    alias UIEffect.UI_FadeMenu UI_FadeMenu;
    alias UIEffect.UI_AnimateCombo UI_AnimateCombo;
    alias UIEffect.UI_AnimateTooltip UI_AnimateTooltip;
    alias UIEffect.UI_FadeTooltip UI_FadeTooltip;
    alias UIEffect.UI_AnimateToolBox UI_AnimateToolBox;

    public enum GlobalColor {
        color0 = 0,
        color1 = 1,
        black = 2,
        white = 3,
        darkGray = 4,
        gray = 5,
        lightGray = 6,
        red = 7,
        green = 8,
        blue = 9,
        cyan = 10,
        magenta = 11,
        yellow = 12,
        darkRed = 13,
        darkGreen = 14,
        darkBlue = 15,
        darkCyan = 16,
        darkMagenta = 17,
        darkYellow = 18,
        transparent = 19
    }

    alias GlobalColor.color0 color0;
    alias GlobalColor.color1 color1;
    alias GlobalColor.black black;
    alias GlobalColor.white white;
    alias GlobalColor.darkGray darkGray;
    alias GlobalColor.gray gray;
    alias GlobalColor.lightGray lightGray;
    alias GlobalColor.red red;
    alias GlobalColor.green green;
    alias GlobalColor.blue blue;
    alias GlobalColor.cyan cyan;
    alias GlobalColor.magenta magenta;
    alias GlobalColor.yellow yellow;
    alias GlobalColor.darkRed darkRed;
    alias GlobalColor.darkGreen darkGreen;
    alias GlobalColor.darkBlue darkBlue;
    alias GlobalColor.darkCyan darkCyan;
    alias GlobalColor.darkMagenta darkMagenta;
    alias GlobalColor.darkYellow darkYellow;
    alias GlobalColor.transparent transparent;

    public enum KeyboardModifier {
        NoModifier = 0,
        ShiftModifier = 33554432,
        ControlModifier = 67108864,
        AltModifier = 134217728,
        MetaModifier = 268435456,
        KeypadModifier = 536870912,
        GroupSwitchModifier = 1073741824,
        KeyboardModifierMask = -33554432
    }

    alias KeyboardModifier.NoModifier NoModifier;
    alias KeyboardModifier.ShiftModifier ShiftModifier;
    alias KeyboardModifier.ControlModifier ControlModifier;
    alias KeyboardModifier.AltModifier AltModifier;
    alias KeyboardModifier.MetaModifier MetaModifier;
    alias KeyboardModifier.KeypadModifier KeypadModifier;
    alias KeyboardModifier.GroupSwitchModifier GroupSwitchModifier;
    alias KeyboardModifier.KeyboardModifierMask KeyboardModifierMask;

    public enum ItemDataRole {
        DisplayRole = 0,
        DecorationRole = 1,
        EditRole = 2,
        ToolTipRole = 3,
        StatusTipRole = 4,
        WhatsThisRole = 5,
        FontRole = 6,
        TextAlignmentRole = 7,
        BackgroundRole = 8,
        ForegroundRole = 9,
        CheckStateRole = 10,
        AccessibleTextRole = 11,
        AccessibleDescriptionRole = 12,
        SizeHintRole = 13,
        DisplayPropertyRole = 27,
        DecorationPropertyRole = 28,
        ToolTipPropertyRole = 29,
        StatusTipPropertyRole = 30,
        WhatsThisPropertyRole = 31,
        UserRole = 32
    }

    alias ItemDataRole.DisplayRole DisplayRole;
    alias ItemDataRole.DecorationRole DecorationRole;
    alias ItemDataRole.EditRole EditRole;
    alias ItemDataRole.ToolTipRole ToolTipRole;
    alias ItemDataRole.StatusTipRole StatusTipRole;
    alias ItemDataRole.WhatsThisRole WhatsThisRole;
    alias ItemDataRole.FontRole FontRole;
    alias ItemDataRole.TextAlignmentRole TextAlignmentRole;
    alias ItemDataRole.BackgroundRole BackgroundRole;
    alias ItemDataRole.ForegroundRole ForegroundRole;
    alias ItemDataRole.CheckStateRole CheckStateRole;
    alias ItemDataRole.AccessibleTextRole AccessibleTextRole;
    alias ItemDataRole.AccessibleDescriptionRole AccessibleDescriptionRole;
    alias ItemDataRole.SizeHintRole SizeHintRole;
    alias ItemDataRole.DisplayPropertyRole DisplayPropertyRole;
    alias ItemDataRole.DecorationPropertyRole DecorationPropertyRole;
    alias ItemDataRole.ToolTipPropertyRole ToolTipPropertyRole;
    alias ItemDataRole.StatusTipPropertyRole StatusTipPropertyRole;
    alias ItemDataRole.WhatsThisPropertyRole WhatsThisPropertyRole;
    alias ItemDataRole.UserRole UserRole;

    public enum ScrollBarPolicy {
        ScrollBarAsNeeded = 0,
        ScrollBarAlwaysOff = 1,
        ScrollBarAlwaysOn = 2
    }

    alias ScrollBarPolicy.ScrollBarAsNeeded ScrollBarAsNeeded;
    alias ScrollBarPolicy.ScrollBarAlwaysOff ScrollBarAlwaysOff;
    alias ScrollBarPolicy.ScrollBarAlwaysOn ScrollBarAlwaysOn;

    public enum AnchorAttribute {
        AnchorName = 0,
        AnchorHref = 1
    }

    alias AnchorAttribute.AnchorName AnchorName;
    alias AnchorAttribute.AnchorHref AnchorHref;

    public enum WindowModality {
        NonModal = 0,
        WindowModal = 1,
        ApplicationModal = 2
    }

    alias WindowModality.NonModal NonModal;
    alias WindowModality.WindowModal WindowModal;
    alias WindowModality.ApplicationModal ApplicationModal;

    public enum SortOrder {
        AscendingOrder = 0,
        DescendingOrder = 1
    }

    alias SortOrder.AscendingOrder AscendingOrder;
    alias SortOrder.DescendingOrder DescendingOrder;

    public enum PenStyle {
        NoPen = 0,
        SolidLine = 1,
        DashLine = 2,
        DotLine = 3,
        DashDotLine = 4,
        DashDotDotLine = 5,
        CustomDashLine = 6,
        MPenStyle = 15
    }

    alias PenStyle.NoPen NoPen;
    alias PenStyle.SolidLine SolidLine;
    alias PenStyle.DashLine DashLine;
    alias PenStyle.DotLine DotLine;
    alias PenStyle.DashDotLine DashDotLine;
    alias PenStyle.DashDotDotLine DashDotDotLine;
    alias PenStyle.CustomDashLine CustomDashLine;
    alias PenStyle.MPenStyle MPenStyle;

    public enum ItemFlag {
        NoItemFlags = 0,
        ItemIsSelectable = 1,
        ItemIsEditable = 2,
        ItemIsDragEnabled = 4,
        ItemIsDropEnabled = 8,
        ItemIsUserCheckable = 16,
        ItemIsEnabled = 32,
        ItemIsTristate = 64
    }

    alias ItemFlag.NoItemFlags NoItemFlags;
    alias ItemFlag.ItemIsSelectable ItemIsSelectable;
    alias ItemFlag.ItemIsEditable ItemIsEditable;
    alias ItemFlag.ItemIsDragEnabled ItemIsDragEnabled;
    alias ItemFlag.ItemIsDropEnabled ItemIsDropEnabled;
    alias ItemFlag.ItemIsUserCheckable ItemIsUserCheckable;
    alias ItemFlag.ItemIsEnabled ItemIsEnabled;
    alias ItemFlag.ItemIsTristate ItemIsTristate;

    public enum Axis {
        XAxis = 0,
        YAxis = 1,
        ZAxis = 2
    }

    alias Axis.XAxis XAxis;
    alias Axis.YAxis YAxis;
    alias Axis.ZAxis ZAxis;

    public enum TransformationMode {
        FastTransformation = 0,
        SmoothTransformation = 1
    }

    alias TransformationMode.FastTransformation FastTransformation;
    alias TransformationMode.SmoothTransformation SmoothTransformation;

    public enum WindowFrameSection {
        NoSection = 0,
        LeftSection = 1,
        TopLeftSection = 2,
        TopSection = 3,
        TopRightSection = 4,
        RightSection = 5,
        BottomRightSection = 6,
        BottomSection = 7,
        BottomLeftSection = 8,
        TitleBarArea = 9
    }

    alias WindowFrameSection.NoSection NoSection;
    alias WindowFrameSection.LeftSection LeftSection;
    alias WindowFrameSection.TopLeftSection TopLeftSection;
    alias WindowFrameSection.TopSection TopSection;
    alias WindowFrameSection.TopRightSection TopRightSection;
    alias WindowFrameSection.RightSection RightSection;
    alias WindowFrameSection.BottomRightSection BottomRightSection;
    alias WindowFrameSection.BottomSection BottomSection;
    alias WindowFrameSection.BottomLeftSection BottomLeftSection;
    alias WindowFrameSection.TitleBarArea TitleBarArea;

    public enum HitTestAccuracy {
        ExactHit = 0,
        FuzzyHit = 1
    }

    alias HitTestAccuracy.ExactHit ExactHit;
    alias HitTestAccuracy.FuzzyHit FuzzyHit;

    public enum CursorShape {
        ArrowCursor = 0,
        UpArrowCursor = 1,
        CrossCursor = 2,
        WaitCursor = 3,
        IBeamCursor = 4,
        SizeVerCursor = 5,
        SizeHorCursor = 6,
        SizeBDiagCursor = 7,
        SizeFDiagCursor = 8,
        SizeAllCursor = 9,
        BlankCursor = 10,
        SplitVCursor = 11,
        SplitHCursor = 12,
        PointingHandCursor = 13,
        ForbiddenCursor = 14,
        WhatsThisCursor = 15,
        BusyCursor = 16,
        OpenHandCursor = 17,
        ClosedHandCursor = 18,
        DragCopyCursor = 19,
        DragMoveCursor = 20,
        DragLinkCursor = 21,
        BitmapCursor = 24,
        CustomCursor = 25
    }

    alias CursorShape.ArrowCursor ArrowCursor;
    alias CursorShape.UpArrowCursor UpArrowCursor;
    alias CursorShape.CrossCursor CrossCursor;
    alias CursorShape.WaitCursor WaitCursor;
    alias CursorShape.IBeamCursor IBeamCursor;
    alias CursorShape.SizeVerCursor SizeVerCursor;
    alias CursorShape.SizeHorCursor SizeHorCursor;
    alias CursorShape.SizeBDiagCursor SizeBDiagCursor;
    alias CursorShape.SizeFDiagCursor SizeFDiagCursor;
    alias CursorShape.SizeAllCursor SizeAllCursor;
    alias CursorShape.BlankCursor BlankCursor;
    alias CursorShape.SplitVCursor SplitVCursor;
    alias CursorShape.SplitHCursor SplitHCursor;
    alias CursorShape.PointingHandCursor PointingHandCursor;
    alias CursorShape.ForbiddenCursor ForbiddenCursor;
    alias CursorShape.WhatsThisCursor WhatsThisCursor;
    alias CursorShape.BusyCursor BusyCursor;
    alias CursorShape.OpenHandCursor OpenHandCursor;
    alias CursorShape.ClosedHandCursor ClosedHandCursor;
    alias CursorShape.DragCopyCursor DragCopyCursor;
    alias CursorShape.DragMoveCursor DragMoveCursor;
    alias CursorShape.DragLinkCursor DragLinkCursor;
    alias CursorShape.BitmapCursor BitmapCursor;
    alias CursorShape.CustomCursor CustomCursor;

    public enum ItemSelectionMode {
        ContainsItemShape = 0,
        IntersectsItemShape = 1,
        ContainsItemBoundingRect = 2,
        IntersectsItemBoundingRect = 3
    }

    alias ItemSelectionMode.ContainsItemShape ContainsItemShape;
    alias ItemSelectionMode.IntersectsItemShape IntersectsItemShape;
    alias ItemSelectionMode.ContainsItemBoundingRect ContainsItemBoundingRect;
    alias ItemSelectionMode.IntersectsItemBoundingRect IntersectsItemBoundingRect;

    public enum Orientation {
        Horizontal = 1,
        Vertical = 2
    }

    alias Orientation.Horizontal Horizontal;
    alias Orientation.Vertical Vertical;

    public enum InputMethodQuery {
        ImMicroFocus = 0,
        ImFont = 1,
        ImCursorPosition = 2,
        ImSurroundingText = 3,
        ImCurrentSelection = 4,
        ImMaximumTextLength = 5,
        ImAnchorPosition = 6
    }

    alias InputMethodQuery.ImMicroFocus ImMicroFocus;
    alias InputMethodQuery.ImFont ImFont;
    alias InputMethodQuery.ImCursorPosition ImCursorPosition;
    alias InputMethodQuery.ImSurroundingText ImSurroundingText;
    alias InputMethodQuery.ImCurrentSelection ImCurrentSelection;
    alias InputMethodQuery.ImMaximumTextLength ImMaximumTextLength;
    alias InputMethodQuery.ImAnchorPosition ImAnchorPosition;

    public enum TimeSpec {
        LocalTime = 0,
        UTC = 1,
        OffsetFromUTC = 2
    }

    alias TimeSpec.LocalTime LocalTime;
    alias TimeSpec.UTC UTC;
    alias TimeSpec.OffsetFromUTC OffsetFromUTC;

    public enum ArrowType {
        NoArrow = 0,
        UpArrow = 1,
        DownArrow = 2,
        LeftArrow = 3,
        RightArrow = 4
    }

    alias ArrowType.NoArrow NoArrow;
    alias ArrowType.UpArrow UpArrow;
    alias ArrowType.DownArrow DownArrow;
    alias ArrowType.LeftArrow LeftArrow;
    alias ArrowType.RightArrow RightArrow;

    public enum FillRule {
        OddEvenFill = 0,
        WindingFill = 1
    }

    alias FillRule.OddEvenFill OddEvenFill;
    alias FillRule.WindingFill WindingFill;

    public enum MaskMode {
        MaskInColor = 0,
        MaskOutColor = 1
    }

    alias MaskMode.MaskInColor MaskInColor;
    alias MaskMode.MaskOutColor MaskOutColor;

    public enum WindowState {
        WindowNoState = 0,
        WindowMinimized = 1,
        WindowMaximized = 2,
        WindowFullScreen = 4,
        WindowActive = 8
    }

    alias WindowState.WindowNoState WindowNoState;
    alias WindowState.WindowMinimized WindowMinimized;
    alias WindowState.WindowMaximized WindowMaximized;
    alias WindowState.WindowFullScreen WindowFullScreen;
    alias WindowState.WindowActive WindowActive;

    public enum ToolBarAreaSizes {
        NToolBarAreas = 4
    }

    alias ToolBarAreaSizes.NToolBarAreas NToolBarAreas;

    public enum Corner {
        TopLeftCorner = 0,
        TopRightCorner = 1,
        BottomLeftCorner = 2,
        BottomRightCorner = 3
    }

    alias Corner.TopLeftCorner TopLeftCorner;
    alias Corner.TopRightCorner TopRightCorner;
    alias Corner.BottomLeftCorner BottomLeftCorner;
    alias Corner.BottomRightCorner BottomRightCorner;

    public enum DayOfWeek {
        Monday = 1,
        Tuesday = 2,
        Wednesday = 3,
        Thursday = 4,
        Friday = 5,
        Saturday = 6,
        Sunday = 7
    }

    alias DayOfWeek.Monday Monday;
    alias DayOfWeek.Tuesday Tuesday;
    alias DayOfWeek.Wednesday Wednesday;
    alias DayOfWeek.Thursday Thursday;
    alias DayOfWeek.Friday Friday;
    alias DayOfWeek.Saturday Saturday;
    alias DayOfWeek.Sunday Sunday;

    public enum ClipOperation {
        NoClip = 0,
        ReplaceClip = 1,
        IntersectClip = 2,
        UniteClip = 3
    }

    alias ClipOperation.NoClip NoClip;
    alias ClipOperation.ReplaceClip ReplaceClip;
    alias ClipOperation.IntersectClip IntersectClip;
    alias ClipOperation.UniteClip UniteClip;

    public enum LayoutDirection {
        LeftToRight = 0,
        RightToLeft = 1,
        LayoutDirectionAuto = 2
    }

    alias LayoutDirection.LeftToRight LeftToRight;
    alias LayoutDirection.RightToLeft RightToLeft;
    alias LayoutDirection.LayoutDirectionAuto LayoutDirectionAuto;

    public enum ToolButtonStyle {
        ToolButtonIconOnly = 0,
        ToolButtonTextOnly = 1,
        ToolButtonTextBesideIcon = 2,
        ToolButtonTextUnderIcon = 3,
        ToolButtonFollowStyle = 4
    }

    alias ToolButtonStyle.ToolButtonIconOnly ToolButtonIconOnly;
    alias ToolButtonStyle.ToolButtonTextOnly ToolButtonTextOnly;
    alias ToolButtonStyle.ToolButtonTextBesideIcon ToolButtonTextBesideIcon;
    alias ToolButtonStyle.ToolButtonTextUnderIcon ToolButtonTextUnderIcon;
    alias ToolButtonStyle.ToolButtonFollowStyle ToolButtonFollowStyle;

    public enum DockWidgetAreaSizes {
        NDockWidgetAreas = 4
    }

    alias DockWidgetAreaSizes.NDockWidgetAreas NDockWidgetAreas;

    public enum Key {
        Key_Escape = 16777216,
        Key_Tab = 16777217,
        Key_Backtab = 16777218,
        Key_Backspace = 16777219,
        Key_Return = 16777220,
        Key_Enter = 16777221,
        Key_Insert = 16777222,
        Key_Delete = 16777223,
        Key_Pause = 16777224,
        Key_Print = 16777225,
        Key_SysReq = 16777226,
        Key_Clear = 16777227,
        Key_Home = 16777232,
        Key_End = 16777233,
        Key_Left = 16777234,
        Key_Up = 16777235,
        Key_Right = 16777236,
        Key_Down = 16777237,
        Key_PageUp = 16777238,
        Key_PageDown = 16777239,
        Key_Shift = 16777248,
        Key_Control = 16777249,
        Key_Meta = 16777250,
        Key_Alt = 16777251,
        Key_CapsLock = 16777252,
        Key_NumLock = 16777253,
        Key_ScrollLock = 16777254,
        Key_F1 = 16777264,
        Key_F2 = 16777265,
        Key_F3 = 16777266,
        Key_F4 = 16777267,
        Key_F5 = 16777268,
        Key_F6 = 16777269,
        Key_F7 = 16777270,
        Key_F8 = 16777271,
        Key_F9 = 16777272,
        Key_F10 = 16777273,
        Key_F11 = 16777274,
        Key_F12 = 16777275,
        Key_F13 = 16777276,
        Key_F14 = 16777277,
        Key_F15 = 16777278,
        Key_F16 = 16777279,
        Key_F17 = 16777280,
        Key_F18 = 16777281,
        Key_F19 = 16777282,
        Key_F20 = 16777283,
        Key_F21 = 16777284,
        Key_F22 = 16777285,
        Key_F23 = 16777286,
        Key_F24 = 16777287,
        Key_F25 = 16777288,
        Key_F26 = 16777289,
        Key_F27 = 16777290,
        Key_F28 = 16777291,
        Key_F29 = 16777292,
        Key_F30 = 16777293,
        Key_F31 = 16777294,
        Key_F32 = 16777295,
        Key_F33 = 16777296,
        Key_F34 = 16777297,
        Key_F35 = 16777298,
        Key_Super_L = 16777299,
        Key_Super_R = 16777300,
        Key_Menu = 16777301,
        Key_Hyper_L = 16777302,
        Key_Hyper_R = 16777303,
        Key_Help = 16777304,
        Key_Direction_L = 16777305,
        Key_Direction_R = 16777312,
        Key_Space = 32,
        Key_Exclam = 33,
        Key_QuoteDbl = 34,
        Key_NumberSign = 35,
        Key_Dollar = 36,
        Key_Percent = 37,
        Key_Ampersand = 38,
        Key_Apostrophe = 39,
        Key_ParenLeft = 40,
        Key_ParenRight = 41,
        Key_Asterisk = 42,
        Key_Plus = 43,
        Key_Comma = 44,
        Key_Minus = 45,
        Key_Period = 46,
        Key_Slash = 47,
        Key_0 = 48,
        Key_1 = 49,
        Key_2 = 50,
        Key_3 = 51,
        Key_4 = 52,
        Key_5 = 53,
        Key_6 = 54,
        Key_7 = 55,
        Key_8 = 56,
        Key_9 = 57,
        Key_Colon = 58,
        Key_Semicolon = 59,
        Key_Less = 60,
        Key_Equal = 61,
        Key_Greater = 62,
        Key_Question = 63,
        Key_At = 64,
        Key_A = 65,
        Key_B = 66,
        Key_C = 67,
        Key_D = 68,
        Key_E = 69,
        Key_F = 70,
        Key_G = 71,
        Key_H = 72,
        Key_I = 73,
        Key_J = 74,
        Key_K = 75,
        Key_L = 76,
        Key_M = 77,
        Key_N = 78,
        Key_O = 79,
        Key_P = 80,
        Key_Q = 81,
        Key_R = 82,
        Key_S = 83,
        Key_T = 84,
        Key_U = 85,
        Key_V = 86,
        Key_W = 87,
        Key_X = 88,
        Key_Y = 89,
        Key_Z = 90,
        Key_BracketLeft = 91,
        Key_Backslash = 92,
        Key_BracketRight = 93,
        Key_AsciiCircum = 94,
        Key_Underscore = 95,
        Key_QuoteLeft = 96,
        Key_BraceLeft = 123,
        Key_Bar = 124,
        Key_BraceRight = 125,
        Key_AsciiTilde = 126,
        Key_nobreakspace = 160,
        Key_exclamdown = 161,
        Key_cent = 162,
        Key_sterling = 163,
        Key_currency = 164,
        Key_yen = 165,
        Key_brokenbar = 166,
        Key_section = 167,
        Key_diaeresis = 168,
        Key_copyright = 169,
        Key_ordfeminine = 170,
        Key_guillemotleft = 171,
        Key_notsign = 172,
        Key_hyphen = 173,
        Key_registered = 174,
        Key_macron = 175,
        Key_degree = 176,
        Key_plusminus = 177,
        Key_twosuperior = 178,
        Key_threesuperior = 179,
        Key_acute = 180,
        Key_mu = 181,
        Key_paragraph = 182,
        Key_periodcentered = 183,
        Key_cedilla = 184,
        Key_onesuperior = 185,
        Key_masculine = 186,
        Key_guillemotright = 187,
        Key_onequarter = 188,
        Key_onehalf = 189,
        Key_threequarters = 190,
        Key_questiondown = 191,
        Key_Agrave = 192,
        Key_Aacute = 193,
        Key_Acircumflex = 194,
        Key_Atilde = 195,
        Key_Adiaeresis = 196,
        Key_Aring = 197,
        Key_AE = 198,
        Key_Ccedilla = 199,
        Key_Egrave = 200,
        Key_Eacute = 201,
        Key_Ecircumflex = 202,
        Key_Ediaeresis = 203,
        Key_Igrave = 204,
        Key_Iacute = 205,
        Key_Icircumflex = 206,
        Key_Idiaeresis = 207,
        Key_ETH = 208,
        Key_Ntilde = 209,
        Key_Ograve = 210,
        Key_Oacute = 211,
        Key_Ocircumflex = 212,
        Key_Otilde = 213,
        Key_Odiaeresis = 214,
        Key_multiply = 215,
        Key_Ooblique = 216,
        Key_Ugrave = 217,
        Key_Uacute = 218,
        Key_Ucircumflex = 219,
        Key_Udiaeresis = 220,
        Key_Yacute = 221,
        Key_THORN = 222,
        Key_ssharp = 223,
        Key_division = 247,
        Key_ydiaeresis = 255,
        Key_AltGr = 16781571,
        Key_Multi_key = 16781600,
        Key_Codeinput = 16781623,
        Key_SingleCandidate = 16781628,
        Key_MultipleCandidate = 16781629,
        Key_PreviousCandidate = 16781630,
        Key_Mode_switch = 16781694,
        Key_Kanji = 16781601,
        Key_Muhenkan = 16781602,
        Key_Henkan = 16781603,
        Key_Romaji = 16781604,
        Key_Hiragana = 16781605,
        Key_Katakana = 16781606,
        Key_Hiragana_Katakana = 16781607,
        Key_Zenkaku = 16781608,
        Key_Hankaku = 16781609,
        Key_Zenkaku_Hankaku = 16781610,
        Key_Touroku = 16781611,
        Key_Massyo = 16781612,
        Key_Kana_Lock = 16781613,
        Key_Kana_Shift = 16781614,
        Key_Eisu_Shift = 16781615,
        Key_Eisu_toggle = 16781616,
        Key_Hangul = 16781617,
        Key_Hangul_Start = 16781618,
        Key_Hangul_End = 16781619,
        Key_Hangul_Hanja = 16781620,
        Key_Hangul_Jamo = 16781621,
        Key_Hangul_Romaja = 16781622,
        Key_Hangul_Jeonja = 16781624,
        Key_Hangul_Banja = 16781625,
        Key_Hangul_PreHanja = 16781626,
        Key_Hangul_PostHanja = 16781627,
        Key_Hangul_Special = 16781631,
        Key_Dead_Grave = 16781904,
        Key_Dead_Acute = 16781905,
        Key_Dead_Circumflex = 16781906,
        Key_Dead_Tilde = 16781907,
        Key_Dead_Macron = 16781908,
        Key_Dead_Breve = 16781909,
        Key_Dead_Abovedot = 16781910,
        Key_Dead_Diaeresis = 16781911,
        Key_Dead_Abovering = 16781912,
        Key_Dead_Doubleacute = 16781913,
        Key_Dead_Caron = 16781914,
        Key_Dead_Cedilla = 16781915,
        Key_Dead_Ogonek = 16781916,
        Key_Dead_Iota = 16781917,
        Key_Dead_Voiced_Sound = 16781918,
        Key_Dead_Semivoiced_Sound = 16781919,
        Key_Dead_Belowdot = 16781920,
        Key_Dead_Hook = 16781921,
        Key_Dead_Horn = 16781922,
        Key_Back = 16777313,
        Key_Forward = 16777314,
        Key_Stop = 16777315,
        Key_Refresh = 16777316,
        Key_VolumeDown = 16777328,
        Key_VolumeMute = 16777329,
        Key_VolumeUp = 16777330,
        Key_BassBoost = 16777331,
        Key_BassUp = 16777332,
        Key_BassDown = 16777333,
        Key_TrebleUp = 16777334,
        Key_TrebleDown = 16777335,
        Key_MediaPlay = 16777344,
        Key_MediaStop = 16777345,
        Key_MediaPrevious = 16777346,
        Key_MediaNext = 16777347,
        Key_MediaRecord = 16777348,
        Key_MediaPause = 16777349,
        Key_MediaTogglePlayPause = 16777350,
        Key_HomePage = 16777360,
        Key_Favorites = 16777361,
        Key_Search = 16777362,
        Key_Standby = 16777363,
        Key_OpenUrl = 16777364,
        Key_LaunchMail = 16777376,
        Key_LaunchMedia = 16777377,
        Key_Launch0 = 16777378,
        Key_Launch1 = 16777379,
        Key_Launch2 = 16777380,
        Key_Launch3 = 16777381,
        Key_Launch4 = 16777382,
        Key_Launch5 = 16777383,
        Key_Launch6 = 16777384,
        Key_Launch7 = 16777385,
        Key_Launch8 = 16777386,
        Key_Launch9 = 16777387,
        Key_LaunchA = 16777388,
        Key_LaunchB = 16777389,
        Key_LaunchC = 16777390,
        Key_LaunchD = 16777391,
        Key_LaunchE = 16777392,
        Key_LaunchF = 16777393,
        Key_MonBrightnessUp = 16777394,
        Key_MonBrightnessDown = 16777395,
        Key_KeyboardLightOnOff = 16777396,
        Key_KeyboardBrightnessUp = 16777397,
        Key_KeyboardBrightnessDown = 16777398,
        Key_PowerOff = 16777399,
        Key_WakeUp = 16777400,
        Key_Eject = 16777401,
        Key_ScreenSaver = 16777402,
        Key_WWW = 16777403,
        Key_Memo = 16777404,
        Key_LightBulb = 16777405,
        Key_Shop = 16777406,
        Key_History = 16777407,
        Key_AddFavorite = 16777408,
        Key_HotLinks = 16777409,
        Key_BrightnessAdjust = 16777410,
        Key_Finance = 16777411,
        Key_Community = 16777412,
        Key_AudioRewind = 16777413,
        Key_BackForward = 16777414,
        Key_ApplicationLeft = 16777415,
        Key_ApplicationRight = 16777416,
        Key_Book = 16777417,
        Key_CD = 16777418,
        Key_Calculator = 16777419,
        Key_ToDoList = 16777420,
        Key_ClearGrab = 16777421,
        Key_Close = 16777422,
        Key_Copy = 16777423,
        Key_Cut = 16777424,
        Key_Display = 16777425,
        Key_DOS = 16777426,
        Key_Documents = 16777427,
        Key_Excel = 16777428,
        Key_Explorer = 16777429,
        Key_Game = 16777430,
        Key_Go = 16777431,
        Key_iTouch = 16777432,
        Key_LogOff = 16777433,
        Key_Market = 16777434,
        Key_Meeting = 16777435,
        Key_MenuKB = 16777436,
        Key_MenuPB = 16777437,
        Key_MySites = 16777438,
        Key_News = 16777439,
        Key_OfficeHome = 16777440,
        Key_Option = 16777441,
        Key_Paste = 16777442,
        Key_Phone = 16777443,
        Key_Calendar = 16777444,
        Key_Reply = 16777445,
        Key_Reload = 16777446,
        Key_RotateWindows = 16777447,
        Key_RotationPB = 16777448,
        Key_RotationKB = 16777449,
        Key_Save = 16777450,
        Key_Send = 16777451,
        Key_Spell = 16777452,
        Key_SplitScreen = 16777453,
        Key_Support = 16777454,
        Key_TaskPane = 16777455,
        Key_Terminal = 16777456,
        Key_Tools = 16777457,
        Key_Travel = 16777458,
        Key_Video = 16777459,
        Key_Word = 16777460,
        Key_Xfer = 16777461,
        Key_ZoomIn = 16777462,
        Key_ZoomOut = 16777463,
        Key_Away = 16777464,
        Key_Messenger = 16777465,
        Key_WebCam = 16777466,
        Key_MailForward = 16777467,
        Key_Pictures = 16777468,
        Key_Music = 16777469,
        Key_Battery = 16777470,
        Key_Bluetooth = 16777471,
        Key_WLAN = 16777472,
        Key_UWB = 16777473,
        Key_AudioForward = 16777474,
        Key_AudioRepeat = 16777475,
        Key_AudioRandomPlay = 16777476,
        Key_Subtitle = 16777477,
        Key_AudioCycleTrack = 16777478,
        Key_Time = 16777479,
        Key_Hibernate = 16777480,
        Key_View = 16777481,
        Key_TopMenu = 16777482,
        Key_PowerDown = 16777483,
        Key_Suspend = 16777484,
        Key_ContrastAdjust = 16777485,
        Key_LaunchG = 16777486,
        Key_LaunchH = 16777487,
        Key_MediaLast = 16842751,
        Key_Select = 16842752,
        Key_Yes = 16842753,
        Key_No = 16842754,
        Key_Cancel = 16908289,
        Key_Printer = 16908290,
        Key_Execute = 16908291,
        Key_Sleep = 16908292,
        Key_Play = 16908293,
        Key_Zoom = 16908294,
        Key_Context1 = 17825792,
        Key_Context2 = 17825793,
        Key_Context3 = 17825794,
        Key_Context4 = 17825795,
        Key_Call = 17825796,
        Key_Hangup = 17825797,
        Key_Flip = 17825798,
        Key_ToggleCallHangup = 17825799,
        Key_VoiceDial = 17825800,
        Key_LastNumberRedial = 17825801,
        Key_Camera = 17825824,
        Key_CameraFocus = 17825825,
        Key_unknown = 33554431
    }

    alias Key.Key_Escape Key_Escape;
    alias Key.Key_Tab Key_Tab;
    alias Key.Key_Backtab Key_Backtab;
    alias Key.Key_Backspace Key_Backspace;
    alias Key.Key_Return Key_Return;
    alias Key.Key_Enter Key_Enter;
    alias Key.Key_Insert Key_Insert;
    alias Key.Key_Delete Key_Delete;
    alias Key.Key_Pause Key_Pause;
    alias Key.Key_Print Key_Print;
    alias Key.Key_SysReq Key_SysReq;
    alias Key.Key_Clear Key_Clear;
    alias Key.Key_Home Key_Home;
    alias Key.Key_End Key_End;
    alias Key.Key_Left Key_Left;
    alias Key.Key_Up Key_Up;
    alias Key.Key_Right Key_Right;
    alias Key.Key_Down Key_Down;
    alias Key.Key_PageUp Key_PageUp;
    alias Key.Key_PageDown Key_PageDown;
    alias Key.Key_Shift Key_Shift;
    alias Key.Key_Control Key_Control;
    alias Key.Key_Meta Key_Meta;
    alias Key.Key_Alt Key_Alt;
    alias Key.Key_CapsLock Key_CapsLock;
    alias Key.Key_NumLock Key_NumLock;
    alias Key.Key_ScrollLock Key_ScrollLock;
    alias Key.Key_F1 Key_F1;
    alias Key.Key_F2 Key_F2;
    alias Key.Key_F3 Key_F3;
    alias Key.Key_F4 Key_F4;
    alias Key.Key_F5 Key_F5;
    alias Key.Key_F6 Key_F6;
    alias Key.Key_F7 Key_F7;
    alias Key.Key_F8 Key_F8;
    alias Key.Key_F9 Key_F9;
    alias Key.Key_F10 Key_F10;
    alias Key.Key_F11 Key_F11;
    alias Key.Key_F12 Key_F12;
    alias Key.Key_F13 Key_F13;
    alias Key.Key_F14 Key_F14;
    alias Key.Key_F15 Key_F15;
    alias Key.Key_F16 Key_F16;
    alias Key.Key_F17 Key_F17;
    alias Key.Key_F18 Key_F18;
    alias Key.Key_F19 Key_F19;
    alias Key.Key_F20 Key_F20;
    alias Key.Key_F21 Key_F21;
    alias Key.Key_F22 Key_F22;
    alias Key.Key_F23 Key_F23;
    alias Key.Key_F24 Key_F24;
    alias Key.Key_F25 Key_F25;
    alias Key.Key_F26 Key_F26;
    alias Key.Key_F27 Key_F27;
    alias Key.Key_F28 Key_F28;
    alias Key.Key_F29 Key_F29;
    alias Key.Key_F30 Key_F30;
    alias Key.Key_F31 Key_F31;
    alias Key.Key_F32 Key_F32;
    alias Key.Key_F33 Key_F33;
    alias Key.Key_F34 Key_F34;
    alias Key.Key_F35 Key_F35;
    alias Key.Key_Super_L Key_Super_L;
    alias Key.Key_Super_R Key_Super_R;
    alias Key.Key_Menu Key_Menu;
    alias Key.Key_Hyper_L Key_Hyper_L;
    alias Key.Key_Hyper_R Key_Hyper_R;
    alias Key.Key_Help Key_Help;
    alias Key.Key_Direction_L Key_Direction_L;
    alias Key.Key_Direction_R Key_Direction_R;
    alias Key.Key_Space Key_Space;
    alias Key.Key_Exclam Key_Exclam;
    alias Key.Key_QuoteDbl Key_QuoteDbl;
    alias Key.Key_NumberSign Key_NumberSign;
    alias Key.Key_Dollar Key_Dollar;
    alias Key.Key_Percent Key_Percent;
    alias Key.Key_Ampersand Key_Ampersand;
    alias Key.Key_Apostrophe Key_Apostrophe;
    alias Key.Key_ParenLeft Key_ParenLeft;
    alias Key.Key_ParenRight Key_ParenRight;
    alias Key.Key_Asterisk Key_Asterisk;
    alias Key.Key_Plus Key_Plus;
    alias Key.Key_Comma Key_Comma;
    alias Key.Key_Minus Key_Minus;
    alias Key.Key_Period Key_Period;
    alias Key.Key_Slash Key_Slash;
    alias Key.Key_0 Key_0;
    alias Key.Key_1 Key_1;
    alias Key.Key_2 Key_2;
    alias Key.Key_3 Key_3;
    alias Key.Key_4 Key_4;
    alias Key.Key_5 Key_5;
    alias Key.Key_6 Key_6;
    alias Key.Key_7 Key_7;
    alias Key.Key_8 Key_8;
    alias Key.Key_9 Key_9;
    alias Key.Key_Colon Key_Colon;
    alias Key.Key_Semicolon Key_Semicolon;
    alias Key.Key_Less Key_Less;
    alias Key.Key_Equal Key_Equal;
    alias Key.Key_Greater Key_Greater;
    alias Key.Key_Question Key_Question;
    alias Key.Key_At Key_At;
    alias Key.Key_A Key_A;
    alias Key.Key_B Key_B;
    alias Key.Key_C Key_C;
    alias Key.Key_D Key_D;
    alias Key.Key_E Key_E;
    alias Key.Key_F Key_F;
    alias Key.Key_G Key_G;
    alias Key.Key_H Key_H;
    alias Key.Key_I Key_I;
    alias Key.Key_J Key_J;
    alias Key.Key_K Key_K;
    alias Key.Key_L Key_L;
    alias Key.Key_M Key_M;
    alias Key.Key_N Key_N;
    alias Key.Key_O Key_O;
    alias Key.Key_P Key_P;
    alias Key.Key_Q Key_Q;
    alias Key.Key_R Key_R;
    alias Key.Key_S Key_S;
    alias Key.Key_T Key_T;
    alias Key.Key_U Key_U;
    alias Key.Key_V Key_V;
    alias Key.Key_W Key_W;
    alias Key.Key_X Key_X;
    alias Key.Key_Y Key_Y;
    alias Key.Key_Z Key_Z;
    alias Key.Key_BracketLeft Key_BracketLeft;
    alias Key.Key_Backslash Key_Backslash;
    alias Key.Key_BracketRight Key_BracketRight;
    alias Key.Key_AsciiCircum Key_AsciiCircum;
    alias Key.Key_Underscore Key_Underscore;
    alias Key.Key_QuoteLeft Key_QuoteLeft;
    alias Key.Key_BraceLeft Key_BraceLeft;
    alias Key.Key_Bar Key_Bar;
    alias Key.Key_BraceRight Key_BraceRight;
    alias Key.Key_AsciiTilde Key_AsciiTilde;
    alias Key.Key_nobreakspace Key_nobreakspace;
    alias Key.Key_exclamdown Key_exclamdown;
    alias Key.Key_cent Key_cent;
    alias Key.Key_sterling Key_sterling;
    alias Key.Key_currency Key_currency;
    alias Key.Key_yen Key_yen;
    alias Key.Key_brokenbar Key_brokenbar;
    alias Key.Key_section Key_section;
    alias Key.Key_diaeresis Key_diaeresis;
    alias Key.Key_copyright Key_copyright;
    alias Key.Key_ordfeminine Key_ordfeminine;
    alias Key.Key_guillemotleft Key_guillemotleft;
    alias Key.Key_notsign Key_notsign;
    alias Key.Key_hyphen Key_hyphen;
    alias Key.Key_registered Key_registered;
    alias Key.Key_macron Key_macron;
    alias Key.Key_degree Key_degree;
    alias Key.Key_plusminus Key_plusminus;
    alias Key.Key_twosuperior Key_twosuperior;
    alias Key.Key_threesuperior Key_threesuperior;
    alias Key.Key_acute Key_acute;
    alias Key.Key_mu Key_mu;
    alias Key.Key_paragraph Key_paragraph;
    alias Key.Key_periodcentered Key_periodcentered;
    alias Key.Key_cedilla Key_cedilla;
    alias Key.Key_onesuperior Key_onesuperior;
    alias Key.Key_masculine Key_masculine;
    alias Key.Key_guillemotright Key_guillemotright;
    alias Key.Key_onequarter Key_onequarter;
    alias Key.Key_onehalf Key_onehalf;
    alias Key.Key_threequarters Key_threequarters;
    alias Key.Key_questiondown Key_questiondown;
    alias Key.Key_Agrave Key_Agrave;
    alias Key.Key_Aacute Key_Aacute;
    alias Key.Key_Acircumflex Key_Acircumflex;
    alias Key.Key_Atilde Key_Atilde;
    alias Key.Key_Adiaeresis Key_Adiaeresis;
    alias Key.Key_Aring Key_Aring;
    alias Key.Key_AE Key_AE;
    alias Key.Key_Ccedilla Key_Ccedilla;
    alias Key.Key_Egrave Key_Egrave;
    alias Key.Key_Eacute Key_Eacute;
    alias Key.Key_Ecircumflex Key_Ecircumflex;
    alias Key.Key_Ediaeresis Key_Ediaeresis;
    alias Key.Key_Igrave Key_Igrave;
    alias Key.Key_Iacute Key_Iacute;
    alias Key.Key_Icircumflex Key_Icircumflex;
    alias Key.Key_Idiaeresis Key_Idiaeresis;
    alias Key.Key_ETH Key_ETH;
    alias Key.Key_Ntilde Key_Ntilde;
    alias Key.Key_Ograve Key_Ograve;
    alias Key.Key_Oacute Key_Oacute;
    alias Key.Key_Ocircumflex Key_Ocircumflex;
    alias Key.Key_Otilde Key_Otilde;
    alias Key.Key_Odiaeresis Key_Odiaeresis;
    alias Key.Key_multiply Key_multiply;
    alias Key.Key_Ooblique Key_Ooblique;
    alias Key.Key_Ugrave Key_Ugrave;
    alias Key.Key_Uacute Key_Uacute;
    alias Key.Key_Ucircumflex Key_Ucircumflex;
    alias Key.Key_Udiaeresis Key_Udiaeresis;
    alias Key.Key_Yacute Key_Yacute;
    alias Key.Key_THORN Key_THORN;
    alias Key.Key_ssharp Key_ssharp;
    alias Key.Key_division Key_division;
    alias Key.Key_ydiaeresis Key_ydiaeresis;
    alias Key.Key_AltGr Key_AltGr;
    alias Key.Key_Multi_key Key_Multi_key;
    alias Key.Key_Codeinput Key_Codeinput;
    alias Key.Key_SingleCandidate Key_SingleCandidate;
    alias Key.Key_MultipleCandidate Key_MultipleCandidate;
    alias Key.Key_PreviousCandidate Key_PreviousCandidate;
    alias Key.Key_Mode_switch Key_Mode_switch;
    alias Key.Key_Kanji Key_Kanji;
    alias Key.Key_Muhenkan Key_Muhenkan;
    alias Key.Key_Henkan Key_Henkan;
    alias Key.Key_Romaji Key_Romaji;
    alias Key.Key_Hiragana Key_Hiragana;
    alias Key.Key_Katakana Key_Katakana;
    alias Key.Key_Hiragana_Katakana Key_Hiragana_Katakana;
    alias Key.Key_Zenkaku Key_Zenkaku;
    alias Key.Key_Hankaku Key_Hankaku;
    alias Key.Key_Zenkaku_Hankaku Key_Zenkaku_Hankaku;
    alias Key.Key_Touroku Key_Touroku;
    alias Key.Key_Massyo Key_Massyo;
    alias Key.Key_Kana_Lock Key_Kana_Lock;
    alias Key.Key_Kana_Shift Key_Kana_Shift;
    alias Key.Key_Eisu_Shift Key_Eisu_Shift;
    alias Key.Key_Eisu_toggle Key_Eisu_toggle;
    alias Key.Key_Hangul Key_Hangul;
    alias Key.Key_Hangul_Start Key_Hangul_Start;
    alias Key.Key_Hangul_End Key_Hangul_End;
    alias Key.Key_Hangul_Hanja Key_Hangul_Hanja;
    alias Key.Key_Hangul_Jamo Key_Hangul_Jamo;
    alias Key.Key_Hangul_Romaja Key_Hangul_Romaja;
    alias Key.Key_Hangul_Jeonja Key_Hangul_Jeonja;
    alias Key.Key_Hangul_Banja Key_Hangul_Banja;
    alias Key.Key_Hangul_PreHanja Key_Hangul_PreHanja;
    alias Key.Key_Hangul_PostHanja Key_Hangul_PostHanja;
    alias Key.Key_Hangul_Special Key_Hangul_Special;
    alias Key.Key_Dead_Grave Key_Dead_Grave;
    alias Key.Key_Dead_Acute Key_Dead_Acute;
    alias Key.Key_Dead_Circumflex Key_Dead_Circumflex;
    alias Key.Key_Dead_Tilde Key_Dead_Tilde;
    alias Key.Key_Dead_Macron Key_Dead_Macron;
    alias Key.Key_Dead_Breve Key_Dead_Breve;
    alias Key.Key_Dead_Abovedot Key_Dead_Abovedot;
    alias Key.Key_Dead_Diaeresis Key_Dead_Diaeresis;
    alias Key.Key_Dead_Abovering Key_Dead_Abovering;
    alias Key.Key_Dead_Doubleacute Key_Dead_Doubleacute;
    alias Key.Key_Dead_Caron Key_Dead_Caron;
    alias Key.Key_Dead_Cedilla Key_Dead_Cedilla;
    alias Key.Key_Dead_Ogonek Key_Dead_Ogonek;
    alias Key.Key_Dead_Iota Key_Dead_Iota;
    alias Key.Key_Dead_Voiced_Sound Key_Dead_Voiced_Sound;
    alias Key.Key_Dead_Semivoiced_Sound Key_Dead_Semivoiced_Sound;
    alias Key.Key_Dead_Belowdot Key_Dead_Belowdot;
    alias Key.Key_Dead_Hook Key_Dead_Hook;
    alias Key.Key_Dead_Horn Key_Dead_Horn;
    alias Key.Key_Back Key_Back;
    alias Key.Key_Forward Key_Forward;
    alias Key.Key_Stop Key_Stop;
    alias Key.Key_Refresh Key_Refresh;
    alias Key.Key_VolumeDown Key_VolumeDown;
    alias Key.Key_VolumeMute Key_VolumeMute;
    alias Key.Key_VolumeUp Key_VolumeUp;
    alias Key.Key_BassBoost Key_BassBoost;
    alias Key.Key_BassUp Key_BassUp;
    alias Key.Key_BassDown Key_BassDown;
    alias Key.Key_TrebleUp Key_TrebleUp;
    alias Key.Key_TrebleDown Key_TrebleDown;
    alias Key.Key_MediaPlay Key_MediaPlay;
    alias Key.Key_MediaStop Key_MediaStop;
    alias Key.Key_MediaPrevious Key_MediaPrevious;
    alias Key.Key_MediaNext Key_MediaNext;
    alias Key.Key_MediaRecord Key_MediaRecord;
    alias Key.Key_MediaPause Key_MediaPause;
    alias Key.Key_MediaTogglePlayPause Key_MediaTogglePlayPause;
    alias Key.Key_HomePage Key_HomePage;
    alias Key.Key_Favorites Key_Favorites;
    alias Key.Key_Search Key_Search;
    alias Key.Key_Standby Key_Standby;
    alias Key.Key_OpenUrl Key_OpenUrl;
    alias Key.Key_LaunchMail Key_LaunchMail;
    alias Key.Key_LaunchMedia Key_LaunchMedia;
    alias Key.Key_Launch0 Key_Launch0;
    alias Key.Key_Launch1 Key_Launch1;
    alias Key.Key_Launch2 Key_Launch2;
    alias Key.Key_Launch3 Key_Launch3;
    alias Key.Key_Launch4 Key_Launch4;
    alias Key.Key_Launch5 Key_Launch5;
    alias Key.Key_Launch6 Key_Launch6;
    alias Key.Key_Launch7 Key_Launch7;
    alias Key.Key_Launch8 Key_Launch8;
    alias Key.Key_Launch9 Key_Launch9;
    alias Key.Key_LaunchA Key_LaunchA;
    alias Key.Key_LaunchB Key_LaunchB;
    alias Key.Key_LaunchC Key_LaunchC;
    alias Key.Key_LaunchD Key_LaunchD;
    alias Key.Key_LaunchE Key_LaunchE;
    alias Key.Key_LaunchF Key_LaunchF;
    alias Key.Key_MonBrightnessUp Key_MonBrightnessUp;
    alias Key.Key_MonBrightnessDown Key_MonBrightnessDown;
    alias Key.Key_KeyboardLightOnOff Key_KeyboardLightOnOff;
    alias Key.Key_KeyboardBrightnessUp Key_KeyboardBrightnessUp;
    alias Key.Key_KeyboardBrightnessDown Key_KeyboardBrightnessDown;
    alias Key.Key_PowerOff Key_PowerOff;
    alias Key.Key_WakeUp Key_WakeUp;
    alias Key.Key_Eject Key_Eject;
    alias Key.Key_ScreenSaver Key_ScreenSaver;
    alias Key.Key_WWW Key_WWW;
    alias Key.Key_Memo Key_Memo;
    alias Key.Key_LightBulb Key_LightBulb;
    alias Key.Key_Shop Key_Shop;
    alias Key.Key_History Key_History;
    alias Key.Key_AddFavorite Key_AddFavorite;
    alias Key.Key_HotLinks Key_HotLinks;
    alias Key.Key_BrightnessAdjust Key_BrightnessAdjust;
    alias Key.Key_Finance Key_Finance;
    alias Key.Key_Community Key_Community;
    alias Key.Key_AudioRewind Key_AudioRewind;
    alias Key.Key_BackForward Key_BackForward;
    alias Key.Key_ApplicationLeft Key_ApplicationLeft;
    alias Key.Key_ApplicationRight Key_ApplicationRight;
    alias Key.Key_Book Key_Book;
    alias Key.Key_CD Key_CD;
    alias Key.Key_Calculator Key_Calculator;
    alias Key.Key_ToDoList Key_ToDoList;
    alias Key.Key_ClearGrab Key_ClearGrab;
    alias Key.Key_Close Key_Close;
    alias Key.Key_Copy Key_Copy;
    alias Key.Key_Cut Key_Cut;
    alias Key.Key_Display Key_Display;
    alias Key.Key_DOS Key_DOS;
    alias Key.Key_Documents Key_Documents;
    alias Key.Key_Excel Key_Excel;
    alias Key.Key_Explorer Key_Explorer;
    alias Key.Key_Game Key_Game;
    alias Key.Key_Go Key_Go;
    alias Key.Key_iTouch Key_iTouch;
    alias Key.Key_LogOff Key_LogOff;
    alias Key.Key_Market Key_Market;
    alias Key.Key_Meeting Key_Meeting;
    alias Key.Key_MenuKB Key_MenuKB;
    alias Key.Key_MenuPB Key_MenuPB;
    alias Key.Key_MySites Key_MySites;
    alias Key.Key_News Key_News;
    alias Key.Key_OfficeHome Key_OfficeHome;
    alias Key.Key_Option Key_Option;
    alias Key.Key_Paste Key_Paste;
    alias Key.Key_Phone Key_Phone;
    alias Key.Key_Calendar Key_Calendar;
    alias Key.Key_Reply Key_Reply;
    alias Key.Key_Reload Key_Reload;
    alias Key.Key_RotateWindows Key_RotateWindows;
    alias Key.Key_RotationPB Key_RotationPB;
    alias Key.Key_RotationKB Key_RotationKB;
    alias Key.Key_Save Key_Save;
    alias Key.Key_Send Key_Send;
    alias Key.Key_Spell Key_Spell;
    alias Key.Key_SplitScreen Key_SplitScreen;
    alias Key.Key_Support Key_Support;
    alias Key.Key_TaskPane Key_TaskPane;
    alias Key.Key_Terminal Key_Terminal;
    alias Key.Key_Tools Key_Tools;
    alias Key.Key_Travel Key_Travel;
    alias Key.Key_Video Key_Video;
    alias Key.Key_Word Key_Word;
    alias Key.Key_Xfer Key_Xfer;
    alias Key.Key_ZoomIn Key_ZoomIn;
    alias Key.Key_ZoomOut Key_ZoomOut;
    alias Key.Key_Away Key_Away;
    alias Key.Key_Messenger Key_Messenger;
    alias Key.Key_WebCam Key_WebCam;
    alias Key.Key_MailForward Key_MailForward;
    alias Key.Key_Pictures Key_Pictures;
    alias Key.Key_Music Key_Music;
    alias Key.Key_Battery Key_Battery;
    alias Key.Key_Bluetooth Key_Bluetooth;
    alias Key.Key_WLAN Key_WLAN;
    alias Key.Key_UWB Key_UWB;
    alias Key.Key_AudioForward Key_AudioForward;
    alias Key.Key_AudioRepeat Key_AudioRepeat;
    alias Key.Key_AudioRandomPlay Key_AudioRandomPlay;
    alias Key.Key_Subtitle Key_Subtitle;
    alias Key.Key_AudioCycleTrack Key_AudioCycleTrack;
    alias Key.Key_Time Key_Time;
    alias Key.Key_Hibernate Key_Hibernate;
    alias Key.Key_View Key_View;
    alias Key.Key_TopMenu Key_TopMenu;
    alias Key.Key_PowerDown Key_PowerDown;
    alias Key.Key_Suspend Key_Suspend;
    alias Key.Key_ContrastAdjust Key_ContrastAdjust;
    alias Key.Key_LaunchG Key_LaunchG;
    alias Key.Key_LaunchH Key_LaunchH;
    alias Key.Key_MediaLast Key_MediaLast;
    alias Key.Key_Select Key_Select;
    alias Key.Key_Yes Key_Yes;
    alias Key.Key_No Key_No;
    alias Key.Key_Cancel Key_Cancel;
    alias Key.Key_Printer Key_Printer;
    alias Key.Key_Execute Key_Execute;
    alias Key.Key_Sleep Key_Sleep;
    alias Key.Key_Play Key_Play;
    alias Key.Key_Zoom Key_Zoom;
    alias Key.Key_Context1 Key_Context1;
    alias Key.Key_Context2 Key_Context2;
    alias Key.Key_Context3 Key_Context3;
    alias Key.Key_Context4 Key_Context4;
    alias Key.Key_Call Key_Call;
    alias Key.Key_Hangup Key_Hangup;
    alias Key.Key_Flip Key_Flip;
    alias Key.Key_ToggleCallHangup Key_ToggleCallHangup;
    alias Key.Key_VoiceDial Key_VoiceDial;
    alias Key.Key_LastNumberRedial Key_LastNumberRedial;
    alias Key.Key_Camera Key_Camera;
    alias Key.Key_CameraFocus Key_CameraFocus;
    alias Key.Key_unknown Key_unknown;

    public enum ApplicationAttribute {
        AA_ImmediateWidgetCreation = 0,
        AA_MSWindowsUseDirect3DByDefault = 1,
        AA_DontShowIconsInMenus = 2,
        AA_NativeWindows = 3,
        AA_DontCreateNativeWidgetSiblings = 4,
        AA_MacPluginApplication = 5,
        AA_DontUseNativeMenuBar = 6,
        AA_MacDontSwapCtrlAndMeta = 7,
        AA_S60DontConstructApplicationPanes = 8,
        AA_S60DisablePartialScreenInputMode = 9,
        AA_AttributeCount = 10
    }

    alias ApplicationAttribute.AA_ImmediateWidgetCreation AA_ImmediateWidgetCreation;
    alias ApplicationAttribute.AA_MSWindowsUseDirect3DByDefault AA_MSWindowsUseDirect3DByDefault;
    alias ApplicationAttribute.AA_DontShowIconsInMenus AA_DontShowIconsInMenus;
    alias ApplicationAttribute.AA_NativeWindows AA_NativeWindows;
    alias ApplicationAttribute.AA_DontCreateNativeWidgetSiblings AA_DontCreateNativeWidgetSiblings;
    alias ApplicationAttribute.AA_MacPluginApplication AA_MacPluginApplication;
    alias ApplicationAttribute.AA_DontUseNativeMenuBar AA_DontUseNativeMenuBar;
    alias ApplicationAttribute.AA_MacDontSwapCtrlAndMeta AA_MacDontSwapCtrlAndMeta;
    alias ApplicationAttribute.AA_S60DontConstructApplicationPanes AA_S60DontConstructApplicationPanes;
    alias ApplicationAttribute.AA_S60DisablePartialScreenInputMode AA_S60DisablePartialScreenInputMode;
    alias ApplicationAttribute.AA_AttributeCount AA_AttributeCount;

    public enum TextFlag {
        TextSingleLine = 256,
        TextDontClip = 512,
        TextExpandTabs = 1024,
        TextShowMnemonic = 2048,
        TextWordWrap = 4096,
        TextWrapAnywhere = 8192,
        TextDontPrint = 16384,
        TextIncludeTrailingSpaces = 134217728,
        TextHideMnemonic = 32768,
        TextJustificationForced = 65536,
        TextForceLeftToRight = 131072,
        TextForceRightToLeft = 262144,
        TextLongestVariant = 524288,
        TextBypassShaping = 1048576
    }

    alias TextFlag.TextSingleLine TextSingleLine;
    alias TextFlag.TextDontClip TextDontClip;
    alias TextFlag.TextExpandTabs TextExpandTabs;
    alias TextFlag.TextShowMnemonic TextShowMnemonic;
    alias TextFlag.TextWordWrap TextWordWrap;
    alias TextFlag.TextWrapAnywhere TextWrapAnywhere;
    alias TextFlag.TextDontPrint TextDontPrint;
    alias TextFlag.TextIncludeTrailingSpaces TextIncludeTrailingSpaces;
    alias TextFlag.TextHideMnemonic TextHideMnemonic;
    alias TextFlag.TextJustificationForced TextJustificationForced;
    alias TextFlag.TextForceLeftToRight TextForceLeftToRight;
    alias TextFlag.TextForceRightToLeft TextForceRightToLeft;
    alias TextFlag.TextLongestVariant TextLongestVariant;
    alias TextFlag.TextBypassShaping TextBypassShaping;

    public enum BrushStyle {
        NoBrush = 0,
        SolidPattern = 1,
        Dense1Pattern = 2,
        Dense2Pattern = 3,
        Dense3Pattern = 4,
        Dense4Pattern = 5,
        Dense5Pattern = 6,
        Dense6Pattern = 7,
        Dense7Pattern = 8,
        HorPattern = 9,
        VerPattern = 10,
        CrossPattern = 11,
        BDiagPattern = 12,
        FDiagPattern = 13,
        DiagCrossPattern = 14,
        LinearGradientPattern = 15,
        RadialGradientPattern = 16,
        ConicalGradientPattern = 17,
        TexturePattern = 24
    }

    alias BrushStyle.NoBrush NoBrush;
    alias BrushStyle.SolidPattern SolidPattern;
    alias BrushStyle.Dense1Pattern Dense1Pattern;
    alias BrushStyle.Dense2Pattern Dense2Pattern;
    alias BrushStyle.Dense3Pattern Dense3Pattern;
    alias BrushStyle.Dense4Pattern Dense4Pattern;
    alias BrushStyle.Dense5Pattern Dense5Pattern;
    alias BrushStyle.Dense6Pattern Dense6Pattern;
    alias BrushStyle.Dense7Pattern Dense7Pattern;
    alias BrushStyle.HorPattern HorPattern;
    alias BrushStyle.VerPattern VerPattern;
    alias BrushStyle.CrossPattern CrossPattern;
    alias BrushStyle.BDiagPattern BDiagPattern;
    alias BrushStyle.FDiagPattern FDiagPattern;
    alias BrushStyle.DiagCrossPattern DiagCrossPattern;
    alias BrushStyle.LinearGradientPattern LinearGradientPattern;
    alias BrushStyle.RadialGradientPattern RadialGradientPattern;
    alias BrushStyle.ConicalGradientPattern ConicalGradientPattern;
    alias BrushStyle.TexturePattern TexturePattern;

    public enum WidgetAttribute {
        WA_Disabled = 0,
        WA_UnderMouse = 1,
        WA_MouseTracking = 2,
        WA_ContentsPropagated = 3,
        WA_OpaquePaintEvent = 4,
        WA_StaticContents = 5,
        WA_LaidOut = 7,
        WA_PaintOnScreen = 8,
        WA_NoSystemBackground = 9,
        WA_UpdatesDisabled = 10,
        WA_Mapped = 11,
        WA_MacNoClickThrough = 12,
        WA_PaintOutsidePaintEvent = 13,
        WA_InputMethodEnabled = 14,
        WA_WState_Visible = 15,
        WA_WState_Hidden = 16,
        WA_ForceDisabled = 32,
        WA_KeyCompression = 33,
        WA_PendingMoveEvent = 34,
        WA_PendingResizeEvent = 35,
        WA_SetPalette = 36,
        WA_SetFont = 37,
        WA_SetCursor = 38,
        WA_NoChildEventsFromChildren = 39,
        WA_WindowModified = 41,
        WA_Resized = 42,
        WA_Moved = 43,
        WA_PendingUpdate = 44,
        WA_InvalidSize = 45,
        WA_MacBrushedMetal = 46,
        WA_CustomWhatsThis = 47,
        WA_LayoutOnEntireRect = 48,
        WA_OutsideWSRange = 49,
        WA_GrabbedShortcut = 50,
        WA_TransparentForMouseEvents = 51,
        WA_PaintUnclipped = 52,
        WA_SetWindowIcon = 53,
        WA_NoMouseReplay = 54,
        WA_DeleteOnClose = 55,
        WA_RightToLeft = 56,
        WA_SetLayoutDirection = 57,
        WA_NoChildEventsForParent = 58,
        WA_ForceUpdatesDisabled = 59,
        WA_WState_Created = 60,
        WA_WState_CompressKeys = 61,
        WA_WState_InPaintEvent = 62,
        WA_WState_Reparented = 63,
        WA_WState_ConfigPending = 64,
        WA_WState_Polished = 66,
        WA_WState_DND = 67,
        WA_WState_OwnSizePolicy = 68,
        WA_WState_ExplicitShowHide = 69,
        WA_ShowModal = 70,
        WA_MouseNoMask = 71,
        WA_GroupLeader = 72,
        WA_NoMousePropagation = 73,
        WA_Hover = 74,
        WA_InputMethodTransparent = 75,
        WA_QuitOnClose = 76,
        WA_KeyboardFocusChange = 77,
        WA_AcceptDrops = 78,
        WA_DropSiteRegistered = 79,
        WA_WindowPropagation = 80,
        WA_NoX11EventCompression = 81,
        WA_TintedBackground = 82,
        WA_X11OpenGLOverlay = 83,
        WA_AlwaysShowToolTips = 84,
        WA_MacOpaqueSizeGrip = 85,
        WA_SetStyle = 86,
        WA_SetLocale = 87,
        WA_MacShowFocusRect = 88,
        WA_MacNormalSize = 89,
        WA_MacSmallSize = 90,
        WA_MacMiniSize = 91,
        WA_LayoutUsesWidgetRect = 92,
        WA_StyledBackground = 93,
        WA_MSWindowsUseDirect3D = 94,
        WA_CanHostQMdiSubWindowTitleBar = 95,
        WA_MacAlwaysShowToolWindow = 96,
        WA_StyleSheet = 97,
        WA_ShowWithoutActivating = 98,
        WA_X11BypassTransientForHint = 99,
        WA_NativeWindow = 100,
        WA_DontCreateNativeAncestors = 101,
        WA_MacVariableSize = 102,
        WA_DontShowOnScreen = 103,
        WA_X11NetWmWindowTypeDesktop = 104,
        WA_X11NetWmWindowTypeDock = 105,
        WA_X11NetWmWindowTypeToolBar = 106,
        WA_X11NetWmWindowTypeMenu = 107,
        WA_X11NetWmWindowTypeUtility = 108,
        WA_X11NetWmWindowTypeSplash = 109,
        WA_X11NetWmWindowTypeDialog = 110,
        WA_X11NetWmWindowTypeDropDownMenu = 111,
        WA_X11NetWmWindowTypePopupMenu = 112,
        WA_X11NetWmWindowTypeToolTip = 113,
        WA_X11NetWmWindowTypeNotification = 114,
        WA_X11NetWmWindowTypeCombo = 115,
        WA_X11NetWmWindowTypeDND = 116,
        WA_MacFrameworkScaled = 117,
        WA_SetWindowModality = 118,
        WA_WState_WindowOpacitySet = 119,
        WA_TranslucentBackground = 120,
        WA_AcceptTouchEvents = 121,
        WA_WState_AcceptedTouchBeginEvent = 122,
        WA_TouchPadAcceptSingleTouchEvents = 123,
        WA_MergeSoftkeys = 124,
        WA_MergeSoftkeysRecursively = 125,
        WA_LockPortraitOrientation = 128,
        WA_LockLandscapeOrientation = 129,
        WA_AutoOrientation = 130,
        WA_X11DoNotAcceptFocus = 132,
        WA_AttributeCount = 133
    }

    alias WidgetAttribute.WA_Disabled WA_Disabled;
    alias WidgetAttribute.WA_UnderMouse WA_UnderMouse;
    alias WidgetAttribute.WA_MouseTracking WA_MouseTracking;
    alias WidgetAttribute.WA_ContentsPropagated WA_ContentsPropagated;
    alias WidgetAttribute.WA_OpaquePaintEvent WA_OpaquePaintEvent;
    alias WidgetAttribute.WA_StaticContents WA_StaticContents;
    alias WidgetAttribute.WA_LaidOut WA_LaidOut;
    alias WidgetAttribute.WA_PaintOnScreen WA_PaintOnScreen;
    alias WidgetAttribute.WA_NoSystemBackground WA_NoSystemBackground;
    alias WidgetAttribute.WA_UpdatesDisabled WA_UpdatesDisabled;
    alias WidgetAttribute.WA_Mapped WA_Mapped;
    alias WidgetAttribute.WA_MacNoClickThrough WA_MacNoClickThrough;
    alias WidgetAttribute.WA_PaintOutsidePaintEvent WA_PaintOutsidePaintEvent;
    alias WidgetAttribute.WA_InputMethodEnabled WA_InputMethodEnabled;
    alias WidgetAttribute.WA_WState_Visible WA_WState_Visible;
    alias WidgetAttribute.WA_WState_Hidden WA_WState_Hidden;
    alias WidgetAttribute.WA_ForceDisabled WA_ForceDisabled;
    alias WidgetAttribute.WA_KeyCompression WA_KeyCompression;
    alias WidgetAttribute.WA_PendingMoveEvent WA_PendingMoveEvent;
    alias WidgetAttribute.WA_PendingResizeEvent WA_PendingResizeEvent;
    alias WidgetAttribute.WA_SetPalette WA_SetPalette;
    alias WidgetAttribute.WA_SetFont WA_SetFont;
    alias WidgetAttribute.WA_SetCursor WA_SetCursor;
    alias WidgetAttribute.WA_NoChildEventsFromChildren WA_NoChildEventsFromChildren;
    alias WidgetAttribute.WA_WindowModified WA_WindowModified;
    alias WidgetAttribute.WA_Resized WA_Resized;
    alias WidgetAttribute.WA_Moved WA_Moved;
    alias WidgetAttribute.WA_PendingUpdate WA_PendingUpdate;
    alias WidgetAttribute.WA_InvalidSize WA_InvalidSize;
    alias WidgetAttribute.WA_MacBrushedMetal WA_MacBrushedMetal;
    alias WidgetAttribute.WA_CustomWhatsThis WA_CustomWhatsThis;
    alias WidgetAttribute.WA_LayoutOnEntireRect WA_LayoutOnEntireRect;
    alias WidgetAttribute.WA_OutsideWSRange WA_OutsideWSRange;
    alias WidgetAttribute.WA_GrabbedShortcut WA_GrabbedShortcut;
    alias WidgetAttribute.WA_TransparentForMouseEvents WA_TransparentForMouseEvents;
    alias WidgetAttribute.WA_PaintUnclipped WA_PaintUnclipped;
    alias WidgetAttribute.WA_SetWindowIcon WA_SetWindowIcon;
    alias WidgetAttribute.WA_NoMouseReplay WA_NoMouseReplay;
    alias WidgetAttribute.WA_DeleteOnClose WA_DeleteOnClose;
    alias WidgetAttribute.WA_RightToLeft WA_RightToLeft;
    alias WidgetAttribute.WA_SetLayoutDirection WA_SetLayoutDirection;
    alias WidgetAttribute.WA_NoChildEventsForParent WA_NoChildEventsForParent;
    alias WidgetAttribute.WA_ForceUpdatesDisabled WA_ForceUpdatesDisabled;
    alias WidgetAttribute.WA_WState_Created WA_WState_Created;
    alias WidgetAttribute.WA_WState_CompressKeys WA_WState_CompressKeys;
    alias WidgetAttribute.WA_WState_InPaintEvent WA_WState_InPaintEvent;
    alias WidgetAttribute.WA_WState_Reparented WA_WState_Reparented;
    alias WidgetAttribute.WA_WState_ConfigPending WA_WState_ConfigPending;
    alias WidgetAttribute.WA_WState_Polished WA_WState_Polished;
    alias WidgetAttribute.WA_WState_DND WA_WState_DND;
    alias WidgetAttribute.WA_WState_OwnSizePolicy WA_WState_OwnSizePolicy;
    alias WidgetAttribute.WA_WState_ExplicitShowHide WA_WState_ExplicitShowHide;
    alias WidgetAttribute.WA_ShowModal WA_ShowModal;
    alias WidgetAttribute.WA_MouseNoMask WA_MouseNoMask;
    alias WidgetAttribute.WA_GroupLeader WA_GroupLeader;
    alias WidgetAttribute.WA_NoMousePropagation WA_NoMousePropagation;
    alias WidgetAttribute.WA_Hover WA_Hover;
    alias WidgetAttribute.WA_InputMethodTransparent WA_InputMethodTransparent;
    alias WidgetAttribute.WA_QuitOnClose WA_QuitOnClose;
    alias WidgetAttribute.WA_KeyboardFocusChange WA_KeyboardFocusChange;
    alias WidgetAttribute.WA_AcceptDrops WA_AcceptDrops;
    alias WidgetAttribute.WA_DropSiteRegistered WA_DropSiteRegistered;
    alias WidgetAttribute.WA_WindowPropagation WA_WindowPropagation;
    alias WidgetAttribute.WA_NoX11EventCompression WA_NoX11EventCompression;
    alias WidgetAttribute.WA_TintedBackground WA_TintedBackground;
    alias WidgetAttribute.WA_X11OpenGLOverlay WA_X11OpenGLOverlay;
    alias WidgetAttribute.WA_AlwaysShowToolTips WA_AlwaysShowToolTips;
    alias WidgetAttribute.WA_MacOpaqueSizeGrip WA_MacOpaqueSizeGrip;
    alias WidgetAttribute.WA_SetStyle WA_SetStyle;
    alias WidgetAttribute.WA_SetLocale WA_SetLocale;
    alias WidgetAttribute.WA_MacShowFocusRect WA_MacShowFocusRect;
    alias WidgetAttribute.WA_MacNormalSize WA_MacNormalSize;
    alias WidgetAttribute.WA_MacSmallSize WA_MacSmallSize;
    alias WidgetAttribute.WA_MacMiniSize WA_MacMiniSize;
    alias WidgetAttribute.WA_LayoutUsesWidgetRect WA_LayoutUsesWidgetRect;
    alias WidgetAttribute.WA_StyledBackground WA_StyledBackground;
    alias WidgetAttribute.WA_MSWindowsUseDirect3D WA_MSWindowsUseDirect3D;
    alias WidgetAttribute.WA_CanHostQMdiSubWindowTitleBar WA_CanHostQMdiSubWindowTitleBar;
    alias WidgetAttribute.WA_MacAlwaysShowToolWindow WA_MacAlwaysShowToolWindow;
    alias WidgetAttribute.WA_StyleSheet WA_StyleSheet;
    alias WidgetAttribute.WA_ShowWithoutActivating WA_ShowWithoutActivating;
    alias WidgetAttribute.WA_X11BypassTransientForHint WA_X11BypassTransientForHint;
    alias WidgetAttribute.WA_NativeWindow WA_NativeWindow;
    alias WidgetAttribute.WA_DontCreateNativeAncestors WA_DontCreateNativeAncestors;
    alias WidgetAttribute.WA_MacVariableSize WA_MacVariableSize;
    alias WidgetAttribute.WA_DontShowOnScreen WA_DontShowOnScreen;
    alias WidgetAttribute.WA_X11NetWmWindowTypeDesktop WA_X11NetWmWindowTypeDesktop;
    alias WidgetAttribute.WA_X11NetWmWindowTypeDock WA_X11NetWmWindowTypeDock;
    alias WidgetAttribute.WA_X11NetWmWindowTypeToolBar WA_X11NetWmWindowTypeToolBar;
    alias WidgetAttribute.WA_X11NetWmWindowTypeMenu WA_X11NetWmWindowTypeMenu;
    alias WidgetAttribute.WA_X11NetWmWindowTypeUtility WA_X11NetWmWindowTypeUtility;
    alias WidgetAttribute.WA_X11NetWmWindowTypeSplash WA_X11NetWmWindowTypeSplash;
    alias WidgetAttribute.WA_X11NetWmWindowTypeDialog WA_X11NetWmWindowTypeDialog;
    alias WidgetAttribute.WA_X11NetWmWindowTypeDropDownMenu WA_X11NetWmWindowTypeDropDownMenu;
    alias WidgetAttribute.WA_X11NetWmWindowTypePopupMenu WA_X11NetWmWindowTypePopupMenu;
    alias WidgetAttribute.WA_X11NetWmWindowTypeToolTip WA_X11NetWmWindowTypeToolTip;
    alias WidgetAttribute.WA_X11NetWmWindowTypeNotification WA_X11NetWmWindowTypeNotification;
    alias WidgetAttribute.WA_X11NetWmWindowTypeCombo WA_X11NetWmWindowTypeCombo;
    alias WidgetAttribute.WA_X11NetWmWindowTypeDND WA_X11NetWmWindowTypeDND;
    alias WidgetAttribute.WA_MacFrameworkScaled WA_MacFrameworkScaled;
    alias WidgetAttribute.WA_SetWindowModality WA_SetWindowModality;
    alias WidgetAttribute.WA_WState_WindowOpacitySet WA_WState_WindowOpacitySet;
    alias WidgetAttribute.WA_TranslucentBackground WA_TranslucentBackground;
    alias WidgetAttribute.WA_AcceptTouchEvents WA_AcceptTouchEvents;
    alias WidgetAttribute.WA_WState_AcceptedTouchBeginEvent WA_WState_AcceptedTouchBeginEvent;
    alias WidgetAttribute.WA_TouchPadAcceptSingleTouchEvents WA_TouchPadAcceptSingleTouchEvents;
    alias WidgetAttribute.WA_MergeSoftkeys WA_MergeSoftkeys;
    alias WidgetAttribute.WA_MergeSoftkeysRecursively WA_MergeSoftkeysRecursively;
    alias WidgetAttribute.WA_LockPortraitOrientation WA_LockPortraitOrientation;
    alias WidgetAttribute.WA_LockLandscapeOrientation WA_LockLandscapeOrientation;
    alias WidgetAttribute.WA_AutoOrientation WA_AutoOrientation;
    alias WidgetAttribute.WA_X11DoNotAcceptFocus WA_X11DoNotAcceptFocus;
    alias WidgetAttribute.WA_AttributeCount WA_AttributeCount;

    public enum TextInteractionFlag {
        NoTextInteraction = 0,
        TextSelectableByMouse = 1,
        TextSelectableByKeyboard = 2,
        LinksAccessibleByMouse = 4,
        LinksAccessibleByKeyboard = 8,
        TextEditable = 16,
        TextEditorInteraction = 19,
        TextBrowserInteraction = 13
    }

    alias TextInteractionFlag.NoTextInteraction NoTextInteraction;
    alias TextInteractionFlag.TextSelectableByMouse TextSelectableByMouse;
    alias TextInteractionFlag.TextSelectableByKeyboard TextSelectableByKeyboard;
    alias TextInteractionFlag.LinksAccessibleByMouse LinksAccessibleByMouse;
    alias TextInteractionFlag.LinksAccessibleByKeyboard LinksAccessibleByKeyboard;
    alias TextInteractionFlag.TextEditable TextEditable;
    alias TextInteractionFlag.TextEditorInteraction TextEditorInteraction;
    alias TextInteractionFlag.TextBrowserInteraction TextBrowserInteraction;

    public enum MouseButton {
        NoButton = 0,
        LeftButton = 1,
        RightButton = 2,
        MidButton = 4,
        MiddleButton = 4,
        XButton1 = 8,
        XButton2 = 16,
        MouseButtonMask = 255
    }

    alias MouseButton.NoButton NoButton;
    alias MouseButton.LeftButton LeftButton;
    alias MouseButton.RightButton RightButton;
    alias MouseButton.MidButton MidButton;
    alias MouseButton.MiddleButton MiddleButton;
    alias MouseButton.XButton1 XButton1;
    alias MouseButton.XButton2 XButton2;
    alias MouseButton.MouseButtonMask MouseButtonMask;

    public enum MatchFlag {
        MatchExactly = 0,
        MatchContains = 1,
        MatchStartsWith = 2,
        MatchEndsWith = 3,
        MatchRegExp = 4,
        MatchWildcard = 5,
        MatchFixedString = 8,
        MatchCaseSensitive = 16,
        MatchWrap = 32,
        MatchRecursive = 64
    }

    alias MatchFlag.MatchExactly MatchExactly;
    alias MatchFlag.MatchContains MatchContains;
    alias MatchFlag.MatchStartsWith MatchStartsWith;
    alias MatchFlag.MatchEndsWith MatchEndsWith;
    alias MatchFlag.MatchRegExp MatchRegExp;
    alias MatchFlag.MatchWildcard MatchWildcard;
    alias MatchFlag.MatchFixedString MatchFixedString;
    alias MatchFlag.MatchCaseSensitive MatchCaseSensitive;
    alias MatchFlag.MatchWrap MatchWrap;
    alias MatchFlag.MatchRecursive MatchRecursive;

    public enum PenCapStyle {
        FlatCap = 0,
        SquareCap = 16,
        RoundCap = 32,
        MPenCapStyle = 48
    }

    alias PenCapStyle.FlatCap FlatCap;
    alias PenCapStyle.SquareCap SquareCap;
    alias PenCapStyle.RoundCap RoundCap;
    alias PenCapStyle.MPenCapStyle MPenCapStyle;

    public enum TextElideMode {
        ElideLeft = 0,
        ElideRight = 1,
        ElideMiddle = 2,
        ElideNone = 3
    }

    alias TextElideMode.ElideLeft ElideLeft;
    alias TextElideMode.ElideRight ElideRight;
    alias TextElideMode.ElideMiddle ElideMiddle;
    alias TextElideMode.ElideNone ElideNone;

// Functions
// Field accessors
    public alias void __isQtType_Qt;

// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
// signal handlers

