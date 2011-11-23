module qt.gui.QRubberBand;

public import qt.gui.QRubberBand_aux;
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
public import qt.core.Qt;
public import qt.gui.QPaintDevice;
public import qt.gui.QContextMenuEvent;
public import qt.gui.QPaintEngine;
public import qt.gui.QWheelEvent;
public import qt.gui.QActionEvent;
public import qt.gui.QDropEvent;
public import qt.gui.QTabletEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QInputMethodEvent;
public import qt.core.QRect;
public import qt.gui.QFocusEvent;
public import qt.gui.QResizeEvent;
public import qt.core.QPoint;
public import qt.gui.QDragMoveEvent;
public import qt.gui.QKeyEvent;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.gui.QStyleOptionRubberBand;
public import qt.core.QEvent;
public import qt.gui.QDragLeaveEvent;
public import qt.core.QSize;
public import qt.gui.QPaintEvent;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QRubberBand : QWidget
{
    public enum Shape {
        Line = 0,
        Rectangle = 1
    }

    alias Shape.Line Line;
    alias Shape.Rectangle Rectangle;


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

    public this(QRubberBand.Shape arg__1, QWidget arg__2 = null) {
        void* ret = qtd_QRubberBand_QRubberBand_Shape_QWidget(cast(void*) this, arg__1, arg__2 is null ? null : arg__2.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected final void initStyleOption(QStyleOptionRubberBand option) const {
        qtd_QRubberBand_initStyleOption_nativepointerQStyleOptionRubberBand_const(qtdNativeId, option is null ? null : option.qtdNativeId);
    }

    public final void moveRubberBand(const(QPoint) p) {
        qtd_QRubberBand_moveRubberBand_QPoint(qtdNativeId, p);
    }

    public final void moveRubberBand(int x, int y) {
        qtd_QRubberBand_moveRubberBand_int_int(qtdNativeId, x, y);
    }

    public final void resizeRubberBand(const(QSize) s) {
        qtd_QRubberBand_resizeRubberBand_QSize(qtdNativeId, s);
    }

    public final void resizeRubberBand(int w, int h) {
        qtd_QRubberBand_resizeRubberBand_int_int(qtdNativeId, w, h);
    }

    public final void setRubberBandGeometry(const(QRect) r) {
        qtd_QRubberBand_setRubberBandGeometry_QRect(qtdNativeId, r);
    }

    public final void setRubberBandGeometry(int x, int y, int w, int h) {
        qtd_QRubberBand_setRubberBandGeometry_int_int_int_int(qtdNativeId, x, y, w, h);
    }

    public final QRubberBand.Shape shape() const {
        return cast(QRubberBand.Shape) qtd_QRubberBand_shape_const(qtdNativeId);
    }

    protected void changeEvent(QEvent arg__1) {
        qtd_QRubberBand_changeEvent_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public bool event(QEvent e) {
        return qtd_QRubberBand_event_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void moveEvent(QMoveEvent arg__1) {
        qtd_QRubberBand_moveEvent_QMoveEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void paintEvent(QPaintEvent arg__1) {
        qtd_QRubberBand_paintEvent_QPaintEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void resizeEvent(QResizeEvent arg__1) {
        qtd_QRubberBand_resizeEvent_QResizeEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void showEvent(QShowEvent arg__1) {
        qtd_QRubberBand_showEvent_QShowEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QRubberBand_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QRubberBand);
    }

    static QRubberBand __getObject(void* nativeId) {
        return static_cast!(QRubberBand)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QRubberBand_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QRubberBand_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QRubberBand(nativeId, initFlags);
        QRubberBand.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QRubberBand;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QRubberBand_QRubberBand_Shape_QWidget(void *d_ptr,
 int arg__1,
 void* arg__2);
private extern(C) void  qtd_QRubberBand_initStyleOption_nativepointerQStyleOptionRubberBand_const(void* __this_nativeId,
 void* option0);
private extern(C) void  qtd_QRubberBand_moveRubberBand_QPoint(void* __this_nativeId,
 QPoint p0);
private extern(C) void  qtd_QRubberBand_moveRubberBand_int_int(void* __this_nativeId,
 int x0,
 int y1);
private extern(C) void  qtd_QRubberBand_resizeRubberBand_QSize(void* __this_nativeId,
 QSize s0);
private extern(C) void  qtd_QRubberBand_resizeRubberBand_int_int(void* __this_nativeId,
 int w0,
 int h1);
private extern(C) void  qtd_QRubberBand_setRubberBandGeometry_QRect(void* __this_nativeId,
 QRect r0);
private extern(C) void  qtd_QRubberBand_setRubberBandGeometry_int_int_int_int(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3);
private extern(C) int  qtd_QRubberBand_shape_const(void* __this_nativeId);
private extern(C) void  qtd_QRubberBand_changeEvent_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QRubberBand_event_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QRubberBand_moveEvent_QMoveEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QRubberBand_paintEvent_QPaintEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QRubberBand_resizeEvent_QResizeEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QRubberBand_showEvent_QShowEvent(void* __this_nativeId,
 void* arg__1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QRubberBand_initCallBacks(void* virtuals);

extern(C) void static_init_QRubberBand() {
    qtd_QRubberBand_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QRubberBand_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QRubberBand) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/

extern(C) QMetaObjectNative* qtd_QRubberBand_staticMetaObject();

extern(C) void qtd_QRubberBand_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QRubberBand_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
