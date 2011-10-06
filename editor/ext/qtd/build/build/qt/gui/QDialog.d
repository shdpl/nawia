module qt.gui.QDialog;

public import qt.gui.QDialog_aux;
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
public import qt.gui.QShowEvent;
public import qt.gui.QInputMethodEvent;
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


public class QDialog : QWidget
{
    public enum DialogCode {
        Rejected = 0,
        Accepted = 1
    }

    alias DialogCode.Rejected Rejected;
    alias DialogCode.Accepted Accepted;


    private static const string[] __signalSignatures = [
            "accepted()", 
            "finished(int)", 
            "rejected()"    ];

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

    protected final void accepted() {
        qtd_QDialog_accepted(qtdNativeId);
    }

    protected final void finished(int result) {
        qtd_QDialog_finished_int(qtdNativeId, result);
    }

    protected final void rejected() {
        qtd_QDialog_rejected(qtdNativeId);
    }
// Functions

    public this(QWidget parent_ = null, int f = 0) {
        void* ret = qtd_QDialog_QDialog_QWidget_WindowFlags(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId, f);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected final void adjustPosition(QWidget arg__1) {
        qtd_QDialog_adjustPosition_QWidget(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public int exec() {
        return qtd_QDialog_exec(qtdNativeId);
    }

    public final bool isSizeGripEnabled() const {
        return qtd_QDialog_isSizeGripEnabled_const(qtdNativeId);
    }

    public void open() {
        qtd_QDialog_open(qtdNativeId);
    }

    public final int result() const {
        return qtd_QDialog_result_const(qtdNativeId);
    }

    public final void setModal(bool modal) {
        qtd_QDialog_setModal_bool(qtdNativeId, modal);
    }

    public final void setResult(int r) {
        qtd_QDialog_setResult_int(qtdNativeId, r);
    }

    public final void setSizeGripEnabled(bool arg__1) {
        qtd_QDialog_setSizeGripEnabled_bool(qtdNativeId, arg__1);
    }

    public void accept() {
        qtd_QDialog_accept(qtdNativeId);
    }

    protected void closeEvent(QCloseEvent arg__1) {
        qtd_QDialog_closeEvent_QCloseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void contextMenuEvent(QContextMenuEvent arg__1) {
        qtd_QDialog_contextMenuEvent_QContextMenuEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public void done(int arg__1) {
        qtd_QDialog_done_int(qtdNativeId, arg__1);
    }

    public bool eventFilter(QObject arg__1, QEvent arg__2) {
        return qtd_QDialog_eventFilter_QObject_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId, arg__2 is null ? null : arg__2.qtdNativeId);
    }

    protected void keyPressEvent(QKeyEvent arg__1) {
        qtd_QDialog_keyPressEvent_QKeyEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QSize minimumSizeHint() const {
        QSize res;
        qtd_QDialog_minimumSizeHint_const(qtdNativeId, &res);
        return res;
    }

    public void reject() {
        qtd_QDialog_reject(qtdNativeId);
    }

    protected void resizeEvent(QResizeEvent arg__1) {
        qtd_QDialog_resizeEvent_QResizeEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public void setVisible(bool visible) {
        qtd_QDialog_setVisible_bool(qtdNativeId, visible);
    }

    protected void showEvent(QShowEvent arg__1) {
        qtd_QDialog_showEvent_QShowEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QDialog_sizeHint_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "exec()", 
            "open()", 
            "accept()", 
            "done(int)", 
            "reject()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QDialog_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QDialog);
    }

    static QDialog __getObject(void* nativeId) {
        return static_cast!(QDialog)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QDialog_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QDialog_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QDialog(nativeId, initFlags);
        QDialog.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!()("accepted"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(int)("finished"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!()("rejected"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("exec"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!()("open"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!()("accept"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!(int)("done"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!()("reject"), index));

    }

    public alias void __isQtType_QDialog;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QDialog_accepted(void* __this_nativeId);
private extern(C) void  qtd_QDialog_finished_int(void* __this_nativeId,
 int result0);
private extern(C) void  qtd_QDialog_rejected(void* __this_nativeId);

// C wrappers
private extern(C) void* qtd_QDialog_QDialog_QWidget_WindowFlags(void *d_ptr,
 void* parent0,
 int f1);
private extern(C) void  qtd_QDialog_adjustPosition_QWidget(void* __this_nativeId,
 void* arg__1);
private extern(C) int  qtd_QDialog_exec(void* __this_nativeId);
private extern(C) bool  qtd_QDialog_isSizeGripEnabled_const(void* __this_nativeId);
private extern(C) void  qtd_QDialog_open(void* __this_nativeId);
private extern(C) int  qtd_QDialog_result_const(void* __this_nativeId);
private extern(C) void  qtd_QDialog_setModal_bool(void* __this_nativeId,
 bool modal0);
private extern(C) void  qtd_QDialog_setResult_int(void* __this_nativeId,
 int r0);
private extern(C) void  qtd_QDialog_setSizeGripEnabled_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QDialog_accept(void* __this_nativeId);
private extern(C) void  qtd_QDialog_closeEvent_QCloseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QDialog_contextMenuEvent_QContextMenuEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QDialog_done_int(void* __this_nativeId,
 int arg__1);
private extern(C) bool  qtd_QDialog_eventFilter_QObject_QEvent(void* __this_nativeId,
 void* arg__1,
 void* arg__2);
private extern(C) void  qtd_QDialog_keyPressEvent_QKeyEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QDialog_minimumSizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QDialog_reject(void* __this_nativeId);
private extern(C) void  qtd_QDialog_resizeEvent_QResizeEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QDialog_setVisible_bool(void* __this_nativeId,
 bool visible0);
private extern(C) void  qtd_QDialog_showEvent_QShowEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QDialog_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId) qtd_QDialog_accept_dispatch; }
extern(C) void qtd_export_QDialog_accept_dispatch(void *dId){
    auto d_object = cast(QDialog) dId;
    d_object.accept();
}

extern(C){ extern void function(void *dId, int arg__1) qtd_QDialog_done_int_dispatch; }
extern(C) void qtd_export_QDialog_done_int_dispatch(void *dId, int arg__1){
    auto d_object = cast(QDialog) dId;
    d_object.done(arg__1);
}

extern(C){ extern void function(void *dId) qtd_QDialog_reject_dispatch; }
extern(C) void qtd_export_QDialog_reject_dispatch(void *dId){
    auto d_object = cast(QDialog) dId;
    d_object.reject();
}

extern(C){ extern void function(void *dId) qtd_QDialog_open_dispatch; }
extern(C) void qtd_export_QDialog_open_dispatch(void *dId){
    auto d_object = cast(QDialog) dId;
    d_object.open();
}

private extern (C) void qtd_QDialog_initCallBacks(void* virtuals);

extern(C) void static_init_QDialog() {
    void*[4] virt_arr;
    virt_arr[0] = &qtd_export_QDialog_accept_dispatch;
    virt_arr[1] = &qtd_export_QDialog_done_int_dispatch;
    virt_arr[2] = &qtd_export_QDialog_reject_dispatch;
    virt_arr[3] = &qtd_export_QDialog_open_dispatch;
    qtd_QDialog_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QDialog_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QDialog) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QDialog_accepted_handle(void* dId, void** args) {
        auto d_object = cast(QDialog) dId;
        //d_object.accepted_emit();
}*/
/*private extern(C) void qtd_QDialog_finished_handle(void* dId, void** args) {
        auto d_object = cast(QDialog) dId;
        auto result0 = *(cast(int*)args[1]);
        //d_object.finished_emit(result0);
}*/
/*private extern(C) void qtd_QDialog_rejected_handle(void* dId, void** args) {
        auto d_object = cast(QDialog) dId;
        //d_object.rejected_emit();
}*/

extern(C) QMetaObjectNative* qtd_QDialog_staticMetaObject();

extern(C) void qtd_QDialog_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QDialog_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
