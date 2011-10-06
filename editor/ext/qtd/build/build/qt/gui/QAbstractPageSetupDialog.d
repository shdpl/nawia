module qt.gui.QAbstractPageSetupDialog;

public import qt.gui.QAbstractPageSetupDialog_aux;
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


public abstract class QAbstractPageSetupDialog : QDialog
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

    public this(QPrinter printer, QWidget parent_ = null) {
        void* ret = qtd_QAbstractPageSetupDialog_QAbstractPageSetupDialog_QPrinter_QWidget(cast(void*) this, printer is null ? null : printer.qtdNativeId, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QPrinter printer() {
        void* ret = qtd_QAbstractPageSetupDialog_printer(qtdNativeId);
        QPrinter __d_return_value = qtd_QPrinter_from_ptr(ret);

        return __d_return_value;
    }

    public void done(int result) {
        qtd_QAbstractPageSetupDialog_done_int(qtdNativeId, result);
    }

    public abstract int exec();
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QAbstractPageSetupDialog_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QAbstractPageSetupDialog);
    }

    static QAbstractPageSetupDialog __getObject(void* nativeId) {
        return static_cast!(QAbstractPageSetupDialog)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QAbstractPageSetupDialog_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QAbstractPageSetupDialog_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QAbstractPageSetupDialog_ConcreteWrapper(nativeId, initFlags);
        QAbstractPageSetupDialog.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QAbstractPageSetupDialog;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

    public class QAbstractPageSetupDialog_ConcreteWrapper : QAbstractPageSetupDialog {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public int exec() {
            return qtd_QAbstractPageSetupDialog_exec(qtdNativeId);
        }
    }


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QAbstractPageSetupDialog_QAbstractPageSetupDialog_QPrinter_QWidget(void *d_ptr,
 void* printer0,
 void* parent1);
private extern(C) void*  qtd_QAbstractPageSetupDialog_printer(void* __this_nativeId);
private extern(C) void  qtd_QAbstractPageSetupDialog_done_int(void* __this_nativeId,
 int result0);
private extern(C) int  qtd_QAbstractPageSetupDialog_exec(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern int function(void *dId) qtd_QAbstractPageSetupDialog_exec_dispatch; }
extern(C) int qtd_export_QAbstractPageSetupDialog_exec_dispatch(void *dId){
    auto d_object = cast(QAbstractPageSetupDialog) dId;
    auto return_value = d_object.exec();
    return return_value;
}

private extern (C) void qtd_QAbstractPageSetupDialog_initCallBacks(void* virtuals);

extern(C) void static_init_QAbstractPageSetupDialog() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QAbstractPageSetupDialog_exec_dispatch;
    qtd_QAbstractPageSetupDialog_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QAbstractPageSetupDialog_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractPageSetupDialog) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QAbstractPageSetupDialog_accepted_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractPageSetupDialog) dId;
        //d_object.accepted_emit();
}*/
/*private extern(C) void qtd_QAbstractPageSetupDialog_finished_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractPageSetupDialog) dId;
        auto result0 = *(cast(int*)args[1]);
        //d_object.finished_emit(result0);
}*/
/*private extern(C) void qtd_QAbstractPageSetupDialog_rejected_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractPageSetupDialog) dId;
        //d_object.rejected_emit();
}*/

extern(C) QMetaObjectNative* qtd_QAbstractPageSetupDialog_staticMetaObject();

extern(C) void qtd_QAbstractPageSetupDialog_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QAbstractPageSetupDialog_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
