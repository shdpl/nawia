module qt.gui.QErrorMessage;

public import qt.gui.QErrorMessage_aux;
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


public class QErrorMessage : QDialog
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
        void* ret = qtd_QErrorMessage_QErrorMessage_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void showMessage(string message) {
        qtd_QErrorMessage_showMessage_string(qtdNativeId, message);
    }

    public final void showMessage(string message, string type) {
        qtd_QErrorMessage_showMessage_string_string(qtdNativeId, message, type);
    }

    protected void changeEvent(QEvent e) {
        qtd_QErrorMessage_changeEvent_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    public void done(int arg__1) {
        qtd_QErrorMessage_done_int(qtdNativeId, arg__1);
    }

    public static QErrorMessage qtHandler() {
        void *ret = qtd_QErrorMessage_qtHandler();
        QErrorMessage __d_return_value = QErrorMessage.__getObject(ret);
        return __d_return_value;
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "showMessage(QString)", 
            "showMessage(QString,QString)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QErrorMessage_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QErrorMessage);
    }

    static QErrorMessage __getObject(void* nativeId) {
        return static_cast!(QErrorMessage)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QErrorMessage_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QErrorMessage_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QErrorMessage(nativeId, initFlags);
        QErrorMessage.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(string)("showMessage"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(string,string)("showMessage"), index));

    }

    public alias void __isQtType_QErrorMessage;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QErrorMessage_QErrorMessage_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QErrorMessage_showMessage_string(void* __this_nativeId,
 string message0);
private extern(C) void  qtd_QErrorMessage_showMessage_string_string(void* __this_nativeId,
 string message0,
 string type1);
private extern(C) void  qtd_QErrorMessage_changeEvent_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QErrorMessage_done_int(void* __this_nativeId,
 int arg__1);
private extern(C) void*  qtd_QErrorMessage_qtHandler();
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QErrorMessage_initCallBacks(void* virtuals);

extern(C) void static_init_QErrorMessage() {
    qtd_QErrorMessage_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QErrorMessage_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QErrorMessage) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QErrorMessage_accepted_handle(void* dId, void** args) {
        auto d_object = cast(QErrorMessage) dId;
        //d_object.accepted_emit();
}*/
/*private extern(C) void qtd_QErrorMessage_finished_handle(void* dId, void** args) {
        auto d_object = cast(QErrorMessage) dId;
        auto result0 = *(cast(int*)args[1]);
        //d_object.finished_emit(result0);
}*/
/*private extern(C) void qtd_QErrorMessage_rejected_handle(void* dId, void** args) {
        auto d_object = cast(QErrorMessage) dId;
        //d_object.rejected_emit();
}*/

extern(C) QMetaObjectNative* qtd_QErrorMessage_staticMetaObject();

extern(C) void qtd_QErrorMessage_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QErrorMessage_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
