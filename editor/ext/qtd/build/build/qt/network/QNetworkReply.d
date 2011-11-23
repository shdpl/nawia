module qt.network.QNetworkReply;

public import qt.network.QNetworkReply_aux;
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
public import qt.network.QNetworkAccessManager;
public import qt.network.QNetworkRequest;
public import qt.network.QSslError;
public import qt.core.QList;
public import qt.core.QUrl;
public import qt.network.QNetworkAccessManager;
public import qt.core.QChildEvent;
public import qt.core.QIODevice;
public import qt.core.QEvent;
public import qt.network.QSslConfiguration;
public import qt.core.QObject;
public import qt.core.QVariant;
public import qt.core.QTimerEvent;
public import qt.network.QNetworkRequest;
public import qt.core.QByteArray;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QNetworkReply : QIODevice
{
    public enum NetworkError {
        NoError = 0,
        ConnectionRefusedError = 1,
        RemoteHostClosedError = 2,
        HostNotFoundError = 3,
        TimeoutError = 4,
        OperationCanceledError = 5,
        SslHandshakeFailedError = 6,
        TemporaryNetworkFailureError = 7,
        UnknownNetworkError = 99,
        ProxyConnectionRefusedError = 101,
        ProxyConnectionClosedError = 102,
        ProxyNotFoundError = 103,
        ProxyTimeoutError = 104,
        ProxyAuthenticationRequiredError = 105,
        UnknownProxyError = 199,
        ContentAccessDenied = 201,
        ContentOperationNotPermittedError = 202,
        ContentNotFoundError = 203,
        AuthenticationRequiredError = 204,
        ContentReSendError = 205,
        UnknownContentError = 299,
        ProtocolUnknownError = 301,
        ProtocolInvalidOperationError = 302,
        ProtocolFailure = 399
    }

    alias NetworkError.NoError NoError;
    alias NetworkError.ConnectionRefusedError ConnectionRefusedError;
    alias NetworkError.RemoteHostClosedError RemoteHostClosedError;
    alias NetworkError.HostNotFoundError HostNotFoundError;
    alias NetworkError.TimeoutError TimeoutError;
    alias NetworkError.OperationCanceledError OperationCanceledError;
    alias NetworkError.SslHandshakeFailedError SslHandshakeFailedError;
    alias NetworkError.TemporaryNetworkFailureError TemporaryNetworkFailureError;
    alias NetworkError.UnknownNetworkError UnknownNetworkError;
    alias NetworkError.ProxyConnectionRefusedError ProxyConnectionRefusedError;
    alias NetworkError.ProxyConnectionClosedError ProxyConnectionClosedError;
    alias NetworkError.ProxyNotFoundError ProxyNotFoundError;
    alias NetworkError.ProxyTimeoutError ProxyTimeoutError;
    alias NetworkError.ProxyAuthenticationRequiredError ProxyAuthenticationRequiredError;
    alias NetworkError.UnknownProxyError UnknownProxyError;
    alias NetworkError.ContentAccessDenied ContentAccessDenied;
    alias NetworkError.ContentOperationNotPermittedError ContentOperationNotPermittedError;
    alias NetworkError.ContentNotFoundError ContentNotFoundError;
    alias NetworkError.AuthenticationRequiredError AuthenticationRequiredError;
    alias NetworkError.ContentReSendError ContentReSendError;
    alias NetworkError.UnknownContentError UnknownContentError;
    alias NetworkError.ProtocolUnknownError ProtocolUnknownError;
    alias NetworkError.ProtocolInvalidOperationError ProtocolInvalidOperationError;
    alias NetworkError.ProtocolFailure ProtocolFailure;


    private static const string[] __signalSignatures = [
            "downloadProgress(qint64,qint64)", 
            "error(QNetworkReply::NetworkError)", 
            "finished()", 
            "metaDataChanged()", 
            "sslErrors(QList<QSslError>)", 
            "uploadProgress(qint64,qint64)"    ];

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

    protected final void downloadProgress(long bytesReceived, long bytesTotal) {
        qtd_QNetworkReply_downloadProgress_long_long(qtdNativeId, bytesReceived, bytesTotal);
    }

    protected final void error(QNetworkReply.NetworkError arg__1) {
        qtd_QNetworkReply_error_NetworkError(qtdNativeId, arg__1);
    }

    protected final void finished() {
        qtd_QNetworkReply_finished(qtdNativeId);
    }

    protected final void metaDataChanged() {
        qtd_QNetworkReply_metaDataChanged(qtdNativeId);
    }

    protected final void sslErrors(QList!(QSslError) errors) {
        qtd_QNetworkReply_sslErrors_QList(qtdNativeId, &errors);
    }

    protected final void uploadProgress(long bytesSent, long bytesTotal) {
        qtd_QNetworkReply_uploadProgress_long_long(qtdNativeId, bytesSent, bytesTotal);
    }
// Functions

    protected this(QObject parent_ = null) {
        void* ret = qtd_QNetworkReply_QNetworkReply_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final QVariant attribute(QNetworkRequest.Attribute code) const {
        void* ret = qtd_QNetworkReply_attribute_Attribute_const(qtdNativeId, code);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final QNetworkReply.NetworkError error_() const {
        return cast(QNetworkReply.NetworkError) qtd_QNetworkReply_error__const(qtdNativeId);
    }

    public final bool hasRawHeader(const(QByteArray) headerName) const {
        return qtd_QNetworkReply_hasRawHeader_QByteArray_const(qtdNativeId, headerName is null ? null : (cast(QByteArray)headerName).qtdNativeId);
    }

    public final QVariant header(QNetworkRequest.KnownHeaders header) const {
        void* ret = qtd_QNetworkReply_header_KnownHeaders_const(qtdNativeId, header);
        QVariant __d_return_value = new QVariant(ret);
        return __d_return_value;
    }

    public final void ignoreSslErrors(QList!(QSslError) errors) {
        qtd_QNetworkReply_ignoreSslErrors_QList(qtdNativeId, &errors);
    }

    public final bool isFinished() const {
        return qtd_QNetworkReply_isFinished_const(qtdNativeId);
    }

    public final bool isRunning() const {
        return qtd_QNetworkReply_isRunning_const(qtdNativeId);
    }

    public final QNetworkAccessManager manager() const {
        void *ret = qtd_QNetworkReply_manager_const(qtdNativeId);
        QNetworkAccessManager __d_return_value = QNetworkAccessManager.__getObject(ret);
        return __d_return_value;
    }

    public final QNetworkAccessManager.Operation operation() const {
        return cast(QNetworkAccessManager.Operation) qtd_QNetworkReply_operation_const(qtdNativeId);
    }

    public final QByteArray rawHeader(const(QByteArray) headerName) const {
        void* ret = qtd_QNetworkReply_rawHeader_QByteArray_const(qtdNativeId, headerName is null ? null : (cast(QByteArray)headerName).qtdNativeId);
        QByteArray __d_return_value = new QByteArray(ret);
        return __d_return_value;
    }

    public final QList!(QByteArray) rawHeaderList() const {
        auto res = QList!(QByteArray).opCall();
        qtd_QNetworkReply_rawHeaderList_const(qtdNativeId, &res);
        return res;
    }

    public final long readBufferSize() const {
        return qtd_QNetworkReply_readBufferSize_const(qtdNativeId);
    }

    public final QNetworkRequest request() const {
        void* ret = qtd_QNetworkReply_request_const(qtdNativeId);
        QNetworkRequest __d_return_value = new QNetworkRequest(ret);
        return __d_return_value;
    }

    protected final void setAttribute(QNetworkRequest.Attribute code, QVariant value) {
        qtd_QNetworkReply_setAttribute_Attribute_QVariant(qtdNativeId, code, value is null ? null : value.qtdNativeId);
    }

    protected final void setError(QNetworkReply.NetworkError errorCode, string errorString) {
        qtd_QNetworkReply_setError_NetworkError_string(qtdNativeId, errorCode, errorString);
    }

    protected final void setHeader(QNetworkRequest.KnownHeaders header, QVariant value) {
        qtd_QNetworkReply_setHeader_KnownHeaders_QVariant(qtdNativeId, header, value is null ? null : value.qtdNativeId);
    }

    protected final void setOperation(QNetworkAccessManager.Operation operation) {
        qtd_QNetworkReply_setOperation_Operation(qtdNativeId, operation);
    }

    protected final void setRawHeader(const(QByteArray) headerName, const(QByteArray) value) {
        qtd_QNetworkReply_setRawHeader_QByteArray_QByteArray(qtdNativeId, headerName is null ? null : (cast(QByteArray)headerName).qtdNativeId, value is null ? null : (cast(QByteArray)value).qtdNativeId);
    }

    protected final void setRequest(const(QNetworkRequest) request) {
        qtd_QNetworkReply_setRequest_QNetworkRequest(qtdNativeId, request is null ? null : (cast(QNetworkRequest)request).qtdNativeId);
    }

    public final void setSslConfiguration(const(QSslConfiguration) configuration) {
        qtd_QNetworkReply_setSslConfiguration_QSslConfiguration(qtdNativeId, configuration is null ? null : (cast(QSslConfiguration)configuration).qtdNativeId);
    }

    protected final void setUrl(const(QUrl) url) {
        qtd_QNetworkReply_setUrl_QUrl(qtdNativeId, url is null ? null : (cast(QUrl)url).qtdNativeId);
    }

    public final QSslConfiguration sslConfiguration() const {
        void* ret = qtd_QNetworkReply_sslConfiguration_const(qtdNativeId);
        QSslConfiguration __d_return_value = new QSslConfiguration(ret);
        return __d_return_value;
    }

    public final QUrl url() const {
        void* ret = qtd_QNetworkReply_url_const(qtdNativeId);
        QUrl __d_return_value = new QUrl(ret);
        return __d_return_value;
    }

    public abstract void abort();

    public void close() {
        qtd_QNetworkReply_close(qtdNativeId);
    }

    public void ignoreSslErrors() {
        qtd_QNetworkReply_ignoreSslErrors(qtdNativeId);
    }

    public bool isSequential() const {
        return qtd_QNetworkReply_isSequential_const(qtdNativeId);
    }

    public void setReadBufferSize(long size) {
        qtd_QNetworkReply_setReadBufferSize_long(qtdNativeId, size);
    }

    protected long writeData(const(char*) data, long len) {
        return qtd_QNetworkReply_writeData_nativepointerchar_long(qtdNativeId, data, len);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "ignoreSslErrors()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QNetworkReply_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QNetworkReply);
    }

    static QNetworkReply __getObject(void* nativeId) {
        return static_cast!(QNetworkReply)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QNetworkReply_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QNetworkReply_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QNetworkReply_ConcreteWrapper(nativeId, initFlags);
        QNetworkReply.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!(long,long)("downloadProgress"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!(QNetworkReply.NetworkError)("error"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!()("finished"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!()("metaDataChanged"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!(QList!(QSslError))("sslErrors"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[5]);
        mo.addMethod(new QMetaSignal(signature!(long,long)("uploadProgress"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!()("ignoreSslErrors"), index));

    }

    public alias void __isQtType_QNetworkReply;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

    public class QNetworkReply_ConcreteWrapper : QNetworkReply {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public void abort() {
            qtd_QNetworkReply_abort(qtdNativeId);
        }

        override         protected long readData(char* data, long maxlen) {
            return qtd_QNetworkReply_readData_nativepointerchar_long(qtdNativeId, data, maxlen);
        }
    }


// C wrappers for signal emitters
private extern(C) void  qtd_QNetworkReply_downloadProgress_long_long(void* __this_nativeId,
 long bytesReceived0,
 long bytesTotal1);
private extern(C) void  qtd_QNetworkReply_error_NetworkError(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QNetworkReply_finished(void* __this_nativeId);
private extern(C) void  qtd_QNetworkReply_metaDataChanged(void* __this_nativeId);
private extern(C) void  qtd_QNetworkReply_sslErrors_QList(void* __this_nativeId,
 void* errors0);
private extern(C) void  qtd_QNetworkReply_uploadProgress_long_long(void* __this_nativeId,
 long bytesSent0,
 long bytesTotal1);

// C wrappers
private extern(C) void* qtd_QNetworkReply_QNetworkReply_QObject(void *d_ptr,
 void* parent0);
private extern(C) void*  qtd_QNetworkReply_attribute_Attribute_const(void* __this_nativeId,
 int code0);
private extern(C) int  qtd_QNetworkReply_error__const(void* __this_nativeId);
private extern(C) bool  qtd_QNetworkReply_hasRawHeader_QByteArray_const(void* __this_nativeId,
 void* headerName0);
private extern(C) void*  qtd_QNetworkReply_header_KnownHeaders_const(void* __this_nativeId,
 int header0);
private extern(C) void  qtd_QNetworkReply_ignoreSslErrors_QList(void* __this_nativeId,
 void* errors0);
private extern(C) bool  qtd_QNetworkReply_isFinished_const(void* __this_nativeId);
private extern(C) bool  qtd_QNetworkReply_isRunning_const(void* __this_nativeId);
private extern(C) void*  qtd_QNetworkReply_manager_const(void* __this_nativeId);
private extern(C) int  qtd_QNetworkReply_operation_const(void* __this_nativeId);
private extern(C) void*  qtd_QNetworkReply_rawHeader_QByteArray_const(void* __this_nativeId,
 void* headerName0);
private extern(C) void  qtd_QNetworkReply_rawHeaderList_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) long  qtd_QNetworkReply_readBufferSize_const(void* __this_nativeId);
private extern(C) void*  qtd_QNetworkReply_request_const(void* __this_nativeId);
private extern(C) void  qtd_QNetworkReply_setAttribute_Attribute_QVariant(void* __this_nativeId,
 int code0,
 void* value1);
private extern(C) void  qtd_QNetworkReply_setError_NetworkError_string(void* __this_nativeId,
 int errorCode0,
 string errorString1);
private extern(C) void  qtd_QNetworkReply_setHeader_KnownHeaders_QVariant(void* __this_nativeId,
 int header0,
 void* value1);
private extern(C) void  qtd_QNetworkReply_setOperation_Operation(void* __this_nativeId,
 int operation0);
private extern(C) void  qtd_QNetworkReply_setRawHeader_QByteArray_QByteArray(void* __this_nativeId,
 void* headerName0,
 void* value1);
private extern(C) void  qtd_QNetworkReply_setRequest_QNetworkRequest(void* __this_nativeId,
 void* request0);
private extern(C) void  qtd_QNetworkReply_setSslConfiguration_QSslConfiguration(void* __this_nativeId,
 void* configuration0);
private extern(C) void  qtd_QNetworkReply_setUrl_QUrl(void* __this_nativeId,
 void* url0);
private extern(C) void*  qtd_QNetworkReply_sslConfiguration_const(void* __this_nativeId);
private extern(C) void*  qtd_QNetworkReply_url_const(void* __this_nativeId);
private extern(C) void  qtd_QNetworkReply_abort(void* __this_nativeId);
private extern(C) void  qtd_QNetworkReply_close(void* __this_nativeId);
private extern(C) void  qtd_QNetworkReply_ignoreSslErrors(void* __this_nativeId);
private extern(C) bool  qtd_QNetworkReply_isSequential_const(void* __this_nativeId);
private extern(C) void  qtd_QNetworkReply_setReadBufferSize_long(void* __this_nativeId,
 long size0);
private extern(C) long  qtd_QNetworkReply_writeData_nativepointerchar_long(void* __this_nativeId,
 const (char*) data0,
 long len1);
// Just the private functions for abstract functions implemeneted in superclasses

private extern(C) long  qtd_QNetworkReply_readData_nativepointerchar_long(void* __this_nativeId,
 char* data0,
 long maxlen1);



// Virtual Dispatch functions
extern(C){ extern void function(void *dId) qtd_QNetworkReply_abort_dispatch; }
extern(C) void qtd_export_QNetworkReply_abort_dispatch(void *dId){
    auto d_object = cast(QNetworkReply) dId;
    d_object.abort();
}

extern(C){ extern void function(void *dId) qtd_QNetworkReply_ignoreSslErrors_dispatch; }
extern(C) void qtd_export_QNetworkReply_ignoreSslErrors_dispatch(void *dId){
    auto d_object = cast(QNetworkReply) dId;
    d_object.ignoreSslErrors();
}

extern(C){ extern void function(void *dId, long size0) qtd_QNetworkReply_setReadBufferSize_long_dispatch; }
extern(C) void qtd_export_QNetworkReply_setReadBufferSize_long_dispatch(void *dId, long size0){
    auto d_object = cast(QNetworkReply) dId;
    d_object.setReadBufferSize(size0);
}

private extern (C) void qtd_QNetworkReply_initCallBacks(void* virtuals);

extern(C) void static_init_QNetworkReply() {
    void*[3] virt_arr;
    virt_arr[0] = &qtd_export_QNetworkReply_abort_dispatch;
    virt_arr[1] = &qtd_export_QNetworkReply_ignoreSslErrors_dispatch;
    virt_arr[2] = &qtd_export_QNetworkReply_setReadBufferSize_long_dispatch;
    qtd_QNetworkReply_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QNetworkReply_aboutToClose_handle(void* dId, void** args) {
        auto d_object = cast(QNetworkReply) dId;
        //d_object.aboutToClose_emit();
}*/
/*private extern(C) void qtd_QNetworkReply_bytesWritten_handle(void* dId, void** args) {
        auto d_object = cast(QNetworkReply) dId;
        auto bytes0 = *(cast(long*)args[1]);
        //d_object.bytesWritten_emit(bytes0);
}*/
/*private extern(C) void qtd_QNetworkReply_readChannelFinished_handle(void* dId, void** args) {
        auto d_object = cast(QNetworkReply) dId;
        //d_object.readChannelFinished_emit();
}*/
/*private extern(C) void qtd_QNetworkReply_readyRead_handle(void* dId, void** args) {
        auto d_object = cast(QNetworkReply) dId;
        //d_object.readyRead_emit();
}*/
/*private extern(C) void qtd_QNetworkReply_downloadProgress_handle(void* dId, void** args) {
        auto d_object = cast(QNetworkReply) dId;
        auto bytesReceived0 = *(cast(long*)args[1]);
        auto bytesTotal1 = *(cast(long*)args[2]);
        //d_object.downloadProgress_emit(bytesReceived0, bytesTotal1);
}*/
/*private extern(C) void qtd_QNetworkReply_error_handle(void* dId, void** args) {
        auto d_object = cast(QNetworkReply) dId;
        auto arg__1 = *(cast(QNetworkReply.NetworkError*)args[1]);
        //d_object.error_emit(arg__1);
}*/
/*private extern(C) void qtd_QNetworkReply_finished_handle(void* dId, void** args) {
        auto d_object = cast(QNetworkReply) dId;
        //d_object.finished_emit();
}*/
/*private extern(C) void qtd_QNetworkReply_metaDataChanged_handle(void* dId, void** args) {
        auto d_object = cast(QNetworkReply) dId;
        //d_object.metaDataChanged_emit();
}*/
/*private extern(C) void qtd_QNetworkReply_sslErrors_handle(void* dId, void** args) {
        auto d_object = cast(QNetworkReply) dId;
        QList!(QSslError) errors0;
        qtd_qt_network_QSslError_fromcpp_QList(args[1], &errors0);

        //d_object.sslErrors_emit(errors0);
}*/
/*private extern(C) void qtd_QNetworkReply_uploadProgress_handle(void* dId, void** args) {
        auto d_object = cast(QNetworkReply) dId;
        auto bytesSent0 = *(cast(long*)args[1]);
        auto bytesTotal1 = *(cast(long*)args[2]);
        //d_object.uploadProgress_emit(bytesSent0, bytesTotal1);
}*/

extern(C) QMetaObjectNative* qtd_QNetworkReply_staticMetaObject();

extern(C) void qtd_QNetworkReply_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QNetworkReply_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
