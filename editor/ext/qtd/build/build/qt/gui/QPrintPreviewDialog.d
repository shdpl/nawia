module qt.gui.QPrintPreviewDialog;

public import qt.gui.QPrintPreviewDialog_aux;
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
public import qt.gui.QDragMoveEvent;
public import qt.gui.QKeyEvent;
public import qt.core.QPoint;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.core.QEvent;
public import qt.gui.QDragLeaveEvent;
public import qt.gui.QPrinter;
public import qt.core.QSize;
public import qt.gui.QDialog;
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


public class QPrintPreviewDialog : QDialog
{

    private static const string[] __signalSignatures = [
            "paintRequested(QPrinter*)"    ];

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

    protected final void paintRequested(QPrinter printer) {
        qtd_QPrintPreviewDialog_paintRequested_QPrinter(qtdNativeId, printer is null ? null : printer.qtdNativeId);
    }
// Functions

    public this(QPrinter printer, QWidget parent_ = null, int flags = 0) {
        void* ret = qtd_QPrintPreviewDialog_QPrintPreviewDialog_QPrinter_QWidget_WindowFlags(cast(void*) this, printer is null ? null : printer.qtdNativeId, parent_ is null ? null : parent_.qtdNativeId, flags);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(QWidget parent_ = null, int flags = 0) {
        void* ret = qtd_QPrintPreviewDialog_QPrintPreviewDialog_QWidget_WindowFlags(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId, flags);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void open() {
        qtd_QPrintPreviewDialog_open(qtdNativeId);
    }

    public final QPrinter printer() {
        void* ret = qtd_QPrintPreviewDialog_printer(qtdNativeId);
        QPrinter __d_return_value = qtd_QPrinter_from_ptr(ret);

        return __d_return_value;
    }

    public void done(int result) {
        qtd_QPrintPreviewDialog_done_int(qtdNativeId, result);
    }

    public void setVisible(bool visible) {
        qtd_QPrintPreviewDialog_setVisible_bool(qtdNativeId, visible);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QPrintPreviewDialog_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QPrintPreviewDialog);
    }

    static QPrintPreviewDialog __getObject(void* nativeId) {
        return static_cast!(QPrintPreviewDialog)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QPrintPreviewDialog_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QPrintPreviewDialog_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QPrintPreviewDialog(nativeId, initFlags);
        QPrintPreviewDialog.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(QPrinter)("paintRequested"), index));

    }

    public alias void __isQtType_QPrintPreviewDialog;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QPrintPreviewDialog_paintRequested_QPrinter(void* __this_nativeId,
 void* printer0);

// C wrappers
private extern(C) void* qtd_QPrintPreviewDialog_QPrintPreviewDialog_QPrinter_QWidget_WindowFlags(void *d_ptr,
 void* printer0,
 void* parent1,
 int flags2);
private extern(C) void* qtd_QPrintPreviewDialog_QPrintPreviewDialog_QWidget_WindowFlags(void *d_ptr,
 void* parent0,
 int flags1);
private extern(C) void  qtd_QPrintPreviewDialog_open(void* __this_nativeId);
private extern(C) void*  qtd_QPrintPreviewDialog_printer(void* __this_nativeId);
private extern(C) void  qtd_QPrintPreviewDialog_done_int(void* __this_nativeId,
 int result0);
private extern(C) void  qtd_QPrintPreviewDialog_setVisible_bool(void* __this_nativeId,
 bool visible0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QPrintPreviewDialog_initCallBacks(void* virtuals);

extern(C) void static_init_QPrintPreviewDialog() {
    qtd_QPrintPreviewDialog_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QPrintPreviewDialog_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QPrintPreviewDialog) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QPrintPreviewDialog_accepted_handle(void* dId, void** args) {
        auto d_object = cast(QPrintPreviewDialog) dId;
        //d_object.accepted_emit();
}*/
/*private extern(C) void qtd_QPrintPreviewDialog_finished_handle(void* dId, void** args) {
        auto d_object = cast(QPrintPreviewDialog) dId;
        auto result0 = *(cast(int*)args[1]);
        //d_object.finished_emit(result0);
}*/
/*private extern(C) void qtd_QPrintPreviewDialog_rejected_handle(void* dId, void** args) {
        auto d_object = cast(QPrintPreviewDialog) dId;
        //d_object.rejected_emit();
}*/
/*private extern(C) void qtd_QPrintPreviewDialog_paintRequested_handle(void* dId, void** args) {
        auto d_object = cast(QPrintPreviewDialog) dId;
        scope printer0 = new QPrinter(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.paintRequested_emit(printer0);
}*/

extern(C) QMetaObjectNative* qtd_QPrintPreviewDialog_staticMetaObject();

extern(C) void qtd_QPrintPreviewDialog_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QPrintPreviewDialog_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
