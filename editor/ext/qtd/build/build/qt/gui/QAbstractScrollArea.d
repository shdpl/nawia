module qt.gui.QAbstractScrollArea;

public import qt.gui.QAbstractScrollArea_aux;
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
public import qt.gui.QWheelEvent;
public import qt.gui.QPaintEngine;
public import qt.core.QList;
public import qt.gui.QDropEvent;
public import qt.gui.QActionEvent;
public import qt.gui.QTabletEvent;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QFrame;
public import qt.gui.QFocusEvent;
public import qt.gui.QResizeEvent;
public import qt.gui.QScrollBar;
public import qt.gui.QDragMoveEvent;
public import qt.gui.QKeyEvent;
public import qt.core.QPoint;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.core.QEvent;
public import qt.gui.QDragLeaveEvent;
public import qt.core.QSize;
public import qt.gui.QPaintEvent;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QAbstractScrollArea : QFrame
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
        void* ret = qtd_QAbstractScrollArea_QAbstractScrollArea_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void addScrollBarWidget(QWidget widget, int alignment) {
        qtd_QAbstractScrollArea_addScrollBarWidget_QWidget_Alignment(qtdNativeId, widget is null ? null : widget.qtdNativeId, alignment);
    }

    public final QWidget cornerWidget() const {
        void *ret = qtd_QAbstractScrollArea_cornerWidget_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final QScrollBar horizontalScrollBar() const {
        void *ret = qtd_QAbstractScrollArea_horizontalScrollBar_const(qtdNativeId);
        QScrollBar __d_return_value = QScrollBar.__getObject(ret);
        return __d_return_value;
    }

    public final Qt.ScrollBarPolicy horizontalScrollBarPolicy() const {
        return cast(Qt.ScrollBarPolicy) qtd_QAbstractScrollArea_horizontalScrollBarPolicy_const(qtdNativeId);
    }

    public final QSize maximumViewportSize() const {
        QSize res;
        qtd_QAbstractScrollArea_maximumViewportSize_const(qtdNativeId, &res);
        return res;
    }

    public final QList!(QWidget) scrollBarWidgets(int alignment) {
        auto res = QList!(QWidget).opCall();
        qtd_QAbstractScrollArea_scrollBarWidgets_Alignment(qtdNativeId, &res, alignment);
        return res;
    }

    public final void setCornerWidget(QWidget widget) {
        qtd_QAbstractScrollArea_setCornerWidget_QWidget(qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    public final void setHorizontalScrollBar(QScrollBar scrollbar) {
        qtd_QAbstractScrollArea_setHorizontalScrollBar_QScrollBar(qtdNativeId, scrollbar is null ? null : scrollbar.qtdNativeId);
    }

    public final void setHorizontalScrollBarPolicy(Qt.ScrollBarPolicy arg__1) {
        qtd_QAbstractScrollArea_setHorizontalScrollBarPolicy_ScrollBarPolicy(qtdNativeId, arg__1);
    }

    public final void setVerticalScrollBar(QScrollBar scrollbar) {
        qtd_QAbstractScrollArea_setVerticalScrollBar_QScrollBar(qtdNativeId, scrollbar is null ? null : scrollbar.qtdNativeId);
    }

    public final void setVerticalScrollBarPolicy(Qt.ScrollBarPolicy arg__1) {
        qtd_QAbstractScrollArea_setVerticalScrollBarPolicy_ScrollBarPolicy(qtdNativeId, arg__1);
    }

    public final void setViewport(QWidget widget) {
        qtd_QAbstractScrollArea_setViewport_QWidget(qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    protected final void setViewportMargins(int left, int top, int right, int bottom) {
        qtd_QAbstractScrollArea_setViewportMargins_int_int_int_int(qtdNativeId, left, top, right, bottom);
    }

    protected void setupViewport(QWidget viewport) {
        qtd_QAbstractScrollArea_setupViewport_QWidget(qtdNativeId, viewport is null ? null : viewport.qtdNativeId);
    }

    public final QScrollBar verticalScrollBar() const {
        void *ret = qtd_QAbstractScrollArea_verticalScrollBar_const(qtdNativeId);
        QScrollBar __d_return_value = QScrollBar.__getObject(ret);
        return __d_return_value;
    }

    public final Qt.ScrollBarPolicy verticalScrollBarPolicy() const {
        return cast(Qt.ScrollBarPolicy) qtd_QAbstractScrollArea_verticalScrollBarPolicy_const(qtdNativeId);
    }

    public final QWidget viewport() const {
        void *ret = qtd_QAbstractScrollArea_viewport_const(qtdNativeId);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    protected void contextMenuEvent(QContextMenuEvent arg__1) {
        qtd_QAbstractScrollArea_contextMenuEvent_QContextMenuEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void dragEnterEvent(QDragEnterEvent arg__1) {
        qtd_QAbstractScrollArea_dragEnterEvent_QDragEnterEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void dragLeaveEvent(QDragLeaveEvent arg__1) {
        qtd_QAbstractScrollArea_dragLeaveEvent_QDragLeaveEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void dragMoveEvent(QDragMoveEvent arg__1) {
        qtd_QAbstractScrollArea_dragMoveEvent_QDragMoveEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void dropEvent(QDropEvent arg__1) {
        qtd_QAbstractScrollArea_dropEvent_QDropEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public bool event(QEvent arg__1) {
        return qtd_QAbstractScrollArea_event_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void keyPressEvent(QKeyEvent arg__1) {
        qtd_QAbstractScrollArea_keyPressEvent_QKeyEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QSize minimumSizeHint() const {
        QSize res;
        qtd_QAbstractScrollArea_minimumSizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void mouseDoubleClickEvent(QMouseEvent arg__1) {
        qtd_QAbstractScrollArea_mouseDoubleClickEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void mouseMoveEvent(QMouseEvent arg__1) {
        qtd_QAbstractScrollArea_mouseMoveEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void mousePressEvent(QMouseEvent arg__1) {
        qtd_QAbstractScrollArea_mousePressEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void mouseReleaseEvent(QMouseEvent arg__1) {
        qtd_QAbstractScrollArea_mouseReleaseEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void paintEvent(QPaintEvent arg__1) {
        qtd_QAbstractScrollArea_paintEvent_QPaintEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void resizeEvent(QResizeEvent arg__1) {
        qtd_QAbstractScrollArea_resizeEvent_QResizeEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void scrollContentsBy(int dx, int dy) {
        qtd_QAbstractScrollArea_scrollContentsBy_int_int(qtdNativeId, dx, dy);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QAbstractScrollArea_sizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected bool viewportEvent(QEvent arg__1) {
        return qtd_QAbstractScrollArea_viewportEvent_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void wheelEvent(QWheelEvent arg__1) {
        qtd_QAbstractScrollArea_wheelEvent_QWheelEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "setupViewport(QWidget*)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QAbstractScrollArea_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QAbstractScrollArea);
    }

    static QAbstractScrollArea __getObject(void* nativeId) {
        return static_cast!(QAbstractScrollArea)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QAbstractScrollArea_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QAbstractScrollArea_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QAbstractScrollArea(nativeId, initFlags);
        QAbstractScrollArea.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(QWidget)("setupViewport"), index));

    }

    public alias void __isQtType_QAbstractScrollArea;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    /*
    public QPaintEngine paintEngine() {
    throw new RuntimeException("Cannot open a painter directly on a QAbstractScrollArea, open QPainter on its viewport instead...");
    }
     */

}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QAbstractScrollArea_QAbstractScrollArea_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QAbstractScrollArea_addScrollBarWidget_QWidget_Alignment(void* __this_nativeId,
 void* widget0,
 int alignment1);
private extern(C) void*  qtd_QAbstractScrollArea_cornerWidget_const(void* __this_nativeId);
private extern(C) void*  qtd_QAbstractScrollArea_horizontalScrollBar_const(void* __this_nativeId);
private extern(C) int  qtd_QAbstractScrollArea_horizontalScrollBarPolicy_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractScrollArea_maximumViewportSize_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QAbstractScrollArea_scrollBarWidgets_Alignment(void* __this_nativeId,
 void* __d_return_value,
 int alignment0);
private extern(C) void  qtd_QAbstractScrollArea_setCornerWidget_QWidget(void* __this_nativeId,
 void* widget0);
private extern(C) void  qtd_QAbstractScrollArea_setHorizontalScrollBar_QScrollBar(void* __this_nativeId,
 void* scrollbar0);
private extern(C) void  qtd_QAbstractScrollArea_setHorizontalScrollBarPolicy_ScrollBarPolicy(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QAbstractScrollArea_setVerticalScrollBar_QScrollBar(void* __this_nativeId,
 void* scrollbar0);
private extern(C) void  qtd_QAbstractScrollArea_setVerticalScrollBarPolicy_ScrollBarPolicy(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QAbstractScrollArea_setViewport_QWidget(void* __this_nativeId,
 void* widget0);
private extern(C) void  qtd_QAbstractScrollArea_setViewportMargins_int_int_int_int(void* __this_nativeId,
 int left0,
 int top1,
 int right2,
 int bottom3);
private extern(C) void  qtd_QAbstractScrollArea_setupViewport_QWidget(void* __this_nativeId,
 void* viewport0);
private extern(C) void*  qtd_QAbstractScrollArea_verticalScrollBar_const(void* __this_nativeId);
private extern(C) int  qtd_QAbstractScrollArea_verticalScrollBarPolicy_const(void* __this_nativeId);
private extern(C) void*  qtd_QAbstractScrollArea_viewport_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractScrollArea_contextMenuEvent_QContextMenuEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QAbstractScrollArea_dragEnterEvent_QDragEnterEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QAbstractScrollArea_dragLeaveEvent_QDragLeaveEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QAbstractScrollArea_dragMoveEvent_QDragMoveEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QAbstractScrollArea_dropEvent_QDropEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) bool  qtd_QAbstractScrollArea_event_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QAbstractScrollArea_keyPressEvent_QKeyEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QAbstractScrollArea_minimumSizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QAbstractScrollArea_mouseDoubleClickEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QAbstractScrollArea_mouseMoveEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QAbstractScrollArea_mousePressEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QAbstractScrollArea_mouseReleaseEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QAbstractScrollArea_paintEvent_QPaintEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QAbstractScrollArea_resizeEvent_QResizeEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QAbstractScrollArea_scrollContentsBy_int_int(void* __this_nativeId,
 int dx0,
 int dy1);
private extern(C) void  qtd_QAbstractScrollArea_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) bool  qtd_QAbstractScrollArea_viewportEvent_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QAbstractScrollArea_wheelEvent_QWheelEvent(void* __this_nativeId,
 void* arg__1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, int dx0, int dy1) qtd_QAbstractScrollArea_scrollContentsBy_int_int_dispatch; }
extern(C) void qtd_export_QAbstractScrollArea_scrollContentsBy_int_int_dispatch(void *dId, int dx0, int dy1){
    auto d_object = cast(QAbstractScrollArea) dId;
    d_object.scrollContentsBy(dx0, dy1);
}

extern(C){ extern bool function(void *dId, void* arg__1) qtd_QAbstractScrollArea_viewportEvent_QEvent_dispatch; }
extern(C) bool qtd_export_QAbstractScrollArea_viewportEvent_QEvent_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QAbstractScrollArea) dId;
    scope arg__1_d_ref = new QEvent(arg__1, QtdObjectInitFlags.onStack);
    auto return_value = d_object.viewportEvent(arg__1_d_ref);
    return return_value;
}

private extern (C) void qtd_QAbstractScrollArea_initCallBacks(void* virtuals);

extern(C) void static_init_QAbstractScrollArea() {
    void*[2] virt_arr;
    virt_arr[0] = &qtd_export_QAbstractScrollArea_scrollContentsBy_int_int_dispatch;
    virt_arr[1] = &qtd_export_QAbstractScrollArea_viewportEvent_QEvent_dispatch;
    qtd_QAbstractScrollArea_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QAbstractScrollArea_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractScrollArea) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/

extern(C) QMetaObjectNative* qtd_QAbstractScrollArea_staticMetaObject();

extern(C) void qtd_QAbstractScrollArea_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QAbstractScrollArea_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
