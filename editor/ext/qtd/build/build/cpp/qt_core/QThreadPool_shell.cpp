#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qrunnable.h>
#include <qthreadpool.h>
#include <qvariant.h>

#include "QThreadPool_shell.h"
#include <iostream>
#include <qthreadpool.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

class QThreadPoolEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QThreadPoolEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QThreadPool_createEntity(void *nativeId, void* dId)
{
    new QThreadPoolEntity((QObject*)nativeId, dId);
}

QThreadPool_QtDShell::QThreadPool_QtDShell(void *d_ptr, QObject*  parent0)
    : QThreadPool(parent0),
      QObjectLink(this, d_ptr)
{
}

QThreadPool_QtDShell::~QThreadPool_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(CORE, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(CORE, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QThreadPool_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QThreadPool::metaObject();
}

int QThreadPool_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QThreadPool::qt_metacall(_c, _id, _a);
}

int QThreadPool_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QThreadPool::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QThreadPool_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QThreadPool_QtDShell *__qt_this = (QThreadPool_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(CORE, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QThreadPool_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QThreadPool_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QThreadPool_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QThreadPool_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(CORE, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QThreadPool_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QThreadPool_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QThreadPool_QtDShell::__public_sender() const
{
    return QObject::sender();
}

// Write virtual function overries used to decide on static/virtual calls
void QThreadPool_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QThreadPool_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QThreadPool_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QThreadPool_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QThreadPool_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// ---externC---
// QThreadPool::QThreadPool(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QThreadPool_QThreadPool_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QThreadPool_QtDShell *__qt_this = new QThreadPool_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QThreadPool::activeThreadCount() const
QTD_EXTERN QTD_EXPORT int qtd_QThreadPool_activeThreadCount_const
(void* __this_nativeId)
{
    QThreadPool_QtDShell *__qt_this = (QThreadPool_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->activeThreadCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QThreadPool::expiryTimeout() const
QTD_EXTERN QTD_EXPORT int qtd_QThreadPool_expiryTimeout_const
(void* __this_nativeId)
{
    QThreadPool_QtDShell *__qt_this = (QThreadPool_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->expiryTimeout();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QThreadPool::maxThreadCount() const
QTD_EXTERN QTD_EXPORT int qtd_QThreadPool_maxThreadCount_const
(void* __this_nativeId)
{
    QThreadPool_QtDShell *__qt_this = (QThreadPool_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->maxThreadCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QThreadPool::releaseThread()
QTD_EXTERN QTD_EXPORT void qtd_QThreadPool_releaseThread
(void* __this_nativeId)
{
    QThreadPool_QtDShell *__qt_this = (QThreadPool_QtDShell *) __this_nativeId;
    __qt_this->releaseThread();

}

// QThreadPool::reserveThread()
QTD_EXTERN QTD_EXPORT void qtd_QThreadPool_reserveThread
(void* __this_nativeId)
{
    QThreadPool_QtDShell *__qt_this = (QThreadPool_QtDShell *) __this_nativeId;
    __qt_this->reserveThread();

}

// QThreadPool::setExpiryTimeout(int expiryTimeout)
QTD_EXTERN QTD_EXPORT void qtd_QThreadPool_setExpiryTimeout_int
(void* __this_nativeId,
 int expiryTimeout0)
{
    QThreadPool_QtDShell *__qt_this = (QThreadPool_QtDShell *) __this_nativeId;
    __qt_this->setExpiryTimeout((int )expiryTimeout0);

}

// QThreadPool::setMaxThreadCount(int maxThreadCount)
QTD_EXTERN QTD_EXPORT void qtd_QThreadPool_setMaxThreadCount_int
(void* __this_nativeId,
 int maxThreadCount0)
{
    QThreadPool_QtDShell *__qt_this = (QThreadPool_QtDShell *) __this_nativeId;
    __qt_this->setMaxThreadCount((int )maxThreadCount0);

}

// QThreadPool::start(QRunnable * runnable, int priority)
QTD_EXTERN QTD_EXPORT void qtd_QThreadPool_start_QRunnable_int
(void* __this_nativeId,
 void* runnable0,
 int priority1)
{
    QRunnable*  __qt_runnable0 = (QRunnable* ) runnable0;
    QThreadPool_QtDShell *__qt_this = (QThreadPool_QtDShell *) __this_nativeId;
    __qt_this->start((QRunnable* )__qt_runnable0, (int )priority1);

}

// QThreadPool::tryStart(QRunnable * runnable)
QTD_EXTERN QTD_EXPORT bool qtd_QThreadPool_tryStart_QRunnable
(void* __this_nativeId,
 void* runnable0)
{
    QRunnable*  __qt_runnable0 = (QRunnable* ) runnable0;
    QThreadPool_QtDShell *__qt_this = (QThreadPool_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->tryStart((QRunnable* )__qt_runnable0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QThreadPool::waitForDone()
QTD_EXTERN QTD_EXPORT void qtd_QThreadPool_waitForDone
(void* __this_nativeId)
{
    QThreadPool_QtDShell *__qt_this = (QThreadPool_QtDShell *) __this_nativeId;
    __qt_this->waitForDone();

}

// QThreadPool::globalInstance()
QTD_EXTERN QTD_EXPORT void* qtd_QThreadPool_globalInstance
()
{
    QThreadPool*  __qt_return_value = QThreadPool_QtDShell::globalInstance();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QThreadPool_staticMetaObject() {
    return (void*)&QThreadPool::staticMetaObject;
}


