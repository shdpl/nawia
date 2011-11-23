module qt.gui.QDoubleSpinBox;

public import qt.gui.QDoubleSpinBox_aux;
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


public class QDoubleSpinBox : QAbstractSpinBox
{

    private static const string[] __signalSignatures = [
            "valueChanged(QString)", 
            "valueChanged(double)"    ];

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
        qtd_QDoubleSpinBox_valueChanged_string(qtdNativeId, arg__1);
    }

    protected final void valueChanged(double arg__1) {
        qtd_QDoubleSpinBox_valueChanged_double(qtdNativeId, arg__1);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QDoubleSpinBox_QDoubleSpinBox_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string cleanText() const {
        string res;
        qtd_QDoubleSpinBox_cleanText_const(qtdNativeId, &res);
        return res;
    }

    public final int decimals() const {
        return qtd_QDoubleSpinBox_decimals_const(qtdNativeId);
    }

    public final double maximum() const {
        return qtd_QDoubleSpinBox_maximum_const(qtdNativeId);
    }

    public final double minimum() const {
        return qtd_QDoubleSpinBox_minimum_const(qtdNativeId);
    }

    public final string prefix() const {
        string res;
        qtd_QDoubleSpinBox_prefix_const(qtdNativeId, &res);
        return res;
    }

    public final void setDecimals(int prec) {
        qtd_QDoubleSpinBox_setDecimals_int(qtdNativeId, prec);
    }

    public final void setMaximum(double max) {
        qtd_QDoubleSpinBox_setMaximum_double(qtdNativeId, max);
    }

    public final void setMinimum(double min) {
        qtd_QDoubleSpinBox_setMinimum_double(qtdNativeId, min);
    }

    public final void setPrefix(string prefix) {
        qtd_QDoubleSpinBox_setPrefix_string(qtdNativeId, prefix);
    }

    public final void setRange(double min, double max) {
        qtd_QDoubleSpinBox_setRange_double_double(qtdNativeId, min, max);
    }

    public final void setSingleStep(double val) {
        qtd_QDoubleSpinBox_setSingleStep_double(qtdNativeId, val);
    }

    public final void setSuffix(string suffix) {
        qtd_QDoubleSpinBox_setSuffix_string(qtdNativeId, suffix);
    }

    public final void setValue(double val) {
        qtd_QDoubleSpinBox_setValue_double(qtdNativeId, val);
    }

    public final double singleStep() const {
        return qtd_QDoubleSpinBox_singleStep_const(qtdNativeId);
    }

    public final string suffix() const {
        string res;
        qtd_QDoubleSpinBox_suffix_const(qtdNativeId, &res);
        return res;
    }

    public final double value() const {
        return qtd_QDoubleSpinBox_value_const(qtdNativeId);
    }

    public void fixup(ref string str) const {
        qtd_QDoubleSpinBox_fixup_nativepointerstring_const(qtdNativeId, str);
    }

    public string textFromValue(double val) const {
        string res;
        qtd_QDoubleSpinBox_textFromValue_double_const(qtdNativeId, &res, val);
        return res;
    }

    public QValidator.State validate(ref string input, int* pos) const {
        return cast(QValidator.State) qtd_QDoubleSpinBox_validate_nativepointerstring_nativepointerint_const(qtdNativeId, input, pos);
    }

    public double valueFromText(string text) const {
        return qtd_QDoubleSpinBox_valueFromText_string_const(qtdNativeId, text);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "setValue(double)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QDoubleSpinBox_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QDoubleSpinBox);
    }

    static QDoubleSpinBox __getObject(void* nativeId) {
        return static_cast!(QDoubleSpinBox)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QDoubleSpinBox_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QDoubleSpinBox_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QDoubleSpinBox(nativeId, initFlags);
        QDoubleSpinBox.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(string)("valueChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(double)("valueChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(double)("setValue"), index));

    }

    public alias void __isQtType_QDoubleSpinBox;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QDoubleSpinBox_valueChanged_string(void* __this_nativeId,
 string arg__1);
private extern(C) void  qtd_QDoubleSpinBox_valueChanged_double(void* __this_nativeId,
 double arg__1);

// C wrappers
private extern(C) void* qtd_QDoubleSpinBox_QDoubleSpinBox_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QDoubleSpinBox_cleanText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QDoubleSpinBox_decimals_const(void* __this_nativeId);
private extern(C) double  qtd_QDoubleSpinBox_maximum_const(void* __this_nativeId);
private extern(C) double  qtd_QDoubleSpinBox_minimum_const(void* __this_nativeId);
private extern(C) void  qtd_QDoubleSpinBox_prefix_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QDoubleSpinBox_setDecimals_int(void* __this_nativeId,
 int prec0);
