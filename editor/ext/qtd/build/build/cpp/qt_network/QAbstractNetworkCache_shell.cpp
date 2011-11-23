#include <QVariant>
#include <qabstractnetworkcache.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qobject.h>
#include <qurl.h>
#include <qvariant.h>

#include "QAbstractNetworkCache_shell.h"
#include <iostream>
#include <qabstractnetworkcache.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

class QAbstractNetworkCacheEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QAbstractNetworkCacheEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QAbstractNetworkCache_createEntity(void *nativeId, void* dId)
{
    new QAbstractNetworkCacheEntity((QObject*)nativeId, dId);
}

QAbstractNetworkCache_QtDShell::QAbstractNetworkCache_QtDShell(void *d_ptr, QObject*  parent0)
    : QAbstractNetworkCache(parent0),
      QObjectLink(this, d_ptr)
{
}

QAbstractNetworkCache_QtDShell::~QAbstractNetworkCache_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(NETWORK, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(NETWORK, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QAbstractNetworkCache_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QAbstractNetworkCache::metaObject();
}

int QAbstractNetworkCache_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QAbstractNetworkCache::qt_metacall(_c, _id, _a);
}

int QAbstractNetworkCache_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QAbstractNetworkCache::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QAbstractNetworkCache_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QAbstractNetworkCache_QtDShell *__qt_this = (QAbstractNetworkCache_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(NETWORK, qint64, QAbstractNetworkCache_cacheSize_const_dispatch, (void *dId))
QTD_FUNC(NETWORK, QAbstractNetworkCache_cacheSize_const_dispatch)
qint64  QAbstractNetworkCache_QtDShell::cacheSize() const
{
    return qtd_QAbstractNetworkCache_cacheSize_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QAbstractNetworkCache_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, void, QAbstractNetworkCache_clear_dispatch, (void *dId))
QTD_FUNC(NETWORK, QAbstractNetworkCache_clear_dispatch)
void QAbstractNetworkCache_QtDShell::clear()
{
    qtd_QAbstractNetworkCache_clear_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QAbstractNetworkCache_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, void*, QAbstractNetworkCache_data_QUrl_dispatch, (void *dId, void* url0))
QTD_FUNC(NETWORK, QAbstractNetworkCache_data_QUrl_dispatch)
QIODevice*  QAbstractNetworkCache_QtDShell::data(const QUrl&  url0)
{
    return (QIODevice*) qtd_QAbstractNetworkCache_data_QUrl_dispatch(QObjectLink::getLink(this)->dId, &(QUrl& )url0);
}

QTD_FUNC_DECL(NETWORK, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QAbstractNetworkCache_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QAbstractNetworkCache_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(NETWORK, void, QAbstractNetworkCache_insert_QIODevice_dispatch, (void *dId, void* device0))
QTD_FUNC(NETWORK, QAbstractNetworkCache_insert_QIODevice_dispatch)
void QAbstractNetworkCache_QtDShell::insert(QIODevice*  device0)
{
    qtd_QAbstractNetworkCache_insert_QIODevice_dispatch(QObjectLink::getLink(this)->dId, (QIODevice* )device0);
}

QTD_FUNC_DECL(NETWORK, void*, QAbstractNetworkCache_metaData_QUrl_dispatch, (void *dId, void* url0))
QTD_FUNC(NETWORK, QAbstractNetworkCache_metaData_QUrl_dispatch)
QNetworkCacheMetaData  QAbstractNetworkCache_QtDShell::metaData(const QUrl&  url0)
{
    QNetworkCacheMetaData *__qt_return_value = (QNetworkCacheMetaData*) qtd_QAbstractNetworkCache_metaData_QUrl_dispatch(QObjectLink::getLink(this)->dId, &(QUrl& )url0);
    return QNetworkCacheMetaData(*__qt_return_value);
}

QTD_FUNC_DECL(NETWORK, void*, QAbstractNetworkCache_prepare_QNetworkCacheMetaData_dispatch, (void *dId, void* metaData0))
QTD_FUNC(NETWORK, QAbstractNetworkCache_prepare_QNetworkCacheMetaData_dispatch)
QIODevice*  QAbstractNetworkCache_QtDShell::prepare(const QNetworkCacheMetaData&  metaData0)
{
    return (QIODevice*) qtd_QAbstractNetworkCache_prepare_QNetworkCacheMetaData_dispatch(QObjectLink::getLink(this)->dId, &(QNetworkCacheMetaData& )metaData0);
}

QTD_FUNC_DECL(NETWORK, bool, QAbstractNetworkCache_remove_QUrl_dispatch, (void *dId, void* url0))
QTD_FUNC(NETWORK, QAbstractNetworkCache_remove_QUrl_dispatch)
bool  QAbstractNetworkCache_QtDShell::remove(const QUrl&  url0)
{
    return qtd_QAbstractNetworkCache_remove_QUrl_dispatch(QObjectLink::getLink(this)->dId, &(QUrl& )url0);
}

QTD_FUNC_DECL(NETWORK, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QAbstractNetworkCache_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, void, QAbstractNetworkCache_updateMetaData_QNetworkCacheMetaData_dispatch, (void *dId, void* metaData0))
QTD_FUNC(NETWORK, QAbstractNetworkCache_updateMetaData_QNetworkCacheMetaData_dispatch)
void QAbstractNetworkCache_QtDShell::updateMetaData(const QNetworkCacheMetaData&  metaData0)
{
    qtd_QAbstractNetworkCache_updateMetaData_QNetworkCacheMetaData_dispatch(QObjectLink::getLink(this)->dId, &(QNetworkCacheMetaData& )metaData0);
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractNetworkCache_initCallBacks(VoidFunc *virts) {
    qtd_QAbstractNetworkCache_cacheSize_const_dispatch = (qtd_QAbstractNetworkCache_cacheSize_const_dispatch_t) virts[0];
    qtd_QAbstractNetworkCache_clear_dispatch = (qtd_QAbstractNetworkCache_clear_dispatch_t) virts[1];
    qtd_QAbstractNetworkCache_data_QUrl_dispatch = (qtd_QAbstractNetworkCache_data_QUrl_dispatch_t) virts[2];
    qtd_QAbstractNetworkCache_insert_QIODevice_dispatch = (qtd_QAbstractNetworkCache_insert_QIODevice_dispatch_t) virts[3];
    qtd_QAbstractNetworkCache_metaData_QUrl_dispatch = (qtd_QAbstractNetworkCache_metaData_QUrl_dispatch_t) virts[4];
    qtd_QAbstractNetworkCache_prepare_QNetworkCacheMetaData_dispatch = (qtd_QAbstractNetworkCache_prepare_QNetworkCacheMetaData_dispatch_t) virts[5];
    qtd_QAbstractNetworkCache_remove_QUrl_dispatch = (qtd_QAbstractNetworkCache_remove_QUrl_dispatch_t) virts[6];
    qtd_QAbstractNetworkCache_updateMetaData_QNetworkCacheMetaData_dispatch = (qtd_QAbstractNetworkCache_updateMetaData_QNetworkCacheMetaData_dispatch_t) virts[7];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QAbstractNetworkCache_QtDShell::__public_sender() const
{
    return QObject::sender();
}

// Write virtual function overries used to decide on static/virtual calls
qint64  QAbstractNetworkCache_QtDShell::__override_cacheSize(bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return cacheSize();
    }
}

void QAbstractNetworkCache_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QAbstractNetworkCache_QtDShell::__override_clear(bool static_call)
{
    if (static_call) {
        return;
    } else {
        clear();
    }
}

void QAbstractNetworkCache_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

QIODevice*  QAbstractNetworkCache_QtDShell::__override_data(const QUrl&  url0, bool static_call)
{
    if (static_call) {
        return 0;
    } else {
        return data((const QUrl& )url0);
    }
}

bool  QAbstractNetworkCache_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QAbstractNetworkCache_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QAbstractNetworkCache_QtDShell::__override_insert(QIODevice*  device0, bool static_call)
{
    if (static_call) {
        return;
    } else {
        insert((QIODevice* )device0);
    }
}

QNetworkCacheMetaData  QAbstractNetworkCache_QtDShell::__override_metaData(const QUrl&  url0, bool static_call)
{
    if (static_call) {
        return QNetworkCacheMetaData();
    } else {
        return metaData((const QUrl& )url0);
    }
}

QIODevice*  QAbstractNetworkCache_QtDShell::__override_prepare(const QNetworkCacheMetaData&  metaData0, bool static_call)
{
    if (static_call) {
        return 0;
    } else {
        return prepare((const QNetworkCacheMetaData& )metaData0);
    }
}

bool  QAbstractNetworkCache_QtDShell::__override_remove(const QUrl&  url0, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return remove((const QUrl& )url0);
    }
}

void QAbstractNetworkCache_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QAbstractNetworkCache_QtDShell::__override_updateMetaData(const QNetworkCacheMetaData&  metaData0, bool static_call)
{
    if (static_call) {
        return;
    } else {
        updateMetaData((const QNetworkCacheMetaData& )metaData0);
    }
}

// ---externC---
// QAbstractNetworkCache::QAbstractNetworkCache(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractNetworkCache_QAbstractNetworkCache_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QAbstractNetworkCache_QtDShell *__qt_this = new QAbstractNetworkCache_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QAbstractNetworkCache::cacheSize() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QAbstractNetworkCache_cacheSize_const
(void* __this_nativeId)
{
    QAbstractNetworkCache_QtDShell *__qt_this = (QAbstractNetworkCache_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_cacheSize(__do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractNetworkCache::clear()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractNetworkCache_clear
(void* __this_nativeId)
{
    QAbstractNetworkCache_QtDShell *__qt_this = (QAbstractNetworkCache_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_clear(__do_static_call);

}

// QAbstractNetworkCache::data(const QUrl & url)
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractNetworkCache_data_QUrl
(void* __this_nativeId,
 void* url0)
{
    const QUrl&  __qt_url0 = (const QUrl& ) *(QUrl *)url0;
    QAbstractNetworkCache_QtDShell *__qt_this = (QAbstractNetworkCache_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QIODevice*  __qt_return_value = __qt_this->__override_data((const QUrl& )__qt_url0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAbstractNetworkCache::insert(QIODevice * device)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractNetworkCache_insert_QIODevice
(void* __this_nativeId,
 void* device0)
{
    QIODevice*  __qt_device0 = (QIODevice* ) device0;
    QAbstractNetworkCache_QtDShell *__qt_this = (QAbstractNetworkCache_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_insert((QIODevice* )__qt_device0, __do_static_call);

}

// QAbstractNetworkCache::metaData(const QUrl & url)
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractNetworkCache_metaData_QUrl
(void* __this_nativeId,
 void* url0)
{
    const QUrl&  __qt_url0 = (const QUrl& ) *(QUrl *)url0;
    QAbstractNetworkCache_QtDShell *__qt_this = (QAbstractNetworkCache_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QNetworkCacheMetaData  __qt_return_value = __qt_this->__override_metaData((const QUrl& )__qt_url0, __do_static_call);

    void* __d_return_value = (void*) new QNetworkCacheMetaData(__qt_return_value);

    return __d_return_value;
}

// QAbstractNetworkCache::prepare(const QNetworkCacheMetaData & metaData)
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractNetworkCache_prepare_QNetworkCacheMetaData
(void* __this_nativeId,
 void* metaData0)
{
    const QNetworkCacheMetaData&  __qt_metaData0 = (const QNetworkCacheMetaData& ) *(QNetworkCacheMetaData *)metaData0;
    QAbstractNetworkCache_QtDShell *__qt_this = (QAbstractNetworkCache_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QIODevice*  __qt_return_value = __qt_this->__override_prepare((const QNetworkCacheMetaData& )__qt_metaData0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAbstractNetworkCache::remove(const QUrl & url)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractNetworkCache_remove_QUrl
(void* __this_nativeId,
 void* url0)
{
    const QUrl&  __qt_url0 = (const QUrl& ) *(QUrl *)url0;
    QAbstractNetworkCache_QtDShell *__qt_this = (QAbstractNetworkCache_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_remove((const QUrl& )__qt_url0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractNetworkCache::updateMetaData(const QNetworkCacheMetaData & metaData)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractNetworkCache_updateMetaData_QNetworkCacheMetaData
(void* __this_nativeId,
 void* metaData0)
{
    const QNetworkCacheMetaData&  __qt_metaData0 = (const QNetworkCacheMetaData& ) *(QNetworkCacheMetaData *)metaData0;
    QAbstractNetworkCache_QtDShell *__qt_this = (QAbstractNetworkCache_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_updateMetaData((const QNetworkCacheMetaData& )__qt_metaData0, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QAbstractNetworkCache_staticMetaObject() {
    return (void*)&QAbstractNetworkCache::staticMetaObject;
}


