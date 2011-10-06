module qt.gui.QLCDNumber;

public import qt.gui.QLCDNumber_aux;
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
public import qt.gui.QFrame;
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
public import qt.gui.QDragEnterEvent;
public import qt.gui.QMouseEvent;
public import qt.gui.QCloseEvent;
public import qt.gui.QMoveEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QLCDNumber : QFrame
{
    public enum Mode {
        Hex = 0,
        Dec = 1,
        Oct = 2,
        Bin = 3
    }

    alias Mode.Hex Hex;
    alias Mode.Dec Dec;
    alias Mode.Oct Oct;
    alias Mode.Bin Bin;

    public enum SegmentStyle {
        Outline = 0,
        Filled = 1,
        Flat = 2
    }

    alias SegmentStyle.Outline Outline;
    alias SegmentStyle.Filled Filled;
    alias SegmentStyle.Flat Flat;


    private static const string[] __signalSignatures = [
            "overflow()"    ];

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

    protected final void overflow() {
        qtd_QLCDNumber_overflow(qtdNativeId);
    }
// Functions

    public this(QWidget parent_ = null) {
        void* ret = qtd_QLCDNumber_QLCDNumber_QWidget(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(uint numDigits, QWidget parent_ = null) {
        void* ret = qtd_QLCDNumber_QLCDNumber_uint_QWidget(cast(void*) this, numDigits, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool checkOverflow(double num) const {
        return qtd_QLCDNumber_checkOverflow_double_const(qtdNativeId, num);
    }

    public final bool checkOverflow(int num) const {
        return qtd_QLCDNumber_checkOverflow_int_const(qtdNativeId, num);
    }

    public final int digitCount() const {
        return qtd_QLCDNumber_digitCount_const(qtdNativeId);
    }

    public final void display(string str) {
        qtd_QLCDNumber_display_string(qtdNativeId, str);
    }

    public final void display(double num) {
        qtd_QLCDNumber_display_double(qtdNativeId, num);
    }

    public final void display(int num) {
        qtd_QLCDNumber_display_int(qtdNativeId, num);
    }

    public final int intValue() const {
        return qtd_QLCDNumber_intValue_const(qtdNativeId);
    }

    public final QLCDNumber.Mode mode() const {
        return cast(QLCDNumber.Mode) qtd_QLCDNumber_mode_const(qtdNativeId);
    }

    public final int numDigits() const {
        return qtd_QLCDNumber_numDigits_const(qtdNativeId);
    }

    public final QLCDNumber.SegmentStyle segmentStyle() const {
        return cast(QLCDNumber.SegmentStyle) qtd_QLCDNumber_segmentStyle_const(qtdNativeId);
    }

    public final void setBinMode() {
        qtd_QLCDNumber_setBinMode(qtdNativeId);
    }

    public final void setDecMode() {
        qtd_QLCDNumber_setDecMode(qtdNativeId);
    }

    public final void setDigitCount(int nDigits) {
        qtd_QLCDNumber_setDigitCount_int(qtdNativeId, nDigits);
    }

    public final void setHexMode() {
        qtd_QLCDNumber_setHexMode(qtdNativeId);
    }

    public final void setMode(QLCDNumber.Mode arg__1) {
        qtd_QLCDNumber_setMode_Mode(qtdNativeId, arg__1);
    }

    public final void setNumDigits(int nDigits) {
        qtd_QLCDNumber_setNumDigits_int(qtdNativeId, nDigits);
    }

    public final void setOctMode() {
        qtd_QLCDNumber_setOctMode(qtdNativeId);
    }

    public final void setSegmentStyle(QLCDNumber.SegmentStyle arg__1) {
        qtd_QLCDNumber_setSegmentStyle_SegmentStyle(qtdNativeId, arg__1);
    }

    public final void setSmallDecimalPoint(bool arg__1) {
        qtd_QLCDNumber_setSmallDecimalPoint_bool(qtdNativeId, arg__1);
    }

    public final bool smallDecimalPoint() const {
        return qtd_QLCDNumber_smallDecimalPoint_const(qtdNativeId);
    }

    public final double value() const {
        return qtd_QLCDNumber_value_const(qtdNativeId);
    }

    public bool event(QEvent e) {
        return qtd_QLCDNumber_event_QEvent(qtdNativeId, e is null ? null : e.qtdNativeId);
    }

    protected void paintEvent(QPaintEvent arg__1) {
        qtd_QLCDNumber_paintEvent_QPaintEvent(qtdNativeId, arg__1 is null ? null : arg__1.qtdNativeId);
    }

    public QSize sizeHint() const {
        QSize res;
        qtd_QLCDNumber_sizeHint_const(qtdNativeId, &res);
        return res;
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "display(QString)", 
            "display(double)", 
            "display(int)", 
            "setBinMode()", 
            "setDecMode()", 
            "setHexMode()", 
            "setOctMode()", 
            "setSmallDecimalPoint(bool)"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QLCDNumber_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QLCDNumber);
    }

    static QLCDNumber __getObject(void* nativeId) {
        return static_cast!(QLCDNumber)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QLCDNumber_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QLCDNumber_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QLCDNumber(nativeId, initFlags);
        QLCDNumber.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!()("overflow"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(string)("display"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(double)("display"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!(int)("display"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[3]);
        mo.addMethod(new QMetaSlot(signature!()("setBinMode"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[4]);
        mo.addMethod(new QMetaSlot(signature!()("setDecMode"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[5]);
        mo.addMethod(new QMetaSlot(signature!()("setHexMode"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[6]);
        mo.addMethod(new QMetaSlot(signature!()("setOctMode"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[7]);
        mo.addMethod(new QMetaSlot(signature!(bool)("setSmallDecimalPoint"), index));

    }

    public alias void __isQtType_QLCDNumber;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QLCDNumber_overflow(void* __this_nativeId);

// C wrappers
private extern(C) void* qtd_QLCDNumber_QLCDNumber_QWidget(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QLCDNumber_QLCDNumber_uint_QWidget(void *d_ptr,
 uint numDigits0,
 void* parent1);
private extern(C) bool  qtd_QLCDNumber_checkOverflow_double_const(void* __this_nativeId,
 double num0);
private extern(C) bool  qtd_QLCDNumber_checkOverflow_int_const(void* __this_nativeId,
 int num0);
private extern(C) int  qtd_QLCDNumber_digitCount_const(void* __this_nativeId);
private extern(C) void  qtd_QLCDNumber_display_string(void* __this_nativeId,
 string str0);
private extern(C) void  qtd_QLCDNumber_display_double(void* __this_nativeId,
 double num0);
private extern(C) void  qtd_QLCDNumber_display_int(void* __this_nativeId,
 int num0);
private extern(C) int  qtd_QLCDNumber_intValue_const(void* __this_nativeId);
private extern(C) int  qtd_QLCDNumber_mode_const(void* __this_nativeId);
private extern(C) int  qtd_QLCDNumber_numDigits_const(void* __this_nativeId);
private extern(C) int  qtd_QLCDNumber_segmentStyle_const(void* __this_nativeId);
private extern(C) void  qtd_QLCDNumber_setBinMode(void* __this_nativeId);
private extern(C) void  qtd_QLCDNumber_setDecMode(void* __this_nativeId);
private extern(C) void  qtd_QLCDNumber_setDigitCount_int(void* __this_nativeId,
 int nDigits0);
private extern(C) void  qtd_QLCDNumber_setHexMode(void* __this_nativeId);
private extern(C) void  qtd_QLCDNumber_setMode_Mode(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QLCDNumber_setNumDigits_int(void* __this_nativeId,
 int nDigits0);
private extern(C) void  qtd_QLCDNumber_setOctMode(void* __this_nativeId);
private extern(C) void  qtd_QLCDNumber_setSegmentStyle_SegmentStyle(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QLCDNumber_setSmallDecimalPoint_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) bool  qtd_QLCDNumber_smallDecimalPoint_const(void* __this_nativeId);
private extern(C) double  qtd_QLCDNumber_value_const(void* __this_nativeId);
private extern(C) bool  qtd_QLCDNumber_event_QEvent(void* __this_nativeId,
 void* e0);
private extern(C) void  qtd_QLCDNumber_paintEvent_QPaintEvent(void* __this_nativeId,
 void* arg__1);
private extern(C) void  qtd_QLCDNumber_sizeHint_const(void* __this_nativeId,
 QSize * __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QLCDNumber_initCallBacks(void* virtuals);

extern(C) void static_init_QLCDNumber() {
    qtd_QLCDNumber_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QLCDNumber_customContextMenuRequested_handle(void* dId, void** args) {
        auto d_object = cast(QLCDNumber) dId;
        auto pos0 = *(cast(QPoint*)args[1]);
        //d_object.customContextMenuRequested_emit(pos0);
}*/
/*private extern(C) void qtd_QLCDNumber_overflow_handle(void* dId, void** args) {
        auto d_object = cast(QLCDNumber) dId;
        //d_object.overflow_emit();
}*/

extern(C) QMetaObjectNative* qtd_QLCDNumber_staticMetaObject();

extern(C) void qtd_QLCDNumber_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QLCDNumber_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
