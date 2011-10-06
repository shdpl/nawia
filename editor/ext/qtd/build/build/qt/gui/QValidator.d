module qt.gui.QValidator;

public import qt.gui.QValidator_aux;
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
public import qt.core.QLocale;
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QValidator : QObject
{
    public enum State {
        Invalid = 0,
        Intermediate = 1,
        Acceptable = 2
    }

    alias State.Invalid Invalid;
    alias State.Intermediate Intermediate;
    alias State.Acceptable Acceptable;


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
        void* ret = qtd_QValidator_QValidator_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QLocale locale() const {
        void* ret = qtd_QValidator_locale_const(qtdNativeId);
        QLocale __d_return_value = new QLocale(ret);
        return __d_return_value;
    }

    public final void setLocale(const(QLocale) locale) {
        qtd_QValidator_setLocale_QLocale(qtdNativeId, locale is null ? null : (cast(QLocale)locale).qtdNativeId);
    }

    public void fixup(ref string arg__1) const {
        qtd_QValidator_fixup_nativepointerstring_const(qtdNativeId, arg__1);
    }

    public abstract QValidator.State validate(ref string arg__1, int* arg__2) const;
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QValidator_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QValidator);
    }

    static QValidator __getObject(void* nativeId) {
        return static_cast!(QValidator)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QValidator_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QValidator_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QValidator_ConcreteWrapper(nativeId, initFlags);
        QValidator.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QValidator;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

    public class QValidator_ConcreteWrapper : QValidator {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public QValidator.State validate(ref string arg__1, int* arg__2) const {
            return cast(QValidator.State) qtd_QValidator_validate_nativepointerstring_nativepointerint_const(qtdNativeId, arg__1, arg__2);
        }
    }


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QValidator_QValidator_QObject(void *d_ptr,
 void* parent0);
private extern(C) void*  qtd_QValidator_locale_const(void* __this_nativeId);
private extern(C) void  qtd_QValidator_setLocale_QLocale(void* __this_nativeId,
 void* locale0);
private extern(C) void  qtd_QValidator_fixup_nativepointerstring_const(void* __this_nativeId,
 string arg__1);
private extern(C) int  qtd_QValidator_validate_nativepointerstring_nativepointerint_const(void* __this_nativeId,
 string arg__1,
 int * arg__2);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, void* arg__1) qtd_QValidator_fixup_nativepointerstring_const_dispatch; }
extern(C) void qtd_export_QValidator_fixup_nativepointerstring_const_dispatch(void *dId, void* arg__1){
    auto d_object = cast(QValidator) dId;
    auto arg__1_d_qstr = QStringUtil(arg__1, true);
    string arg__1_d_ref = arg__1_d_qstr.toNativeString();
    d_object.fixup(arg__1_d_ref);
    arg__1_d_qstr.assign(arg__1_d_ref);
}

extern(C){ extern int function(void *dId, void* arg__1, int * arg__2) qtd_QValidator_validate_nativepointerstring_nativepointerint_const_dispatch; }
extern(C) int qtd_export_QValidator_validate_nativepointerstring_nativepointerint_const_dispatch(void *dId, void* arg__1, int * arg__2){
    auto d_object = cast(QValidator) dId;
    auto arg__1_d_qstr = QStringUtil(arg__1, true);
    string arg__1_d_ref = arg__1_d_qstr.toNativeString();
    auto return_value = d_object.validate(arg__1_d_ref, arg__2);
    arg__1_d_qstr.assign(arg__1_d_ref);
    return return_value;
}

private extern (C) void qtd_QValidator_initCallBacks(void* virtuals);

extern(C) void static_init_QValidator() {
    void*[2] virt_arr;
    virt_arr[0] = &qtd_export_QValidator_fixup_nativepointerstring_const_dispatch;
    virt_arr[1] = &qtd_export_QValidator_validate_nativepointerstring_nativepointerint_const_dispatch;
    qtd_QValidator_initCallBacks(virt_arr.ptr);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QValidator_staticMetaObject();

extern(C) void qtd_QValidator_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QValidator_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
