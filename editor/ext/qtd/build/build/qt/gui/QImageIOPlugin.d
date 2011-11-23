module qt.gui.QImageIOPlugin;

public import qt.gui.QImageIOPlugin_aux;
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
public import qt.core.QIODevice;
public import qt.core.QObject;
public import qt.gui.QImageIOHandler;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.gui.QAbstractImageIOHandlerFactory;
public import qt.core.QAbstractFactory;
public import qt.core.QByteArray;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QImageIOPlugin : QObject, IQAbstractImageIOHandlerFactory, IQAbstractFactory
{
    public enum Capability {
        CanRead = 1,
        CanWrite = 2,
        CanReadIncremental = 4
    }

    alias Capability.CanRead CanRead;
    alias Capability.CanWrite CanWrite;
    alias Capability.CanReadIncremental CanReadIncremental;


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
        void* ret = qtd_QImageIOPlugin_QImageIOPlugin_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public abstract int capabilities(QIODevice device, const(QByteArray) format) const;

    public abstract QImageIOHandler create(QIODevice device, const(QByteArray) format = new QByteArray()) const;

    public abstract QList!(string) keys() const;
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QImageIOPlugin_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QImageIOPlugin);
    }

    static QImageIOPlugin __getObject(void* nativeId) {
        return static_cast!(QImageIOPlugin)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QImageIOPlugin_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QImageIOPlugin_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QImageIOPlugin_ConcreteWrapper(nativeId, initFlags);
        QImageIOPlugin.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QImageIOPlugin;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
            __m_ptr_IQAbstractImageIOHandlerFactory = qtd_QImageIOPlugin_cast_to_QAbstractImageIOHandlerFactory(nativeId);
            __m_ptr_IQAbstractFactory = qtd_QImageIOPlugin_cast_to_QAbstractFactory(nativeId);
    }

    private void* __m_ptr_IQAbstractImageIOHandlerFactory;
    public void* __ptr_IQAbstractImageIOHandlerFactory() { return __m_ptr_IQAbstractImageIOHandlerFactory; }

    private void* __m_ptr_IQAbstractFactory;
    public void* __ptr_IQAbstractFactory() { return __m_ptr_IQAbstractFactory; }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}
    private static extern (C) void*qtd_QImageIOPlugin_cast_to_QAbstractImageIOHandlerFactory(void* nativeId);
    private static extern (C) void*qtd_QImageIOPlugin_cast_to_QAbstractFactory(void* nativeId);

    public class QImageIOPlugin_ConcreteWrapper : QImageIOPlugin {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public int capabilities(QIODevice device, const(QByteArray) format) const {
            return qtd_QImageIOPlugin_capabilities_QIODevice_QByteArray_const(qtdNativeId, device is null ? null : device.qtdNativeId, format is null ? null : (cast(QByteArray)format).qtdNativeId);
        }

        override         public QImageIOHandler create(QIODevice device, const(QByteArray) format = new QByteArray()) const {
            void* ret = qtd_QImageIOPlugin_create_QIODevice_QByteArray_const(qtdNativeId, device is null ? null : device.qtdNativeId, format is null ? null : (cast(QByteArray)format).qtdNativeId);
            QImageIOHandler __d_return_value = qtd_QImageIOHandler_from_ptr(ret);

            return __d_return_value;
        }

        override         public QList!(string) keys() const {
            auto res = QList!(string).opCall();
            qtd_QImageIOPlugin_keys_const(qtdNativeId, &res);
            return res;
        }
    }


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QImageIOPlugin_QImageIOPlugin_QObject(void *d_ptr,
 void* parent0);
private extern(C) int  qtd_QImageIOPlugin_capabilities_QIODevice_QByteArray_const(void* __this_nativeId,
 void* device0,
 void* format1);
private extern(C) void*  qtd_QImageIOPlugin_create_QIODevice_QByteArray_const(void* __this_nativeId,
 void* device0,
 void* format1);
private extern(C) void  qtd_QImageIOPlugin_keys_const(void* __this_nativeId,
 void* __d_return_value);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern int function(void *dId, void* device0, void* format1) qtd_QImageIOPlugin_capabilities_QIODevice_QByteArray_const_dispatch; }
extern(C) int qtd_export_QImageIOPlugin_capabilities_QIODevice_QByteArray_const_dispatch(void *dId, void* device0, void* format1){
    auto d_object = cast(QImageIOPlugin) dId;
    scope device0_d_ref = new QIODevice_ConcreteWrapper(device0, QtdObjectInitFlags.onStack);

    scope format1_d_ref = new QByteArray(format1, QtdObjectInitFlags.onStack);
    auto return_value = d_object.capabilities(device0_d_ref, format1_d_ref);
    return return_value;
}

private extern (C) void qtd_QImageIOPlugin_initCallBacks(void* virtuals);

extern(C) void static_init_QImageIOPlugin() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QImageIOPlugin_capabilities_QIODevice_QByteArray_const_dispatch;
    qtd_QImageIOPlugin_initCallBacks(virt_arr.ptr);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QImageIOPlugin_staticMetaObject();

extern(C) void qtd_QImageIOPlugin_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QImageIOPlugin_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
