module qt.network.QNetworkDiskCache;

public import qt.network.QNetworkDiskCache_aux;
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
public import qt.network.QAbstractNetworkCache;
public import qt.core.QChildEvent;
public import qt.core.QUrl;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QNetworkDiskCache : QAbstractNetworkCache
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
        void* ret = qtd_QNetworkDiskCache_QNetworkDiskCache_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final string cacheDirectory() const {
        string res;
        qtd_QNetworkDiskCache_cacheDirectory_const(qtdNativeId, &res);
        return res;
    }

    public final QNetworkCacheMetaData fileMetaData(string fileName) const {
        void* ret = qtd_QNetworkDiskCache_fileMetaData_string_const(qtdNativeId, fileName);
        QNetworkCacheMetaData __d_return_value = new QNetworkCacheMetaData(ret);
        return __d_return_value;
    }

    public final long maximumCacheSize() const {
        return qtd_QNetworkDiskCache_maximumCacheSize_const(qtdNativeId);
    }

    public final void setCacheDirectory(string cacheDir) {
        qtd_QNetworkDiskCache_setCacheDirectory_string(qtdNativeId, cacheDir);
    }

    public final void setMaximumCacheSize(long size) {
        qtd_QNetworkDiskCache_setMaximumCacheSize_long(qtdNativeId, size);
    }

    public long cacheSize() const {
        return qtd_QNetworkDiskCache_cacheSize_const(qtdNativeId);
    }

    public void clear() {
        qtd_QNetworkDiskCache_clear(qtdNativeId);
    }

    public QIODevice data(const(QUrl) url) {
        void *ret = qtd_QNetworkDiskCache_data_QUrl(qtdNativeId, url is null ? null : (cast(QUrl)url).qtdNativeId);
        QIODevice __d_return_value = QIODevice.__getObject(ret);
        return __d_return_value;
    }

    protected long expire() {
        return qtd_QNetworkDiskCache_expire(qtdNativeId);
    }

    public void insert(QIODevice device) {
        qtd_QNetworkDiskCache_insert_QIODevice(qtdNativeId, device is null ? null : device.qtdNativeId);
    }

    public QNetworkCacheMetaData metaData(const(QUrl) url) {
        void* ret = qtd_QNetworkDiskCache_metaData_QUrl(qtdNativeId, url is null ? null : (cast(QUrl)url).qtdNativeId);
        QNetworkCacheMetaData __d_return_value = new QNetworkCacheMetaData(ret);
        return __d_return_value;
    }

    public QIODevice prepare(const(QNetworkCacheMetaData) metaData) {
        void *ret = qtd_QNetworkDiskCache_prepare_QNetworkCacheMetaData(qtdNativeId, metaData is null ? null : (cast(QNetworkCacheMetaData)metaData).qtdNativeId);
        QIODevice __d_return_value = QIODevice.__getObject(ret);
        return __d_return_value;
    }

    public bool remove(const(QUrl) url) {
        return qtd_QNetworkDiskCache_remove_QUrl(qtdNativeId, url is null ? null : (cast(QUrl)url).qtdNativeId);
    }

    public void updateMetaData(const(QNetworkCacheMetaData) metaData) {
        qtd_QNetworkDiskCache_updateMetaData_QNetworkCacheMetaData(qtdNativeId, metaData is null ? null : (cast(QNetworkCacheMetaData)metaData).qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "clear()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QNetworkDiskCache_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QNetworkDiskCache);
    }

    static QNetworkDiskCache __getObject(void* nativeId) {
        return static_cast!(QNetworkDiskCache)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QNetworkDiskCache_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QNetworkDiskCache_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QNetworkDiskCache(nativeId, initFlags);
        QNetworkDiskCache.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("clear"), index));

    }

    public alias void __isQtType_QNetworkDiskCache;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QNetworkDiskCache_QNetworkDiskCache_QObject(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QNetworkDiskCache_cacheDirectory_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void*  qtd_QNetworkDiskCache_fileMetaData_string_const(void* __this_nativeId,
 string fileName0);
private extern(C) long  qtd_QNetworkDiskCache_maximumCacheSize_const(void* __this_nativeId);
private extern(C) void  qtd_QNetworkDiskCache_setCacheDirectory_string(void* __this_nativeId,
 string cacheDir0);
private extern(C) void  qtd_QNetworkDiskCache_setMaximumCacheSize_long(void* __this_nativeId,
 long size0);
private extern(C) long  qtd_QNetworkDiskCache_cacheSize_const(void* __this_nativeId);
private extern(C) void  qtd_QNetworkDiskCache_clear(void* __this_nativeId);
private extern(C) void*  qtd_QNetworkDiskCache_data_QUrl(void* __this_nativeId,
 void* url0);
private extern(C) long  qtd_QNetworkDiskCache_expire(void* __this_nativeId);
private extern(C) void  qtd_QNetworkDiskCache_insert_QIODevice(void* __this_nativeId,
 void* device0);
private extern(C) void*  qtd_QNetworkDiskCache_metaData_QUrl(void* __this_nativeId,
 void* url0);
private extern(C) void*  qtd_QNetworkDiskCache_prepare_QNetworkCacheMetaData(void* __this_nativeId,
 void* metaData0);
private extern(C) bool  qtd_QNetworkDiskCache_remove_QUrl(void* __this_nativeId,
 void* url0);
private extern(C) void  qtd_QNetworkDiskCache_updateMetaData_QNetworkCacheMetaData(void* __this_nativeId,
 void* metaData0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern qint64 function(void *dId) qtd_QNetworkDiskCache_expire_dispatch; }
extern(C) qint64 qtd_export_QNetworkDiskCache_expire_dispatch(void *dId){
    auto d_object = cast(QNetworkDiskCache) dId;
    auto return_value = d_object.expire();
    return return_value;
}

private extern (C) void qtd_QNetworkDiskCache_initCallBacks(void* virtuals);

extern(C) void static_init_QNetworkDiskCache() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QNetworkDiskCache_expire_dispatch;
    qtd_QNetworkDiskCache_initCallBacks(virt_arr.ptr);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QNetworkDiskCache_staticMetaObject();

extern(C) void qtd_QNetworkDiskCache_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QNetworkDiskCache_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
