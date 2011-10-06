module qt.gui.QGraphicsProxyWidget;

public import qt.gui.QGraphicsProxyWidget_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
public import qtd.MOC : Q_OBJECT;
import qtd.Signal;
import qt.core.QMetaObject;
import qtd.meta.Runtime;
import qt.core.QObject;
private import qt.gui.ArrayOps2;
// automatic imports-------------
public import qt.gui.QGraphicsItem;
public import qt.core.Qt;
public import qt.core.QSizeF;
public import qt.core.QRectF;
public import qt.gui.QGraphicsSceneContextMenuEvent;
public import qt.gui.QStyleOption;
public import qt.gui.QShowEvent;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QPainterPath;
public import qt.gui.QGraphicsSceneMoveEvent;
public import qt.gui.QPainter;
public import qt.gui.QGraphicsSceneWheelEvent;
public import qt.gui.QFocusEvent;
public import qt.gui.QGraphicsSceneMouseEvent;
public import qt.gui.QKeyEvent;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.gui.QGraphicsSceneDragDropEvent;
public import qt.core.QEvent;
public import qt.gui.QGraphicsSceneHoverEvent;
public import qt.core.QPointF;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.gui.QGraphicsSceneResizeEvent;
public import qt.gui.QHideEvent;
public import qt.gui.QGraphicsWidget;
public import qt.core.QTimerEvent;
public import qt.gui.QStyleOptionGraphicsItem;
public import qt.gui.QGraphicsItem;
public import qt.gui.QCloseEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QGraphicsProxyWidget : QGraphicsWidget
{
    public enum enum_1 {
        Type = 12
    }

    alias enum_1.Type Type;


    private static const string[] __signalSignatures = [    ];

    int signalSignature(int signalId, ref stringz signature) {
        signalId = super.signalSignature(signalId, signature);
        if (signature)
            return signalId;
        if (signalId < __signalSignatures.length)
            signature = __signalSignatures[signalId].ptr;
        else
            signalId -= __signalSignatures.length;
        return signalId;
    }
// Functions

    public this(IQGraphicsItem parent_ = null, int wFlags = 0) {
        void* ret = qtd_QGraphicsProxyWidget_QGraphicsProxyWidget_QGraphicsItem_WindowFlags(cast(void*) this, parent_ is null ? null : parent_.__ptr_IQGraphicsItem, wFlags);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QGraphicsProxyWidget createProxyForChildWidget(QWidget child) {
        void *ret = qtd_QGraphicsProxyWidget_createProxyForChildWidget_QWidget(qtdNativeId, child is null ? null : child.qtdNativeId);
        QGraphicsProxyWidget __d_return_value = QGraphicsProxyWidget.__getObject(ret);
        return __d_return_value;
    }

    protected final QGraphicsProxyWidget newProxyWidget(QWidget arg__1) {
        void *ret = qtd_QGraphicsProxyWidget_newProxyWidget_QWidget(qtdNativeId, arg__1 is null ? null : (cast(QWidget)arg__1).qtdNativeId);
        QGraphicsProxyWidget __d_return_value = QGraphicsProxyWidget.__getObject(ret);
        return __d_return_value;
    }

    public final void setWidget(QWidget widget) {
        qtd_QGraphicsProxyWidget_setWidget_QWidget(qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    public final QRectF subWidgetRect(QWidget widget) const {
        QRectF res;
        qtd_QGraphicsProxyWidget_subWidgetRect_QWidget_const(qtdNativeId, &res, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
        return res;
    }

    public final QWidget widget() const {
        void *ret = qtd_QGraphicsProxyWidget_widget_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public void contextMenuEvent(QGraphicsSceneContextMenuEvent event) {
        qtd_QGraphicsProxyWidget_contextMenuEvent_QGraphicsSceneContextMenuEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void dragEnterEvent(QGraphicsSceneDragDropEvent event) {
        qtd_QGraphicsProxyWidget_dragEnterEvent_QGraphicsSceneDragDropEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void dragLeaveEvent(QGraphicsSceneDragDropEvent event) {
        qtd_QGraphicsProxyWidget_dragLeaveEvent_QGraphicsSceneDragDropEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void dragMoveEvent(QGraphicsSceneDragDropEvent event) {
        qtd_QGraphicsProxyWidget_dragMoveEvent_QGraphicsSceneDragDropEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void dropEvent(QGraphicsSceneDragDropEvent event) {
        qtd_QGraphicsProxyWidget_dropEvent_QGraphicsSceneDragDropEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public bool event(QEvent event) {
        return qtd_QGraphicsProxyWidget_event_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public bool eventFilter(QObject object, QEvent event) {
        return qtd_QGraphicsProxyWidget_eventFilter_QObject_QEvent(qtdNativeId, object is null ? null : object.qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void focusInEvent(QFocusEvent event) {
        qtd_QGraphicsProxyWidget_focusInEvent_QFocusEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected bool focusNextPrevChild(bool next) {
        return qtd_QGraphicsProxyWidget_focusNextPrevChild_bool(qtdNativeId, next);
    }

    public void focusOutEvent(QFocusEvent event) {
        qtd_QGraphicsProxyWidget_focusOutEvent_QFocusEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void grabMouseEvent(QEvent event) {
        qtd_QGraphicsProxyWidget_grabMouseEvent_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void hideEvent(QHideEvent event) {
        qtd_QGraphicsProxyWidget_hideEvent_QHideEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void hoverEnterEvent(QGraphicsSceneHoverEvent event) {
        qtd_QGraphicsProxyWidget_hoverEnterEvent_QGraphicsSceneHoverEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void hoverLeaveEvent(QGraphicsSceneHoverEvent event) {
        qtd_QGraphicsProxyWidget_hoverLeaveEvent_QGraphicsSceneHoverEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void hoverMoveEvent(QGraphicsSceneHoverEvent event) {
        qtd_QGraphicsProxyWidget_hoverMoveEvent_QGraphicsSceneHoverEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public QVariant itemChange(QGraphicsItem.GraphicsItemChange change, QVariant value) {
        void* ret = qtd_QGraphicsProxyWidget_itemChange_GraphicsItemChange_QVariant(qtdNativeId, change, value is null ? null : value.qtdNativeId);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public void keyPressEvent(QKeyEvent event) {
        qtd_QGraphicsProxyWidget_keyPressEvent_QKeyEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void keyReleaseEvent(QKeyEvent event) {
        qtd_QGraphicsProxyWidget_keyReleaseEvent_QKeyEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void mouseDoubleClickEvent(QGraphicsSceneMouseEvent event) {
        qtd_QGraphicsProxyWidget_mouseDoubleClickEvent_QGraphicsSceneMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void mouseMoveEvent(QGraphicsSceneMouseEvent event) {
        qtd_QGraphicsProxyWidget_mouseMoveEvent_QGraphicsSceneMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void mousePressEvent(QGraphicsSceneMouseEvent event) {
        qtd_QGraphicsProxyWidget_mousePressEvent_QGraphicsSceneMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void mouseReleaseEvent(QGraphicsSceneMouseEvent event) {
        qtd_QGraphicsProxyWidget_mouseReleaseEvent_QGraphicsSceneMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void paint(QPainter painter, QStyleOptionGraphicsItem option, QWidget widget) {
        qtd_QGraphicsProxyWidget_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget(qtdNativeId, painter is null ? null : painter.qtdNativeId, option is null ? null : (cast(QStyleOptionGraphicsItem)option).qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    protected void resizeEvent(QGraphicsSceneResizeEvent event) {
        qtd_QGraphicsProxyWidget_resizeEvent_QGraphicsSceneResizeEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void setGeometry(const(QRectF) rect) {
        qtd_QGraphicsProxyWidget_setGeometry_QRectF(qtdNativeId, rect);
    }

    protected void showEvent(QShowEvent event) {
        qtd_QGraphicsProxyWidget_showEvent_QShowEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public QSizeF sizeHint(Qt.SizeHint which, const(QSizeF) constraint = QSizeF()) const {
        QSizeF res;
        qtd_QGraphicsProxyWidget_sizeHint_SizeHint_QSizeF_const(qtdNativeId, &res, which, constraint);
        return res;
    }

    public int type() const {
        return qtd_QGraphicsProxyWidget_type_const(qtdNativeId);
    }

    protected void ungrabMouseEvent(QEvent event) {
        qtd_QGraphicsProxyWidget_ungrabMouseEvent_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void wheelEvent(QGraphicsSceneWheelEvent event) {
        qtd_QGraphicsProxyWidget_wheelEvent_QGraphicsSceneWheelEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "newProxyWidget(const QWidget*)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QGraphicsProxyWidget_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QGraphicsProxyWidget);
    }

    static QGraphicsProxyWidget __getObject(void* nativeId) {
        return static_cast!(QGraphicsProxyWidget)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QGraphicsProxyWidget_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QGraphicsProxyWidget_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QGraphicsProxyWidget(nativeId, initFlags);
        QGraphicsProxyWidget.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(QWidget)("newProxyWidget"), index));

    }

    public alias void __isQtType_QGraphicsProxyWidget;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QGraphicsProxyWidget_QGraphicsProxyWidget_QGraphicsItem_WindowFlags(void *d_ptr,
 void* parent0,
 int wFlags1);
private extern(C) void*  qtd_QGraphicsProxyWidget_createProxyForChildWidget_QWidget(void* __this_nativeId,
 void* child0);
private extern(C) void*  qtd_QGraphicsProxyWidget_newProxyWidget_QWidget(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QGraphicsProxyWidget_setWidget_QWidget(void* __this_nativeId,
 void* widget0);
private extern(C) void  qtd_QGraphicsProxyWidget_subWidgetRect_QWidget_const(void* __this_nativeId,
 QRectF * __d_return_value,
 void* widget0);
private extern(C) void*  qtd_QGraphicsProxyWidget_widget_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsProxyWidget_contextMenuEvent_QGraphicsSceneContextMenuEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsProxyWidget_dragEnterEvent_QGraphicsSceneDragDropEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsProxyWidget_dragLeaveEvent_QGraphicsSceneDragDropEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsProxyWidget_dragMoveEvent_QGraphicsSceneDragDropEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsProxyWidget_dropEvent_QGraphicsSceneDragDropEvent(void* __this_nativeId,
 void* event0);
private extern(C) bool  qtd_QGraphicsProxyWidget_event_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) bool  qtd_QGraphicsProxyWidget_eventFilter_QObject_QEvent(void* __this_nativeId,
 void* object0,
 void* event1);
private extern(C) void  qtd_QGraphicsProxyWidget_focusInEvent_QFocusEvent(void* __this_nativeId,
 void* event0);
private extern(C) bool  qtd_QGraphicsProxyWidget_focusNextPrevChild_bool(void* __this_nativeId,
 bool next0);
private extern(C) void  qtd_QGraphicsProxyWidget_focusOutEvent_QFocusEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsProxyWidget_grabMouseEvent_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsProxyWidget_hideEvent_QHideEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsProxyWidget_hoverEnterEvent_QGraphicsSceneHoverEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsProxyWidget_hoverLeaveEvent_QGraphicsSceneHoverEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsProxyWidget_hoverMoveEvent_QGraphicsSceneHoverEvent(void* __this_nativeId,
 void* event0);
private extern(C) void*  qtd_QGraphicsProxyWidget_itemChange_GraphicsItemChange_QVariant(void* __this_nativeId,
 int change0,
 void* value1);
private extern(C) void  qtd_QGraphicsProxyWidget_keyPressEvent_QKeyEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsProxyWidget_keyReleaseEvent_QKeyEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsProxyWidget_mouseDoubleClickEvent_QGraphicsSceneMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsProxyWidget_mouseMoveEvent_QGraphicsSceneMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsProxyWidget_mousePressEvent_QGraphicsSceneMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsProxyWidget_mouseReleaseEvent_QGraphicsSceneMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsProxyWidget_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget(void* __this_nativeId,
 void* painter0,
 void* option1,
 void* widget2);
private extern(C) void  qtd_QGraphicsProxyWidget_resizeEvent_QGraphicsSceneResizeEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsProxyWidget_setGeometry_QRectF(void* __this_nativeId,
 QRectF rect0);
private extern(C) void  qtd_QGraphicsProxyWidget_showEvent_QShowEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsProxyWidget_sizeHint_SizeHint_QSizeF_const(void* __this_nativeId,
 QSizeF * __d_return_value,
 int which0,
 QSizeF constraint1);
private extern(C) int  qtd_QGraphicsProxyWidget_type_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsProxyWidget_ungrabMouseEvent_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGraphicsProxyWidget_wheelEvent_QGraphicsSceneWheelEvent(void* __this_nativeId,
 void* event0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QGraphicsProxyWidget_initCallBacks(void* virtuals);

extern(C) void static_init_QGraphicsProxyWidget() {
    qtd_QGraphicsProxyWidget_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QGraphicsProxyWidget_childrenChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsProxyWidget) dId;
        //d_object.childrenChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsProxyWidget_enabledChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsProxyWidget) dId;
        //d_object.enabledChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsProxyWidget_heightChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsProxyWidget) dId;
        //d_object.heightChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsProxyWidget_opacityChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsProxyWidget) dId;
        //d_object.opacityChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsProxyWidget_parentChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsProxyWidget) dId;
        //d_object.parentChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsProxyWidget_rotationChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsProxyWidget) dId;
        //d_object.rotationChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsProxyWidget_scaleChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsProxyWidget) dId;
        //d_object.scaleChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsProxyWidget_visibleChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsProxyWidget) dId;
        //d_object.visibleChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsProxyWidget_widthChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsProxyWidget) dId;
        //d_object.widthChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsProxyWidget_xChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsProxyWidget) dId;
        //d_object.xChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsProxyWidget_yChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsProxyWidget) dId;
        //d_object.yChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsProxyWidget_zChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsProxyWidget) dId;
        //d_object.zChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsProxyWidget_geometryChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsProxyWidget) dId;
        //d_object.geometryChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsProxyWidget_layoutChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsProxyWidget) dId;
        //d_object.layoutChanged_emit();
}*/

extern(C) QMetaObjectNative* qtd_QGraphicsProxyWidget_staticMetaObject();

extern(C) void qtd_QGraphicsProxyWidget_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QGraphicsProxyWidget_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
