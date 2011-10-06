module qt.gui.QGraphicsPolygonItem;

public import qt.gui.QGraphicsPolygonItem_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.gui.QGraphicsItem;
public import qt.core.Qt;
public import qt.gui.QPolygonF;
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


public class QGraphicsPolygonItem : QAbstractGraphicsShapeItem
{
    public enum enum_1 {
        Type = 5
    }

    alias enum_1.Type Type;


// Functions

    public this(IQGraphicsItem parent_ = null, QGraphicsScene scene = null) {
        void* ret = qtd_QGraphicsPolygonItem_QGraphicsPolygonItem_QGraphicsItem_QGraphicsScene(cast(void*) this, parent_ is null ? null : parent_.__ptr_IQGraphicsItem, scene is null ? null : scene.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QPolygonF) polygon, IQGraphicsItem parent_ = null, QGraphicsScene scene = null) {
        void* ret = qtd_QGraphicsPolygonItem_QGraphicsPolygonItem_QPolygonF_QGraphicsItem_QGraphicsScene(cast(void*) this, polygon is null ? null : (cast(QPolygonF)polygon).qtdNativeId, parent_ is null ? null : parent_.__ptr_IQGraphicsItem, scene is null ? null : scene.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final Qt.FillRule fillRule() const {
        return cast(Qt.FillRule) qtd_QGraphicsPolygonItem_fillRule_const(qtdNativeId);
    }

    public final QPolygonF polygon() const {
        void* ret = qtd_QGraphicsPolygonItem_polygon_const(qtdNativeId);
        QPolygonF __d_return_value = new QPolygonF(ret);
        return __d_return_value;
    }

    public final void setFillRule(Qt.FillRule rule) {
        qtd_QGraphicsPolygonItem_setFillRule_FillRule(qtdNativeId, rule);
    }

    public final void setPolygon(const(QPolygonF) polygon) {
        qtd_QGraphicsPolygonItem_setPolygon_QPolygonF(qtdNativeId, polygon is null ? null : (cast(QPolygonF)polygon).qtdNativeId);
    }

    public QRectF boundingRect() const {
        QRectF res;
        qtd_QGraphicsPolygonItem_boundingRect_const(qtdNativeId, &res);
        return res;
    }

    public bool contains(const(QPointF) point) const {
        return qtd_QGraphicsPolygonItem_contains_QPointF_const(qtdNativeId, point);
    }

    public QVariant extension(QVariant variant) const {
        void* ret = qtd_QGraphicsPolygonItem_extension_QVariant_const(qtdNativeId, variant is null ? null : variant.qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public bool isObscuredBy(IQGraphicsItem item) const {
        return qtd_QGraphicsPolygonItem_isObscuredBy_QGraphicsItem_const(qtdNativeId, item is null ? null : item.__ptr_IQGraphicsItem);
    }

    public QPainterPath opaqueArea() const {
        void* ret = qtd_QGraphicsPolygonItem_opaqueArea_const(qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public void paint(QPainter painter, QStyleOptionGraphicsItem option, QWidget widget = null) {
        qtd_QGraphicsPolygonItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget(qtdNativeId, painter is null ? null : painter.qtdNativeId, option is null ? null : (cast(QStyleOptionGraphicsItem)option).qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    public QPainterPath shape() const {
        void* ret = qtd_QGraphicsPolygonItem_shape_const(qtdNativeId);
        QPainterPath __d_return_value = new QPainterPath(ret);
        return __d_return_value;
    }

    public int type() const {
        return qtd_QGraphicsPolygonItem_type_const(qtdNativeId);
    }
// Field accessors
    static QGraphicsPolygonItem __getObject(void* nativeId) {
        return qtd_QGraphicsPolygonItem_from_ptr(nativeId);
    }

    public alias void __isQtType_QGraphicsPolygonItem;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QGraphicsPolygonItem_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QGraphicsPolygonItem_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QGraphicsPolygonItem_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

extern (C) void *__QGraphicsPolygonItem_entity(void *q_ptr);

QGraphicsPolygonItem qtd_QGraphicsPolygonItem_from_ptr(void* ret) {
    void* d_obj = __QGraphicsPolygonItem_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QGraphicsPolygonItem) d_obj_ref;
    } else {
        auto return_value = new QGraphicsPolygonItem(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QGraphicsPolygonItem_delete(void *ptr);
extern (C) void qtd_QGraphicsPolygonItem_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QGraphicsPolygonItem_QGraphicsPolygonItem_QGraphicsItem_QGraphicsScene(void *d_ptr,
 void* parent0,
 void* scene1);
private extern(C) void* qtd_QGraphicsPolygonItem_QGraphicsPolygonItem_QPolygonF_QGraphicsItem_QGraphicsScene(void *d_ptr,
 void* polygon0,
 void* parent1,
 void* scene2);
private extern(C) int  qtd_QGraphicsPolygonItem_fillRule_const(void* __this_nativeId);
private extern(C) void*  qtd_QGraphicsPolygonItem_polygon_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsPolygonItem_setFillRule_FillRule(void* __this_nativeId,
 int rule0);
private extern(C) void  qtd_QGraphicsPolygonItem_setPolygon_QPolygonF(void* __this_nativeId,
 void* polygon0);
private extern(C) void  qtd_QGraphicsPolygonItem_boundingRect_const(void* __this_nativeId,
 QRectF * __d_return_value);
private extern(C) bool  qtd_QGraphicsPolygonItem_contains_QPointF_const(void* __this_nativeId,
 QPointF point0);
private extern(C) void*  qtd_QGraphicsPolygonItem_extension_QVariant_const(void* __this_nativeId,
 void* variant0);
private extern(C) bool  qtd_QGraphicsPolygonItem_isObscuredBy_QGraphicsItem_const(void* __this_nativeId,
 void* item0);
private extern(C) void*  qtd_QGraphicsPolygonItem_opaqueArea_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsPolygonItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget(void* __this_nativeId,
 void* painter0,
 void* option1,
 void* widget2);
private extern(C) void*  qtd_QGraphicsPolygonItem_shape_const(void* __this_nativeId);
private extern(C) int  qtd_QGraphicsPolygonItem_type_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QGraphicsPolygonItem_initCallBacks(void* virtuals);

extern(C) void static_init_QGraphicsPolygonItem() {
    qtd_QGraphicsPolygonItem_initCallBacks(null);
}

// signal handlers

