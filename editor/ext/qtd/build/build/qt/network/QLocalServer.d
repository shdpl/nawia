module qt.network.QLocalServer;

public import qt.network.QLocalServer_aux;
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
public import qt.network.QLocalSocket;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QLocalServer : QObject
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
        qtd_QLocalServer_newConnection(qtdNativeId);
    }
// Functions

    public this(QObject parent_ = null) {
        void* ret = qtd_QLocalServer_QLocalServer_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public final void close() {
        qtd_QLocalServer_close(qtdNativeId);
    }

    public final string errorString() const {
        string res;
        qtd_QLocalServer_errorString_const(qtdNativeId, &res);
        return res;
    }

    public final string fullServerName() const {
        string res;
        qtd_QLocalServer_fullServerName_const(qtdNativeId, &res);
        return res;
    }

    public final bool isListening() const {
        return qtd_QLocalServer_isListening_const(qtdNativeId);
    }

    public final bool listen(string name) {
        return qtd_QLocalServer_listen_string(qtdNativeId, name);
    }

    public final int maxPendingConnections() const {
        return qtd_QLocalServer_maxPendingConnections_const(qtdNativeId);
    }

    public final QAbstractSocket.SocketError serverError() const {
        return cast(QAbstractSocket.SocketError) qtd_QLocalServer_serverError_const(qtdNativeId);
    }

    public final string serverName() const {
        string res;
        qtd_QLocalServer_serverName_const(qtdNativeId, &res);
        return res;
    }

    public final void setMaxPendingConnections(int numConnections) {
        qtd_QLocalServer_setMaxPendingConnections_int(qtdNativeId, numConnections);
    }

    public final bool waitForNewConnection(int msec = 0, bool* timedOut = null) {
        return qtd_QLocalServer_waitForNewConnection_int_nativepointerbool(qtdNativeId, msec, timedOut);
    }

    public bool hasPendingConnections() const {
        return qtd_QLocalServer_hasPendingConnections_const(qtdNativeId);
    }

    protected void incomingConnection(quintptr socketDescriptor) {
        qtd_QLocalServer_incomingConnection_quintptr(qtdNativeId, socketDescriptor);
    }

    public QLocalSocket nextPendingConnection() {
        void *ret = qtd_QLocalServer_nextPendingConnection(qtdNativeId);
        QLocalSocket __d_return_value = QLocalSocket.__getObject(ret);
        return __d_return_value;
    }

    public static bool removeServer(string name) {
        return qtd_QLocalServer_removeServer_string(name);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QLocalServer_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QLocalServer);
    }

    static QLocalServer __getObject(void* nativeId) {
        return static_cast!(QLocalServer)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QLocalServer_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QLocalServer_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QLocalServer(nativeId, initFlags);
        QLocalServer.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

        index = mo.indexOfMethod_Cpp(__signalSignatures[0]);
        mo.addMethod(new QMetaSignal(signature!()("newConnection"), index));

    }

    public alias void __isQtType_QLocalServer;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters
private extern(C) void  qtd_QLocalServer_newConnection(void* __this_nativeId);

// C wrappers
private extern(C) void* qtd_QLocalServer_QLocalServer_QObject(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QLocalServer_close(void* __this_nativeId);
private extern(C) void  qtd_QLocalServer_errorString_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QLocalServer_fullServerName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) bool  qtd_QLocalServer_isListening_const(void* __this_nativeId);
private extern(C) bool  qtd_QLocalServer_listen_string(void* __this_nativeId,
 string name0);
private extern(C) int  qtd_QLocalServer_maxPendingConnections_const(void* __this_nativeId);
private extern(C) int  qtd_QLocalServer_serverError_const(void* __this_nativeId);
private extern(C) void  qtd_QLocalServer_serverName_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QLocalServer_setMaxPendingConnections_int(void* __this_nativeId,
 int numConnections0);
private extern(C) bool  qtd_QLocalServer_waitForNewConnection_int_nativepointerbool(void* __this_nativeId,
 int msec0,
 bool* timedOut1);
private extern(C) bool  qtd_QLocalServer_hasPendingConnections_const(void* __this_nativeId);
private extern(C) void  qtd_QLocalServer_incomingConnection_quintptr(void* __this_nativeId,
 quintptr socketDescriptor0);
private extern(C) void*  qtd_QLocalServer_nextPendingConnection(void* __this_nativeId);
private extern(C) bool  qtd_QLocalServer_removeServer_string(string name0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern bool function(void *dId) qtd_QLocalServer_hasPendingConnections_const_dispatch; }
extern(C) bool qtd_export_QLocalServer_hasPendingConnections_const_dispatch(void *dId){
    auto d_object = cast(QLocalServer) dId;
    auto return_value = d_object.hasPendingConnections();
    return return_value;
}

extern(C){ extern void function(void *dId, quintptr socketDescriptor0) qtd_QLocalServer_incomingConnection_quintptr_dispatch; }
extern(C) void qtd_export_QLocalServer_incomingConnection_quintptr_dispatch(void *dId, quintptr socketDescriptor0){
    auto d_object = cast(QLocalServer) dId;
    d_object.incomingConnection(socketDescriptor0);
}

extern(C){ extern void* function(void *dId) qtd_QLocalServer_nextPendingConnection_dispatch; }
extern(C) void* qtd_export_QLocalServer_nextPendingConnection_dispatch(void *dId){
    auto d_object = cast(QLocalServer) dId;
    QLocalSocket ret_value = d_object.nextPendingConnection();
    return ret_value is null? null : ret_value.qtdNativeId;
}

private extern (C) void qtd_QLocalServer_initCallBacks(void* virtuals);

extern(C) void static_init_QLocalServer() {
    void*[3] virt_arr;
    virt_arr[0] = &qtd_export_QLocalServer_hasPendingConnections_const_dispatch;
    virt_arr[1] = &qtd_export_QLocalServer_incomingConnection_quintptr_dispatch;
    virt_arr[2] = &qtd_export_QLocalServer_nextPendingConnection_dispatch;
    qtd_QLocalServer_initCallBacks(virt_arr.ptr);
}

// signal handlers
/*private extern(C) void qtd_QLocalServer_newConnection_handle(void* dId, void** args) {
        auto d_object = cast(QLocalServer) dId;
        //d_object.newConnection_emit();
}*/

extern(C) QMetaObjectNative* qtd_QLocalServer_staticMetaObject();

extern(C) void qtd_QLocalServer_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QLocalServer_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
