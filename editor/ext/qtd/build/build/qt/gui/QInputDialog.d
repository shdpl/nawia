module qt.gui.QInputDialog;

public import qt.gui.QInputDialog_aux;
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
public import qt.gui.QLineEdit;
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
public import qt.gui.QResizeEvent;
public import qt.gui.QDragMoveEvent;
public import qt.gui.QKeyEvent;
public import qt.core.QPoint;
public import qt.core.QChildEvent;
public import qt.gui.QWidget;
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
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QInputDialog : QDialog
{

    private static const string[] __signalSignatures = [
            "doubleValueChanged(double)", 
            "doubleValueSelected(double)", 
            "intValueChanged(int)", 
            "intValueSelected(int)", 
            "textValueChanged(QString)", 
            "textValueSelected(QString)"    ];

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

    protected final void doubleValueChanged(double value) {
        qtd_QInputDialog_doubleValueChanged_double(qtdNativeId, value);
    }

    protected final void doubleValueSelected(double value) {
        qtd_QInputDialog_doubleValueSelected_double(qtdNativeId, value);
    }

    protected final void intValueChanged(int value) {
        qtd_QInputDialog_intValueChanged_int(qtdNativeId, value);
    }

    protected final void intValueSelected(int value) {
        qtd_QInputDialog_intValueSelected_int(qtdNativeId, value);
    }

    protected final void textValueChanged(string text) {
        qtd_QInputDialog_textValueChanged_string(qtdNativeId, text);
    }

    protected final void textValueSelected(string text) {
        qtd_QInputDialog_textValueSelected_string(qtdNativeId, text);
    }
// Functions

    public this(QWidget parent_ = null, int flags = 0) {
        void* ret = qtd_QInputDialog_QInputDialog_QWidget_WindowFlags(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId, flags);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string cancelButtonText() const {
        string res;
        qtd_QInputDialog_cancelButtonText_const(qtdNativeId, &res);
        return res;
    }

    public final QList!(string) comboBoxItems() const {
        auto res = QList!(string).opCall();
        qtd_QInputDialog_comboBoxItems_const(qtdNativeId, &res);
        return res;
    }

    public final int doubleDecimals() const {
        return qtd_QInputDialog_doubleDecimals_const(qtdNativeId);
    }

    public final double doubleMaximum() const {
        return qtd_QInputDialog_doubleMaximum_const(qtdNativeId);
    }

    public final double doubleMinimum() const {
        return qtd_QInputDialog_doubleMinimum_const(qtdNativeId);
    }

    public final double doubleValue() const {
        return qtd_QInputDialog_doubleValue_const(qtdNativeId);
    }

    public final int intMaximum() const {
        return qtd_QInputDialog_intMaximum_const(qtdNativeId);
    }

    public final int intMinimum() const {
        return qtd_QInputDialog_intMinimum_const(qtdNativeId);
    }

    public final int intStep() const {
        return qtd_QInputDialog_intStep_const(qtdNativeId);
    }

    public final int intValue() const {
        return qtd_QInputDialog_intValue_const(qtdNativeId);
    }

    public final bool isComboBoxEditable() const {
        return qtd_QInputDialog_isComboBoxEditable_const(qtdNativeId);
    }

    public final string labelText() const {
        string res;
        qtd_QInputDialog_labelText_const(qtdNativeId, &res);
        return res;
    }

    public final string okButtonText() const {
        string res;
        qtd_QInputDialog_okButtonText_const(qtdNativeId, &res);
        return res;
    }

    public final void open() {
        qtd_QInputDialog_open(qtdNativeId);
    }

    public final void setCancelButtonText(string text) {
        qtd_QInputDialog_setCancelButtonText_string(qtdNativeId, text);
    }

    public final void setComboBoxEditable(bool editable) {
        qtd_QInputDialog_setComboBoxEditable_bool(qtdNativeId, editable);
    }

    public final void setComboBoxItems(QList!(string) items) {
        qtd_QInputDialog_setComboBoxItems_QList(qtdNativeId, &items);
    }

    public final void setDoubleDecimals(int decimals) {
        qtd_QInputDialog_setDoubleDecimals_int(qtdNativeId, decimals);
    }

    public final void setDoubleMaximum(double max) {
        qtd_QInputDialog_setDoubleMaximum_double(qtdNativeId, max);
    }

    public final void setDoubleMinimum(double min) {
        qtd_QInputDialog_setDoubleMinimum_double(qtdNativeId, min);
    }

    public final void setDoubleRange(double min, double max) {
        qtd_QInputDialog_setDoubleRange_double_double(qtdNativeId, min, max);
    }

    public final void setDoubleValue(double value) {
        qtd_QInputDialog_setDoubleValue_double(qtdNativeId, value);
    }

    public final void setIntMaximum(int max) {
        qtd_QInputDialog_setIntMaximum_int(qtdNativeId, max);
    }

    public final void setIntMinimum(int min) {
        qtd_QInputDialog_setIntMinimum_int(qtdNativeId, min);
    }

    public final void setIntRange(int min, int max) {
        qtd_QInputDialog_setIntRange_int_int(qtdNativeId, min, max);
    }

    public final void setIntStep(int step) {
        qtd_QInputDialog_setIntStep_int(qtdNativeId, step);
    }

    public final void setIntValue(int value) {
        qtd_QInputDialog_setIntValue_int(qtdNativeId, value);
    }

    public final void setLabelText(string text) {
        qtd_QInputDialog_setLabelText_string(qtdNativeId, text);
    }

    public final void setOkButtonText(string text) {
        qtd_QInputDialog_setOkButtonText_string(qtdNativeId, text);
    }

    public final void setTextEchoMode(QLineEdit.EchoMode mode) {
        qtd_QInputDialog_setTextEchoMode_EchoMode(qtdNativeId, mode);
    }

    public final void setTextValue(string text) {
        qtd_QInputDialog_setTextValue_string(qtdNativeId, text);
    }

    public final QLineEdit.EchoMode textEchoMode() const {
        return cast(QLineEdit.EchoMode) qtd_QInputDialog_textEchoMode_const(qtdNativeId);
    }

    public final string textValue() const {
        string res;
        qtd_QInputDialog_textValue_const(qtdNativeId, &res);
        return res;
    }

    public void done(int result) {
        qtd_QInputDialog_done_int(qtdNativeId, result);
    }

    public QSize minimumSizeHint() const {
        QSize res;
        qtd_QInputDialog_minimumSizeHint_const(qtdNativeId, &res);
        return res;
    }

    public void setVisible(bool visible) {
        qtd_QInputDialog_setVisible_bool(qtdNativeId, visible);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QInputDialog_sizeHint_const(qtdNativeId, &res);
        return res;
    }

    private static double getDouble_private(QWidget parent_, string title, string label, double value = 0, double minValue = -2147483647, double maxValue = 2147483647, int decimals = 1, bool* ok = null, int flags = 0) {
        return qtd_QInputDialog_getDouble_private_QWidget_string_string_double_double_double_int_nativepointerbool_WindowFlags(parent_ is null ? null : parent_.qtdNativeId, title, label, value, minValue, maxValue, decimals, ok, flags);
    }

    private static int getInt_private(QWidget parent_, string title, string label, int value = 0, int minValue = -2147483647, int maxValue = 2147483647, int step = 1, bool* ok = null, int flags = 0) {
        return qtd_QInputDialog_getInt_private_QWidget_string_string_int_int_int_int_nativepointerbool_WindowFlags(parent_ is null ? null : parent_.qtdNativeId, title, label, value, minValue, maxValue, step, ok, flags);
    }

    private static string getItem_private(QWidget parent_, string title, string label, QList!(string) items, int current = 0, bool editable = true, bool* ok = null, int flags = 0) {
        string res;
        qtd_QInputDialog_getItem_private_QWidget_string_string_QList_int_bool_nativepointerbool_WindowFlags(&res, parent_ is null ? null : parent_.qtdNativeId, title, label, &items, current, editable, ok, flags);
        return res;
    }

    private static string getText_private(QWidget parent_, string title, string label, QLineEdit.EchoMode echo = QLineEdit.EchoMode.Normal, string text = "", bool* ok = null, int flags = 0) {
        string res;
        qtd_QInputDialog_getText_private_QWidget_string_string_EchoMode_string_nativepointerbool_WindowFlags(&res, parent_ is null ? null : parent_.qtdNativeId, title, label, echo, text, ok, flags);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QInputDialog_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QInputDialog);
    }

    static QInputDialog __getObject(void* nativeId) {
        return static_cast!(QInputDialog)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QInputDialog_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QInputDialog_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QInputDialog(nativeId, initFlags);
        QInputDialog.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(double)("doubleValueChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(double)("doubleValueSelected"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(int)("intValueChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(int)("intValueSelected"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!(string)("textValueChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[5]);
        mo.addMethod(new QMetaSignal(signature!(string)("textValueSelected"), index));

    }

    public alias void __isQtType_QInputDialog;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class

    public static double getDouble(QWidget _parent, string title, string label, double value = 0, double minValue = -2147483647, double maxValue = 2147483647, int decimals = 1, ref bool ok = false, int flags = 0) {
        return qtd_QInputDialog_getDouble_private_QWidget_string_string_double_double_double_int_nativepointerbool_WindowFlags(_parent is null ? null : _parent.qtdNativeId, title, label, value, minValue, maxValue, decimals, &ok, flags);
    }

    static if (QT_VERSION >= QT_VERSION_CHECK(4, 5, 0))
    {
        public static int getInt(QWidget _parent, string title, string label, int value = 0, int minValue = -2147483647, int maxValue = 2147483647, int step = 1, ref bool ok = false, int flags = 0) {
            return qtd_QInputDialog_getInt_private_QWidget_string_string_int_int_int_int_nativepointerbool_WindowFlags(_parent is null ? null : _parent.qtdNativeId, title, label, value, minValue, maxValue, step, &ok, flags);
        }
    }

    public static string getItem(QWidget _parent, string title, string label, QList!(string) items, int current = 0, bool editable = true, ref bool ok = false, int flags = 0) {
        return getItem_private(_parent, title, label, items, current, editable, &ok, flags);
    }

    public static string getText(QWidget _parent, string title, string label, QLineEdit.EchoMode echo = QLineEdit.EchoMode.Normal, string text = null, ref bool ok = false, int flags = 0) {
        string res;
        qtd_QInputDialog_getText_private_QWidget_string_string_EchoMode_string_nativepointerbool_WindowFlags(&res, _parent is null ? null : _parent.qtdNativeId, title, label, echo, text, &ok, flags);
        return res;
    }

}

// C wrappers for signal emitters
private extern(C) void  qtd_QInputDialog_doubleValueChanged_double(void* __this_nativeId,
 double value0);
private extern(C) void  qtd_QInputDialog_doubleValueSelected_double(void* __this_nativeId,
 double value0);
private extern(C) void  qtd_QInputDialog_intValueChanged_int(void* __this_nativeId,
 int value0);
private extern(C) void  qtd_QInputDialog_intValueSelected_int(void* __this_nativeId,
 int value0);
private extern(C) void  qtd_QInputDialog_textValueChanged_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QInputDialog_textValueSelected_string(void* __this_nativeId,
 string text0);

// C wrappers
private extern(C) void* qtd_QInputDialog_QInputDialog_QWidget_WindowFlags(void *d_ptr,
 void* parent0,
 int flags1);
private extern(C) void  qtd_QInputDialog_cancelButtonText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QInputDialog_comboBoxItems_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QInputDialog_doubleDecimals_const(void* __this_nativeId);
private extern(C) double  qtd_QInputDialog_doubleMaximum_const(void* __this_nativeId);
private extern(C) double  qtd_QInputDialog_doubleMinimum_const(void* __this_nativeId);
private extern(C) double  qtd_QInputDialog_doubleValue_const(void* __this_nativeId);
private extern(C) int  qtd_QInputDialog_intMaximum_const(void* __this_nativeId);
private extern(C) int  qtd_QInputDialog_intMinimum_const(void* __this_nativeId);
private extern(C) int  qtd_QInputDialog_intStep_const(void* __this_nativeId);
private extern(C) int  qtd_QInputDialog_intValue_const(void* __this_nativeId);
private extern(C) bool  qtd_QInputDialog_isComboBoxEditable_const(void* __this_nativeId);
private extern(C) void  qtd_QInputDialog_labelText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QInputDialog_okButtonText_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QInputDialog_open(void* __this_nativeId);
private extern(C) void  qtd_QInputDialog_setCancelButtonText_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QInputDialog_setComboBoxEditable_bool(void* __this_nativeId,
 bool editable0);
private extern(C) void  qtd_QInputDialog_setComboBoxItems_QList(void* __this_nativeId,
 void* items0);
private extern(C) void  qtd_QInputDialog_setDoubleDecimals_int(void* __this_nativeId,
 int decimals0);
private extern(C) void  qtd_QInputDialog_setDoubleMaximum_double(void* __this_nativeId,
 double max0);
private extern(C) void  qtd_QInputDialog_setDoubleMinimum_double(void* __this_nativeId,
 double min0);
private extern(C) void  qtd_QInputDialog_setDoubleRange_double_double(void* __this_nativeId,
 double min0,
 double max1);
private extern(C) void  qtd_QInputDialog_setDoubleValue_double(void* __this_nativeId,
 double value0);
private extern(C) void  qtd_QInputDialog_setIntMaximum_int(void* __this_nativeId,
 int max0);
private extern(C) void  qtd_QInputDialog_setIntMinimum_int(void* __this_nativeId,
 int min0);
private extern(C) void  qtd_QInputDialog_setIntRange_int_int(void* __this_nativeId,
 int min0,
 int max1);
private extern(C) void  qtd_QInputDialog_setIntStep_int(void* __this_nativeId,
 int step0);
private extern(C) void  qtd_QInputDialog_setIntValue_int(void* __this_nativeId,
 int value0);
private extern(C) void  qtd_QInputDialog_setLabelText_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QInputDialog_setOkButtonText_string(void* __this_nativeId,
 string text0);
private extern(C) void  qtd_QInputDialog_setTextEchoMode_EchoMode(void* __this_nativeId,
 int mode0);
private extern(C) void  qtd_QInputDialog_setTextValue_string(void* __this_nativeId,
 string text0);
private extern(C) int  qtd_QInputDialog_textEchoMode_const(void* __this_nativeId);
private extern(C) void  qtd_QInputDialog_textValue_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QInputDialog_done_int(void* __this_nativeId,
 int result0);
private extern(C) void  qtd_QInputDialog_minimumSizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QInputDialog_setVisible_bool(void* __this_nativeId,
 bool visible0);
private extern(C) void  qtd_QInputDialog_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) double  qtd_QInputDialog_getDouble_private_QWidget_string_string_double_double_double_int_nativepointerbool_WindowFlags(void* parent0,
 string title1,
 string label2,
 double value3,
 double minValue4,
 double maxValue5,
 int decimals6,
 bool* ok7,
 int flags8);
private extern(C) int  qtd_QInputDialog_getInt_private_QWidget_string_string_int_int_int_int_nativepointerbool_WindowFlags(void* parent0,
 string title1,
 string label2,
 int value3,
 int minValue4,
 int maxValue5,
 int step6,
 bool* ok7,
 int flags8);
private extern(C) void  qtd_QInputDialog_getItem_private_QWidget_string_string_QList_int_bool_nativepointerbool_WindowFlags(void* __d_return_value,
 void* parent0,
 string title1,
 string label2,
 void* items3,
 int current4,
 bool editable5,
 bool* ok6,
 int flags7);
private extern(C) void  qtd_QInputDialog_getText_private_QWidget_string_string_EchoMode_string_nativepointerbool_WindowFlags(void* __d_return_value,
 void* parent0,
 string title1,
 string label2,
 int echo3,
 string text4,
 bool* ok5,
 int flags6);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QInputDialog_initCallBacks(void* virtuals);

extern(C) void static_init_QInputDialog() {
    qtd_QInputDialog_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QInputDialog_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QInputDialog) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QInputDialog_accepted_handle(void* dId, void** args) {
        auto d_object = cast(QInputDialog) dId;
        //d_object.accepted_emit();
}*/
/*private extern(C) void qtd_QInputDialog_finished_handle(void* dId, void** args) {
        auto d_object = cast(QInputDialog) dId;
        auto result0 = *(cast(int*)args[1]);
        //d_object.finished_emit(result0);
}*/
/*private extern(C) void qtd_QInputDialog_rejected_handle(void* dId, void** args) {
        auto d_object = cast(QInputDialog) dId;
        //d_object.rejected_emit();
}*/
/*private extern(C) void qtd_QInputDialog_doubleValueChanged_handle(void* dId, void** args) {
        auto d_object = cast(QInputDialog) dId;
        auto value0 = *(cast(double*)args[1]);
        //d_object.doubleValueChanged_emit(value0);
}*/
/*private extern(C) void qtd_QInputDialog_doubleValueSelected_handle(void* dId, void** args) {
        auto d_object = cast(QInputDialog) dId;
        auto value0 = *(cast(double*)args[1]);
        //d_object.doubleValueSelected_emit(value0);
}*/
/*private extern(C) void qtd_QInputDialog_intValueChanged_handle(void* dId, void** args) {
        auto d_object = cast(QInputDialog) dId;
        auto value0 = *(cast(int*)args[1]);
        //d_object.intValueChanged_emit(value0);
}*/
/*private extern(C) void qtd_QInputDialog_intValueSelected_handle(void* dId, void** args) {
        auto d_object = cast(QInputDialog) dId;
        auto value0 = *(cast(int*)args[1]);
        //d_object.intValueSelected_emit(value0);
}*/
/*private extern(C) void qtd_QInputDialog_textValueChanged_handle(void* dId, void** args) {
        auto d_object = cast(QInputDialog) dId;
        auto text0_ptr = args[1];
        string text0 = QStringUtil.toNativeString(text0_ptr);
        //d_object.textValueChanged_emit(text0);
}*/
/*private extern(C) void qtd_QInputDialog_textValueSelected_handle(void* dId, void** args) {
        auto d_object = cast(QInputDialog) dId;
        auto text0_ptr = args[1];
        string text0 = QStringUtil.toNativeString(text0_ptr);
        //d_object.textValueSelected_emit(text0);
}*/

extern(C) QMetaObjectNative* qtd_QInputDialog_staticMetaObject();

extern(C) void qtd_QInputDialog_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QInputDialog_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
