module qt.gui.QDoubleValidator;

public import qt.gui.QDoubleValidator_aux;
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
public import qt.gui.QValidator;
public import qt.gui.QValidator;
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QDoubleValidator : QValidator
{
    public enum Notation {
        StandardNotation = 0,
        ScientificNotation = 1
    }

    alias Notation.StandardNotation StandardNotation;
    alias Notation.ScientificNotation ScientificNotation;


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

    public this(QObject parent_ = null) {
        void* ret = qtd_QDoubleValidator_QDoubleValidator_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(double bottom, double top, int decimals, QObject parent_) {
        void* ret = qtd_QDoubleValidator_QDoubleValidator_double_double_int_QObject(cast(void*) this, bottom, top, decimals, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final double bottom() const {
        return qtd_QDoubleValidator_bottom_const(qtdNativeId);
    }

    public final int decimals() const {
        return qtd_QDoubleValidator_decimals_const(qtdNativeId);
    }

    public final QDoubleValidator.Notation notation() const {
        return cast(QDoubleValidator.Notation) qtd_QDoubleValidator_notation_const(qtdNativeId);
    }

    public final void setBottom(double arg__1) {
        qtd_QDoubleValidator_setBottom_double(qtdNativeId, arg__1);
    }

    public final void setDecimals(int arg__1) {
        qtd_QDoubleValidator_setDecimals_int(qtdNativeId, arg__1);
    }

    public final void setNotation(QDoubleValidator.Notation arg__1) {
        qtd_QDoubleValidator_setNotation_Notation(qtdNativeId, arg__1);
    }

    public final void setTop(double arg__1) {
        qtd_QDoubleValidator_setTop_double(qtdNativeId, arg__1);
    }

    public final double top() const {
        return qtd_QDoubleValidator_top_const(qtdNativeId);
    }

    public void setRange(double bottom, double top, int decimals = 0) {
        qtd_QDoubleValidator_setRange_double_double_int(qtdNativeId, bottom, top, decimals);
    }

    public QValidator.State validate(ref string arg__1, int* arg__2) const {
        return cast(QValidator.State) qtd_QDoubleValidator_validate_nativepointerstring_nativepointerint_const(qtdNativeId, arg__1, arg__2);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QDoubleValidator_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QDoubleValidator);
    }

    static QDoubleValidator __getObject(void* nativeId) {
        return static_cast!(QDoubleValidator)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QDoubleValidator_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QDoubleValidator_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QDoubleValidator(nativeId, initFlags);
        QDoubleValidator.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QDoubleValidator;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QDoubleValidator_QDoubleValidator_QObject(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QDoubleValidator_QDoubleValidator_double_double_int_QObject(void *d_ptr,
 double bottom0,
 double top1,
 int decimals2,
 void* parent3);
private extern(C) double  qtd_QDoubleValidator_bottom_const(void* __this_nativeId);
private extern(C) int  qtd_QDoubleValidator_decimals_const(void* __this_nativeId);
private extern(C) int  qtd_QDoubleValidator_notation_const(void* __this_nativeId);
private extern(C) void  qtd_QDoubleValidator_setBottom_double(void* __this_nativeId,
 double arg__1);
private extern(C) void  qtd_QDoubleValidator_setDecimals_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QDoubleValidator_setNotation_Notation(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QDoubleValidator_setTop_double(void* __this_nativeId,
 double arg__1);
private extern(C) double  qtd_QDoubleValidator_top_const(void* __this_nativeId);
private extern(C) void  qtd_QDoubleValidator_setRange_double_double_int(void* __this_nativeId,
 double bottom0,
 double top1,
 int decimals2);
private extern(C) int  qtd_QDoubleValidator_validate_nativepointerstring_nativepointerint_const(void* __this_nativeId,
 string arg__1,
 int * arg__2);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, double bottom0, double top1, int decimals2) qtd_QDoubleValidator_setRange_double_double_int_dispatch; }
extern(C) void qtd_export_QDoubleValidator_setRange_double_double_int_dispatch(void *dId, double bottom0, double top1, int decimals2){
    auto d_object = cast(QDoubleValidator) dId;
    d_object.setRange(bottom0, top1, decimals2);
}

private extern (C) void qtd_QDoubleValidator_initCallBacks(void* virtuals);

extern(C) void static_init_QDoubleValidator() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QDoubleValidator_setRange_double_double_int_dispatch;
    qtd_QDoubleValidator_initCallBacks(virt_arr.ptr);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QDoubleValidator_staticMetaObject();

extern(C) void qtd_QDoubleValidator_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QDoubleValidator_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
