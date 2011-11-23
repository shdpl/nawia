module qt.gui.QCursor;

public import qt.gui.QCursor_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.Qt;
public import qt.gui.QBitmap;
public import qt.gui.QPixmap;
public import qt.core.QVariant;
public import qt.core.QDataStream;
public import qt.core.QPoint;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QCursor : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QCursor_QCursor();
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(Qt.CursorShape shape) {
        void* ret = qtd_QCursor_QCursor_CursorShape(shape);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QBitmap) bitmap, const(QBitmap) mask, int hotX = -1, int hotY = -1) {
        void* ret = qtd_QCursor_QCursor_QBitmap_QBitmap_int_int(bitmap is null ? null : (cast(QBitmap)bitmap).qtdNativeId, mask is null ? null : (cast(QBitmap)mask).qtdNativeId, hotX, hotY);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QCursor) cursor) {
        void* ret = qtd_QCursor_QCursor_QCursor(cursor is null ? null : (cast(QCursor)cursor).qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QPixmap) pixmap, int hotX = -1, int hotY = -1) {
        void* ret = qtd_QCursor_QCursor_QPixmap_int_int(pixmap is null ? null : (cast(QPixmap)pixmap).qtdNativeId, hotX, hotY);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QBitmap bitmap() const {
        void* ret = qtd_QCursor_bitmap_const(qtdNativeId);
        QBitmap __d_return_value = new QBitmap(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final QPoint hotSpot() const {
        QPoint res;
        qtd_QCursor_hotSpot_const(qtdNativeId, &res);
        return res;
    }

    public final QBitmap mask() const {
        void* ret = qtd_QCursor_mask_const(qtdNativeId);
        QBitmap __d_return_value = new QBitmap(ret, QtdObjectInitFlags.nativeOwnership);
        return __d_return_value;
    }

    public final QVariant operator_cast_QVariant() const {
        void* ret = qtd_QCursor_operator_cast_QVariant_const(qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final void writeTo(QDataStream outS) {
        qtd_QCursor_writeTo_QDataStream(qtdNativeId, outS is null ? null : outS.qtdNativeId);
    }

    public final void readFrom(QDataStream inS) {
        qtd_QCursor_readFrom_QDataStream(qtdNativeId, inS is null ? null : inS.qtdNativeId);
    }

    public final QPixmap pixmap() const {
        void* ret = qtd_QCursor_pixmap_const(qtdNativeId);
        QPixmap __d_return_value = new QPixmap(ret);
        return __d_return_value;
    }

    public final void setShape(Qt.CursorShape newShape) {
        qtd_QCursor_setShape_CursorShape(qtdNativeId, newShape);
    }

    public final Qt.CursorShape shape() const {
        return cast(Qt.CursorShape) qtd_QCursor_shape_const(qtdNativeId);
    }

    public static QPoint pos() {
        QPoint res;
        qtd_QCursor_pos(&res);
        return res;
    }

    public static void setPos(const(QPoint) p) {
        qtd_QCursor_setPos_QPoint(p);
    }

    public static void setPos(int x, int y) {
        qtd_QCursor_setPos_int_int(x, y);
    }
// Field accessors
    public alias void __isValueType;

    public alias void __isQtType_QCursor;

    static void* __constructNativeCopy(const void* orig) {
        return qtd_QCursor_native_copy(orig);
    }

    static void __constructPlacedNativeCopy(const void* orig, void* place) {
        qtd_QCursor_placed_copy(orig, place);
    }


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QCursor_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QCursor_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QCursor_destroy(nativeId);
    }

    struct QTypeInfo {
        static __gshared bool isComplex;
        static __gshared bool isStatic;
        static __gshared bool isLarge;
        static __gshared bool isPointer;
        static __gshared bool isDummy;

        static init() {
        isComplex = qtd_QCursor_QTypeInfo_isComplex();
        isStatic = qtd_QCursor_QTypeInfo_isStatic();
        isLarge = qtd_QCursor_QTypeInfo_isLarge();
        isPointer = qtd_QCursor_QTypeInfo_isPointer();
        isDummy = qtd_QCursor_QTypeInfo_isDummy();
        }
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
private extern(C) void qtd_QCursor_placed_copy(const void* orig, void* place);
private extern(C) void* qtd_QCursor_native_copy(const void* orig);
extern (C) void qtd_QCursor_delete(void *ptr);
extern (C) void qtd_QCursor_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QCursor_QCursor();
private extern(C) void* qtd_QCursor_QCursor_CursorShape(int shape0);
private extern(C) void* qtd_QCursor_QCursor_QBitmap_QBitmap_int_int(void* bitmap0,
 void* mask1,
 int hotX2,
 int hotY3);
private extern(C) void* qtd_QCursor_QCursor_QCursor(void* cursor0);
private extern(C) void* qtd_QCursor_QCursor_QPixmap_int_int(void* pixmap0,
 int hotX1,
 int hotY2);
private extern(C) void*  qtd_QCursor_bitmap_const(void* __this_nativeId);
private extern(C) void  qtd_QCursor_hotSpot_const(void* __this_nativeId,
 QPoint * __d_return_value);
private extern(C) void*  qtd_QCursor_mask_const(void* __this_nativeId);
private extern(C) void*  qtd_QCursor_operator_cast_QVariant_const(void* __this_nativeId);
private extern(C) void  qtd_QCursor_writeTo_QDataStream(void* __this_nativeId,
 void* outS0);
private extern(C) void  qtd_QCursor_readFrom_QDataStream(void* __this_nativeId,
 void* inS0);
private extern(C) void*  qtd_QCursor_pixmap_const(void* __this_nativeId);
private extern(C) void  qtd_QCursor_setShape_CursorShape(void* __this_nativeId,
 int newShape0);
private extern(C) int  qtd_QCursor_shape_const(void* __this_nativeId);
private extern(C) void  qtd_QCursor_pos(QPoint * __d_return_value);
private extern(C) void  qtd_QCursor_setPos_QPoint(QPoint p0);
private extern(C) void  qtd_QCursor_setPos_int_int(int x0,
 int y1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C) void static_init_QCursor() {
    QCursor.QTypeInfo.init();
}

// signal handlers

private extern (C) bool qtd_QCursor_QTypeInfo_isComplex();
private extern (C) bool qtd_QCursor_QTypeInfo_isStatic();
private extern (C) bool qtd_QCursor_QTypeInfo_isLarge();
private extern (C) bool qtd_QCursor_QTypeInfo_isPointer();
private extern (C) bool qtd_QCursor_QTypeInfo_isDummy();
