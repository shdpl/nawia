module qt.gui.QStyleOptionViewItemV3;

public import qt.gui.QStyleOptionViewItemV3_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QLocale;
public import qt.gui.QStyleOptionViewItem;
public import qt.gui.QStyleOptionViewItemV2;
public import qt.gui.QWidget;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleOptionViewItemV3 : QStyleOptionViewItemV2
{
    public enum StyleOptionVersion {
        Version = 3
    }

    alias StyleOptionVersion.Version Version;


// Functions

    public this() {
        void* ret = qtd_QStyleOptionViewItemV3_QStyleOptionViewItemV3();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionViewItem) other) {
        void* ret = qtd_QStyleOptionViewItemV3_QStyleOptionViewItemV3_QStyleOptionViewItem(other is null ? null : (cast(QStyleOptionViewItem)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionViewItemV3) other) {
        void* ret = qtd_QStyleOptionViewItemV3_QStyleOptionViewItemV3_QStyleOptionViewItemV3(other is null ? null : (cast(QStyleOptionViewItemV3)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(int version_) {
        void* ret = qtd_QStyleOptionViewItemV3_QStyleOptionViewItemV3_int(version_);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final QWidget widget() {
        void *ret = qtd_QStyleOptionViewItemV3_widget(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final void setLocale(QLocale locale) {
        qtd_QStyleOptionViewItemV3_setLocale_QLocale(qtdNativeId, locale is null ? null : locale.qtdNativeId);
    }

    public final QLocale locale() {
        void* ret = qtd_QStyleOptionViewItemV3_locale(qtdNativeId);
        QLocale __d_return_value = new QLocale(ret);
        return __d_return_value;
    }
    public alias void __isQtType_QStyleOptionViewItemV3;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QStyleOptionViewItemV3_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QStyleOptionViewItemV3_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleOptionViewItemV3_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleOptionViewItemV3_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleOptionViewItemV3_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QStyleOptionViewItemV3_QTypeInfo_isComplex();
        isStatic = qtd_QStyleOptionViewItemV3_QTypeInfo_isStatic();
        isLarge = qtd_QStyleOptionViewItemV3_QTypeInfo_isLarge();
        isPointer = qtd_QStyleOptionViewItemV3_QTypeInfo_isPointer();
        isDummy = qtd_QStyleOptionViewItemV3_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QStyleOptionViewItemV3_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QStyleOptionViewItemV3_native_copy(const void* orig);
extern (C) void qtd_QStyleOptionViewItemV3_delete(void *ptr);
extern (C) void qtd_QStyleOptionViewItemV3_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleOptionViewItemV3_QStyleOptionViewItemV3();
private extern(C) void* qtd_QStyleOptionViewItemV3_QStyleOptionViewItemV3_QStyleOptionViewItem(void* other0);
private extern(C) void* qtd_QStyleOptionViewItemV3_QStyleOptionViewItemV3_QStyleOptionViewItemV3(void* other0);
private extern(C) void* qtd_QStyleOptionViewItemV3_QStyleOptionViewItemV3_int(int version0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void*  qtd_QStyleOptionViewItemV3_widget(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionViewItemV3_setLocale_QLocale(void* __this_nativeId,
 void* locale0);
private extern(C) void*  qtd_QStyleOptionViewItemV3_locale(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleOptionViewItemV3_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleOptionViewItemV3() {
    QStyleOptionViewItemV3.QTypeInfo.init();
    qtd_QStyleOptionViewItemV3_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QStyleOptionViewItemV3_QTypeInfo_isComplex();
private extern (C) bool qtd_QStyleOptionViewItemV3_QTypeInfo_isStatic();
private extern (C) bool qtd_QStyleOptionViewItemV3_QTypeInfo_isLarge();
private extern (C) bool qtd_QStyleOptionViewItemV3_QTypeInfo_isPointer();
private extern (C) bool qtd_QStyleOptionViewItemV3_QTypeInfo_isDummy();
