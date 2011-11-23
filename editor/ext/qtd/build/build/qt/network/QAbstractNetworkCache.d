module qt.network.QAbstractNetworkCache;

public import qt.network.QAbstractNetworkCache_aux;
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
private import qt.network.ArrayOps2;
// automatic imports-------------
public import qt.core.QIODevice;
public import qt.core.QObject;
public import qt.network.QNetworkCacheMetaData;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.core.QUrl;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QAbstractNetworkCache : QObject
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

    protected this(QObject parent_ = null) {
        void* ret = qtd_QAbstractNetworkCache_QAbstractNetworkCache_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public abstract long cacheSize() const;

    public abstract void clear();

    public abstract QIODevice data(const(QUrl) url);

    public abstract void insert(QIODevice device);

    public abstract QNetworkCacheMetaData metaData(const(QUrl) url);

    public abstract QIODevice prepare(const(QNetworkCacheMetaData) metaData);

    public abstract bool remove(const(QUrl) url);

    public abstract void updateMetaData(const(QNetworkCacheMetaData) metaData);
// Field accessors
    private static const string[] __slotSignatures = [
            "clear()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QAbstractNetworkCache_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QAbstractNetworkCache);
    }

    static QAbstractNetworkCache __getObject(void* nativeId) {
        return static_cast!(QAbstractNetworkCache)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QAbstractNetworkCache_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QAbstractNetworkCache_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QAbstractNetworkCache_ConcreteWrapper(nativeId, initFlags);
        QAbstractNetworkCache.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("clear"), index));

    }

    public alias void __isQtType_QAbstractNetworkCache;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

    public class QAbstractNetworkCache_ConcreteWrapper : QAbstractNetworkCache {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public long cacheSize() const {
            return qtd_QAbstractNetworkCache_cacheSize_const(qtdNativeId);
        }

        override         public void clear() {
            qtd_QAbstractNetworkCache_clear(qtdNativeId);
        }

        override         public QIODevice data(const(QUrl) url) {
            void *ret = qtd_QAbstractNetworkCache_data_QUrl(qtdNativeId, url is null ? null : (cast(QUrl)url).qtdNativeId);
            QIODevice __d_return_value = QIODevice.__getObject(ret);
            return __d_return_value;
        }

        override         public void insert(QIODevice device) {
            qtd_QAbstractNetworkCache_insert_QIODevice(qtdNativeId, device is null ? null : device.qtdNativeId);
        }

        override         public QNetworkCacheMetaData metaData(const(QUrl) url) {
            void* ret = qtd_QAbstractNetworkCache_metaData_QUrl(qtdNativeId, url is null ? null : (cast(QUrl)url).qtdNativeId);
            QNetworkCacheMetaData __d_return_value = new QNetworkCacheMetaData(ret);
            return __d_return_value;
        }

        override         public QIODevice prepare(const(QNetworkCacheMetaData) metaData) {
            void *ret = qtd_QAbstractNetworkCache_prepare_QNetworkCacheMetaData(qtdNativeId, metaData is null ? null : (cast(QNetworkCacheMetaData)metaData).qtdNativeId);
            QIODevice __d_return_value = QIODevice.__getObject(ret);
            return __d_return_value;
        }

        override         public bool remove(const(QUrl) url) {
            return qtd_QAbstractNetworkCache_remove_QUrl(qtdNativeId, url is null ? null : (cast(QUrl)url).qtdNativeId);
        }

        override         public void updateMetaData(const(QNetworkCacheMetaData) metaData) {
            qtd_QAbstractNetworkCache_updateMetaData_QNetworkCacheMetaData(qtdNativeId, metaData is null ? null : (cast(QNetworkCacheMetaData)metaData).qtdNativeId);
        }
    }


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QAbstractNetworkCache_QAbstractNetworkCache_QObject(void *d_ptr,
 void* parent0);
private extern(C) long  qtd_QAbstractNetworkCache_cacheSize_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractNetworkCache_clear(void* __this_nativeId);
private extern(C) void*  qtd_QAbstractNetworkCache_data_QUrl(void* __this_nativeId,
 void* url0);
private extern(C) void  qtd_QAbstractNetworkCache_insert_QIODevice(void* __this_nativeId,
 void* device0);
private extern(C) void*  qtd_QAbstractNetworkCache_metaData_QUrl(void* __this_nativeId,
 void* url0);
private extern(C) void*  qtd_QAbstractNetworkCache_prepare_QNetworkCacheMetaData(void* __this_nativeId,
 void* metaData0);
private extern(C) bool  qtd_QAbstractNetworkCache_remove_QUrl(void* __this_nativeId,
 void* url0);
private extern(C) void  qtd_QAbstractNetworkCache_updateMetaData_QNetworkCacheMetaData(void* __this_nativeId,
 void* metaData0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern qint64 function(void *dId) qtd_QAbstractNetworkCache_cacheSize_const_dispatch; }
