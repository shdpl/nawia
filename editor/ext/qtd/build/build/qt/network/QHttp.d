module qt.network.QHttp;

public import qt.network.QHttp_aux;
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
public import qt.network.QAuthenticator;
public import qt.network.QSslError;
public import qt.core.QList;
public import qt.network.QTcpSocket;
public import qt.network.QNetworkProxy;
public import qt.network.QHttpResponseHeader;
public import qt.core.QChildEvent;
public import qt.core.QIODevice;
public import qt.core.QEvent;
public import qt.network.QHttpRequestHeader;
public import qt.core.QObject;
public import qt.core.QTimerEvent;
public import qt.core.QByteArray;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QHttp : QObject
{
    public enum Error {
        NoError = 0,
        UnknownError = 1,
        HostNotFound = 2,
        ConnectionRefused = 3,
        UnexpectedClose = 4,
        InvalidResponseHeader = 5,
        WrongContentLength = 6,
        Aborted = 7,
        AuthenticationRequiredError = 8,
        ProxyAuthenticationRequiredError = 9
    }

    alias Error.NoError NoError;
    alias Error.UnknownError UnknownError;
    alias Error.HostNotFound HostNotFound;
    alias Error.ConnectionRefused ConnectionRefused;
    alias Error.UnexpectedClose UnexpectedClose;
    alias Error.InvalidResponseHeader InvalidResponseHeader;
    alias Error.WrongContentLength WrongContentLength;
    alias Error.Aborted Aborted;
    alias Error.AuthenticationRequiredError AuthenticationRequiredError;
    alias Error.ProxyAuthenticationRequiredError ProxyAuthenticationRequiredError;

    public enum ConnectionMode {
        ConnectionModeHttp = 0,
        ConnectionModeHttps = 1
    }

    alias ConnectionMode.ConnectionModeHttp ConnectionModeHttp;
    alias ConnectionMode.ConnectionModeHttps ConnectionModeHttps;

    public enum State {
        Unconnected = 0,
        HostLookup = 1,
        Connecting = 2,
        Sending = 3,
        Reading = 4,
        Connected = 5,
        Closing = 6
    }

    alias State.Unconnected Unconnected;
    alias State.HostLookup HostLookup;
    alias State.Connecting Connecting;
    alias State.Sending Sending;
    alias State.Reading Reading;
    alias State.Connected Connected;
    alias State.Closing Closing;


Object __rcSocket = null;

    private static const string[] __signalSignatures = [
            "authenticationRequired(QString,unsigned short,QAuthenticator*)", 
            "dataReadProgress(int,int)", 
            "dataSendProgress(int,int)", 
            "done(bool)", 
            "proxyAuthenticationRequired(QNetworkProxy,QAuthenticator*)", 
            "readyRead(QHttpResponseHeader)", 
            "requestFinished(int,bool)", 
            "requestStarted(int)", 
            "responseHeaderReceived(QHttpResponseHeader)", 
            "sslErrors(QList<QSslError>)", 
            "stateChanged(int)"    ];

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

    protected final void authenticationRequired(string hostname, ushort port, QAuthenticator arg__3) {
        qtd_QHttp_authenticationRequired_string_ushort_nativepointerQAuthenticator(qtdNativeId, hostname, port, arg__3 is null ? null : arg__3.qtdNativeId);
    }

    protected final void dataReadProgress(int arg__1, int arg__2) {
        qtd_QHttp_dataReadProgress_int_int(qtdNativeId, arg__1, arg__2);
    }

    protected final void dataSendProgress(int arg__1, int arg__2) {
        qtd_QHttp_dataSendProgress_int_int(qtdNativeId, arg__1, arg__2);
    }

    protected final void done(bool arg__1) {
        qtd_QHttp_done_bool(qtdNativeId, arg__1);
    }

    protected final void proxyAuthenticationRequired(const(QNetworkProxy) proxy, QAuthenticator arg__2) {
        qtd_QHttp_proxyAuthenticationRequired_QNetworkProxy_nativepointerQAuthenticator(qtdNativeId, proxy is null ? null : (cast(QNetworkProxy)proxy).qtdNativeId, arg__2 is null ? null : arg__2.qtdNativeId);
    }

    protected final void readyRead(const(QHttpResponseHeader) resp) {
        qtd_QHttp_readyRead_QHttpResponseHeader(qtdNativeId, resp is null ? null : (cast(QHttpResponseHeader)resp).qtdNativeId);
    }

    protected final void requestFinished(int arg__1, bool arg__2) {
        qtd_QHttp_requestFinished_int_bool(qtdNativeId, arg__1, arg__2);
    }

    protected final void requestStarted(int arg__1) {
        qtd_QHttp_requestStarted_int(qtdNativeId, arg__1);
    }

    protected final void responseHeaderReceived(const(QHttpResponseHeader) resp) {
        qtd_QHttp_responseHeaderReceived_QHttpResponseHeader(qtdNativeId, resp is null ? null : (cast(QHttpResponseHeader)resp).qtdNativeId);
    }

    protected final void sslErrors(QList!(QSslError) errors) {
        qtd_QHttp_sslErrors_QList(qtdNativeId, &errors);
    }

    protected final void stateChanged(int arg__1) {
        qtd_QHttp_stateChanged_int(qtdNativeId, arg__1);
    }
// Functions

    public this(QObject parent_ = null) {
        void* ret = qtd_QHttp_QHttp_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string hostname, QHttp.ConnectionMode mode, ushort port = 0, QObject parent_ = null) {
        void* ret = qtd_QHttp_QHttp_string_ConnectionMode_ushort_QObject(cast(void*) this, hostname, mode, port, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public this(string hostname, ushort port = 80, QObject parent_ = null) {
        void* ret = qtd_QHttp_QHttp_string_ushort_QObject(cast(void*) this, hostname, port, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void abort() {
        qtd_QHttp_abort(qtdNativeId);
    }

    public final long bytesAvailable() const {
        return qtd_QHttp_bytesAvailable_const(qtdNativeId);
    }

    public final void clearPendingRequests() {
        qtd_QHttp_clearPendingRequests(qtdNativeId);
    }

    public final int close() {
        return qtd_QHttp_close(qtdNativeId);
    }

    public final QIODevice currentDestinationDevice() const {
        void *ret = qtd_QHttp_currentDestinationDevice_const(qtdNativeId);
        QIODevice __d_return_value = QIODevice.__getObject(ret);
        return __d_return_value;
    }

    public final int currentId() const {
        return qtd_QHttp_currentId_const(qtdNativeId);
    }

    public final QHttpRequestHeader currentRequest() const {
        void* ret = qtd_QHttp_currentRequest_const(qtdNativeId);
        QHttpRequestHeader __d_return_value = new QHttpRequestHeader(ret);
        return __d_return_value;
    }

    public final QIODevice currentSourceDevice() const {
        void *ret = qtd_QHttp_currentSourceDevice_const(qtdNativeId);
        QIODevice __d_return_value = QIODevice.__getObject(ret);
        return __d_return_value;
    }

    public final QHttp.Error error() const {
        return cast(QHttp.Error) qtd_QHttp_error_const(qtdNativeId);
    }

    public final string errorString() const {
        string res;
        qtd_QHttp_errorString_const(qtdNativeId, &res);
        return res;
    }

    public final int get(string path, QIODevice to = null) {
        return qtd_QHttp_get_string_QIODevice(qtdNativeId, path, to is null ? null : to.qtdNativeId);
    }

    public final bool hasPendingRequests() const {
        return qtd_QHttp_hasPendingRequests_const(qtdNativeId);
    }

    public final int head(string path) {
        return qtd_QHttp_head_string(qtdNativeId, path);
    }

    public final void ignoreSslErrors() {
        qtd_QHttp_ignoreSslErrors(qtdNativeId);
    }

    public final QHttpResponseHeader lastResponse() const {
        void* ret = qtd_QHttp_lastResponse_const(qtdNativeId);
        QHttpResponseHeader __d_return_value = new QHttpResponseHeader(ret);
        return __d_return_value;
    }

    public final int post(string path, QIODevice data, QIODevice to = null) {
        return qtd_QHttp_post_string_QIODevice_QIODevice(qtdNativeId, path, data is null ? null : data.qtdNativeId, to is null ? null : to.qtdNativeId);
    }

    public final int post(string path, const(QByteArray) data, QIODevice to = null) {
        return qtd_QHttp_post_string_QByteArray_QIODevice(qtdNativeId, path, data is null ? null : (cast(QByteArray)data).qtdNativeId, to is null ? null : to.qtdNativeId);
    }

    public final long read(char* data, long maxlen) {
        return qtd_QHttp_read_nativepointerchar_long(qtdNativeId, data, maxlen);
    }

    public final QByteArray readAll() {
        void* ret = qtd_QHttp_readAll(qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final int request(const(QHttpRequestHeader) header, QIODevice device = null, QIODevice to = null) {
        return qtd_QHttp_request_QHttpRequestHeader_QIODevice_QIODevice(qtdNativeId, header is null ? null : (cast(QHttpRequestHeader)header).qtdNativeId, device is null ? null : device.qtdNativeId, to is null ? null : to.qtdNativeId);
    }

    public final int request(const(QHttpRequestHeader) header, const(QByteArray) data, QIODevice to = null) {
        return qtd_QHttp_request_QHttpRequestHeader_QByteArray_QIODevice(qtdNativeId, header is null ? null : (cast(QHttpRequestHeader)header).qtdNativeId, data is null ? null : (cast(QByteArray)data).qtdNativeId, to is null ? null : to.qtdNativeId);
    }

    public final int setHost(string hostname, QHttp.ConnectionMode mode, ushort port = 0) {
        return qtd_QHttp_setHost_string_ConnectionMode_ushort(qtdNativeId, hostname, mode, port);
    }

    public final int setHost(string hostname, ushort port = 80) {
        return qtd_QHttp_setHost_string_ushort(qtdNativeId, hostname, port);
    }

    public final int setProxy(const(QNetworkProxy) proxy) {
        return qtd_QHttp_setProxy_QNetworkProxy(qtdNativeId, proxy is null ? null : (cast(QNetworkProxy)proxy).qtdNativeId);
    }

    public final int setProxy(string host, int port, string username = "", string password = "") {
        return qtd_QHttp_setProxy_string_int_string_string(qtdNativeId, host, port, username, password);
    }

    public final int setSocket(QTcpSocket socket) {
        {
            __rcSocket = cast(Object) socket;
        }
        return qtd_QHttp_setSocket_QTcpSocket(qtdNativeId, socket is null ? null : socket.qtdNativeId);
    }

    public final int setUser(string username, string password = "") {
        return qtd_QHttp_setUser_string_string(qtdNativeId, username, password);
    }

    public final QHttp.State state() const {
        return cast(QHttp.State) qtd_QHttp_state_const(qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "abort()", 
            "ignoreSslErrors()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QHttp_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QHttp);
    }

    static QHttp __getObject(void* nativeId) {
        return static_cast!(QHttp)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QHttp_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QHttp_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QHttp(nativeId, initFlags);
        QHttp.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(string,ushort,QAuthenticator)("authenticationRequired"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(int,int)("dataReadProgress"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(int,int)("dataSendProgress"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(bool)("done"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!(const(QNetworkProxy),QAuthenticator)("proxyAuthenticationRequired"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[5]);
        mo.addMethod(new QMetaSignal(signature!(const(QHttpResponseHeader))("readyRead"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[6]);
        mo.addMethod(new QMetaSignal(signature!(int,bool)("requestFinished"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[7]);
        mo.addMethod(new QMetaSignal(signature!(int)("requestStarted"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[8]);
        mo.addMethod(new QMetaSignal(signature!(const(QHttpResponseHeader))("responseHeaderReceived"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[9]);
        mo.addMethod(new QMetaSignal(signature!(QList!(QSslError))("sslErrors"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[10]);
        mo.addMethod(new QMetaSignal(signature!(int)("stateChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("abort"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!()("ignoreSslErrors"), index));

    }

    public alias void __isQtType_QHttp;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QHttp_authenticationRequired_string_ushort_nativepointerQAuthenticator(void* __this_nativeId,
 string hostname0,
 ushort port1,
 void* arg__3);
private extern(C) void  qtd_QHttp_dataReadProgress_int_int(void* __this_nativeId,
 int arg__1,
 int arg__2);
private extern(C) void  qtd_QHttp_dataSendProgress_int_int(void* __this_nativeId,
 int arg__1,
 int arg__2);
private extern(C) void  qtd_QHttp_done_bool(void* __this_nativeId,
 bool arg__1);
private extern(C) void  qtd_QHttp_proxyAuthenticationRequired_QNetworkProxy_nativepointerQAuthenticator(void* __this_nativeId,
 void* proxy0,
 void* arg__2);
private extern(C) void  qtd_QHttp_readyRead_QHttpResponseHeader(void* __this_nativeId,
 void* resp0);
private extern(C) void  qtd_QHttp_requestFinished_int_bool(void* __this_nativeId,
 int arg__1,
 bool arg__2);
private extern(C) void  qtd_QHttp_requestStarted_int(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QHttp_responseHeaderReceived_QHttpResponseHeader(void* __this_nativeId,
 void* resp0);
private extern(C) void  qtd_QHttp_sslErrors_QList(void* __this_nativeId,
 void* errors0);
private extern(C) void  qtd_QHttp_stateChanged_int(void* __this_nativeId,
 int arg__1);

// C wrappers
private extern(C) void* qtd_QHttp_QHttp_QObject(void *d_ptr,
 void* parent0);
private extern(C) void* qtd_QHttp_QHttp_string_ConnectionMode_ushort_QObject(void *d_ptr,
 string hostname0,
 int mode1,
 ushort port2,
 void* parent3);
private extern(C) void* qtd_QHttp_QHttp_string_ushort_QObject(void *d_ptr,
 string hostname0,
 ushort port1,
 void* parent2);
private extern(C) void  qtd_QHttp_abort(void* __this_nativeId);
private extern(C) long  qtd_QHttp_bytesAvailable_const(void* __this_nativeId);
private extern(C) void  qtd_QHttp_clearPendingRequests(void* __this_nativeId);
private extern(C) int  qtd_QHttp_close(void* __this_nativeId);
private extern(C) void*  qtd_QHttp_currentDestinationDevice_const(void* __this_nativeId);
private extern(C) int  qtd_QHttp_currentId_const(void* __this_nativeId);
private extern(C) void*  qtd_QHttp_currentRequest_const(void* __this_nativeId);
private extern(C) void*  qtd_QHttp_currentSourceDevice_const(void* __this_nativeId);
private extern(C) int  qtd_QHttp_error_const(void* __this_nativeId);
private extern(C) void  qtd_QHttp_errorString_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) int  qtd_QHttp_get_string_QIODevice(void* __this_nativeId,
 string path0,
 void* to1);
private extern(C) bool  qtd_QHttp_hasPendingRequests_const(void* __this_nativeId);
private extern(C) int  qtd_QHttp_head_string(void* __this_nativeId,
 string path0);
private extern(C) void  qtd_QHttp_ignoreSslErrors(void* __this_nativeId);
private extern(C) void*  qtd_QHttp_lastResponse_const(void* __this_nativeId);
private extern(C) int  qtd_QHttp_post_string_QIODevice_QIODevice(void* __this_nativeId,
 string path0,
 void* data1,
 void* to2);
private extern(C) int  qtd_QHttp_post_string_QByteArray_QIODevice(void* __this_nativeId,
 string path0,
 void* data1,
 void* to2);
private extern(C) long  qtd_QHttp_read_nativepointerchar_long(void* __this_nativeId,
 char* data0,
 long maxlen1);
private extern(C) void*  qtd_QHttp_readAll(void* __this_nativeId);
private extern(C) int  qtd_QHttp_request_QHttpRequestHeader_QIODevice_QIODevice(void* __this_nativeId,
 void* header0,
 void* device1,
 void* to2);
private extern(C) int  qtd_QHttp_request_QHttpRequestHeader_QByteArray_QIODevice(void* __this_nativeId,
 void* header0,
 void* data1,
 void* to2);
private extern(C) int  qtd_QHttp_setHost_string_ConnectionMode_ushort(void* __this_nativeId,
 string hostname0,
 int mode1,
 ushort port2);
private extern(C) int  qtd_QHttp_setHost_string_ushort(void* __this_nativeId,
 string hostname0,
 ushort port1);
private extern(C) int  qtd_QHttp_setProxy_QNetworkProxy(void* __this_nativeId,
 void* proxy0);
private extern(C) int  qtd_QHttp_setProxy_string_int_string_string(void* __this_nativeId,
 string host0,
 int port1,
 string username2,
 string password3);
private extern(C) int  qtd_QHttp_setSocket_QTcpSocket(void* __this_nativeId,
 void* socket0);
private extern(C) int  qtd_QHttp_setUser_string_string(void* __this_nativeId,
 string username0,
 string password1);
private extern(C) int  qtd_QHttp_state_const(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QHttp_initCallBacks(void* virtuals);

extern(C) void static_init_QHttp() {
    qtd_QHttp_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QHttp_authenticationRequired_handle(void* dId, void** args) {
        auto d_object = cast(QHttp) dId;
        auto hostname0_ptr = args[1];
        string hostname0 = QStringUtil.toNativeString(hostname0_ptr);
        auto port1 = *(cast(ushort*)args[2]);
        scope arg__3 = new QAuthenticator(cast(void*)(args[3]), QtdObjectInitFlags.onStack);

        //d_object.authenticationRequired_emit(hostname0, port1, arg__3);
}*/
/*private extern(C) void qtd_QHttp_dataReadProgress_handle(void* dId, void** args) {
        auto d_object = cast(QHttp) dId;
        auto arg__1 = *(cast(int*)args[1]);
        auto arg__2 = *(cast(int*)args[2]);
        //d_object.dataReadProgress_emit(arg__1, arg__2);
}*/
/*private extern(C) void qtd_QHttp_dataSendProgress_handle(void* dId, void** args) {
        auto d_object = cast(QHttp) dId;
        auto arg__1 = *(cast(int*)args[1]);
        auto arg__2 = *(cast(int*)args[2]);
        //d_object.dataSendProgress_emit(arg__1, arg__2);
}*/
/*private extern(C) void qtd_QHttp_done_handle(void* dId, void** args) {
        auto d_object = cast(QHttp) dId;
        auto arg__1 = *(cast(bool*)args[1]);
        //d_object.done_emit(arg__1);
}*/
/*private extern(C) void qtd_QHttp_proxyAuthenticationRequired_handle(void* dId, void** args) {
        auto d_object = cast(QHttp) dId;
        scope proxy0 = new QNetworkProxy(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        scope arg__2 = new QAuthenticator(cast(void*)(args[2]), QtdObjectInitFlags.onStack);

        //d_object.proxyAuthenticationRequired_emit(proxy0, arg__2);
}*/
/*private extern(C) void qtd_QHttp_readyRead_handle(void* dId, void** args) {
        auto d_object = cast(QHttp) dId;
        scope resp0 = new QHttpResponseHeader(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.readyRead_emit(resp0);
}*/
/*private extern(C) void qtd_QHttp_requestFinished_handle(void* dId, void** args) {
        auto d_object = cast(QHttp) dId;
        auto arg__1 = *(cast(int*)args[1]);
        auto arg__2 = *(cast(bool*)args[2]);
        //d_object.requestFinished_emit(arg__1, arg__2);
}*/
/*private extern(C) void qtd_QHttp_requestStarted_handle(void* dId, void** args) {
        auto d_object = cast(QHttp) dId;
        auto arg__1 = *(cast(int*)args[1]);
        //d_object.requestStarted_emit(arg__1);
}*/
/*private extern(C) void qtd_QHttp_responseHeaderReceived_handle(void* dId, void** args) {
        auto d_object = cast(QHttp) dId;
        scope resp0 = new QHttpResponseHeader(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        //d_object.responseHeaderReceived_emit(resp0);
}*/
/*private extern(C) void qtd_QHttp_sslErrors_handle(void* dId, void** args) {
        auto d_object = cast(QHttp) dId;
        QList!(QSslError) errors0;
        qtd_qt_network_QSslError_fromcpp_QList(args[1], &errors0);

        //d_object.sslErrors_emit(errors0);
}*/
/*private extern(C) void qtd_QHttp_stateChanged_handle(void* dId, void** args) {
        auto d_object = cast(QHttp) dId;
        auto arg__1 = *(cast(int*)args[1]);
        //d_object.stateChanged_emit(arg__1);
}*/

extern(C) QMetaObjectNative* qtd_QHttp_staticMetaObject();

extern(C) void qtd_QHttp_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QHttp_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
