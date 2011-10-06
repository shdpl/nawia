module qt.gui.QFrame;

public import qt.gui.QFrame_aux;
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
public import qt.gui.QDropEvent;
public import qt.gui.QActionEvent;
public import qt.gui.QTabletEvent;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QPainter;
public import qt.core.QRect;
public import qt.gui.QFocusEvent;
public import qt.gui.QResizeEvent;
public import qt.gui.QDragMoveEvent;
public import qt.gui.QKeyEvent;
public import qt.core.QPoint;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.core.QEvent;
public import qt.gui.QDragLeaveEvent;
public import qt.core.QSize;
public import qt.core.QObject;
public import qt.gui.QPaintEvent;
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


public class QFrame : QWidget
{
    public enum StyleMask {
        Shadow_Mask = 240,
        Shape_Mask = 15
    }

    alias StyleMask.Shadow_Mask Shadow_Mask;
    alias StyleMask.Shape_Mask Shape_Mask;

    public enum Shape {
        NoFrame = 0,
        Box = 1,
        Panel = 2,
        WinPanel = 3,
        HLine = 4,
        VLine = 5,
        StyledPanel = 6
    }

    alias Shape.NoFrame NoFrame;
    alias Shape.Box Box;
    alias Shape.Panel Panel;
    alias Shape.WinPanel WinPanel;
    alias Shape.HLine HLine;
    alias Shape.VLine VLine;
    alias Shape.StyledPanel StyledPanel;

    public enum Shadow {
        Plain = 16,
        Raised = 32,
        Sunken = 48
    }

    alias Shadow.Plain Plain;
    alias Shadow.Raised Raised;
    alias Shadow.Sunken Sunken;


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

    public this(QWidget parent_ = null, int f = 0) {
        void* ret = qtd_QFrame_QFrame_QWidget_WindowFlags(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId, f);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected final void drawFrame(QPainter arg__1) {
        qtd_QFrame_drawFrame_QPainter(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final QRect frameRect() const {
        QRect res;
        qtd_QFrame_frameRect_const(qtdNativeId, &res);
        return res;
    }

    public final QFrame.Shadow frameShadow() const {
        return cast(QFrame.Shadow) qtd_QFrame_frameShadow_const(qtdNativeId);
    }

    public final QFrame.Shape frameShape() const {
        return cast(QFrame.Shape) qtd_QFrame_frameShape_const(qtdNativeId);
    }

    public final int frameStyle() const {
        return qtd_QFrame_frameStyle_const(qtdNativeId);
    }

    public final int frameWidth() const {
        return qtd_QFrame_frameWidth_const(qtdNativeId);
    }

    public final int lineWidth() const {
        return qtd_QFrame_lineWidth_const(qtdNativeId);
    }

    public final int midLineWidth() const {
        return qtd_QFrame_midLineWidth_const(qtdNativeId);
    }

    public final void setFrameRect(const(QRect) arg__1) {
        qtd_QFrame_setFrameRect_QRect(qtdNativeId, arg__1);
    }

    public final void setFrameShadow(QFrame.Shadow arg__1) {
        qtd_QFrame_setFrameShadow_Shadow(qtdNativeId, arg__1);
    }

    public final void setFrameShape(QFrame.Shape arg__1) {
        qtd_QFrame_setFrameShape_Shape(qtdNativeId, arg__1);
    }

    public final void setFrameStyle(int arg__1) {
        qtd_QFrame_setFrameStyle_int(qtdNativeId, arg__1);
    }

    public final void setLineWidth(int arg__1) {
        qtd_QFrame_setLineWidth_int(qtdNativeId, arg__1);
    }

    public final void setMidLineWidth(int arg__1) {
        qtd_QFrame_setMidLineWidth_int(qtdNativeId, arg__1);
    }

    protected void changeEvent(QEvent arg__1) {
        qtd_QFrame_changeEvent_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public bool event(QEvent e) {
        return qtd_QFrame_event_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void paintEvent(QPaintEvent arg__1) {
        qtd_QFrame_paintEvent_QPaintEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QFrame_sizeHint_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QFrame_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QFrame);
    }

    static QFrame __getObject(void* nativeId) {
        return static_cast!(QFrame)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QFrame_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QFrame_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QFrame(nativeId, initFlags);
        QFrame.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QFrame;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QFrame_QFrame_QWidget_WindowFlags(void *d_ptr,
 void* parent0,
 int f1);
private extern(C) void  qtd_QFrame_drawFrame_QPainter(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QFrame_frameRect_const(void* __this_nativeId,
 QRect * __d_return_value);
private extern(C) int  qtd_QFrame_frameShadow_const(void* __this_nativeId);
private extern(C) int  qtd_QFrame_frameShape_const(void* __this_nativeId);
private extern(C) int  qtd_QFrame_frameStyle_const(void* __this_nativeId);
private extern(C) int  qtd_QFrame_frameWidth_const(void* __this_nativeId);
private extern(C) int  qtd_QFrame_lineWidth_const(void* __this_nativeId);
private extern(C) int  qtd_QFrame_midLineWidth_const(void* __this_nativeId);
private extern(C) void  qtd_QFrame_setFrameRect_QRect(void* __this_nativeId,
 QRect arg__1);
private extern(C) void  qtd_QFrame_setFrameShadow_Shadow(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QFrame_setFrameShape_Shape(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QFrame_setFrameStyle_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QFrame_setLineWidth_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QFrame_setMidLineWidth_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QFrame_changeEvent_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QFrame_event_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QFrame_paintEvent_QPaintEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QFrame_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QFrame_initCallBacks(void* virtuals);

extern(C) void static_init_QFrame() {
    qtd_QFrame_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QFrame_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QFrame) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/

extern(C) QMetaObjectNative* qtd_QFrame_staticMetaObject();

extern(C) void qtd_QFrame_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QFrame_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
