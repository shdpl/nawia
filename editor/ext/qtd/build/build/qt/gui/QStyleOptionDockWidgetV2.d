module qt.gui.QStyleOptionDockWidgetV2;

public import qt.gui.QStyleOptionDockWidgetV2_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QStyleOptionDockWidget;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleOptionDockWidgetV2 : QStyleOptionDockWidget
{
    public enum StyleOptionVersion {
        Version = 2
    }

    alias StyleOptionVersion.Version Version;


// Functions

    public this() {
        void* ret = qtd_QStyleOptionDockWidgetV2_QStyleOptionDockWidgetV2();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionDockWidget) other) {
        void* ret = qtd_QStyleOptionDockWidgetV2_QStyleOptionDockWidgetV2_QStyleOptionDockWidget(other is null ? null : (cast(QStyleOptionDockWidget)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionDockWidgetV2) other) {
        void* ret = qtd_QStyleOptionDockWidgetV2_QStyleOptionDockWidgetV2_QStyleOptionDockWidgetV2(other is null ? null : (cast(QStyleOptionDockWidgetV2)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(int version_) {
        void* ret = qtd_QStyleOptionDockWidgetV2_QStyleOptionDockWidgetV2_int(version_);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setVerticalTitleBar(bool verticalTitleBar) {
        qtd_QStyleOptionDockWidgetV2_setVerticalTitleBar_bool(qtdNativeId, verticalTitleBar);
    }

    public final bool verticalTitleBar() {
        return qtd_QStyleOptionDockWidgetV2_verticalTitleBar(qtdNativeId);
    }
    public alias void __isQtType_QStyleOptionDockWidgetV2;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QStyleOptionDockWidgetV2_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QStyleOptionDockWidgetV2_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleOptionDockWidgetV2_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleOptionDockWidgetV2_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleOptionDockWidgetV2_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QStyleOptionDockWidgetV2_QTypeInfo_isComplex();
        isStatic = qtd_QStyleOptionDockWidgetV2_QTypeInfo_isStatic();
        isLarge = qtd_QStyleOptionDockWidgetV2_QTypeInfo_isLarge();
        isPointer = qtd_QStyleOptionDockWidgetV2_QTypeInfo_isPointer();
        isDummy = qtd_QStyleOptionDockWidgetV2_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QStyleOptionDockWidgetV2_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QStyleOptionDockWidgetV2_native_copy(const void* orig);
extern (C) void qtd_QStyleOptionDockWidgetV2_delete(void *ptr);
extern (C) void qtd_QStyleOptionDockWidgetV2_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleOptionDockWidgetV2_QStyleOptionDockWidgetV2();
private extern(C) void* qtd_QStyleOptionDockWidgetV2_QStyleOptionDockWidgetV2_QStyleOptionDockWidget(void* other0);
private extern(C) void* qtd_QStyleOptionDockWidgetV2_QStyleOptionDockWidgetV2_QStyleOptionDockWidgetV2(void* other0);
private extern(C) void* qtd_QStyleOptionDockWidgetV2_QStyleOptionDockWidgetV2_int(int version0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleOptionDockWidgetV2_setVerticalTitleBar_bool(void* __this_nativeId,
 bool verticalTitleBar0);
private extern(C) bool  qtd_QStyleOptionDockWidgetV2_verticalTitleBar(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleOptionDockWidgetV2_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleOptionDockWidgetV2() {
    QStyleOptionDockWidgetV2.QTypeInfo.init();
    qtd_QStyleOptionDockWidgetV2_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QStyleOptionDockWidgetV2_QTypeInfo_isComplex();
private extern (C) bool qtd_QStyleOptionDockWidgetV2_QTypeInfo_isStatic();
private extern (C) bool qtd_QStyleOptionDockWidgetV2_QTypeInfo_isLarge();
private extern (C) bool qtd_QStyleOptionDockWidgetV2_QTypeInfo_isPointer();
private extern (C) bool qtd_QStyleOptionDockWidgetV2_QTypeInfo_isDummy();
