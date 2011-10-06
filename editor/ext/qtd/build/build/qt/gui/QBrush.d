module qt.gui.QBrush;

public import qt.gui.QBrush_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.gui.QColor;
public import qt.gui.QGradient;
public import qt.gui.QTransform;
public import qt.gui.QMatrix;
public import qt.gui.QPixmap;
public import qt.gui.QImage;
public import qt.core.QVariant;
public import qt.core.QDataStream;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QBrush : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QBrush_QBrush();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(Qt.BrushStyle bs) {
        void* ret = qtd_QBrush_QBrush_BrushStyle(bs);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(Qt.GlobalColor color, Qt.BrushStyle bs = Qt.BrushStyle.SolidPattern) {
        void* ret = qtd_QBrush_QBrush_GlobalColor_BrushStyle(color, bs);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(Qt.GlobalColor color, const(QPixmap) pixmap) {
        void* ret = qtd_QBrush_QBrush_GlobalColor_QPixmap(color, pixmap is null ? null : (cast(QPixmap)pixmap).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QBrush) brush) {
        void* ret = qtd_QBrush_QBrush_QBrush(brush is null ? null : (cast(QBrush)brush).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QColor) color, Qt.BrushStyle bs = Qt.BrushStyle.SolidPattern) {
        void* ret = qtd_QBrush_QBrush_QColor_BrushStyle(color is null ? null : (cast(QColor)color).qtdNativeId, bs);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QColor) color, const(QPixmap) pixmap) {
        void* ret = qtd_QBrush_QBrush_QColor_QPixmap(color is null ? null : (cast(QColor)color).qtdNativeId, pixmap is null ? null : (cast(QPixmap)pixmap).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QGradient) gradient) {
        void* ret = qtd_QBrush_QBrush_QGradient((cast(QGradient)gradient).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QImage) image) {
        void* ret = qtd_QBrush_QBrush_QImage(image is null ? null : (cast(QImage)image).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QPixmap) pixmap) {
        void* ret = qtd_QBrush_QBrush_QPixmap(pixmap is null ? null : (cast(QPixmap)pixmap).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final const(QColor) color() const {
        void* ret = qtd_QBrush_color_const(qtdNativeId);
        const(QColor) __d_return_value = new QColor(ret);
        return __d_return_value;
    }

    public final bool isOpaque() const {
        return qtd_QBrush_isOpaque_const(qtdNativeId);
    }

    public final const(QMatrix) matrix() const {
        void* ret = qtd_QBrush_matrix_const(qtdNativeId);
        const(QMatrix) __d_return_value = new QMatrix(ret);
        return __d_return_value;
    }

    public final QVariant operator_cast_QVariant() const {
        void* ret = qtd_QBrush_operator_cast_QVariant_const(qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final void writeTo(QDataStream arg__1) {
        qtd_QBrush_writeTo_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    private final bool operator_equal(const(QBrush) b) const {
        return qtd_QBrush_operator_equal_QBrush_const(qtdNativeId, b is null ? null : (cast(QBrush)b).qtdNativeId);
    }

    public final void readFrom(QDataStream arg__1) {
        qtd_QBrush_readFrom_QDataStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final void setColor(Qt.GlobalColor color) {
        qtd_QBrush_setColor_GlobalColor(qtdNativeId, color);
    }

    public final void setColor(const(QColor) color) {
        qtd_QBrush_setColor_QColor(qtdNativeId, color is null ? null : (cast(QColor)color).qtdNativeId);
    }

    public final void setMatrix(const(QMatrix) mat) {
        qtd_QBrush_setMatrix_QMatrix(qtdNativeId, mat is null ? null : (cast(QMatrix)mat).qtdNativeId);
    }

    public final void setStyle(Qt.BrushStyle arg__1) {
        qtd_QBrush_setStyle_BrushStyle(qtdNativeId, arg__1);
    }

    public final void setTexture(const(QPixmap) pixmap) {
        qtd_QBrush_setTexture_QPixmap(qtdNativeId, pixmap is null ? null : (cast(QPixmap)pixmap).qtdNativeId);
    }

    public final void setTextureImage(const(QImage) image) {
        qtd_QBrush_setTextureImage_QImage(qtdNativeId, image is null ? null : (cast(QImage)image).qtdNativeId);
    }

    public final void setTransform(const(QTransform) arg__1) {
        qtd_QBrush_setTransform_QTransform(qtdNativeId, arg__1 is null ? null : (cast(QTransform)arg__1).qtdNativeId);
    }

    public final Qt.BrushStyle style() const {
        return cast(Qt.BrushStyle) qtd_QBrush_style_const(qtdNativeId);
    }

    public final QPixmap texture() const {
        void* ret = qtd_QBrush_texture_const(qtdNativeId);
        QPixmap __d_return_value = new QPixmap(ret);
        return __d_return_value;
    }

    public final QImage textureImage() const {
        void* ret = qtd_QBrush_textureImage_const(qtdNativeId);
        QImage __d_return_value = new QImage(ret);
        return __d_return_value;
    }

    public final QTransform transform() const {
        void* ret = qtd_QBrush_transform_const(qtdNativeId);
        QTransform __d_return_value = new QTransform(ret);
        return __d_return_value;
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QBrush;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QBrush_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QBrush_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QBrush_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QBrush_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QBrush_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QBrush_QTypeInfo_isComplex();
        isStatic = qtd_QBrush_QTypeInfo_isStatic();
        isLarge = qtd_QBrush_QTypeInfo_isLarge();
        isPointer = qtd_QBrush_QTypeInfo_isPointer();
        isDummy = qtd_QBrush_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    /*
    public static final QBrush NoBrush = new QBrush(qt.core.Qt.BrushStyle.NoBrush);
     */

}
private extern(C) void qtd_QBrush_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QBrush_native_copy(const void* orig);
extern (C) void qtd_QBrush_delete(void *ptr);
extern (C) void qtd_QBrush_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QBrush_QBrush();
private extern(C) void* qtd_QBrush_QBrush_BrushStyle(int bs0);
private extern(C) void* qtd_QBrush_QBrush_GlobalColor_BrushStyle(int color0,
 int bs1);
private extern(C) void* qtd_QBrush_QBrush_GlobalColor_QPixmap(int color0,
 void* pixmap1);
private extern(C) void* qtd_QBrush_QBrush_QBrush(void* brush0);
private extern(C) void* qtd_QBrush_QBrush_QColor_BrushStyle(void* color0,
 int bs1);
private extern(C) void* qtd_QBrush_QBrush_QColor_QPixmap(void* color0,
 void* pixmap1);
private extern(C) void* qtd_QBrush_QBrush_QGradient(void* gradient0);
private extern(C) void* qtd_QBrush_QBrush_QImage(void* image0);
private extern(C) void* qtd_QBrush_QBrush_QPixmap(void* pixmap0);
private extern(C) void*  qtd_QBrush_color_const(void* __this_nativeId);
private extern(C) bool  qtd_QBrush_isOpaque_const(void* __this_nativeId);
private extern(C) void*  qtd_QBrush_matrix_const(void* __this_nativeId);
private extern(C) void*  qtd_QBrush_operator_cast_QVariant_const(void* __this_nativeId);
private extern(C) void  qtd_QBrush_writeTo_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QBrush_operator_equal_QBrush_const(void* __this_nativeId,
 void* b0);
private extern(C) void  qtd_QBrush_readFrom_QDataStream(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QBrush_setColor_GlobalColor(void* __this_nativeId,
 int color0);
private extern(C) void  qtd_QBrush_setColor_QColor(void* __this_nativeId,
 void* color0);
private extern(C) void  qtd_QBrush_setMatrix_QMatrix(void* __this_nativeId,
 void* mat0);
private extern(C) void  qtd_QBrush_setStyle_BrushStyle(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QBrush_setTexture_QPixmap(void* __this_nativeId,
 void* pixmap0);
private extern(C) void  qtd_QBrush_setTextureImage_QImage(void* __this_nativeId,
 void* image0);
private extern(C) void  qtd_QBrush_setTransform_QTransform(void* __this_nativeId,
 void* arg__1);
private extern(C) int  qtd_QBrush_style_const(void* __this_nativeId);
private extern(C) void*  qtd_QBrush_texture_const(void* __this_nativeId);
private extern(C) void*  qtd_QBrush_textureImage_const(void* __this_nativeId);
private extern(C) void*  qtd_QBrush_transform_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QBrush() {
    QBrush.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QBrush_QTypeInfo_isComplex();
private extern (C) bool qtd_QBrush_QTypeInfo_isStatic();
private extern (C) bool qtd_QBrush_QTypeInfo_isLarge();
private extern (C) bool qtd_QBrush_QTypeInfo_isPointer();
private extern (C) bool qtd_QBrush_QTypeInfo_isDummy();
