module qt.gui.QTextEdit_ExtraSelection;

public import qt.gui.QTextEdit_ExtraSelection_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QTextCharFormat;
public import qt.gui.QTextCursor;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTextEdit_ExtraSelection : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QTextEdit_ExtraSelection_QTextEdit_ExtraSelection();
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setCursor(QTextCursor cursor) {
        qtd_QTextEdit_ExtraSelection_setCursor_QTextCursor(qtdNativeId, cursor is null ? null : cursor.qtdNativeId);
    }

    public final QTextCursor cursor() {
        void* ret = qtd_QTextEdit_ExtraSelection_cursor(qtdNativeId);
        QTextCursor __d_return_value = new QTextCursor(ret);
        return __d_return_value;
    }

    public final void setFormat(QTextCharFormat format) {
        qtd_QTextEdit_ExtraSelection_setFormat_QTextCharFormat(qtdNativeId, format is null ? null : format.qtdNativeId);
    }

    public final QTextCharFormat format() {
        void* ret = qtd_QTextEdit_ExtraSelection_format(qtdNativeId);
        QTextCharFormat __d_return_value = new QTextCharFormat(ret);
        return __d_return_value;
    }
    public alias void __isValueType;

    public alias void __isQtType_QTextEdit_ExtraSelection;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QTextEdit_ExtraSelection_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QTextEdit_ExtraSelection_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTextEdit_ExtraSelection_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTextEdit_ExtraSelection_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTextEdit_ExtraSelection_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QTextEdit_ExtraSelection_QTypeInfo_isComplex();
        isStatic = qtd_QTextEdit_ExtraSelection_QTypeInfo_isStatic();
        isLarge = qtd_QTextEdit_ExtraSelection_QTypeInfo_isLarge();
        isPointer = qtd_QTextEdit_ExtraSelection_QTypeInfo_isPointer();
        isDummy = qtd_QTextEdit_ExtraSelection_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QTextEdit_ExtraSelection_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QTextEdit_ExtraSelection_native_copy(const void* orig);
extern (C) void qtd_QTextEdit_ExtraSelection_delete(void *ptr);
extern (C) void qtd_QTextEdit_ExtraSelection_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextEdit_ExtraSelection_QTextEdit_ExtraSelection();
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QTextEdit_ExtraSelection_setCursor_QTextCursor(void* __this_nativeId,
 void* cursor0);
private extern(C) void*  qtd_QTextEdit_ExtraSelection_cursor(void* __this_nativeId);
private extern(C) void  qtd_QTextEdit_ExtraSelection_setFormat_QTextCharFormat(void* __this_nativeId,
 void* format0);
private extern(C) void*  qtd_QTextEdit_ExtraSelection_format(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QTextEdit_ExtraSelection_initCallBacks(void* virtuals);

extern(C) void static_init_QTextEdit_ExtraSelection() {
    QTextEdit_ExtraSelection.QTypeInfo.init();
    qtd_QTextEdit_ExtraSelection_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QTextEdit_ExtraSelection_QTypeInfo_isComplex();
private extern (C) bool qtd_QTextEdit_ExtraSelection_QTypeInfo_isStatic();
private extern (C) bool qtd_QTextEdit_ExtraSelection_QTypeInfo_isLarge();
private extern (C) bool qtd_QTextEdit_ExtraSelection_QTypeInfo_isPointer();
private extern (C) bool qtd_QTextEdit_ExtraSelection_QTypeInfo_isDummy();
