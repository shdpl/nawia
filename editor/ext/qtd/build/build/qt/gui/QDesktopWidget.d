module qt.gui.QDesktopWidget;

public import qt.gui.QDesktopWidget_aux;
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
public import qt.core.QRect;
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


public class QDesktopWidget : QWidget
{

    private static const string[] __signalSignatures = [
            "resized(int)", 
            "screenCountChanged(int)", 
            "workAreaResized(int)"    ];

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

    protected final void resized(int arg__1) {
        qtd_QDesktopWidget_resized_int(qtdNativeId, arg__1);
    }

    protected final void screenCountChanged(int arg__1) {
        qtd_QDesktopWidget_screenCountChanged_int(qtdNativeId, arg__1);
    }

    protected final void workAreaResized(int arg__1) {
        qtd_QDesktopWidget_workAreaResized_int(qtdNativeId, arg__1);
    }
// Functions

    public this() {
        void* ret = qtd_QDesktopWidget_QDesktopWidget(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final const(QRect) availableGeometry(const(QPoint) point) const {
        QRect res;
        qtd_QDesktopWidget_availableGeometry_QPoint_const(qtdNativeId, &res, point);
        return res;
    }

    public final const(QRect) availableGeometry(QWidget widget) const {
        QRect res;
        qtd_QDesktopWidget_availableGeometry_QWidget_const(qtdNativeId, &res, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
        return res;
    }

    public final const(QRect) availableGeometry(int screen = -1) const {
        QRect res;
        qtd_QDesktopWidget_availableGeometry_int_const(qtdNativeId, &res, screen);
        return res;
    }

    public final bool isVirtualDesktop() const {
        return qtd_QDesktopWidget_isVirtualDesktop_const(qtdNativeId);
    }

    public final int numScreens() const {
        return qtd_QDesktopWidget_numScreens_const(qtdNativeId);
    }

    public final int primaryScreen() const {
        return qtd_QDesktopWidget_primaryScreen_const(qtdNativeId);
    }

    public final QWidget screen(int screen = -1) {
        void *ret = qtd_QDesktopWidget_screen_int(qtdNativeId, screen);
        QWidget __d_return_value = QWidget.__getObject(ret);
        return __d_return_value;
    }

    public final int screenCount() const {
        return qtd_QDesktopWidget_screenCount_const(qtdNativeId);
    }

    public final const(QRect) screenGeometry(const(QPoint) point) const {
        QRect res;
        qtd_QDesktopWidget_screenGeometry_QPoint_const(qtdNativeId, &res, point);
        return res;
    }

    public final const(QRect) screenGeometry(QWidget widget) const {
        QRect res;
        qtd_QDesktopWidget_screenGeometry_QWidget_const(qtdNativeId, &res, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
        return res;
    }

    public final const(QRect) screenGeometry(int screen = -1) const {
        QRect res;
        qtd_QDesktopWidget_screenGeometry_int_const(qtdNativeId, &res, screen);
        return res;
    }

    public final int screenNumber(const(QPoint) arg__1) const {
        return qtd_QDesktopWidget_screenNumber_QPoint_const(qtdNativeId, arg__1);
    }

    public final int screenNumber(QWidget widget = null) const {
        return qtd_QDesktopWidget_screenNumber_QWidget_const(qtdNativeId, widget is null ? null : (cast(QWidget)widget).qtdNativeId);
    }

    protected void resizeEvent(QResizeEvent e) {
        qtd_QDesktopWidget_resizeEvent_QResizeEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QDesktopWidget_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QDesktopWidget);
    }

    static QDesktopWidget __getObject(void* nativeId) {
        return static_cast!(QDesktopWidget)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QDesktopWidget_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QDesktopWidget_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QDesktopWidget(nativeId, initFlags);
        QDesktopWidget.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(int)("resized"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(int)("screenCountChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(int)("workAreaResized"), index));

    }

    public alias void __isQtType_QDesktopWidget;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QDesktopWidget_resized_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QDesktopWidget_screenCountChanged_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QDesktopWidget_workAreaResized_int(void* __this_nativeId,
 int arg__1);

// C wrappers
private extern(C) void* qtd_QDesktopWidget_QDesktopWidget(void *d_ptr);
private extern(C) void  qtd_QDesktopWidget_availableGeometry_QPoint_const(void* __this_nativeId,
 QRect * __d_return_value,
 QPoint point0);
private extern(C) void  qtd_QDesktopWidget_availableGeometry_QWidget_const(void* __this_nativeId,
 QRect * __d_return_value,
 void* widget0);
private extern(C) void  qtd_QDesktopWidget_availableGeometry_int_const(void* __this_nativeId,
 QRect * __d_return_value,
 int screen0);
private extern(C) bool  qtd_QDesktopWidget_isVirtualDesktop_const(void* __this_nativeId);
private extern(C) int  qtd_QDesktopWidget_numScreens_const(void* __this_nativeId);
private extern(C) int  qtd_QDesktopWidget_primaryScreen_const(void* __this_nativeId);
private extern(C) void*  qtd_QDesktopWidget_screen_int(void* __this_nativeId,
 int screen0);
private extern(C) int  qtd_QDesktopWidget_screenCount_const(void* __this_nativeId);
private extern(C) void  qtd_QDesktopWidget_screenGeometry_QPoint_const(void* __this_nativeId,
 QRect * __d_return_value,
 QPoint point0);
private extern(C) void  qtd_QDesktopWidget_screenGeometry_QWidget_const(void* __this_nativeId,
 QRect * __d_return_value,
 void* widget0);
private extern(C) void  qtd_QDesktopWidget_screenGeometry_int_const(void* __this_nativeId,
 QRect * __d_return_value,
 int screen0);
private extern(C) int  qtd_QDesktopWidget_screenNumber_QPoint_const(void* __this_nativeId,
 QPoint arg__1);
private extern(C) int  qtd_QDesktopWidget_screenNumber_QWidget_const(void* __this_nativeId,
 void* widget0);
private extern(C) void  qtd_QDesktopWidget_resizeEvent_QResizeEvent(void* __this_nativeId,
 void* e0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QDesktopWidget_initCallBacks(void* virtuals);

extern(C) void static_init_QDesktopWidget() {
    qtd_QDesktopWidget_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QDesktopWidget_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QDesktopWidget) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QDesktopWidget_resized_handle(void* dId, void** args) {
        auto d_object = cast(QDesktopWidget) dId;
        auto arg__1 = *(cast(int*)args[1]);
        //d_object.resized_emit(arg__1);
}*/
/*private extern(C) void qtd_QDesktopWidget_screenCountChanged_handle(void* dId, void** args) {
        auto d_object = cast(QDesktopWidget) dId;
        auto arg__1 = *(cast(int*)args[1]);
        //d_object.screenCountChanged_emit(arg__1);
}*/
/*private extern(C) void qtd_QDesktopWidget_workAreaResized_handle(void* dId, void** args) {
        auto d_object = cast(QDesktopWidget) dId;
        auto arg__1 = *(cast(int*)args[1]);
        //d_object.workAreaResized_emit(arg__1);
}*/

extern(C) QMetaObjectNative* qtd_QDesktopWidget_staticMetaObject();

extern(C) void qtd_QDesktopWidget_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QDesktopWidget_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
