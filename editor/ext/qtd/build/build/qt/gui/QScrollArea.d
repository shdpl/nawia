module qt.gui.QScrollArea;

public import qt.gui.QScrollArea_aux;
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
public import qt.gui.QFocusEvent;
public import qt.gui.QResizeEvent;
public import qt.gui.QAbstractScrollArea;
public import qt.gui.QDragMoveEvent;
public import qt.gui.QKeyEvent;
public import qt.core.QPoint;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.core.QEvent;
public import qt.gui.QDragLeaveEvent;
public import qt.core.QSize;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.gui.QPaintEvent;
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


public class QScrollArea : QAbstractScrollArea
{

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

    public this(QWidget parent_ = null) {
        void* ret = qtd_QScrollArea_QScrollArea_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int alignment() const {
        return qtd_QScrollArea_alignment_const(qtdNativeId);
    }

    public final void ensureVisible(int x, int y, int xmargin = 50, int ymargin = 50) {
        qtd_QScrollArea_ensureVisible_int_int_int_int(qtdNativeId, x, y, xmargin, ymargin);
    }

    public final void ensureWidgetVisible(QWidget childWidget, int xmargin = 50, int ymargin = 50) {
        qtd_QScrollArea_ensureWidgetVisible_QWidget_int_int(qtdNativeId, childWidget is null ? null : childWidget.qtdNativeId, xmargin, ymargin);
    }

    public final void setAlignment(int arg__1) {
        qtd_QScrollArea_setAlignment_Alignment(qtdNativeId, arg__1);
    }

    public final void setWidget(QWidget widget) {
        qtd_QScrollArea_setWidget_QWidget(qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    public final void setWidgetResizable(bool resizable) {
        qtd_QScrollArea_setWidgetResizable_bool(qtdNativeId, resizable);
    }

    public final QWidget takeWidget() {
        void *ret = qtd_QScrollArea_takeWidget(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final QWidget widget() const {
        void *ret = qtd_QScrollArea_widget_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final bool widgetResizable() const {
        return qtd_QScrollArea_widgetResizable_const(qtdNativeId);
    }

    public bool event(QEvent arg__1) {
        return qtd_QScrollArea_event_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public bool eventFilter(QObject arg__1, QEvent arg__2) {
        return qtd_QScrollArea_eventFilter_QObject_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId, arg__2 is null ? null : arg__2.qtdNativeId);
    }

    protected bool focusNextPrevChild(bool next) {
        return qtd_QScrollArea_focusNextPrevChild_bool(qtdNativeId, next);
    }

    protected void resizeEvent(QResizeEvent arg__1) {
        qtd_QScrollArea_resizeEvent_QResizeEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void scrollContentsBy(int dx, int dy) {
        qtd_QScrollArea_scrollContentsBy_int_int(qtdNativeId, dx, dy);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QScrollArea_sizeHint_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QScrollArea_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QScrollArea);
    }

    static QScrollArea __getObject(void* nativeId) {
        return static_cast!(QScrollArea)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QScrollArea_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QScrollArea_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QScrollArea(nativeId, initFlags);
        QScrollArea.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QScrollArea;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QScrollArea_QScrollArea_QWidget(void *d_ptr,
 void* parent0);
private extern(C) int  qtd_QScrollArea_alignment_const(void* __this_nativeId);
private extern(C) void  qtd_QScrollArea_ensureVisible_int_int_int_int(void* __this_nativeId,
 int x0,
 int y1,
 int xmargin2,
 int ymargin3);
private extern(C) void  qtd_QScrollArea_ensureWidgetVisible_QWidget_int_int(void* __this_nativeId,
 void* childWidget0,
 int xmargin1,
 int ymargin2);
private extern(C) void  qtd_QScrollArea_setAlignment_Alignment(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QScrollArea_setWidget_QWidget(void* __this_nativeId,
 void* widget0);
private extern(C) void  qtd_QScrollArea_setWidgetResizable_bool(void* __this_nativeId,
 bool resizable0);
private extern(C) void*  qtd_QScrollArea_takeWidget(void* __this_nativeId);
private extern(C) void*  qtd_QScrollArea_widget_const(void* __this_nativeId);
private extern(C) bool  qtd_QScrollArea_widgetResizable_const(void* __this_nativeId);
private extern(C) bool  qtd_QScrollArea_event_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QScrollArea_eventFilter_QObject_QEvent(void* __this_nativeId,
 void* arg__1,
 void* arg__2);
private extern(C) bool  qtd_QScrollArea_focusNextPrevChild_bool(void* __this_nativeId,
 bool next0);
private extern(C) void  qtd_QScrollArea_resizeEvent_QResizeEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QScrollArea_scrollContentsBy_int_int(void* __this_nativeId,
 int dx0,
 int dy1);
private extern(C) void  qtd_QScrollArea_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QScrollArea_initCallBacks(void* virtuals);

extern(C) void static_init_QScrollArea() {
    qtd_QScrollArea_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QScrollArea_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QScrollArea) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/

extern(C) QMetaObjectNative* qtd_QScrollArea_staticMetaObject();

extern(C) void qtd_QScrollArea_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QScrollArea_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
