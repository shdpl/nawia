module qt.xml.QDomProcessingInstruction;

public import qt.xml.QDomProcessingInstruction_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.xml.QDomNode;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QDomProcessingInstruction : QDomNode
{

// Functions

    public this() {
        void* ret = qtd_QDomProcessingInstruction_QDomProcessingInstruction();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QDomProcessingInstruction) x) {
        void* ret = qtd_QDomProcessingInstruction_QDomProcessingInstruction_QDomProcessingInstruction(x is null ? null : (cast(QDomProcessingInstruction)x).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string data() const {
        string res;
        qtd_QDomProcessingInstruction_data_const(qtdNativeId, &res);
        return res;
    }

    public final void setData(string d) {
        qtd_QDomProcessingInstruction_setData_string(qtdNativeId, d);
    }

    public final string target() const {
        string res;
        qtd_QDomProcessingInstruction_target_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    public alias void __isQtType_QDomProcessingInstruction;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QDomProcessingInstruction_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QDomProcessingInstruction_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QDomProcessingInstruction_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QDomProcessingInstruction_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QDomProcessingInstruction_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QDomProcessingInstruction_QTypeInfo_isComplex();
        isStatic = qtd_QDomProcessingInstruction_QTypeInfo_isStatic();
        isLarge = qtd_QDomProcessingInstruction_QTypeInfo_isLarge();
        isPointer = qtd_QDomProcessingInstruction_QTypeInfo_isPointer();
        isDummy = qtd_QDomProcessingInstruction_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QDomProcessingInstruction_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QDomProcessingInstruction_native_copy(const void* orig);
extern (C) void qtd_QDomProcessingInstruction_delete(void *ptr);
extern (C) void qtd_QDomProcessingInstruction_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QDomProcessingInstruction_QDomProcessingInstruction();
private extern(C) void* qtd_QDomProcessingInstruction_QDomProcessingInstruction_QDomProcessingInstruction(void* x0);
private extern(C) void  qtd_QDomProcessingInstruction_data_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QDomProcessingInstruction_setData_string(void* __this_nativeId,
 string d0);
private extern(C) void  qtd_QDomProcessingInstruction_target_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QDomProcessingInstruction() {
    QDomProcessingInstruction.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QDomProcessingInstruction_QTypeInfo_isComplex();
private extern (C) bool qtd_QDomProcessingInstruction_QTypeInfo_isStatic();
private extern (C) bool qtd_QDomProcessingInstruction_QTypeInfo_isLarge();
private extern (C) bool qtd_QDomProcessingInstruction_QTypeInfo_isPointer();
private extern (C) bool qtd_QDomProcessingInstruction_QTypeInfo_isDummy();
