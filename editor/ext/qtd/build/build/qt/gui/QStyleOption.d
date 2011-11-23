module qt.gui.QStyleOption;

public import qt.gui.QStyleOption_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.gui.QPalette;
public import qt.core.QRect;
public import qt.gui.QWidget;
public import qt.gui.QFontMetrics;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleOption : QtdObject
{
    public enum StyleOptionVersion {
        Version = 1
    }

    alias StyleOptionVersion.Version Version;

    public enum StyleOptionType {
        Type = 0
    }

    alias StyleOptionType.Type Type;

    public enum OptionType {
        SO_Default = 0,
        SO_FocusRect = 1,
        SO_Button = 2,
        SO_Tab = 3,
        SO_MenuItem = 4,
        SO_Frame = 5,
        SO_ProgressBar = 6,
        SO_ToolBox = 7,
        SO_Header = 8,
        SO_Q3DockWindow = 9,
        SO_DockWidget = 10,
        SO_Q3ListViewItem = 11,
        SO_ViewItem = 12,
        SO_TabWidgetFrame = 13,
        SO_TabBarBase = 14,
        SO_RubberBand = 15,
        SO_ToolBar = 16,
        SO_GraphicsItem = 17,
        SO_Complex = 983040,
        SO_Slider = 983041,
        SO_SpinBox = 983042,
        SO_ToolButton = 983043,
        SO_ComboBox = 983044,
        SO_Q3ListView = 983045,
        SO_TitleBar = 983046,
        SO_GroupBox = 983047,
        SO_SizeGrip = 983048,
        SO_CustomBase = 3840,
        SO_ComplexCustomBase = 251658240
    }

    alias OptionType.SO_Default SO_Default;
    alias OptionType.SO_FocusRect SO_FocusRect;
    alias OptionType.SO_Button SO_Button;
    alias OptionType.SO_Tab SO_Tab;
    alias OptionType.SO_MenuItem SO_MenuItem;
    alias OptionType.SO_Frame SO_Frame;
    alias OptionType.SO_ProgressBar SO_ProgressBar;
    alias OptionType.SO_ToolBox SO_ToolBox;
    alias OptionType.SO_Header SO_Header;
    alias OptionType.SO_Q3DockWindow SO_Q3DockWindow;
    alias OptionType.SO_DockWidget SO_DockWidget;
    alias OptionType.SO_Q3ListViewItem SO_Q3ListViewItem;
    alias OptionType.SO_ViewItem SO_ViewItem;
    alias OptionType.SO_TabWidgetFrame SO_TabWidgetFrame;
    alias OptionType.SO_TabBarBase SO_TabBarBase;
    alias OptionType.SO_RubberBand SO_RubberBand;
    alias OptionType.SO_ToolBar SO_ToolBar;
    alias OptionType.SO_GraphicsItem SO_GraphicsItem;
    alias OptionType.SO_Complex SO_Complex;
    alias OptionType.SO_Slider SO_Slider;
    alias OptionType.SO_SpinBox SO_SpinBox;
    alias OptionType.SO_ToolButton SO_ToolButton;
    alias OptionType.SO_ComboBox SO_ComboBox;
    alias OptionType.SO_Q3ListView SO_Q3ListView;
    alias OptionType.SO_TitleBar SO_TitleBar;
    alias OptionType.SO_GroupBox SO_GroupBox;
    alias OptionType.SO_SizeGrip SO_SizeGrip;
    alias OptionType.SO_CustomBase SO_CustomBase;
    alias OptionType.SO_ComplexCustomBase SO_ComplexCustomBase;


// Functions

    public this(const(QStyleOption) other) {
        void* ret = qtd_QStyleOption_QStyleOption_QStyleOption(other is null ? null : (cast(QStyleOption)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(int version_ = 1, int type = 0) {
        void* ret = qtd_QStyleOption_QStyleOption_int_int(version_, type);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void initFrom(QWidget w) {
        qtd_QStyleOption_initFrom_QWidget(qtdNativeId, w is null ? null : (cast(QWidget)w).qtdNativeId);
    }
// Field accessors

    public final void setPalette(QPalette palette) {
        qtd_QStyleOption_setPalette_QPalette(qtdNativeId, palette is null ? null : palette.qtdNativeId);
    }

    public final QPalette palette() {
        void* ret = qtd_QStyleOption_palette(qtdNativeId);
        QPalette __d_return_value = new QPalette(ret);
        return __d_return_value;
    }

    public final void version_(int version_) {
        qtd_QStyleOption_version__int(qtdNativeId, version_);
    }

    public final int version_() {
        return qtd_QStyleOption_version_(qtdNativeId);
    }

    public final void setDirection(Qt.LayoutDirection direction) {
        qtd_QStyleOption_setDirection_LayoutDirection(qtdNativeId, direction);
    }

    public final Qt.LayoutDirection direction() {
        return cast(Qt.LayoutDirection) qtd_QStyleOption_direction(qtdNativeId);
    }

    public final void setRect(QRect rect) {
        qtd_QStyleOption_setRect_QRect(qtdNativeId, rect);
    }

    public final QRect rect() {
        QRect res;
        qtd_QStyleOption_rect(qtdNativeId, &res);
        return res;
    }

    public final void setType(int type) {
        qtd_QStyleOption_setType_int(qtdNativeId, type);
    }

    public final int type() {
        return qtd_QStyleOption_type(qtdNativeId);
    }

    public final void setState(int state) {
        qtd_QStyleOption_setState_State(qtdNativeId, state);
    }

    public final int state() {
        return qtd_QStyleOption_state(qtdNativeId);
    }

    public final void setFontMetrics(QFontMetrics fontMetrics) {
        qtd_QStyleOption_setFontMetrics_QFontMetrics(qtdNativeId, fontMetrics is null ? null : fontMetrics.qtdNativeId);
    }

    public final QFontMetrics fontMetrics() {
        void* ret = qtd_QStyleOption_fontMetrics(qtdNativeId);
        QFontMetrics __d_return_value = new QFontMetrics(ret);
        return __d_return_value;
    }
    public alias void __isValueType;

    public alias void __isQtType_QStyleOption;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QStyleOption_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QStyleOption_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleOption_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleOption_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleOption_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QStyleOption_QTypeInfo_isComplex();
        isStatic = qtd_QStyleOption_QTypeInfo_isStatic();
        isLarge = qtd_QStyleOption_QTypeInfo_isLarge();
        isPointer = qtd_QStyleOption_QTypeInfo_isPointer();
        isDummy = qtd_QStyleOption_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QStyleOption_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QStyleOption_native_copy(const void* orig);
extern (C) void qtd_QStyleOption_delete(void *ptr);
extern (C) void qtd_QStyleOption_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleOption_QStyleOption_QStyleOption(void* other0);
private extern(C) void* qtd_QStyleOption_QStyleOption_int_int(int version0,
 int type1);
private extern(C) void  qtd_QStyleOption_initFrom_QWidget(void* __this_nativeId,
 void* w0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleOption_setPalette_QPalette(void* __this_nativeId,
 void* palette0);
private extern(C) void*  qtd_QStyleOption_palette(void* __this_nativeId);
private extern(C) void  qtd_QStyleOption_version__int(void* __this_nativeId,
 int version0);
private extern(C) int  qtd_QStyleOption_version_(void* __this_nativeId);
private extern(C) void  qtd_QStyleOption_setDirection_LayoutDirection(void* __this_nativeId,
 int direction0);
private extern(C) int  qtd_QStyleOption_direction(void* __this_nativeId);
private extern(C) void  qtd_QStyleOption_setRect_QRect(void* __this_nativeId,
 QRect rect0);
private extern(C) void  qtd_QStyleOption_rect(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) void  qtd_QStyleOption_setType_int(void* __this_nativeId,
 int type0);
private extern(C) int  qtd_QStyleOption_type(void* __this_nativeId);
private extern(C) void  qtd_QStyleOption_setState_State(void* __this_nativeId,
 int state0);
private extern(C) int  qtd_QStyleOption_state(void* __this_nativeId);
private extern(C) void  qtd_QStyleOption_setFontMetrics_QFontMetrics(void* __this_nativeId,
 void* fontMetrics0);
private extern(C) void*  qtd_QStyleOption_fontMetrics(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleOption_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleOption() {
    QStyleOption.QTypeInfo.init();
    qtd_QStyleOption_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QStyleOption_QTypeInfo_isComplex();
private extern (C) bool qtd_QStyleOption_QTypeInfo_isStatic();
private extern (C) bool qtd_QStyleOption_QTypeInfo_isLarge();
private extern (C) bool qtd_QStyleOption_QTypeInfo_isPointer();
private extern (C) bool qtd_QStyleOption_QTypeInfo_isDummy();
