module qt.network.QUdpSocket;

public import qt.network.QUdpSocket_aux;
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
public import qt.network.QAbstractSocket;
public import qt.core.QObject;
public import qt.network.QNetworkProxy;
public import qt.network.QAbstractSocket;
public import qt.network.QHostAddress;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.network.QAuthenticator;
public import qt.core.QByteArray;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QUdpSocket : QAbstractSocket
{
    public enum BindFlag {
        DefaultForPlatform = 0,
        ShareAddress = 1,
        DontShareAddress = 2,
        ReuseAddressHint = 4
    }

    alias BindFlag.DefaultForPlatform DefaultForPlatform;
    alias BindFlag.ShareAddress ShareAddress;
    alias BindFlag.DontShareAddress DontShareAddress;
    alias BindFlag.ReuseAddressHint ReuseAddressHint;


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
        void* ret = qtd_QUdpSocket_QUdpSocket_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final bool bind(const(QHostAddress) address, ushort port) {
        return qtd_QUdpSocket_bind_QHostAddress_ushort(qtdNativeId, address is null ? null : (cast(QHostAddress)address).qtdNativeId, port);
    }

    public final bool bind(const(QHostAddress) address, ushort port, int mode) {
        return qtd_QUdpSocket_bind_QHostAddress_ushort_BindMode(qtdNativeId, address is null ? null : (cast(QHostAddress)address).qtdNativeId, port, mode);
    }

    public final bool bind(ushort port = 0) {
        return qtd_QUdpSocket_bind_ushort(qtdNativeId, port);
    }

    public final bool bind(ushort port, int mode) {
        return qtd_QUdpSocket_bind_ushort_BindMode(qtdNativeId, port, mode);
    }

    public final bool hasPendingDatagrams() const {
        return qtd_QUdpSocket_hasPendingDatagrams_const(qtdNativeId);
    }

    public final long pendingDatagramSize() const {
        return qtd_QUdpSocket_pendingDatagramSize_const(qtdNativeId);
    }

    public final long readDatagram(char* data, long maxlen, QHostAddress host = null, ushort* port = null) {
        return qtd_QUdpSocket_readDatagram_nativepointerchar_long_nativepointerQHostAddress_nativepointerushort(qtdNativeId, data, maxlen, host is null ? null : host.qtdNativeId, port);
    }

    public final long writeDatagram(const(QByteArray) datagram, const(QHostAddress) host, ushort port) {
        return qtd_QUdpSocket_writeDatagram_QByteArray_QHostAddress_ushort(qtdNativeId, datagram is null ? null : (cast(QByteArray)datagram).qtdNativeId, host is null ? null : (cast(QHostAddress)host).qtdNativeId, port);
    }

    public final long writeDatagram(const(char*) data, long len, const(QHostAddress) host, ushort port) {
        return qtd_QUdpSocket_writeDatagram_nativepointerchar_long_QHostAddress_ushort(qtdNativeId, data, len, host is null ? null : (cast(QHostAddress)host).qtdNativeId, port);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QUdpSocket_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QUdpSocket);
    }

    static QUdpSocket __getObject(void* nativeId) {
        return static_cast!(QUdpSocket)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QUdpSocket_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QUdpSocket_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QUdpSocket(nativeId, initFlags);
        QUdpSocket.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QUdpSocket;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QUdpSocket_QUdpSocket_QObject(void *d_ptr,
 void* parent0);
private extern(C) bool  qtd_QUdpSocket_bind_QHostAddress_ushort(void* __this_nativeId,
 void* address0,
 ushort port1);
private extern(C) bool  qtd_QUdpSocket_bind_QHostAddress_ushort_BindMode(void* __this_nativeId,
 void* address0,
 ushort port1,
 int mode2);
private extern(C) bool  qtd_QUdpSocket_bind_ushort(void* __this_nativeId,
 ushort port0);
private extern(C) bool  qtd_QUdpSocket_bind_ushort_BindMode(void* __this_nativeId,
 ushort port0,
 int mode1);
private extern(C) bool  qtd_QUdpSocket_hasPendingDatagrams_const(void* __this_nativeId);
private extern(C) long  qtd_QUdpSocket_pendingDatagramSize_const(void* __this_nativeId);
private extern(C) long  qtd_QUdpSocket_readDatagram_nativepointerchar_long_nativepointerQHostAddress_nativepointerushort(void* __this_nativeId,
 char* data0,
 long maxlen1,
 void* host2,
 ushort* port3);
private extern(C) long  qtd_QUdpSocket_writeDatagram_QByteArray_QHostAddress_ushort(void* __this_nativeId,
 void* datagram0,
 void* host1,
 ushort port2);
private extern(C) long  qtd_QUdpSocket_writeDatagram_nativepointerchar_long_QHostAddress_ushort(void* __this_nativeId,
 const (char*) data0,
 long len1,
 void* host2,
 ushort port3);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QUdpSocket_initCallBacks(void* virtuals);

extern(C) void static_init_QUdpSocket() {
    qtd_QUdpSocket_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QUdpSocket_aboutToClose_handle(void* dId, void** args) {
        auto d_object = cast(QUdpSocket) dId;
        //d_object.aboutToClose_emit();
}*/
/*private extern(C) void qtd_QUdpSocket_bytesWritten_handle(void* dId, void** args) {
        auto d_object = cast(QUdpSocket) dId;
        auto bytes0 = *(cast(long*)args[1]);
        //d_object.bytesWritten_emit(bytes0);
}*/
/*private extern(C) void qtd_QUdpSocket_readChannelFinished_handle(void* dId, void** args) {
        auto d_object = cast(QUdpSocket) dId;
        //d_object.readChannelFinished_emit();
}*/
/*private extern(C) void qtd_QUdpSocket_readyRead_handle(void* dId, void** args) {
        auto d_object = cast(QUdpSocket) dId;
        //d_object.readyRead_emit();
}*/
/*private extern(C) void qtd_QUdpSocket_connected_handle(void* dId, void** args) {
        auto d_object = cast(QUdpSocket) dId;
        //d_object.connected_emit();
}*/
/*private extern(C) void qtd_QUdpSocket_disconnected_handle(void* dId, void** args) {
        auto d_object = cast(QUdpSocket) dId;
        //d_object.disconnected_emit();
}*/
/*private extern(C) void qtd_QUdpSocket_error_handle(void* dId, void** args) {
        auto d_object = cast(QUdpSocket) dId;
        auto arg__1 = *(cast(QAbstractSocket.SocketError*)args[1]);
        //d_object.error_emit(arg__1);
}*/
/*private extern(C) void qtd_QUdpSocket_hostFound_handle(void* dId, void** args) {
        auto d_object = cast(QUdpSocket) dId;
        //d_object.hostFound_emit();
}*/
/*private extern(C) void qtd_QUdpSocket_proxyAuthenticationRequired_handle(void* dId, void** args) {
        auto d_object = cast(QUdpSocket) dId;
        scope proxy0 = new QNetworkProxy(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        scope authenticator1 = new QAuthenticator(cast(void*)(args[2]), QtdObjectInitFlags.onStack);

        //d_object.proxyAuthenticationRequired_emit(proxy0, authenticator1);
}*/
/*private extern(C) void qtd_QUdpSocket_stateChanged_handle(void* dId, void** args) {
        auto d_object = cast(QUdpSocket) dId;
        auto arg__1 = *(cast(QAbstractSocket.SocketState*)args[1]);
        //d_object.stateChanged_emit(arg__1);
}*/

extern(C) QMetaObjectNative* qtd_QUdpSocket_staticMetaObject();

extern(C) void qtd_QUdpSocket_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QUdpSocket_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
