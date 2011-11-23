module qt.gui.QProgressDialog;

public import qt.gui.QProgressDialog_aux;
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
public import qt.gui.QShowEvent;
public import qt.gui.QInputMethodEvent;
public import qt.gui.QPushButton;
public import qt.gui.QFocusEvent;
public import qt.gui.QResizeEvent;
public import qt.gui.QDragMoveEvent;
public import qt.gui.QKeyEvent;
public import qt.core.QPoint;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
public import qt.gui.QProgressBar;
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
public import qt.gui.QLabel;
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QProgressDialog : QDialog
{

    private static const string[] __signalSignatures = [
            "canceled()"    ];

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

    protected final void canceled() {
        qtd_QProgressDialog_canceled(qtdNativeId);
    }
// Functions

    public this(QWidget parent_ = null, int flags = 0) {
        void* ret = qtd_QProgressDialog_QProgressDialog_QWidget_WindowFlags(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId, flags);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string labelText, string cancelButtonText, int minimum, int maximum, QWidget parent_ = null, int flags = 0) {
        void* ret = qtd_QProgressDialog_QProgressDialog_string_string_int_int_QWidget_WindowFlags(cast(void*) this, labelText, cancelButtonText, minimum, maximum, parent_ is null ? null : parent_.qtdNativeId, flags);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool autoClose() const {
        return qtd_QProgressDialog_autoClose_const(qtdNativeId);
    }

    public final bool autoReset() const {
        return qtd_QProgressDialog_autoReset_const(qtdNativeId);
    }

    public final void cancel() {
        qtd_QProgressDialog_cancel(qtdNativeId);
    }

    protected final void forceShow() {
        qtd_QProgressDialog_forceShow(qtdNativeId);
    }

    public final string labelText() const {
        string res;
        qtd_QProgressDialog_labelText_const(qtdNativeId, &res);
        return res;
    }

    public final int maximum() const {
        return qtd_QProgressDialog_maximum_const(qtdNativeId);
    }

    public final int minimum() const {
        return qtd_QProgressDialog_minimum_const(qtdNativeId);
    }

    public final int minimumDuration() const {
        return qtd_QProgressDialog_minimumDuration_const(qtdNativeId);
    }

    public final void open() {
        qtd_QProgressDialog_open(qtdNativeId);
    }

    public final void reset() {
        qtd_QProgressDialog_reset(qtdNativeId);
    }

    public final void setAutoClose(bool close) {
        qtd_QProgressDialog_setAutoClose_bool(qtdNativeId, close);
    }

    public final void setAutoReset(bool reset) {
        qtd_QProgressDialog_setAutoReset_bool(qtdNativeId, reset);
    }

    public final void setBar(QProgressBar bar) {
        if (bar !is null) {
            bar.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QProgressDialog_setBar_QProgressBar(qtdNativeId, bar is null ? null : bar.qtdNativeId);
    }

    public final void setCancelButton(QPushButton button) {
        qtd_QProgressDialog_setCancelButton_QPushButton(qtdNativeId, button is null ? null : button.qtdNativeId);
    }

    public final void setCancelButtonText(string text) {
        qtd_QProgressDialog_setCancelButtonText_string(qtdNativeId, text);
    }

    public final void setLabel(QLabel label) {
        qtd_QProgressDialog_setLabel_QLabel(qtdNativeId, label is null ? null : label.qtdNativeId);
    }

    public final void setLabelText(string text) {
        qtd_QProgressDialog_setLabelText_string(qtdNativeId, text);
    }

    public final void setMaximum(int maximum) {
        qtd_QProgressDialog_setMaximum_int(qtdNativeId, maximum);
    }

    public final void setMinimum(int minimum) {
        qtd_QProgressDialog_setMinimum_int(qtdNativeId, minimum);
    }

    public final void setMinimumDuration(int ms) {
        qtd_QProgressDialog_setMinimumDuration_int(qtdNativeId, ms);
    }

    public final void setRange(int minimum, int maximum) {
        qtd_QProgressDialog_setRange_int_int(qtdNativeId, minimum, maximum);
    }

    public final void setValue(int progress) {
        qtd_QProgressDialog_setValue_int(qtdNativeId, progress);
    }

    public final int value() const {
        return qtd_QProgressDialog_value_const(qtdNativeId);
    }

    public final bool wasCanceled() const {
        return qtd_QProgressDialog_wasCanceled_const(qtdNativeId);
    }

    protected void changeEvent(QEvent event) {
        qtd_QProgressDialog_changeEvent_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void closeEvent(QCloseEvent event) {
        qtd_QProgressDialog_closeEvent_QCloseEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void resizeEvent(QResizeEvent event) {
        qtd_QProgressDialog_resizeEvent_QResizeEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    protected void showEvent(QShowEvent event) {
        qtd_QProgressDialog_showEvent_QShowEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QProgressDialog_sizeHint_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "cancel()", 
            "forceShow()", 
            "reset()", 
            "setCancelButtonText(QString)", 
            "setLabelText(QString)", 
            "setMaximum(int)", 
            "setMinimum(int)", 
            "setMinimumDuration(int)", 
            "setRange(int,int)", 
            "setValue(int)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QProgressDialog_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QProgressDialog);
    }

    static QProgressDialog __getObject(void* nativeId) {
        return static_cast!(QProgressDialog)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QProgressDialog_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QProgressDialog_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QProgressDialog(nativeId, initFlags);
        QProgressDialog.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!()("canceled"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("cancel"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!()("forceShow"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!()("reset"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!(string)("setCancelButtonText"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!(string)("setLabelText"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[5]);
        mo.addMethod(new QMetaSlot(signature!(int)("setMaximum"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[6]);
        mo.addMethod(new QMetaSlot(signature!(int)("setMinimum"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[7]);
        mo.addMethod(new QMetaSlot(signature!(int)("setMinimumDuration"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[8]);
        mo.addMethod(new QMetaSlot(signature!(int,int)("setRange"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[9]);
        mo.addMethod(new QMetaSlot(signature!(int)("setValue"), index));

    }

    public alias void __isQtType_QProgressDialog;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QProgressDialog_canceled(void* __this_nativeId);

// C wrappers
private extern(C) void* qtd_QProgressDialog_QProgressDialog_QWidget_WindowFlags(void *d_ptr,
 void* parent0,
 int flags1);
private extern(C) void* qtd_QProgressDialog_QProgressDialog_string_string_int_int_QWidget_WindowFlags(void *d_ptr,
 string labelText0,
 string cancelButtonText1,
 int minimum2,
 int maximum3,
 void* parent4,
 int flags5);
private extern(C) bool  qtd_QProgressDialog_autoClose_const(void* __this_nativeId);
private extern(C) bool  qtd_QProgressDialog_autoReset_const(void* __this_nativeId);
private extern(C) void  qtd_QProgressDialog_cancel(void* __this_nativeId);
private extern(C) void  qtd_QProgressDialog_forceShow(void* __this_nativeId);
private extern(C) void  qtd_QProgressDialog_labelText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QProgressDialog_maximum_const(void* __this_nativeId);
private extern(C) int  qtd_QProgressDialog_minimum_const(void* __this_nativeId);
private extern(C) int  qtd_QProgressDialog_minimumDuration_const(void* __this_nativeId);
private extern(C) void  qtd_QProgressDialog_open(void* __this_nativeId);
private extern(C) void  qtd_QProgressDialog_reset(void* __this_nativeId);
private extern(C) void  qtd_QProgressDialog_setAutoClose_bool(void* __this_nativeId,
 bool close0);
private extern(C) void  qtd_QProgressDialog_setAutoReset_bool(void* __this_nativeId,
 bool reset0);
private extern(C) void  qtd_QProgressDialog_setBar_QProgressBar(void* __this_nativeId,
 void* bar0);
private extern(C) void  qtd_QProgressDialog_setCancelButton_QPushButton(void* __this_nativeId,
 void* button0);
private extern(C) void  qtd_QProgressDialog_setCancelButtonText_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QProgressDialog_setLabel_QLabel(void* __this_nativeId,
 void* label0);
private extern(C) void  qtd_QProgressDialog_setLabelText_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QProgressDialog_setMaximum_int(void* __this_nativeId,
 int maximum0);
private extern(C) void  qtd_QProgressDialog_setMinimum_int(void* __this_nativeId,
 int minimum0);
private extern(C) void  qtd_QProgressDialog_setMinimumDuration_int(void* __this_nativeId,
 int ms0);
private extern(C) void  qtd_QProgressDialog_setRange_int_int(void* __this_nativeId,
 int minimum0,
 int maximum1);
private extern(C) void  qtd_QProgressDialog_setValue_int(void* __this_nativeId,
 int progress0);
private extern(C) int  qtd_QProgressDialog_value_const(void* __this_nativeId);
private extern(C) bool  qtd_QProgressDialog_wasCanceled_const(void* __this_nativeId);
private extern(C) void  qtd_QProgressDialog_changeEvent_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QProgressDialog_closeEvent_QCloseEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QProgressDialog_resizeEvent_QResizeEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QProgressDialog_showEvent_QShowEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QProgressDialog_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QProgressDialog_initCallBacks(void* virtuals);

extern(C) void static_init_QProgressDialog() {
    qtd_QProgressDialog_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QProgressDialog_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QProgressDialog) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QProgressDialog_accepted_handle(void* dId, void** args) {
        auto d_object = cast(QProgressDialog) dId;
        //d_object.accepted_emit();
}*/
/*private extern(C) void qtd_QProgressDialog_finished_handle(void* dId, void** args) {
        auto d_object = cast(QProgressDialog) dId;
        auto result0 = *(cast(int*)args[1]);
        //d_object.finished_emit(result0);
}*/
/*private extern(C) void qtd_QProgressDialog_rejected_handle(void* dId, void** args) {
        auto d_object = cast(QProgressDialog) dId;
        //d_object.rejected_emit();
}*/
/*private extern(C) void qtd_QProgressDialog_canceled_handle(void* dId, void** args) {
        auto d_object = cast(QProgressDialog) dId;
        //d_object.canceled_emit();
}*/

extern(C) QMetaObjectNative* qtd_QProgressDialog_staticMetaObject();

extern(C) void qtd_QProgressDialog_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QProgressDialog_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
