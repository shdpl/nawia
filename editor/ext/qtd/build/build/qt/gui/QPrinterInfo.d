module qt.gui.QPrinterInfo;

public import qt.gui.QPrinterInfo_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QPrinter;
public import qt.gui.QPrinter;
public import qt.core.QList;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QPrinterInfo : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QPrinterInfo_QPrinterInfo();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QPrinter printer) {
        void* ret = qtd_QPrinterInfo_QPrinterInfo_QPrinter(printer is null ? null : (cast(QPrinter)printer).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QPrinterInfo) src) {
        void* ret = qtd_QPrinterInfo_QPrinterInfo_QPrinterInfo(src is null ? null : (cast(QPrinterInfo)src).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool isDefault() const {
        return qtd_QPrinterInfo_isDefault_const(qtdNativeId);
    }

    public final bool isNull() const {
        return qtd_QPrinterInfo_isNull_const(qtdNativeId);
    }

    public final string printerName() const {
        string res;
        qtd_QPrinterInfo_printerName_const(qtdNativeId, &res);
        return res;
    }

    public final QList!(QPrinter.PageSize) supportedPaperSizes() const {
        auto res = QList!(QPrinter.PageSize).opCall();
        qtd_QPrinterInfo_supportedPaperSizes_const(qtdNativeId, &res);
        return res;
    }

    public static QList!(QPrinterInfo) availablePrinters() {
        auto res = QList!(QPrinterInfo).opCall();
        qtd_QPrinterInfo_availablePrinters(&res);
        return res;
    }

    public static QPrinterInfo defaultPrinter() {
        void* ret = qtd_QPrinterInfo_defaultPrinter();
        QPrinterInfo __d_return_value = new QPrinterInfo(ret);
        return __d_return_value;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QPrinterInfo;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QPrinterInfo_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QPrinterInfo_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QPrinterInfo_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QPrinterInfo_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QPrinterInfo_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QPrinterInfo_QTypeInfo_isComplex();
        isStatic = qtd_QPrinterInfo_QTypeInfo_isStatic();
        isLarge = qtd_QPrinterInfo_QTypeInfo_isLarge();
        isPointer = qtd_QPrinterInfo_QTypeInfo_isPointer();
        isDummy = qtd_QPrinterInfo_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QPrinterInfo_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QPrinterInfo_native_copy(const void* orig);
extern (C) void qtd_QPrinterInfo_delete(void *ptr);
extern (C) void qtd_QPrinterInfo_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QPrinterInfo_QPrinterInfo();
private extern(C) void* qtd_QPrinterInfo_QPrinterInfo_QPrinter(void* printer0);
private extern(C) void* qtd_QPrinterInfo_QPrinterInfo_QPrinterInfo(void* src0);
private extern(C) bool  qtd_QPrinterInfo_isDefault_const(void* __this_nativeId);
private extern(C) bool  qtd_QPrinterInfo_isNull_const(void* __this_nativeId);
private extern(C) void  qtd_QPrinterInfo_printerName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QPrinterInfo_supportedPaperSizes_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QPrinterInfo_availablePrinters(void* __d_return_value);
private extern(C) void*  qtd_QPrinterInfo_defaultPrinter();
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QPrinterInfo() {
    QPrinterInfo.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QPrinterInfo_QTypeInfo_isComplex();
private extern (C) bool qtd_QPrinterInfo_QTypeInfo_isStatic();
private extern (C) bool qtd_QPrinterInfo_QTypeInfo_isLarge();
private extern (C) bool qtd_QPrinterInfo_QTypeInfo_isPointer();
private extern (C) bool qtd_QPrinterInfo_QTypeInfo_isDummy();
