module qt.gui.QStyleOptionGraphicsItem;

public import qt.gui.QStyleOptionGraphicsItem_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QStyleOption;
public import qt.core.QRectF;
public import qt.gui.QTransform;
public import qt.gui.QMatrix;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QStyleOptionGraphicsItem : QStyleOption
{
    public enum StyleOptionVersion {
        Version = 1
    }

    alias StyleOptionVersion.Version Version;

    public enum StyleOptionType {
        Type = 17
    }

    alias StyleOptionType.Type Type;


// Functions

    public this() {
        void* ret = qtd_QStyleOptionGraphicsItem_QStyleOptionGraphicsItem();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QStyleOptionGraphicsItem) other) {
        void* ret = qtd_QStyleOptionGraphicsItem_QStyleOptionGraphicsItem_QStyleOptionGraphicsItem(other is null ? null : (cast(QStyleOptionGraphicsItem)other).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected this(int version_) {
        void* ret = qtd_QStyleOptionGraphicsItem_QStyleOptionGraphicsItem_int(version_);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public static double levelOfDetailFromTransform(const(QTransform) worldTransform) {
        return qtd_QStyleOptionGraphicsItem_levelOfDetailFromTransform_QTransform(worldTransform is null ? null : (cast(QTransform)worldTransform).qtdNativeId);
    }
// Field accessors

    public final void setExposedRect(QRectF exposedRect) {
        qtd_QStyleOptionGraphicsItem_setExposedRect_QRectF(qtdNativeId, exposedRect);
    }

    public final QRectF exposedRect() {
        QRectF res;
        qtd_QStyleOptionGraphicsItem_exposedRect(qtdNativeId, &res);
        return res;
    }

    public final void setMatrix(QMatrix matrix) {
        qtd_QStyleOptionGraphicsItem_setMatrix_QMatrix(qtdNativeId, matrix is null ? null : matrix.qtdNativeId);
    }

    public final QMatrix matrix() {
        void* ret = qtd_QStyleOptionGraphicsItem_matrix(qtdNativeId);
        QMatrix __d_return_value = new QMatrix(ret);
        return __d_return_value;
    }

    public final void setLevelOfDetail(double levelOfDetail) {
        qtd_QStyleOptionGraphicsItem_setLevelOfDetail_double(qtdNativeId, levelOfDetail);
    }

    public final double levelOfDetail() {
        return qtd_QStyleOptionGraphicsItem_levelOfDetail(qtdNativeId);
    }
    public alias void __isQtType_QStyleOptionGraphicsItem;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QStyleOptionGraphicsItem_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QStyleOptionGraphicsItem_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QStyleOptionGraphicsItem_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QStyleOptionGraphicsItem_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QStyleOptionGraphicsItem_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QStyleOptionGraphicsItem_QTypeInfo_isComplex();
        isStatic = qtd_QStyleOptionGraphicsItem_QTypeInfo_isStatic();
        isLarge = qtd_QStyleOptionGraphicsItem_QTypeInfo_isLarge();
        isPointer = qtd_QStyleOptionGraphicsItem_QTypeInfo_isPointer();
        isDummy = qtd_QStyleOptionGraphicsItem_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QStyleOptionGraphicsItem_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QStyleOptionGraphicsItem_native_copy(const void* orig);
extern (C) void qtd_QStyleOptionGraphicsItem_delete(void *ptr);
extern (C) void qtd_QStyleOptionGraphicsItem_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStyleOptionGraphicsItem_QStyleOptionGraphicsItem();
private extern(C) void* qtd_QStyleOptionGraphicsItem_QStyleOptionGraphicsItem_QStyleOptionGraphicsItem(void* other0);
private extern(C) void* qtd_QStyleOptionGraphicsItem_QStyleOptionGraphicsItem_int(int version0);
private extern(C) double  qtd_QStyleOptionGraphicsItem_levelOfDetailFromTransform_QTransform(void* worldTransform0);
// Just the private functions for abstract functions implemeneted in superclasses
private extern(C) void  qtd_QStyleOptionGraphicsItem_setExposedRect_QRectF(void* __this_nativeId,
 QRectF exposedRect0);
private extern(C) void  qtd_QStyleOptionGraphicsItem_exposedRect(void* __this_nativeId,
 QRectF * __d_return_value);
private extern(C) void  qtd_QStyleOptionGraphicsItem_setMatrix_QMatrix(void* __this_nativeId,
 void* matrix0);
private extern(C) void*  qtd_QStyleOptionGraphicsItem_matrix(void* __this_nativeId);
private extern(C) void  qtd_QStyleOptionGraphicsItem_setLevelOfDetail_double(void* __this_nativeId,
 double levelOfDetail0);
private extern(C) double  qtd_QStyleOptionGraphicsItem_levelOfDetail(void* __this_nativeId);



// Virtual Dispatch functions
private extern (C) void qtd_QStyleOptionGraphicsItem_initCallBacks(void* virtuals);

extern(C) void static_init_QStyleOptionGraphicsItem() {
    QStyleOptionGraphicsItem.QTypeInfo.init();
    qtd_QStyleOptionGraphicsItem_initCallBacks(null);
}

// signal handlers

private extern (C) bool qtd_QStyleOptionGraphicsItem_QTypeInfo_isComplex();
private extern (C) bool qtd_QStyleOptionGraphicsItem_QTypeInfo_isStatic();
private extern (C) bool qtd_QStyleOptionGraphicsItem_QTypeInfo_isLarge();
private extern (C) bool qtd_QStyleOptionGraphicsItem_QTypeInfo_isPointer();
private extern (C) bool qtd_QStyleOptionGraphicsItem_QTypeInfo_isDummy();
