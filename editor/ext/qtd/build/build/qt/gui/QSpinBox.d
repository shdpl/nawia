module qt.gui.QSpinBox;

public import qt.gui.QSpinBox_aux;
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
public import qt.gui.QInputMethodEvent;
public import qt.gui.QShowEvent;
public import qt.gui.QFocusEvent;
public import qt.gui.QAbstractSpinBox;
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
public import qt.gui.QMoveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QSpinBox : QAbstractSpinBox
{

    private static const string[] __signalSignatures = [
            "valueChanged(QString)", 
            "valueChanged(int)"    ];

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

    protected final void valueChanged(string arg__1) {
        qtd_QSpinBox_valueChanged_string(qtdNativeId, arg__1);
    }

    protected final void valueChanged(int arg__1) {
        qtd_QSpinBox_valueChanged_int(qtdNativeId, arg__1);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QSpinBox_QSpinBox_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string cleanText() const {
        string res;
        qtd_QSpinBox_cleanText_const(qtdNativeId, &res);
        return res;
    }

    public final int maximum() const {
        return qtd_QSpinBox_maximum_const(qtdNativeId);
    }

    public final int minimum() const {
        return qtd_QSpinBox_minimum_const(qtdNativeId);
    }

    public final string prefix() const {
        string res;
        qtd_QSpinBox_prefix_const(qtdNativeId, &res);
        return res;
    }

    public final void setMaximum(int max) {
        qtd_QSpinBox_setMaximum_int(qtdNativeId, max);
    }

    public final void setMinimum(int min) {
        qtd_QSpinBox_setMinimum_int(qtdNativeId, min);
    }

    public final void setPrefix(string prefix) {
        qtd_QSpinBox_setPrefix_string(qtdNativeId, prefix);
    }

    public final void setRange(int min, int max) {
        qtd_QSpinBox_setRange_int_int(qtdNativeId, min, max);
    }

    public final void setSingleStep(int val) {
        qtd_QSpinBox_setSingleStep_int(qtdNativeId, val);
    }

    public final void setSuffix(string suffix) {
        qtd_QSpinBox_setSuffix_string(qtdNativeId, suffix);
    }

    public final void setValue(int val) {
        qtd_QSpinBox_setValue_int(qtdNativeId, val);
    }

    public final int singleStep() const {
        return qtd_QSpinBox_singleStep_const(qtdNativeId);
    }

    public final string suffix() const {
        string res;
        qtd_QSpinBox_suffix_const(qtdNativeId, &res);
        return res;
    }

    public final int value() const {
        return qtd_QSpinBox_value_const(qtdNativeId);
    }

    public bool event(QEvent event) {
        return qtd_QSpinBox_event_QEvent(qtdNativeId, event is null ? null : event.qtdNativeId);
    }

    public void fixup(ref string str) const {
        qtd_QSpinBox_fixup_nativepointerstring_const(qtdNativeId, str);
    }

    protected string textFromValue(int val) const {
        string res;
        qtd_QSpinBox_textFromValue_int_const(qtdNativeId, &res, val);
        return res;
    }

    public QValidator.State validate(ref string input, int* pos) const {
        return cast(QValidator.State) qtd_QSpinBox_validate_nativepointerstring_nativepointerint_const(qtdNativeId, input, pos);
    }

    protected int valueFromText(string text) const {
        return qtd_QSpinBox_valueFromText_string_const(qtdNativeId, text);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "setValue(int)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QSpinBox_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QSpinBox);
    }

    static QSpinBox __getObject(void* nativeId) {
        return static_cast!(QSpinBox)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QSpinBox_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QSpinBox_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QSpinBox(nativeId, initFlags);
        QSpinBox.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(string)("valueChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(int)("valueChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(int)("setValue"), index));

    }

    public alias void __isQtType_QSpinBox;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QSpinBox_valueChanged_string(void* __this_nativeId,
 string arg__1);
private extern(C) void  qtd_QSpinBox_valueChanged_int(void* __this_nativeId,
 int arg__1);

// C wrappers
private extern(C) void* qtd_QSpinBox_QSpinBox_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QSpinBox_cleanText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QSpinBox_maximum_const(void* __this_nativeId);
private extern(C) int  qtd_QSpinBox_minimum_const(void* __this_nativeId);
private extern(C) void  qtd_QSpinBox_prefix_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QSpinBox_setMaximum_int(void* __this_nativeId,
 int max0);
private extern(C) void  qtd_QSpinBox_setMinimum_int(void* __this_nativeId,
 int min0);
private extern(C) void  qtd_QSpinBox_setPrefix_string(void* __this_nativeId,
 string prefix0);
private extern(C) void  qtd_QSpinBox_setRange_int_int(void* __this_nativeId,
 int min0,
 int max1);
private extern(C) void  qtd_QSpinBox_setSingleStep_int(void* __this_nativeId,
 int val0);
private extern(C) void  qtd_QSpinBox_setSuffix_string(void* __this_nativeId,
 string suffix0);
private extern(C) void  qtd_QSpinBox_setValue_int(void* __this_nativeId,
 int val0);
private extern(C) int  qtd_QSpinBox_singleStep_const(void* __this_nativeId);
private extern(C) void  qtd_QSpinBox_suffix_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QSpinBox_value_const(void* __this_nativeId);
private extern(C) bool  qtd_QSpinBox_event_QEvent(void* __this_nativeId,
 void* event0);
private extern(C) void  qtd_QSpinBox_fixup_nativepointerstring_const(void* __this_nativeId,
 string str0);
private extern(C) void  qtd_QSpinBox_textFromValue_int_const(void* __this_nativeId,
 void* __d_return_value,
 int val0);
private extern(C) int  qtd_QSpinBox_validate_nativepointerstring_nativepointerint_const(void* __this_nativeId,
 string input0,
 int * pos1);
private extern(C) int  qtd_QSpinBox_valueFromText_string_const(void* __this_nativeId,
 string text0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, string* ret_str, int val0) qtd_QSpinBox_textFromValue_int_const_dispatch; }
