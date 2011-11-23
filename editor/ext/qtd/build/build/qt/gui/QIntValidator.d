module qt.gui.QIntValidator;

public import qt.gui.QIntValidator_aux;
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


public class QIntValidator : QValidator
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

    public this(QObject parent_ = null) {
        void* ret = qtd_QIntValidator_QIntValidator_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(int bottom, int top, QObject parent_) {
        void* ret = qtd_QIntValidator_QIntValidator_int_int_QObject(cast(void*) this, bottom, top, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final int bottom() const {
        return qtd_QIntValidator_bottom_const(qtdNativeId);
    }

    public final void setBottom(int arg__1) {
        qtd_QIntValidator_setBottom_int(qtdNativeId, arg__1);
    }

    public final void setTop(int arg__1) {
        qtd_QIntValidator_setTop_int(qtdNativeId, arg__1);
    }

    public final int top() const {
        return qtd_QIntValidator_top_const(qtdNativeId);
    }

    public void fixup(ref string input) const {
        qtd_QIntValidator_fixup_nativepointerstring_const(qtdNativeId, input);
    }

    public void setRange(int bottom, int top) {
        qtd_QIntValidator_setRange_int_int(qtdNativeId, bottom, top);
    }

    public QValidator.State validate(ref string arg__1, int* arg__2) const {
        return cast(QValidator.State) qtd_QIntValidator_validate_nativepointerstring_nativepointerint_const(qtdNativeId, arg__1, arg__2);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QIntValidator_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QIntValidator);
    }

    static QIntValidator __getObject(void* nativeId) {
        return static_cast!(QIntValidator)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QIntValidator_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QIntValidator_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QIntValidator(nativeId, initFlags);
        QIntValidator.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QIntValidator;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QIntValidator_QIntValidator_QObject(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QIntValidator_QIntValidator_int_int_QObject(void *d_ptr,
 int bottom0,
 int top1,
 void* parent2);
private extern(C) int  qtd_QIntValidator_bottom_const(void* __this_nativeId);
private extern(C) void  qtd_QIntValidator_setBottom_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QIntValidator_setTop_int(void* __this_nativeId,
 int arg__1);
private extern(C) int  qtd_QIntValidator_top_const(void* __this_nativeId);
private extern(C) void  qtd_QIntValidator_fixup_nativepointerstring_const(void* __this_nativeId,
 string input0);
private extern(C) void  qtd_QIntValidator_setRange_int_int(void* __this_nativeId,
 int bottom0,
 int top1);
private extern(C) int  qtd_QIntValidator_validate_nativepointerstring_nativepointerint_const(void* __this_nativeId,
 string arg__1,
 int * arg__2);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, int bottom0, int top1) qtd_QIntValidator_setRange_int_int_dispatch; }
extern(C) void qtd_export_QIntValidator_setRange_int_int_dispatch(void *dId, int bottom0, int top1){
    auto d_object = cast(QIntValidator) dId;
    d_object.setRange(bottom0, top1);
}

private extern (C) void qtd_QIntValidator_initCallBacks(void* virtuals);

extern(C) void static_init_QIntValidator() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QIntValidator_setRange_int_int_dispatch;
    qtd_QIntValidator_initCallBacks(virt_arr.ptr);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QIntValidator_staticMetaObject();

extern(C) void qtd_QIntValidator_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QIntValidator_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
