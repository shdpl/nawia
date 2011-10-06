#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qnetworkcookie.h>
#include <qnetworkcookiejar.h>
#include <qobject.h>
#include <qurl.h>
#include <qvariant.h>

#include "QNetworkCookieJar_shell.h"
#include <iostream>
#include <qnetworkcookiejar.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

class QNetworkCookieJarEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QNetworkCookieJarEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QNetworkCookieJar_createEntity(void *nativeId, void* dId)
{
    new QNetworkCookieJarEntity((QObject*)nativeId, dId);
}

QNetworkCookieJar_QtDShell::QNetworkCookieJar_QtDShell(void *d_ptr, QObject*  parent0)
    : QNetworkCookieJar(parent0),
      QObjectLink(this, d_ptr)
{
}

QNetworkCookieJar_QtDShell::~QNetworkCookieJar_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(NETWORK, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(NETWORK, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QNetworkCookieJar_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QNetworkCookieJar::metaObject();
}

int QNetworkCookieJar_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QNetworkCookieJar::qt_metacall(_c, _id, _a);
}

int QNetworkCookieJar_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QNetworkCookieJar::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QNetworkCookieJar_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QNetworkCookieJar_QtDShell *__qt_this = (QNetworkCookieJar_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(NETWORK, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QNetworkCookieJar_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, void, QNetworkCookieJar_cookiesForUrl_QUrl_const_dispatch, (void *dId, void * __d_arr, void* url0))
QTD_FUNC(NETWORK, QNetworkCookieJar_cookiesForUrl_QUrl_const_dispatch)
QList<QNetworkCookie >  QNetworkCookieJar_QtDShell::cookiesForUrl(const QUrl&  url0) const
{
    QList<QNetworkCookie > __d_return_value;
    qtd_QNetworkCookieJar_cookiesForUrl_QUrl_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &(QUrl& )url0);
    return __d_return_value;
}

QTD_FUNC_DECL(NETWORK, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QNetworkCookieJar_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QNetworkCookieJar_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QNetworkCookieJar_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(NETWORK, bool, QNetworkCookieJar_setCookiesFromUrl_QList_QUrl_dispatch, (void *dId, void* cookieList0, void* url1))
QTD_FUNC(NETWORK, QNetworkCookieJar_setCookiesFromUrl_QList_QUrl_dispatch)
bool  QNetworkCookieJar_QtDShell::setCookiesFromUrl(const QList<QNetworkCookie >&  cookieList0, const QUrl&  url1)
{
    return qtd_QNetworkCookieJar_setCookiesFromUrl_QList_QUrl_dispatch(QObjectLink::getLink(this)->dId, (void*)&cookieList0, &(QUrl& )url1);
}

QTD_FUNC_DECL(NETWORK, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QNetworkCookieJar_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QNetworkCookieJar_initCallBacks(VoidFunc *virts) {
    qtd_QNetworkCookieJar_cookiesForUrl_QUrl_const_dispatch = (qtd_QNetworkCookieJar_cookiesForUrl_QUrl_const_dispatch_t) virts[0];
    qtd_QNetworkCookieJar_setCookiesFromUrl_QList_QUrl_dispatch = (qtd_QNetworkCookieJar_setCookiesFromUrl_QList_QUrl_dispatch_t) virts[1];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QList<QNetworkCookie >  QNetworkCookieJar_QtDShell::__public_allCookies() const
{
    return QNetworkCookieJar::allCookies();
}

QObject*  QNetworkCookieJar_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QNetworkCookieJar_QtDShell::__public_setAllCookies(const QList<QNetworkCookie >&  cookieList0)
{
    QNetworkCookieJar::setAllCookies((const QList<QNetworkCookie >& )cookieList0);
}

// Write virtual function overries used to decide on static/virtual calls
void QNetworkCookieJar_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

QList<QNetworkCookie >  QNetworkCookieJar_QtDShell::__override_cookiesForUrl(const QUrl&  url0, bool static_call) const
{
    if (static_call) {
        return QNetworkCookieJar::cookiesForUrl((const QUrl& )url0);
    } else {
        return cookiesForUrl((const QUrl& )url0);
    }
}

void QNetworkCookieJar_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QNetworkCookieJar_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QNetworkCookieJar_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

bool  QNetworkCookieJar_QtDShell::__override_setCookiesFromUrl(const QList<QNetworkCookie >&  cookieList0, const QUrl&  url1, bool static_call)
{
    if (static_call) {
        return QNetworkCookieJar::setCookiesFromUrl((const QList<QNetworkCookie >& )cookieList0, (const QUrl& )url1);
    } else {
        return setCookiesFromUrl((const QList<QNetworkCookie >& )cookieList0, (const QUrl& )url1);
    }
}

void QNetworkCookieJar_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// ---externC---
// QNetworkCookieJar::QNetworkCookieJar(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkCookieJar_QNetworkCookieJar_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QNetworkCookieJar_QtDShell *__qt_this = new QNetworkCookieJar_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QNetworkCookieJar::allCookies() const
QTD_EXTERN QTD_EXPORT void qtd_QNetworkCookieJar_allCookies_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QNetworkCookieJar_QtDShell *__qt_this = (QNetworkCookieJar_QtDShell *) __this_nativeId;
    QList<QNetworkCookie >  __qt_return_value = __qt_this->__public_allCookies();

QList<QNetworkCookie > &__d_return_value_tmp = (*(QList<QNetworkCookie > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QNetworkCookieJar::setAllCookies(const QList<QNetworkCookie > & cookieList)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkCookieJar_setAllCookies_QList
(void* __this_nativeId,
 void* cookieList0)
{
QList<QNetworkCookie > __qt_cookieList0 = (*(QList<QNetworkCookie > *)cookieList0);
    QNetworkCookieJar_QtDShell *__qt_this = (QNetworkCookieJar_QtDShell *) __this_nativeId;
    __qt_this->__public_setAllCookies((const QList<QNetworkCookie >& )__qt_cookieList0);

}

// QNetworkCookieJar::cookiesForUrl(const QUrl & url) const
QTD_EXTERN QTD_EXPORT void qtd_QNetworkCookieJar_cookiesForUrl_QUrl_const
(void* __this_nativeId,
 void* __d_return_value,
 void* url0)
{
    const QUrl&  __qt_url0 = (const QUrl& ) *(QUrl *)url0;
    QNetworkCookieJar_QtDShell *__qt_this = (QNetworkCookieJar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QList<QNetworkCookie >  __qt_return_value = __qt_this->__override_cookiesForUrl((const QUrl& )__qt_url0, __do_static_call);

QList<QNetworkCookie > &__d_return_value_tmp = (*(QList<QNetworkCookie > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QNetworkCookieJar::setCookiesFromUrl(const QList<QNetworkCookie > & cookieList, const QUrl & url)
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkCookieJar_setCookiesFromUrl_QList_QUrl
(void* __this_nativeId,
 void* cookieList0,
 void* url1)
{
QList<QNetworkCookie > __qt_cookieList0 = (*(QList<QNetworkCookie > *)cookieList0);
    const QUrl&  __qt_url1 = (const QUrl& ) *(QUrl *)url1;
    QNetworkCookieJar_QtDShell *__qt_this = (QNetworkCookieJar_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_setCookiesFromUrl((const QList<QNetworkCookie >& )__qt_cookieList0, (const QUrl& )__qt_url1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QNetworkCookieJar_staticMetaObject() {
    return (void*)&QNetworkCookieJar::staticMetaObject;
}


