#include <QVariant>
#include <qabstractnetworkcache.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qnetworkdiskcache.h>
#include <qobject.h>
#include <qurl.h>
#include <qvariant.h>

#include "QNetworkDiskCache_shell.h"
#include <iostream>
#include <qnetworkdiskcache.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

class QNetworkDiskCacheEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QNetworkDiskCacheEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QNetworkDiskCache_createEntity(void *nativeId, void* dId)
{
    new QNetworkDiskCacheEntity((QObject*)nativeId, dId);
}

QNetworkDiskCache_QtDShell::QNetworkDiskCache_QtDShell(void *d_ptr, QObject*  parent0)
    : QNetworkDiskCache(parent0),
      QObjectLink(this, d_ptr)
{
}

QNetworkDiskCache_QtDShell::~QNetworkDiskCache_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(NETWORK, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(NETWORK, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QNetworkDiskCache_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QNetworkDiskCache::metaObject();
}

int QNetworkDiskCache_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QNetworkDiskCache::qt_metacall(_c, _id, _a);
}

int QNetworkDiskCache_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QNetworkDiskCache::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QNetworkDiskCache_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QNetworkDiskCache_QtDShell *__qt_this = (QNetworkDiskCache_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(NETWORK, qint64, QAbstractNetworkCache_cacheSize_const_dispatch, (void *dId))
qint64  QNetworkDiskCache_QtDShell::cacheSize() const
{
    return qtd_QAbstractNetworkCache_cacheSize_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QNetworkDiskCache_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, void, QAbstractNetworkCache_clear_dispatch, (void *dId))
void QNetworkDiskCache_QtDShell::clear()
{
    qtd_QAbstractNetworkCache_clear_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QNetworkDiskCache_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, void*, QAbstractNetworkCache_data_QUrl_dispatch, (void *dId, void* url0))
QIODevice*  QNetworkDiskCache_QtDShell::data(const QUrl&  url0)
{
    return (QIODevice*) qtd_QAbstractNetworkCache_data_QUrl_dispatch(QObjectLink::getLink(this)->dId, &(QUrl& )url0);
}

QTD_FUNC_DECL(NETWORK, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QNetworkDiskCache_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QNetworkDiskCache_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(NETWORK, qint64, QNetworkDiskCache_expire_dispatch, (void *dId))
QTD_FUNC(NETWORK, QNetworkDiskCache_expire_dispatch)
qint64  QNetworkDiskCache_QtDShell::expire()
{
    return qtd_QNetworkDiskCache_expire_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(NETWORK, void, QAbstractNetworkCache_insert_QIODevice_dispatch, (void *dId, void* device0))
void QNetworkDiskCache_QtDShell::insert(QIODevice*  device0)
{
    qtd_QAbstractNetworkCache_insert_QIODevice_dispatch(QObjectLink::getLink(this)->dId, (QIODevice* )device0);
}

QTD_FUNC_DECL(NETWORK, void*, QAbstractNetworkCache_metaData_QUrl_dispatch, (void *dId, void* url0))
QNetworkCacheMetaData  QNetworkDiskCache_QtDShell::metaData(const QUrl&  url0)
{
    QNetworkCacheMetaData *__qt_return_value = (QNetworkCacheMetaData*) qtd_QAbstractNetworkCache_metaData_QUrl_dispatch(QObjectLink::getLink(this)->dId, &(QUrl& )url0);
    return QNetworkCacheMetaData(*__qt_return_value);
}

QTD_FUNC_DECL(NETWORK, void*, QAbstractNetworkCache_prepare_QNetworkCacheMetaData_dispatch, (void *dId, void* metaData0))
QIODevice*  QNetworkDiskCache_QtDShell::prepare(const QNetworkCacheMetaData&  metaData0)
{
    return (QIODevice*) qtd_QAbstractNetworkCache_prepare_QNetworkCacheMetaData_dispatch(QObjectLink::getLink(this)->dId, &(QNetworkCacheMetaData& )metaData0);
}

QTD_FUNC_DECL(NETWORK, bool, QAbstractNetworkCache_remove_QUrl_dispatch, (void *dId, void* url0))
bool  QNetworkDiskCache_QtDShell::remove(const QUrl&  url0)
{
    return qtd_QAbstractNetworkCache_remove_QUrl_dispatch(QObjectLink::getLink(this)->dId, &(QUrl& )url0);
}

QTD_FUNC_DECL(NETWORK, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QNetworkDiskCache_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(NETWORK, void, QAbstractNetworkCache_updateMetaData_QNetworkCacheMetaData_dispatch, (void *dId, void* metaData0))
void QNetworkDiskCache_QtDShell::updateMetaData(const QNetworkCacheMetaData&  metaData0)
{
    qtd_QAbstractNetworkCache_updateMetaData_QNetworkCacheMetaData_dispatch(QObjectLink::getLink(this)->dId, &(QNetworkCacheMetaData& )metaData0);
}

QTD_EXTERN QTD_EXPORT void qtd_QNetworkDiskCache_initCallBacks(VoidFunc *virts) {
    qtd_QNetworkDiskCache_expire_dispatch = (qtd_QNetworkDiskCache_expire_dispatch_t) virts[0];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QNetworkDiskCache_QtDShell::__public_sender() const
{
    return QObject::sender();
}

// Write virtual function overries used to decide on static/virtual calls
qint64  QNetworkDiskCache_QtDShell::__override_cacheSize(bool static_call) const
{
    if (static_call) {
        return QNetworkDiskCache::cacheSize();
    } else {
        return cacheSize();
    }
}

void QNetworkDiskCache_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QNetworkDiskCache_QtDShell::__override_clear(bool static_call)
{
    if (static_call) {
        QNetworkDiskCache::clear();
    } else {
        clear();
    }
}

void QNetworkDiskCache_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

QIODevice*  QNetworkDiskCache_QtDShell::__override_data(const QUrl&  url0, bool static_call)
{
    if (static_call) {
        return QNetworkDiskCache::data((const QUrl& )url0);
    } else {
        return data((const QUrl& )url0);
    }
}

bool  QNetworkDiskCache_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QNetworkDiskCache_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

qint64  QNetworkDiskCache_QtDShell::__override_expire(bool static_call)
{
    if (static_call) {
        return QNetworkDiskCache::expire();
    } else {
        return expire();
    }
}

void QNetworkDiskCache_QtDShell::__override_insert(QIODevice*  device0, bool static_call)
{
    if (static_call) {
        QNetworkDiskCache::insert((QIODevice* )device0);
    } else {
        insert((QIODevice* )device0);
    }
}

QNetworkCacheMetaData  QNetworkDiskCache_QtDShell::__override_metaData(const QUrl&  url0, bool static_call)
{
    if (static_call) {
        return QNetworkDiskCache::metaData((const QUrl& )url0);
    } else {
        return metaData((const QUrl& )url0);
    }
}

QIODevice*  QNetworkDiskCache_QtDShell::__override_prepare(const QNetworkCacheMetaData&  metaData0, bool static_call)
{
    if (static_call) {
        return QNetworkDiskCache::prepare((const QNetworkCacheMetaData& )metaData0);
    } else {
        return prepare((const QNetworkCacheMetaData& )metaData0);
    }
}

bool  QNetworkDiskCache_QtDShell::__override_remove(const QUrl&  url0, bool static_call)
{
    if (static_call) {
        return QNetworkDiskCache::remove((const QUrl& )url0);
    } else {
        return remove((const QUrl& )url0);
    }
}

void QNetworkDiskCache_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QNetworkDiskCache_QtDShell::__override_updateMetaData(const QNetworkCacheMetaData&  metaData0, bool static_call)
{
    if (static_call) {
        QNetworkDiskCache::updateMetaData((const QNetworkCacheMetaData& )metaData0);
    } else {
        updateMetaData((const QNetworkCacheMetaData& )metaData0);
    }
}

// ---externC---
// QNetworkDiskCache::QNetworkDiskCache(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkDiskCache_QNetworkDiskCache_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QNetworkDiskCache_QtDShell *__qt_this = new QNetworkDiskCache_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QNetworkDiskCache::cacheDirectory() const
QTD_EXTERN QTD_EXPORT void qtd_QNetworkDiskCache_cacheDirectory_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QNetworkDiskCache_QtDShell *__qt_this = (QNetworkDiskCache_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->cacheDirectory();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QNetworkDiskCache::fileMetaData(const QString & fileName) const
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkDiskCache_fileMetaData_string_const
(void* __this_nativeId,
 DArray fileName0)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    QNetworkDiskCache_QtDShell *__qt_this = (QNetworkDiskCache_QtDShell *) __this_nativeId;
    QNetworkCacheMetaData  __qt_return_value = __qt_this->fileMetaData((const QString& )__qt_fileName0);

    void* __d_return_value = (void*) new QNetworkCacheMetaData(__qt_return_value);

    return __d_return_value;
}

// QNetworkDiskCache::maximumCacheSize() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QNetworkDiskCache_maximumCacheSize_const
(void* __this_nativeId)
{
    QNetworkDiskCache_QtDShell *__qt_this = (QNetworkDiskCache_QtDShell *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->maximumCacheSize();

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkDiskCache::setCacheDirectory(const QString & cacheDir)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkDiskCache_setCacheDirectory_string
(void* __this_nativeId,
 DArray cacheDir0)
{
    QString __qt_cacheDir0 = QString::fromUtf8((const char *)cacheDir0.ptr, cacheDir0.length);
    QNetworkDiskCache_QtDShell *__qt_this = (QNetworkDiskCache_QtDShell *) __this_nativeId;
    __qt_this->setCacheDirectory((const QString& )__qt_cacheDir0);

}

// QNetworkDiskCache::setMaximumCacheSize(qint64 size)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkDiskCache_setMaximumCacheSize_long
(void* __this_nativeId,
 qint64 size0)
{
    QNetworkDiskCache_QtDShell *__qt_this = (QNetworkDiskCache_QtDShell *) __this_nativeId;
    __qt_this->setMaximumCacheSize((qint64 )size0);

}

// QNetworkDiskCache::cacheSize() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QNetworkDiskCache_cacheSize_const
(void* __this_nativeId)
{
    QNetworkDiskCache_QtDShell *__qt_this = (QNetworkDiskCache_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_cacheSize(__do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkDiskCache::clear()
QTD_EXTERN QTD_EXPORT void qtd_QNetworkDiskCache_clear
(void* __this_nativeId)
{
    QNetworkDiskCache_QtDShell *__qt_this = (QNetworkDiskCache_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_clear(__do_static_call);

}

// QNetworkDiskCache::data(const QUrl & url)
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkDiskCache_data_QUrl
(void* __this_nativeId,
 void* url0)
{
    const QUrl&  __qt_url0 = (const QUrl& ) *(QUrl *)url0;
    QNetworkDiskCache_QtDShell *__qt_this = (QNetworkDiskCache_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QIODevice*  __qt_return_value = __qt_this->__override_data((const QUrl& )__qt_url0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QNetworkDiskCache::expire()
QTD_EXTERN QTD_EXPORT qint64 qtd_QNetworkDiskCache_expire
(void* __this_nativeId)
{
    QNetworkDiskCache_QtDShell *__qt_this = (QNetworkDiskCache_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    qint64  __qt_return_value = __qt_this->__override_expire(__do_static_call);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkDiskCache::insert(QIODevice * device)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkDiskCache_insert_QIODevice
(void* __this_nativeId,
 void* device0)
{
    QIODevice*  __qt_device0 = (QIODevice* ) device0;
    QNetworkDiskCache_QtDShell *__qt_this = (QNetworkDiskCache_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_insert((QIODevice* )__qt_device0, __do_static_call);

}

// QNetworkDiskCache::metaData(const QUrl & url)
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkDiskCache_metaData_QUrl
(void* __this_nativeId,
 void* url0)
{
    const QUrl&  __qt_url0 = (const QUrl& ) *(QUrl *)url0;
    QNetworkDiskCache_QtDShell *__qt_this = (QNetworkDiskCache_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QNetworkCacheMetaData  __qt_return_value = __qt_this->__override_metaData((const QUrl& )__qt_url0, __do_static_call);

    void* __d_return_value = (void*) new QNetworkCacheMetaData(__qt_return_value);

    return __d_return_value;
}

// QNetworkDiskCache::prepare(const QNetworkCacheMetaData & metaData)
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkDiskCache_prepare_QNetworkCacheMetaData
(void* __this_nativeId,
 void* metaData0)
{
    const QNetworkCacheMetaData&  __qt_metaData0 = (const QNetworkCacheMetaData& ) *(QNetworkCacheMetaData *)metaData0;
    QNetworkDiskCache_QtDShell *__qt_this = (QNetworkDiskCache_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QIODevice*  __qt_return_value = __qt_this->__override_prepare((const QNetworkCacheMetaData& )__qt_metaData0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QNetworkDiskCache::remove(const QUrl & url)
QTD_EXTERN QTD_EXPORT bool qtd_QNetworkDiskCache_remove_QUrl
(void* __this_nativeId,
 void* url0)
{
    const QUrl&  __qt_url0 = (const QUrl& ) *(QUrl *)url0;
    QNetworkDiskCache_QtDShell *__qt_this = (QNetworkDiskCache_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_remove((const QUrl& )__qt_url0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QNetworkDiskCache::updateMetaData(const QNetworkCacheMetaData & metaData)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkDiskCache_updateMetaData_QNetworkCacheMetaData
(void* __this_nativeId,
 void* metaData0)
{
    const QNetworkCacheMetaData&  __qt_metaData0 = (const QNetworkCacheMetaData& ) *(QNetworkCacheMetaData *)metaData0;
    QNetworkDiskCache_QtDShell *__qt_this = (QNetworkDiskCache_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_updateMetaData((const QNetworkCacheMetaData& )__qt_metaData0, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QNetworkDiskCache_staticMetaObject() {
    return (void*)&QNetworkDiskCache::staticMetaObject;
}


