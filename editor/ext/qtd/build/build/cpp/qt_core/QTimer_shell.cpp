#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qtimer.h>
#include <qvariant.h>

#include "QTimer_shell.h"
#include <iostream>
#include <qtimer.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

class QTimerEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QTimerEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QTimer_createEntity(void *nativeId, void* dId)
{
    new QTimerEntity((QObject*)nativeId, dId);
}

QTimer_QtDShell::QTimer_QtDShell(void *d_ptr, QObject*  parent0)
    : QTimer(parent0),
      QObjectLink(this, d_ptr)
{
}

QTimer_QtDShell::~QTimer_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(CORE, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(CORE, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QTimer_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QTimer::metaObject();
}

int QTimer_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QTimer::qt_metacall(_c, _id, _a);
}

int QTimer_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QTimer::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QTimer_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QTimer_QtDShell *__qt_this = (QTimer_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(CORE, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QTimer_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTimer_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QTimer_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QTimer_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(CORE, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QTimer_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QTimer_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QTimer_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QTimer_QtDShell::__public_timeout()
{
    QTimer::timeout();
}

// Write virtual function overries used to decide on static/virtual calls
void QTimer_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QTimer_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QTimer_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QTimer_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QTimer_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QTimer::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// QTimer::timeout()
QTD_EXTERN QTD_EXPORT void qtd_QTimer_timeout
(void* __this_nativeId)
{
    QTimer_QtDShell *__qt_this = (QTimer_QtDShell *) __this_nativeId;
    __qt_this->__public_timeout();

}

// ---externC---
// QTimer::QTimer(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QTimer_QTimer_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QTimer_QtDShell *__qt_this = new QTimer_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QTimer::interval() const
QTD_EXTERN QTD_EXPORT int qtd_QTimer_interval_const
(void* __this_nativeId)
{
    QTimer_QtDShell *__qt_this = (QTimer_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->interval();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTimer::isActive() const
QTD_EXTERN QTD_EXPORT bool qtd_QTimer_isActive_const
(void* __this_nativeId)
{
    QTimer_QtDShell *__qt_this = (QTimer_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isActive();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTimer::isSingleShot() const
QTD_EXTERN QTD_EXPORT bool qtd_QTimer_isSingleShot_const
(void* __this_nativeId)
{
    QTimer_QtDShell *__qt_this = (QTimer_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isSingleShot();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTimer::setInterval(int msec)
QTD_EXTERN QTD_EXPORT void qtd_QTimer_setInterval_int
(void* __this_nativeId,
 int msec0)
{
    QTimer_QtDShell *__qt_this = (QTimer_QtDShell *) __this_nativeId;
    __qt_this->setInterval((int )msec0);

}

// QTimer::setSingleShot(bool singleShot)
QTD_EXTERN QTD_EXPORT void qtd_QTimer_setSingleShot_bool
(void* __this_nativeId,
 bool singleShot0)
{
    QTimer_QtDShell *__qt_this = (QTimer_QtDShell *) __this_nativeId;
    __qt_this->setSingleShot((bool )singleShot0);

}

// QTimer::start()
QTD_EXTERN QTD_EXPORT void qtd_QTimer_start
(void* __this_nativeId)
{
    QTimer_QtDShell *__qt_this = (QTimer_QtDShell *) __this_nativeId;
    __qt_this->start();

}

// QTimer::start(int msec)
QTD_EXTERN QTD_EXPORT void qtd_QTimer_start_int
(void* __this_nativeId,
 int msec0)
{
    QTimer_QtDShell *__qt_this = (QTimer_QtDShell *) __this_nativeId;
    __qt_this->start((int )msec0);

}

// QTimer::stop()
QTD_EXTERN QTD_EXPORT void qtd_QTimer_stop
(void* __this_nativeId)
{
    QTimer_QtDShell *__qt_this = (QTimer_QtDShell *) __this_nativeId;
    __qt_this->stop();

}

// QTimer::timerId() const
QTD_EXTERN QTD_EXPORT int qtd_QTimer_timerId_const
(void* __this_nativeId)
{
    QTimer_QtDShell *__qt_this = (QTimer_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->timerId();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTimer::timerEvent(QTimerEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTimer_timerEvent_QTimerEvent
(void* __this_nativeId,
 void* arg__1)
{
    QTimerEvent*  __qt_arg__1 = (QTimerEvent* ) arg__1;
    QTimer_QtDShell *__qt_this = (QTimer_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_timerEvent((QTimerEvent* )__qt_arg__1, __do_static_call);

}

// QTimer::singleShot(int msec, QObject * receiver, const char * member)
QTD_EXTERN QTD_EXPORT void qtd_QTimer_singleShot_int_QObject_nativepointerchar
(int msec0,
 void* receiver1,
 char* member2)
{
    QObject*  __qt_receiver1 = (QObject* ) receiver1;
    const char*  __qt_member2 = (const char* ) member2;
    QTimer_QtDShell::singleShot((int )msec0, (QObject* )__qt_receiver1, (const char* )__qt_member2);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QTimer_staticMetaObject() {
    return (void*)&QTimer::staticMetaObject;
}


