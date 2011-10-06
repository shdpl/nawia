#include <QVariant>
#include <qabstractnetworkcache.h>
#include <qauthenticator.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qnetworkcookiejar.h>
#include <qnetworkproxy.h>
#include <qnetworkreply.h>
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qsslerror.h>
#include <qvariant.h>

#include "QNetworkAccessManager_shell.h"
#include <iostream>
#include <qnetworkaccessmanager.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

class QNetworkAccessManagerEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QNetworkAccessManagerEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QNetworkAccessManager_createEntity(void *nativeId, void* dId)
{
    new QNetworkAccessManagerEntity((QObject*)nativeId, dId);
}

QNetworkAccessManager_QtDShell::QNetworkAccessManager_QtDShell(void *d_ptr, QObject*  parent0)
    : QNetworkAccessManager(parent0),
      QObjectLink(this, d_ptr)
{
}

QNetworkAccessManager_QtDShell::~QNetworkAccessManager_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(NETWORK, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(NETWORK, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QNetworkAccessManager_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QNetworkAccessManager::metaObject();
}

int QNetworkAccessManager_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QNetworkAccessManager::qt_metacall(_c, _id, _a);
}

int QNetworkAccessManager_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QNetworkAccessManager::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QNetworkAccessManager_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QNetworkAccessManager_QtDShell *__qt_this = (QNetworkAccessManager_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(NETWORK, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QNetworkAccessManager_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, void*, QNetworkAccessManager_createRequest_Operation_QNetworkRequest_QIODevice_dispatch, (void *dId, int op0, void* request1, void* outgoingData2))
QTD_FUNC(NETWORK, QNetworkAccessManager_createRequest_Operation_QNetworkRequest_QIODevice_dispatch)
QNetworkReply*  QNetworkAccessManager_QtDShell::createRequest(QNetworkAccessManager::Operation  op0, const QNetworkRequest&  request1, QIODevice*  outgoingData2)
{
    return (QNetworkReply*) qtd_QNetworkAccessManager_createRequest_Operation_QNetworkRequest_QIODevice_dispatch(QObjectLink::getLink(this)->dId, (QNetworkAccessManager::Operation )op0, &(QNetworkRequest& )request1, (QIODevice* )outgoingData2);
}

QTD_FUNC_DECL(NETWORK, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QNetworkAccessManager_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QNetworkAccessManager_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QNetworkAccessManager_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(NETWORK, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QNetworkAccessManager_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QNetworkAccessManager_initCallBacks(VoidFunc *virts) {
    qtd_QNetworkAccessManager_createRequest_Operation_QNetworkRequest_QIODevice_dispatch = (qtd_QNetworkAccessManager_createRequest_Operation_QNetworkRequest_QIODevice_dispatch_t) virts[0];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QNetworkAccessManager_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QNetworkAccessManager_QtDShell::__public_authenticationRequired(QNetworkReply*  reply0, QAuthenticator*  authenticator1)
{
    QNetworkAccessManager::authenticationRequired((QNetworkReply* )reply0, (QAuthenticator* )authenticator1);
}

void QNetworkAccessManager_QtDShell::__public_finished(QNetworkReply*  reply0)
{
    QNetworkAccessManager::finished((QNetworkReply* )reply0);
}

void QNetworkAccessManager_QtDShell::__public_networkSessionConnected()
{
    QNetworkAccessManager::networkSessionConnected();
}

void QNetworkAccessManager_QtDShell::__public_proxyAuthenticationRequired(const QNetworkProxy&  proxy0, QAuthenticator*  authenticator1)
{
    QNetworkAccessManager::proxyAuthenticationRequired((const QNetworkProxy& )proxy0, (QAuthenticator* )authenticator1);
}

void QNetworkAccessManager_QtDShell::__public_sslErrors(QNetworkReply*  reply0, const QList<QSslError >&  errors1)
{
    QNetworkAccessManager::sslErrors((QNetworkReply* )reply0, (const QList<QSslError >& )errors1);
}

// Write virtual function overries used to decide on static/virtual calls
void QNetworkAccessManager_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

QNetworkReply*  QNetworkAccessManager_QtDShell::__override_createRequest(int  op0, const QNetworkRequest&  request1, QIODevice*  outgoingData2, bool static_call)
{
    if (static_call) {
        return QNetworkAccessManager::createRequest((QNetworkAccessManager::Operation )op0, (const QNetworkRequest& )request1, (QIODevice* )outgoingData2);
    } else {
        return createRequest((QNetworkAccessManager::Operation )op0, (const QNetworkRequest& )request1, (QIODevice* )outgoingData2);
    }
}

void QNetworkAccessManager_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QNetworkAccessManager_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QNetworkAccessManager_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QNetworkAccessManager_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// QNetworkAccessManager::authenticationRequired(QNetworkReply * reply, QAuthenticator * authenticator)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkAccessManager_authenticationRequired_QNetworkReply_nativepointerQAuthenticator
(void* __this_nativeId,
 void* reply0,
 void* authenticator1)
{
    QNetworkReply*  __qt_reply0 = (QNetworkReply* ) reply0;
    QAuthenticator*  __qt_authenticator1 = (QAuthenticator* ) authenticator1;
    QNetworkAccessManager_QtDShell *__qt_this = (QNetworkAccessManager_QtDShell *) __this_nativeId;
    __qt_this->__public_authenticationRequired((QNetworkReply* )__qt_reply0, (QAuthenticator* )__qt_authenticator1);

}

// QNetworkAccessManager::finished(QNetworkReply * reply)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkAccessManager_finished_QNetworkReply
(void* __this_nativeId,
 void* reply0)
{
    QNetworkReply*  __qt_reply0 = (QNetworkReply* ) reply0;
    QNetworkAccessManager_QtDShell *__qt_this = (QNetworkAccessManager_QtDShell *) __this_nativeId;
    __qt_this->__public_finished((QNetworkReply* )__qt_reply0);

}

// QNetworkAccessManager::networkSessionConnected()
QTD_EXTERN QTD_EXPORT void qtd_QNetworkAccessManager_networkSessionConnected
(void* __this_nativeId)
{
    QNetworkAccessManager_QtDShell *__qt_this = (QNetworkAccessManager_QtDShell *) __this_nativeId;
    __qt_this->__public_networkSessionConnected();

}

// QNetworkAccessManager::proxyAuthenticationRequired(const QNetworkProxy & proxy, QAuthenticator * authenticator)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkAccessManager_proxyAuthenticationRequired_QNetworkProxy_nativepointerQAuthenticator
(void* __this_nativeId,
 void* proxy0,
 void* authenticator1)
{
    const QNetworkProxy&  __qt_proxy0 = (const QNetworkProxy& ) *(QNetworkProxy *)proxy0;
    QAuthenticator*  __qt_authenticator1 = (QAuthenticator* ) authenticator1;
    QNetworkAccessManager_QtDShell *__qt_this = (QNetworkAccessManager_QtDShell *) __this_nativeId;
    __qt_this->__public_proxyAuthenticationRequired((const QNetworkProxy& )__qt_proxy0, (QAuthenticator* )__qt_authenticator1);

}

// QNetworkAccessManager::sslErrors(QNetworkReply * reply, const QList<QSslError > & errors)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkAccessManager_sslErrors_QNetworkReply_QList
(void* __this_nativeId,
 void* reply0,
 void* errors1)
{
    QNetworkReply*  __qt_reply0 = (QNetworkReply* ) reply0;
QList<QSslError > __qt_errors1 = (*(QList<QSslError > *)errors1);
    QNetworkAccessManager_QtDShell *__qt_this = (QNetworkAccessManager_QtDShell *) __this_nativeId;
    __qt_this->__public_sslErrors((QNetworkReply* )__qt_reply0, (const QList<QSslError >& )__qt_errors1);

}

// ---externC---
// QNetworkAccessManager::QNetworkAccessManager(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkAccessManager_QNetworkAccessManager_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QNetworkAccessManager_QtDShell *__qt_this = new QNetworkAccessManager_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QNetworkAccessManager::cache() const
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkAccessManager_cache_const
(void* __this_nativeId)
{
    QNetworkAccessManager_QtDShell *__qt_this = (QNetworkAccessManager_QtDShell *) __this_nativeId;
    QAbstractNetworkCache*  __qt_return_value = __qt_this->cache();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QNetworkAccessManager::cookieJar() const
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkAccessManager_cookieJar_const
(void* __this_nativeId)
{
    QNetworkAccessManager_QtDShell *__qt_this = (QNetworkAccessManager_QtDShell *) __this_nativeId;
    QNetworkCookieJar*  __qt_return_value = __qt_this->cookieJar();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QNetworkAccessManager::deleteResource(const QNetworkRequest & request)
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkAccessManager_deleteResource_QNetworkRequest
(void* __this_nativeId,
 void* request0)
{
    const QNetworkRequest&  __qt_request0 = (const QNetworkRequest& ) *(QNetworkRequest *)request0;
    QNetworkAccessManager_QtDShell *__qt_this = (QNetworkAccessManager_QtDShell *) __this_nativeId;
    QNetworkReply*  __qt_return_value = __qt_this->deleteResource((const QNetworkRequest& )__qt_request0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QNetworkAccessManager::get(const QNetworkRequest & request)
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkAccessManager_get_QNetworkRequest
(void* __this_nativeId,
 void* request0)
{
    const QNetworkRequest&  __qt_request0 = (const QNetworkRequest& ) *(QNetworkRequest *)request0;
    QNetworkAccessManager_QtDShell *__qt_this = (QNetworkAccessManager_QtDShell *) __this_nativeId;
    QNetworkReply*  __qt_return_value = __qt_this->get((const QNetworkRequest& )__qt_request0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QNetworkAccessManager::head(const QNetworkRequest & request)
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkAccessManager_head_QNetworkRequest
(void* __this_nativeId,
 void* request0)
{
    const QNetworkRequest&  __qt_request0 = (const QNetworkRequest& ) *(QNetworkRequest *)request0;
    QNetworkAccessManager_QtDShell *__qt_this = (QNetworkAccessManager_QtDShell *) __this_nativeId;
    QNetworkReply*  __qt_return_value = __qt_this->head((const QNetworkRequest& )__qt_request0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QNetworkAccessManager::post(const QNetworkRequest & request, QIODevice * data)
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkAccessManager_post_QNetworkRequest_QIODevice
(void* __this_nativeId,
 void* request0,
 void* data1)
{
    const QNetworkRequest&  __qt_request0 = (const QNetworkRequest& ) *(QNetworkRequest *)request0;
    QIODevice*  __qt_data1 = (QIODevice* ) data1;
    QNetworkAccessManager_QtDShell *__qt_this = (QNetworkAccessManager_QtDShell *) __this_nativeId;
    QNetworkReply*  __qt_return_value = __qt_this->post((const QNetworkRequest& )__qt_request0, (QIODevice* )__qt_data1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QNetworkAccessManager::post(const QNetworkRequest & request, const QByteArray & data)
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkAccessManager_post_QNetworkRequest_QByteArray
(void* __this_nativeId,
 void* request0,
 void* data1)
{
    const QNetworkRequest&  __qt_request0 = (const QNetworkRequest& ) *(QNetworkRequest *)request0;
    const QByteArray&  __qt_data1 = (const QByteArray& ) *(QByteArray *)data1;
    QNetworkAccessManager_QtDShell *__qt_this = (QNetworkAccessManager_QtDShell *) __this_nativeId;
    QNetworkReply*  __qt_return_value = __qt_this->post((const QNetworkRequest& )__qt_request0, (const QByteArray& )__qt_data1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QNetworkAccessManager::proxy() const
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkAccessManager_proxy_const
(void* __this_nativeId)
{
    QNetworkAccessManager_QtDShell *__qt_this = (QNetworkAccessManager_QtDShell *) __this_nativeId;
    QNetworkProxy  __qt_return_value = __qt_this->proxy();

    void* __d_return_value = (void*) new QNetworkProxy(__qt_return_value);

    return __d_return_value;
}

// QNetworkAccessManager::proxyFactory() const
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkAccessManager_proxyFactory_const
(void* __this_nativeId)
{
    QNetworkAccessManager_QtDShell *__qt_this = (QNetworkAccessManager_QtDShell *) __this_nativeId;
    QNetworkProxyFactory*  __qt_return_value = __qt_this->proxyFactory();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QNetworkAccessManager::put(const QNetworkRequest & request, QIODevice * data)
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkAccessManager_put_QNetworkRequest_QIODevice
(void* __this_nativeId,
 void* request0,
 void* data1)
{
    const QNetworkRequest&  __qt_request0 = (const QNetworkRequest& ) *(QNetworkRequest *)request0;
    QIODevice*  __qt_data1 = (QIODevice* ) data1;
    QNetworkAccessManager_QtDShell *__qt_this = (QNetworkAccessManager_QtDShell *) __this_nativeId;
    QNetworkReply*  __qt_return_value = __qt_this->put((const QNetworkRequest& )__qt_request0, (QIODevice* )__qt_data1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QNetworkAccessManager::put(const QNetworkRequest & request, const QByteArray & data)
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkAccessManager_put_QNetworkRequest_QByteArray
(void* __this_nativeId,
 void* request0,
 void* data1)
{
    const QNetworkRequest&  __qt_request0 = (const QNetworkRequest& ) *(QNetworkRequest *)request0;
    const QByteArray&  __qt_data1 = (const QByteArray& ) *(QByteArray *)data1;
    QNetworkAccessManager_QtDShell *__qt_this = (QNetworkAccessManager_QtDShell *) __this_nativeId;
    QNetworkReply*  __qt_return_value = __qt_this->put((const QNetworkRequest& )__qt_request0, (const QByteArray& )__qt_data1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QNetworkAccessManager::sendCustomRequest(const QNetworkRequest & request, const QByteArray & verb, QIODevice * data)
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkAccessManager_sendCustomRequest_QNetworkRequest_QByteArray_QIODevice
(void* __this_nativeId,
 void* request0,
 void* verb1,
 void* data2)
{
    const QNetworkRequest&  __qt_request0 = (const QNetworkRequest& ) *(QNetworkRequest *)request0;
    const QByteArray&  __qt_verb1 = (const QByteArray& ) *(QByteArray *)verb1;
    QIODevice*  __qt_data2 = (QIODevice* ) data2;
    QNetworkAccessManager_QtDShell *__qt_this = (QNetworkAccessManager_QtDShell *) __this_nativeId;
    QNetworkReply*  __qt_return_value = __qt_this->sendCustomRequest((const QNetworkRequest& )__qt_request0, (const QByteArray& )__qt_verb1, (QIODevice* )__qt_data2);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QNetworkAccessManager::setCache(QAbstractNetworkCache * cache)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkAccessManager_setCache_QAbstractNetworkCache
(void* __this_nativeId,
 void* cache0)
{
    QAbstractNetworkCache*  __qt_cache0 = (QAbstractNetworkCache* ) cache0;
    QNetworkAccessManager_QtDShell *__qt_this = (QNetworkAccessManager_QtDShell *) __this_nativeId;
    __qt_this->setCache((QAbstractNetworkCache* )__qt_cache0);

}

// QNetworkAccessManager::setCookieJar(QNetworkCookieJar * cookieJar)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkAccessManager_setCookieJar_QNetworkCookieJar
(void* __this_nativeId,
 void* cookieJar0)
{
    QNetworkCookieJar*  __qt_cookieJar0 = (QNetworkCookieJar* ) cookieJar0;
    QNetworkAccessManager_QtDShell *__qt_this = (QNetworkAccessManager_QtDShell *) __this_nativeId;
    __qt_this->setCookieJar((QNetworkCookieJar* )__qt_cookieJar0);

}

// QNetworkAccessManager::setProxy(const QNetworkProxy & proxy)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkAccessManager_setProxy_QNetworkProxy
(void* __this_nativeId,
 void* proxy0)
{
    const QNetworkProxy&  __qt_proxy0 = (const QNetworkProxy& ) *(QNetworkProxy *)proxy0;
    QNetworkAccessManager_QtDShell *__qt_this = (QNetworkAccessManager_QtDShell *) __this_nativeId;
    __qt_this->setProxy((const QNetworkProxy& )__qt_proxy0);

}

// QNetworkAccessManager::setProxyFactory(QNetworkProxyFactory * factory)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkAccessManager_setProxyFactory_QNetworkProxyFactory
(void* __this_nativeId,
 void* factory0)
{
    QNetworkProxyFactory*  __qt_factory0 = (QNetworkProxyFactory* ) factory0;
    QNetworkAccessManager_QtDShell *__qt_this = (QNetworkAccessManager_QtDShell *) __this_nativeId;
    __qt_this->setProxyFactory((QNetworkProxyFactory* )__qt_factory0);

}

// QNetworkAccessManager::createRequest(QNetworkAccessManager::Operation op, const QNetworkRequest & request, QIODevice * outgoingData)
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkAccessManager_createRequest_Operation_QNetworkRequest_QIODevice
(void* __this_nativeId,
 int op0,
 void* request1,
 void* outgoingData2)
{
    QNetworkAccessManager::Operation __qt_op0 = (QNetworkAccessManager::Operation) op0;
    const QNetworkRequest&  __qt_request1 = (const QNetworkRequest& ) *(QNetworkRequest *)request1;
    QIODevice*  __qt_outgoingData2 = (QIODevice* ) outgoingData2;
    QNetworkAccessManager_QtDShell *__qt_this = (QNetworkAccessManager_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QNetworkReply*  __qt_return_value = __qt_this->__override_createRequest((QNetworkAccessManager::Operation )__qt_op0, (const QNetworkRequest& )__qt_request1, (QIODevice* )__qt_outgoingData2, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QNetworkAccessManager_staticMetaObject() {
    return (void*)&QNetworkAccessManager::staticMetaObject;
}


