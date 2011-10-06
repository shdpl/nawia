module qt.gui.QRadioButton;

public import qt.gui.QRadioButton_aux;
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
public import qt.gui.QActionEvent;
public import qt.gui.QDropEvent;
public import qt.gui.QTabletEvent;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QFocusEvent;
public import qt.gui.QResizeEvent;
public import qt.core.QPoint;
public import qt.gui.QDragMoveEvent;
public import qt.gui.QKeyEvent;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.core.QEvent;
public import qt.gui.QDragLeaveEvent;
public import qt.core.QSize;
public import qt.gui.QStyleOptionButton;
public import qt.gui.QPaintEvent;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QAbstractButton;
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QRadioButton : QAbstractButton
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
        void* ret = qtd_QRadioButton_QRadioButton_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string text, QWidget parent_ = null) {
        void* ret = qtd_QRadioButton_QRadioButton_string_QWidget(cast(void*) this, text, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected final void initStyleOption(QStyleOptionButton button) const {
        qtd_QRadioButton_initStyleOption_nativepointerQStyleOptionButton_const(qtdNativeId, button is null ? null : button.qtdNativeId);
    }

    public bool event(QEvent e) {
        return qtd_QRadioButton_event_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected bool hitButton(const(QPoint) arg__1) const {
        return qtd_QRadioButton_hitButton_QPoint_const(qtdNativeId, arg__1);
    }

    protected void mouseMoveEvent(QMouseEvent arg__1) {
        qtd_QRadioButton_mouseMoveEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void paintEvent(QPaintEvent arg__1) {
        qtd_QRadioButton_paintEvent_QPaintEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QRadioButton_sizeHint_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QRadioButton_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QRadioButton);
    }

    static QRadioButton __getObject(void* nativeId) {
        return static_cast!(QRadioButton)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QRadioButton_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QRadioButton_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QRadioButton(nativeId, initFlags);
        QRadioButton.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QRadioButton;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QRadioButton_QRadioButton_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QRadioButton_QRadioButton_string_QWidget(void *d_ptr,
 string text0,
 void* parent1);
private extern(C) void  qtd_QRadioButton_initStyleOption_nativepointerQStyleOptionButton_const(void* __this_nativeId,
 void* button0);
private extern(C) bool  qtd_QRadioButton_event_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) bool  qtd_QRadioButton_hitButton_QPoint_const(void* __this_nativeId,
 QPoint arg__1);
private extern(C) void  qtd_QRadioButton_mouseMoveEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QRadioButton_paintEvent_QPaintEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QRadioButton_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QRadioButton_initCallBacks(void* virtuals);

extern(C) void static_init_QRadioButton() {
    qtd_QRadioButton_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QRadioButton_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QRadioButton) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QRadioButton_clicked_handle(void* dId, void** args) {
        auto d_object = cast(QRadioButton) dId;
        auto checked0 = *(cast(bool*)args[1]);
        //d_object.clicked_emit(checked0);
}*/
/*private extern(C) void qtd_QRadioButton_pressed_handle(void* dId, void** args) {
        auto d_object = cast(QRadioButton) dId;
        //d_object.pressed_emit();
}*/
/*private extern(C) void qtd_QRadioButton_released_handle(void* dId, void** args) {
        auto d_object = cast(QRadioButton) dId;
        //d_object.released_emit();
}*/
/*private extern(C) void qtd_QRadioButton_toggled_handle(void* dId, void** args) {
        auto d_object = cast(QRadioButton) dId;
        auto checked0 = *(cast(bool*)args[1]);
        //d_object.toggled_emit(checked0);
}*/

extern(C) QMetaObjectNative* qtd_QRadioButton_staticMetaObject();

extern(C) void qtd_QRadioButton_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QRadioButton_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
