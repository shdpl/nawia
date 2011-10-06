module qt.gui.QTextOption_Tab;

public import qt.gui.QTextOption_Tab_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QTextOption;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTextOption_Tab : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QTextOption_Tab_QTextOption_Tab();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    private final bool operator_equal(const(QTextOption_Tab) other) const {
        return qtd_QTextOption_Tab_operator_equal_QTextOption_Tab_const(qtdNativeId, other is null ? null : (cast(QTextOption_Tab)other).qtdNativeId);
    }
// Field accessors

    public final void setPosition(double position) {
        qtd_QTextOption_Tab_setPosition_double(qtdNativeId, position);
    }

    public final double position() {
        return qtd_QTextOption_Tab_position(qtdNativeId);
    }

    public final void setType(QTextOption.TabType type) {
        qtd_QTextOption_Tab_setType_TabType(qtdNativeId, type);
    }

    public final QTextOption.TabType type() {
        return cast(QTextOption.TabType) qtd_QTextOption_Tab_type(qtdNativeId);
    }
    public alias void __isValueType;

    public alias void __isQtType_QTextOption_Tab;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QTextOption_Tab_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QTextOption_Tab_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTextOption_Tab_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTextOption_Tab_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTextOption_Tab_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QTextOption_Tab_QTypeInfo_isComplex();
        isStatic = qtd_QTextOption_Tab_QTypeInfo_isStatic();
        isLarge = qtd_QTextOption_Tab_QTypeInfo_isLarge();
        isPointer = qtd_QTextOption_Tab_QTypeInfo_isPointer();
        isDummy = qtd_QTextOption_Tab_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QTextOption_Tab_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QTextOption_Tab_native_copy(const void* orig);
extern (C) void qtd_QTextOption_Tab_delete(void *ptr);
extern (C) void qtd_QTextOption_Tab_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextOption_Tab_QTextOption_Tab();
private extern(C) bool  qtd_QTextOption_Tab_operator_equal_QTextOption_Tab_const(void* __this_nativeId,
 void* other0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QTextOption_Tab_setPosition_double(void* __this_nativeId,
 double position0);
private extern(C) double  qtd_QTextOption_Tab_position(void* __this_nativeId);
private extern(C) void  qtd_QTextOption_Tab_setType_TabType(void* __this_nativeId,
 int type0);
private extern(C) int  qtd_QTextOption_Tab_type(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QTextOption_Tab_initCallBacks(void* virtuals);

extern(C) void static_init_QTextOption_Tab() {
    QTextOption_Tab.QTypeInfo.init();
    qtd_QTextOption_Tab_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QTextOption_Tab_QTypeInfo_isComplex();
private extern (C) bool qtd_QTextOption_Tab_QTypeInfo_isStatic();
private extern (C) bool qtd_QTextOption_Tab_QTypeInfo_isLarge();
private extern (C) bool qtd_QTextOption_Tab_QTypeInfo_isPointer();
private extern (C) bool qtd_QTextOption_Tab_QTypeInfo_isDummy();
