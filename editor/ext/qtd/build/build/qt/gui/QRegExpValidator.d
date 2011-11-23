module qt.gui.QRegExpValidator;

public import qt.gui.QRegExpValidator_aux;
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
public import qt.core.QRegExp;
public import qt.gui.QValidator;
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QRegExpValidator : QValidator
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
        void* ret = qtd_QRegExpValidator_QRegExpValidator_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(const(QRegExp) rx, QObject parent_) {
        void* ret = qtd_QRegExpValidator_QRegExpValidator_QRegExp_QObject(cast(void*) this, rx is null ? null : (cast(QRegExp)rx).qtdNativeId, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final const(QRegExp) regExp() const {
        void* ret = qtd_QRegExpValidator_regExp_const(qtdNativeId);
        const(QRegExp) __d_return_value = new QRegExp(ret);
        return __d_return_value;
    }

    public final void setRegExp(const(QRegExp) rx) {
        qtd_QRegExpValidator_setRegExp_QRegExp(qtdNativeId, rx is null ? null : (cast(QRegExp)rx).qtdNativeId);
    }

    public QValidator.State validate(ref string input, int* pos) const {
        return cast(QValidator.State) qtd_QRegExpValidator_validate_nativepointerstring_nativepointerint_const(qtdNativeId, input, pos);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QRegExpValidator_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QRegExpValidator);
    }

    static QRegExpValidator __getObject(void* nativeId) {
        return static_cast!(QRegExpValidator)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QRegExpValidator_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QRegExpValidator_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QRegExpValidator(nativeId, initFlags);
        QRegExpValidator.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QRegExpValidator;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QRegExpValidator_QRegExpValidator_QObject(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QRegExpValidator_QRegExpValidator_QRegExp_QObject(void *d_ptr,
 void* rx0,
 void* parent1);
private extern(C) void*  qtd_QRegExpValidator_regExp_const(void* __this_nativeId);
private extern(C) void  qtd_QRegExpValidator_setRegExp_QRegExp(void* __this_nativeId,
 void* rx0);
private extern(C) int  qtd_QRegExpValidator_validate_nativepointerstring_nativepointerint_const(void* __this_nativeId,
 string input0,
 int * pos1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QRegExpValidator_initCallBacks(void* virtuals);

extern(C) void static_init_QRegExpValidator() {
    qtd_QRegExpValidator_initCallBacks(null);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QRegExpValidator_staticMetaObject();

extern(C) void qtd_QRegExpValidator_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QRegExpValidator_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
