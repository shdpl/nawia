module qt.gui.QTextLength;

public import qt.gui.QTextLength_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QVariant;
public import qt.core.QDataStream;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTextLength : QtdObject
{
    public enum Type {
        VariableLength = 0,
        FixedLength = 1,
        PercentageLength = 2
    }

    alias Type.VariableLength VariableLength;
    alias Type.FixedLength FixedLength;
    alias Type.PercentageLength PercentageLength;


// Functions

    public this() {
        void* ret = qtd_QTextLength_QTextLength();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QTextLength.Type type, double value) {
        void* ret = qtd_QTextLength_QTextLength_Type_double(type, value);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QVariant operator_cast_QVariant() const {
        void* ret = qtd_QTextLength_operator_cast_QVariant_const(qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final void writeTo(QDataStream arg__1) {
        qtd_QTextLength_writeTo_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    private final bool operator_equal(const(QTextLength) other) const {
        return qtd_QTextLength_operator_equal_QTextLength_const(qtdNativeId, other is null ? null : (cast(QTextLength)other).qtdNativeId);
    }

    public final void readFrom(QDataStream arg__1) {
        qtd_QTextLength_readFrom_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final double rawValue() const {
        return qtd_QTextLength_rawValue_const(qtdNativeId);
    }

    public final QTextLength.Type type() const {
        return cast(QTextLength.Type) qtd_QTextLength_type_const(qtdNativeId);
    }

    public final double value(double maximumLength) const {
        return qtd_QTextLength_value_double_const(qtdNativeId, maximumLength);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QTextLength;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QTextLength_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QTextLength_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTextLength_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTextLength_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTextLength_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QTextLength_QTypeInfo_isComplex();
        isStatic = qtd_QTextLength_QTypeInfo_isStatic();
        isLarge = qtd_QTextLength_QTypeInfo_isLarge();
        isPointer = qtd_QTextLength_QTypeInfo_isPointer();
        isDummy = qtd_QTextLength_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QTextLength_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QTextLength_native_copy(const void* orig);
extern (C) void qtd_QTextLength_delete(void *ptr);
extern (C) void qtd_QTextLength_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextLength_QTextLength();
private extern(C) void* qtd_QTextLength_QTextLength_Type_double(int type0,
 double value1);
private extern(C) void*  qtd_QTextLength_operator_cast_QVariant_const(void* __this_nativeId);
private extern(C) void  qtd_QTextLength_writeTo_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QTextLength_operator_equal_QTextLength_const(void* __this_nativeId,
 void* other0);
private extern(C) void  qtd_QTextLength_readFrom_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) double  qtd_QTextLength_rawValue_const(void* __this_nativeId);
private extern(C) int  qtd_QTextLength_type_const(void* __this_nativeId);
private extern(C) double  qtd_QTextLength_value_double_const(void* __this_nativeId,
 double maximumLength0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QTextLength() {
    QTextLength.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QTextLength_QTypeInfo_isComplex();
private extern (C) bool qtd_QTextLength_QTypeInfo_isStatic();
private extern (C) bool qtd_QTextLength_QTypeInfo_isLarge();
private extern (C) bool qtd_QTextLength_QTypeInfo_isPointer();
private extern (C) bool qtd_QTextLength_QTypeInfo_isDummy();
