module qt.gui.QGraphicsPathItem;

public import qt.gui.QGraphicsPathItem_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QGraphicsItem;
public import qt.core.Qt;
public import qt.core.QRectF;
public import qt.gui.QGraphicsSceneContextMenuEvent;
public import qt.gui.QAbstractGraphicsShapeItem;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QPainterPath;
public import qt.gui.QPainter;
public import qt.gui.QGraphicsSceneWheelEvent;
public import qt.gui.QFocusEvent;
public import qt.gui.QGraphicsSceneMouseEvent;
public import qt.gui.QKeyEvent;
public import qt.gui.QWidget;
public import qt.gui.QGraphicsSceneDragDropEvent;
public import qt.core.QEvent;
public import qt.gui.QGraphicsSceneHoverEvent;
public import qt.core.QPointF;
public import qt.core.QVariant;
public import qt.gui.QStyleOptionGraphicsItem;
public import qt.gui.QGraphicsItem;
public import qt.gui.QGraphicsScene;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QGraphicsPathItem : QAbstractGraphicsShapeItem
{
    public enum enum_1 {
        Type = 2
    }

    alias enum_1.Type Type;


// Functions

    public this(IQGraphicsItem parent_ = null, QGraphicsScene scene = null) {
        void* ret = qtd_QGraphicsPathItem_QGraphicsPathItem_QGraphicsItem_QGraphicsScene(cast(void*) this, parent_ is null ? null : parent_.__ptr_IQGraphicsItem, scene is null ? null : scene.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QPainterPath) path, IQGraphicsItem parent_ = null, QGraphicsScene scene = null) {
        void* ret = qtd_QGraphicsPathItem_QGraphicsPathItem_QPainterPath_QGraphicsItem_QGraphicsScene(cast(void*) this, path is null ? null : (cast(QPainterPath)path).qtdNativeId, parent_ is null ? null : parent_.__ptr_IQGraphicsItem, scene is null ? null : scene.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QPainterPath path() const {
        void* ret = qtd_QGraphicsPathItem_path_const(qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public final void setPath(const(QPainterPath) path) {
        qtd_QGraphicsPathItem_setPath_QPainterPath(qtdNativeId, path is null ? null : (cast(QPainterPath)path).qtdNativeId);
    }

    public QRectF boundingRect() const {
        QRectF res;
        qtd_QGraphicsPathItem_boundingRect_const(qtdNativeId, &res);
        return res;
    }

    public bool contains(const(QPointF) point) const {
        return qtd_QGraphicsPathItem_contains_QPointF_const(qtdNativeId, point);
    }

    public QVariant extension(QVariant variant) const {
        void* ret = qtd_QGraphicsPathItem_extension_QVariant_const(qtdNativeId, variant is null ? null : variant.qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public bool isObscuredBy(IQGraphicsItem item) const {
        return qtd_QGraphicsPathItem_isObscuredBy_QGraphicsItem_const(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem);
    }

    public QPainterPath opaqueArea() const {
        void* ret = qtd_QGraphicsPathItem_opaqueArea_const(qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public void paint(QPainter painter, QStyleOptionGraphicsItem option, QWidget widget = null) {
        qtd_QGraphicsPathItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget(qtdNativeId, painter is null ? null : painter.qtdNativeId, option is null ? null : (cast(QStyleOptionGraphicsItem)option).qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    public QPainterPath shape() const {
        void* ret = qtd_QGraphicsPathItem_shape_const(qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public int type() const {
        return qtd_QGraphicsPathItem_type_const(qtdNativeId);
    }
// Field accessors
    static QGraphicsPathItem __getObject(void* nativeId) {
        return qtd_QGraphicsPathItem_from_ptr(nativeId);
    }

    public alias void __isQtType_QGraphicsPathItem;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QGraphicsPathItem_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QGraphicsPathItem_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QGraphicsPathItem_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QGraphicsPathItem_entity(void *q_ptr);

QGraphicsPathItem qtd_QGraphicsPathItem_from_ptr(void* ret) {
    void* d_obj = __QGraphicsPathItem_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QGraphicsPathItem) d_obj_ref;
    } else {
        auto return_value = new QGraphicsPathItem(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QGraphicsPathItem_delete(void *ptr);
extern (C) void qtd_QGraphicsPathItem_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QGraphicsPathItem_QGraphicsPathItem_QGraphicsItem_QGraphicsScene(void *d_ptr,
 void* parent0,
 void* scene1);
private extern(C) void* qtd_QGraphicsPathItem_QGraphicsPathItem_QPainterPath_QGraphicsItem_QGraphicsScene(void *d_ptr,
 void* path0,
 void* parent1,
 void* scene2);
private extern(C) void*  qtd_QGraphicsPathItem_path_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsPathItem_setPath_QPainterPath(void* __this_nativeId,
 void* path0);
private extern(C) void  qtd_QGraphicsPathItem_boundingRect_const(void* __this_nativeId,
 QRectF * __d_return_value);
private extern(C) bool  qtd_QGraphicsPathItem_contains_QPointF_const(void* __this_nativeId,
 QPointF point0);
private extern(C) void*  qtd_QGraphicsPathItem_extension_QVariant_const(void* __this_nativeId,
 void* variant0);
private extern(C) bool  qtd_QGraphicsPathItem_isObscuredBy_QGraphicsItem_const(void* __this_nativeId,
 void* item0);
private extern(C) void*  qtd_QGraphicsPathItem_opaqueArea_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsPathItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget(void* __this_nativeId,
 void* painter0,
 void* option1,
 void* widget2);
private extern(C) void*  qtd_QGraphicsPathItem_shape_const(void* __this_nativeId);
private extern(C) int  qtd_QGraphicsPathItem_type_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QGraphicsPathItem_initCallBacks(void* virtuals);

extern(C) void static_init_QGraphicsPathItem() {
    qtd_QGraphicsPathItem_initCallBacks(null);
}

// signal handlers

