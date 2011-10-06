module qt.gui.QTimeEdit;

public import qt.gui.QTimeEdit_aux;
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
public import qt.gui.QValidator;
public import qt.gui.QPaintDevice;
public import qt.gui.QContextMenuEvent;
public import qt.gui.QPaintEngine;
public import qt.gui.QWheelEvent;
public import qt.gui.QDropEvent;
public import qt.gui.QActionEvent;
public import qt.gui.QTabletEvent;
public import qt.core.QDateTime;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QDateTimeEdit;
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
public import qt.core.QTime;
public import qt.gui.QMoveEvent;
public import qt.core.QDate;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTimeEdit : QDateTimeEdit
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
        void* ret = qtd_QTimeEdit_QTimeEdit_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QTime) time, QWidget parent_ = null) {
        void* ret = qtd_QTimeEdit_QTimeEdit_QTime_QWidget(cast(void*) this, time is null ? null : (cast(QTime)time).qtdNativeId, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QTimeEdit_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QTimeEdit);
    }

    static QTimeEdit __getObject(void* nativeId) {
        return static_cast!(QTimeEdit)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QTimeEdit_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QTimeEdit_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QTimeEdit(nativeId, initFlags);
        QTimeEdit.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QTimeEdit;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTimeEdit_QTimeEdit_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QTimeEdit_QTimeEdit_QTime_QWidget(void *d_ptr,
 void* time0,
 void* parent1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QTimeEdit_initCallBacks(void* virtuals);

extern(C) void static_init_QTimeEdit() {
    qtd_QTimeEdit_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QTimeEdit_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QTimeEdit) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QTimeEdit_editingFinished_handle(void* dId, void** args) {
        auto d_object = cast(QTimeEdit) dId;
        //d_object.editingFinished_emit();
}*/
/*private extern(C) void qtd_QTimeEdit_dateChanged_handle(void* dId, void** args) {
        auto d_object = cast(QTimeEdit) dId;
        scope date0 = new QDate(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.dateChanged_emit(date0);
}*/
/*private extern(C) void qtd_QTimeEdit_dateTimeChanged_handle(void* dId, void** args) {
        auto d_object = cast(QTimeEdit) dId;
        scope date0 = new QDateTime(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.dateTimeChanged_emit(date0);
}*/
/*private extern(C) void qtd_QTimeEdit_timeChanged_handle(void* dId, void** args) {
        auto d_object = cast(QTimeEdit) dId;
        scope date0 = new QTime(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.timeChanged_emit(date0);
}*/

extern(C) QMetaObjectNative* qtd_QTimeEdit_staticMetaObject();

extern(C) void qtd_QTimeEdit_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QTimeEdit_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
