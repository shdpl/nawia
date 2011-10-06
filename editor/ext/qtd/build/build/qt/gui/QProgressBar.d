module qt.gui.QProgressBar;

public import qt.gui.QProgressBar_aux;
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
public import qt.gui.QStyleOptionProgressBar;
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


public class QProgressBar : QWidget
{
    public enum Direction {
        TopToBottom = 0,
        BottomToTop = 1
    }

    alias Direction.TopToBottom TopToBottom;
    alias Direction.BottomToTop BottomToTop;


    private static const string[] __signalSignatures = [
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

    protected final void valueChanged(int value) {
        qtd_QProgressBar_valueChanged_int(qtdNativeId, value);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QProgressBar_QProgressBar_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int alignment() const {
        return qtd_QProgressBar_alignment_const(qtdNativeId);
    }

    public final string format() const {
        string res;
        qtd_QProgressBar_format_const(qtdNativeId, &res);
        return res;
    }

    protected final void initStyleOption(QStyleOptionProgressBar option) const {
        qtd_QProgressBar_initStyleOption_nativepointerQStyleOptionProgressBar_const(qtdNativeId, option is null ? null : option.qtdNativeId);
    }

    public final bool invertedAppearance() {
        return qtd_QProgressBar_invertedAppearance(qtdNativeId);
    }

    public final bool invertedAppearance() const {
        return qtd_QProgressBar_invertedAppearance_const(qtdNativeId);
    }

    public final bool isTextVisible() const {
        return qtd_QProgressBar_isTextVisible_const(qtdNativeId);
    }

    public final int maximum() const {
        return qtd_QProgressBar_maximum_const(qtdNativeId);
    }

    public final int minimum() const {
        return qtd_QProgressBar_minimum_const(qtdNativeId);
    }

    public final Qt.Orientation orientation() const {
        return cast(Qt.Orientation) qtd_QProgressBar_orientation_const(qtdNativeId);
    }

    public final void reset() {
        qtd_QProgressBar_reset(qtdNativeId);
    }

    public final void setAlignment(int alignment) {
        qtd_QProgressBar_setAlignment_Alignment(qtdNativeId, alignment);
    }

    public final void setFormat(string format) {
        qtd_QProgressBar_setFormat_string(qtdNativeId, format);
    }

    public final void setInvertedAppearance(bool invert) {
        qtd_QProgressBar_setInvertedAppearance_bool(qtdNativeId, invert);
    }

    public final void setMaximum(int maximum) {
        qtd_QProgressBar_setMaximum_int(qtdNativeId, maximum);
    }

    public final void setMinimum(int minimum) {
        qtd_QProgressBar_setMinimum_int(qtdNativeId, minimum);
    }

    public final void setOrientation(Qt.Orientation arg__1) {
        qtd_QProgressBar_setOrientation_Orientation(qtdNativeId, arg__1);
    }

    public final void setRange(int minimum, int maximum) {
        qtd_QProgressBar_setRange_int_int(qtdNativeId, minimum, maximum);
    }

    public final void setTextDirection(QProgressBar.Direction textDirection) {
        qtd_QProgressBar_setTextDirection_Direction(qtdNativeId, textDirection);
    }

    public final void setTextVisible(bool visible) {
        qtd_QProgressBar_setTextVisible_bool(qtdNativeId, visible);
    }

    public final void setValue(int value) {
        qtd_QProgressBar_setValue_int(qtdNativeId, value);
    }

    public final QProgressBar.Direction textDirection() {
        return cast(QProgressBar.Direction) qtd_QProgressBar_textDirection(qtdNativeId);
    }

    public final QProgressBar.Direction textDirection() const {
        return cast(QProgressBar.Direction) qtd_QProgressBar_textDirection_const(qtdNativeId);
    }

    public final int value() const {
        return qtd_QProgressBar_value_const(qtdNativeId);
    }

    public bool event(QEvent e) {
        return qtd_QProgressBar_event_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    public QSize minimumSizeHint() const {
        QSize res;
        qtd_QProgressBar_minimumSizeHint_const(qtdNativeId, &res);
        return res;
    }

    protected void paintEvent(QPaintEvent arg__1) {
        qtd_QProgressBar_paintEvent_QPaintEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QProgressBar_sizeHint_const(qtdNativeId, &res);
        return res;
    }

    public string text() const {
        string res;
        qtd_QProgressBar_text_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "reset()", 
            "setMaximum(int)", 
            "setMinimum(int)", 
            "setOrientation(Qt::Orientation)", 
            "setRange(int,int)", 
            "setValue(int)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QProgressBar_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QProgressBar);
    }

    static QProgressBar __getObject(void* nativeId) {
        return static_cast!(QProgressBar)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QProgressBar_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QProgressBar_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QProgressBar(nativeId, initFlags);
        QProgressBar.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(int)("valueChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("reset"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(int)("setMaximum"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!(int)("setMinimum"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!(Qt.Orientation)("setOrientation"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!(int,int)("setRange"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[5]);
        mo.addMethod(new QMetaSlot(signature!(int)("setValue"), index));

    }

    public alias void __isQtType_QProgressBar;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QProgressBar_valueChanged_int(void* __this_nativeId,
 int value0);

// C wrappers
private extern(C) void* qtd_QProgressBar_QProgressBar_QWidget(void *d_ptr,
 void* parent0);
private extern(C) int  qtd_QProgressBar_alignment_const(void* __this_nativeId);
private extern(C) void  qtd_QProgressBar_format_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QProgressBar_initStyleOption_nativepointerQStyleOptionProgressBar_const(void* __this_nativeId,
 void* option0);
private extern(C) bool  qtd_QProgressBar_invertedAppearance(void* __this_nativeId);
private extern(C) bool  qtd_QProgressBar_invertedAppearance_const(void* __this_nativeId);
private extern(C) bool  qtd_QProgressBar_isTextVisible_const(void* __this_nativeId);
private extern(C) int  qtd_QProgressBar_maximum_const(void* __this_nativeId);
private extern(C) int  qtd_QProgressBar_minimum_const(void* __this_nativeId);
private extern(C) int  qtd_QProgressBar_orientation_const(void* __this_nativeId);
private extern(C) void  qtd_QProgressBar_reset(void* __this_nativeId);
private extern(C) void  qtd_QProgressBar_setAlignment_Alignment(void* __this_nativeId,
 int alignment0);
private extern(C) void  qtd_QProgressBar_setFormat_string(void* __this_nativeId,
 string format0);
private extern(C) void  qtd_QProgressBar_setInvertedAppearance_bool(void* __this_nativeId,
 bool invert0);
private extern(C) void  qtd_QProgressBar_setMaximum_int(void* __this_nativeId,
 int maximum0);
private extern(C) void  qtd_QProgressBar_setMinimum_int(void* __this_nativeId,
 int minimum0);
private extern(C) void  qtd_QProgressBar_setOrientation_Orientation(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QProgressBar_setRange_int_int(void* __this_nativeId,
 int minimum0,
 int maximum1);
private extern(C) void  qtd_QProgressBar_setTextDirection_Direction(void* __this_nativeId,
 int textDirection0);
private extern(C) void  qtd_QProgressBar_setTextVisible_bool(void* __this_nativeId,
 bool visible0);
private extern(C) void  qtd_QProgressBar_setValue_int(void* __this_nativeId,
 int value0);
private extern(C) int  qtd_QProgressBar_textDirection(void* __this_nativeId);
private extern(C) int  qtd_QProgressBar_textDirection_const(void* __this_nativeId);
private extern(C) int  qtd_QProgressBar_value_const(void* __this_nativeId);
private extern(C) bool  qtd_QProgressBar_event_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QProgressBar_minimumSizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QProgressBar_paintEvent_QPaintEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QProgressBar_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
private extern(C) void  qtd_QProgressBar_text_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, string* ret_str) qtd_QProgressBar_text_const_dispatch; }
extern(C) void qtd_export_QProgressBar_text_const_dispatch(void *dId, string* ret_str){
    auto d_object = cast(QProgressBar) dId;
    string _d_str = d_object.text();
    *ret_str = _d_str;
}

private extern (C) void qtd_QProgressBar_initCallBacks(void* virtuals);

extern(C) void static_init_QProgressBar() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QProgressBar_text_const_dispatch;
    qtd_QProgressBar_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QProgressBar_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QProgressBar) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QProgressBar_valueChanged_handle(void* dId, void** args) {
        auto d_object = cast(QProgressBar) dId;
        auto value0 = *(cast(int*)args[1]);
        //d_object.valueChanged_emit(value0);
}*/

extern(C) QMetaObjectNative* qtd_QProgressBar_staticMetaObject();

extern(C) void qtd_QProgressBar_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QProgressBar_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
