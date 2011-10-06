module qt.gui.QStatusBar;

public import qt.gui.QStatusBar_aux;
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


public class QStatusBar : QWidget
{

    private static const string[] __signalSignatures = [
            "messageChanged(QString)"    ];

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

    protected final void messageChanged(string text) {
        qtd_QStatusBar_messageChanged_string(qtdNativeId, text);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QStatusBar_QStatusBar_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void addPermanentWidget(QWidget widget, int stretch = 0) {
        qtd_QStatusBar_addPermanentWidget_QWidget_int(qtdNativeId, widget is null ? null : widget.qtdNativeId, stretch);
    }

    public final void addWidget(QWidget widget, int stretch = 0) {
        qtd_QStatusBar_addWidget_QWidget_int(qtdNativeId, widget is null ? null : widget.qtdNativeId, stretch);
    }

    public final void clearMessage() {
        qtd_QStatusBar_clearMessage(qtdNativeId);
    }

    public final string currentMessage() const {
        string res;
        qtd_QStatusBar_currentMessage_const(qtdNativeId, &res);
        return res;
    }

    protected final void hideOrShow() {
        qtd_QStatusBar_hideOrShow(qtdNativeId);
    }

    public final int insertPermanentWidget(int index, QWidget widget, int stretch = 0) {
        return qtd_QStatusBar_insertPermanentWidget_int_QWidget_int(qtdNativeId, index, widget is null ? null : widget.qtdNativeId, stretch);
    }

    public final int insertWidget(int index, QWidget widget, int stretch = 0) {
        return qtd_QStatusBar_insertWidget_int_QWidget_int(qtdNativeId, index, widget is null ? null : widget.qtdNativeId, stretch);
    }

    public final bool isSizeGripEnabled() const {
        return qtd_QStatusBar_isSizeGripEnabled_const(qtdNativeId);
    }

    protected final void reformat() {
        qtd_QStatusBar_reformat(qtdNativeId);
    }

    public final void removeWidget(QWidget widget) {
        qtd_QStatusBar_removeWidget_QWidget(qtdNativeId, widget is null ? null : widget.qtdNativeId);
    }

    public final void setSizeGripEnabled(bool arg__1) {
        qtd_QStatusBar_setSizeGripEnabled_bool(qtdNativeId, arg__1);
    }

    public final void showMessage(string text, int timeout = 0) {
        qtd_QStatusBar_showMessage_string_int(qtdNativeId, text, timeout);
    }

    public bool event(QEvent arg__1) {
        return qtd_QStatusBar_event_QEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void paintEvent(QPaintEvent arg__1) {
        qtd_QStatusBar_paintEvent_QPaintEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void resizeEvent(QResizeEvent arg__1) {
        qtd_QStatusBar_resizeEvent_QResizeEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    protected void showEvent(QShowEvent arg__1) {
        qtd_QStatusBar_showEvent_QShowEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "clearMessage()", 
            "showMessage(QString,int)", 
            "showMessage(QString)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QStatusBar_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QStatusBar);
    }

    static QStatusBar __getObject(void* nativeId) {
        return static_cast!(QStatusBar)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QStatusBar_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QStatusBar_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QStatusBar(nativeId, initFlags);
        QStatusBar.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(string)("messageChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("clearMessage"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(string,int)("showMessage"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!(string)("showMessage"), index));

    }

    public alias void __isQtType_QStatusBar;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QStatusBar_messageChanged_string(void* __this_nativeId,
 string text0);

// C wrappers
private extern(C) void* qtd_QStatusBar_QStatusBar_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QStatusBar_addPermanentWidget_QWidget_int(void* __this_nativeId,
 void* widget0,
 int stretch1);
private extern(C) void  qtd_QStatusBar_addWidget_QWidget_int(void* __this_nativeId,
 void* widget0,
 int stretch1);
private extern(C) void  qtd_QStatusBar_clearMessage(void* __this_nativeId);
private extern(C) void  qtd_QStatusBar_currentMessage_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QStatusBar_hideOrShow(void* __this_nativeId);
private extern(C) int  qtd_QStatusBar_insertPermanentWidget_int_QWidget_int(void* __this_nativeId,
 int index0,
 void* widget1,
 int stretch2);
private extern(C) int  qtd_QStatusBar_insertWidget_int_QWidget_int(void* __this_nativeId,
 int index0,
 void* widget1,
 int stretch2);
private extern(C) bool  qtd_QStatusBar_isSizeGripEnabled_const(void* __this_nativeId);
private extern(C) void  qtd_QStatusBar_reformat(void* __this_nativeId);
private extern(C) void  qtd_QStatusBar_removeWidget_QWidget(void* __this_nativeId,
 void* widget0);
private extern(C) void  qtd_QStatusBar_setSizeGripEnabled_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QStatusBar_showMessage_string_int(void* __this_nativeId,
 string text0,
 int timeout1);
private extern(C) bool  qtd_QStatusBar_event_QEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QStatusBar_paintEvent_QPaintEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QStatusBar_resizeEvent_QResizeEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QStatusBar_showEvent_QShowEvent(void* __this_nativeId,
 void* arg__1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QStatusBar_initCallBacks(void* virtuals);

extern(C) void static_init_QStatusBar() {
    qtd_QStatusBar_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QStatusBar_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QStatusBar) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QStatusBar_messageChanged_handle(void* dId, void** args) {
        auto d_object = cast(QStatusBar) dId;
        auto text0_ptr = args[1];
        string text0 = QStringUtil.toNativeString(text0_ptr);
        //d_object.messageChanged_emit(text0);
}*/

extern(C) QMetaObjectNative* qtd_QStatusBar_staticMetaObject();

extern(C) void qtd_QStatusBar_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QStatusBar_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
