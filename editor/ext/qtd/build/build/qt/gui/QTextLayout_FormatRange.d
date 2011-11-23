module qt.gui.QTextLayout_FormatRange;

public import qt.gui.QTextLayout_FormatRange_aux;
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


public class QTextLayout_FormatRange : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QTextLayout_FormatRange_QTextLayout_FormatRange();
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setFormat(QTextCharFormat format) {
        qtd_QTextLayout_FormatRange_setFormat_QTextCharFormat(qtdNativeId, format is null ? null : format.qtdNativeId);
    }

    public final QTextCharFormat format() {
        void* ret = qtd_QTextLayout_FormatRange_format(qtdNativeId);
        QTextCharFormat __d_return_value = new QTextCharFormat(ret);
        return __d_return_value;
    }

    public final void setLength(int length) {
        qtd_QTextLayout_FormatRange_setLength_int(qtdNativeId, length);
    }

    public final int length() {
        return qtd_QTextLayout_FormatRange_length(qtdNativeId);
    }

    public final void setStart(int start) {
        qtd_QTextLayout_FormatRange_setStart_int(qtdNativeId, start);
    }

    public final int start() {
        return qtd_QTextLayout_FormatRange_start(qtdNativeId);
    }
    public alias void __isValueType;

    public alias void __isQtType_QTextLayout_FormatRange;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QTextLayout_FormatRange_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QTextLayout_FormatRange_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTextLayout_FormatRange_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTextLayout_FormatRange_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTextLayout_FormatRange_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QTextLayout_FormatRange_QTypeInfo_isComplex();
        isStatic = qtd_QTextLayout_FormatRange_QTypeInfo_isStatic();
        isLarge = qtd_QTextLayout_FormatRange_QTypeInfo_isLarge();
        isPointer = qtd_QTextLayout_FormatRange_QTypeInfo_isPointer();
        isDummy = qtd_QTextLayout_FormatRange_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QTextLayout_FormatRange_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QTextLayout_FormatRange_native_copy(const void* orig);
extern (C) void qtd_QTextLayout_FormatRange_delete(void *ptr);
extern (C) void qtd_QTextLayout_FormatRange_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextLayout_FormatRange_QTextLayout_FormatRange();
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QTextLayout_FormatRange_setFormat_QTextCharFormat(void* __this_nativeId,
 void* format0);
private extern(C) void*  qtd_QTextLayout_FormatRange_format(void* __this_nativeId);
private extern(C) void  qtd_QTextLayout_FormatRange_setLength_int(void* __this_nativeId,
 int length0);
private extern(C) int  qtd_QTextLayout_FormatRange_length(void* __this_nativeId);
private extern(C) void  qtd_QTextLayout_FormatRange_setStart_int(void* __this_nativeId,
 int start0);
private extern(C) int  qtd_QTextLayout_FormatRange_start(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QTextLayout_FormatRange_initCallBacks(void* virtuals);

extern(C) void static_init_QTextLayout_FormatRange() {
    QTextLayout_FormatRange.QTypeInfo.init();
    qtd_QTextLayout_FormatRange_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QTextLayout_FormatRange_QTypeInfo_isComplex();
private extern (C) bool qtd_QTextLayout_FormatRange_QTypeInfo_isStatic();
private extern (C) bool qtd_QTextLayout_FormatRange_QTypeInfo_isLarge();
private extern (C) bool qtd_QTextLayout_FormatRange_QTypeInfo_isPointer();
private extern (C) bool qtd_QTextLayout_FormatRange_QTypeInfo_isDummy();
