module qt.network.QLocalSocket;

public import qt.network.QLocalSocket_aux;
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
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QLocalSocket : QIODevice
{
    public enum LocalSocketState {
        UnconnectedState = 0,
        ConnectingState = 2,
        ConnectedState = 3,
        ClosingState = 6
    }

    alias LocalSocketState.UnconnectedState UnconnectedState;
    alias LocalSocketState.ConnectingState ConnectingState;
    alias LocalSocketState.ConnectedState ConnectedState;
    alias LocalSocketState.ClosingState ClosingState;

    public enum LocalSocketError {
        ConnectionRefusedError = 0,
        PeerClosedError = 1,
        ServerNotFoundError = 2,
        SocketAccessError = 3,
        SocketResourceError = 4,
        SocketTimeoutError = 5,
        DatagramTooLargeError = 6,
        ConnectionError = 7,
        UnsupportedSocketOperationError = 10,
        UnknownSocketError = -1
    }

    alias LocalSocketError.ConnectionRefusedError ConnectionRefusedError;
    alias LocalSocketError.PeerClosedError PeerClosedError;
    alias LocalSocketError.ServerNotFoundError ServerNotFoundError;
    alias LocalSocketError.SocketAccessError SocketAccessError;
    alias LocalSocketError.SocketResourceError SocketResourceError;
    alias LocalSocketError.SocketTimeoutError SocketTimeoutError;
    alias LocalSocketError.DatagramTooLargeError DatagramTooLargeError;
    alias LocalSocketError.ConnectionError ConnectionError;
    alias LocalSocketError.UnsupportedSocketOperationError UnsupportedSocketOperationError;
    alias LocalSocketError.UnknownSocketError UnknownSocketError;


    private static const string[] __signalSignatures = [
            "connected()", 
            "disconnected()", 
            "error(QLocalSocket::LocalSocketError)", 
            "stateChanged(QLocalSocket::LocalSocketState)"    ];

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
        qtd_QLocalSocket_connected(qtdNativeId);
    }

    protected final void disconnected() {
        qtd_QLocalSocket_disconnected(qtdNativeId);
    }

    protected final void error(QLocalSocket.LocalSocketError socketError) {
        qtd_QLocalSocket_error_LocalSocketError(qtdNativeId, socketError);
    }

    protected final void stateChanged(QLocalSocket.LocalSocketState socketState) {
        qtd_QLocalSocket_stateChanged_LocalSocketState(qtdNativeId, socketState);
    }
