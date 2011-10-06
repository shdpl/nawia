module qt.gui.QAccessiblePlugin;

public import qt.gui.QAccessiblePlugin_aux;
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
public import qt.gui.QAccessibleInterface;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.gui.QAbstractAccessibleFactory;
public import qt.core.QAbstractFactory;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QAccessiblePlugin : QObject, IQAbstractAccessibleFactory, IQAbstractFactory
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
        void* ret = qtd_QAccessiblePlugin_QAccessiblePlugin_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public abstract QAccessibleInterface create(string key, QObject object);

    public abstract QList!(string) keys() const;
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QAccessiblePlugin_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QAccessiblePlugin);
    }

    static QAccessiblePlugin __getObject(void* nativeId) {
        return static_cast!(QAccessiblePlugin)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QAccessiblePlugin_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QAccessiblePlugin_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QAccessiblePlugin_ConcreteWrapper(nativeId, initFlags);
        QAccessiblePlugin.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QAccessiblePlugin;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQAbstractAccessibleFactory = qtd_QAccessiblePlugin_cast_to_QAbstractAccessibleFactory(nativeId);
            __m_ptr_IQAbstractFactory = qtd_QAccessiblePlugin_cast_to_QAbstractFactory(nativeId);
    }

    private void* __m_ptr_IQAbstractAccessibleFactory;
    public void* __ptr_IQAbstractAccessibleFactory() { return __m_ptr_IQAbstractAccessibleFactory; }

    private void* __m_ptr_IQAbstractFactory;
    public void* __ptr_IQAbstractFactory() { return __m_ptr_IQAbstractFactory; }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
    private static extern (C) void*qtd_QAccessiblePlugin_cast_to_QAbstractAccessibleFactory(void* nativeId);
    private static extern (C) void*qtd_QAccessiblePlugin_cast_to_QAbstractFactory(void* nativeId);

    public class QAccessiblePlugin_ConcreteWrapper : QAccessiblePlugin {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public QAccessibleInterface create(string key, QObject object) {
            void* ret = qtd_QAccessiblePlugin_create_string_QObject(qtdNativeId, key, object is null ? null : object.qtdNativeId);
            QAccessibleInterface __d_return_value = qtd_QAccessibleInterface_from_ptr(ret);

            return __d_return_value;
        }

        override         public QList!(string) keys() const {
            auto res = QList!(string).opCall();
            qtd_QAccessiblePlugin_keys_const(qtdNativeId, &res);
            return res;
        }
    }


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QAccessiblePlugin_QAccessiblePlugin_QObject(void *d_ptr,
 void* parent0);
private extern(C) void*  qtd_QAccessiblePlugin_create_string_QObject(void* __this_nativeId,
 string key0,
 void* object1);
private extern(C) void  qtd_QAccessiblePlugin_keys_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QAccessiblePlugin_initCallBacks(void* virtuals);

extern(C) void static_init_QAccessiblePlugin() {
    qtd_QAccessiblePlugin_initCallBacks(null);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QAccessiblePlugin_staticMetaObject();

extern(C) void qtd_QAccessiblePlugin_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QAccessiblePlugin_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
