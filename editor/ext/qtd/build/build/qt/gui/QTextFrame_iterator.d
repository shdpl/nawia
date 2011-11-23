module qt.gui.QTextFrame_iterator;

public import qt.gui.QTextFrame_iterator_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QTextBlock;
public import qt.gui.QTextFrame;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTextFrame_iterator : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QTextFrame_iterator_QTextFrame_iterator();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QTextFrame_iterator) o) {
        void* ret = qtd_QTextFrame_iterator_QTextFrame_iterator_QTextFrame_iterator(o is null ? null : (cast(QTextFrame_iterator)o).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool atEnd() const {
        return qtd_QTextFrame_iterator_atEnd_const(qtdNativeId);
    }

    public final QTextBlock currentBlock() const {
        void* ret = qtd_QTextFrame_iterator_currentBlock_const(qtdNativeId);
        QTextBlock __d_return_value = new QTextBlock(ret);
        return __d_return_value;
    }

    public final QTextFrame currentFrame() const {
        void *ret = qtd_QTextFrame_iterator_currentFrame_const(qtdNativeId);
        QTextFrame __d_return_value = QTextFrame.__getObject(ret);
        return __d_return_value;
    }

    private final QTextFrame_iterator operator_increment() {
        void* ret = qtd_QTextFrame_iterator_operator_increment(qtdNativeId);
        QTextFrame_iterator __d_return_value = new QTextFrame_iterator(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    private final QTextFrame_iterator operator_decrement() {
        void* ret = qtd_QTextFrame_iterator_operator_decrement(qtdNativeId);
        QTextFrame_iterator __d_return_value = new QTextFrame_iterator(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    private final bool operator_equal(const(QTextFrame_iterator) o) const {
        return qtd_QTextFrame_iterator_operator_equal_QTextFrame_iterator_const(qtdNativeId, o is null ? null : (cast(QTextFrame_iterator)o).qtdNativeId);
    }

    public final QTextFrame parentFrame() const {
        void *ret = qtd_QTextFrame_iterator_parentFrame_const(qtdNativeId);
        QTextFrame __d_return_value = QTextFrame.__getObject(ret);
        return __d_return_value;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QTextFrame_iterator;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QTextFrame_iterator_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QTextFrame_iterator_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTextFrame_iterator_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTextFrame_iterator_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTextFrame_iterator_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QTextFrame_iterator_QTypeInfo_isComplex();
        isStatic = qtd_QTextFrame_iterator_QTypeInfo_isStatic();
        isLarge = qtd_QTextFrame_iterator_QTypeInfo_isLarge();
        isPointer = qtd_QTextFrame_iterator_QTypeInfo_isPointer();
        isDummy = qtd_QTextFrame_iterator_QTypeInfo_isDummy();
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
private extern(C) void qtd_QTextFrame_iterator_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QTextFrame_iterator_native_copy(const void* orig);
extern (C) void qtd_QTextFrame_iterator_delete(void *ptr);
extern (C) void qtd_QTextFrame_iterator_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextFrame_iterator_QTextFrame_iterator();
private extern(C) void* qtd_QTextFrame_iterator_QTextFrame_iterator_QTextFrame_iterator(void* o0);
private extern(C) bool  qtd_QTextFrame_iterator_atEnd_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextFrame_iterator_currentBlock_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextFrame_iterator_currentFrame_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextFrame_iterator_operator_increment(void* __this_nativeId);
private extern(C) void*  qtd_QTextFrame_iterator_operator_decrement(void* __this_nativeId);
private extern(C) bool  qtd_QTextFrame_iterator_operator_equal_QTextFrame_iterator_const(void* __this_nativeId,
 void* o0);
private extern(C) void*  qtd_QTextFrame_iterator_parentFrame_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QTextFrame_iterator() {
    QTextFrame_iterator.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QTextFrame_iterator_QTypeInfo_isComplex();
private extern (C) bool qtd_QTextFrame_iterator_QTypeInfo_isStatic();
private extern (C) bool qtd_QTextFrame_iterator_QTypeInfo_isLarge();
private extern (C) bool qtd_QTextFrame_iterator_QTypeInfo_isPointer();
private extern (C) bool qtd_QTextFrame_iterator_QTypeInfo_isDummy();