extern(C) qint64 qtd_export_QAbstractNetworkCache_cacheSize_const_dispatch(void *dId){
    auto d_object = cast(QAbstractNetworkCache) dId;
    auto return_value = d_object.cacheSize();
    return return_value;
}

extern(C){ extern void function(void *dId) qtd_QAbstractNetworkCache_clear_dispatch; }
extern(C) void qtd_export_QAbstractNetworkCache_clear_dispatch(void *dId){
    auto d_object = cast(QAbstractNetworkCache) dId;
    d_object.clear();
}

extern(C){ extern void* function(void *dId, void* url0) qtd_QAbstractNetworkCache_data_QUrl_dispatch; }
extern(C) void* qtd_export_QAbstractNetworkCache_data_QUrl_dispatch(void *dId, void* url0){
    auto d_object = cast(QAbstractNetworkCache) dId;
    scope url0_d_ref = new QUrl(url0, QtdObjectInitFlags.onStack);
    QIODevice ret_value = d_object.data(url0_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void function(void *dId, void* device0) qtd_QAbstractNetworkCache_insert_QIODevice_dispatch; }
extern(C) void qtd_export_QAbstractNetworkCache_insert_QIODevice_dispatch(void *dId, void* device0){
    auto d_object = cast(QAbstractNetworkCache) dId;
    scope device0_d_ref = new QIODevice_ConcreteWrapper(device0, QtdObjectInitFlags.onStack);

    d_object.insert(device0_d_ref);
}

extern(C){ extern void* function(void *dId, void* url0) qtd_QAbstractNetworkCache_metaData_QUrl_dispatch; }
extern(C) void* qtd_export_QAbstractNetworkCache_metaData_QUrl_dispatch(void *dId, void* url0){
    auto d_object = cast(QAbstractNetworkCache) dId;
    scope url0_d_ref = new QUrl(url0, QtdObjectInitFlags.onStack);
    QNetworkCacheMetaData ret_value = d_object.metaData(url0_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern void* function(void *dId, void* metaData0) qtd_QAbstractNetworkCache_prepare_QNetworkCacheMetaData_dispatch; }
extern(C) void* qtd_export_QAbstractNetworkCache_prepare_QNetworkCacheMetaData_dispatch(void *dId, void* metaData0){
    auto d_object = cast(QAbstractNetworkCache) dId;
    scope metaData0_d_ref = new QNetworkCacheMetaData(metaData0, QtdObjectInitFlags.onStack);
    QIODevice ret_value = d_object.prepare(metaData0_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

extern(C){ extern bool function(void *dId, void* url0) qtd_QAbstractNetworkCache_remove_QUrl_dispatch; }
extern(C) bool qtd_export_QAbstractNetworkCache_remove_QUrl_dispatch(void *dId, void* url0){
    auto d_object = cast(QAbstractNetworkCache) dId;
    scope url0_d_ref = new QUrl(url0, QtdObjectInitFlags.onStack);
    auto return_value = d_object.remove(url0_d_ref);
    return return_value;
}

extern(C){ extern void function(void *dId, void* metaData0) qtd_QAbstractNetworkCache_updateMetaData_QNetworkCacheMetaData_dispatch; }
extern(C) void qtd_export_QAbstractNetworkCache_updateMetaData_QNetworkCacheMetaData_dispatch(void *dId, void* metaData0){
    auto d_object = cast(QAbstractNetworkCache) dId;
    scope metaData0_d_ref = new QNetworkCacheMetaData(metaData0, QtdObjectInitFlags.onStack);
    d_object.updateMetaData(metaData0_d_ref);
}

private extern (C) void qtd_QAbstractNetworkCache_initCallBacks(void* virtuals);

extern(C) void static_init_QAbstractNetworkCache() {
    void*[8] virt_arr;
    virt_arr[0] = &qtd_export_QAbstractNetworkCache_cacheSize_const_dispatch;
    virt_arr[1] = &qtd_export_QAbstractNetworkCache_clear_dispatch;
    virt_arr[2] = &qtd_export_QAbstractNetworkCache_data_QUrl_dispatch;
    virt_arr[3] = &qtd_export_QAbstractNetworkCache_insert_QIODevice_dispatch;
    virt_arr[4] = &qtd_export_QAbstractNetworkCache_metaData_QUrl_dispatch;
    virt_arr[5] = &qtd_export_QAbstractNetworkCache_prepare_QNetworkCacheMetaData_dispatch;
    virt_arr[6] = &qtd_export_QAbstractNetworkCache_remove_QUrl_dispatch;
    virt_arr[7] = &qtd_export_QAbstractNetworkCache_updateMetaData_QNetworkCacheMetaData_dispatch;
    qtd_QAbstractNetworkCache_initCallBacks(virt_arr.ptr);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QAbstractNetworkCache_staticMetaObject();

extern(C) void qtd_QAbstractNetworkCache_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QAbstractNetworkCache_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