// Functions

    public this(QObject parent_ = null) {
        void* ret = qtd_QLocalSocket_QLocalSocket_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void abort() {
        qtd_QLocalSocket_abort(qtdNativeId);
    }

    public final void connectToServer(string name, int openMode = 3) {
        qtd_QLocalSocket_connectToServer_string_OpenMode(qtdNativeId, name, openMode);
    }

    public final void disconnectFromServer() {
        qtd_QLocalSocket_disconnectFromServer(qtdNativeId);
    }

    public final QLocalSocket.LocalSocketError error_() const {
        return cast(QLocalSocket.LocalSocketError) qtd_QLocalSocket_error__const(qtdNativeId);
    }

    public final bool flush() {
        return qtd_QLocalSocket_flush(qtdNativeId);
    }

    public final string fullServerName() const {
        string res;
        qtd_QLocalSocket_fullServerName_const(qtdNativeId, &res);
        return res;
    }

    public final bool isValid() const {
        return qtd_QLocalSocket_isValid_const(qtdNativeId);
    }

    public final long readBufferSize() const {
        return qtd_QLocalSocket_readBufferSize_const(qtdNativeId);
    }

    public final string serverName() const {
        string res;
        qtd_QLocalSocket_serverName_const(qtdNativeId, &res);
        return res;
    }

    public final void setReadBufferSize(long size) {
        qtd_QLocalSocket_setReadBufferSize_long(qtdNativeId, size);
    }

    public final bool setSocketDescriptor(quintptr socketDescriptor, QLocalSocket.LocalSocketState socketState = QLocalSocket.LocalSocketState.ConnectedState, int openMode = 3) {
        return qtd_QLocalSocket_setSocketDescriptor_quintptr_LocalSocketState_OpenMode(qtdNativeId, socketDescriptor, socketState, openMode);
    }

    public final quintptr socketDescriptor() const {
        return qtd_QLocalSocket_socketDescriptor_const(qtdNativeId);
    }

    public final QLocalSocket.LocalSocketState state() const {
        return cast(QLocalSocket.LocalSocketState) qtd_QLocalSocket_state_const(qtdNativeId);
    }

    public final bool waitForConnected(int msecs = 30000) {
        return qtd_QLocalSocket_waitForConnected_int(qtdNativeId, msecs);
    }

    public final bool waitForDisconnected(int msecs = 30000) {
        return qtd_QLocalSocket_waitForDisconnected_int(qtdNativeId, msecs);
    }

    public long bytesAvailable() const {
        return qtd_QLocalSocket_bytesAvailable_const(qtdNativeId);
    }

    public long bytesToWrite() const {
        return qtd_QLocalSocket_bytesToWrite_const(qtdNativeId);
    }

    public bool canReadLine() const {
        return qtd_QLocalSocket_canReadLine_const(qtdNativeId);
    }

    public void close() {
        qtd_QLocalSocket_close(qtdNativeId);
    }

    public bool isSequential() const {
        return qtd_QLocalSocket_isSequential_const(qtdNativeId);
    }

    protected long readData(char* arg__1, long arg__2) {
        return qtd_QLocalSocket_readData_nativepointerchar_long(qtdNativeId, arg__1, arg__2);
    }

    public bool waitForBytesWritten(int msecs = 30000) {
        return qtd_QLocalSocket_waitForBytesWritten_int(qtdNativeId, msecs);
    }

    public bool waitForReadyRead(int msecs = 30000) {
        return qtd_QLocalSocket_waitForReadyRead_int(qtdNativeId, msecs);
    }

    protected long writeData(const(char*) arg__1, long arg__2) {
        return qtd_QLocalSocket_writeData_nativepointerchar_long(qtdNativeId, arg__1, arg__2);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QLocalSocket_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QLocalSocket);
    }

    static QLocalSocket __getObject(void* nativeId) {
        return static_cast!(QLocalSocket)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QLocalSocket_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QLocalSocket_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QLocalSocket(nativeId, initFlags);
        QLocalSocket.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!()("connected"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[1]);
        mo.addMethod(new QMetaSignal(signature!()("disconnected"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[2]);
        mo.addMethod(new QMetaSignal(signature!(QLocalSocket.LocalSocketError)("error"), index));

        index = mo.indexOfMethod_Cpp(__signalSignatures[3]);
        mo.addMethod(new QMetaSignal(signature!(QLocalSocket.LocalSocketState)("stateChanged"), index));

    }

    public alias void __isQtType_QLocalSocket;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QLocalSocket_connected(void* __this_nativeId);
private extern(C) void  qtd_QLocalSocket_disconnected(void* __this_nativeId);
private extern(C) void  qtd_QLocalSocket_error_LocalSocketError(void* __this_nativeId,
 int socketError0);
private extern(C) void  qtd_QLocalSocket_stateChanged_LocalSocketState(void* __this_nativeId,
 int socketState0);

// C wrappers
private extern(C) void* qtd_QLocalSocket_QLocalSocket_QObject(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QLocalSocket_abort(void* __this_nativeId);
private extern(C) void  qtd_QLocalSocket_connectToServer_string_OpenMode(void* __this_nativeId,
 string name0,
 int openMode1);
private extern(C) void  qtd_QLocalSocket_disconnectFromServer(void* __this_nativeId);
private extern(C) int  qtd_QLocalSocket_error__const(void* __this_nativeId);
private extern(C) bool  qtd_QLocalSocket_flush(void* __this_nativeId);
private extern(C) void  qtd_QLocalSocket_fullServerName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QLocalSocket_isValid_const(void* __this_nativeId);
private extern(C) long  qtd_QLocalSocket_readBufferSize_const(void* __this_nativeId);
private extern(C) void  qtd_QLocalSocket_serverName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QLocalSocket_setReadBufferSize_long(void* __this_nativeId,
 long size0);
private extern(C) bool  qtd_QLocalSocket_setSocketDescriptor_quintptr_LocalSocketState_OpenMode(void* __this_nativeId,
 quintptr socketDescriptor0,
 int socketState1,
 int openMode2);
private extern(C) quintptr  qtd_QLocalSocket_socketDescriptor_const(void* __this_nativeId);
private extern(C) int  qtd_QLocalSocket_state_const(void* __this_nativeId);
private extern(C) bool  qtd_QLocalSocket_waitForConnected_int(void* __this_nativeId,
 int msecs0);
private extern(C) bool  qtd_QLocalSocket_waitForDisconnected_int(void* __this_nativeId,
 int msecs0);
private extern(C) long  qtd_QLocalSocket_bytesAvailable_const(void* __this_nativeId);
private extern(C) long  qtd_QLocalSocket_bytesToWrite_const(void* __this_nativeId);
private extern(C) bool  qtd_QLocalSocket_canReadLine_const(void* __this_nativeId);
private extern(C) void  qtd_QLocalSocket_close(void* __this_nativeId);
private extern(C) bool  qtd_QLocalSocket_isSequential_const(void* __this_nativeId);
private extern(C) long  qtd_QLocalSocket_readData_nativepointerchar_long(void* __this_nativeId,
 char* arg__1,
 long arg__2);
private extern(C) bool  qtd_QLocalSocket_waitForBytesWritten_int(void* __this_nativeId,
 int msecs0);
private extern(C) bool  qtd_QLocalSocket_waitForReadyRead_int(void* __this_nativeId,
 int msecs0);
private extern(C) long  qtd_QLocalSocket_writeData_nativepointerchar_long(void* __this_nativeId,
 const (char*) arg__1,
 long arg__2);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QLocalSocket_initCallBacks(void* virtuals);

extern(C) void static_init_QLocalSocket() {
    qtd_QLocalSocket_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QLocalSocket_aboutToClose_handle(void* dId, void** args) {
        auto d_object = cast(QLocalSocket) dId;
        //d_object.aboutToClose_emit();
}*/
/*private extern(C) void qtd_QLocalSocket_bytesWritten_handle(void* dId, void** args) {
        auto d_object = cast(QLocalSocket) dId;
        auto bytes0 = *(cast(long*)args[1]);
        //d_object.bytesWritten_emit(bytes0);
}*/
/*private extern(C) void qtd_QLocalSocket_readChannelFinished_handle(void* dId, void** args) {
        auto d_object = cast(QLocalSocket) dId;
        //d_object.readChannelFinished_emit();
}*/
/*private extern(C) void qtd_QLocalSocket_readyRead_handle(void* dId, void** args) {
        auto d_object = cast(QLocalSocket) dId;
        //d_object.readyRead_emit();
}*/
/*private extern(C) void qtd_QLocalSocket_connected_handle(void* dId, void** args) {
        auto d_object = cast(QLocalSocket) dId;
        //d_object.connected_emit();
}*/
/*private extern(C) void qtd_QLocalSocket_disconnected_handle(void* dId, void** args) {
        auto d_object = cast(QLocalSocket) dId;
        //d_object.disconnected_emit();
}*/
/*private extern(C) void qtd_QLocalSocket_error_handle(void* dId, void** args) {
        auto d_object = cast(QLocalSocket) dId;
        auto socketError0 = *(cast(QLocalSocket.LocalSocketError*)args[1]);
        //d_object.error_emit(socketError0);
}*/
/*private extern(C) void qtd_QLocalSocket_stateChanged_handle(void* dId, void** args) {
        auto d_object = cast(QLocalSocket) dId;
        auto socketState0 = *(cast(QLocalSocket.LocalSocketState*)args[1]);
        //d_object.stateChanged_emit(socketState0);
}*/

extern(C) QMetaObjectNative* qtd_QLocalSocket_staticMetaObject();

extern(C) void qtd_QLocalSocket_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QLocalSocket_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
