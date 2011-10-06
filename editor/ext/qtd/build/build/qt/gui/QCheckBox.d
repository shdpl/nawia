module qt.gui.QCheckBox;

public import qt.gui.QCheckBox_aux;
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


public class QCheckBox : QAbstractButton
{

    private static const string[] __signalSignatures = [
            "stateChanged(int)"    ];

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

    protected final void stateChanged(int arg__1) {
        qtd_QCheckBox_stateChanged_int(qtdNativeId, arg__1);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QCheckBox_QCheckBox_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string text, QWidget parent_ = null) {
        void* ret = qtd_QCheckBox_QCheckBox_string_QWidget(cast(void*) this, text, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final Qt.CheckState checkState() const {
        return cast(Qt.CheckState) qtd_QCheckBox_checkState_const(qtdNativeId);
    }

    protected final void initStyleOption(QStyleOptionButton option) const {
        qtd_QCheckBox_initStyleOption_nativepointerQStyleOptionButton_const(qtdNativeId, option is null ? null : option.qtdNativeId);
    }

    public final bool isTristate() const {
        return qtd_QCheckBox_isTristate_const(qtdNativeId);
    }

    public final void setCheckState(Qt.CheckState state) {
        qtd_QCheckBox_setCheckState_CheckState(qtdNativeId, state);
    }

    public final void setTristate(bool y = true) {
        qtd_QCheckBox_setTristate_bool(qtdNativeId, y);
    }

    protected void checkStateSet() {
        qtd_QCheckBox_checkStateSet(qtdNativeId);
    }

    public bool event(QEvent e) {
        return qtd_QCheckBox_event_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected bool hitButton(const(QPoint) pos) const {
        return qtd_QCheckBox_hitButton_QPoint_const(qtdNativeId, pos);
    }

    protected void mouseMoveEvent(QMouseEvent arg__1) {
        qtd_QCheckBox_mouseMoveEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void nextCheckState() {
        qtd_QCheckBox_nextCheckState(qtdNativeId);
    }

    protected void paintEvent(QPaintEvent arg__1) {
        qtd_QCheckBox_paintEvent_QPaintEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QCheckBox_sizeHint_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QCheckBox_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QCheckBox);
    }

    static QCheckBox __getObject(void* nativeId) {
        return static_cast!(QCheckBox)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QCheckBox_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QCheckBox_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QCheckBox(nativeId, initFlags);
        QCheckBox.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(int)("stateChanged"), index));

    }

    public alias void __isQtType_QCheckBox;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QCheckBox_stateChanged_int(void* __this_nativeId,
 int arg__1);

// C wrappers
private extern(C) void* qtd_QCheckBox_QCheckBox_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QCheckBox_QCheckBox_string_QWidget(void *d_ptr,
 string text0,
 void* parent1);
private extern(C) int  qtd_QCheckBox_checkState_const(void* __this_nativeId);
private extern(C) void  qtd_QCheckBox_initStyleOption_nativepointerQStyleOptionButton_const(void* __this_nativeId,
 void* option0);
private extern(C) bool  qtd_QCheckBox_isTristate_const(void* __this_nativeId);
private extern(C) void  qtd_QCheckBox_setCheckState_CheckState(void* __this_nativeId,
 int state0);
private extern(C) void  qtd_QCheckBox_setTristate_bool(void* __this_nativeId,
 bool y0);
private extern(C) void  qtd_QCheckBox_checkStateSet(void* __this_nativeId);
private extern(C) bool  qtd_QCheckBox_event_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) bool  qtd_QCheckBox_hitButton_QPoint_const(void* __this_nativeId,
 QPoint pos0);
private extern(C) void  qtd_QCheckBox_mouseMoveEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QCheckBox_nextCheckState(void* __this_nativeId);
private extern(C) void  qtd_QCheckBox_paintEvent_QPaintEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QCheckBox_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QCheckBox_initCallBacks(void* virtuals);

extern(C) void static_init_QCheckBox() {
    qtd_QCheckBox_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QCheckBox_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QCheckBox) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QCheckBox_clicked_handle(void* dId, void** args) {
        auto d_object = cast(QCheckBox) dId;
        auto checked0 = *(cast(bool*)args[1]);
        //d_object.clicked_emit(checked0);
}*/
/*private extern(C) void qtd_QCheckBox_pressed_handle(void* dId, void** args) {
        auto d_object = cast(QCheckBox) dId;
        //d_object.pressed_emit();
}*/
/*private extern(C) void qtd_QCheckBox_released_handle(void* dId, void** args) {
        auto d_object = cast(QCheckBox) dId;
        //d_object.released_emit();
}*/
/*private extern(C) void qtd_QCheckBox_toggled_handle(void* dId, void** args) {
        auto d_object = cast(QCheckBox) dId;
        auto checked0 = *(cast(bool*)args[1]);
        //d_object.toggled_emit(checked0);
}*/
/*private extern(C) void qtd_QCheckBox_stateChanged_handle(void* dId, void** args) {
        auto d_object = cast(QCheckBox) dId;
        auto arg__1 = *(cast(int*)args[1]);
        //d_object.stateChanged_emit(arg__1);
}*/

extern(C) QMetaObjectNative* qtd_QCheckBox_staticMetaObject();

extern(C) void qtd_QCheckBox_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QCheckBox_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
