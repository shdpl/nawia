module qt.network.QTcpServer;

public import qt.network.QTcpServer_aux;
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
public import qt.network.QTcpSocket;
public import qt.core.QObject;
public import qt.network.QNetworkProxy;
public import qt.network.QHostAddress;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QTcpServer : QObject
{

    private static const string[] __signalSignatures = [
            "newConnection()"    ];

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

    protected final void newConnection() {
        qtd_QTcpServer_newConnection(qtdNativeId);
    }
// Functions

    public this(QObject parent_ = null) {
        void* ret = qtd_QTcpServer_QTcpServer_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected final void addPendingConnection(QTcpSocket socket) {
        qtd_QTcpServer_addPendingConnection_QTcpSocket(qtdNativeId, socket is null ? null : socket.qtdNativeId);
    }

    public final void close() {
        qtd_QTcpServer_close(qtdNativeId);
    }

    public final string errorString() const {
        string res;
        qtd_QTcpServer_errorString_const(qtdNativeId, &res);
        return res;
    }

    public final bool isListening() const {
        return qtd_QTcpServer_isListening_const(qtdNativeId);
    }

    public final bool listen(const(QHostAddress) address = new QHostAddress(QHostAddress.Any), ushort port = 0) {
        return qtd_QTcpServer_listen_QHostAddress_ushort(qtdNativeId, address is null ? null : (cast(QHostAddress)address).qtdNativeId, port);
    }

    public final int maxPendingConnections() const {
        return qtd_QTcpServer_maxPendingConnections_const(qtdNativeId);
    }

    public final QNetworkProxy proxy() const {
        void* ret = qtd_QTcpServer_proxy_const(qtdNativeId);
        QNetworkProxy __d_return_value = new QNetworkProxy(ret);
        return __d_return_value;
    }

    public final QHostAddress serverAddress() const {
        void* ret = qtd_QTcpServer_serverAddress_const(qtdNativeId);
        QHostAddress __d_return_value = new QHostAddress(ret);
        return __d_return_value;
    }

    public final QAbstractSocket.SocketError serverError() const {
        return cast(QAbstractSocket.SocketError) qtd_QTcpServer_serverError_const(qtdNativeId);
    }

    public final ushort serverPort() const {
        return qtd_QTcpServer_serverPort_const(qtdNativeId);
    }

    public final void setMaxPendingConnections(int numConnections) {
        qtd_QTcpServer_setMaxPendingConnections_int(qtdNativeId, numConnections);
    }

    public final void setProxy(const(QNetworkProxy) networkProxy) {
        qtd_QTcpServer_setProxy_QNetworkProxy(qtdNativeId, networkProxy is null ? null : (cast(QNetworkProxy)networkProxy).qtdNativeId);
    }

    public final bool setSocketDescriptor(int socketDescriptor) {
        return qtd_QTcpServer_setSocketDescriptor_int(qtdNativeId, socketDescriptor);
    }

    public final int socketDescriptor() const {
        return qtd_QTcpServer_socketDescriptor_const(qtdNativeId);
    }

    public final bool waitForNewConnection(int msec = 0, bool* timedOut = null) {
        return qtd_QTcpServer_waitForNewConnection_int_nativepointerbool(qtdNativeId, msec, timedOut);
    }

    public bool hasPendingConnections() const {
        return qtd_QTcpServer_hasPendingConnections_const(qtdNativeId);
    }

    protected void incomingConnection(int handle) {
        qtd_QTcpServer_incomingConnection_int(qtdNativeId, handle);
    }

    public QTcpSocket nextPendingConnection() {
        void *ret = qtd_QTcpServer_nextPendingConnection(qtdNativeId);
        QTcpSocket __d_return_value = QTcpSocket.__getObject(ret);
        return __d_return_value;
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QTcpServer_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QTcpServer);
    }

    static QTcpServer __getObject(void* nativeId) {
        return static_cast!(QTcpServer)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QTcpServer_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QTcpServer_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QTcpServer(nativeId, initFlags);
        QTcpServer.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!()("newConnection"), index));

    }

    public alias void __isQtType_QTcpServer;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QTcpServer_newConnection(void* __this_nativeId);

