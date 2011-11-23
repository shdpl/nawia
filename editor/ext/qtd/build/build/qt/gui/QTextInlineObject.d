module qt.gui.QTextInlineObject;

public import qt.gui.QTextInlineObject_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.core.QRectF;
public import qt.gui.QTextFormat;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTextInlineObject : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QTextInlineObject_QTextInlineObject();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final double ascent() const {
        return qtd_QTextInlineObject_ascent_const(qtdNativeId);
    }

    public final double descent() const {
        return qtd_QTextInlineObject_descent_const(qtdNativeId);
    }

    public final QTextFormat format() const {
        void* ret = qtd_QTextInlineObject_format_const(qtdNativeId);
        QTextFormat __d_return_value = new QTextFormat(ret);
        return __d_return_value;
    }

    public final int formatIndex() const {
        return qtd_QTextInlineObject_formatIndex_const(qtdNativeId);
    }

    public final double height() const {
        return qtd_QTextInlineObject_height_const(qtdNativeId);
    }

    public final bool isValid() const {
        return qtd_QTextInlineObject_isValid_const(qtdNativeId);
    }

    public final QRectF rect() const {
        QRectF res;
        qtd_QTextInlineObject_rect_const(qtdNativeId, &res);
        return res;
    }

    public final void setAscent(double a) {
        qtd_QTextInlineObject_setAscent_double(qtdNativeId, a);
    }

    public final void setDescent(double d) {
        qtd_QTextInlineObject_setDescent_double(qtdNativeId, d);
    }

    public final void setWidth(double w) {
        qtd_QTextInlineObject_setWidth_double(qtdNativeId, w);
    }

    public final Qt.LayoutDirection textDirection() const {
        return cast(Qt.LayoutDirection) qtd_QTextInlineObject_textDirection_const(qtdNativeId);
    }

    public final int textPosition() const {
        return qtd_QTextInlineObject_textPosition_const(qtdNativeId);
    }

    public final double width() const {
        return qtd_QTextInlineObject_width_const(qtdNativeId);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QTextInlineObject;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QTextInlineObject_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QTextInlineObject_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTextInlineObject_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTextInlineObject_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTextInlineObject_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QTextInlineObject_QTypeInfo_isComplex();
        isStatic = qtd_QTextInlineObject_QTypeInfo_isStatic();
        isLarge = qtd_QTextInlineObject_QTypeInfo_isLarge();
        isPointer = qtd_QTextInlineObject_QTypeInfo_isPointer();
        isDummy = qtd_QTextInlineObject_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QTextInlineObject_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QTextInlineObject_native_copy(const void* orig);
extern (C) void qtd_QTextInlineObject_delete(void *ptr);
extern (C) void qtd_QTextInlineObject_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextInlineObject_QTextInlineObject();
private extern(C) double  qtd_QTextInlineObject_ascent_const(void* __this_nativeId);
private extern(C) double  qtd_QTextInlineObject_descent_const(void* __this_nativeId);
private extern(C) void*  qtd_QTextInlineObject_format_const(void* __this_nativeId);
private extern(C) int  qtd_QTextInlineObject_formatIndex_const(void* __this_nativeId);
private extern(C) double  qtd_QTextInlineObject_height_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextInlineObject_isValid_const(void* __this_nativeId);
private extern(C) void  qtd_QTextInlineObject_rect_const(void* __this_nativeId,
 QRectF * __d_return_value);
private extern(C) void  qtd_QTextInlineObject_setAscent_double(void* __this_nativeId,
 double a0);
private extern(C) void  qtd_QTextInlineObject_setDescent_double(void* __this_nativeId,
 double d0);
private extern(C) void  qtd_QTextInlineObject_setWidth_double(void* __this_nativeId,
 double w0);
private extern(C) int  qtd_QTextInlineObject_textDirection_const(void* __this_nativeId);
private extern(C) int  qtd_QTextInlineObject_textPosition_const(void* __this_nativeId);
private extern(C) double  qtd_QTextInlineObject_width_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QTextInlineObject() {
    QTextInlineObject.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QTextInlineObject_QTypeInfo_isComplex();
private extern (C) bool qtd_QTextInlineObject_QTypeInfo_isStatic();
private extern (C) bool qtd_QTextInlineObject_QTypeInfo_isLarge();
private extern (C) bool qtd_QTextInlineObject_QTypeInfo_isPointer();
private extern (C) bool qtd_QTextInlineObject_QTypeInfo_isDummy();
