module qt.gui.QStylePlugin;

public import qt.gui.QStylePlugin_aux;
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
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.gui.QStyle;
public import qt.gui.QAbstractStyleFactory;
public import qt.core.QAbstractFactory;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QStylePlugin : QObject, IQAbstractStyleFactory, IQAbstractFactory
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
        void* ret = qtd_QStylePlugin_QStylePlugin_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public abstract QStyle create(string key);

    public abstract QList!(string) keys() const;
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QStylePlugin_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QStylePlugin);
    }

    static QStylePlugin __getObject(void* nativeId) {
        return static_cast!(QStylePlugin)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QStylePlugin_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QStylePlugin_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QStylePlugin_ConcreteWrapper(nativeId, initFlags);
        QStylePlugin.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QStylePlugin;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQAbstractStyleFactory = qtd_QStylePlugin_cast_to_QAbstractStyleFactory(nativeId);
            __m_ptr_IQAbstractFactory = qtd_QStylePlugin_cast_to_QAbstractFactory(nativeId);
    }

    private void* __m_ptr_IQAbstractStyleFactory;
    public void* __ptr_IQAbstractStyleFactory() { return __m_ptr_IQAbstractStyleFactory; }

    private void* __m_ptr_IQAbstractFactory;
    public void* __ptr_IQAbstractFactory() { return __m_ptr_IQAbstractFactory; }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
    private static extern (C) void*qtd_QStylePlugin_cast_to_QAbstractStyleFactory(void* nativeId);
    private static extern (C) void*qtd_QStylePlugin_cast_to_QAbstractFactory(void* nativeId);

    public class QStylePlugin_ConcreteWrapper : QStylePlugin {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public QStyle create(string key) {
            void *ret = qtd_QStylePlugin_create_string(qtdNativeId, key);
            QStyle __d_return_value = QStyle.__getObject(ret);
            return __d_return_value;
        }

        override         public QList!(string) keys() const {
            auto res = QList!(string).opCall();
            qtd_QStylePlugin_keys_const(qtdNativeId, &res);
            return res;
        }
    }


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QStylePlugin_QStylePlugin_QObject(void *d_ptr,
 void* parent0);
private extern(C) void*  qtd_QStylePlugin_create_string(void* __this_nativeId,
 string key0);
private extern(C) void  qtd_QStylePlugin_keys_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QStylePlugin_initCallBacks(void* virtuals);

extern(C) void static_init_QStylePlugin() {
    qtd_QStylePlugin_initCallBacks(null);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QStylePlugin_staticMetaObject();

extern(C) void qtd_QStylePlugin_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QStylePlugin_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
