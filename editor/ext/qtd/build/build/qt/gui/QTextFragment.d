module qt.gui.QTextFragment;

public import qt.gui.QTextFragment_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QTextCharFormat;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTextFragment : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QTextFragment_QTextFragment();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QTextFragment) o) {
        void* ret = qtd_QTextFragment_QTextFragment_QTextFragment(o is null ? null : (cast(QTextFragment)o).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QTextCharFormat charFormat() const {
        void* ret = qtd_QTextFragment_charFormat_const(qtdNativeId);
        QTextCharFormat __d_return_value = new QTextCharFormat(ret);
        return __d_return_value;
    }

    public final int charFormatIndex() const {
        return qtd_QTextFragment_charFormatIndex_const(qtdNativeId);
    }

    public final bool contains(int position) const {
        return qtd_QTextFragment_contains_int_const(qtdNativeId, position);
    }

    public final bool isValid() const {
        return qtd_QTextFragment_isValid_const(qtdNativeId);
    }

    public final int length() const {
        return qtd_QTextFragment_length_const(qtdNativeId);
    }

    private final bool operator_less(const(QTextFragment) o) const {
        return qtd_QTextFragment_operator_less_QTextFragment_const(qtdNativeId, o is null ? null : (cast(QTextFragment)o).qtdNativeId);
    }

    private final bool operator_equal(const(QTextFragment) o) const {
        return qtd_QTextFragment_operator_equal_QTextFragment_const(qtdNativeId, o is null ? null : (cast(QTextFragment)o).qtdNativeId);
    }

    public final int position() const {
        return qtd_QTextFragment_position_const(qtdNativeId);
    }

    public final string text() const {
        string res;
        qtd_QTextFragment_text_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QTextFragment;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QTextFragment_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QTextFragment_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTextFragment_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTextFragment_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTextFragment_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QTextFragment_QTypeInfo_isComplex();
        isStatic = qtd_QTextFragment_QTypeInfo_isStatic();
        isLarge = qtd_QTextFragment_QTypeInfo_isLarge();
        isPointer = qtd_QTextFragment_QTypeInfo_isPointer();
        isDummy = qtd_QTextFragment_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QTextFragment_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QTextFragment_native_copy(const void* orig);
extern (C) void qtd_QTextFragment_delete(void *ptr);
extern (C) void qtd_QTextFragment_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextFragment_QTextFragment();
private extern(C) void* qtd_QTextFragment_QTextFragment_QTextFragment(void* o0);
private extern(C) void*  qtd_QTextFragment_charFormat_const(void* __this_nativeId);
private extern(C) int  qtd_QTextFragment_charFormatIndex_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextFragment_contains_int_const(void* __this_nativeId,
 int position0);
private extern(C) bool  qtd_QTextFragment_isValid_const(void* __this_nativeId);
private extern(C) int  qtd_QTextFragment_length_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextFragment_operator_less_QTextFragment_const(void* __this_nativeId,
 void* o0);
private extern(C) bool  qtd_QTextFragment_operator_equal_QTextFragment_const(void* __this_nativeId,
 void* o0);
private extern(C) int  qtd_QTextFragment_position_const(void* __this_nativeId);
private extern(C) void  qtd_QTextFragment_text_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QTextFragment() {
    QTextFragment.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QTextFragment_QTypeInfo_isComplex();
private extern (C) bool qtd_QTextFragment_QTypeInfo_isStatic();
private extern (C) bool qtd_QTextFragment_QTypeInfo_isLarge();
private extern (C) bool qtd_QTextFragment_QTypeInfo_isPointer();
private extern (C) bool qtd_QTextFragment_QTypeInfo_isDummy();
