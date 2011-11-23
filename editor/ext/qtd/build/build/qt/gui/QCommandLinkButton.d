module qt.gui.QCommandLinkButton;

public import qt.gui.QCommandLinkButton_aux;
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
public import qt.gui.QPushButton;
public import qt.gui.QFocusEvent;
public import qt.gui.QResizeEvent;
public import qt.gui.QDragMoveEvent;
public import qt.core.QPoint;
public import qt.gui.QKeyEvent;
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


public class QCommandLinkButton : QPushButton
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
        void* ret = qtd_QCommandLinkButton_QCommandLinkButton_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string text, QWidget parent_ = null) {
        void* ret = qtd_QCommandLinkButton_QCommandLinkButton_string_QWidget(cast(void*) this, text, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string text, string description, QWidget parent_ = null) {
        void* ret = qtd_QCommandLinkButton_QCommandLinkButton_string_string_QWidget(cast(void*) this, text, description, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string description() const {
        string res;
        qtd_QCommandLinkButton_description_const(qtdNativeId, &res);
        return res;
    }

    public final void setDescription(string description) {
        qtd_QCommandLinkButton_setDescription_string(qtdNativeId, description);
    }

    public bool event(QEvent e) {
        return qtd_QCommandLinkButton_event_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    public int heightForWidth(int arg__1) const {
        return qtd_QCommandLinkButton_heightForWidth_int_const(qtdNativeId, arg__1);
    }

    public QSize minimumSizeHint() const {
        QSize res;
        qtd_QCommandLinkButton_minimumSizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void paintEvent(QPaintEvent arg__1) {
        qtd_QCommandLinkButton_paintEvent_QPaintEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QCommandLinkButton_sizeHint_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QCommandLinkButton_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QCommandLinkButton);
    }

    static QCommandLinkButton __getObject(void* nativeId) {
        return static_cast!(QCommandLinkButton)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QCommandLinkButton_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QCommandLinkButton_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QCommandLinkButton(nativeId, initFlags);
        QCommandLinkButton.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QCommandLinkButton;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QCommandLinkButton_QCommandLinkButton_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QCommandLinkButton_QCommandLinkButton_string_QWidget(void *d_ptr,
 string text0,
 void* parent1);
private extern(C) void* qtd_QCommandLinkButton_QCommandLinkButton_string_string_QWidget(void *d_ptr,
 string text0,
 string description1,
 void* parent2);
private extern(C) void  qtd_QCommandLinkButton_description_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QCommandLinkButton_setDescription_string(void* __this_nativeId,
 string description0);
private extern(C) bool  qtd_QCommandLinkButton_event_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) int  qtd_QCommandLinkButton_heightForWidth_int_const(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QCommandLinkButton_minimumSizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QCommandLinkButton_paintEvent_QPaintEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QCommandLinkButton_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QCommandLinkButton_initCallBacks(void* virtuals);

extern(C) void static_init_QCommandLinkButton() {
    qtd_QCommandLinkButton_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QCommandLinkButton_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QCommandLinkButton) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QCommandLinkButton_clicked_handle(void* dId, void** args) {
        auto d_object = cast(QCommandLinkButton) dId;
        auto checked0 = *(cast(bool*)args[1]);
        //d_object.clicked_emit(checked0);
}*/
/*private extern(C) void qtd_QCommandLinkButton_pressed_handle(void* dId, void** args) {
        auto d_object = cast(QCommandLinkButton) dId;
        //d_object.pressed_emit();
}*/
/*private extern(C) void qtd_QCommandLinkButton_released_handle(void* dId, void** args) {
        auto d_object = cast(QCommandLinkButton) dId;
        //d_object.released_emit();
}*/
/*private extern(C) void qtd_QCommandLinkButton_toggled_handle(void* dId, void** args) {
        auto d_object = cast(QCommandLinkButton) dId;
        auto checked0 = *(cast(bool*)args[1]);
        //d_object.toggled_emit(checked0);
}*/

extern(C) QMetaObjectNative* qtd_QCommandLinkButton_staticMetaObject();

extern(C) void qtd_QCommandLinkButton_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QCommandLinkButton_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
