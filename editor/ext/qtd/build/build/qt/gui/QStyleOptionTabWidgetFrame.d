module qt.gui.QStyleOptionTabWidgetFrame;

public import qt.gui.QStyleOptionTabWidgetFrame_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QTabBar;
public import qt.gui.QStyleOption;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleOptionTabWidgetFrame : QStyleOption
{
    public enum StyleOptionVersion {
        Version = 1
    }

    alias StyleOptionVersion.Version Version;

    public enum StyleOptionType {
        Type = 13
    }

    alias StyleOptionType.Type Type;


// Functions

    public this() {
        void* ret = qtd_QStyleOptionTabWidgetFrame_QStyleOptionTabWidgetFrame();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionTabWidgetFrame) other) {
        void* ret = qtd_QStyleOptionTabWidgetFrame_QStyleOptionTabWidgetFrame_QStyleOptionTabWidgetFrame(other is null ? null : (cast(QStyleOptionTabWidgetFrame)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(int version_) {
        void* ret = qtd_QStyleOptionTabWidgetFrame_QStyleOptionTabWidgetFrame_int(version_);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setLineWidth(int lineWidth) {
        qtd_QStyleOptionTabWidgetFrame_setLineWidth_int(qtdNativeId, lineWidth);
    }

    public final int lineWidth() {
        return qtd_QStyleOptionTabWidgetFrame_lineWidth(qtdNativeId);
    }

    public final void setRightCornerWidgetSize(QSize rightCornerWidgetSize) {
        qtd_QStyleOptionTabWidgetFrame_setRightCornerWidgetSize_QSize(qtdNativeId, rightCornerWidgetSize);
    }

    public final QSize rightCornerWidgetSize() {
        QSize res;
        qtd_QStyleOptionTabWidgetFrame_rightCornerWidgetSize(qtdNativeId, &res);
        return res;
    }

    public final void setTabBarSize(QSize tabBarSize) {
        qtd_QStyleOptionTabWidgetFrame_setTabBarSize_QSize(qtdNativeId, tabBarSize);
    }

    public final QSize tabBarSize() {
        QSize res;
        qtd_QStyleOptionTabWidgetFrame_tabBarSize(qtdNativeId, &res);
        return res;
    }

    public final void setShape(QTabBar.Shape shape) {
        qtd_QStyleOptionTabWidgetFrame_setShape_Shape(qtdNativeId, shape);
    }

    public final QTabBar.Shape shape() {
        return cast(QTabBar.Shape) qtd_QStyleOptionTabWidgetFrame_shape(qtdNativeId);
    }

    public final void setMidLineWidth(int midLineWidth) {
        qtd_QStyleOptionTabWidgetFrame_setMidLineWidth_int(qtdNativeId, midLineWidth);
    }

    public final int midLineWidth() {
        return qtd_QStyleOptionTabWidgetFrame_midLineWidth(qtdNativeId);
    }

    public final void setLeftCornerWidgetSize(QSize leftCornerWidgetSize) {
        qtd_QStyleOptionTabWidgetFrame_setLeftCornerWidgetSize_QSize(qtdNativeId, leftCornerWidgetSize);
    }

    public final QSize leftCornerWidgetSize() {
        QSize res;
        qtd_QStyleOptionTabWidgetFrame_leftCornerWidgetSize(qtdNativeId, &res);
        return res;
    }
    public alias void __isQtType_QStyleOptionTabWidgetFrame;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QStyleOptionTabWidgetFrame_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QStyleOptionTabWidgetFrame_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleOptionTabWidgetFrame_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleOptionTabWidgetFrame_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleOptionTabWidgetFrame_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QStyleOptionTabWidgetFrame_QTypeInfo_isComplex();
        isStatic = qtd_QStyleOptionTabWidgetFrame_QTypeInfo_isStatic();
        isLarge = qtd_QStyleOptionTabWidgetFrame_QTypeInfo_isLarge();
        isPointer = qtd_QStyleOptionTabWidgetFrame_QTypeInfo_isPointer();
        isDummy = qtd_QStyleOptionTabWidgetFrame_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QStyleOptionTabWidgetFrame_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QStyleOptionTabWidgetFrame_native_copy(const void* orig);
extern (C) void qtd_QStyleOptionTabWidgetFrame_delete(void *ptr);
extern (C) void qtd_QStyleOptionTabWidgetFrame_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleOptionTabWidgetFrame_QStyleOptionTabWidgetFrame();
private extern(C) void* qtd_QStyleOptionTabWidgetFrame_QStyleOptionTabWidgetFrame_QStyleOptionTabWidgetFrame(void* other0);
private extern(C) void* qtd_QStyleOptionTabWidgetFrame_QStyleOptionTabWidgetFrame_int(int version0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleOptionTabWidgetFrame_setLineWidth_int(void* __this_nativeId,
 int lineWidth0);
private extern(C) int  qtd_QStyleOptionTabWidgetFrame_lineWidth(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionTabWidgetFrame_setRightCornerWidgetSize_QSize(void* __this_nativeId,
 QSize rightCornerWidgetSize0);
private extern(C) void  qtd_QStyleOptionTabWidgetFrame_rightCornerWidgetSize(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QStyleOptionTabWidgetFrame_setTabBarSize_QSize(void* __this_nativeId,
 QSize tabBarSize0);
private extern(C) void  qtd_QStyleOptionTabWidgetFrame_tabBarSize(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QStyleOptionTabWidgetFrame_setShape_Shape(void* __this_nativeId,
 int shape0);
private extern(C) int  qtd_QStyleOptionTabWidgetFrame_shape(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionTabWidgetFrame_setMidLineWidth_int(void* __this_nativeId,
 int midLineWidth0);
private extern(C) int  qtd_QStyleOptionTabWidgetFrame_midLineWidth(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionTabWidgetFrame_setLeftCornerWidgetSize_QSize(void* __this_nativeId,
 QSize leftCornerWidgetSize0);
private extern(C) void  qtd_QStyleOptionTabWidgetFrame_leftCornerWidgetSize(void* __this_nativeId,
 QSize * __d_return_value);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleOptionTabWidgetFrame_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleOptionTabWidgetFrame() {
    QStyleOptionTabWidgetFrame.QTypeInfo.init();
    qtd_QStyleOptionTabWidgetFrame_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QStyleOptionTabWidgetFrame_QTypeInfo_isComplex();
private extern (C) bool qtd_QStyleOptionTabWidgetFrame_QTypeInfo_isStatic();
private extern (C) bool qtd_QStyleOptionTabWidgetFrame_QTypeInfo_isLarge();
private extern (C) bool qtd_QStyleOptionTabWidgetFrame_QTypeInfo_isPointer();
private extern (C) bool qtd_QStyleOptionTabWidgetFrame_QTypeInfo_isDummy();
