module qt.network.QAbstractSocket;

public import qt.network.QAbstractSocket_aux;
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
public import qt.network.QNetworkProxy;
public import qt.network.QHostAddress;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.network.QAuthenticator;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QAbstractSocket : QIODevice
{
    public enum SocketType {
        TcpSocket = 0,
        UdpSocket = 1,
        UnknownSocketType = -1
    }

    alias SocketType.TcpSocket TcpSocket;
    alias SocketType.UdpSocket UdpSocket;
    alias SocketType.UnknownSocketType UnknownSocketType;

    public enum SocketError {
        ConnectionRefusedError = 0,
        RemoteHostClosedError = 1,
        HostNotFoundError = 2,
        SocketAccessError = 3,
        SocketResourceError = 4,
        SocketTimeoutError = 5,
        DatagramTooLargeError = 6,
        NetworkError = 7,
        AddressInUseError = 8,
        SocketAddressNotAvailableError = 9,
        UnsupportedSocketOperationError = 10,
        UnfinishedSocketOperationError = 11,
        ProxyAuthenticationRequiredError = 12,
        SslHandshakeFailedError = 13,
        ProxyConnectionRefusedError = 14,
        ProxyConnectionClosedError = 15,
        ProxyConnectionTimeoutError = 16,
        ProxyNotFoundError = 17,
        ProxyProtocolError = 18,
        UnknownSocketError = -1
    }

    alias SocketError.ConnectionRefusedError ConnectionRefusedError;
    alias SocketError.RemoteHostClosedError RemoteHostClosedError;
    alias SocketError.HostNotFoundError HostNotFoundError;
    alias SocketError.SocketAccessError SocketAccessError;
    alias SocketError.SocketResourceError SocketResourceError;
    alias SocketError.SocketTimeoutError SocketTimeoutError;
    alias SocketError.DatagramTooLargeError DatagramTooLargeError;
    alias SocketError.NetworkError NetworkError;
    alias SocketError.AddressInUseError AddressInUseError;
    alias SocketError.SocketAddressNotAvailableError SocketAddressNotAvailableError;
    alias SocketError.UnsupportedSocketOperationError UnsupportedSocketOperationError;
    alias SocketError.UnfinishedSocketOperationError UnfinishedSocketOperationError;
    alias SocketError.ProxyAuthenticationRequiredError ProxyAuthenticationRequiredError;
    alias SocketError.SslHandshakeFailedError SslHandshakeFailedError;
    alias SocketError.ProxyConnectionRefusedError ProxyConnectionRefusedError;
    alias SocketError.ProxyConnectionClosedError ProxyConnectionClosedError;
    alias SocketError.ProxyConnectionTimeoutError ProxyConnectionTimeoutError;
    alias SocketError.ProxyNotFoundError ProxyNotFoundError;
    alias SocketError.ProxyProtocolError ProxyProtocolError;
    alias SocketError.UnknownSocketError UnknownSocketError;

    public enum NetworkLayerProtocol {
        IPv4Protocol = 0,
        IPv6Protocol = 1,
        UnknownNetworkLayerProtocol = -1
    }

    alias NetworkLayerProtocol.IPv4Protocol IPv4Protocol;
    alias NetworkLayerProtocol.IPv6Protocol IPv6Protocol;
    alias NetworkLayerProtocol.UnknownNetworkLayerProtocol UnknownNetworkLayerProtocol;

    public enum SocketState {
        UnconnectedState = 0,
        HostLookupState = 1,
        ConnectingState = 2,
        ConnectedState = 3,
        BoundState = 4,
        ListeningState = 5,
        ClosingState = 6
    }

    alias SocketState.UnconnectedState UnconnectedState;
    alias SocketState.HostLookupState HostLookupState;
    alias SocketState.ConnectingState ConnectingState;
    alias SocketState.ConnectedState ConnectedState;
    alias SocketState.BoundState BoundState;
    alias SocketState.ListeningState ListeningState;
    alias SocketState.ClosingState ClosingState;


    private static const string[] __signalSignatures = [
            "connected()", 
            "disconnected()", 
            "error(QAbstractSocket::SocketError)", 
            "hostFound()", 
            "proxyAuthenticationRequired(QNetworkProxy,QAuthenticator*)", 
            "stateChanged(QAbstractSocket::SocketState)"    ];

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

    protected final void connected() {
        qtd_QAbstractSocket_connected(qtdNativeId);
    }

    protected final void disconnected() {
        qtd_QAbstractSocket_disconnected(qtdNativeId);
    }

    protected final void error(QAbstractSocket.SocketError arg__1) {
        qtd_QAbstractSocket_error_SocketError(qtdNativeId, arg__1);
    }

    protected final void hostFound() {
        qtd_QAbstractSocket_hostFound(qtdNativeId);
    }

    protected final void proxyAuthenticationRequired(const(QNetworkProxy) proxy, QAuthenticator authenticator) {
        qtd_QAbstractSocket_proxyAuthenticationRequired_QNetworkProxy_nativepointerQAuthenticator(qtdNativeId, proxy is null ? null : (cast(QNetworkProxy)proxy).qtdNativeId, authenticator is null ? null : authenticator.qtdNativeId);
    }

    protected final void stateChanged(QAbstractSocket.SocketState arg__1) {
        qtd_QAbstractSocket_stateChanged_SocketState(qtdNativeId, arg__1);
    }
// Functions

    public this(QAbstractSocket.SocketType socketType, QObject parent_) {
        void* ret = qtd_QAbstractSocket_QAbstractSocket_SocketType_QObject(cast(void*) this, socketType, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public void abort() {
        qtd_QAbstractSocket_abort(qtdNativeId);
    }

    public final void connectToHost(const(QHostAddress) address, ushort port, int mode = 3) {
        qtd_QAbstractSocket_connectToHost_QHostAddress_ushort_OpenMode(qtdNativeId, address is null ? null : (cast(QHostAddress)address).qtdNativeId, port, mode);
    }

    public final void connectToHost(string hostName, ushort port, int mode = 3) {
        qtd_QAbstractSocket_connectToHost_string_ushort_OpenMode(qtdNativeId, hostName, port, mode);
    }

    protected void connectToHostImplementation(string hostName, ushort port, int mode = 3) {
        qtd_QAbstractSocket_connectToHostImplementation_string_ushort_OpenMode(qtdNativeId, hostName, port, mode);
    }

    public final void disconnectFromHost() {
        qtd_QAbstractSocket_disconnectFromHost(qtdNativeId);
    }

    protected void disconnectFromHostImplementation() {
        qtd_QAbstractSocket_disconnectFromHostImplementation(qtdNativeId);
    }

    public final QAbstractSocket.SocketError error_() const {
        return cast(QAbstractSocket.SocketError) qtd_QAbstractSocket_error__const(qtdNativeId);
    }

    public bool flush() {
        return qtd_QAbstractSocket_flush(qtdNativeId);
    }

    public final bool isValid() const {
        return qtd_QAbstractSocket_isValid_const(qtdNativeId);
    }

    public final QHostAddress localAddress() const {
        void* ret = qtd_QAbstractSocket_localAddress_const(qtdNativeId);
        QHostAddress __d_return_value = new QHostAddress(ret);
        return __d_return_value;
    }

    public final ushort localPort() const {
        return qtd_QAbstractSocket_localPort_const(qtdNativeId);
    }

    public final QHostAddress peerAddress() const {
        void* ret = qtd_QAbstractSocket_peerAddress_const(qtdNativeId);
        QHostAddress __d_return_value = new QHostAddress(ret);
        return __d_return_value;
    }

    public final string peerName() const {
        string res;
        qtd_QAbstractSocket_peerName_const(qtdNativeId, &res);
        return res;
    }

    public final ushort peerPort() const {
        return qtd_QAbstractSocket_peerPort_const(qtdNativeId);
    }

    public final QNetworkProxy proxy() const {
        void* ret = qtd_QAbstractSocket_proxy_const(qtdNativeId);
        QNetworkProxy __d_return_value = new QNetworkProxy(ret);
        return __d_return_value;
    }

    public final long readBufferSize() const {
        return qtd_QAbstractSocket_readBufferSize_const(qtdNativeId);
    }

    protected final void setLocalAddress(const(QHostAddress) address) {
        qtd_QAbstractSocket_setLocalAddress_QHostAddress(qtdNativeId, address is null ? null : (cast(QHostAddress)address).qtdNativeId);
    }

    protected final void setLocalPort(ushort port) {
        qtd_QAbstractSocket_setLocalPort_ushort(qtdNativeId, port);
    }

    protected final void setPeerAddress(const(QHostAddress) address) {
        qtd_QAbstractSocket_setPeerAddress_QHostAddress(qtdNativeId, address is null ? null : (cast(QHostAddress)address).qtdNativeId);
    }

    protected final void setPeerName(string name) {
        qtd_QAbstractSocket_setPeerName_string(qtdNativeId, name);
    }

    protected final void setPeerPort(ushort port) {
        qtd_QAbstractSocket_setPeerPort_ushort(qtdNativeId, port);
    }

    public final void setProxy(const(QNetworkProxy) networkProxy) {
        qtd_QAbstractSocket_setProxy_QNetworkProxy(qtdNativeId, networkProxy is null ? null : (cast(QNetworkProxy)networkProxy).qtdNativeId);
    }

    public void setReadBufferSize(long size) {
        qtd_QAbstractSocket_setReadBufferSize_long(qtdNativeId, size);
    }

    public bool setSocketDescriptor(int socketDescriptor, QAbstractSocket.SocketState state = QAbstractSocket.SocketState.ConnectedState, int openMode = 3) {
        return qtd_QAbstractSocket_setSocketDescriptor_int_SocketState_OpenMode(qtdNativeId, socketDescriptor, state, openMode);
    }

    protected final void setSocketError(QAbstractSocket.SocketError socketError) {
        qtd_QAbstractSocket_setSocketError_SocketError(qtdNativeId, socketError);
    }

    protected final void setSocketState(QAbstractSocket.SocketState state) {
        qtd_QAbstractSocket_setSocketState_SocketState(qtdNativeId, state);
    }

    public final int socketDescriptor() const {
        return qtd_QAbstractSocket_socketDescriptor_const(qtdNativeId);
    }

    public final QAbstractSocket.SocketType socketType() const {
        return cast(QAbstractSocket.SocketType) qtd_QAbstractSocket_socketType_const(qtdNativeId);
    }

    public final QAbstractSocket.SocketState state() const {
        return cast(QAbstractSocket.SocketState) qtd_QAbstractSocket_state_const(qtdNativeId);
    }

    public bool waitForConnected(int msecs = 30000) {
        return qtd_QAbstractSocket_waitForConnected_int(qtdNativeId, msecs);
    }

    public bool waitForDisconnected(int msecs = 30000) {
        return qtd_QAbstractSocket_waitForDisconnected_int(qtdNativeId, msecs);
    }

    public bool atEnd() const {
        return qtd_QAbstractSocket_atEnd_const(qtdNativeId);
    }

    public long bytesAvailable() const {
        return qtd_QAbstractSocket_bytesAvailable_const(qtdNativeId);
    }

    public long bytesToWrite() const {
        return qtd_QAbstractSocket_bytesToWrite_const(qtdNativeId);
    }

    public bool canReadLine() const {
        return qtd_QAbstractSocket_canReadLine_const(qtdNativeId);
    }

    public void close() {
        qtd_QAbstractSocket_close(qtdNativeId);
    }

    public bool isSequential() const {
        return qtd_QAbstractSocket_isSequential_const(qtdNativeId);
    }

    protected long readData(char* data, long maxlen) {
        return qtd_QAbstractSocket_readData_nativepointerchar_long(qtdNativeId, data, maxlen);
    }

    protected long readLineData(char* data, long maxlen) {
        return qtd_QAbstractSocket_readLineData_nativepointerchar_long(qtdNativeId, data, maxlen);
    }

    public bool waitForBytesWritten(int msecs = 30000) {
        return qtd_QAbstractSocket_waitForBytesWritten_int(qtdNativeId, msecs);
    }

    public bool waitForReadyRead(int msecs = 30000) {
        return qtd_QAbstractSocket_waitForReadyRead_int(qtdNativeId, msecs);
    }

    protected long writeData(const(char*) data, long len) {
        return qtd_QAbstractSocket_writeData_nativepointerchar_long(qtdNativeId, data, len);
    }
// Field accessors
    private static const string[] __slotSignatures = [
            "connectToHostImplementation(QString,unsigned short,QFlags<QIODevice::OpenModeFlag>)", 
            "connectToHostImplementation(QString,unsigned short)", 
            "disconnectFromHostImplementation()"    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QAbstractSocket_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QAbstractSocket);
    }

    static QAbstractSocket __getObject(void* nativeId) {
        return static_cast!(QAbstractSocket)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QAbstractSocket_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QAbstractSocket_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QAbstractSocket(nativeId, initFlags);
        QAbstractSocket.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!()("connected"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!()("disconnected"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(QAbstractSocket.SocketError)("error"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!()("hostFound"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[4]);
        mo.addMethod(new QMetaSignal(signature!(const(QNetworkProxy),QAuthenticator)("proxyAuthenticationRequired"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[5]);
        mo.addMethod(new QMetaSignal(signature!(QAbstractSocket.SocketState)("stateChanged"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[0]);
        mo.addMethod(new QMetaSlot(signature!(string,ushort,int)("connectToHostImplementation"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[1]);
        mo.addMethod(new QMetaSlot(signature!(string,ushort)("connectToHostImplementation"), index));

        index = mo.indexOfMethod_Cpp(__slotSignatures[2]);
        mo.addMethod(new QMetaSlot(signature!()("disconnectFromHostImplementation"), index));

    }

    public alias void __isQtType_QAbstractSocket;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QAbstractSocket_connected(void* __this_nativeId);
private extern(C) void  qtd_QAbstractSocket_disconnected(void* __this_nativeId);
private extern(C) void  qtd_QAbstractSocket_error_SocketError(void* __this_nativeId,
 int arg__1);
private extern(C) void  qtd_QAbstractSocket_hostFound(void* __this_nativeId);
private extern(C) void  qtd_QAbstractSocket_proxyAuthenticationRequired_QNetworkProxy_nativepointerQAuthenticator(void* __this_nativeId,
 void* proxy0,
 void* authenticator1);
private extern(C) void  qtd_QAbstractSocket_stateChanged_SocketState(void* __this_nativeId,
 int arg__1);

// C wrappers
private extern(C) void* qtd_QAbstractSocket_QAbstractSocket_SocketType_QObject(void *d_ptr,
 int socketType0,
 void* parent1);
private extern(C) void  qtd_QAbstractSocket_abort(void* __this_nativeId);
private extern(C) void  qtd_QAbstractSocket_connectToHost_QHostAddress_ushort_OpenMode(void* __this_nativeId,
 void* address0,
 ushort port1,
 int mode2);
private extern(C) void  qtd_QAbstractSocket_connectToHost_string_ushort_OpenMode(void* __this_nativeId,
 string hostName0,
 ushort port1,
 int mode2);
private extern(C) void  qtd_QAbstractSocket_connectToHostImplementation_string_ushort_OpenMode(void* __this_nativeId,
 string hostName0,
 ushort port1,
 int mode2);
private extern(C) void  qtd_QAbstractSocket_disconnectFromHost(void* __this_nativeId);
private extern(C) void  qtd_QAbstractSocket_disconnectFromHostImplementation(void* __this_nativeId);
private extern(C) int  qtd_QAbstractSocket_error__const(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractSocket_flush(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractSocket_isValid_const(void* __this_nativeId);
private extern(C) void*  qtd_QAbstractSocket_localAddress_const(void* __this_nativeId);
private extern(C) ushort  qtd_QAbstractSocket_localPort_const(void* __this_nativeId);
private extern(C) void*  qtd_QAbstractSocket_peerAddress_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractSocket_peerName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) ushort  qtd_QAbstractSocket_peerPort_const(void* __this_nativeId);
private extern(C) void*  qtd_QAbstractSocket_proxy_const(void* __this_nativeId);
private extern(C) long  qtd_QAbstractSocket_readBufferSize_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractSocket_setLocalAddress_QHostAddress(void* __this_nativeId,
 void* address0);
private extern(C) void  qtd_QAbstractSocket_setLocalPort_ushort(void* __this_nativeId,
 ushort port0);
private extern(C) void  qtd_QAbstractSocket_setPeerAddress_QHostAddress(void* __this_nativeId,
 void* address0);
private extern(C) void  qtd_QAbstractSocket_setPeerName_string(void* __this_nativeId,
 string name0);
private extern(C) void  qtd_QAbstractSocket_setPeerPort_ushort(void* __this_nativeId,
 ushort port0);
private extern(C) void  qtd_QAbstractSocket_setProxy_QNetworkProxy(void* __this_nativeId,
 void* networkProxy0);
private extern(C) void  qtd_QAbstractSocket_setReadBufferSize_long(void* __this_nativeId,
 long size0);
private extern(C) bool  qtd_QAbstractSocket_setSocketDescriptor_int_SocketState_OpenMode(void* __this_nativeId,
 int socketDescriptor0,
 int state1,
 int openMode2);
private extern(C) void  qtd_QAbstractSocket_setSocketError_SocketError(void* __this_nativeId,
 int socketError0);
private extern(C) void  qtd_QAbstractSocket_setSocketState_SocketState(void* __this_nativeId,
 int state0);
private extern(C) int  qtd_QAbstractSocket_socketDescriptor_const(void* __this_nativeId);
private extern(C) int  qtd_QAbstractSocket_socketType_const(void* __this_nativeId);
private extern(C) int  qtd_QAbstractSocket_state_const(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractSocket_waitForConnected_int(void* __this_nativeId,
 int msecs0);
private extern(C) bool  qtd_QAbstractSocket_waitForDisconnected_int(void* __this_nativeId,
 int msecs0);
private extern(C) bool  qtd_QAbstractSocket_atEnd_const(void* __this_nativeId);
private extern(C) long  qtd_QAbstractSocket_bytesAvailable_const(void* __this_nativeId);
private extern(C) long  qtd_QAbstractSocket_bytesToWrite_const(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractSocket_canReadLine_const(void* __this_nativeId);
private extern(C) void  qtd_QAbstractSocket_close(void* __this_nativeId);
private extern(C) bool  qtd_QAbstractSocket_isSequential_const(void* __this_nativeId);
private extern(C) long  qtd_QAbstractSocket_readData_nativepointerchar_long(void* __this_nativeId,
 char* data0,
 long maxlen1);
private extern(C) long  qtd_QAbstractSocket_readLineData_nativepointerchar_long(void* __this_nativeId,
 char* data0,
 long maxlen1);
private extern(C) bool  qtd_QAbstractSocket_waitForBytesWritten_int(void* __this_nativeId,
 int msecs0);
private extern(C) bool  qtd_QAbstractSocket_waitForReadyRead_int(void* __this_nativeId,
 int msecs0);
private extern(C) long  qtd_QAbstractSocket_writeData_nativepointerchar_long(void* __this_nativeId,
 const (char*) data0,
 long len1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, wchar* hostName0, int hostName0_size, ushort port1, int mode2) qtd_QAbstractSocket_connectToHostImplementation_string_ushort_OpenMode_dispatch; }
extern(C) void qtd_export_QAbstractSocket_connectToHostImplementation_string_ushort_OpenMode_dispatch(void *dId, wchar* hostName0, int hostName0_size, ushort port1, int mode2){
    auto d_object = cast(QAbstractSocket) dId;
    string hostName0_d_ref = toUTF8(hostName0[0..hostName0_size]);
    d_object.connectToHostImplementation(hostName0_d_ref, port1, mode2);
}

private extern (C) void qtd_QAbstractSocket_initCallBacks(void* virtuals);

extern(C) void static_init_QAbstractSocket() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QAbstractSocket_connectToHostImplementation_string_ushort_OpenMode_dispatch;
    qtd_QAbstractSocket_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QAbstractSocket_aboutToClose_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractSocket) dId;
        //d_object.aboutToClose_emit();
}*/
/*private extern(C) void qtd_QAbstractSocket_bytesWritten_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractSocket) dId;
        auto bytes0 = *(cast(long*)args[1]);
        //d_object.bytesWritten_emit(bytes0);
}*/
/*private extern(C) void qtd_QAbstractSocket_readChannelFinished_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractSocket) dId;
        //d_object.readChannelFinished_emit();
}*/
/*private extern(C) void qtd_QAbstractSocket_readyRead_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractSocket) dId;
        //d_object.readyRead_emit();
}*/
/*private extern(C) void qtd_QAbstractSocket_connected_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractSocket) dId;
        //d_object.connected_emit();
}*/
/*private extern(C) void qtd_QAbstractSocket_disconnected_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractSocket) dId;
        //d_object.disconnected_emit();
}*/
/*private extern(C) void qtd_QAbstractSocket_error_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractSocket) dId;
        auto arg__1 = *(cast(QAbstractSocket.SocketError*)args[1]);
        //d_object.error_emit(arg__1);
}*/
/*private extern(C) void qtd_QAbstractSocket_hostFound_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractSocket) dId;
        //d_object.hostFound_emit();
}*/
/*private extern(C) void qtd_QAbstractSocket_proxyAuthenticationRequired_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractSocket) dId;
        scope proxy0 = new QNetworkProxy(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        scope authenticator1 = new QAuthenticator(cast(void*)(args[2]), QtdObjectInitFlags.onStack);

        //d_object.proxyAuthenticationRequired_emit(proxy0, authenticator1);
}*/
/*private extern(C) void qtd_QAbstractSocket_stateChanged_handle(void* dId, void** args) {
        auto d_object = cast(QAbstractSocket) dId;
        auto arg__1 = *(cast(QAbstractSocket.SocketState*)args[1]);
        //d_object.stateChanged_emit(arg__1);
}*/

extern(C) QMetaObjectNative* qtd_QAbstractSocket_staticMetaObject();

extern(C) void qtd_QAbstractSocket_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QAbstractSocket_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
