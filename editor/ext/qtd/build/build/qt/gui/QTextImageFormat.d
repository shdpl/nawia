module qt.gui.QTextImageFormat;

public import qt.gui.QTextImageFormat_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QTextCharFormat;
public import qt.gui.QTextFormat;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTextImageFormat : QTextCharFormat
{

// Functions

    public this() {
        void* ret = qtd_QTextImageFormat_QTextImageFormat();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(const(QTextFormat) format) {
        void* ret = qtd_QTextImageFormat_QTextImageFormat_QTextFormat(format is null ? null : (cast(QTextFormat)format).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final double height() const {
        return qtd_QTextImageFormat_height_const(qtdNativeId);
    }

    public final bool isValid() const {
        return qtd_QTextImageFormat_isValid_const(qtdNativeId);
    }

    public final string name() const {
        string res;
        qtd_QTextImageFormat_name_const(qtdNativeId, &res);
        return res;
    }

    public final void setHeight(double height) {
        qtd_QTextImageFormat_setHeight_double(qtdNativeId, height);
    }

    public final void setName(string name) {
        qtd_QTextImageFormat_setName_string(qtdNativeId, name);
    }

    public final void setWidth(double width) {
        qtd_QTextImageFormat_setWidth_double(qtdNativeId, width);
    }

    public final double width() const {
        return qtd_QTextImageFormat_width_const(qtdNativeId);
    }
// Field accessors
    public alias void __isQtType_QTextImageFormat;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QTextImageFormat_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QTextImageFormat_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QTextImageFormat_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QTextImageFormat_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QTextImageFormat_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QTextImageFormat_QTypeInfo_isComplex();
        isStatic = qtd_QTextImageFormat_QTypeInfo_isStatic();
        isLarge = qtd_QTextImageFormat_QTypeInfo_isLarge();
        isPointer = qtd_QTextImageFormat_QTypeInfo_isPointer();
        isDummy = qtd_QTextImageFormat_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QTextImageFormat_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QTextImageFormat_native_copy(const void* orig);
extern (C) void qtd_QTextImageFormat_delete(void *ptr);
extern (C) void qtd_QTextImageFormat_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTextImageFormat_QTextImageFormat();
private extern(C) void* qtd_QTextImageFormat_QTextImageFormat_QTextFormat(void* format0);
private extern(C) double  qtd_QTextImageFormat_height_const(void* __this_nativeId);
private extern(C) bool  qtd_QTextImageFormat_isValid_const(void* __this_nativeId);
private extern(C) void  qtd_QTextImageFormat_name_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QTextImageFormat_setHeight_double(void* __this_nativeId,
 double height0);
private extern(C) void  qtd_QTextImageFormat_setName_string(void* __this_nativeId,
 string name0);
private extern(C) void  qtd_QTextImageFormat_setWidth_double(void* __this_nativeId,
 double width0);
private extern(C) double  qtd_QTextImageFormat_width_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QTextImageFormat_initCallBacks(void* virtuals);

extern(C) void static_init_QTextImageFormat() {
    QTextImageFormat.QTypeInfo.init();
    qtd_QTextImageFormat_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QTextImageFormat_QTypeInfo_isComplex();
private extern (C) bool qtd_QTextImageFormat_QTypeInfo_isStatic();
private extern (C) bool qtd_QTextImageFormat_QTypeInfo_isLarge();
private extern (C) bool qtd_QTextImageFormat_QTypeInfo_isPointer();
private extern (C) bool qtd_QTextImageFormat_QTypeInfo_isDummy();
