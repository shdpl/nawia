module qt.gui.QAbstractTextDocumentLayout_PaintContext;

public import qt.gui.QAbstractTextDocumentLayout_PaintContext_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QRectF;
public import qt.gui.QPalette;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QAbstractTextDocumentLayout_PaintContext : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QAbstractTextDocumentLayout_PaintContext_QAbstractTextDocumentLayout_PaintContext();
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors

    public final void setPalette(QPalette palette) {
        qtd_QAbstractTextDocumentLayout_PaintContext_setPalette_QPalette(qtdNativeId, palette is null ? null : palette.qtdNativeId);
    }

    public final QPalette palette() {
        void* ret = qtd_QAbstractTextDocumentLayout_PaintContext_palette(qtdNativeId);
        QPalette __d_return_value = new QPalette(ret);
        return __d_return_value;
    }

    public final void setCursorPosition(int cursorPosition) {
        qtd_QAbstractTextDocumentLayout_PaintContext_setCursorPosition_int(qtdNativeId, cursorPosition);
    }

    public final int cursorPosition() {
        return qtd_QAbstractTextDocumentLayout_PaintContext_cursorPosition(qtdNativeId);
    }

    public final void setClip(QRectF clip) {
        qtd_QAbstractTextDocumentLayout_PaintContext_setClip_QRectF(qtdNativeId, clip);
    }

    public final QRectF clip() {
        QRectF res;
        qtd_QAbstractTextDocumentLayout_PaintContext_clip(qtdNativeId, &res);
        return res;
    }
    public alias void __isValueType;

    public alias void __isQtType_QAbstractTextDocumentLayout_PaintContext;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QAbstractTextDocumentLayout_PaintContext_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QAbstractTextDocumentLayout_PaintContext_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QAbstractTextDocumentLayout_PaintContext_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QAbstractTextDocumentLayout_PaintContext_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QAbstractTextDocumentLayout_PaintContext_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QAbstractTextDocumentLayout_PaintContext_QTypeInfo_isComplex();
        isStatic = qtd_QAbstractTextDocumentLayout_PaintContext_QTypeInfo_isStatic();
        isLarge = qtd_QAbstractTextDocumentLayout_PaintContext_QTypeInfo_isLarge();
        isPointer = qtd_QAbstractTextDocumentLayout_PaintContext_QTypeInfo_isPointer();
        isDummy = qtd_QAbstractTextDocumentLayout_PaintContext_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QAbstractTextDocumentLayout_PaintContext_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QAbstractTextDocumentLayout_PaintContext_native_copy(const void* orig);
extern (C) void qtd_QAbstractTextDocumentLayout_PaintContext_delete(void *ptr);
extern (C) void qtd_QAbstractTextDocumentLayout_PaintContext_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QAbstractTextDocumentLayout_PaintContext_QAbstractTextDocumentLayout_PaintContext();
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QAbstractTextDocumentLayout_PaintContext_setPalette_QPalette(void* __this_nativeId,
 void* palette0);
private extern(C) void*  qtd_QAbstractTextDocumentLayout_PaintContext_palette(void* __this_nativeId);
private extern(C) void  qtd_QAbstractTextDocumentLayout_PaintContext_setCursorPosition_int(void* __this_nativeId,
 int cursorPosition0);
private extern(C) int  qtd_QAbstractTextDocumentLayout_PaintContext_cursorPosition(void* __this_nativeId);
private extern(C) void  qtd_QAbstractTextDocumentLayout_PaintContext_setClip_QRectF(void* __this_nativeId,
 QRectF clip0);
private extern(C) void  qtd_QAbstractTextDocumentLayout_PaintContext_clip(void* __this_nativeId,
 QRectF * __d_return_value);



// Virtual Dispatch functions
private extern (C) void qtd_QAbstractTextDocumentLayout_PaintContext_initCallBacks(void* virtuals);

extern(C) void static_init_QAbstractTextDocumentLayout_PaintContext() {
    QAbstractTextDocumentLayout_PaintContext.QTypeInfo.init();
    qtd_QAbstractTextDocumentLayout_PaintContext_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QAbstractTextDocumentLayout_PaintContext_QTypeInfo_isComplex();
private extern (C) bool qtd_QAbstractTextDocumentLayout_PaintContext_QTypeInfo_isStatic();
private extern (C) bool qtd_QAbstractTextDocumentLayout_PaintContext_QTypeInfo_isLarge();
private extern (C) bool qtd_QAbstractTextDocumentLayout_PaintContext_QTypeInfo_isPointer();
private extern (C) bool qtd_QAbstractTextDocumentLayout_PaintContext_QTypeInfo_isDummy();
