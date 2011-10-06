module qt.gui.QTextBlock_iterator;

public import qt.gui.QTextBlock_iterator_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QTextFragment;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTextBlock_iterator : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QTextBlock_iterator_QTextBlock_iterator();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QTextBlock_iterator) o) {
        void* ret = qtd_QTextBlock_iterator_QTextBlock_iterator_QTextBlock_iterator(o is null ? null : (cast(QTextBlock_iterator)o).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool atEnd() const {
        return qtd_QTextBlock_iterator_atEnd_const(qtdNativeId);
    }

    public final QTextFragment fragment() const {
        void* ret = qtd_QTextBlock_iterator_fragment_const(qtdNativeId);
        QTextFragment __d_return_value = new QTextFragment(ret);
        return __d_return_value;
    }

    private final QTextBlock_iterator operator_increment() {
        void* ret = qtd_QTextBlock_iterator_operator_increment(qtdNativeId);
        QTextBlock_iterator __d_return_value = new QTextBlock_iterator(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    private final QTextBlock_iterator operator_decrement() {
        void* ret = qtd_QTextBlock_iterator_operator_decrement(qtdNativeId);
        QTextBlock_iterator __d_return_value = new QTextBlock_iterator(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    private final bool operator_equal(const(QTextBlock_iterator) o) const {
        return qtd_QTextBlock_iterator_operator_equal_QTextBlock_iterator_const(qtdNativeId, o is null ? null : (cast(QTextBlock_iterator)o).qtdNativeId);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QTextBlock_iterator;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QTextBlock_iterator_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QTextBlock_iterator_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTextBlock_iterator_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTextBlock_iterator_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTextBlock_iterator_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QTextBlock_iterator_QTypeInfo_isComplex();
        isStatic = qtd_QTextBlock_iterator_QTypeInfo_isStatic();
        isLarge = qtd_QTextBlock_iterator_QTypeInfo_isLarge();
        isPointer = qtd_QTextBlock_iterator_QTypeInfo_isPointer();
        isDummy = qtd_QTextBlock_iterator_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    public final void opPostInc() {
        operator_increment();
    }

    public final void opPostDec() {
        operator_decrement();
    }

}
private extern(C) void qtd_QTextBlock_iterator_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QTextBlock_iterator_native_copy(const void* orig);
extern (C) void qtd_QTextBlock_iterator_delete(void *ptr);
extern (C) void qtd_QTextBlock_iterator_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextBlock_iterator_QTextBlock_iterator();
private extern(C) void* qtd_QTextBlock_iterator_QTextBlock_iterator_QTextBlock_iterator(void* o0);
private extern(C) bool  qtd_QTextBlock_iterator_atEnd_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextBlock_iterator_fragment_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextBlock_iterator_operator_increment(void* __this_nativeId);
private extern(C) void*  qtd_QTextBlock_iterator_operator_decrement(void* __this_nativeId);
private extern(C) bool  qtd_QTextBlock_iterator_operator_equal_QTextBlock_iterator_const(void* __this_nativeId,
 void* o0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QTextBlock_iterator() {
    QTextBlock_iterator.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QTextBlock_iterator_QTypeInfo_isComplex();
private extern (C) bool qtd_QTextBlock_iterator_QTypeInfo_isStatic();
private extern (C) bool qtd_QTextBlock_iterator_QTypeInfo_isLarge();
private extern (C) bool qtd_QTextBlock_iterator_QTypeInfo_isPointer();
private extern (C) bool qtd_QTextBlock_iterator_QTypeInfo_isDummy();
