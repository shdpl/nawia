module qt.gui.QPrintDialog;

public import qt.gui.QPrintDialog_aux;
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
public import qt.gui.QAbstractPrintDialog;
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
public import qt.gui.QDragMoveEvent;
public import qt.gui.QKeyEvent;
public import qt.core.QPoint;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.core.QEvent;
public import qt.gui.QDragLeaveEvent;
public import qt.gui.QPrinter;
public import qt.gui.QAbstractPrintDialog;
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


public class QPrintDialog : QAbstractPrintDialog
{

    private static const string[] __signalSignatures = [
            "accepted(QPrinter*)"    ];

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

    protected final void accepted(QPrinter printer) {
        qtd_QPrintDialog_accepted_QPrinter(qtdNativeId, printer is null ? null : printer.qtdNativeId);
    }
// Functions

    public this(QPrinter printer, QWidget parent_ = null) {
        void* ret = qtd_QPrintDialog_QPrintDialog_QPrinter_QWidget(cast(void*) this, printer is null ? null : printer.qtdNativeId, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QWidget parent_ = null) {
        void* ret = qtd_QPrintDialog_QPrintDialog_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void open() {
        qtd_QPrintDialog_open(qtdNativeId);
    }

    public final int options() const {
        return qtd_QPrintDialog_options_const(qtdNativeId);
    }

    public final void setOption(QAbstractPrintDialog.PrintDialogOption option, bool on = true) {
        qtd_QPrintDialog_setOption_PrintDialogOption_bool(qtdNativeId, option, on);
    }

    public final void setOptions(int options) {
        qtd_QPrintDialog_setOptions_PrintDialogOptions(qtdNativeId, options);
    }

    public final bool testOption(QAbstractPrintDialog.PrintDialogOption option) const {
        return qtd_QPrintDialog_testOption_PrintDialogOption_const(qtdNativeId, option);
    }

    public void done(int result) {
        qtd_QPrintDialog_done_int(qtdNativeId, result);
    }

    public int exec() {
        return qtd_QPrintDialog_exec(qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QPrintDialog_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QPrintDialog);
    }

    static QPrintDialog __getObject(void* nativeId) {
        return static_cast!(QPrintDialog)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QPrintDialog_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QPrintDialog_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QPrintDialog(nativeId, initFlags);
        QPrintDialog.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(QPrinter)("accepted"), index));

    }

    public alias void __isQtType_QPrintDialog;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QPrintDialog_accepted_QPrinter(void* __this_nativeId,
 void* printer0);

// C wrappers
private extern(C) void* qtd_QPrintDialog_QPrintDialog_QPrinter_QWidget(void *d_ptr,
 void* printer0,
 void* parent1);
private extern(C) void* qtd_QPrintDialog_QPrintDialog_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QPrintDialog_open(void* __this_nativeId);
private extern(C) int  qtd_QPrintDialog_options_const(void* __this_nativeId);
private extern(C) void  qtd_QPrintDialog_setOption_PrintDialogOption_bool(void* __this_nativeId,
 int option0,
 bool on1);
private extern(C) void  qtd_QPrintDialog_setOptions_PrintDialogOptions(void* __this_nativeId,
 int options0);
private extern(C) bool  qtd_QPrintDialog_testOption_PrintDialogOption_const(void* __this_nativeId,
 int option0);
private extern(C) void  qtd_QPrintDialog_done_int(void* __this_nativeId,
 int result0);
private extern(C) int  qtd_QPrintDialog_exec(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern int function(void *dId) qtd_QPrintDialog_exec_dispatch; }
extern(C) int qtd_export_QPrintDialog_exec_dispatch(void *dId){
    auto d_object = cast(QPrintDialog) dId;
    auto return_value = d_object.exec();
    return return_value;
}

private extern (C) void qtd_QPrintDialog_initCallBacks(void* virtuals);

extern(C) void static_init_QPrintDialog() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QPrintDialog_exec_dispatch;
    qtd_QPrintDialog_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QPrintDialog_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QPrintDialog) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QPrintDialog_accepted_handle(void* dId, void** args) {
        auto d_object = cast(QPrintDialog) dId;
        //d_object.accepted_emit();
}*/
/*private extern(C) void qtd_QPrintDialog_finished_handle(void* dId, void** args) {
        auto d_object = cast(QPrintDialog) dId;
        auto result0 = *(cast(int*)args[1]);
        //d_object.finished_emit(result0);
}*/
/*private extern(C) void qtd_QPrintDialog_rejected_handle(void* dId, void** args) {
        auto d_object = cast(QPrintDialog) dId;
        //d_object.rejected_emit();
}*/
/*private extern(C) void qtd_QPrintDialog_accepted_handle(void* dId, void** args) {
        auto d_object = cast(QPrintDialog) dId;
        scope printer0 = new QPrinter(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.accepted_emit(printer0);
}*/

extern(C) QMetaObjectNative* qtd_QPrintDialog_staticMetaObject();

extern(C) void qtd_QPrintDialog_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QPrintDialog_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
