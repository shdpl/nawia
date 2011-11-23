module qt.gui.QBitmap;

public import qt.gui.QBitmap_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QImage;
public import qt.gui.QPaintDevice;
public import qt.gui.QPaintEngine;
public import qt.gui.QTransform;
public import qt.gui.QMatrix;
public import qt.gui.QPixmap;
public import qt.core.QVariant;
public import qt.gui.QImage;
public import qt.core.QSize;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QBitmap : QPixmap
{

// Functions

    public this() {
        void* ret = qtd_QBitmap_QBitmap(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QPixmap) arg__1) {
        void* ret = qtd_QBitmap_QBitmap_QPixmap(cast(void*) this, arg__1 is null ? null : (cast(QPixmap)arg__1).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QSize) arg__1) {
        void* ret = qtd_QBitmap_QBitmap_QSize(cast(void*) this, arg__1);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    private this(string fileName, const(char*) format) {
        void* ret = qtd_QBitmap_QBitmap_string_nativepointerchar(cast(void*) this, fileName, format);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(int w, int h) {
        void* ret = qtd_QBitmap_QBitmap_int_int(cast(void*) this, w, h);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void clear() {
        qtd_QBitmap_clear(qtdNativeId);
    }

    public final QVariant operator_cast_QVariant() const {
        void* ret = qtd_QBitmap_operator_cast_QVariant_const(qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final QBitmap transformed(const(QMatrix) arg__1) const {
        void* ret = qtd_QBitmap_transformed_QMatrix_const(qtdNativeId, arg__1 is null ? null : (cast(QMatrix)arg__1).qtdNativeId);
        QBitmap __d_return_value = new QBitmap(ret);
        return __d_return_value;
    }

    public final QBitmap transformed(const(QTransform) matrix) const {
        void* ret = qtd_QBitmap_transformed_QTransform_const(qtdNativeId, matrix is null ? null : (cast(QTransform)matrix).qtdNativeId);
        QBitmap __d_return_value = new QBitmap(ret);
        return __d_return_value;
    }

    private static QBitmap fromData(const(QSize) size, const(ubyte*) bits, QImage.Format monoFormat) {
        void* ret = qtd_QBitmap_fromData_QSize_nativepointerubyte_Format(size, bits, monoFormat);
        QBitmap __d_return_value = new QBitmap(ret);
        return __d_return_value;
    }

    public static QBitmap fromImage(const(QImage) image, int flags = 0) {
        void* ret = qtd_QBitmap_fromImage_QImage_ImageConversionFlags(image is null ? null : (cast(QImage)image).qtdNativeId, flags);
        QBitmap __d_return_value = new QBitmap(ret);
        return __d_return_value;
    }
// Field accessors
    public alias void __isQtType_QBitmap;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QBitmap_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QBitmap_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QBitmap_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QBitmap_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QBitmap_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QBitmap_QTypeInfo_isComplex();
        isStatic = qtd_QBitmap_QTypeInfo_isStatic();
        isLarge = qtd_QBitmap_QTypeInfo_isLarge();
        isPointer = qtd_QBitmap_QTypeInfo_isPointer();
        isDummy = qtd_QBitmap_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    /*
    public QBitmap(String fileName, String format) {
    this(fileName, format == null ? null : qt.QNativePointer.createCharPointer(format));
    }

    public QBitmap(String fileName) {
    this(fileName, (String) null);
    }

    public static QBitmap fromData(qt.core.QSize size, byte bits[], QImage.Format monoFormat) {
    return fromData(size, qt.internal.QtJambiInternal.byteArrayToNativePointer(bits), monoFormat);
    }

    public static QBitmap fromData(qt.core.QSize size, byte bits[]) {
    return fromData(size, bits, QImage.Format.Format_MonoLSB);
    }
     */

}
private extern(C) void qtd_QBitmap_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QBitmap_native_copy(const void* orig);
extern (C) void qtd_QBitmap_delete(void *ptr);
extern (C) void qtd_QBitmap_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QBitmap_QBitmap(void *d_ptr);
private extern(C) void* qtd_QBitmap_QBitmap_QPixmap(void *d_ptr,
 void* arg__1);
private extern(C) void* qtd_QBitmap_QBitmap_QSize(void *d_ptr,
 QSize arg__1);
private extern(C) void* qtd_QBitmap_QBitmap_string_nativepointerchar(void *d_ptr,
 string fileName0,
 const (char*) format1);
private extern(C) void* qtd_QBitmap_QBitmap_int_int(void *d_ptr,
 int w0,
 int h1);
private extern(C) void  qtd_QBitmap_clear(void* __this_nativeId);
private extern(C) void*  qtd_QBitmap_operator_cast_QVariant_const(void* __this_nativeId);
private extern(C) void*  qtd_QBitmap_transformed_QMatrix_const(void* __this_nativeId,
 void* arg__1);
private extern(C) void*  qtd_QBitmap_transformed_QTransform_const(void* __this_nativeId,
 void* matrix0);
private extern(C) void*  qtd_QBitmap_fromData_QSize_nativepointerubyte_Format(QSize size0,
 const (ubyte*) bits1,
 int monoFormat2);
private extern(C) void*  qtd_QBitmap_fromImage_QImage_ImageConversionFlags(void* image0,
 int flags1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QBitmap_initCallBacks(void* virtuals);

extern(C) void static_init_QBitmap() {
    QBitmap.QTypeInfo.init();
    qtd_QBitmap_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QBitmap_QTypeInfo_isComplex();
private extern (C) bool qtd_QBitmap_QTypeInfo_isStatic();
private extern (C) bool qtd_QBitmap_QTypeInfo_isLarge();
private extern (C) bool qtd_QBitmap_QTypeInfo_isPointer();
private extern (C) bool qtd_QBitmap_QTypeInfo_isDummy();
