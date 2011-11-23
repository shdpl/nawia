module qt.gui.QTextOption;

public import qt.gui.QTextOption_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.core.QList;
public import qt.gui.QTextOption_Tab;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTextOption : QtdObject
{
    public enum TabType {
        LeftTab = 0,
        RightTab = 1,
        CenterTab = 2,
        DelimiterTab = 3
    }

    alias TabType.LeftTab LeftTab;
    alias TabType.RightTab RightTab;
    alias TabType.CenterTab CenterTab;
    alias TabType.DelimiterTab DelimiterTab;

    public enum Flag {
        ShowTabsAndSpaces = 1,
        ShowLineAndParagraphSeparators = 2,
        AddSpaceForLineAndParagraphSeparators = 4,
        SuppressColors = 8,
        IncludeTrailingSpaces = -2147483648
    }

    alias Flag.ShowTabsAndSpaces ShowTabsAndSpaces;
    alias Flag.ShowLineAndParagraphSeparators ShowLineAndParagraphSeparators;
    alias Flag.AddSpaceForLineAndParagraphSeparators AddSpaceForLineAndParagraphSeparators;
    alias Flag.SuppressColors SuppressColors;
    alias Flag.IncludeTrailingSpaces IncludeTrailingSpaces;

    public enum WrapMode {
        NoWrap = 0,
        WordWrap = 1,
        ManualWrap = 2,
        WrapAnywhere = 3,
        WrapAtWordBoundaryOrAnywhere = 4
    }

    alias WrapMode.NoWrap NoWrap;
    alias WrapMode.WordWrap WordWrap;
    alias WrapMode.ManualWrap ManualWrap;
    alias WrapMode.WrapAnywhere WrapAnywhere;
    alias WrapMode.WrapAtWordBoundaryOrAnywhere WrapAtWordBoundaryOrAnywhere;


// Functions

    public this() {
        void* ret = qtd_QTextOption_QTextOption();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(int alignment) {
        void* ret = qtd_QTextOption_QTextOption_Alignment(alignment);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QTextOption) o) {
        void* ret = qtd_QTextOption_QTextOption_QTextOption(o is null ? null : (cast(QTextOption)o).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int alignment() const {
        return qtd_QTextOption_alignment_const(qtdNativeId);
    }

    public final int flags() const {
        return qtd_QTextOption_flags_const(qtdNativeId);
    }

    public final void setAlignment(int alignment) {
        qtd_QTextOption_setAlignment_Alignment(qtdNativeId, alignment);
    }

    public final void setFlags(int flags) {
        qtd_QTextOption_setFlags_Flags(qtdNativeId, flags);
    }

    public final void setTabArray(QList!(double) tabStops) {
        qtd_QTextOption_setTabArray_QList(qtdNativeId, &tabStops);
    }

    public final void setTabStop(double tabStop) {
        qtd_QTextOption_setTabStop_double(qtdNativeId, tabStop);
    }

    public final void setTabs(QList!(QTextOption_Tab) tabStops) {
        qtd_QTextOption_setTabs_QList(qtdNativeId, &tabStops);
    }

    public final void setTextDirection(Qt.LayoutDirection aDirection) {
        qtd_QTextOption_setTextDirection_LayoutDirection(qtdNativeId, aDirection);
    }

    public final void setUseDesignMetrics(bool b) {
        qtd_QTextOption_setUseDesignMetrics_bool(qtdNativeId, b);
    }

    public final void setWrapMode(QTextOption.WrapMode wrap) {
        qtd_QTextOption_setWrapMode_WrapMode(qtdNativeId, wrap);
    }

    public final QList!(double) tabArray() const {
        auto res = QList!(double).opCall();
        qtd_QTextOption_tabArray_const(qtdNativeId, &res);
        return res;
    }

    public final double tabStop() const {
        return qtd_QTextOption_tabStop_const(qtdNativeId);
    }

    public final QList!(QTextOption_Tab) tabs() const {
        auto res = QList!(QTextOption_Tab).opCall();
        qtd_QTextOption_tabs_const(qtdNativeId, &res);
        return res;
    }

    public final Qt.LayoutDirection textDirection() const {
        return cast(Qt.LayoutDirection) qtd_QTextOption_textDirection_const(qtdNativeId);
    }

    public final bool useDesignMetrics() const {
        return qtd_QTextOption_useDesignMetrics_const(qtdNativeId);
    }

    public final QTextOption.WrapMode wrapMode() const {
        return cast(QTextOption.WrapMode) qtd_QTextOption_wrapMode_const(qtdNativeId);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QTextOption;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QTextOption_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QTextOption_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTextOption_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTextOption_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTextOption_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QTextOption_QTypeInfo_isComplex();
        isStatic = qtd_QTextOption_QTypeInfo_isStatic();
        isLarge = qtd_QTextOption_QTypeInfo_isLarge();
        isPointer = qtd_QTextOption_QTypeInfo_isPointer();
        isDummy = qtd_QTextOption_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QTextOption_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QTextOption_native_copy(const void* orig);
extern (C) void qtd_QTextOption_delete(void *ptr);
extern (C) void qtd_QTextOption_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextOption_QTextOption();
private extern(C) void* qtd_QTextOption_QTextOption_Alignment(int alignment0);
private extern(C) void* qtd_QTextOption_QTextOption_QTextOption(void* o0);
private extern(C) int  qtd_QTextOption_alignment_const(void* __this_nativeId);
private extern(C) int  qtd_QTextOption_flags_const(void* __this_nativeId);
private extern(C) void  qtd_QTextOption_setAlignment_Alignment(void* __this_nativeId,
 int alignment0);
private extern(C) void  qtd_QTextOption_setFlags_Flags(void* __this_nativeId,
 int flags0);
private extern(C) void  qtd_QTextOption_setTabArray_QList(void* __this_nativeId,
 void* tabStops0);
private extern(C) void  qtd_QTextOption_setTabStop_double(void* __this_nativeId,
 double tabStop0);
private extern(C) void  qtd_QTextOption_setTabs_QList(void* __this_nativeId,
 void* tabStops0);
private extern(C) void  qtd_QTextOption_setTextDirection_LayoutDirection(void* __this_nativeId,
 int aDirection0);
private extern(C) void  qtd_QTextOption_setUseDesignMetrics_bool(void* __this_nativeId,
 bool b0);
private extern(C) void  qtd_QTextOption_setWrapMode_WrapMode(void* __this_nativeId,
 int wrap0);
private extern(C) void  qtd_QTextOption_tabArray_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) double  qtd_QTextOption_tabStop_const(void* __this_nativeId);
private extern(C) void  qtd_QTextOption_tabs_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QTextOption_textDirection_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextOption_useDesignMetrics_const(void* __this_nativeId);
private extern(C) int  qtd_QTextOption_wrapMode_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QTextOption() {
    QTextOption.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QTextOption_QTypeInfo_isComplex();
private extern (C) bool qtd_QTextOption_QTypeInfo_isStatic();
private extern (C) bool qtd_QTextOption_QTypeInfo_isLarge();
private extern (C) bool qtd_QTextOption_QTypeInfo_isPointer();
private extern (C) bool qtd_QTextOption_QTypeInfo_isDummy();