extern(C) void qtd_export_QSpinBox_textFromValue_int_const_dispatch(void *dId, string* ret_str, int val0){
    auto d_object = cast(QSpinBox) dId;
    string _d_str = d_object.textFromValue(val0);
    *ret_str = _d_str;
}

extern(C){ extern int function(void *dId, wchar* text0, int text0_size) qtd_QSpinBox_valueFromText_string_const_dispatch; }
extern(C) int qtd_export_QSpinBox_valueFromText_string_const_dispatch(void *dId, wchar* text0, int text0_size){
    auto d_object = cast(QSpinBox) dId;
    string text0_d_ref = toUTF8(text0[0..text0_size]);
    auto return_value = d_object.valueFromText(text0_d_ref);
    return return_value;
}

private extern (C) void qtd_QSpinBox_initCallBacks(void* virtuals);

extern(C) void static_init_QSpinBox() {
    void*[2] virt_arr;
    virt_arr[0] = &qtd_export_QSpinBox_textFromValue_int_const_dispatch;
    virt_arr[1] = &qtd_export_QSpinBox_valueFromText_string_const_dispatch;
    qtd_QSpinBox_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QSpinBox_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QSpinBox) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QSpinBox_editingFinished_handle(void* dId, void** args) {
        auto d_object = cast(QSpinBox) dId;
        //d_object.editingFinished_emit();
}*/
/*private extern(C) void qtd_QSpinBox_valueChanged_handle(void* dId, void** args) {
        auto d_object = cast(QSpinBox) dId;
        auto arg__1_ptr = args[1];
        string arg__1 = QStringUtil.toNativeString(arg__1_ptr);
        //d_object.valueChanged_emit(arg__1);
}*/
/*private extern(C) void qtd_QSpinBox_valueChanged_handle(void* dId, void** args) {
        auto d_object = cast(QSpinBox) dId;
        auto arg__1 = *(cast(int*)args[1]);
        //d_object.valueChanged_emit(arg__1);
}*/

extern(C) QMetaObjectNative* qtd_QSpinBox_staticMetaObject();

extern(C) void qtd_QSpinBox_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QSpinBox_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
