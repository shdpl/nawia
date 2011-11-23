module qt.gui.QSplashScreen;

public import qt.gui.QSplashScreen_aux;
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
public import qt.gui.QPainter;
public import qt.gui.QFocusEvent;
public import qt.gui.QResizeEvent;
public import qt.gui.QDragMoveEvent;
public import qt.gui.QKeyEvent;
public import qt.core.QPoint;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.core.QEvent;
public import qt.gui.QColor;
public import qt.gui.QDragLeaveEvent;
public import qt.core.QSize;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.gui.QPaintEvent;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QPixmap;
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QSplashScreen : QWidget
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

    protected final void messageChanged(string message) {
        qtd_QSplashScreen_messageChanged_string(qtdNativeId, message);
    }
// Functions

    public this(QWidget parent_, const(QPixmap) pixmap = new QPixmap(), int f = 0) {
        void* ret = qtd_QSplashScreen_QSplashScreen_QWidget_QPixmap_WindowFlags(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId, pixmap is null ? null : (cast(QPixmap)pixmap).qtdNativeId, f);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QPixmap) pixmap = new QPixmap(), int f = 0) {
        void* ret = qtd_QSplashScreen_QSplashScreen_QPixmap_WindowFlags(cast(void*) this, pixmap is null ? null : (cast(QPixmap)pixmap).qtdNativeId, f);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void clearMessage() {
        qtd_QSplashScreen_clearMessage(qtdNativeId);
    }

    public final void finish(QWidget w) {
        qtd_QSplashScreen_finish_QWidget(qtdNativeId, w is null ? null : w.qtdNativeId);
    }

    public final const(QPixmap) pixmap() const {
        void* ret = qtd_QSplashScreen_pixmap_const(qtdNativeId);
        const(QPixmap) __d_return_value = new QPixmap(ret);
        return __d_return_value;
    }

    public final void setPixmap(const(QPixmap) pixmap) {
        qtd_QSplashScreen_setPixmap_QPixmap(qtdNativeId, pixmap is null ? null : (cast(QPixmap)pixmap).qtdNativeId);
    }

    public final void showMessage(string message, int alignment = 1, const(QColor) color = QColor.Black) {
        qtd_QSplashScreen_showMessage_string_int_QColor(qtdNativeId, message, alignment, color is null ? null : (cast(QColor)color).qtdNativeId);
    }

    protected void drawContents(QPainter painter) {
        qtd_QSplashScreen_drawContents_QPainter(qtdNativeId, painter is null ? null : painter.qtdNativeId);
    }

    public bool event(QEvent e) {
        return qtd_QSplashScreen_event_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void mousePressEvent(QMouseEvent arg__1) {
        qtd_QSplashScreen_mousePressEvent_QMouseEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "clearMessage()", 
            "showMessage(QString,int,QColor)", 
            "showMessage(QString,int)", 
            "showMessage(QString)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QSplashScreen_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QSplashScreen);
    }

    static QSplashScreen __getObject(void* nativeId) {
        return static_cast!(QSplashScreen)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QSplashScreen_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QSplashScreen_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QSplashScreen(nativeId, initFlags);
        QSplashScreen.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(string)("messageChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("clearMessage"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(string,int,const(QColor))("showMessage"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!(string,int)("showMessage"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!(string)("showMessage"), index));

    }

    public alias void __isQtType_QSplashScreen;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QSplashScreen_messageChanged_string(void* __this_nativeId,
 string message0);

// C wrappers
private extern(C) void* qtd_QSplashScreen_QSplashScreen_QWidget_QPixmap_WindowFlags(void *d_ptr,
 void* parent0,
 void* pixmap1,
 int f2);
private extern(C) void* qtd_QSplashScreen_QSplashScreen_QPixmap_WindowFlags(void *d_ptr,
 void* pixmap0,
 int f1);
private extern(C) void  qtd_QSplashScreen_clearMessage(void* __this_nativeId);
private extern(C) void  qtd_QSplashScreen_finish_QWidget(void* __this_nativeId,
 void* w0);
private extern(C) void*  qtd_QSplashScreen_pixmap_const(void* __this_nativeId);
private extern(C) void  qtd_QSplashScreen_setPixmap_QPixmap(void* __this_nativeId,
 void* pixmap0);
private extern(C) void  qtd_QSplashScreen_showMessage_string_int_QColor(void* __this_nativeId,
 string message0,
 int alignment1,
 void* color2);
private extern(C) void  qtd_QSplashScreen_drawContents_QPainter(void* __this_nativeId,
 void* painter0);
private extern(C) bool  qtd_QSplashScreen_event_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QSplashScreen_mousePressEvent_QMouseEvent(void* __this_nativeId,
 void* arg__1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, void* painter0) qtd_QSplashScreen_drawContents_QPainter_dispatch; }
extern(C) void qtd_export_QSplashScreen_drawContents_QPainter_dispatch(void *dId, void* painter0){
    auto d_object = cast(QSplashScreen) dId;
    scope painter0_d_ref = new QPainter(painter0, QtdObjectInitFlags.onStack);
    d_object.drawContents(painter0_d_ref);
}

private extern (C) void qtd_QSplashScreen_initCallBacks(void* virtuals);

extern(C) void static_init_QSplashScreen() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QSplashScreen_drawContents_QPainter_dispatch;
    qtd_QSplashScreen_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QSplashScreen_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QSplashScreen) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QSplashScreen_messageChanged_handle(void* dId, void** args) {
        auto d_object = cast(QSplashScreen) dId;
        auto message0_ptr = args[1];
        string message0 = QStringUtil.toNativeString(message0_ptr);
        //d_object.messageChanged_emit(message0);
}*/

extern(C) QMetaObjectNative* qtd_QSplashScreen_staticMetaObject();

extern(C) void qtd_QSplashScreen_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QSplashScreen_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
