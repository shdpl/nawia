module qt.gui.QStyleOptionDockWidget;

public import qt.gui.QStyleOptionDockWidget_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QStyleOption;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleOptionDockWidget : QStyleOption
{
    public enum StyleOptionVersion {
        Version = 1
    }

    alias StyleOptionVersion.Version Version;

    public enum StyleOptionType {
        Type = 10
    }

    alias StyleOptionType.Type Type;


// Functions

    public this() {
        void* ret = qtd_QStyleOptionDockWidget_QStyleOptionDockWidget();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionDockWidget) other) {
        void* ret = qtd_QStyleOptionDockWidget_QStyleOptionDockWidget_QStyleOptionDockWidget(other is null ? null : (cast(QStyleOptionDockWidget)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(int version_) {
        void* ret = qtd_QStyleOptionDockWidget_QStyleOptionDockWidget_int(version_);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setTitle(string title) {
        qtd_QStyleOptionDockWidget_setTitle_string(qtdNativeId, title);
    }

    public final string title() {
        string res;
        qtd_QStyleOptionDockWidget_title(qtdNativeId, &res);
        return res;
    }

    public final void setFloatable(bool floatable) {
        qtd_QStyleOptionDockWidget_setFloatable_bool(qtdNativeId, floatable);
    }

    public final bool floatable() {
        return qtd_QStyleOptionDockWidget_floatable(qtdNativeId);
    }

    public final void setClosable(bool closable) {
        qtd_QStyleOptionDockWidget_setClosable_bool(qtdNativeId, closable);
    }

    public final bool closable() {
        return qtd_QStyleOptionDockWidget_closable(qtdNativeId);
    }

    public final void setMovable(bool movable) {
        qtd_QStyleOptionDockWidget_setMovable_bool(qtdNativeId, movable);
    }

    public final bool movable() {
        return qtd_QStyleOptionDockWidget_movable(qtdNativeId);
    }
    public alias void __isQtType_QStyleOptionDockWidget;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QStyleOptionDockWidget_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QStyleOptionDockWidget_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleOptionDockWidget_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleOptionDockWidget_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleOptionDockWidget_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QStyleOptionDockWidget_QTypeInfo_isComplex();
        isStatic = qtd_QStyleOptionDockWidget_QTypeInfo_isStatic();
        isLarge = qtd_QStyleOptionDockWidget_QTypeInfo_isLarge();
        isPointer = qtd_QStyleOptionDockWidget_QTypeInfo_isPointer();
        isDummy = qtd_QStyleOptionDockWidget_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QStyleOptionDockWidget_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QStyleOptionDockWidget_native_copy(const void* orig);
extern (C) void qtd_QStyleOptionDockWidget_delete(void *ptr);
extern (C) void qtd_QStyleOptionDockWidget_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleOptionDockWidget_QStyleOptionDockWidget();
private extern(C) void* qtd_QStyleOptionDockWidget_QStyleOptionDockWidget_QStyleOptionDockWidget(void* other0);
private extern(C) void* qtd_QStyleOptionDockWidget_QStyleOptionDockWidget_int(int version0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleOptionDockWidget_setTitle_string(void* __this_nativeId,
 string title0);
private extern(C) void  qtd_QStyleOptionDockWidget_title(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QStyleOptionDockWidget_setFloatable_bool(void* __this_nativeId,
 bool floatable0);
private extern(C) bool  qtd_QStyleOptionDockWidget_floatable(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionDockWidget_setClosable_bool(void* __this_nativeId,
 bool closable0);
private extern(C) bool  qtd_QStyleOptionDockWidget_closable(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionDockWidget_setMovable_bool(void* __this_nativeId,
 bool movable0);
private extern(C) bool  qtd_QStyleOptionDockWidget_movable(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleOptionDockWidget_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleOptionDockWidget() {
    QStyleOptionDockWidget.QTypeInfo.init();
    qtd_QStyleOptionDockWidget_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QStyleOptionDockWidget_QTypeInfo_isComplex();
private extern (C) bool qtd_QStyleOptionDockWidget_QTypeInfo_isStatic();
private extern (C) bool qtd_QStyleOptionDockWidget_QTypeInfo_isLarge();
private extern (C) bool qtd_QStyleOptionDockWidget_QTypeInfo_isPointer();
private extern (C) bool qtd_QStyleOptionDockWidget_QTypeInfo_isDummy();
