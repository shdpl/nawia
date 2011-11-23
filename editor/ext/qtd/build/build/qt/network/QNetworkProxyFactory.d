module qt.network.QNetworkProxyFactory;

public import qt.network.QNetworkProxyFactory_aux;
public import qt.QGlobal;
public import qt.core.Qt;
import qtd.QtdObject;
import qt.core.QString;
import qtd.Array;
import qt.core.QList;
// automatic imports-------------
public import qt.core.QList;
public import qt.network.QNetworkProxy;
public import qt.network.QNetworkProxyQuery;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public abstract class QNetworkProxyFactory : QtdObject
{

// Functions

    public this() {
        void* ret = qtd_QNetworkProxyFactory_QNetworkProxyFactory(cast(void*) this);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    public abstract QList!(QNetworkProxy) queryProxy(const(QNetworkProxyQuery) query = new QNetworkProxyQuery());

    public static QList!(QNetworkProxy) proxyForQuery(const(QNetworkProxyQuery) query) {
        auto res = QList!(QNetworkProxy).opCall();
        qtd_QNetworkProxyFactory_proxyForQuery_QNetworkProxyQuery(&res, query is null ? null : (cast(QNetworkProxyQuery)query).qtdNativeId);
        return res;
    }

    public static void setApplicationProxyFactory(QNetworkProxyFactory factory) {
        if (factory !is null) {
            factory.qtdSetOwnership(QtdObjectOwnership.native);
        }
        qtd_QNetworkProxyFactory_setApplicationProxyFactory_QNetworkProxyFactory(factory is null ? null : factory.qtdNativeId);
    }

    public static void setUseSystemConfiguration(bool enable) {
        qtd_QNetworkProxyFactory_setUseSystemConfiguration_bool(enable);
    }

    public static QList!(QNetworkProxy) systemProxyForQuery(const(QNetworkProxyQuery) query = new QNetworkProxyQuery()) {
        auto res = QList!(QNetworkProxy).opCall();
        qtd_QNetworkProxyFactory_systemProxyForQuery_QNetworkProxyQuery(&res, query is null ? null : (cast(QNetworkProxyQuery)query).qtdNativeId);
        return res;
    }
// Field accessors
    static QNetworkProxyFactory __getObject(void* nativeId) {
        return qtd_QNetworkProxyFactory_from_ptr(nativeId);
    }

    public alias void __isObjectType;

    public alias void __isQtType_QNetworkProxyFactory;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    protected override void qtdDeleteNative() {
        qtd_QNetworkProxyFactory_delete(qtdNativeId);
    }

    static void __deleteNativeObject(void* ptr) {
        qtd_QNetworkProxyFactory_delete(ptr);
    }

    static void __callNativeDestructor(void* nativeId) {
        qtd_QNetworkProxyFactory_destroy(nativeId);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

    public class QNetworkProxyFactory_ConcreteWrapper : QNetworkProxyFactory {
        public this(void* native_id, QtdObjectInitFlags initFlags = QtdObjectInitFlags.nativeOwnership) {
            super(native_id, initFlags);

        }


        override         public QList!(QNetworkProxy) queryProxy(const(QNetworkProxyQuery) query = new QNetworkProxyQuery()) {
            auto res = QList!(QNetworkProxy).opCall();
            qtd_QNetworkProxyFactory_queryProxy_QNetworkProxyQuery(qtdNativeId, &res, query is null ? null : (cast(QNetworkProxyQuery)query).qtdNativeId);
            return res;
        }
    }


extern (C) void *__QNetworkProxyFactory_entity(void *q_ptr);

QNetworkProxyFactory qtd_QNetworkProxyFactory_from_ptr(void* ret) {
    void* d_obj = __QNetworkProxyFactory_entity(ret);
    if (d_obj !is null) {
        auto d_obj_ref = cast (Object) d_obj;
        return cast(QNetworkProxyFactory) d_obj_ref;
    } else {
        auto return_value = new QNetworkProxyFactory_ConcreteWrapper(ret, QtdObjectInitFlags.nativeOwnership);
        return return_value;
    }
}

extern (C) void qtd_QNetworkProxyFactory_delete(void *ptr);
extern (C) void qtd_QNetworkProxyFactory_destroy(void *ptr);


// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QNetworkProxyFactory_QNetworkProxyFactory(void *d_ptr);
private extern(C) void  qtd_QNetworkProxyFactory_queryProxy_QNetworkProxyQuery(void* __this_nativeId,
 void* __d_return_value,
 void* query0);
private extern(C) void  qtd_QNetworkProxyFactory_proxyForQuery_QNetworkProxyQuery(void* __d_return_value,
 void* query0);
private extern(C) void  qtd_QNetworkProxyFactory_setApplicationProxyFactory_QNetworkProxyFactory(void* factory0);
private extern(C) void  qtd_QNetworkProxyFactory_setUseSystemConfiguration_bool(bool enable0);
private extern(C) void  qtd_QNetworkProxyFactory_systemProxyForQuery_QNetworkProxyQuery(void* __d_return_value,
 void* query0);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, QList!(QNetworkProxy)* __d_arr, void* query0) qtd_QNetworkProxyFactory_queryProxy_QNetworkProxyQuery_dispatch; }
extern(C) void qtd_export_QNetworkProxyFactory_queryProxy_QNetworkProxyQuery_dispatch(void *dId, QList!(QNetworkProxy)* __d_arr, void* query0){
    auto d_object = cast(QNetworkProxyFactory) dId;
    scope query0_d_ref = new QNetworkProxyQuery(query0, QtdObjectInitFlags.onStack);
    auto return_value = d_object.queryProxy(query0_d_ref);
    *__d_arr = return_value;
}

private extern (C) void qtd_QNetworkProxyFactory_initCallBacks(void* virtuals);

extern(C) void static_init_QNetworkProxyFactory() {
    void*[1] virt_arr;
    virt_arr[0] = &qtd_export_QNetworkProxyFactory_queryProxy_QNetworkProxyQuery_dispatch;
    qtd_QNetworkProxyFactory_initCallBacks(virt_arr.ptr);
}

// signal handlers

