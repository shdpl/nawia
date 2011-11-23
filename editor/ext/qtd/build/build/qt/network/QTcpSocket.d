module qt.network.QTcpSocket;

public import qt.network.QTcpSocket_aux;
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
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.network.QAuthenticator;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTcpSocket : QAbstractSocket
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
        void* ret = qtd_QTcpSocket_QTcpSocket_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }

// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QTcpSocket_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QTcpSocket);
    }

    static QTcpSocket __getObject(void* nativeId) {
        return static_cast!(QTcpSocket)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QTcpSocket_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QTcpSocket_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QTcpSocket(nativeId, initFlags);
        QTcpSocket.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QTcpSocket;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QTcpSocket_QTcpSocket_QObject(void *d_ptr,
 void* parent0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
private extern (C) void qtd_QTcpSocket_initCallBacks(void* virtuals);

extern(C) void static_init_QTcpSocket() {
    qtd_QTcpSocket_initCallBacks(null);
}

// signal handlers
/*private extern(C) void qtd_QTcpSocket_aboutToClose_handle(void* dId, void** args) {
        auto d_object = cast(QTcpSocket) dId;
        //d_object.aboutToClose_emit();
}*/
/*private extern(C) void qtd_QTcpSocket_bytesWritten_handle(void* dId, void** args) {
        auto d_object = cast(QTcpSocket) dId;
        auto bytes0 = *(cast(long*)args[1]);
        //d_object.bytesWritten_emit(bytes0);
}*/
/*private extern(C) void qtd_QTcpSocket_readChannelFinished_handle(void* dId, void** args) {
        auto d_object = cast(QTcpSocket) dId;
        //d_object.readChannelFinished_emit();
}*/
/*private extern(C) void qtd_QTcpSocket_readyRead_handle(void* dId, void** args) {
        auto d_object = cast(QTcpSocket) dId;
        //d_object.readyRead_emit();
}*/
/*private extern(C) void qtd_QTcpSocket_connected_handle(void* dId, void** args) {
        auto d_object = cast(QTcpSocket) dId;
        //d_object.connected_emit();
}*/
/*private extern(C) void qtd_QTcpSocket_disconnected_handle(void* dId, void** args) {
        auto d_object = cast(QTcpSocket) dId;
        //d_object.disconnected_emit();
}*/
/*private extern(C) void qtd_QTcpSocket_error_handle(void* dId, void** args) {
        auto d_object = cast(QTcpSocket) dId;
        auto arg__1 = *(cast(QAbstractSocket.SocketError*)args[1]);
        //d_object.error_emit(arg__1);
}*/
/*private extern(C) void qtd_QTcpSocket_hostFound_handle(void* dId, void** args) {
        auto d_object = cast(QTcpSocket) dId;
        //d_object.hostFound_emit();
}*/
/*private extern(C) void qtd_QTcpSocket_proxyAuthenticationRequired_handle(void* dId, void** args) {
        auto d_object = cast(QTcpSocket) dId;
        scope proxy0 = new QNetworkProxy(cast(void*)(args[1]), QtdObjectInitFlags.onStack);

        scope authenticator1 = new QAuthenticator(cast(void*)(args[2]), QtdObjectInitFlags.onStack);

        //d_object.proxyAuthenticationRequired_emit(proxy0, authenticator1);
}*/
/*private extern(C) void qtd_QTcpSocket_stateChanged_handle(void* dId, void** args) {
        auto d_object = cast(QTcpSocket) dId;
        auto arg__1 = *(cast(QAbstractSocket.SocketState*)args[1]);
        //d_object.stateChanged_emit(arg__1);
}*/

extern(C) QMetaObjectNative* qtd_QTcpSocket_staticMetaObject();

extern(C) void qtd_QTcpSocket_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QTcpSocket_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