// C wrappers
private extern(C) void* qtd_QTcpServer_QTcpServer_QObject(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QTcpServer_addPendingConnection_QTcpSocket(void* __this_nativeId,
 void* socket0);
private extern(C) void  qtd_QTcpServer_close(void* __this_nativeId);
private extern(C) void  qtd_QTcpServer_errorString_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QTcpServer_isListening_const(void* __this_nativeId);
private extern(C) bool  qtd_QTcpServer_listen_QHostAddress_ushort(void* __this_nativeId,
 void* address0,
 ushort port1);
private extern(C) int  qtd_QTcpServer_maxPendingConnections_const(void* __this_nativeId);
private extern(C) void*  qtd_QTcpServer_proxy_const(void* __this_nativeId);
private extern(C) void*  qtd_QTcpServer_serverAddress_const(void* __this_nativeId);
private extern(C) int  qtd_QTcpServer_serverError_const(void* __this_nativeId);
private extern(C) ushort  qtd_QTcpServer_serverPort_const(void* __this_nativeId);
private extern(C) void  qtd_QTcpServer_setMaxPendingConnections_int(void* __this_nativeId,
 int numConnections0);
private extern(C) void  qtd_QTcpServer_setProxy_QNetworkProxy(void* __this_nativeId,
 void* networkProxy0);
private extern(C) bool  qtd_QTcpServer_setSocketDescriptor_int(void* __this_nativeId,
 int socketDescriptor0);
private extern(C) int  qtd_QTcpServer_socketDescriptor_const(void* __this_nativeId);
private extern(C) bool  qtd_QTcpServer_waitForNewConnection_int_nativepointerbool(void* __this_nativeId,
 int msec0,
 bool* timedOut1);
private extern(C) bool  qtd_QTcpServer_hasPendingConnections_const(void* __this_nativeId);
private extern(C) void  qtd_QTcpServer_incomingConnection_int(void* __this_nativeId,
 int handle0);
private extern(C) void*  qtd_QTcpServer_nextPendingConnection(void* __this_nativeId);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern bool function(void *dId) qtd_QTcpServer_hasPendingConnections_const_dispatch; }
extern(C) bool qtd_export_QTcpServer_hasPendingConnections_const_dispatch(void *dId){
    auto d_object = cast(QTcpServer) dId;
    auto return_value = d_object.hasPendingConnections();
    return return_value;
}

extern(C){ extern void function(void *dId, int handle0) qtd_QTcpServer_incomingConnection_int_dispatch; }
extern(C) void qtd_export_QTcpServer_incomingConnection_int_dispatch(void *dId, int handle0){
    auto d_object = cast(QTcpServer) dId;
    d_object.incomingConnection(handle0);
}

extern(C){ extern void* function(void *dId) qtd_QTcpServer_nextPendingConnection_dispatch; }
extern(C) void* qtd_export_QTcpServer_nextPendingConnection_dispatch(void *dId){
    auto d_object = cast(QTcpServer) dId;
    QTcpSocket ret_value = d_object.nextPendingConnection();
    return ret_value is null? null : ret_value.qtdNativeId;
}

private extern (C) void qtd_QTcpServer_initCallBacks(void* virtuals);

extern(C) void static_init_QTcpServer() {
    void*[3] virt_arr;
    virt_arr[0] = &qtd_export_QTcpServer_hasPendingConnections_const_dispatch;
    virt_arr[1] = &qtd_export_QTcpServer_incomingConnection_int_dispatch;
    virt_arr[2] = &qtd_export_QTcpServer_nextPendingConnection_dispatch;
    qtd_QTcpServer_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QTcpServer_newConnection_handle(void* dId, void** args) {
        auto d_object = cast(QTcpServer) dId;
        //d_object.newConnection_emit();
}*/

extern(C) QMetaObjectNative* qtd_QTcpServer_staticMetaObject();

extern(C) void qtd_QTcpServer_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QTcpServer_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
