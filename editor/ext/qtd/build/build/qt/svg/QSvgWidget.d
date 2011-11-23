module qt.svg.QSvgWidget;

public import qt.svg.QSvgWidget_aux;
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
private import qt.svg.ArrayOps2;
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
public import qt.svg.QSvgRenderer;
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
public import qt.gui.QPaintEvent;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.core.QByteArray;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QSvgWidget : QWidget
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
        void* ret = qtd_QSvgWidget_QSvgWidget_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string file, QWidget parent_ = null) {
        void* ret = qtd_QSvgWidget_QSvgWidget_string_QWidget(cast(void*) this, file, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void load(const(QByteArray) contents) {
        qtd_QSvgWidget_load_QByteArray(qtdNativeId, contents is null ? null : (cast(QByteArray)contents).qtdNativeId);
    }

    public final void load(string file) {
        qtd_QSvgWidget_load_string(qtdNativeId, file);
    }

    public final QSvgRenderer renderer() const {
        void *ret = qtd_QSvgWidget_renderer_const(qtdNativeId);
        QSvgRenderer __d_return_value = QSvgRenderer.__getObject(ret);
        return __d_return_value;
    }

    protected void paintEvent(QPaintEvent event) {
        qtd_QSvgWidget_paintEvent_QPaintEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QSvgWidget_sizeHint_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "load(QByteArray)", 
            "load(QString)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QSvgWidget_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QSvgWidget);
    }

    static QSvgWidget __getObject(void* nativeId) {
        return static_cast!(QSvgWidget)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QSvgWidget_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QSvgWidget_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QSvgWidget(nativeId, initFlags);
        QSvgWidget.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(const(QByteArray))("load"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(string)("load"), index));

    }

    public alias void __isQtType_QSvgWidget;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QSvgWidget_QSvgWidget_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QSvgWidget_QSvgWidget_string_QWidget(void *d_ptr,
 string file0,
 void* parent1);
private extern(C) void  qtd_QSvgWidget_load_QByteArray(void* __this_nativeId,
 void* contents0);
private extern(C) void  qtd_QSvgWidget_load_string(void* __this_nativeId,
 string file0);
private extern(C) void*  qtd_QSvgWidget_renderer_const(void* __this_nativeId);
private extern(C) void  qtd_QSvgWidget_paintEvent_QPaintEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QSvgWidget_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QSvgWidget_initCallBacks(void* virtuals);

extern(C) void static_init_QSvgWidget() {
    qtd_QSvgWidget_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QSvgWidget_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QSvgWidget) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/

extern(C) QMetaObjectNative* qtd_QSvgWidget_staticMetaObject();

extern(C) void qtd_QSvgWidget_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QSvgWidget_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
