module qt.gui.QStyleOptionFocusRect;

public import qt.gui.QStyleOptionFocusRect_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QColor;
public import qt.gui.QStyleOption;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleOptionFocusRect : QStyleOption
{
    public enum StyleOptionVersion {
        Version = 1
    }

    alias StyleOptionVersion.Version Version;

    public enum StyleOptionType {
        Type = 1
    }

    alias StyleOptionType.Type Type;


// Functions

    public this() {
        void* ret = qtd_QStyleOptionFocusRect_QStyleOptionFocusRect();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionFocusRect) other) {
        void* ret = qtd_QStyleOptionFocusRect_QStyleOptionFocusRect_QStyleOptionFocusRect(other is null ? null : (cast(QStyleOptionFocusRect)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(int version_) {
        void* ret = qtd_QStyleOptionFocusRect_QStyleOptionFocusRect_int(version_);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setBackgroundColor(QColor backgroundColor) {
        qtd_QStyleOptionFocusRect_setBackgroundColor_QColor(qtdNativeId, backgroundColor is null ? null : backgroundColor.qtdNativeId);
    }

    public final QColor backgroundColor() {
        void* ret = qtd_QStyleOptionFocusRect_backgroundColor(qtdNativeId);
        QColor __d_return_value = new QColor(ret);
        return __d_return_value;
    }
    public alias void __isQtType_QStyleOptionFocusRect;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QStyleOptionFocusRect_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QStyleOptionFocusRect_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleOptionFocusRect_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleOptionFocusRect_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleOptionFocusRect_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QStyleOptionFocusRect_QTypeInfo_isComplex();
        isStatic = qtd_QStyleOptionFocusRect_QTypeInfo_isStatic();
        isLarge = qtd_QStyleOptionFocusRect_QTypeInfo_isLarge();
        isPointer = qtd_QStyleOptionFocusRect_QTypeInfo_isPointer();
        isDummy = qtd_QStyleOptionFocusRect_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QStyleOptionFocusRect_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QStyleOptionFocusRect_native_copy(const void* orig);
extern (C) void qtd_QStyleOptionFocusRect_delete(void *ptr);
extern (C) void qtd_QStyleOptionFocusRect_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleOptionFocusRect_QStyleOptionFocusRect();
private extern(C) void* qtd_QStyleOptionFocusRect_QStyleOptionFocusRect_QStyleOptionFocusRect(void* other0);
private extern(C) void* qtd_QStyleOptionFocusRect_QStyleOptionFocusRect_int(int version0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleOptionFocusRect_setBackgroundColor_QColor(void* __this_nativeId,
 void* backgroundColor0);
private extern(C) void*  qtd_QStyleOptionFocusRect_backgroundColor(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleOptionFocusRect_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleOptionFocusRect() {
    QStyleOptionFocusRect.QTypeInfo.init();
    qtd_QStyleOptionFocusRect_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QStyleOptionFocusRect_QTypeInfo_isComplex();
private extern (C) bool qtd_QStyleOptionFocusRect_QTypeInfo_isStatic();
private extern (C) bool qtd_QStyleOptionFocusRect_QTypeInfo_isLarge();
private extern (C) bool qtd_QStyleOptionFocusRect_QTypeInfo_isPointer();
private extern (C) bool qtd_QStyleOptionFocusRect_QTypeInfo_isDummy();
