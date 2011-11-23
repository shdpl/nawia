module qt.network.QNetworkAccessManager;

public import qt.network.QNetworkAccessManager_aux;
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
public import qt.network.QNetworkReply;
public import qt.core.QIODevice;
public import qt.core.QList;
public import qt.network.QNetworkCookieJar;
public import qt.core.QObject;
public import qt.network.QNetworkProxy;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.network.QAbstractNetworkCache;
public import qt.core.QChildEvent;
public import qt.network.QNetworkRequest;
public import qt.network.QNetworkProxyFactory;
public import qt.network.QAuthenticator;
public import qt.core.QByteArray;
public import qt.network.QSslError;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QNetworkAccessManager : QObject
{
    public enum Operation {
        HeadOperation = 1,
        GetOperation = 2,
        PutOperation = 3,
        PostOperation = 4,
        DeleteOperation = 5,
        CustomOperation = 6,
        UnknownOperation = 0
    }

    alias Operation.HeadOperation HeadOperation;
    alias Operation.GetOperation GetOperation;
    alias Operation.PutOperation PutOperation;
    alias Operation.PostOperation PostOperation;
    alias Operation.DeleteOperation DeleteOperation;
    alias Operation.CustomOperation CustomOperation;
    alias Operation.UnknownOperation UnknownOperation;


    private static const string[] __signalSignatures = [
            "authenticationRequired(QNetworkReply*,QAuthenticator*)", 
            "finished(QNetworkReply*)", 
            "networkSessionConnected()", 
            "proxyAuthenticationRequired(QNetworkProxy,QAuthenticator*)", 
            "sslErrors(QNetworkReply*,QList<QSslError>)"    ];

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

    protected final void authenticationRequired(QNetworkReply reply, QAuthenticator authenticator) {
        qtd_QNetworkAccessManager_authenticationRequired_QNetworkReply_nativepointerQAuthenticator(qtdNativeId, reply is null ? null : reply.qtdNativeId, authenticator is null ? null : authenticator.qtdNativeId);
    }

    protected final void finished(QNetworkReply reply) {
        qtd_QNetworkAccessManager_finished_QNetworkReply(qtdNativeId, reply is null ? null : reply.qtdNativeId);
    }

    protected final void networkSessionConnected() {
        qtd_QNetworkAccessManager_networkSessionConnected(qtdNativeId);
    }

    protected final void proxyAuthenticationRequired(const(QNetworkProxy) proxy, QAuthenticator authenticator) {
        qtd_QNetworkAccessManager_proxyAuthenticationRequired_QNetworkProxy_nativepointerQAuthenticator(qtdNativeId, proxy is null ? null : (cast(QNetworkProxy)proxy).qtdNativeId, authenticator is null ? null : authenticator.qtdNativeId);
    }

    protected final void sslErrors(QNetworkReply reply, QList!(QSslError) errors) {
        qtd_QNetworkAccessManager_sslErrors_QNetworkReply_QList(qtdNativeId, reply is null ? null : reply.qtdNativeId, &errors);
    }
// Functions

    public this(QObject parent_ = null) {
        void* ret = qtd_QNetworkAccessManager_QNetworkAccessManager_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QAbstractNetworkCache cache() const {
        void *ret = qtd_QNetworkAccessManager_cache_const(qtdNativeId);
        QAbstractNetworkCache __d_return_value = QAbstractNetworkCache.__getObject(ret);
        return __d_return_value;
    }

    public final QNetworkCookieJar cookieJar() const {
        void *ret = qtd_QNetworkAccessManager_cookieJar_const(qtdNativeId);
        QNetworkCookieJar __d_return_value = QNetworkCookieJar.__getObject(ret);
        return __d_return_value;
    }

    public final QNetworkReply deleteResource(const(QNetworkRequest) request) {
        void *ret = qtd_QNetworkAccessManager_deleteResource_QNetworkRequest(qtdNativeId, request is null ? null : (cast(QNetworkRequest)request).qtdNativeId);
        QNetworkReply __d_return_value = QNetworkReply.__getObject(ret);
        return __d_return_value;
    }

    public final QNetworkReply get(const(QNetworkRequest) request) {
        void *ret = qtd_QNetworkAccessManager_get_QNetworkRequest(qtdNativeId, request is null ? null : (cast(QNetworkRequest)request).qtdNativeId);
        QNetworkReply __d_return_value = QNetworkReply.__getObject(ret);
        return __d_return_value;
    }

    public final QNetworkReply head(const(QNetworkRequest) request) {
        void *ret = qtd_QNetworkAccessManager_head_QNetworkRequest(qtdNativeId, request is null ? null : (cast(QNetworkRequest)request).qtdNativeId);
        QNetworkReply __d_return_value = QNetworkReply.__getObject(ret);
        return __d_return_value;
    }

    public final QNetworkReply post(const(QNetworkRequest) request, QIODevice data) {
        void *ret = qtd_QNetworkAccessManager_post_QNetworkRequest_QIODevice(qtdNativeId, request is null ? null : (cast(QNetworkRequest)request).qtdNativeId, data is null ? null : data.qtdNativeId);
        QNetworkReply __d_return_value = QNetworkReply.__getObject(ret);
        return __d_return_value;
    }

    public final QNetworkReply post(const(QNetworkRequest) request, const(QByteArray) data) {
        void *ret = qtd_QNetworkAccessManager_post_QNetworkRequest_QByteArray(qtdNativeId, request is null ? null : (cast(QNetworkRequest)request).qtdNativeId, data is null ? null : (cast(QByteArray)data).qtdNativeId);
        QNetworkReply __d_return_value = QNetworkReply.__getObject(ret);
        return __d_return_value;
    }

    public final QNetworkProxy proxy() const {
        void* ret = qtd_QNetworkAccessManager_proxy_const(qtdNativeId);
        QNetworkProxy __d_return_value = new QNetworkProxy(ret);
        return __d_return_value;
    }

    public final QNetworkProxyFactory proxyFactory() const {
        void* ret = qtd_QNetworkAccessManager_proxyFactory_const(qtdNativeId);
        QNetworkProxyFactory __d_return_value = qtd_QNetworkProxyFactory_from_ptr(ret);

        return __d_return_value;
    }

    public final QNetworkReply put(const(QNetworkRequest) request, QIODevice data) {
        void *ret = qtd_QNetworkAccessManager_put_QNetworkRequest_QIODevice(qtdNativeId, request is null ? null : (cast(QNetworkRequest)request).qtdNativeId, data is null ? null : data.qtdNativeId);
        QNetworkReply __d_return_value = QNetworkReply.__getObject(ret);
        return __d_return_value;
    }

    public final QNetworkReply put(const(QNetworkRequest) request, const(QByteArray) data) {
        void *ret = qtd_QNetworkAccessManager_put_QNetworkRequest_QByteArray(qtdNativeId, request is null ? null : (cast(QNetworkRequest)request).qtdNativeId, data is null ? null : (cast(QByteArray)data).qtdNativeId);
        QNetworkReply __d_return_value = QNetworkReply.__getObject(ret);
        return __d_return_value;
    }

    public final QNetworkReply sendCustomRequest(const(QNetworkRequest) request, const(QByteArray) verb, QIODevice data = null) {
        void *ret = qtd_QNetworkAccessManager_sendCustomRequest_QNetworkRequest_QByteArray_QIODevice(qtdNativeId, request is null ? null : (cast(QNetworkRequest)request).qtdNativeId, verb is null ? null : (cast(QByteArray)verb).qtdNativeId, data is null ? null : data.qtdNativeId);
        QNetworkReply __d_return_value = QNetworkReply.__getObject(ret);
        return __d_return_value;
    }

    public final void setCache(QAbstractNetworkCache cache) {
        qtd_QNetworkAccessManager_setCache_QAbstractNetworkCache(qtdNativeId, cache is null ? null : cache.qtdNativeId);
    }

    public final void setCookieJar(QNetworkCookieJar cookieJar) {
        if (cookieJar !is null) {
            cookieJar.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QNetworkAccessManager_setCookieJar_QNetworkCookieJar(qtdNativeId, cookieJar is null ? null : cookieJar.qtdNativeId);
    }

    public final void setProxy(const(QNetworkProxy) proxy) {
        qtd_QNetworkAccessManager_setProxy_QNetworkProxy(qtdNativeId, proxy is null ? null : (cast(QNetworkProxy)proxy).qtdNativeId);
    }

    public final void setProxyFactory(QNetworkProxyFactory factory) {
        if (factory !is null) {
            factory.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QNetworkAccessManager_setProxyFactory_QNetworkProxyFactory(qtdNativeId, factory is null ? null : factory.qtdNativeId);
    }

    protected QNetworkReply createRequest(QNetworkAccessManager.Operation op, const(QNetworkRequest) request, QIODevice outgoingData = null) {
        void *ret = qtd_QNetworkAccessManager_createRequest_Operation_QNetworkRequest_QIODevice(qtdNativeId, op, request is null ? null : (cast(QNetworkRequest)request).qtdNativeId, outgoingData is null ? null : outgoingData.qtdNativeId);
        QNetworkReply __d_return_value = QNetworkReply.__getObject(ret);
        return __d_return_value;
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QNetworkAccessManager_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QNetworkAccessManager);
    }

    static QNetworkAccessManager __getObject(void* nativeId) {
        return static_cast!(QNetworkAccessManager)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QNetworkAccessManager_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QNetworkAccessManager_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QNetworkAccessManager(nativeId, initFlags);
        QNetworkAccessManager.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(QNetworkReply,QAuthenticator)("authenticationRequired"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(QNetworkReply)("finished"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!()("networkSessionConnected"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(const(QNetworkProxy),QAuthenticator)("proxyAuthenticationRequired"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!(QNetworkReply,QList!(QSslError))("sslErrors"), index));

    }

    public alias void __isQtType_QNetworkAccessManager;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QNetworkAccessManager_authenticationRequired_QNetworkReply_nativepointerQAuthenticator(void* __this_nativeId,
 void* reply0,
 void* authenticator1);
private extern(C) void  qtd_QNetworkAccessManager_finished_QNetworkReply(void* __this_nativeId,
 void* reply0);
private extern(C) void  qtd_QNetworkAccessManager_networkSessionConnected(void* __this_nativeId);
private extern(C) void  qtd_QNetworkAccessManager_proxyAuthenticationRequired_QNetworkProxy_nativepointerQAuthenticator(void* __this_nativeId,
 void* proxy0,
 void* authenticator1);
private extern(C) void  qtd_QNetworkAccessManager_sslErrors_QNetworkReply_QList(void* __this_nativeId,
 void* reply0,
 void* errors1);

// C wrappers
private extern(C) void* qtd_QNetworkAccessManager_QNetworkAccessManager_QObject(void *d_ptr,
 void* parent0);
private extern(C) void*  qtd_QNetworkAccessManager_cache_const(void* __this_nativeId);
private extern(C) void*  qtd_QNetworkAccessManager_cookieJar_const(void* __this_nativeId);
private extern(C) void*  qtd_QNetworkAccessManager_deleteResource_QNetworkRequest(void* __this_nativeId,
 void* request0);
private extern(C) void*  qtd_QNetworkAccessManager_get_QNetworkRequest(void* __this_nativeId,
 void* request0);
private extern(C) void*  qtd_QNetworkAccessManager_head_QNetworkRequest(void* __this_nativeId,
 void* request0);
private extern(C) void*  qtd_QNetworkAccessManager_post_QNetworkRequest_QIODevice(void* __this_nativeId,
 void* request0,
 void* data1);
private extern(C) void*  qtd_QNetworkAccessManager_post_QNetworkRequest_QByteArray(void* __this_nativeId,
 void* request0,
 void* data1);
private extern(C) void*  qtd_QNetworkAccessManager_proxy_const(void* __this_nativeId);
private extern(C) void*  qtd_QNetworkAccessManager_proxyFactory_const(void* __this_nativeId);
private extern(C) void*  qtd_QNetworkAccessManager_put_QNetworkRequest_QIODevice(void* __this_nativeId,
 void* request0,
 void* data1);
private extern(C) void*  qtd_QNetworkAccessManager_put_QNetworkRequest_QByteArray(void* __this_nativeId,
 void* request0,
 void* data1);
private extern(C) void*  qtd_QNetworkAccessManager_sendCustomRequest_QNetworkRequest_QByteArray_QIODevice(void* __this_nativeId,
 void* request0,
 void* verb1,
 void* data2);
private extern(C) void  qtd_QNetworkAccessManager_setCache_QAbstractNetworkCache(void* __this_nativeId,
 void* cache0);
private extern(C) void  qtd_QNetworkAccessManager_setCookieJar_QNetworkCookieJar(void* __this_nativeId,
 void* cookieJar0);
private extern(C) void  qtd_QNetworkAccessManager_setProxy_QNetworkProxy(void* __this_nativeId,
 void* proxy0);
private extern(C) void  qtd_QNetworkAccessManager_setProxyFactory_QNetworkProxyFactory(void* __this_nativeId,
 void* factory0);
private extern(C) void*  qtd_QNetworkAccessManager_createRequest_Operation_QNetworkRequest_QIODevice(void* __this_nativeId,
 int op0,
 void* request1,
 void* outgoingData2);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void* function(void *dId, int op0, void* request1, void* outgoingData2) qtd_QNetworkAccessManager_createRequest_Operation_QNetworkRequest_QIODevice_dispatch; }
extern(C) void* qtd_export_QNetworkAccessManager_createRequest_Operation_QNetworkRequest_QIODevice_dispatch(void *dId, int op0, void* request1, void* outgoingData2){
    auto d_object = cast(QNetworkAccessManager) dId;
    auto op0_enum = cast(QNetworkAccessManager.Operation) op0;
    scope request1_d_ref = new QNetworkRequest(request1, QtdObjectInitFlags.onStack);
    scope outgoingData2_d_ref = new QIODevice_ConcreteWrapper(outgoingData2, QtdObjectInitFlags.onStack);

    QNetworkReply ret_value = d_object.createRequest(op0_enum, request1_d_ref, outgoingData2_d_ref);
    return ret_value is null? null : ret_value.qtdNativeId;
}

private extern (C) void qtd_QNetworkAccessManager_initCallBacks(void* virtuals);

extern(C) void static_init_QNetworkAccessManager() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QNetworkAccessManager_createRequest_Operation_QNetworkRequest_QIODevice_dispatch;
    qtd_QNetworkAccessManager_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QNetworkAccessManager_authenticationRequired_handle(void* dId, void** args) {
        auto d_object = cast(QNetworkAccessManager) dId;
        scope reply0 = new QNetworkReply_ConcreteWrapper(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        scope authenticator1 = new QAuthenticator(cast(void*)(args[2]), QtdObjectInitFlags.onStack);

        //d_object.authenticationRequired_emit(reply0, authenticator1);
}*/
/*private extern(C) void qtd_QNetworkAccessManager_finished_handle(void* dId, void** args) {
        auto d_object = cast(QNetworkAccessManager) dId;
        scope reply0 = new QNetworkReply_ConcreteWrapper(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.finished_emit(reply0);
}*/
/*private extern(C) void qtd_QNetworkAccessManager_networkSessionConnected_handle(void* dId, void** args) {
        auto d_object = cast(QNetworkAccessManager) dId;
        //d_object.networkSessionConnected_emit();
}*/
/*private extern(C) void qtd_QNetworkAccessManager_proxyAuthenticationRequired_handle(void* dId, void** args) {
        auto d_object = cast(QNetworkAccessManager) dId;
        scope proxy0 = new QNetworkProxy(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        scope authenticator1 = new QAuthenticator(cast(void*)(args[2]), QtdObjectInitFlags.onStack);

        //d_object.proxyAuthenticationRequired_emit(proxy0, authenticator1);
}*/
/*private extern(C) void qtd_QNetworkAccessManager_sslErrors_handle(void* dId, void** args) {
        auto d_object = cast(QNetworkAccessManager) dId;
        scope reply0 = new QNetworkReply_ConcreteWrapper(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        QList!(QSslError) errors1;
        qtd_qt_network_QSslError_fromcpp_QList(args[2], &errors1);

        //d_object.sslErrors_emit(reply0, errors1);
}*/

extern(C) QMetaObjectNative* qtd_QNetworkAccessManager_staticMetaObject();

extern(C) void qtd_QNetworkAccessManager_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QNetworkAccessManager_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
