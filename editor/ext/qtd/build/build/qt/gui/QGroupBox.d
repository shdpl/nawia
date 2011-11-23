module qt.gui.QGroupBox;

public import qt.gui.QGroupBox_aux;
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
public import qt.gui.QDragMoveEvent;
public import qt.gui.QKeyEvent;
public import qt.core.QPoint;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.core.QEvent;
public import qt.gui.QDragLeaveEvent;
public import qt.core.QSize;
public import qt.gui.QStyleOptionGroupBox;
public import qt.gui.QPaintEvent;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.gui.QHideEvent;
public import qt.core.QTimerEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QDragEnterEvent;
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QGroupBox : QWidget
{

    private static const string[] __signalSignatures = [
            "clicked(bool)", 
            "clicked()", 
            "toggled(bool)"    ];

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

    protected final void clicked(bool checked = false) {
        qtd_QGroupBox_clicked_bool(qtdNativeId, checked);
    }

    protected final void toggled(bool arg__1) {
        qtd_QGroupBox_toggled_bool(qtdNativeId, arg__1);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QGroupBox_QGroupBox_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string title, QWidget parent_ = null) {
        void* ret = qtd_QGroupBox_QGroupBox_string_QWidget(cast(void*) this, title, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int alignment() const {
        return qtd_QGroupBox_alignment_const(qtdNativeId);
    }

    protected final void initStyleOption(QStyleOptionGroupBox option) const {
        qtd_QGroupBox_initStyleOption_nativepointerQStyleOptionGroupBox_const(qtdNativeId, option is null ? null : option.qtdNativeId);
    }

    public final bool isCheckable() const {
        return qtd_QGroupBox_isCheckable_const(qtdNativeId);
    }

    public final bool isChecked() const {
        return qtd_QGroupBox_isChecked_const(qtdNativeId);
    }

    public final bool isFlat() const {
        return qtd_QGroupBox_isFlat_const(qtdNativeId);
    }

    public final void setAlignment(int alignment) {
        qtd_QGroupBox_setAlignment_int(qtdNativeId, alignment);
    }

    public final void setCheckable(bool checkable) {
        qtd_QGroupBox_setCheckable_bool(qtdNativeId, checkable);
    }

    public final void setChecked(bool checked) {
        qtd_QGroupBox_setChecked_bool(qtdNativeId, checked);
    }

    public final void setFlat(bool flat) {
        qtd_QGroupBox_setFlat_bool(qtdNativeId, flat);
    }

    public final void setTitle(string title) {
        qtd_QGroupBox_setTitle_string(qtdNativeId, title);
    }

    public final string title() const {
        string res;
        qtd_QGroupBox_title_const(qtdNativeId, &res);
        return res;
    }

    protected void changeEvent(QEvent event) {
        qtd_QGroupBox_changeEvent_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void childEvent(QChildEvent event) {
        qtd_QGroupBox_childEvent_QChildEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public bool event(QEvent event) {
        return qtd_QGroupBox_event_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void focusInEvent(QFocusEvent event) {
        qtd_QGroupBox_focusInEvent_QFocusEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public QSize minimumSizeHint() const {
        QSize res;
        qtd_QGroupBox_minimumSizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void mouseMoveEvent(QMouseEvent event) {
        qtd_QGroupBox_mouseMoveEvent_QMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void mousePressEvent(QMouseEvent event) {
        qtd_QGroupBox_mousePressEvent_QMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void mouseReleaseEvent(QMouseEvent event) {
        qtd_QGroupBox_mouseReleaseEvent_QMouseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void paintEvent(QPaintEvent event) {
        qtd_QGroupBox_paintEvent_QPaintEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void resizeEvent(QResizeEvent event) {
        qtd_QGroupBox_resizeEvent_QResizeEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "setChecked(bool)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QGroupBox_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QGroupBox);
    }

    static QGroupBox __getObject(void* nativeId) {
        return static_cast!(QGroupBox)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QGroupBox_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QGroupBox_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QGroupBox(nativeId, initFlags);
        QGroupBox.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(bool)("clicked"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!()("clicked"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(bool)("toggled"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setChecked"), index));

    }

    public alias void __isQtType_QGroupBox;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QGroupBox_clicked_bool(void* __this_nativeId,
 bool checked0);
private extern(C) void  qtd_QGroupBox_toggled_bool(void* __this_nativeId,
 bool arg__1);

// C wrappers
private extern(C) void* qtd_QGroupBox_QGroupBox_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QGroupBox_QGroupBox_string_QWidget(void *d_ptr,
 string title0,
 void* parent1);
private extern(C) int  qtd_QGroupBox_alignment_const(void* __this_nativeId);
private extern(C) void  qtd_QGroupBox_initStyleOption_nativepointerQStyleOptionGroupBox_const(void* __this_nativeId,
 void* option0);
private extern(C) bool  qtd_QGroupBox_isCheckable_const(void* __this_nativeId);
private extern(C) bool  qtd_QGroupBox_isChecked_const(void* __this_nativeId);
private extern(C) bool  qtd_QGroupBox_isFlat_const(void* __this_nativeId);
private extern(C) void  qtd_QGroupBox_setAlignment_int(void* __this_nativeId,
 int alignment0);
private extern(C) void  qtd_QGroupBox_setCheckable_bool(void* __this_nativeId,
 bool checkable0);
private extern(C) void  qtd_QGroupBox_setChecked_bool(void* __this_nativeId,
 bool checked0);
private extern(C) void  qtd_QGroupBox_setFlat_bool(void* __this_nativeId,
 bool flat0);
private extern(C) void  qtd_QGroupBox_setTitle_string(void* __this_nativeId,
 string title0);
private extern(C) void  qtd_QGroupBox_title_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QGroupBox_changeEvent_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGroupBox_childEvent_QChildEvent(void* __this_nativeId,
 void* event0);
private extern(C) bool  qtd_QGroupBox_event_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGroupBox_focusInEvent_QFocusEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGroupBox_minimumSizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QGroupBox_mouseMoveEvent_QMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGroupBox_mousePressEvent_QMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGroupBox_mouseReleaseEvent_QMouseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGroupBox_paintEvent_QPaintEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QGroupBox_resizeEvent_QResizeEvent(void* __this_nativeId,
 void* event0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QGroupBox_initCallBacks(void* virtuals);

extern(C) void static_init_QGroupBox() {
    qtd_QGroupBox_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QGroupBox_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QGroupBox) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QGroupBox_clicked_handle(void* dId, void** args) {
        auto d_object = cast(QGroupBox) dId;
        auto checked0 = *(cast(bool*)args[1]);
        //d_object.clicked_emit(checked0);
}*/
/*private extern(C) void qtd_QGroupBox_toggled_handle(void* dId, void** args) {
        auto d_object = cast(QGroupBox) dId;
        auto arg__1 = *(cast(bool*)args[1]);
        //d_object.toggled_emit(arg__1);
}*/

extern(C) QMetaObjectNative* qtd_QGroupBox_staticMetaObject();

extern(C) void qtd_QGroupBox_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QGroupBox_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
