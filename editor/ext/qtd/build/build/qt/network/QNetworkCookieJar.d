module qt.network.QNetworkCookieJar;

public import qt.network.QNetworkCookieJar_aux;
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
public import qt.core.QList;
public import qt.core.QObject;
public import qt.core.QEvent;
public import qt.core.QTimerEvent;
public import qt.core.QChildEvent;
public import qt.core.QUrl;
public import qt.network.QNetworkCookie;

import std.stdio;
import std.string : toStringz;
import std.utf;
import core.memory;


public class QNetworkCookieJar : QObject
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
        void* ret = qtd_QNetworkCookieJar_QNetworkCookieJar_QObject(cast(void*) this, parent_ is null ? null : parent_.qtdNativeId);
        this(ret, QtdObjectInitFlags.createdByD);
    }


    protected final QList!(QNetworkCookie) allCookies() const {
        auto res = QList!(QNetworkCookie).opCall();
        qtd_QNetworkCookieJar_allCookies_const(qtdNativeId, &res);
        return res;
    }

    protected final void setAllCookies(QList!(QNetworkCookie) cookieList) {
        qtd_QNetworkCookieJar_setAllCookies_QList(qtdNativeId, &cookieList);
    }

    public QList!(QNetworkCookie) cookiesForUrl(const(QUrl) url) const {
        auto res = QList!(QNetworkCookie).opCall();
        qtd_QNetworkCookieJar_cookiesForUrl_QUrl_const(qtdNativeId, &res, url is null ? null : (cast(QUrl)url).qtdNativeId);
        return res;
    }

    public bool setCookiesFromUrl(QList!(QNetworkCookie) cookieList, const(QUrl) url) {
        return qtd_QNetworkCookieJar_setCookiesFromUrl_QList_QUrl(qtdNativeId, &cookieList, url is null ? null : (cast(QUrl)url).qtdNativeId);
    }
// Field accessors
    private static const string[] __slotSignatures = [    ];

    int qt_metacall(MetaCall _c, int _id, void **_a) {
        return qtd_QNetworkCookieJar_qt_metacall(qtdNativeId, _c, _id, _a);
    }

    @property QMetaObject metaObject() {
        return staticMetaObject;
    }

    @property static QMetaObject staticMetaObject() {
        return meta!(QNetworkCookieJar);
    }

    static QNetworkCookieJar __getObject(void* nativeId) {
        return static_cast!(QNetworkCookieJar)(staticMetaObject.getWrapper(nativeId));
    }

    static void __createEntity(void* nativeId, void* dId) {
        return qtd_QNetworkCookieJar_createEntity(nativeId, dId);
    }

    static void* qtdNativeStaticMetaObject() {
        return qtd_QNetworkCookieJar_staticMetaObject();
    }
    static QtdObject qtdCreateWrapper(void* nativeId, QtdObjectInitFlags initFlags) {
        auto obj = new QNetworkCookieJar(nativeId, initFlags);
        QNetworkCookieJar.__createEntity(nativeId, cast(void*)obj);
        return obj;
    }

    static void _populateMetaInfo(QMetaObject mo) {
        int index;

    }

    public alias void __isQtType_QNetworkCookieJar;


    public this(void* nativeId, QtdObjectInitFlags initFlags = QtdObjectInitFlags.none) {
        super(nativeId, initFlags);
    }

    void qtdSetOwnership(QtdObjectOwnership own) const { super.qtdSetOwnership(own); }// Injected code in class
}

// C wrappers for signal emitters

// C wrappers
private extern(C) void* qtd_QNetworkCookieJar_QNetworkCookieJar_QObject(void *d_ptr,
 void* parent0);
private extern(C) void  qtd_QNetworkCookieJar_allCookies_const(void* __this_nativeId,
 void* __d_return_value);
private extern(C) void  qtd_QNetworkCookieJar_setAllCookies_QList(void* __this_nativeId,
 void* cookieList0);
private extern(C) void  qtd_QNetworkCookieJar_cookiesForUrl_QUrl_const(void* __this_nativeId,
 void* __d_return_value,
 void* url0);
private extern(C) bool  qtd_QNetworkCookieJar_setCookiesFromUrl_QList_QUrl(void* __this_nativeId,
 void* cookieList0,
 void* url1);
// Just the private functions for abstract functions implemeneted in superclasses



// Virtual Dispatch functions
extern(C){ extern void function(void *dId, QList!(QNetworkCookie)* __d_arr, void* url0) qtd_QNetworkCookieJar_cookiesForUrl_QUrl_const_dispatch; }
extern(C) void qtd_export_QNetworkCookieJar_cookiesForUrl_QUrl_const_dispatch(void *dId, QList!(QNetworkCookie)* __d_arr, void* url0){
    auto d_object = cast(QNetworkCookieJar) dId;
    scope url0_d_ref = new QUrl(url0, QtdObjectInitFlags.onStack);
    auto return_value = d_object.cookiesForUrl(url0_d_ref);
    *__d_arr = return_value;
}

extern(C){ extern bool function(void *dId, void* cookieList0, void* url1) qtd_QNetworkCookieJar_setCookiesFromUrl_QList_QUrl_dispatch; }
extern(C) bool qtd_export_QNetworkCookieJar_setCookiesFromUrl_QList_QUrl_dispatch(void *dId, void* cookieList0, void* url1){
    auto d_object = cast(QNetworkCookieJar) dId;
    auto cookieList0_d_ref = cast(QList!(QNetworkCookie)*)cookieList0;

    scope url1_d_ref = new QUrl(url1, QtdObjectInitFlags.onStack);
    auto return_value = d_object.setCookiesFromUrl(*cookieList0_d_ref, url1_d_ref);
    return return_value;
}

private extern (C) void qtd_QNetworkCookieJar_initCallBacks(void* virtuals);

extern(C) void static_init_QNetworkCookieJar() {
    void*[2] virt_arr;
    virt_arr[0] = &qtd_export_QNetworkCookieJar_cookiesForUrl_QUrl_const_dispatch;
    virt_arr[1] = &qtd_export_QNetworkCookieJar_setCookiesFromUrl_QList_QUrl_dispatch;
    qtd_QNetworkCookieJar_initCallBacks(virt_arr.ptr);
}

// signal handlers

extern(C) QMetaObjectNative* qtd_QNetworkCookieJar_staticMetaObject();

extern(C) void qtd_QNetworkCookieJar_createEntity(void* nativeId, void* dId);

extern(C) int qtd_QNetworkCookieJar_qt_metacall(void *nativeId, MetaCall _c, int _id, void **_a);
