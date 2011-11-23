module qt.svg.QGraphicsSvgItem;

public import qt.svg.QGraphicsSvgItem_aux;
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
private import qt.svg.ArrayOps2;
// automatic imports-------------
public import qt.gui.QGraphicsItem;
public import qt.core.Qt;
public import qt.core.QRectF;
public import qt.gui.QGraphicsSceneContextMenuEvent;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QPainterPath;
public import qt.svg.QSvgRenderer;
public import qt.gui.QPainter;
public import qt.gui.QGraphicsSceneWheelEvent;
public import qt.gui.QFocusEvent;
public import qt.gui.QGraphicsSceneMouseEvent;
public import qt.gui.QGraphicsObject;
public import qt.gui.QKeyEvent;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.gui.QGraphicsSceneDragDropEvent;
public import qt.core.QEvent;
public import qt.core.QSize;
public import qt.gui.QGraphicsSceneHoverEvent;
public import qt.core.QPointF;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.core.QTimerEvent;
public import qt.gui.QStyleOptionGraphicsItem;
public import qt.gui.QGraphicsItem;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QGraphicsSvgItem : QGraphicsObject
{
    public enum enum_1 {
        Type = 13
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

    public this(IQGraphicsItem parentItem = null) {
        void* ret = qtd_QGraphicsSvgItem_QGraphicsSvgItem_QGraphicsItem(cast(void*) this, parentItem is null ? null : parentItem.__ptr_IQGraphicsItem);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string fileName, IQGraphicsItem parentItem = null) {
        void* ret = qtd_QGraphicsSvgItem_QGraphicsSvgItem_string_QGraphicsItem(cast(void*) this, fileName, parentItem is null ? null : parentItem.__ptr_IQGraphicsItem);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string elementId() const {
        string res;
        qtd_QGraphicsSvgItem_elementId_const(qtdNativeId, &res);
        return res;
    }

    public final bool isCachingEnabled() const {
        return qtd_QGraphicsSvgItem_isCachingEnabled_const(qtdNativeId);
    }

    public final QSize maximumCacheSize() const {
        QSize res;
        qtd_QGraphicsSvgItem_maximumCacheSize_const(qtdNativeId, &res);
        return res;
    }

    public final QSvgRenderer renderer() const {
        void *ret = qtd_QGraphicsSvgItem_renderer_const(qtdNativeId);
        QSvgRenderer __d_return_value = QSvgRenderer.__getObject(ret);
        return __d_return_value;
    }

    public final void setCachingEnabled(bool arg__1) {
        qtd_QGraphicsSvgItem_setCachingEnabled_bool(qtdNativeId, arg__1);
    }

    public final void setElementId(string id) {
        qtd_QGraphicsSvgItem_setElementId_string(qtdNativeId, id);
    }

    public final void setMaximumCacheSize(const(QSize) size) {
        qtd_QGraphicsSvgItem_setMaximumCacheSize_QSize(qtdNativeId, size);
    }

    public final void setSharedRenderer(QSvgRenderer renderer) {
        qtd_QGraphicsSvgItem_setSharedRenderer_QSvgRenderer(qtdNativeId, renderer is null ? null : renderer.qtdNativeId);
    }

    public QRectF boundingRect() const {
        QRectF res;
        qtd_QGraphicsSvgItem_boundingRect_const(qtdNativeId, &res);
        return res;
    }

    public void paint(QPainter painter, QStyleOptionGraphicsItem option, QWidget widget = null) {
        qtd_QGraphicsSvgItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget(qtdNativeId, painter is null ? null : painter.qtdNativeId, option is null ? null : (cast(QStyleOptionGraphicsItem)option).qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    public int type() const {
        return qtd_QGraphicsSvgItem_type_const(qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QGraphicsSvgItem_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QGraphicsSvgItem);
    }

    static QGraphicsSvgItem __getObject(void* nativeId) {
        return static_cast!(QGraphicsSvgItem)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QGraphicsSvgItem_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QGraphicsSvgItem_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QGraphicsSvgItem(nativeId, initFlags);
        QGraphicsSvgItem.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QGraphicsSvgItem;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QGraphicsSvgItem_QGraphicsSvgItem_QGraphicsItem(void *d_ptr,
 void* parentItem0);
private extern(C) void* qtd_QGraphicsSvgItem_QGraphicsSvgItem_string_QGraphicsItem(void *d_ptr,
 string fileName0,
 void* parentItem1);
private extern(C) void  qtd_QGraphicsSvgItem_elementId_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QGraphicsSvgItem_isCachingEnabled_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsSvgItem_maximumCacheSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void*  qtd_QGraphicsSvgItem_renderer_const(void* __this_nativeId);
private extern(C) void  qtd_QGraphicsSvgItem_setCachingEnabled_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QGraphicsSvgItem_setElementId_string(void* __this_nativeId,
 string id0);
private extern(C) void  qtd_QGraphicsSvgItem_setMaximumCacheSize_QSize(void* __this_nativeId,
 QSize size0);
private extern(C) void  qtd_QGraphicsSvgItem_setSharedRenderer_QSvgRenderer(void* __this_nativeId,
 void* renderer0);
private extern(C) void  qtd_QGraphicsSvgItem_boundingRect_const(void* __this_nativeId,
 QRectF * __d_return_value);
private extern(C) void  qtd_QGraphicsSvgItem_paint_QPainter_nativepointerQStyleOptionGraphicsItem_QWidget(void* __this_nativeId,
 void* painter0,
 void* option1,
 void* widget2);
private extern(C) int  qtd_QGraphicsSvgItem_type_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QGraphicsSvgItem_initCallBacks(void* virtuals);

extern(C) void static_init_QGraphicsSvgItem() {
    qtd_QGraphicsSvgItem_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QGraphicsSvgItem_childrenChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsSvgItem) dId;
        //d_object.childrenChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsSvgItem_enabledChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsSvgItem) dId;
        //d_object.enabledChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsSvgItem_heightChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsSvgItem) dId;
        //d_object.heightChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsSvgItem_opacityChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsSvgItem) dId;
        //d_object.opacityChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsSvgItem_parentChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsSvgItem) dId;
        //d_object.parentChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsSvgItem_rotationChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsSvgItem) dId;
        //d_object.rotationChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsSvgItem_scaleChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsSvgItem) dId;
        //d_object.scaleChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsSvgItem_visibleChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsSvgItem) dId;
        //d_object.visibleChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsSvgItem_widthChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsSvgItem) dId;
        //d_object.widthChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsSvgItem_xChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsSvgItem) dId;
        //d_object.xChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsSvgItem_yChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsSvgItem) dId;
        //d_object.yChanged_emit();
}*/
/*private extern(C) void qtd_QGraphicsSvgItem_zChanged_handle(void* dId, void** args) {
        auto d_object = cast(QGraphicsSvgItem) dId;
        //d_object.zChanged_emit();
}*/

extern(C) QMetaObjectNative* qtd_QGraphicsSvgItem_staticMetaObject();

extern(C) void qtd_QGraphicsSvgItem_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QGraphicsSvgItem_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
