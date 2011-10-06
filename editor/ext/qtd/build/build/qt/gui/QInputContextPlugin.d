module qt.gui.QInputContextPlugin;

public import qt.gui.QInputContextPlugin_aux;
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
public import qt.gui.QAbstractInputContextFactory;
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.core.QAbstractFactory;
public import qt.gui.QInputContext;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QInputContextPlugin : QObject, IQAbstractInputContextFactory, IQAbstractFactory
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
        void* ret = qtd_QInputContextPlugin_QInputContextPlugin_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public abstract QInputContext create(string key);

    public abstract string description(string key);

    public abstract string displayName(string key);

    public abstract QList!(string) keys() const;

    public abstract QList!(string) languages(string key);
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QInputContextPlugin_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QInputContextPlugin);
    }

    static QInputContextPlugin __getObject(void* nativeId) {
        return static_cast!(QInputContextPlugin)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QInputContextPlugin_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QInputContextPlugin_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QInputContextPlugin_ConcreteWrapper(nativeId, initFlags);
        QInputContextPlugin.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QInputContextPlugin;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQAbstractInputContextFactory = qtd_QInputContextPlugin_cast_to_QAbstractInputContextFactory(nativeId);
            __m_ptr_IQAbstractFactory = qtd_QInputContextPlugin_cast_to_QAbstractFactory(nativeId);
    }

    private void* __m_ptr_IQAbstractInputContextFactory;
    public void* __ptr_IQAbstractInputContextFactory() { return __m_ptr_IQAbstractInputContextFactory; }

    private void* __m_ptr_IQAbstractFactory;
    public void* __ptr_IQAbstractFactory() { return __m_ptr_IQAbstractFactory; }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
    private static extern (C) void*qtd_QInputContextPlugin_cast_to_QAbstractInputContextFactory(void* nativeId);
    private static extern (C) void*qtd_QInputContextPlugin_cast_to_QAbstractFactory(void* nativeId);

    public class QInputContextPlugin_ConcreteWrapper : QInputContextPlugin {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public QInputContext create(string key) {
            void *ret = qtd_QInputContextPlugin_create_string(qtdNativeId, key);
            QInputContext __d_return_value = QInputContext.__getObject(ret);
            return __d_return_value;
        }

        override         public string description(string key) {
            string res;
            qtd_QInputContextPlugin_description_string(qtdNativeId, &res, key);
            return res;
        }

        override         public string displayName(string key) {
            string res;
            qtd_QInputContextPlugin_displayName_string(qtdNativeId, &res, key);
            return res;
        }

        override         public QList!(string) keys() const {
            auto res = QList!(string).opCall();
            qtd_QInputContextPlugin_keys_const(qtdNativeId, &res);
            return res;
        }

        override         public QList!(string) languages(string key) {
            auto res = QList!(string).opCall();
            qtd_QInputContextPlugin_languages_string(qtdNativeId, &res, key);
            return res;
        }
    }


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QInputContextPlugin_QInputContextPlugin_QObject(void *d_ptr,
 void* parent0);
private extern(C) void*  qtd_QInputContextPlugin_create_string(void* __this_nativeId,
 string key0);
private extern(C) void  qtd_QInputContextPlugin_description_string(void* __this_nativeId,
 void* __d_return_value,
 string key0);
private extern(C) void  qtd_QInputContextPlugin_displayName_string(void* __this_nativeId,
 void* __d_return_value,
 string key0);
private extern(C) void  qtd_QInputContextPlugin_keys_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QInputContextPlugin_languages_string(void* __this_nativeId,
 void* __d_return_value,
 string key0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QInputContextPlugin_initCallBacks(void* virtuals);

extern(C) void static_init_QInputContextPlugin() {
    qtd_QInputContextPlugin_initCallBacks(null);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QInputContextPlugin_staticMetaObject();

extern(C) void qtd_QInputContextPlugin_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QInputContextPlugin_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
