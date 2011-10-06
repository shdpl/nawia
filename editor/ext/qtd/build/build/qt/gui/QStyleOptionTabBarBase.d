module qt.gui.QStyleOptionTabBarBase;

public import qt.gui.QStyleOptionTabBarBase_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QTabBar;
public import qt.gui.QStyleOption;
public import qt.core.QRect;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleOptionTabBarBase : QStyleOption
{
    public enum StyleOptionVersion {
        Version = 1
    }

    alias StyleOptionVersion.Version Version;

    public enum StyleOptionType {
        Type = 14
    }

    alias StyleOptionType.Type Type;


// Functions

    public this() {
        void* ret = qtd_QStyleOptionTabBarBase_QStyleOptionTabBarBase();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionTabBarBase) other) {
        void* ret = qtd_QStyleOptionTabBarBase_QStyleOptionTabBarBase_QStyleOptionTabBarBase(other is null ? null : (cast(QStyleOptionTabBarBase)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(int version_) {
        void* ret = qtd_QStyleOptionTabBarBase_QStyleOptionTabBarBase_int(version_);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setSelectedTabRect(QRect selectedTabRect) {
        qtd_QStyleOptionTabBarBase_setSelectedTabRect_QRect(qtdNativeId, selectedTabRect);
    }

    public final QRect selectedTabRect() {
        QRect res;
        qtd_QStyleOptionTabBarBase_selectedTabRect(qtdNativeId, &res);
        return res;
    }

    public final void setShape(QTabBar.Shape shape) {
        qtd_QStyleOptionTabBarBase_setShape_Shape(qtdNativeId, shape);
    }

    public final QTabBar.Shape shape() {
        return cast(QTabBar.Shape) qtd_QStyleOptionTabBarBase_shape(qtdNativeId);
    }

    public final void setTabBarRect(QRect tabBarRect) {
        qtd_QStyleOptionTabBarBase_setTabBarRect_QRect(qtdNativeId, tabBarRect);
    }

    public final QRect tabBarRect() {
        QRect res;
        qtd_QStyleOptionTabBarBase_tabBarRect(qtdNativeId, &res);
        return res;
    }
    public alias void __isQtType_QStyleOptionTabBarBase;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QStyleOptionTabBarBase_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QStyleOptionTabBarBase_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleOptionTabBarBase_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleOptionTabBarBase_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleOptionTabBarBase_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QStyleOptionTabBarBase_QTypeInfo_isComplex();
        isStatic = qtd_QStyleOptionTabBarBase_QTypeInfo_isStatic();
        isLarge = qtd_QStyleOptionTabBarBase_QTypeInfo_isLarge();
        isPointer = qtd_QStyleOptionTabBarBase_QTypeInfo_isPointer();
        isDummy = qtd_QStyleOptionTabBarBase_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QStyleOptionTabBarBase_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QStyleOptionTabBarBase_native_copy(const void* orig);
extern (C) void qtd_QStyleOptionTabBarBase_delete(void *ptr);
extern (C) void qtd_QStyleOptionTabBarBase_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleOptionTabBarBase_QStyleOptionTabBarBase();
private extern(C) void* qtd_QStyleOptionTabBarBase_QStyleOptionTabBarBase_QStyleOptionTabBarBase(void* other0);
private extern(C) void* qtd_QStyleOptionTabBarBase_QStyleOptionTabBarBase_int(int version0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleOptionTabBarBase_setSelectedTabRect_QRect(void* __this_nativeId,
 QRect selectedTabRect0);
private extern(C) void  qtd_QStyleOptionTabBarBase_selectedTabRect(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) void  qtd_QStyleOptionTabBarBase_setShape_Shape(void* __this_nativeId,
 int shape0);
private extern(C) int  qtd_QStyleOptionTabBarBase_shape(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionTabBarBase_setTabBarRect_QRect(void* __this_nativeId,
 QRect tabBarRect0);
private extern(C) void  qtd_QStyleOptionTabBarBase_tabBarRect(void* __this_nativeId,
 QRect * __d_return_value);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleOptionTabBarBase_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleOptionTabBarBase() {
    QStyleOptionTabBarBase.QTypeInfo.init();
    qtd_QStyleOptionTabBarBase_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QStyleOptionTabBarBase_QTypeInfo_isComplex();
private extern (C) bool qtd_QStyleOptionTabBarBase_QTypeInfo_isStatic();
private extern (C) bool qtd_QStyleOptionTabBarBase_QTypeInfo_isLarge();
private extern (C) bool qtd_QStyleOptionTabBarBase_QTypeInfo_isPointer();
private extern (C) bool qtd_QStyleOptionTabBarBase_QTypeInfo_isDummy();