private extern(C) void  qtd_QDoubleSpinBox_setMaximum_double(void* __this_nativeId,
 double max0);
private extern(C) void  qtd_QDoubleSpinBox_setMinimum_double(void* __this_nativeId,
 double min0);
private extern(C) void  qtd_QDoubleSpinBox_setPrefix_string(void* __this_nativeId,
 string prefix0);
private extern(C) void  qtd_QDoubleSpinBox_setRange_double_double(void* __this_nativeId,
 double min0,
 double max1);
private extern(C) void  qtd_QDoubleSpinBox_setSingleStep_double(void* __this_nativeId,
 double val0);
private extern(C) void  qtd_QDoubleSpinBox_setSuffix_string(void* __this_nativeId,
 string suffix0);
private extern(C) void  qtd_QDoubleSpinBox_setValue_double(void* __this_nativeId,
 double val0);
private extern(C) double  qtd_QDoubleSpinBox_singleStep_const(void* __this_nativeId);
private extern(C) void  qtd_QDoubleSpinBox_suffix_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) double  qtd_QDoubleSpinBox_value_const(void* __this_nativeId);
private extern(C) void  qtd_QDoubleSpinBox_fixup_nativepointerstring_const(void* __this_nativeId,
 string str0);
private extern(C) void  qtd_QDoubleSpinBox_textFromValue_double_const(void* __this_nativeId,
 void* __d_return_value,
 double val0);
private extern(C) int  qtd_QDoubleSpinBox_validate_nativepointerstring_nativepointerint_const(void* __this_nativeId,
 string input0,
 int * pos1);
private extern(C) double  qtd_QDoubleSpinBox_valueFromText_string_const(void* __this_nativeId,
 string text0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, string* ret_str, double val0) qtd_QDoubleSpinBox_textFromValue_double_const_dispatch; }
extern(C) void qtd_export_QDoubleSpinBox_textFromValue_double_const_dispatch(void *dId, string* ret_str, double val0){
    auto d_object = cast(QDoubleSpinBox) dId;
    string _d_str = d_object.textFromValue(val0);
    *ret_str = _d_str;
}

extern(C){ extern double function(void *dId, wchar* text0, int text0_size) qtd_QDoubleSpinBox_valueFromText_string_const_dispatch; }
extern(C) double qtd_export_QDoubleSpinBox_valueFromText_string_const_dispatch(void *dId, wchar* text0, int text0_size){
    auto d_object = cast(QDoubleSpinBox) dId;
    string text0_d_ref = toUTF8(text0[0..text0_size]);
    auto return_value = d_object.valueFromText(text0_d_ref);
    return return_value;
}

private extern (C) void qtd_QDoubleSpinBox_initCallBacks(void* virtuals);

extern(C) void static_init_QDoubleSpinBox() {
    void*[2] virt_arr;
    virt_arr[0] = &qtd_export_QDoubleSpinBox_textFromValue_double_const_dispatch;
    virt_arr[1] = &qtd_export_QDoubleSpinBox_valueFromText_string_const_dispatch;
    qtd_QDoubleSpinBox_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QDoubleSpinBox_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QDoubleSpinBox) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QDoubleSpinBox_editingFinished_handle(void* dId, void** args) {
        auto d_object = cast(QDoubleSpinBox) dId;
        //d_object.editingFinished_emit();
}*/
/*private extern(C) void qtd_QDoubleSpinBox_valueChanged_handle(void* dId, void** args) {
        auto d_object = cast(QDoubleSpinBox) dId;
        auto arg__1_ptr = args[1];
        string arg__1 = QStringUtil.toNativeString(arg__1_ptr);
        //d_object.valueChanged_emit(arg__1);
}*/
/*private extern(C) void qtd_QDoubleSpinBox_valueChanged_handle(void* dId, void** args) {
        auto d_object = cast(QDoubleSpinBox) dId;
        auto arg__1 = *(cast(double*)args[1]);
        //d_object.valueChanged_emit(arg__1);
}*/

extern(C) QMetaObjectNative* qtd_QDoubleSpinBox_staticMetaObject();

extern(C) void qtd_QDoubleSpinBox_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QDoubleSpinBox_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
