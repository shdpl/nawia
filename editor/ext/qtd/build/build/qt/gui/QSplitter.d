module qt.gui.QSplitter;

public import qt.gui.QSplitter_aux;
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
public import qt.core.QList;
public import qt.gui.QActionEvent;
public import qt.gui.QDropEvent;
public import qt.gui.QTabletEvent;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QFrame;
public import qt.gui.QSplitterHandle;
public import qt.gui.QFocusEvent;
public import qt.gui.QResizeEvent;
public import qt.gui.QDragMoveEvent;
public import qt.gui.QKeyEvent;
public import qt.core.QPoint;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.core.QTextStream;
public import qt.core.QEvent;
public import qt.gui.QDragLeaveEvent;
public import qt.core.QSize;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.gui.QPaintEvent;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.core.QByteArray;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QSplitter : QFrame
{

    private static const string[] __signalSignatures = [
            "splitterMoved(int,int)"    ];

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

    protected final void splitterMoved(int pos, int index) {
        qtd_QSplitter_splitterMoved_int_int(qtdNativeId, pos, index);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QSplitter_QSplitter_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(Qt.Orientation arg__1, QWidget parent_ = null) {
        void* ret = qtd_QSplitter_QSplitter_Orientation_QWidget(cast(void*) this, arg__1, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void addWidget(QWidget widget) {
        qtd_QSplitter_addWidget_QWidget(qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    public final bool childrenCollapsible() const {
        return qtd_QSplitter_childrenCollapsible_const(qtdNativeId);
    }

    protected final int closestLegalPosition(int arg__1, int arg__2) {
        return qtd_QSplitter_closestLegalPosition_int_int(qtdNativeId, arg__1, arg__2);
    }

    public final int count() const {
        return qtd_QSplitter_count_const(qtdNativeId);
    }

    private final void getRange(int index, int* arg__2, int* arg__3) const {
        qtd_QSplitter_getRange_int_nativepointerint_nativepointerint_const(qtdNativeId, index, arg__2, arg__3);
    }

    public final QSplitterHandle handle(int index) const {
        void *ret = qtd_QSplitter_handle_int_const(qtdNativeId, index);
        QSplitterHandle __d_return_value = QSplitterHandle.__getObject(ret);
        return __d_return_value;
    }

    public final int handleWidth() const {
        return qtd_QSplitter_handleWidth_const(qtdNativeId);
    }

    public final int indexOf(QWidget w) const {
        return qtd_QSplitter_indexOf_QWidget_const(qtdNativeId, w is null ? null : w.qtdNativeId);
    }

    public final void insertWidget(int index, QWidget widget) {
        qtd_QSplitter_insertWidget_int_QWidget(qtdNativeId, index, widget is null ? null : widget.qtdNativeId);
    }

    public final bool isCollapsible(int index) const {
        return qtd_QSplitter_isCollapsible_int_const(qtdNativeId, index);
    }

    protected final void moveSplitter(int pos, int index) {
        qtd_QSplitter_moveSplitter_int_int(qtdNativeId, pos, index);
    }

    public final bool opaqueResize() const {
        return qtd_QSplitter_opaqueResize_const(qtdNativeId);
    }

    public final void writeTo(QTextStream arg__1) {
        qtd_QSplitter_writeTo_QTextStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final void readFrom(QTextStream arg__1) {
        qtd_QSplitter_readFrom_QTextStream(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public final Qt.Orientation orientation() const {
        return cast(Qt.Orientation) qtd_QSplitter_orientation_const(qtdNativeId);
    }

    public final void refresh() {
        qtd_QSplitter_refresh(qtdNativeId);
    }

    public final bool restoreState(const(QByteArray) state) {
        return qtd_QSplitter_restoreState_QByteArray(qtdNativeId, state is null ? null : (cast(QByteArray)state).qtdNativeId);
    }

    public final QByteArray saveState() const {
        void* ret = qtd_QSplitter_saveState_const(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final void setChildrenCollapsible(bool arg__1) {
        qtd_QSplitter_setChildrenCollapsible_bool(qtdNativeId, arg__1);
    }

    public final void setCollapsible(int index, bool arg__2) {
        qtd_QSplitter_setCollapsible_int_bool(qtdNativeId, index, arg__2);
    }

    public final void setHandleWidth(int arg__1) {
        qtd_QSplitter_setHandleWidth_int(qtdNativeId, arg__1);
    }

    public final void setOpaqueResize(bool opaque = true) {
        qtd_QSplitter_setOpaqueResize_bool(qtdNativeId, opaque);
    }

    public final void setOrientation(Qt.Orientation arg__1) {
        qtd_QSplitter_setOrientation_Orientation(qtdNativeId, arg__1);
    }

    protected final void setRubberBand(int position) {
        qtd_QSplitter_setRubberBand_int(qtdNativeId, position);
    }

    public final void setSizes(QList!(int) list) {
        qtd_QSplitter_setSizes_QList(qtdNativeId, &list);
    }

    public final void setStretchFactor(int index, int stretch) {
        qtd_QSplitter_setStretchFactor_int_int(qtdNativeId, index, stretch);
    }

    public final QList!(int) sizes() const {
        auto res = QList!(int).opCall();
        qtd_QSplitter_sizes_const(qtdNativeId, &res);
        return res;
    }

    public final QWidget widget(int index) const {
        void *ret = qtd_QSplitter_widget_int_const(qtdNativeId, index);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    protected void changeEvent(QEvent arg__1) {
        qtd_QSplitter_changeEvent_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void childEvent(QChildEvent arg__1) {
        qtd_QSplitter_childEvent_QChildEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected QSplitterHandle createHandle() {
        void *ret = qtd_QSplitter_createHandle(qtdNativeId);
        QSplitterHandle __d_return_value = QSplitterHandle.__getObject(ret);
        return __d_return_value;
    }

    public bool event(QEvent arg__1) {
        return qtd_QSplitter_event_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QSize minimumSizeHint() const {
        QSize res;
        qtd_QSplitter_minimumSizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void resizeEvent(QResizeEvent arg__1) {
        qtd_QSplitter_resizeEvent_QResizeEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QSplitter_sizeHint_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QSplitter_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QSplitter);
    }

    static QSplitter __getObject(void* nativeId) {
        return static_cast!(QSplitter)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QSplitter_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QSplitter_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QSplitter(nativeId, initFlags);
        QSplitter.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(int,int)("splitterMoved"), index));

    }

    public alias void __isQtType_QSplitter;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    public struct Range {
        public static Range opCall(int min, int max) {
            Range rng;
            rng.minimum = min;
            rng.maximum = max;
            return rng;
        }

        public int minimum;
        public int maximum;
    }

    public final Range getRange(int index) {
        Range range;
        getRange(index, &range.minimum, &range.maximum);
        return range;
    }

}

// C wrappers for signal emitters
private extern(C) void  qtd_QSplitter_splitterMoved_int_int(void* __this_nativeId,
 int pos0,
 int index1);

// C wrappers
private extern(C) void* qtd_QSplitter_QSplitter_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QSplitter_QSplitter_Orientation_QWidget(void *d_ptr,
 int arg__1,
 void* parent1);
private extern(C) void  qtd_QSplitter_addWidget_QWidget(void* __this_nativeId,
 void* widget0);
private extern(C) bool  qtd_QSplitter_childrenCollapsible_const(void* __this_nativeId);
private extern(C) int  qtd_QSplitter_closestLegalPosition_int_int(void* __this_nativeId,
 int arg__1,
 int arg__2);
private extern(C) int  qtd_QSplitter_count_const(void* __this_nativeId);
private extern(C) void  qtd_QSplitter_getRange_int_nativepointerint_nativepointerint_const(void* __this_nativeId,
 int index0,
 int* arg__2,
 int* arg__3);
private extern(C) void*  qtd_QSplitter_handle_int_const(void* __this_nativeId,
 int index0);
private extern(C) int  qtd_QSplitter_handleWidth_const(void* __this_nativeId);
private extern(C) int  qtd_QSplitter_indexOf_QWidget_const(void* __this_nativeId,
 void* w0);
private extern(C) void  qtd_QSplitter_insertWidget_int_QWidget(void* __this_nativeId,
 int index0,
 void* widget1);
private extern(C) bool  qtd_QSplitter_isCollapsible_int_const(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QSplitter_moveSplitter_int_int(void* __this_nativeId,
 int pos0,
 int index1);
private extern(C) bool  qtd_QSplitter_opaqueResize_const(void* __this_nativeId);
private extern(C) void  qtd_QSplitter_writeTo_QTextStream(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QSplitter_readFrom_QTextStream(void* __this_nativeId,
 void* arg__1);
private extern(C) int  qtd_QSplitter_orientation_const(void* __this_nativeId);
private extern(C) void  qtd_QSplitter_refresh(void* __this_nativeId);
private extern(C) bool  qtd_QSplitter_restoreState_QByteArray(void* __this_nativeId,
 void* state0);
private extern(C) void*  qtd_QSplitter_saveState_const(void* __this_nativeId);
private extern(C) void  qtd_QSplitter_setChildrenCollapsible_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QSplitter_setCollapsible_int_bool(void* __this_nativeId,
 int index0,
 bool arg__2);
private extern(C) void  qtd_QSplitter_setHandleWidth_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QSplitter_setOpaqueResize_bool(void* __this_nativeId,
 bool opaque0);
private extern(C) void  qtd_QSplitter_setOrientation_Orientation(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QSplitter_setRubberBand_int(void* __this_nativeId,
 int position0);
private extern(C) void  qtd_QSplitter_setSizes_QList(void* __this_nativeId,
 void* list0);
private extern(C) void  qtd_QSplitter_setStretchFactor_int_int(void* __this_nativeId,
 int index0,
 int stretch1);
private extern(C) void  qtd_QSplitter_sizes_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QSplitter_widget_int_const(void* __this_nativeId,
 int index0);
private extern(C) void  qtd_QSplitter_changeEvent_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QSplitter_childEvent_QChildEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void*  qtd_QSplitter_createHandle(void* __this_nativeId);
private extern(C) bool  qtd_QSplitter_event_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QSplitter_minimumSizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QSplitter_resizeEvent_QResizeEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QSplitter_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void* function(void *dId) qtd_QSplitter_createHandle_dispatch; }
extern(C) void* qtd_export_QSplitter_createHandle_dispatch(void *dId){
    auto d_object = cast(QSplitter) dId;
    QSplitterHandle ret_value = d_object.createHandle();
    return ret_value is null? null : ret_value.qtdNativeId;
}

private extern (C) void qtd_QSplitter_initCallBacks(void* virtuals);

extern(C) void static_init_QSplitter() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QSplitter_createHandle_dispatch;
    qtd_QSplitter_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QSplitter_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QSplitter) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QSplitter_splitterMoved_handle(void* dId, void** args) {
        auto d_object = cast(QSplitter) dId;
        auto pos0 = *(cast(int*)args[1]);
        auto index1 = *(cast(int*)args[2]);
        //d_object.splitterMoved_emit(pos0, index1);
}*/

extern(C) QMetaObjectNative* qtd_QSplitter_staticMetaObject();

extern(C) void qtd_QSplitter_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QSplitter_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
