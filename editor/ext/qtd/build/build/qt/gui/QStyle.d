module qt.gui.QStyle;

public import qt.gui.QStyle_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
public import qtd.MOC : Q_OBJECT;
import qtd.Signal;
import qt.core.QMetaObject;
import qtd.meta.Runtime;
import qt.core.QObject;
private import qt.gui.ArrayOps2;
// automatic imports-------------
public import qt.core.Qt;
public import qt.gui.QPalette;
public import qt.gui.QIcon;
public import qt.gui.QSizePolicy;
public import qt.gui.QStyleOption;
public import qt.gui.QFontMetrics;
public import qt.gui.QApplication;
public import qt.gui.QPainter;
public import qt.core.QRect;
public import qt.core.QPoint;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.core.QEvent;
public import qt.core.QSize;
public import qt.gui.QStyleOptionComplex;
public import qt.core.QObject;
public import qt.gui.QStyleHintReturn;
public import qt.core.QTimerEvent;
public import qt.gui.QPalette;
public import qt.gui.QPixmap;
public import qt.gui.QIcon;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QStyle : QObject
{
    public enum PixelMetric {
        PM_ButtonMargin = 0,
        PM_ButtonDefaultIndicator = 1,
        PM_MenuButtonIndicator = 2,
        PM_ButtonShiftHorizontal = 3,
        PM_ButtonShiftVertical = 4,
        PM_DefaultFrameWidth = 5,
        PM_SpinBoxFrameWidth = 6,
        PM_ComboBoxFrameWidth = 7,
        PM_MaximumDragDistance = 8,
        PM_ScrollBarExtent = 9,
        PM_ScrollBarSliderMin = 10,
        PM_SliderThickness = 11,
        PM_SliderControlThickness = 12,
        PM_SliderLength = 13,
        PM_SliderTickmarkOffset = 14,
        PM_SliderSpaceAvailable = 15,
        PM_DockWidgetSeparatorExtent = 16,
        PM_DockWidgetHandleExtent = 17,
        PM_DockWidgetFrameWidth = 18,
        PM_TabBarTabOverlap = 19,
        PM_TabBarTabHSpace = 20,
        PM_TabBarTabVSpace = 21,
        PM_TabBarBaseHeight = 22,
        PM_TabBarBaseOverlap = 23,
        PM_ProgressBarChunkWidth = 24,
        PM_SplitterWidth = 25,
        PM_TitleBarHeight = 26,
        PM_MenuScrollerHeight = 27,
        PM_MenuHMargin = 28,
        PM_MenuVMargin = 29,
        PM_MenuPanelWidth = 30,
        PM_MenuTearoffHeight = 31,
        PM_MenuDesktopFrameWidth = 32,
        PM_MenuBarPanelWidth = 33,
        PM_MenuBarItemSpacing = 34,
        PM_MenuBarVMargin = 35,
        PM_MenuBarHMargin = 36,
        PM_IndicatorWidth = 37,
        PM_IndicatorHeight = 38,
        PM_ExclusiveIndicatorWidth = 39,
        PM_ExclusiveIndicatorHeight = 40,
        PM_CheckListButtonSize = 41,
        PM_CheckListControllerSize = 42,
        PM_DialogButtonsSeparator = 43,
        PM_DialogButtonsButtonWidth = 44,
        PM_DialogButtonsButtonHeight = 45,
        PM_MdiSubWindowFrameWidth = 46,
        PM_MdiSubWindowMinimizedWidth = 47,
        PM_HeaderMargin = 48,
        PM_HeaderMarkSize = 49,
        PM_HeaderGripMargin = 50,
        PM_TabBarTabShiftHorizontal = 51,
        PM_TabBarTabShiftVertical = 52,
        PM_TabBarScrollButtonWidth = 53,
        PM_ToolBarFrameWidth = 54,
        PM_ToolBarHandleExtent = 55,
        PM_ToolBarItemSpacing = 56,
        PM_ToolBarItemMargin = 57,
        PM_ToolBarSeparatorExtent = 58,
        PM_ToolBarExtensionExtent = 59,
        PM_SpinBoxSliderHeight = 60,
        PM_DefaultTopLevelMargin = 61,
        PM_DefaultChildMargin = 62,
        PM_DefaultLayoutSpacing = 63,
        PM_ToolBarIconSize = 64,
        PM_ListViewIconSize = 65,
        PM_IconViewIconSize = 66,
        PM_SmallIconSize = 67,
        PM_LargeIconSize = 68,
        PM_FocusFrameVMargin = 69,
        PM_FocusFrameHMargin = 70,
        PM_ToolTipLabelFrameWidth = 71,
        PM_CheckBoxLabelSpacing = 72,
        PM_TabBarIconSize = 73,
        PM_SizeGripSize = 74,
        PM_DockWidgetTitleMargin = 75,
        PM_MessageBoxIconSize = 76,
        PM_ButtonIconSize = 77,
        PM_DockWidgetTitleBarButtonMargin = 78,
        PM_RadioButtonLabelSpacing = 79,
        PM_LayoutLeftMargin = 80,
        PM_LayoutTopMargin = 81,
        PM_LayoutRightMargin = 82,
        PM_LayoutBottomMargin = 83,
        PM_LayoutHorizontalSpacing = 84,
        PM_LayoutVerticalSpacing = 85,
        PM_TabBar_ScrollButtonOverlap = 86,
        PM_TextCursorWidth = 87,
        PM_TabCloseIndicatorWidth = 88,
        PM_TabCloseIndicatorHeight = 89,
        PM_ScrollView_ScrollBarSpacing = 90,
        PM_SubMenuOverlap = 91,
        PM_CustomBase = -268435456
    }

    alias PixelMetric.PM_ButtonMargin PM_ButtonMargin;
    alias PixelMetric.PM_ButtonDefaultIndicator PM_ButtonDefaultIndicator;
    alias PixelMetric.PM_MenuButtonIndicator PM_MenuButtonIndicator;
    alias PixelMetric.PM_ButtonShiftHorizontal PM_ButtonShiftHorizontal;
    alias PixelMetric.PM_ButtonShiftVertical PM_ButtonShiftVertical;
    alias PixelMetric.PM_DefaultFrameWidth PM_DefaultFrameWidth;
    alias PixelMetric.PM_SpinBoxFrameWidth PM_SpinBoxFrameWidth;
    alias PixelMetric.PM_ComboBoxFrameWidth PM_ComboBoxFrameWidth;
    alias PixelMetric.PM_MaximumDragDistance PM_MaximumDragDistance;
    alias PixelMetric.PM_ScrollBarExtent PM_ScrollBarExtent;
    alias PixelMetric.PM_ScrollBarSliderMin PM_ScrollBarSliderMin;
    alias PixelMetric.PM_SliderThickness PM_SliderThickness;
    alias PixelMetric.PM_SliderControlThickness PM_SliderControlThickness;
    alias PixelMetric.PM_SliderLength PM_SliderLength;
    alias PixelMetric.PM_SliderTickmarkOffset PM_SliderTickmarkOffset;
    alias PixelMetric.PM_SliderSpaceAvailable PM_SliderSpaceAvailable;
    alias PixelMetric.PM_DockWidgetSeparatorExtent PM_DockWidgetSeparatorExtent;
    alias PixelMetric.PM_DockWidgetHandleExtent PM_DockWidgetHandleExtent;
    alias PixelMetric.PM_DockWidgetFrameWidth PM_DockWidgetFrameWidth;
    alias PixelMetric.PM_TabBarTabOverlap PM_TabBarTabOverlap;
    alias PixelMetric.PM_TabBarTabHSpace PM_TabBarTabHSpace;
    alias PixelMetric.PM_TabBarTabVSpace PM_TabBarTabVSpace;
    alias PixelMetric.PM_TabBarBaseHeight PM_TabBarBaseHeight;
    alias PixelMetric.PM_TabBarBaseOverlap PM_TabBarBaseOverlap;
    alias PixelMetric.PM_ProgressBarChunkWidth PM_ProgressBarChunkWidth;
    alias PixelMetric.PM_SplitterWidth PM_SplitterWidth;
    alias PixelMetric.PM_TitleBarHeight PM_TitleBarHeight;
    alias PixelMetric.PM_MenuScrollerHeight PM_MenuScrollerHeight;
    alias PixelMetric.PM_MenuHMargin PM_MenuHMargin;
    alias PixelMetric.PM_MenuVMargin PM_MenuVMargin;
    alias PixelMetric.PM_MenuPanelWidth PM_MenuPanelWidth;
    alias PixelMetric.PM_MenuTearoffHeight PM_MenuTearoffHeight;
    alias PixelMetric.PM_MenuDesktopFrameWidth PM_MenuDesktopFrameWidth;
    alias PixelMetric.PM_MenuBarPanelWidth PM_MenuBarPanelWidth;
    alias PixelMetric.PM_MenuBarItemSpacing PM_MenuBarItemSpacing;
    alias PixelMetric.PM_MenuBarVMargin PM_MenuBarVMargin;
    alias PixelMetric.PM_MenuBarHMargin PM_MenuBarHMargin;
    alias PixelMetric.PM_IndicatorWidth PM_IndicatorWidth;
    alias PixelMetric.PM_IndicatorHeight PM_IndicatorHeight;
    alias PixelMetric.PM_ExclusiveIndicatorWidth PM_ExclusiveIndicatorWidth;
    alias PixelMetric.PM_ExclusiveIndicatorHeight PM_ExclusiveIndicatorHeight;
    alias PixelMetric.PM_CheckListButtonSize PM_CheckListButtonSize;
    alias PixelMetric.PM_CheckListControllerSize PM_CheckListControllerSize;
    alias PixelMetric.PM_DialogButtonsSeparator PM_DialogButtonsSeparator;
    alias PixelMetric.PM_DialogButtonsButtonWidth PM_DialogButtonsButtonWidth;
    alias PixelMetric.PM_DialogButtonsButtonHeight PM_DialogButtonsButtonHeight;
    alias PixelMetric.PM_MdiSubWindowFrameWidth PM_MdiSubWindowFrameWidth;
    alias PixelMetric.PM_MdiSubWindowMinimizedWidth PM_MdiSubWindowMinimizedWidth;
    alias PixelMetric.PM_HeaderMargin PM_HeaderMargin;
    alias PixelMetric.PM_HeaderMarkSize PM_HeaderMarkSize;
    alias PixelMetric.PM_HeaderGripMargin PM_HeaderGripMargin;
    alias PixelMetric.PM_TabBarTabShiftHorizontal PM_TabBarTabShiftHorizontal;
    alias PixelMetric.PM_TabBarTabShiftVertical PM_TabBarTabShiftVertical;
    alias PixelMetric.PM_TabBarScrollButtonWidth PM_TabBarScrollButtonWidth;
    alias PixelMetric.PM_ToolBarFrameWidth PM_ToolBarFrameWidth;
    alias PixelMetric.PM_ToolBarHandleExtent PM_ToolBarHandleExtent;
    alias PixelMetric.PM_ToolBarItemSpacing PM_ToolBarItemSpacing;
    alias PixelMetric.PM_ToolBarItemMargin PM_ToolBarItemMargin;
    alias PixelMetric.PM_ToolBarSeparatorExtent PM_ToolBarSeparatorExtent;
    alias PixelMetric.PM_ToolBarExtensionExtent PM_ToolBarExtensionExtent;
    alias PixelMetric.PM_SpinBoxSliderHeight PM_SpinBoxSliderHeight;
    alias PixelMetric.PM_DefaultTopLevelMargin PM_DefaultTopLevelMargin;
    alias PixelMetric.PM_DefaultChildMargin PM_DefaultChildMargin;
    alias PixelMetric.PM_DefaultLayoutSpacing PM_DefaultLayoutSpacing;
    alias PixelMetric.PM_ToolBarIconSize PM_ToolBarIconSize;
    alias PixelMetric.PM_ListViewIconSize PM_ListViewIconSize;
    alias PixelMetric.PM_IconViewIconSize PM_IconViewIconSize;
    alias PixelMetric.PM_SmallIconSize PM_SmallIconSize;
    alias PixelMetric.PM_LargeIconSize PM_LargeIconSize;
    alias PixelMetric.PM_FocusFrameVMargin PM_FocusFrameVMargin;
    alias PixelMetric.PM_FocusFrameHMargin PM_FocusFrameHMargin;
    alias PixelMetric.PM_ToolTipLabelFrameWidth PM_ToolTipLabelFrameWidth;
    alias PixelMetric.PM_CheckBoxLabelSpacing PM_CheckBoxLabelSpacing;
    alias PixelMetric.PM_TabBarIconSize PM_TabBarIconSize;
    alias PixelMetric.PM_SizeGripSize PM_SizeGripSize;
    alias PixelMetric.PM_DockWidgetTitleMargin PM_DockWidgetTitleMargin;
    alias PixelMetric.PM_MessageBoxIconSize PM_MessageBoxIconSize;
    alias PixelMetric.PM_ButtonIconSize PM_ButtonIconSize;
    alias PixelMetric.PM_DockWidgetTitleBarButtonMargin PM_DockWidgetTitleBarButtonMargin;
    alias PixelMetric.PM_RadioButtonLabelSpacing PM_RadioButtonLabelSpacing;
    alias PixelMetric.PM_LayoutLeftMargin PM_LayoutLeftMargin;
    alias PixelMetric.PM_LayoutTopMargin PM_LayoutTopMargin;
    alias PixelMetric.PM_LayoutRightMargin PM_LayoutRightMargin;
    alias PixelMetric.PM_LayoutBottomMargin PM_LayoutBottomMargin;
    alias PixelMetric.PM_LayoutHorizontalSpacing PM_LayoutHorizontalSpacing;
    alias PixelMetric.PM_LayoutVerticalSpacing PM_LayoutVerticalSpacing;
    alias PixelMetric.PM_TabBar_ScrollButtonOverlap PM_TabBar_ScrollButtonOverlap;
    alias PixelMetric.PM_TextCursorWidth PM_TextCursorWidth;
    alias PixelMetric.PM_TabCloseIndicatorWidth PM_TabCloseIndicatorWidth;
    alias PixelMetric.PM_TabCloseIndicatorHeight PM_TabCloseIndicatorHeight;
    alias PixelMetric.PM_ScrollView_ScrollBarSpacing PM_ScrollView_ScrollBarSpacing;
    alias PixelMetric.PM_SubMenuOverlap PM_SubMenuOverlap;
    alias PixelMetric.PM_CustomBase PM_CustomBase;

    public enum SubControl {
        SC_None = 0,
        SC_ScrollBarAddLine = 1,
        SC_ScrollBarSubLine = 2,
        SC_ScrollBarAddPage = 4,
        SC_ScrollBarSubPage = 8,
        SC_ScrollBarFirst = 16,
        SC_ScrollBarLast = 32,
        SC_ScrollBarSlider = 64,
        SC_ScrollBarGroove = 128,
        SC_SpinBoxUp = 1,
        SC_SpinBoxDown = 2,
        SC_SpinBoxFrame = 4,
        SC_SpinBoxEditField = 8,
        SC_ComboBoxFrame = 1,
        SC_ComboBoxEditField = 2,
        SC_ComboBoxArrow = 4,
        SC_ComboBoxListBoxPopup = 8,
        SC_SliderGroove = 1,
        SC_SliderHandle = 2,
        SC_SliderTickmarks = 4,
        SC_ToolButton = 1,
        SC_ToolButtonMenu = 2,
        SC_TitleBarSysMenu = 1,
        SC_TitleBarMinButton = 2,
        SC_TitleBarMaxButton = 4,
        SC_TitleBarCloseButton = 8,
        SC_TitleBarNormalButton = 16,
        SC_TitleBarShadeButton = 32,
        SC_TitleBarUnshadeButton = 64,
        SC_TitleBarContextHelpButton = 128,
        SC_TitleBarLabel = 256,
        SC_Q3ListView = 1,
        SC_Q3ListViewBranch = 2,
        SC_Q3ListViewExpand = 4,
        SC_DialGroove = 1,
        SC_DialHandle = 2,
        SC_DialTickmarks = 4,
        SC_GroupBoxCheckBox = 1,
        SC_GroupBoxLabel = 2,
        SC_GroupBoxContents = 4,
        SC_GroupBoxFrame = 8,
        SC_MdiMinButton = 1,
        SC_MdiNormalButton = 2,
        SC_MdiCloseButton = 4,
        SC_CustomBase = -268435456,
        SC_All = -1
    }

    alias SubControl.SC_None SC_None;
    alias SubControl.SC_ScrollBarAddLine SC_ScrollBarAddLine;
    alias SubControl.SC_ScrollBarSubLine SC_ScrollBarSubLine;
    alias SubControl.SC_ScrollBarAddPage SC_ScrollBarAddPage;
    alias SubControl.SC_ScrollBarSubPage SC_ScrollBarSubPage;
    alias SubControl.SC_ScrollBarFirst SC_ScrollBarFirst;
    alias SubControl.SC_ScrollBarLast SC_ScrollBarLast;
    alias SubControl.SC_ScrollBarSlider SC_ScrollBarSlider;
    alias SubControl.SC_ScrollBarGroove SC_ScrollBarGroove;
    alias SubControl.SC_SpinBoxUp SC_SpinBoxUp;
    alias SubControl.SC_SpinBoxDown SC_SpinBoxDown;
    alias SubControl.SC_SpinBoxFrame SC_SpinBoxFrame;
    alias SubControl.SC_SpinBoxEditField SC_SpinBoxEditField;
    alias SubControl.SC_ComboBoxFrame SC_ComboBoxFrame;
    alias SubControl.SC_ComboBoxEditField SC_ComboBoxEditField;
    alias SubControl.SC_ComboBoxArrow SC_ComboBoxArrow;
    alias SubControl.SC_ComboBoxListBoxPopup SC_ComboBoxListBoxPopup;
    alias SubControl.SC_SliderGroove SC_SliderGroove;
    alias SubControl.SC_SliderHandle SC_SliderHandle;
    alias SubControl.SC_SliderTickmarks SC_SliderTickmarks;
    alias SubControl.SC_ToolButton SC_ToolButton;
    alias SubControl.SC_ToolButtonMenu SC_ToolButtonMenu;
    alias SubControl.SC_TitleBarSysMenu SC_TitleBarSysMenu;
    alias SubControl.SC_TitleBarMinButton SC_TitleBarMinButton;
    alias SubControl.SC_TitleBarMaxButton SC_TitleBarMaxButton;
    alias SubControl.SC_TitleBarCloseButton SC_TitleBarCloseButton;
    alias SubControl.SC_TitleBarNormalButton SC_TitleBarNormalButton;
    alias SubControl.SC_TitleBarShadeButton SC_TitleBarShadeButton;
    alias SubControl.SC_TitleBarUnshadeButton SC_TitleBarUnshadeButton;
    alias SubControl.SC_TitleBarContextHelpButton SC_TitleBarContextHelpButton;
    alias SubControl.SC_TitleBarLabel SC_TitleBarLabel;
    alias SubControl.SC_Q3ListView SC_Q3ListView;
    alias SubControl.SC_Q3ListViewBranch SC_Q3ListViewBranch;
    alias SubControl.SC_Q3ListViewExpand SC_Q3ListViewExpand;
    alias SubControl.SC_DialGroove SC_DialGroove;
    alias SubControl.SC_DialHandle SC_DialHandle;
    alias SubControl.SC_DialTickmarks SC_DialTickmarks;
    alias SubControl.SC_GroupBoxCheckBox SC_GroupBoxCheckBox;
    alias SubControl.SC_GroupBoxLabel SC_GroupBoxLabel;
    alias SubControl.SC_GroupBoxContents SC_GroupBoxContents;
    alias SubControl.SC_GroupBoxFrame SC_GroupBoxFrame;
    alias SubControl.SC_MdiMinButton SC_MdiMinButton;
    alias SubControl.SC_MdiNormalButton SC_MdiNormalButton;
    alias SubControl.SC_MdiCloseButton SC_MdiCloseButton;
    alias SubControl.SC_CustomBase SC_CustomBase;
    alias SubControl.SC_All SC_All;

    public enum StandardPixmap {
        SP_TitleBarMenuButton = 0,
        SP_TitleBarMinButton = 1,
        SP_TitleBarMaxButton = 2,
        SP_TitleBarCloseButton = 3,
        SP_TitleBarNormalButton = 4,
        SP_TitleBarShadeButton = 5,
        SP_TitleBarUnshadeButton = 6,
        SP_TitleBarContextHelpButton = 7,
        SP_DockWidgetCloseButton = 8,
        SP_MessageBoxInformation = 9,
        SP_MessageBoxWarning = 10,
        SP_MessageBoxCritical = 11,
        SP_MessageBoxQuestion = 12,
        SP_DesktopIcon = 13,
        SP_TrashIcon = 14,
        SP_ComputerIcon = 15,
        SP_DriveFDIcon = 16,
        SP_DriveHDIcon = 17,
        SP_DriveCDIcon = 18,
        SP_DriveDVDIcon = 19,
        SP_DriveNetIcon = 20,
        SP_DirOpenIcon = 21,
        SP_DirClosedIcon = 22,
        SP_DirLinkIcon = 23,
        SP_FileIcon = 24,
        SP_FileLinkIcon = 25,
        SP_ToolBarHorizontalExtensionButton = 26,
        SP_ToolBarVerticalExtensionButton = 27,
        SP_FileDialogStart = 28,
        SP_FileDialogEnd = 29,
        SP_FileDialogToParent = 30,
        SP_FileDialogNewFolder = 31,
        SP_FileDialogDetailedView = 32,
        SP_FileDialogInfoView = 33,
        SP_FileDialogContentsView = 34,
        SP_FileDialogListView = 35,
        SP_FileDialogBack = 36,
        SP_DirIcon = 37,
        SP_DialogOkButton = 38,
        SP_DialogCancelButton = 39,
        SP_DialogHelpButton = 40,
        SP_DialogOpenButton = 41,
        SP_DialogSaveButton = 42,
        SP_DialogCloseButton = 43,
        SP_DialogApplyButton = 44,
        SP_DialogResetButton = 45,
        SP_DialogDiscardButton = 46,
        SP_DialogYesButton = 47,
        SP_DialogNoButton = 48,
        SP_ArrowUp = 49,
        SP_ArrowDown = 50,
        SP_ArrowLeft = 51,
        SP_ArrowRight = 52,
        SP_ArrowBack = 53,
        SP_ArrowForward = 54,
        SP_DirHomeIcon = 55,
        SP_CommandLink = 56,
        SP_VistaShield = 57,
        SP_BrowserReload = 58,
        SP_BrowserStop = 59,
        SP_MediaPlay = 60,
        SP_MediaStop = 61,
        SP_MediaPause = 62,
        SP_MediaSkipForward = 63,
        SP_MediaSkipBackward = 64,
        SP_MediaSeekForward = 65,
        SP_MediaSeekBackward = 66,
        SP_MediaVolume = 67,
        SP_MediaVolumeMuted = 68,
        SP_CustomBase = -268435456
    }

    alias StandardPixmap.SP_TitleBarMenuButton SP_TitleBarMenuButton;
    alias StandardPixmap.SP_TitleBarMinButton SP_TitleBarMinButton;
    alias StandardPixmap.SP_TitleBarMaxButton SP_TitleBarMaxButton;
    alias StandardPixmap.SP_TitleBarCloseButton SP_TitleBarCloseButton;
    alias StandardPixmap.SP_TitleBarNormalButton SP_TitleBarNormalButton;
    alias StandardPixmap.SP_TitleBarShadeButton SP_TitleBarShadeButton;
    alias StandardPixmap.SP_TitleBarUnshadeButton SP_TitleBarUnshadeButton;
    alias StandardPixmap.SP_TitleBarContextHelpButton SP_TitleBarContextHelpButton;
    alias StandardPixmap.SP_DockWidgetCloseButton SP_DockWidgetCloseButton;
    alias StandardPixmap.SP_MessageBoxInformation SP_MessageBoxInformation;
    alias StandardPixmap.SP_MessageBoxWarning SP_MessageBoxWarning;
    alias StandardPixmap.SP_MessageBoxCritical SP_MessageBoxCritical;
    alias StandardPixmap.SP_MessageBoxQuestion SP_MessageBoxQuestion;
    alias StandardPixmap.SP_DesktopIcon SP_DesktopIcon;
    alias StandardPixmap.SP_TrashIcon SP_TrashIcon;
    alias StandardPixmap.SP_ComputerIcon SP_ComputerIcon;
    alias StandardPixmap.SP_DriveFDIcon SP_DriveFDIcon;
    alias StandardPixmap.SP_DriveHDIcon SP_DriveHDIcon;
    alias StandardPixmap.SP_DriveCDIcon SP_DriveCDIcon;
    alias StandardPixmap.SP_DriveDVDIcon SP_DriveDVDIcon;
    alias StandardPixmap.SP_DriveNetIcon SP_DriveNetIcon;
    alias StandardPixmap.SP_DirOpenIcon SP_DirOpenIcon;
    alias StandardPixmap.SP_DirClosedIcon SP_DirClosedIcon;
    alias StandardPixmap.SP_DirLinkIcon SP_DirLinkIcon;
    alias StandardPixmap.SP_FileIcon SP_FileIcon;
    alias StandardPixmap.SP_FileLinkIcon SP_FileLinkIcon;
    alias StandardPixmap.SP_ToolBarHorizontalExtensionButton SP_ToolBarHorizontalExtensionButton;
    alias StandardPixmap.SP_ToolBarVerticalExtensionButton SP_ToolBarVerticalExtensionButton;
    alias StandardPixmap.SP_FileDialogStart SP_FileDialogStart;
    alias StandardPixmap.SP_FileDialogEnd SP_FileDialogEnd;
    alias StandardPixmap.SP_FileDialogToParent SP_FileDialogToParent;
    alias StandardPixmap.SP_FileDialogNewFolder SP_FileDialogNewFolder;
    alias StandardPixmap.SP_FileDialogDetailedView SP_FileDialogDetailedView;
    alias StandardPixmap.SP_FileDialogInfoView SP_FileDialogInfoView;
    alias StandardPixmap.SP_FileDialogContentsView SP_FileDialogContentsView;
    alias StandardPixmap.SP_FileDialogListView SP_FileDialogListView;
    alias StandardPixmap.SP_FileDialogBack SP_FileDialogBack;
    alias StandardPixmap.SP_DirIcon SP_DirIcon;
    alias StandardPixmap.SP_DialogOkButton SP_DialogOkButton;
    alias StandardPixmap.SP_DialogCancelButton SP_DialogCancelButton;
    alias StandardPixmap.SP_DialogHelpButton SP_DialogHelpButton;
    alias StandardPixmap.SP_DialogOpenButton SP_DialogOpenButton;
    alias StandardPixmap.SP_DialogSaveButton SP_DialogSaveButton;
    alias StandardPixmap.SP_DialogCloseButton SP_DialogCloseButton;
    alias StandardPixmap.SP_DialogApplyButton SP_DialogApplyButton;
    alias StandardPixmap.SP_DialogResetButton SP_DialogResetButton;
    alias StandardPixmap.SP_DialogDiscardButton SP_DialogDiscardButton;
    alias StandardPixmap.SP_DialogYesButton SP_DialogYesButton;
    alias StandardPixmap.SP_DialogNoButton SP_DialogNoButton;
    alias StandardPixmap.SP_ArrowUp SP_ArrowUp;
    alias StandardPixmap.SP_ArrowDown SP_ArrowDown;
    alias StandardPixmap.SP_ArrowLeft SP_ArrowLeft;
    alias StandardPixmap.SP_ArrowRight SP_ArrowRight;
    alias StandardPixmap.SP_ArrowBack SP_ArrowBack;
    alias StandardPixmap.SP_ArrowForward SP_ArrowForward;
    alias StandardPixmap.SP_DirHomeIcon SP_DirHomeIcon;
    alias StandardPixmap.SP_CommandLink SP_CommandLink;
    alias StandardPixmap.SP_VistaShield SP_VistaShield;
    alias StandardPixmap.SP_BrowserReload SP_BrowserReload;
    alias StandardPixmap.SP_BrowserStop SP_BrowserStop;
    alias StandardPixmap.SP_MediaPlay SP_MediaPlay;
    alias StandardPixmap.SP_MediaStop SP_MediaStop;
    alias StandardPixmap.SP_MediaPause SP_MediaPause;
    alias StandardPixmap.SP_MediaSkipForward SP_MediaSkipForward;
    alias StandardPixmap.SP_MediaSkipBackward SP_MediaSkipBackward;
    alias StandardPixmap.SP_MediaSeekForward SP_MediaSeekForward;
    alias StandardPixmap.SP_MediaSeekBackward SP_MediaSeekBackward;
    alias StandardPixmap.SP_MediaVolume SP_MediaVolume;
    alias StandardPixmap.SP_MediaVolumeMuted SP_MediaVolumeMuted;
    alias StandardPixmap.SP_CustomBase SP_CustomBase;

    public enum StyleHint {
        SH_EtchDisabledText = 0,
        SH_DitherDisabledText = 1,
        SH_ScrollBar_MiddleClickAbsolutePosition = 2,
        SH_ScrollBar_ScrollWhenPointerLeavesControl = 3,
        SH_TabBar_SelectMouseType = 4,
        SH_TabBar_Alignment = 5,
        SH_Header_ArrowAlignment = 6,
        SH_Slider_SnapToValue = 7,
        SH_Slider_SloppyKeyEvents = 8,
        SH_ProgressDialog_CenterCancelButton = 9,
        SH_ProgressDialog_TextLabelAlignment = 10,
        SH_PrintDialog_RightAlignButtons = 11,
        SH_MainWindow_SpaceBelowMenuBar = 12,
        SH_FontDialog_SelectAssociatedText = 13,
        SH_Menu_AllowActiveAndDisabled = 14,
        SH_Menu_SpaceActivatesItem = 15,
        SH_Menu_SubMenuPopupDelay = 16,
        SH_ScrollView_FrameOnlyAroundContents = 17,
        SH_MenuBar_AltKeyNavigation = 18,
        SH_ComboBox_ListMouseTracking = 19,
        SH_Menu_MouseTracking = 20,
        SH_MenuBar_MouseTracking = 21,
        SH_ItemView_ChangeHighlightOnFocus = 22,
        SH_Widget_ShareActivation = 23,
        SH_Workspace_FillSpaceOnMaximize = 24,
        SH_ComboBox_Popup = 25,
        SH_TitleBar_NoBorder = 26,
        SH_Slider_StopMouseOverSlider = 27,
        SH_BlinkCursorWhenTextSelected = 28,
        SH_RichText_FullWidthSelection = 29,
        SH_Menu_Scrollable = 30,
        SH_GroupBox_TextLabelVerticalAlignment = 31,
        SH_GroupBox_TextLabelColor = 32,
        SH_Menu_SloppySubMenus = 33,
        SH_Table_GridLineColor = 34,
        SH_LineEdit_PasswordCharacter = 35,
        SH_DialogButtons_DefaultButton = 36,
        SH_ToolBox_SelectedPageTitleBold = 37,
        SH_TabBar_PreferNoArrows = 38,
        SH_ScrollBar_LeftClickAbsolutePosition = 39,
        SH_Q3ListViewExpand_SelectMouseType = 40,
        SH_UnderlineShortcut = 41,
        SH_SpinBox_AnimateButton = 42,
        SH_SpinBox_KeyPressAutoRepeatRate = 43,
        SH_SpinBox_ClickAutoRepeatRate = 44,
        SH_Menu_FillScreenWithScroll = 45,
        SH_ToolTipLabel_Opacity = 46,
        SH_DrawMenuBarSeparator = 47,
        SH_TitleBar_ModifyNotification = 48,
        SH_Button_FocusPolicy = 49,
        SH_MenuBar_DismissOnSecondClick = 50,
        SH_MessageBox_UseBorderForButtonSpacing = 51,
        SH_TitleBar_AutoRaise = 52,
        SH_ToolButton_PopupDelay = 53,
        SH_FocusFrame_Mask = 54,
        SH_RubberBand_Mask = 55,
        SH_WindowFrame_Mask = 56,
        SH_SpinControls_DisableOnBounds = 57,
        SH_Dial_BackgroundRole = 58,
        SH_ComboBox_LayoutDirection = 59,
        SH_ItemView_EllipsisLocation = 60,
        SH_ItemView_ShowDecorationSelected = 61,
        SH_ItemView_ActivateItemOnSingleClick = 62,
        SH_ScrollBar_ContextMenu = 63,
        SH_ScrollBar_RollBetweenButtons = 64,
        SH_Slider_AbsoluteSetButtons = 65,
        SH_Slider_PageSetButtons = 66,
        SH_Menu_KeyboardSearch = 67,
        SH_TabBar_ElideMode = 68,
        SH_DialogButtonLayout = 69,
        SH_ComboBox_PopupFrameStyle = 70,
        SH_MessageBox_TextInteractionFlags = 71,
        SH_DialogButtonBox_ButtonsHaveIcons = 72,
        SH_SpellCheckUnderlineStyle = 73,
        SH_MessageBox_CenterButtons = 74,
        SH_Menu_SelectionWrap = 75,
        SH_ItemView_MovementWithoutUpdatingSelection = 76,
        SH_ToolTip_Mask = 77,
        SH_FocusFrame_AboveWidget = 78,
        SH_TextControl_FocusIndicatorTextCharFormat = 79,
        SH_WizardStyle = 80,
        SH_ItemView_ArrowKeysNavigateIntoChildren = 81,
        SH_Menu_Mask = 82,
        SH_Menu_FlashTriggeredItem = 83,
        SH_Menu_FadeOutOnHide = 84,
        SH_SpinBox_ClickAutoRepeatThreshold = 85,
        SH_ItemView_PaintAlternatingRowColorsForEmptyArea = 86,
        SH_FormLayoutWrapPolicy = 87,
        SH_TabWidget_DefaultTabPosition = 88,
        SH_ToolBar_Movable = 89,
        SH_FormLayoutFieldGrowthPolicy = 90,
        SH_FormLayoutFormAlignment = 91,
        SH_FormLayoutLabelAlignment = 92,
        SH_ItemView_DrawDelegateFrame = 93,
        SH_TabBar_CloseButtonPosition = 94,
        SH_DockWidget_ButtonsHaveFrame = 95,
        SH_ToolButtonStyle = 96,
        SH_RequestSoftwareInputPanel = 97,
        SH_CustomBase = -268435456
    }

    alias StyleHint.SH_EtchDisabledText SH_EtchDisabledText;
    alias StyleHint.SH_DitherDisabledText SH_DitherDisabledText;
    alias StyleHint.SH_ScrollBar_MiddleClickAbsolutePosition SH_ScrollBar_MiddleClickAbsolutePosition;
    alias StyleHint.SH_ScrollBar_ScrollWhenPointerLeavesControl SH_ScrollBar_ScrollWhenPointerLeavesControl;
    alias StyleHint.SH_TabBar_SelectMouseType SH_TabBar_SelectMouseType;
    alias StyleHint.SH_TabBar_Alignment SH_TabBar_Alignment;
    alias StyleHint.SH_Header_ArrowAlignment SH_Header_ArrowAlignment;
    alias StyleHint.SH_Slider_SnapToValue SH_Slider_SnapToValue;
    alias StyleHint.SH_Slider_SloppyKeyEvents SH_Slider_SloppyKeyEvents;
    alias StyleHint.SH_ProgressDialog_CenterCancelButton SH_ProgressDialog_CenterCancelButton;
    alias StyleHint.SH_ProgressDialog_TextLabelAlignment SH_ProgressDialog_TextLabelAlignment;
    alias StyleHint.SH_PrintDialog_RightAlignButtons SH_PrintDialog_RightAlignButtons;
    alias StyleHint.SH_MainWindow_SpaceBelowMenuBar SH_MainWindow_SpaceBelowMenuBar;
    alias StyleHint.SH_FontDialog_SelectAssociatedText SH_FontDialog_SelectAssociatedText;
    alias StyleHint.SH_Menu_AllowActiveAndDisabled SH_Menu_AllowActiveAndDisabled;
    alias StyleHint.SH_Menu_SpaceActivatesItem SH_Menu_SpaceActivatesItem;
    alias StyleHint.SH_Menu_SubMenuPopupDelay SH_Menu_SubMenuPopupDelay;
    alias StyleHint.SH_ScrollView_FrameOnlyAroundContents SH_ScrollView_FrameOnlyAroundContents;
    alias StyleHint.SH_MenuBar_AltKeyNavigation SH_MenuBar_AltKeyNavigation;
    alias StyleHint.SH_ComboBox_ListMouseTracking SH_ComboBox_ListMouseTracking;
    alias StyleHint.SH_Menu_MouseTracking SH_Menu_MouseTracking;
    alias StyleHint.SH_MenuBar_MouseTracking SH_MenuBar_MouseTracking;
    alias StyleHint.SH_ItemView_ChangeHighlightOnFocus SH_ItemView_ChangeHighlightOnFocus;
    alias StyleHint.SH_Widget_ShareActivation SH_Widget_ShareActivation;
    alias StyleHint.SH_Workspace_FillSpaceOnMaximize SH_Workspace_FillSpaceOnMaximize;
    alias StyleHint.SH_ComboBox_Popup SH_ComboBox_Popup;
    alias StyleHint.SH_TitleBar_NoBorder SH_TitleBar_NoBorder;
    alias StyleHint.SH_Slider_StopMouseOverSlider SH_Slider_StopMouseOverSlider;
    alias StyleHint.SH_BlinkCursorWhenTextSelected SH_BlinkCursorWhenTextSelected;
    alias StyleHint.SH_RichText_FullWidthSelection SH_RichText_FullWidthSelection;
    alias StyleHint.SH_Menu_Scrollable SH_Menu_Scrollable;
    alias StyleHint.SH_GroupBox_TextLabelVerticalAlignment SH_GroupBox_TextLabelVerticalAlignment;
    alias StyleHint.SH_GroupBox_TextLabelColor SH_GroupBox_TextLabelColor;
    alias StyleHint.SH_Menu_SloppySubMenus SH_Menu_SloppySubMenus;
    alias StyleHint.SH_Table_GridLineColor SH_Table_GridLineColor;
    alias StyleHint.SH_LineEdit_PasswordCharacter SH_LineEdit_PasswordCharacter;
    alias StyleHint.SH_DialogButtons_DefaultButton SH_DialogButtons_DefaultButton;
    alias StyleHint.SH_ToolBox_SelectedPageTitleBold SH_ToolBox_SelectedPageTitleBold;
    alias StyleHint.SH_TabBar_PreferNoArrows SH_TabBar_PreferNoArrows;
    alias StyleHint.SH_ScrollBar_LeftClickAbsolutePosition SH_ScrollBar_LeftClickAbsolutePosition;
    alias StyleHint.SH_Q3ListViewExpand_SelectMouseType SH_Q3ListViewExpand_SelectMouseType;
    alias StyleHint.SH_UnderlineShortcut SH_UnderlineShortcut;
    alias StyleHint.SH_SpinBox_AnimateButton SH_SpinBox_AnimateButton;
    alias StyleHint.SH_SpinBox_KeyPressAutoRepeatRate SH_SpinBox_KeyPressAutoRepeatRate;
    alias StyleHint.SH_SpinBox_ClickAutoRepeatRate SH_SpinBox_ClickAutoRepeatRate;
    alias StyleHint.SH_Menu_FillScreenWithScroll SH_Menu_FillScreenWithScroll;
    alias StyleHint.SH_ToolTipLabel_Opacity SH_ToolTipLabel_Opacity;
    alias StyleHint.SH_DrawMenuBarSeparator SH_DrawMenuBarSeparator;
    alias StyleHint.SH_TitleBar_ModifyNotification SH_TitleBar_ModifyNotification;
    alias StyleHint.SH_Button_FocusPolicy SH_Button_FocusPolicy;
    alias StyleHint.SH_MenuBar_DismissOnSecondClick SH_MenuBar_DismissOnSecondClick;
    alias StyleHint.SH_MessageBox_UseBorderForButtonSpacing SH_MessageBox_UseBorderForButtonSpacing;
    alias StyleHint.SH_TitleBar_AutoRaise SH_TitleBar_AutoRaise;
    alias StyleHint.SH_ToolButton_PopupDelay SH_ToolButton_PopupDelay;
    alias StyleHint.SH_FocusFrame_Mask SH_FocusFrame_Mask;
    alias StyleHint.SH_RubberBand_Mask SH_RubberBand_Mask;
    alias StyleHint.SH_WindowFrame_Mask SH_WindowFrame_Mask;
    alias StyleHint.SH_SpinControls_DisableOnBounds SH_SpinControls_DisableOnBounds;
    alias StyleHint.SH_Dial_BackgroundRole SH_Dial_BackgroundRole;
    alias StyleHint.SH_ComboBox_LayoutDirection SH_ComboBox_LayoutDirection;
    alias StyleHint.SH_ItemView_EllipsisLocation SH_ItemView_EllipsisLocation;
    alias StyleHint.SH_ItemView_ShowDecorationSelected SH_ItemView_ShowDecorationSelected;
    alias StyleHint.SH_ItemView_ActivateItemOnSingleClick SH_ItemView_ActivateItemOnSingleClick;
    alias StyleHint.SH_ScrollBar_ContextMenu SH_ScrollBar_ContextMenu;
    alias StyleHint.SH_ScrollBar_RollBetweenButtons SH_ScrollBar_RollBetweenButtons;
    alias StyleHint.SH_Slider_AbsoluteSetButtons SH_Slider_AbsoluteSetButtons;
    alias StyleHint.SH_Slider_PageSetButtons SH_Slider_PageSetButtons;
    alias StyleHint.SH_Menu_KeyboardSearch SH_Menu_KeyboardSearch;
    alias StyleHint.SH_TabBar_ElideMode SH_TabBar_ElideMode;
    alias StyleHint.SH_DialogButtonLayout SH_DialogButtonLayout;
    alias StyleHint.SH_ComboBox_PopupFrameStyle SH_ComboBox_PopupFrameStyle;
    alias StyleHint.SH_MessageBox_TextInteractionFlags SH_MessageBox_TextInteractionFlags;
    alias StyleHint.SH_DialogButtonBox_ButtonsHaveIcons SH_DialogButtonBox_ButtonsHaveIcons;
    alias StyleHint.SH_SpellCheckUnderlineStyle SH_SpellCheckUnderlineStyle;
    alias StyleHint.SH_MessageBox_CenterButtons SH_MessageBox_CenterButtons;
    alias StyleHint.SH_Menu_SelectionWrap SH_Menu_SelectionWrap;
    alias StyleHint.SH_ItemView_MovementWithoutUpdatingSelection SH_ItemView_MovementWithoutUpdatingSelection;
    alias StyleHint.SH_ToolTip_Mask SH_ToolTip_Mask;
    alias StyleHint.SH_FocusFrame_AboveWidget SH_FocusFrame_AboveWidget;
    alias StyleHint.SH_TextControl_FocusIndicatorTextCharFormat SH_TextControl_FocusIndicatorTextCharFormat;
    alias StyleHint.SH_WizardStyle SH_WizardStyle;
    alias StyleHint.SH_ItemView_ArrowKeysNavigateIntoChildren SH_ItemView_ArrowKeysNavigateIntoChildren;
    alias StyleHint.SH_Menu_Mask SH_Menu_Mask;
    alias StyleHint.SH_Menu_FlashTriggeredItem SH_Menu_FlashTriggeredItem;
    alias StyleHint.SH_Menu_FadeOutOnHide SH_Menu_FadeOutOnHide;
    alias StyleHint.SH_SpinBox_ClickAutoRepeatThreshold SH_SpinBox_ClickAutoRepeatThreshold;
    alias StyleHint.SH_ItemView_PaintAlternatingRowColorsForEmptyArea SH_ItemView_PaintAlternatingRowColorsForEmptyArea;
    alias StyleHint.SH_FormLayoutWrapPolicy SH_FormLayoutWrapPolicy;
    alias StyleHint.SH_TabWidget_DefaultTabPosition SH_TabWidget_DefaultTabPosition;
    alias StyleHint.SH_ToolBar_Movable SH_ToolBar_Movable;
    alias StyleHint.SH_FormLayoutFieldGrowthPolicy SH_FormLayoutFieldGrowthPolicy;
    alias StyleHint.SH_FormLayoutFormAlignment SH_FormLayoutFormAlignment;
    alias StyleHint.SH_FormLayoutLabelAlignment SH_FormLayoutLabelAlignment;
    alias StyleHint.SH_ItemView_DrawDelegateFrame SH_ItemView_DrawDelegateFrame;
    alias StyleHint.SH_TabBar_CloseButtonPosition SH_TabBar_CloseButtonPosition;
    alias StyleHint.SH_DockWidget_ButtonsHaveFrame SH_DockWidget_ButtonsHaveFrame;
    alias StyleHint.SH_ToolButtonStyle SH_ToolButtonStyle;
    alias StyleHint.SH_RequestSoftwareInputPanel SH_RequestSoftwareInputPanel;
    alias StyleHint.SH_CustomBase SH_CustomBase;

    public enum PrimitiveElement {
        PE_Q3CheckListController = 0,
        PE_Q3CheckListExclusiveIndicator = 1,
        PE_Q3CheckListIndicator = 2,
        PE_Q3DockWindowSeparator = 3,
        PE_Q3Separator = 4,
        PE_Frame = 5,
        PE_FrameDefaultButton = 6,
        PE_FrameDockWidget = 7,
        PE_FrameFocusRect = 8,
        PE_FrameGroupBox = 9,
        PE_FrameLineEdit = 10,
        PE_FrameMenu = 11,
        PE_FrameStatusBar = 12,
        PE_FrameTabWidget = 13,
        PE_FrameWindow = 14,
        PE_FrameButtonBevel = 15,
        PE_FrameButtonTool = 16,
        PE_FrameTabBarBase = 17,
        PE_PanelButtonCommand = 18,
        PE_PanelButtonBevel = 19,
        PE_PanelButtonTool = 20,
        PE_PanelMenuBar = 21,
        PE_PanelToolBar = 22,
        PE_PanelLineEdit = 23,
        PE_IndicatorArrowDown = 24,
        PE_IndicatorArrowLeft = 25,
        PE_IndicatorArrowRight = 26,
        PE_IndicatorArrowUp = 27,
        PE_IndicatorBranch = 28,
        PE_IndicatorButtonDropDown = 29,
        PE_IndicatorViewItemCheck = 30,
        PE_IndicatorCheckBox = 31,
        PE_IndicatorDockWidgetResizeHandle = 32,
        PE_IndicatorHeaderArrow = 33,
        PE_IndicatorMenuCheckMark = 34,
        PE_IndicatorProgressChunk = 35,
        PE_IndicatorRadioButton = 36,
        PE_IndicatorSpinDown = 37,
        PE_IndicatorSpinMinus = 38,
        PE_IndicatorSpinPlus = 39,
        PE_IndicatorSpinUp = 40,
        PE_IndicatorToolBarHandle = 41,
        PE_IndicatorToolBarSeparator = 42,
        PE_PanelTipLabel = 43,
        PE_IndicatorTabTear = 44,
        PE_PanelScrollAreaCorner = 45,
        PE_Widget = 46,
        PE_IndicatorColumnViewArrow = 47,
        PE_IndicatorItemViewItemDrop = 48,
        PE_PanelItemViewItem = 49,
        PE_PanelItemViewRow = 50,
        PE_PanelStatusBar = 51,
        PE_IndicatorTabClose = 52,
        PE_PanelMenu = 53,
        PE_CustomBase = 251658240
    }

    alias PrimitiveElement.PE_Q3CheckListController PE_Q3CheckListController;
    alias PrimitiveElement.PE_Q3CheckListExclusiveIndicator PE_Q3CheckListExclusiveIndicator;
    alias PrimitiveElement.PE_Q3CheckListIndicator PE_Q3CheckListIndicator;
    alias PrimitiveElement.PE_Q3DockWindowSeparator PE_Q3DockWindowSeparator;
    alias PrimitiveElement.PE_Q3Separator PE_Q3Separator;
    alias PrimitiveElement.PE_Frame PE_Frame;
    alias PrimitiveElement.PE_FrameDefaultButton PE_FrameDefaultButton;
    alias PrimitiveElement.PE_FrameDockWidget PE_FrameDockWidget;
    alias PrimitiveElement.PE_FrameFocusRect PE_FrameFocusRect;
    alias PrimitiveElement.PE_FrameGroupBox PE_FrameGroupBox;
    alias PrimitiveElement.PE_FrameLineEdit PE_FrameLineEdit;
    alias PrimitiveElement.PE_FrameMenu PE_FrameMenu;
    alias PrimitiveElement.PE_FrameStatusBar PE_FrameStatusBar;
    alias PrimitiveElement.PE_FrameTabWidget PE_FrameTabWidget;
    alias PrimitiveElement.PE_FrameWindow PE_FrameWindow;
    alias PrimitiveElement.PE_FrameButtonBevel PE_FrameButtonBevel;
    alias PrimitiveElement.PE_FrameButtonTool PE_FrameButtonTool;
    alias PrimitiveElement.PE_FrameTabBarBase PE_FrameTabBarBase;
    alias PrimitiveElement.PE_PanelButtonCommand PE_PanelButtonCommand;
    alias PrimitiveElement.PE_PanelButtonBevel PE_PanelButtonBevel;
    alias PrimitiveElement.PE_PanelButtonTool PE_PanelButtonTool;
    alias PrimitiveElement.PE_PanelMenuBar PE_PanelMenuBar;
    alias PrimitiveElement.PE_PanelToolBar PE_PanelToolBar;
    alias PrimitiveElement.PE_PanelLineEdit PE_PanelLineEdit;
    alias PrimitiveElement.PE_IndicatorArrowDown PE_IndicatorArrowDown;
    alias PrimitiveElement.PE_IndicatorArrowLeft PE_IndicatorArrowLeft;
    alias PrimitiveElement.PE_IndicatorArrowRight PE_IndicatorArrowRight;
    alias PrimitiveElement.PE_IndicatorArrowUp PE_IndicatorArrowUp;
    alias PrimitiveElement.PE_IndicatorBranch PE_IndicatorBranch;
    alias PrimitiveElement.PE_IndicatorButtonDropDown PE_IndicatorButtonDropDown;
    alias PrimitiveElement.PE_IndicatorViewItemCheck PE_IndicatorViewItemCheck;
    alias PrimitiveElement.PE_IndicatorCheckBox PE_IndicatorCheckBox;
    alias PrimitiveElement.PE_IndicatorDockWidgetResizeHandle PE_IndicatorDockWidgetResizeHandle;
    alias PrimitiveElement.PE_IndicatorHeaderArrow PE_IndicatorHeaderArrow;
    alias PrimitiveElement.PE_IndicatorMenuCheckMark PE_IndicatorMenuCheckMark;
    alias PrimitiveElement.PE_IndicatorProgressChunk PE_IndicatorProgressChunk;
    alias PrimitiveElement.PE_IndicatorRadioButton PE_IndicatorRadioButton;
    alias PrimitiveElement.PE_IndicatorSpinDown PE_IndicatorSpinDown;
    alias PrimitiveElement.PE_IndicatorSpinMinus PE_IndicatorSpinMinus;
    alias PrimitiveElement.PE_IndicatorSpinPlus PE_IndicatorSpinPlus;
    alias PrimitiveElement.PE_IndicatorSpinUp PE_IndicatorSpinUp;
    alias PrimitiveElement.PE_IndicatorToolBarHandle PE_IndicatorToolBarHandle;
    alias PrimitiveElement.PE_IndicatorToolBarSeparator PE_IndicatorToolBarSeparator;
    alias PrimitiveElement.PE_PanelTipLabel PE_PanelTipLabel;
    alias PrimitiveElement.PE_IndicatorTabTear PE_IndicatorTabTear;
    alias PrimitiveElement.PE_PanelScrollAreaCorner PE_PanelScrollAreaCorner;
    alias PrimitiveElement.PE_Widget PE_Widget;
    alias PrimitiveElement.PE_IndicatorColumnViewArrow PE_IndicatorColumnViewArrow;
    alias PrimitiveElement.PE_IndicatorItemViewItemDrop PE_IndicatorItemViewItemDrop;
    alias PrimitiveElement.PE_PanelItemViewItem PE_PanelItemViewItem;
    alias PrimitiveElement.PE_PanelItemViewRow PE_PanelItemViewRow;
    alias PrimitiveElement.PE_PanelStatusBar PE_PanelStatusBar;
    alias PrimitiveElement.PE_IndicatorTabClose PE_IndicatorTabClose;
    alias PrimitiveElement.PE_PanelMenu PE_PanelMenu;
    alias PrimitiveElement.PE_CustomBase PE_CustomBase;

    public enum ControlElement {
        CE_PushButton = 0,
        CE_PushButtonBevel = 1,
        CE_PushButtonLabel = 2,
        CE_CheckBox = 3,
        CE_CheckBoxLabel = 4,
        CE_RadioButton = 5,
        CE_RadioButtonLabel = 6,
        CE_TabBarTab = 7,
        CE_TabBarTabShape = 8,
        CE_TabBarTabLabel = 9,
        CE_ProgressBar = 10,
        CE_ProgressBarGroove = 11,
        CE_ProgressBarContents = 12,
        CE_ProgressBarLabel = 13,
        CE_MenuItem = 14,
        CE_MenuScroller = 15,
        CE_MenuVMargin = 16,
        CE_MenuHMargin = 17,
        CE_MenuTearoff = 18,
        CE_MenuEmptyArea = 19,
        CE_MenuBarItem = 20,
        CE_MenuBarEmptyArea = 21,
        CE_ToolButtonLabel = 22,
        CE_Header = 23,
        CE_HeaderSection = 24,
        CE_HeaderLabel = 25,
        CE_Q3DockWindowEmptyArea = 26,
        CE_ToolBoxTab = 27,
        CE_SizeGrip = 28,
        CE_Splitter = 29,
        CE_RubberBand = 30,
        CE_DockWidgetTitle = 31,
        CE_ScrollBarAddLine = 32,
        CE_ScrollBarSubLine = 33,
        CE_ScrollBarAddPage = 34,
        CE_ScrollBarSubPage = 35,
        CE_ScrollBarSlider = 36,
        CE_ScrollBarFirst = 37,
        CE_ScrollBarLast = 38,
        CE_FocusFrame = 39,
        CE_ComboBoxLabel = 40,
        CE_ToolBar = 41,
        CE_ToolBoxTabShape = 42,
        CE_ToolBoxTabLabel = 43,
        CE_HeaderEmptyArea = 44,
        CE_ColumnViewGrip = 45,
        CE_ItemViewItem = 46,
        CE_ShapedFrame = 47,
        CE_CustomBase = -268435456
    }

    alias ControlElement.CE_PushButton CE_PushButton;
    alias ControlElement.CE_PushButtonBevel CE_PushButtonBevel;
    alias ControlElement.CE_PushButtonLabel CE_PushButtonLabel;
    alias ControlElement.CE_CheckBox CE_CheckBox;
    alias ControlElement.CE_CheckBoxLabel CE_CheckBoxLabel;
    alias ControlElement.CE_RadioButton CE_RadioButton;
    alias ControlElement.CE_RadioButtonLabel CE_RadioButtonLabel;
    alias ControlElement.CE_TabBarTab CE_TabBarTab;
    alias ControlElement.CE_TabBarTabShape CE_TabBarTabShape;
    alias ControlElement.CE_TabBarTabLabel CE_TabBarTabLabel;
    alias ControlElement.CE_ProgressBar CE_ProgressBar;
    alias ControlElement.CE_ProgressBarGroove CE_ProgressBarGroove;
    alias ControlElement.CE_ProgressBarContents CE_ProgressBarContents;
    alias ControlElement.CE_ProgressBarLabel CE_ProgressBarLabel;
    alias ControlElement.CE_MenuItem CE_MenuItem;
    alias ControlElement.CE_MenuScroller CE_MenuScroller;
    alias ControlElement.CE_MenuVMargin CE_MenuVMargin;
    alias ControlElement.CE_MenuHMargin CE_MenuHMargin;
    alias ControlElement.CE_MenuTearoff CE_MenuTearoff;
    alias ControlElement.CE_MenuEmptyArea CE_MenuEmptyArea;
    alias ControlElement.CE_MenuBarItem CE_MenuBarItem;
    alias ControlElement.CE_MenuBarEmptyArea CE_MenuBarEmptyArea;
    alias ControlElement.CE_ToolButtonLabel CE_ToolButtonLabel;
    alias ControlElement.CE_Header CE_Header;
    alias ControlElement.CE_HeaderSection CE_HeaderSection;
    alias ControlElement.CE_HeaderLabel CE_HeaderLabel;
    alias ControlElement.CE_Q3DockWindowEmptyArea CE_Q3DockWindowEmptyArea;
    alias ControlElement.CE_ToolBoxTab CE_ToolBoxTab;
    alias ControlElement.CE_SizeGrip CE_SizeGrip;
    alias ControlElement.CE_Splitter CE_Splitter;
    alias ControlElement.CE_RubberBand CE_RubberBand;
    alias ControlElement.CE_DockWidgetTitle CE_DockWidgetTitle;
    alias ControlElement.CE_ScrollBarAddLine CE_ScrollBarAddLine;
    alias ControlElement.CE_ScrollBarSubLine CE_ScrollBarSubLine;
    alias ControlElement.CE_ScrollBarAddPage CE_ScrollBarAddPage;
    alias ControlElement.CE_ScrollBarSubPage CE_ScrollBarSubPage;
    alias ControlElement.CE_ScrollBarSlider CE_ScrollBarSlider;
    alias ControlElement.CE_ScrollBarFirst CE_ScrollBarFirst;
    alias ControlElement.CE_ScrollBarLast CE_ScrollBarLast;
    alias ControlElement.CE_FocusFrame CE_FocusFrame;
    alias ControlElement.CE_ComboBoxLabel CE_ComboBoxLabel;
    alias ControlElement.CE_ToolBar CE_ToolBar;
    alias ControlElement.CE_ToolBoxTabShape CE_ToolBoxTabShape;
    alias ControlElement.CE_ToolBoxTabLabel CE_ToolBoxTabLabel;
    alias ControlElement.CE_HeaderEmptyArea CE_HeaderEmptyArea;
    alias ControlElement.CE_ColumnViewGrip CE_ColumnViewGrip;
    alias ControlElement.CE_ItemViewItem CE_ItemViewItem;
    alias ControlElement.CE_ShapedFrame CE_ShapedFrame;
    alias ControlElement.CE_CustomBase CE_CustomBase;

    public enum ContentsType {
        CT_PushButton = 0,
        CT_CheckBox = 1,
        CT_RadioButton = 2,
        CT_ToolButton = 3,
        CT_ComboBox = 4,
        CT_Splitter = 5,
        CT_Q3DockWindow = 6,
        CT_ProgressBar = 7,
        CT_MenuItem = 8,
        CT_MenuBarItem = 9,
        CT_MenuBar = 10,
        CT_Menu = 11,
        CT_TabBarTab = 12,
        CT_Slider = 13,
        CT_ScrollBar = 14,
        CT_Q3Header = 15,
        CT_LineEdit = 16,
        CT_SpinBox = 17,
        CT_SizeGrip = 18,
        CT_TabWidget = 19,
        CT_DialogButtons = 20,
        CT_HeaderSection = 21,
        CT_GroupBox = 22,
        CT_MdiControls = 23,
        CT_ItemViewItem = 24,
        CT_CustomBase = -268435456
    }

    alias ContentsType.CT_PushButton CT_PushButton;
    alias ContentsType.CT_CheckBox CT_CheckBox;
    alias ContentsType.CT_RadioButton CT_RadioButton;
    alias ContentsType.CT_ToolButton CT_ToolButton;
    alias ContentsType.CT_ComboBox CT_ComboBox;
    alias ContentsType.CT_Splitter CT_Splitter;
    alias ContentsType.CT_Q3DockWindow CT_Q3DockWindow;
    alias ContentsType.CT_ProgressBar CT_ProgressBar;
    alias ContentsType.CT_MenuItem CT_MenuItem;
    alias ContentsType.CT_MenuBarItem CT_MenuBarItem;
    alias ContentsType.CT_MenuBar CT_MenuBar;
    alias ContentsType.CT_Menu CT_Menu;
    alias ContentsType.CT_TabBarTab CT_TabBarTab;
    alias ContentsType.CT_Slider CT_Slider;
    alias ContentsType.CT_ScrollBar CT_ScrollBar;
    alias ContentsType.CT_Q3Header CT_Q3Header;
    alias ContentsType.CT_LineEdit CT_LineEdit;
    alias ContentsType.CT_SpinBox CT_SpinBox;
    alias ContentsType.CT_SizeGrip CT_SizeGrip;
    alias ContentsType.CT_TabWidget CT_TabWidget;
    alias ContentsType.CT_DialogButtons CT_DialogButtons;
    alias ContentsType.CT_HeaderSection CT_HeaderSection;
    alias ContentsType.CT_GroupBox CT_GroupBox;
    alias ContentsType.CT_MdiControls CT_MdiControls;
    alias ContentsType.CT_ItemViewItem CT_ItemViewItem;
    alias ContentsType.CT_CustomBase CT_CustomBase;

    public enum StateFlag {
        State_None = 0,
        State_Enabled = 1,
        State_Raised = 2,
        State_Sunken = 4,
        State_Off = 8,
        State_NoChange = 16,
        State_On = 32,
        State_DownArrow = 64,
        State_Horizontal = 128,
        State_HasFocus = 256,
        State_Top = 512,
        State_Bottom = 1024,
        State_FocusAtBorder = 2048,
        State_AutoRaise = 4096,
        State_MouseOver = 8192,
        State_UpArrow = 16384,
        State_Selected = 32768,
        State_Active = 65536,
        State_Window = 131072,
        State_Open = 262144,
        State_Children = 524288,
        State_Item = 1048576,
        State_Sibling = 2097152,
        State_Editing = 4194304,
        State_KeyboardFocusChange = 8388608,
        State_ReadOnly = 33554432,
        State_Small = 67108864,
        State_Mini = 134217728
    }

    alias StateFlag.State_None State_None;
    alias StateFlag.State_Enabled State_Enabled;
    alias StateFlag.State_Raised State_Raised;
    alias StateFlag.State_Sunken State_Sunken;
    alias StateFlag.State_Off State_Off;
    alias StateFlag.State_NoChange State_NoChange;
    alias StateFlag.State_On State_On;
    alias StateFlag.State_DownArrow State_DownArrow;
    alias StateFlag.State_Horizontal State_Horizontal;
    alias StateFlag.State_HasFocus State_HasFocus;
    alias StateFlag.State_Top State_Top;
    alias StateFlag.State_Bottom State_Bottom;
    alias StateFlag.State_FocusAtBorder State_FocusAtBorder;
    alias StateFlag.State_AutoRaise State_AutoRaise;
    alias StateFlag.State_MouseOver State_MouseOver;
    alias StateFlag.State_UpArrow State_UpArrow;
    alias StateFlag.State_Selected State_Selected;
    alias StateFlag.State_Active State_Active;
    alias StateFlag.State_Window State_Window;
    alias StateFlag.State_Open State_Open;
    alias StateFlag.State_Children State_Children;
    alias StateFlag.State_Item State_Item;
    alias StateFlag.State_Sibling State_Sibling;
    alias StateFlag.State_Editing State_Editing;
    alias StateFlag.State_KeyboardFocusChange State_KeyboardFocusChange;
    alias StateFlag.State_ReadOnly State_ReadOnly;
    alias StateFlag.State_Small State_Small;
    alias StateFlag.State_Mini State_Mini;

    public enum ComplexControl {
        CC_SpinBox = 0,
        CC_ComboBox = 1,
        CC_ScrollBar = 2,
        CC_Slider = 3,
        CC_ToolButton = 4,
        CC_TitleBar = 5,
        CC_Q3ListView = 6,
        CC_Dial = 7,
        CC_GroupBox = 8,
        CC_MdiControls = 9,
        CC_CustomBase = -268435456
    }

    alias ComplexControl.CC_SpinBox CC_SpinBox;
    alias ComplexControl.CC_ComboBox CC_ComboBox;
    alias ComplexControl.CC_ScrollBar CC_ScrollBar;
    alias ComplexControl.CC_Slider CC_Slider;
    alias ComplexControl.CC_ToolButton CC_ToolButton;
    alias ComplexControl.CC_TitleBar CC_TitleBar;
    alias ComplexControl.CC_Q3ListView CC_Q3ListView;
    alias ComplexControl.CC_Dial CC_Dial;
    alias ComplexControl.CC_GroupBox CC_GroupBox;
    alias ComplexControl.CC_MdiControls CC_MdiControls;
    alias ComplexControl.CC_CustomBase CC_CustomBase;

    public enum SubElement {
        SE_PushButtonContents = 0,
        SE_PushButtonFocusRect = 1,
        SE_CheckBoxIndicator = 2,
        SE_CheckBoxContents = 3,
        SE_CheckBoxFocusRect = 4,
        SE_CheckBoxClickRect = 5,
        SE_RadioButtonIndicator = 6,
        SE_RadioButtonContents = 7,
        SE_RadioButtonFocusRect = 8,
        SE_RadioButtonClickRect = 9,
        SE_ComboBoxFocusRect = 10,
        SE_SliderFocusRect = 11,
        SE_Q3DockWindowHandleRect = 12,
        SE_ProgressBarGroove = 13,
        SE_ProgressBarContents = 14,
        SE_ProgressBarLabel = 15,
        SE_DialogButtonAccept = 16,
        SE_DialogButtonReject = 17,
        SE_DialogButtonApply = 18,
        SE_DialogButtonHelp = 19,
        SE_DialogButtonAll = 20,
        SE_DialogButtonAbort = 21,
        SE_DialogButtonIgnore = 22,
        SE_DialogButtonRetry = 23,
        SE_DialogButtonCustom = 24,
        SE_ToolBoxTabContents = 25,
        SE_HeaderLabel = 26,
        SE_HeaderArrow = 27,
        SE_TabWidgetTabBar = 28,
        SE_TabWidgetTabPane = 29,
        SE_TabWidgetTabContents = 30,
        SE_TabWidgetLeftCorner = 31,
        SE_TabWidgetRightCorner = 32,
        SE_ViewItemCheckIndicator = 33,
        SE_TabBarTearIndicator = 34,
        SE_TreeViewDisclosureItem = 35,
        SE_LineEditContents = 36,
        SE_FrameContents = 37,
        SE_DockWidgetCloseButton = 38,
        SE_DockWidgetFloatButton = 39,
        SE_DockWidgetTitleBarText = 40,
        SE_DockWidgetIcon = 41,
        SE_CheckBoxLayoutItem = 42,
        SE_ComboBoxLayoutItem = 43,
        SE_DateTimeEditLayoutItem = 44,
        SE_DialogButtonBoxLayoutItem = 45,
        SE_LabelLayoutItem = 46,
        SE_ProgressBarLayoutItem = 47,
        SE_PushButtonLayoutItem = 48,
        SE_RadioButtonLayoutItem = 49,
        SE_SliderLayoutItem = 50,
        SE_SpinBoxLayoutItem = 51,
        SE_ToolButtonLayoutItem = 52,
        SE_FrameLayoutItem = 53,
        SE_GroupBoxLayoutItem = 54,
        SE_TabWidgetLayoutItem = 55,
        SE_ItemViewItemDecoration = 56,
        SE_ItemViewItemText = 57,
        SE_ItemViewItemFocusRect = 58,
        SE_TabBarTabLeftButton = 59,
        SE_TabBarTabRightButton = 60,
        SE_TabBarTabText = 61,
        SE_ShapedFrameContents = 62,
        SE_ToolBarHandle = 63,
        SE_CustomBase = -268435456
    }

    alias SubElement.SE_PushButtonContents SE_PushButtonContents;
    alias SubElement.SE_PushButtonFocusRect SE_PushButtonFocusRect;
    alias SubElement.SE_CheckBoxIndicator SE_CheckBoxIndicator;
    alias SubElement.SE_CheckBoxContents SE_CheckBoxContents;
    alias SubElement.SE_CheckBoxFocusRect SE_CheckBoxFocusRect;
    alias SubElement.SE_CheckBoxClickRect SE_CheckBoxClickRect;
    alias SubElement.SE_RadioButtonIndicator SE_RadioButtonIndicator;
    alias SubElement.SE_RadioButtonContents SE_RadioButtonContents;
    alias SubElement.SE_RadioButtonFocusRect SE_RadioButtonFocusRect;
    alias SubElement.SE_RadioButtonClickRect SE_RadioButtonClickRect;
    alias SubElement.SE_ComboBoxFocusRect SE_ComboBoxFocusRect;
    alias SubElement.SE_SliderFocusRect SE_SliderFocusRect;
    alias SubElement.SE_Q3DockWindowHandleRect SE_Q3DockWindowHandleRect;
    alias SubElement.SE_ProgressBarGroove SE_ProgressBarGroove;
    alias SubElement.SE_ProgressBarContents SE_ProgressBarContents;
    alias SubElement.SE_ProgressBarLabel SE_ProgressBarLabel;
    alias SubElement.SE_DialogButtonAccept SE_DialogButtonAccept;
    alias SubElement.SE_DialogButtonReject SE_DialogButtonReject;
    alias SubElement.SE_DialogButtonApply SE_DialogButtonApply;
    alias SubElement.SE_DialogButtonHelp SE_DialogButtonHelp;
    alias SubElement.SE_DialogButtonAll SE_DialogButtonAll;
    alias SubElement.SE_DialogButtonAbort SE_DialogButtonAbort;
    alias SubElement.SE_DialogButtonIgnore SE_DialogButtonIgnore;
    alias SubElement.SE_DialogButtonRetry SE_DialogButtonRetry;
    alias SubElement.SE_DialogButtonCustom SE_DialogButtonCustom;
    alias SubElement.SE_ToolBoxTabContents SE_ToolBoxTabContents;
    alias SubElement.SE_HeaderLabel SE_HeaderLabel;
    alias SubElement.SE_HeaderArrow SE_HeaderArrow;
    alias SubElement.SE_TabWidgetTabBar SE_TabWidgetTabBar;
    alias SubElement.SE_TabWidgetTabPane SE_TabWidgetTabPane;
    alias SubElement.SE_TabWidgetTabContents SE_TabWidgetTabContents;
    alias SubElement.SE_TabWidgetLeftCorner SE_TabWidgetLeftCorner;
    alias SubElement.SE_TabWidgetRightCorner SE_TabWidgetRightCorner;
    alias SubElement.SE_ViewItemCheckIndicator SE_ViewItemCheckIndicator;
    alias SubElement.SE_TabBarTearIndicator SE_TabBarTearIndicator;
    alias SubElement.SE_TreeViewDisclosureItem SE_TreeViewDisclosureItem;
    alias SubElement.SE_LineEditContents SE_LineEditContents;
    alias SubElement.SE_FrameContents SE_FrameContents;
    alias SubElement.SE_DockWidgetCloseButton SE_DockWidgetCloseButton;
    alias SubElement.SE_DockWidgetFloatButton SE_DockWidgetFloatButton;
    alias SubElement.SE_DockWidgetTitleBarText SE_DockWidgetTitleBarText;
    alias SubElement.SE_DockWidgetIcon SE_DockWidgetIcon;
    alias SubElement.SE_CheckBoxLayoutItem SE_CheckBoxLayoutItem;
    alias SubElement.SE_ComboBoxLayoutItem SE_ComboBoxLayoutItem;
    alias SubElement.SE_DateTimeEditLayoutItem SE_DateTimeEditLayoutItem;
    alias SubElement.SE_DialogButtonBoxLayoutItem SE_DialogButtonBoxLayoutItem;
    alias SubElement.SE_LabelLayoutItem SE_LabelLayoutItem;
    alias SubElement.SE_ProgressBarLayoutItem SE_ProgressBarLayoutItem;
    alias SubElement.SE_PushButtonLayoutItem SE_PushButtonLayoutItem;
    alias SubElement.SE_RadioButtonLayoutItem SE_RadioButtonLayoutItem;
    alias SubElement.SE_SliderLayoutItem SE_SliderLayoutItem;
    alias SubElement.SE_SpinBoxLayoutItem SE_SpinBoxLayoutItem;
    alias SubElement.SE_ToolButtonLayoutItem SE_ToolButtonLayoutItem;
    alias SubElement.SE_FrameLayoutItem SE_FrameLayoutItem;
    alias SubElement.SE_GroupBoxLayoutItem SE_GroupBoxLayoutItem;
    alias SubElement.SE_TabWidgetLayoutItem SE_TabWidgetLayoutItem;
    alias SubElement.SE_ItemViewItemDecoration SE_ItemViewItemDecoration;
    alias SubElement.SE_ItemViewItemText SE_ItemViewItemText;
    alias SubElement.SE_ItemViewItemFocusRect SE_ItemViewItemFocusRect;
    alias SubElement.SE_TabBarTabLeftButton SE_TabBarTabLeftButton;
    alias SubElement.SE_TabBarTabRightButton SE_TabBarTabRightButton;
    alias SubElement.SE_TabBarTabText SE_TabBarTabText;
    alias SubElement.SE_ShapedFrameContents SE_ShapedFrameContents;
    alias SubElement.SE_ToolBarHandle SE_ToolBarHandle;
    alias SubElement.SE_CustomBase SE_CustomBase;


    private static const string[] __signalSignatures = [    ];

    int signalSignature(int signalId, ref stringz signature) {
        signalId = super.signalSignature(signalId, signature);
        if (signature)
            return signalId;
        if (signalId < __signalSignatures.length)
            signature = __signalSignatures[signalId].ptr;
        else
            signalId -= __signalSignatures.length;
        return signalId;
    }
// Functions

    public this() {
        void* ret = qtd_QStyle_QStyle(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    private final int combinedLayoutSpacing(int controls1, int controls2, Qt.Orientation orientation, QStyleOption option, QWidget widget) const {
        return qtd_QStyle_combinedLayoutSpacing_ControlTypes_ControlTypes_Orientation_nativepointerQStyleOption_QWidget_const(qtdNativeId, controls1, controls2, orientation, option is null ? null : option.qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    private final int layoutSpacing(QSizePolicy.ControlType control1, QSizePolicy.ControlType control2, Qt.Orientation orientation, QStyleOption option, QWidget widget) const {
        return qtd_QStyle_layoutSpacing_ControlType_ControlType_Orientation_nativepointerQStyleOption_QWidget_const(qtdNativeId, control1, control2, orientation, option is null ? null : (cast(QStyleOption)option).qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
    }

    protected int layoutSpacingImplementation(QSizePolicy.ControlType control1, QSizePolicy.ControlType control2, Qt.Orientation orientation, QStyleOption option = null, QWidget widget = null) const {
        return qtd_QStyle_layoutSpacingImplementation_ControlType_ControlType_Orientation_nativepointerQStyleOption_QWidget_const(qtdNativeId, control1, control2, orientation, option is null ? null : (cast(QStyleOption)option).qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
    }

    public final QStyle proxy() const {
        void *ret = qtd_QStyle_proxy_const(qtdNativeId);
        QStyle __d_return_value = QStyle.__getObject(ret);
        return __d_return_value;
    }

    public final QIcon standardIcon(QStyle.StandardPixmap standardIcon, QStyleOption option = null, QWidget widget = null) const {
        void* ret = qtd_QStyle_standardIcon_StandardPixmap_nativepointerQStyleOption_QWidget_const(qtdNativeId, standardIcon, option is null ? null : (cast(QStyleOption)option).qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    protected QIcon standardIconImplementation(QStyle.StandardPixmap standardIcon, QStyleOption opt = null, QWidget widget = null) const {
        void* ret = qtd_QStyle_standardIconImplementation_StandardPixmap_nativepointerQStyleOption_QWidget_const(qtdNativeId, standardIcon, opt is null ? null : (cast(QStyleOption)opt).qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
        QIcon __d_return_value = new QIcon(ret);
        return __d_return_value;
    }

    public abstract void drawComplexControl(QStyle.ComplexControl cc, QStyleOptionComplex opt, QPainter p, QWidget widget = null) const;

    public abstract void drawControl(QStyle.ControlElement element, QStyleOption opt, QPainter p, QWidget w = null) const;

    public void drawItemPixmap(QPainter painter, const(QRect) rect, int alignment, const(QPixmap) pixmap) const {
        qtd_QStyle_drawItemPixmap_QPainter_QRect_int_QPixmap_const(qtdNativeId, painter is null ? null : painter.qtdNativeId, rect, alignment, pixmap is null ? null : (cast(QPixmap)pixmap).qtdNativeId);
    }

    public void drawItemText(QPainter painter, const(QRect) rect, int flags, const(QPalette) pal, bool enabled, string text, QPalette.ColorRole textRole = QPalette.ColorRole.NoRole) const {
        qtd_QStyle_drawItemText_QPainter_QRect_int_QPalette_bool_string_ColorRole_const(qtdNativeId, painter is null ? null : painter.qtdNativeId, rect, flags, pal is null ? null : (cast(QPalette)pal).qtdNativeId, enabled, text, textRole);
    }

    public abstract void drawPrimitive(QStyle.PrimitiveElement pe, QStyleOption opt, QPainter p, QWidget w = null) const;

    public abstract QPixmap generatedIconPixmap(QIcon.Mode iconMode, const(QPixmap) pixmap, QStyleOption opt) const;

    public abstract int hitTestComplexControl(QStyle.ComplexControl cc, QStyleOptionComplex opt, const(QPoint) pt, QWidget widget = null) const;

    public QRect itemPixmapRect(const(QRect) r, int flags, const(QPixmap) pixmap) const {
        QRect res;
        qtd_QStyle_itemPixmapRect_QRect_int_QPixmap_const(qtdNativeId, &res, r, flags, pixmap is null ? null : (cast(QPixmap)pixmap).qtdNativeId);
        return res;
    }

    public QRect itemTextRect(const(QFontMetrics) fm, const(QRect) r, int flags, bool enabled, string text) const {
        QRect res;
        qtd_QStyle_itemTextRect_QFontMetrics_QRect_int_bool_string_const(qtdNativeId, &res, fm is null ? null : (cast(QFontMetrics)fm).qtdNativeId, r, flags, enabled, text);
        return res;
    }

    public abstract int pixelMetric(QStyle.PixelMetric metric, QStyleOption option = null, QWidget widget = null) const;

    public void polish(QApplication arg__1) {
        qtd_QStyle_polish_QApplication(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public void polish(QPalette arg__1) {
        qtd_QStyle_polish_nativepointerQPalette(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public void polish(QWidget arg__1) {
        qtd_QStyle_polish_QWidget(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public abstract QSize sizeFromContents(QStyle.ContentsType ct, QStyleOption opt, const(QSize) contentsSize, QWidget w = null) const;

    public QPalette standardPalette() const {
        void* ret = qtd_QStyle_standardPalette_const(qtdNativeId);
        QPalette __d_return_value = new QPalette(ret);
        return __d_return_value;
    }

    public abstract int styleHint(QStyle.StyleHint stylehint, QStyleOption opt = null, QWidget widget = null, QStyleHintReturn returnData = null) const;

    public abstract QRect subControlRect(QStyle.ComplexControl cc, QStyleOptionComplex opt, int sc, QWidget widget = null) const;

    public abstract QRect subElementRect(QStyle.SubElement subElement, QStyleOption option, QWidget widget = null) const;

    public void unpolish(QApplication arg__1) {
        qtd_QStyle_unpolish_QApplication(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public void unpolish(QWidget arg__1) {
        qtd_QStyle_unpolish_QWidget(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public static QRect alignedRect(Qt.LayoutDirection direction, int alignment, const(QSize) size, const(QRect) rectangle) {
        QRect res;
        qtd_QStyle_alignedRect_LayoutDirection_Alignment_QSize_QRect(&res, direction, alignment, size, rectangle);
        return res;
    }

    public static int sliderPositionFromValue(int min, int max, int val, int space, bool upsideDown = false) {
        return qtd_QStyle_sliderPositionFromValue_int_int_int_int_bool(min, max, val, space, upsideDown);
    }

    public static int sliderValueFromPosition(int min, int max, int pos, int space, bool upsideDown = false) {
        return qtd_QStyle_sliderValueFromPosition_int_int_int_int_bool(min, max, pos, space, upsideDown);
    }

    public static int visualAlignment(Qt.LayoutDirection direction, int alignment) {
        return qtd_QStyle_visualAlignment_LayoutDirection_Alignment(direction, alignment);
    }

    public static QPoint visualPos(Qt.LayoutDirection direction, const(QRect) boundingRect, const(QPoint) logicalPos) {
        QPoint res;
        qtd_QStyle_visualPos_LayoutDirection_QRect_QPoint(&res, direction, boundingRect, logicalPos);
        return res;
    }

    public static QRect visualRect(Qt.LayoutDirection direction, const(QRect) boundingRect, const(QRect) logicalRect) {
        QRect res;
        qtd_QStyle_visualRect_LayoutDirection_QRect_QRect(&res, direction, boundingRect, logicalRect);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "layoutSpacingImplementation(QSizePolicy::ControlType,QSizePolicy::ControlType,Qt::Orientation,const QStyleOption*,const QWidget*)const", 
            "layoutSpacingImplementation(QSizePolicy::ControlType,QSizePolicy::ControlType,Qt::Orientation,const QStyleOption*)const", 
            "layoutSpacingImplementation(QSizePolicy::ControlType,QSizePolicy::ControlType,Qt::Orientation)const", 
            "standardIconImplementation(QStyle::StandardPixmap,const QStyleOption*,const QWidget*)const", 
            "standardIconImplementation(QStyle::StandardPixmap,const QStyleOption*)const", 
            "standardIconImplementation(QStyle::StandardPixmap)const"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QStyle_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QStyle);
    }

    static QStyle __getObject(void* nativeId) {
        return static_cast!(QStyle)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QStyle_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QStyle_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QStyle_ConcreteWrapper(nativeId, initFlags);
        QStyle.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(QSizePolicy.ControlType,QSizePolicy.ControlType,Qt.Orientation,QStyleOption,QWidget)("layoutSpacingImplementation"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(QSizePolicy.ControlType,QSizePolicy.ControlType,Qt.Orientation,QStyleOption)("layoutSpacingImplementation"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!(QSizePolicy.ControlType,QSizePolicy.ControlType,Qt.Orientation)("layoutSpacingImplementation"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!(QStyle.StandardPixmap,QStyleOption,QWidget)("standardIconImplementation"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!(QStyle.StandardPixmap,QStyleOption)("standardIconImplementation"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[5]);
        mo.addMethod(new QMetaSlot(signature!(QStyle.StandardPixmap)("standardIconImplementation"), index));

    }

    public alias void __isQtType_QStyle;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    /*
    @QtBlockedSlot
    public final int combinedLayoutSpacing(QSizePolicy.ControlTypes controls1, QSizePolicy.ControlTypes controls2,
    qt.core.Qt.Orientation orientation, QStyleOption option, QWidget widget) {
    return combinedLayoutSpacing(controls1, controls2, orientation, option == null ? null : option.nativePointer(), widget);
    }

    @QtBlockedSlot
    public final int combinedLayoutSpacing(QSizePolicy.ControlTypes controls1, QSizePolicy.ControlTypes controls2,
    qt.core.Qt.Orientation orientation, QStyleOption option) {
    return combinedLayoutSpacing(controls1, controls2, orientation, option, null);
    }

    @QtBlockedSlot
    public final int combinedLayoutSpacing(QSizePolicy.ControlTypes controls1, QSizePolicy.ControlTypes controls2,
    qt.core.Qt.Orientation orientation) {
    return combinedLayoutSpacing(controls1, controls2, orientation, null);
    }

    @QtBlockedSlot
    public final int layoutSpacing(QSizePolicy.ControlType control1, QSizePolicy.ControlType control2, qt.core.Qt.Orientation orientation,
    QStyleOption option, QWidget widget) {
    return layoutSpacing(control1, control2, orientation, option == null ? null : option.nativePointer(), widget);
    }

    @QtBlockedSlot
    public final int layoutSpacing(QSizePolicy.ControlType control1, QSizePolicy.ControlType control2, qt.core.Qt.Orientation orientation,
    QStyleOption option) {
    return layoutSpacing(control1, control2, orientation, option, null);
    }

    @QtBlockedSlot
    public final int layoutSpacing(QSizePolicy.ControlType control1, QSizePolicy.ControlType control2, qt.core.Qt.Orientation orientation) {
    return layoutSpacing(control1, control2, orientation, null);
    }
     */

}

    public class QStyle_ConcreteWrapper : QStyle {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public void drawComplexControl(QStyle.ComplexControl cc, QStyleOptionComplex opt, QPainter p, QWidget widget = null) const {
            qtd_QStyle_drawComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPainter_QWidget_const(qtdNativeId, cc, opt is null ? null : (cast(QStyleOptionComplex)opt).qtdNativeId, p is null ? null : p.qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
        }

        override         public void drawControl(QStyle.ControlElement element, QStyleOption opt, QPainter p, QWidget w = null) const {
            qtd_QStyle_drawControl_ControlElement_nativepointerQStyleOption_QPainter_QWidget_const(qtdNativeId, element, opt is null ? null : (cast(QStyleOption)opt).qtdNativeId, p is null ? null : p.qtdNativeId, w is null ? null : (cast(QWidget)w).qtdNativeId);
        }

        override         public void drawPrimitive(QStyle.PrimitiveElement pe, QStyleOption opt, QPainter p, QWidget w = null) const {
            qtd_QStyle_drawPrimitive_PrimitiveElement_nativepointerQStyleOption_QPainter_QWidget_const(qtdNativeId, pe, opt is null ? null : (cast(QStyleOption)opt).qtdNativeId, p is null ? null : p.qtdNativeId, w is null ? null : (cast(QWidget)w).qtdNativeId);
        }

        override         public QPixmap generatedIconPixmap(QIcon.Mode iconMode, const(QPixmap) pixmap, QStyleOption opt) const {
            void* ret = qtd_QStyle_generatedIconPixmap_Mode_QPixmap_nativepointerQStyleOption_const(qtdNativeId, iconMode, pixmap is null ? null : (cast(QPixmap)pixmap).qtdNativeId, opt is null ? null : (cast(QStyleOption)opt).qtdNativeId);
            QPixmap __d_return_value = new QPixmap(ret);
            return __d_return_value;
        }

        override         public int hitTestComplexControl(QStyle.ComplexControl cc, QStyleOptionComplex opt, const(QPoint) pt, QWidget widget = null) const {
            return qtd_QStyle_hitTestComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPoint_QWidget_const(qtdNativeId, cc, opt is null ? null : (cast(QStyleOptionComplex)opt).qtdNativeId, pt, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
        }

        override         public int pixelMetric(QStyle.PixelMetric metric, QStyleOption option = null, QWidget widget = null) const {
            return qtd_QStyle_pixelMetric_PixelMetric_nativepointerQStyleOption_QWidget_const(qtdNativeId, metric, option is null ? null : (cast(QStyleOption)option).qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
        }

        override         public QSize sizeFromContents(QStyle.ContentsType ct, QStyleOption opt, const(QSize) contentsSize, QWidget w = null) const {
            QSize res;
            qtd_QStyle_sizeFromContents_ContentsType_nativepointerQStyleOption_QSize_QWidget_const(qtdNativeId, &res, ct, opt is null ? null : (cast(QStyleOption)opt).qtdNativeId, contentsSize, w is null ? null : (cast(QWidget)w).qtdNativeId);
            return res;
        }

        override         public int styleHint(QStyle.StyleHint stylehint, QStyleOption opt = null, QWidget widget = null, QStyleHintReturn returnData = null) const {
            return qtd_QStyle_styleHint_StyleHint_nativepointerQStyleOption_QWidget_QStyleHintReturn_const(qtdNativeId, stylehint, opt is null ? null : (cast(QStyleOption)opt).qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId, returnData is null ? null : returnData.qtdNativeId);
        }

        override         public QRect subControlRect(QStyle.ComplexControl cc, QStyleOptionComplex opt, int sc, QWidget widget = null) const {
            QRect res;
            qtd_QStyle_subControlRect_ComplexControl_nativepointerQStyleOptionComplex_int_QWidget_const(qtdNativeId, &res, cc, opt is null ? null : (cast(QStyleOptionComplex)opt).qtdNativeId, sc, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
            return res;
        }

        override         public QRect subElementRect(QStyle.SubElement subElement, QStyleOption option, QWidget widget = null) const {
            QRect res;
            qtd_QStyle_subElementRect_SubElement_nativepointerQStyleOption_QWidget_const(qtdNativeId, &res, subElement, option is null ? null : (cast(QStyleOption)option).qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
            return res;
        }
    }


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyle_QStyle(void *d_ptr);
private extern(C) int  qtd_QStyle_combinedLayoutSpacing_ControlTypes_ControlTypes_Orientation_nativepointerQStyleOption_QWidget_const(void* __this_nativeId,
 int controls10,
 int controls21,
 int orientation2,
 void* option3,
 void* widget4);
private extern(C) int  qtd_QStyle_layoutSpacing_ControlType_ControlType_Orientation_nativepointerQStyleOption_QWidget_const(void* __this_nativeId,
 int control10,
 int control21,
 int orientation2,
 void* option3,
 void* widget4);
private extern(C) int  qtd_QStyle_layoutSpacingImplementation_ControlType_ControlType_Orientation_nativepointerQStyleOption_QWidget_const(void* __this_nativeId,
 int control10,
 int control21,
 int orientation2,
 void* option3,
 void* widget4);
private extern(C) void*  qtd_QStyle_proxy_const(void* __this_nativeId);
private extern(C) void*  qtd_QStyle_standardIcon_StandardPixmap_nativepointerQStyleOption_QWidget_const(void* __this_nativeId,
 int standardIcon0,
 void* option1,
 void* widget2);
private extern(C) void*  qtd_QStyle_standardIconImplementation_StandardPixmap_nativepointerQStyleOption_QWidget_const(void* __this_nativeId,
 int standardIcon0,
 void* opt1,
 void* widget2);
private extern(C) void  qtd_QStyle_drawComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPainter_QWidget_const(void* __this_nativeId,
 int cc0,
 void* opt1,
 void* p2,
 void* widget3);
private extern(C) void  qtd_QStyle_drawControl_ControlElement_nativepointerQStyleOption_QPainter_QWidget_const(void* __this_nativeId,
 int element0,
 void* opt1,
 void* p2,
 void* w3);
private extern(C) void  qtd_QStyle_drawItemPixmap_QPainter_QRect_int_QPixmap_const(void* __this_nativeId,
 void* painter0,
 QRect rect1,
 int alignment2,
 void* pixmap3);
private extern(C) void  qtd_QStyle_drawItemText_QPainter_QRect_int_QPalette_bool_string_ColorRole_const(void* __this_nativeId,
 void* painter0,
 QRect rect1,
 int flags2,
 void* pal3,
 bool enabled4,
 string text5,
 int textRole6);
private extern(C) void  qtd_QStyle_drawPrimitive_PrimitiveElement_nativepointerQStyleOption_QPainter_QWidget_const(void* __this_nativeId,
 int pe0,
 void* opt1,
 void* p2,
 void* w3);
private extern(C) void*  qtd_QStyle_generatedIconPixmap_Mode_QPixmap_nativepointerQStyleOption_const(void* __this_nativeId,
 int iconMode0,
 void* pixmap1,
 void* opt2);
private extern(C) int  qtd_QStyle_hitTestComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPoint_QWidget_const(void* __this_nativeId,
 int cc0,
 void* opt1,
 QPoint pt2,
 void* widget3);
private extern(C) void  qtd_QStyle_itemPixmapRect_QRect_int_QPixmap_const(void* __this_nativeId,
 QRect * __d_return_value,
 QRect r0,
 int flags1,
 void* pixmap2);
private extern(C) void  qtd_QStyle_itemTextRect_QFontMetrics_QRect_int_bool_string_const(void* __this_nativeId,
 QRect * __d_return_value,
 void* fm0,
 QRect r1,
 int flags2,
 bool enabled3,
 string text4);
private extern(C) int  qtd_QStyle_pixelMetric_PixelMetric_nativepointerQStyleOption_QWidget_const(void* __this_nativeId,
 int metric0,
 void* option1,
 void* widget2);
private extern(C) void  qtd_QStyle_polish_QApplication(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QStyle_polish_nativepointerQPalette(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QStyle_polish_QWidget(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QStyle_sizeFromContents_ContentsType_nativepointerQStyleOption_QSize_QWidget_const(void* __this_nativeId,
 QSize * __d_return_value,
 int ct0,
 void* opt1,
 QSize contentsSize2,
 void* w3);
private extern(C) void*  qtd_QStyle_standardPalette_const(void* __this_nativeId);
private extern(C) int  qtd_QStyle_styleHint_StyleHint_nativepointerQStyleOption_QWidget_QStyleHintReturn_const(void* __this_nativeId,
 int stylehint0,
 void* opt1,
 void* widget2,
 void* returnData3);
private extern(C) void  qtd_QStyle_subControlRect_ComplexControl_nativepointerQStyleOptionComplex_int_QWidget_const(void* __this_nativeId,
 QRect * __d_return_value,
 int cc0,
 void* opt1,
 int sc2,
 void* widget3);
private extern(C) void  qtd_QStyle_subElementRect_SubElement_nativepointerQStyleOption_QWidget_const(void* __this_nativeId,
 QRect * __d_return_value,
 int subElement0,
 void* option1,
 void* widget2);
private extern(C) void  qtd_QStyle_unpolish_QApplication(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QStyle_unpolish_QWidget(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QStyle_alignedRect_LayoutDirection_Alignment_QSize_QRect(QRect * __d_return_value,
 int direction0,
 int alignment1,
 QSize size2,
 QRect rectangle3);
private extern(C) int  qtd_QStyle_sliderPositionFromValue_int_int_int_int_bool(int min0,
 int max1,
 int val2,
 int space3,
 bool upsideDown4);
private extern(C) int  qtd_QStyle_sliderValueFromPosition_int_int_int_int_bool(int min0,
 int max1,
 int pos2,
 int space3,
 bool upsideDown4);
private extern(C) int  qtd_QStyle_visualAlignment_LayoutDirection_Alignment(int direction0,
 int alignment1);
private extern(C) void  qtd_QStyle_visualPos_LayoutDirection_QRect_QPoint(QPoint * __d_return_value,
 int direction0,
 QRect boundingRect1,
 QPoint logicalPos2);
private extern(C) void  qtd_QStyle_visualRect_LayoutDirection_QRect_QRect(QRect * __d_return_value,
 int direction0,
 QRect boundingRect1,
 QRect logicalRect2);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, int cc0, void* opt1, void* p2, void* widget3) qtd_QStyle_drawComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPainter_QWidget_const_dispatch; }
extern(C) void qtd_export_QStyle_drawComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPainter_QWidget_const_dispatch(void *dId, int cc0, void* opt1, void* p2, void* widget3){
    auto d_object = cast(QStyle) dId;
    auto cc0_enum = cast(QStyle.ComplexControl) cc0;
    scope opt1_d_ref = new QStyleOptionComplex(opt1, QtdObjectInitFlags.onStack);
    scope p2_d_ref = new QPainter(p2, QtdObjectInitFlags.onStack);
    scope widget3_d_ref = new QWidget(widget3, QtdObjectInitFlags.onStack);

    d_object.drawComplexControl(cc0_enum, opt1_d_ref, p2_d_ref, widget3_d_ref);
}

extern(C){ extern void function(void *dId, int element0, void* opt1, void* p2, void* w3) qtd_QStyle_drawControl_ControlElement_nativepointerQStyleOption_QPainter_QWidget_const_dispatch; }
extern(C) void qtd_export_QStyle_drawControl_ControlElement_nativepointerQStyleOption_QPainter_QWidget_const_dispatch(void *dId, int element0, void* opt1, void* p2, void* w3){
    auto d_object = cast(QStyle) dId;
    auto element0_enum = cast(QStyle.ControlElement) element0;
    scope opt1_d_ref = new QStyleOption(opt1, QtdObjectInitFlags.onStack);
    scope p2_d_ref = new QPainter(p2, QtdObjectInitFlags.onStack);
    scope w3_d_ref = new QWidget(w3, QtdObjectInitFlags.onStack);

    d_object.drawControl(element0_enum, opt1_d_ref, p2_d_ref, w3_d_ref);
}

extern(C){ extern void function(void *dId, void* painter0, QRect* rect1, int alignment2, void* pixmap3) qtd_QStyle_drawItemPixmap_QPainter_QRect_int_QPixmap_const_dispatch; }
extern(C) void qtd_export_QStyle_drawItemPixmap_QPainter_QRect_int_QPixmap_const_dispatch(void *dId, void* painter0, QRect* rect1, int alignment2, void* pixmap3){
    auto d_object = cast(QStyle) dId;
    scope painter0_d_ref = new QPainter(painter0, QtdObjectInitFlags.onStack);
    scope pixmap3_d_ref = new QPixmap(pixmap3, QtdObjectInitFlags.onStack);
    d_object.drawItemPixmap(painter0_d_ref, *rect1, alignment2, pixmap3_d_ref);
}

extern(C){ extern void function(void *dId, void* painter0, QRect* rect1, int flags2, void* pal3, bool enabled4, wchar* text5, int text5_size, int textRole6) qtd_QStyle_drawItemText_QPainter_QRect_int_QPalette_bool_string_ColorRole_const_dispatch; }
extern(C) void qtd_export_QStyle_drawItemText_QPainter_QRect_int_QPalette_bool_string_ColorRole_const_dispatch(void *dId, void* painter0, QRect* rect1, int flags2, void* pal3, bool enabled4, wchar* text5, int text5_size, int textRole6){
    auto d_object = cast(QStyle) dId;
    scope painter0_d_ref = new QPainter(painter0, QtdObjectInitFlags.onStack);
    scope pal3_d_ref = new QPalette(pal3, QtdObjectInitFlags.onStack);
    string text5_d_ref = toUTF8(text5[0..text5_size]);
    auto textRole6_enum = cast(QPalette.ColorRole) textRole6;
    d_object.drawItemText(painter0_d_ref, *rect1, flags2, pal3_d_ref, enabled4, text5_d_ref, textRole6_enum);
}

extern(C){ extern void function(void *dId, int pe0, void* opt1, void* p2, void* w3) qtd_QStyle_drawPrimitive_PrimitiveElement_nativepointerQStyleOption_QPainter_QWidget_const_dispatch; }
extern(C) void qtd_export_QStyle_drawPrimitive_PrimitiveElement_nativepointerQStyleOption_QPainter_QWidget_const_dispatch(void *dId, int pe0, void* opt1, void* p2, void* w3){
    auto d_object = cast(QStyle) dId;
    auto pe0_enum = cast(QStyle.PrimitiveElement) pe0;
    scope opt1_d_ref = new QStyleOption(opt1, QtdObjectInitFlags.onStack);
    scope p2_d_ref = new QPainter(p2, QtdObjectInitFlags.onStack);
    scope w3_d_ref = new QWidget(w3, QtdObjectInitFlags.onStack);

    d_object.drawPrimitive(pe0_enum, opt1_d_ref, p2_d_ref, w3_d_ref);
}

extern(C){ extern void* function(void *dId, int iconMode0, void* pixmap1, void* opt2) qtd_QStyle_generatedIconPixmap_Mode_QPixmap_nativepointerQStyleOption_const_dispatch; }
extern(C) void* qtd_export_QStyle_generatedIconPixmap_Mode_QPixmap_nativepointerQStyleOption_const_dispatch(void *dId, int iconMode0, void* pixmap1, void* opt2){
    auto d_object = cast(QStyle) dId;
    auto iconMode0_enum = cast(QIcon.Mode) iconMode0;
    scope pixmap1_d_ref = new QPixmap(pixmap1, QtdObjectInitFlags.onStack);
    scope opt2_d_ref = new QStyleOption(opt2, QtdObjectInitFlags.onStack);
    QPixmap ret_value = d_object.generatedIconPixmap(iconMode0_enum, pixmap1_d_ref, opt2_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern int function(void *dId, int cc0, void* opt1, QPoint* pt2, void* widget3) qtd_QStyle_hitTestComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPoint_QWidget_const_dispatch; }
extern(C) int qtd_export_QStyle_hitTestComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPoint_QWidget_const_dispatch(void *dId, int cc0, void* opt1, QPoint* pt2, void* widget3){
    auto d_object = cast(QStyle) dId;
    auto cc0_enum = cast(QStyle.ComplexControl) cc0;
    scope opt1_d_ref = new QStyleOptionComplex(opt1, QtdObjectInitFlags.onStack);
    scope widget3_d_ref = new QWidget(widget3, QtdObjectInitFlags.onStack);

    auto return_value = d_object.hitTestComplexControl(cc0_enum, opt1_d_ref, *pt2, widget3_d_ref);
    return return_value;
}

extern(C){ extern void function(void *dId, QRect *__d_return_value, QRect* r0, int flags1, void* pixmap2) qtd_QStyle_itemPixmapRect_QRect_int_QPixmap_const_dispatch; }
extern(C) void qtd_export_QStyle_itemPixmapRect_QRect_int_QPixmap_const_dispatch(void *dId, QRect *__d_return_value, QRect* r0, int flags1, void* pixmap2){
    auto d_object = cast(QStyle) dId;
    scope pixmap2_d_ref = new QPixmap(pixmap2, QtdObjectInitFlags.onStack);
    *__d_return_value = d_object.itemPixmapRect(*r0, flags1, pixmap2_d_ref);
}

extern(C){ extern void function(void *dId, QRect *__d_return_value, void* fm0, QRect* r1, int flags2, bool enabled3, wchar* text4, int text4_size) qtd_QStyle_itemTextRect_QFontMetrics_QRect_int_bool_string_const_dispatch; }
extern(C) void qtd_export_QStyle_itemTextRect_QFontMetrics_QRect_int_bool_string_const_dispatch(void *dId, QRect *__d_return_value, void* fm0, QRect* r1, int flags2, bool enabled3, wchar* text4, int text4_size){
    auto d_object = cast(QStyle) dId;
    scope fm0_d_ref = new QFontMetrics(fm0, QtdObjectInitFlags.onStack);
    string text4_d_ref = toUTF8(text4[0..text4_size]);
    *__d_return_value = d_object.itemTextRect(fm0_d_ref, *r1, flags2, enabled3, text4_d_ref);
}

extern(C){ extern int function(void *dId, int metric0, void* option1, void* widget2) qtd_QStyle_pixelMetric_PixelMetric_nativepointerQStyleOption_QWidget_const_dispatch; }
extern(C) int qtd_export_QStyle_pixelMetric_PixelMetric_nativepointerQStyleOption_QWidget_const_dispatch(void *dId, int metric0, void* option1, void* widget2){
    auto d_object = cast(QStyle) dId;
    auto metric0_enum = cast(QStyle.PixelMetric) metric0;
    scope option1_d_ref = new QStyleOption(option1, QtdObjectInitFlags.onStack);
    scope widget2_d_ref = new QWidget(widget2, QtdObjectInitFlags.onStack);

    auto return_value = d_object.pixelMetric(metric0_enum, option1_d_ref, widget2_d_ref);
    return return_value;
}

extern(C){ extern void function(void *dId, void* arg__1) qtd_QStyle_polish_QApplication_dispatch; }
extern(C) void qtd_export_QStyle_polish_QApplication_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QStyle) dId;
    scope arg__1_d_ref = new QApplication(arg__1, QtdObjectInitFlags.onStack);

    d_object.polish(arg__1_d_ref);
}

extern(C){ extern void function(void *dId, void* arg__1) qtd_QStyle_polish_nativepointerQPalette_dispatch; }
extern(C) void qtd_export_QStyle_polish_nativepointerQPalette_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QStyle) dId;
    scope arg__1_d_ref = new QPalette(arg__1, QtdObjectInitFlags.onStack);
    d_object.polish(arg__1_d_ref);
}

extern(C){ extern void function(void *dId, void* arg__1) qtd_QStyle_polish_QWidget_dispatch; }
extern(C) void qtd_export_QStyle_polish_QWidget_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QStyle) dId;
    scope arg__1_d_ref = new QWidget(arg__1, QtdObjectInitFlags.onStack);

    d_object.polish(arg__1_d_ref);
}

extern(C){ extern void function(void *dId, QSize *__d_return_value, int ct0, void* opt1, QSize* contentsSize2, void* w3) qtd_QStyle_sizeFromContents_ContentsType_nativepointerQStyleOption_QSize_QWidget_const_dispatch; }
extern(C) void qtd_export_QStyle_sizeFromContents_ContentsType_nativepointerQStyleOption_QSize_QWidget_const_dispatch(void *dId, QSize *__d_return_value, int ct0, void* opt1, QSize* contentsSize2, void* w3){
    auto d_object = cast(QStyle) dId;
    auto ct0_enum = cast(QStyle.ContentsType) ct0;
    scope opt1_d_ref = new QStyleOption(opt1, QtdObjectInitFlags.onStack);
    scope w3_d_ref = new QWidget(w3, QtdObjectInitFlags.onStack);

    *__d_return_value = d_object.sizeFromContents(ct0_enum, opt1_d_ref, *contentsSize2, w3_d_ref);
}

extern(C){ extern void* function(void *dId) qtd_QStyle_standardPalette_const_dispatch; }
extern(C) void* qtd_export_QStyle_standardPalette_const_dispatch(void *dId){
    auto d_object = cast(QStyle) dId;
    QPalette ret_value = d_object.standardPalette();
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern int function(void *dId, int stylehint0, void* opt1, void* widget2, void* returnData3) qtd_QStyle_styleHint_StyleHint_nativepointerQStyleOption_QWidget_QStyleHintReturn_const_dispatch; }
extern(C) int qtd_export_QStyle_styleHint_StyleHint_nativepointerQStyleOption_QWidget_QStyleHintReturn_const_dispatch(void *dId, int stylehint0, void* opt1, void* widget2, void* returnData3){
    auto d_object = cast(QStyle) dId;
    auto stylehint0_enum = cast(QStyle.StyleHint) stylehint0;
    scope opt1_d_ref = new QStyleOption(opt1, QtdObjectInitFlags.onStack);
    scope widget2_d_ref = new QWidget(widget2, QtdObjectInitFlags.onStack);

    scope returnData3_d_ref = new QStyleHintReturn(returnData3, QtdObjectInitFlags.onStack);
    auto return_value = d_object.styleHint(stylehint0_enum, opt1_d_ref, widget2_d_ref, returnData3_d_ref);
    return return_value;
}

extern(C){ extern void function(void *dId, QRect *__d_return_value, int cc0, void* opt1, int sc2, void* widget3) qtd_QStyle_subControlRect_ComplexControl_nativepointerQStyleOptionComplex_int_QWidget_const_dispatch; }
extern(C) void qtd_export_QStyle_subControlRect_ComplexControl_nativepointerQStyleOptionComplex_int_QWidget_const_dispatch(void *dId, QRect *__d_return_value, int cc0, void* opt1, int sc2, void* widget3){
    auto d_object = cast(QStyle) dId;
    auto cc0_enum = cast(QStyle.ComplexControl) cc0;
    scope opt1_d_ref = new QStyleOptionComplex(opt1, QtdObjectInitFlags.onStack);
    auto sc2_enum = cast(QStyle.SubControl) sc2;
    scope widget3_d_ref = new QWidget(widget3, QtdObjectInitFlags.onStack);

    *__d_return_value = d_object.subControlRect(cc0_enum, opt1_d_ref, sc2_enum, widget3_d_ref);
}

extern(C){ extern void function(void *dId, QRect *__d_return_value, int subElement0, void* option1, void* widget2) qtd_QStyle_subElementRect_SubElement_nativepointerQStyleOption_QWidget_const_dispatch; }
extern(C) void qtd_export_QStyle_subElementRect_SubElement_nativepointerQStyleOption_QWidget_const_dispatch(void *dId, QRect *__d_return_value, int subElement0, void* option1, void* widget2){
    auto d_object = cast(QStyle) dId;
    auto subElement0_enum = cast(QStyle.SubElement) subElement0;
    scope option1_d_ref = new QStyleOption(option1, QtdObjectInitFlags.onStack);
    scope widget2_d_ref = new QWidget(widget2, QtdObjectInitFlags.onStack);

    *__d_return_value = d_object.subElementRect(subElement0_enum, option1_d_ref, widget2_d_ref);
}

extern(C){ extern void function(void *dId, void* arg__1) qtd_QStyle_unpolish_QApplication_dispatch; }
extern(C) void qtd_export_QStyle_unpolish_QApplication_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QStyle) dId;
    scope arg__1_d_ref = new QApplication(arg__1, QtdObjectInitFlags.onStack);

    d_object.unpolish(arg__1_d_ref);
}

extern(C){ extern void function(void *dId, void* arg__1) qtd_QStyle_unpolish_QWidget_dispatch; }
extern(C) void qtd_export_QStyle_unpolish_QWidget_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QStyle) dId;
    scope arg__1_d_ref = new QWidget(arg__1, QtdObjectInitFlags.onStack);

    d_object.unpolish(arg__1_d_ref);
}

extern(C){ extern int function(void *dId, int control10, int control21, int orientation2, void* option3, void* widget4) qtd_QStyle_layoutSpacingImplementation_ControlType_ControlType_Orientation_nativepointerQStyleOption_QWidget_const_dispatch; }
extern(C) int qtd_export_QStyle_layoutSpacingImplementation_ControlType_ControlType_Orientation_nativepointerQStyleOption_QWidget_const_dispatch(void *dId, int control10, int control21, int orientation2, void* option3, void* widget4){
    auto d_object = cast(QStyle) dId;
    auto control10_enum = cast(QSizePolicy.ControlType) control10;
    auto control21_enum = cast(QSizePolicy.ControlType) control21;
    auto orientation2_enum = cast(Qt.Orientation) orientation2;
    scope option3_d_ref = new QStyleOption(option3, QtdObjectInitFlags.onStack);
    scope widget4_d_ref = new QWidget(widget4, QtdObjectInitFlags.onStack);

    auto return_value = d_object.layoutSpacingImplementation(control10_enum, control21_enum, orientation2_enum, option3_d_ref, widget4_d_ref);
    return return_value;
}

extern(C){ extern void* function(void *dId, int standardIcon0, void* opt1, void* widget2) qtd_QStyle_standardIconImplementation_StandardPixmap_nativepointerQStyleOption_QWidget_const_dispatch; }
extern(C) void* qtd_export_QStyle_standardIconImplementation_StandardPixmap_nativepointerQStyleOption_QWidget_const_dispatch(void *dId, int standardIcon0, void* opt1, void* widget2){
    auto d_object = cast(QStyle) dId;
    auto standardIcon0_enum = cast(QStyle.StandardPixmap) standardIcon0;
    scope opt1_d_ref = new QStyleOption(opt1, QtdObjectInitFlags.onStack);
    scope widget2_d_ref = new QWidget(widget2, QtdObjectInitFlags.onStack);

    QIcon ret_value = d_object.standardIconImplementation(standardIcon0_enum, opt1_d_ref, widget2_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

private extern (C) void qtd_QStyle_initCallBacks(void* virtuals);

extern(C) void static_init_QStyle() {
    void*[22] virt_arr;
    virt_arr[0] = &qtd_export_QStyle_drawComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPainter_QWidget_const_dispatch;
    virt_arr[1] = &qtd_export_QStyle_drawControl_ControlElement_nativepointerQStyleOption_QPainter_QWidget_const_dispatch;
    virt_arr[2] = &qtd_export_QStyle_drawItemPixmap_QPainter_QRect_int_QPixmap_const_dispatch;
    virt_arr[3] = &qtd_export_QStyle_drawItemText_QPainter_QRect_int_QPalette_bool_string_ColorRole_const_dispatch;
    virt_arr[4] = &qtd_export_QStyle_drawPrimitive_PrimitiveElement_nativepointerQStyleOption_QPainter_QWidget_const_dispatch;
    virt_arr[5] = &qtd_export_QStyle_generatedIconPixmap_Mode_QPixmap_nativepointerQStyleOption_const_dispatch;
    virt_arr[6] = &qtd_export_QStyle_hitTestComplexControl_ComplexControl_nativepointerQStyleOptionComplex_QPoint_QWidget_const_dispatch;
    virt_arr[7] = &qtd_export_QStyle_itemPixmapRect_QRect_int_QPixmap_const_dispatch;
    virt_arr[8] = &qtd_export_QStyle_itemTextRect_QFontMetrics_QRect_int_bool_string_const_dispatch;
    virt_arr[9] = &qtd_export_QStyle_pixelMetric_PixelMetric_nativepointerQStyleOption_QWidget_const_dispatch;
    virt_arr[10] = &qtd_export_QStyle_polish_QApplication_dispatch;
    virt_arr[11] = &qtd_export_QStyle_polish_nativepointerQPalette_dispatch;
    virt_arr[12] = &qtd_export_QStyle_polish_QWidget_dispatch;
    virt_arr[13] = &qtd_export_QStyle_sizeFromContents_ContentsType_nativepointerQStyleOption_QSize_QWidget_const_dispatch;
    virt_arr[14] = &qtd_export_QStyle_standardPalette_const_dispatch;
    virt_arr[15] = &qtd_export_QStyle_styleHint_StyleHint_nativepointerQStyleOption_QWidget_QStyleHintReturn_const_dispatch;
    virt_arr[16] = &qtd_export_QStyle_subControlRect_ComplexControl_nativepointerQStyleOptionComplex_int_QWidget_const_dispatch;
    virt_arr[17] = &qtd_export_QStyle_subElementRect_SubElement_nativepointerQStyleOption_QWidget_const_dispatch;
    virt_arr[18] = &qtd_export_QStyle_unpolish_QApplication_dispatch;
    virt_arr[19] = &qtd_export_QStyle_unpolish_QWidget_dispatch;
    virt_arr[20] = &qtd_export_QStyle_layoutSpacingImplementation_ControlType_ControlType_Orientation_nativepointerQStyleOption_QWidget_const_dispatch;
    virt_arr[21] = &qtd_export_QStyle_standardIconImplementation_StandardPixmap_nativepointerQStyleOption_QWidget_const_dispatch;
    qtd_QStyle_initCallBacks(virt_arr.ptr);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QStyle_staticMetaObject();

extern(C) void qtd_QStyle_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QStyle_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
