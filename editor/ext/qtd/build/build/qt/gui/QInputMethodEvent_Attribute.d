module qt.gui.QInputMethodEvent_Attribute;

public import qt.gui.QInputMethodEvent_Attribute_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QInputMethodEvent;
public import qt.core.QVariant;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QInputMethodEvent_Attribute : QtdObject
{

// Functions

    public this(QInputMethodEvent.AttributeType t, int s, int l, QVariant val) {
        void* ret = qtd_QInputMethodEvent_Attribute_QInputMethodEvent_Attribute_AttributeType_int_int_QVariant(t, s, l, val is null ? null : val.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setLength(int length) {
        qtd_QInputMethodEvent_Attribute_setLength_int(qtdNativeId, length);
    }

    public final int length() {
        return qtd_QInputMethodEvent_Attribute_length(qtdNativeId);
    }

    public final void setType(QInputMethodEvent.AttributeType type) {
        qtd_QInputMethodEvent_Attribute_setType_AttributeType(qtdNativeId, type);
    }

    public final QInputMethodEvent.AttributeType type() {
        return cast(QInputMethodEvent.AttributeType) qtd_QInputMethodEvent_Attribute_type(qtdNativeId);
    }

    public final void setValue(QVariant value) {
        qtd_QInputMethodEvent_Attribute_setValue_QVariant(qtdNativeId, value is null ? null : value.qtdNativeId);
    }

    public final QVariant value() {
        void* ret = qtd_QInputMethodEvent_Attribute_value(qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final void setStart(int start) {
        qtd_QInputMethodEvent_Attribute_setStart_int(qtdNativeId, start);
    }

    public final int start() {
        return qtd_QInputMethodEvent_Attribute_start(qtdNativeId);
    }
    public alias void __isValueType;

    public alias void __isQtType_QInputMethodEvent_Attribute;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QInputMethodEvent_Attribute_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QInputMethodEvent_Attribute_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QInputMethodEvent_Attribute_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QInputMethodEvent_Attribute_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QInputMethodEvent_Attribute_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QInputMethodEvent_Attribute_QTypeInfo_isComplex();
        isStatic = qtd_QInputMethodEvent_Attribute_QTypeInfo_isStatic();
        isLarge = qtd_QInputMethodEvent_Attribute_QTypeInfo_isLarge();
        isPointer = qtd_QInputMethodEvent_Attribute_QTypeInfo_isPointer();
        isDummy = qtd_QInputMethodEvent_Attribute_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QInputMethodEvent_Attribute_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QInputMethodEvent_Attribute_native_copy(const void* orig);
extern (C) void qtd_QInputMethodEvent_Attribute_delete(void *ptr);
extern (C) void qtd_QInputMethodEvent_Attribute_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QInputMethodEvent_Attribute_QInputMethodEvent_Attribute_AttributeType_int_int_QVariant(int t0,
 int s1,
 int l2,
 void* val3);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QInputMethodEvent_Attribute_setLength_int(void* __this_nativeId,
 int length0);
private extern(C) int  qtd_QInputMethodEvent_Attribute_length(void* __this_nativeId);
private extern(C) void  qtd_QInputMethodEvent_Attribute_setType_AttributeType(void* __this_nativeId,
 int type0);
private extern(C) int  qtd_QInputMethodEvent_Attribute_type(void* __this_nativeId);
private extern(C) void  qtd_QInputMethodEvent_Attribute_setValue_QVariant(void* __this_nativeId,
 void* value0);
private extern(C) void*  qtd_QInputMethodEvent_Attribute_value(void* __this_nativeId);
private extern(C) void  qtd_QInputMethodEvent_Attribute_setStart_int(void* __this_nativeId,
 int start0);
private extern(C) int  qtd_QInputMethodEvent_Attribute_start(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QInputMethodEvent_Attribute_initCallBacks(void* virtuals);

extern(C) void static_init_QInputMethodEvent_Attribute() {
    QInputMethodEvent_Attribute.QTypeInfo.init();
    qtd_QInputMethodEvent_Attribute_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QInputMethodEvent_Attribute_QTypeInfo_isComplex();
private extern (C) bool qtd_QInputMethodEvent_Attribute_QTypeInfo_isStatic();
private extern (C) bool qtd_QInputMethodEvent_Attribute_QTypeInfo_isLarge();
private extern (C) bool qtd_QInputMethodEvent_Attribute_QTypeInfo_isPointer();
private extern (C) bool qtd_QInputMethodEvent_Attribute_QTypeInfo_isDummy();
