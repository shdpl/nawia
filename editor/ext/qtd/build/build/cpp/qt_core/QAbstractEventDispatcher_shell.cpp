#include <QVariant>
#include <qabstracteventdispatcher.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qpair.h>
#include <qsocketnotifier.h>
#include <qvariant.h>

#include "QAbstractEventDispatcher_shell.h"
#include <iostream>
#include <qabstracteventdispatcher.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

class QAbstractEventDispatcherEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QAbstractEventDispatcherEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QAbstractEventDispatcher_createEntity(void *nativeId, void* dId)
{
    new QAbstractEventDispatcherEntity((QObject*)nativeId, dId);
}

QAbstractEventDispatcher_QtDShell::QAbstractEventDispatcher_QtDShell(void *d_ptr, QObject*  parent0)
    : QAbstractEventDispatcher(parent0),
      QObjectLink(this, d_ptr)
{
}

QAbstractEventDispatcher_QtDShell::~QAbstractEventDispatcher_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(CORE, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(CORE, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QAbstractEventDispatcher_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QAbstractEventDispatcher::metaObject();
}

int QAbstractEventDispatcher_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QAbstractEventDispatcher::qt_metacall(_c, _id, _a);
}

int QAbstractEventDispatcher_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QAbstractEventDispatcher::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QAbstractEventDispatcher_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QAbstractEventDispatcher_QtDShell *__qt_this = (QAbstractEventDispatcher_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(CORE, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QAbstractEventDispatcher_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, void, QAbstractEventDispatcher_closingDown_dispatch, (void *dId))
QTD_FUNC(CORE, QAbstractEventDispatcher_closingDown_dispatch)
void QAbstractEventDispatcher_QtDShell::closingDown()
{
    qtd_QAbstractEventDispatcher_closingDown_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QAbstractEventDispatcher_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QAbstractEventDispatcher_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QAbstractEventDispatcher_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(CORE, void, QAbstractEventDispatcher_flush_dispatch, (void *dId))
QTD_FUNC(CORE, QAbstractEventDispatcher_flush_dispatch)
void QAbstractEventDispatcher_QtDShell::flush()
{
    qtd_QAbstractEventDispatcher_flush_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, bool, QAbstractEventDispatcher_hasPendingEvents_dispatch, (void *dId))
QTD_FUNC(CORE, QAbstractEventDispatcher_hasPendingEvents_dispatch)
bool  QAbstractEventDispatcher_QtDShell::hasPendingEvents()
{
    return qtd_QAbstractEventDispatcher_hasPendingEvents_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, void, QAbstractEventDispatcher_interrupt_dispatch, (void *dId))
QTD_FUNC(CORE, QAbstractEventDispatcher_interrupt_dispatch)
void QAbstractEventDispatcher_QtDShell::interrupt()
{
    qtd_QAbstractEventDispatcher_interrupt_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, bool, QAbstractEventDispatcher_processEvents_ProcessEventsFlags_dispatch, (void *dId, int flags0))
QTD_FUNC(CORE, QAbstractEventDispatcher_processEvents_ProcessEventsFlags_dispatch)
bool  QAbstractEventDispatcher_QtDShell::processEvents(QEventLoop::ProcessEventsFlags  flags0)
{
    return qtd_QAbstractEventDispatcher_processEvents_ProcessEventsFlags_dispatch(QObjectLink::getLink(this)->dId, (QEventLoop::ProcessEventsFlags )flags0);
}

QTD_FUNC_DECL(CORE, void, QAbstractEventDispatcher_registerSocketNotifier_QSocketNotifier_dispatch, (void *dId, void* notifier0))
QTD_FUNC(CORE, QAbstractEventDispatcher_registerSocketNotifier_QSocketNotifier_dispatch)
void QAbstractEventDispatcher_QtDShell::registerSocketNotifier(QSocketNotifier*  notifier0)
{
    qtd_QAbstractEventDispatcher_registerSocketNotifier_QSocketNotifier_dispatch(QObjectLink::getLink(this)->dId, (QSocketNotifier* )notifier0);
}

QTD_FUNC_DECL(CORE, void, QAbstractEventDispatcher_registerTimer_int_int_QObject_dispatch, (void *dId, int timerId0, int interval1, void* object2))
QTD_FUNC(CORE, QAbstractEventDispatcher_registerTimer_int_int_QObject_dispatch)
void QAbstractEventDispatcher_QtDShell::registerTimer(int  timerId0, int  interval1, QObject*  object2)
{
    qtd_QAbstractEventDispatcher_registerTimer_int_int_QObject_dispatch(QObjectLink::getLink(this)->dId, (int )timerId0, (int )interval1, (QObject* )object2);
}

QTD_FUNC_DECL(CORE, void, QAbstractEventDispatcher_startingUp_dispatch, (void *dId))
QTD_FUNC(CORE, QAbstractEventDispatcher_startingUp_dispatch)
void QAbstractEventDispatcher_QtDShell::startingUp()
{
    qtd_QAbstractEventDispatcher_startingUp_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QAbstractEventDispatcher_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, void, QAbstractEventDispatcher_unregisterSocketNotifier_QSocketNotifier_dispatch, (void *dId, void* notifier0))
QTD_FUNC(CORE, QAbstractEventDispatcher_unregisterSocketNotifier_QSocketNotifier_dispatch)
void QAbstractEventDispatcher_QtDShell::unregisterSocketNotifier(QSocketNotifier*  notifier0)
{
    qtd_QAbstractEventDispatcher_unregisterSocketNotifier_QSocketNotifier_dispatch(QObjectLink::getLink(this)->dId, (QSocketNotifier* )notifier0);
}

QTD_FUNC_DECL(CORE, bool, QAbstractEventDispatcher_unregisterTimer_int_dispatch, (void *dId, int timerId0))
QTD_FUNC(CORE, QAbstractEventDispatcher_unregisterTimer_int_dispatch)
bool  QAbstractEventDispatcher_QtDShell::unregisterTimer(int  timerId0)
{
    return qtd_QAbstractEventDispatcher_unregisterTimer_int_dispatch(QObjectLink::getLink(this)->dId, (int )timerId0);
}

QTD_FUNC_DECL(CORE, bool, QAbstractEventDispatcher_unregisterTimers_QObject_dispatch, (void *dId, void* object0))
QTD_FUNC(CORE, QAbstractEventDispatcher_unregisterTimers_QObject_dispatch)
bool  QAbstractEventDispatcher_QtDShell::unregisterTimers(QObject*  object0)
{
    return qtd_QAbstractEventDispatcher_unregisterTimers_QObject_dispatch(QObjectLink::getLink(this)->dId, (QObject* )object0);
}

QTD_FUNC_DECL(CORE, void, QAbstractEventDispatcher_wakeUp_dispatch, (void *dId))
QTD_FUNC(CORE, QAbstractEventDispatcher_wakeUp_dispatch)
void QAbstractEventDispatcher_QtDShell::wakeUp()
{
    qtd_QAbstractEventDispatcher_wakeUp_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractEventDispatcher_initCallBacks(VoidFunc *virts) {
    qtd_QAbstractEventDispatcher_closingDown_dispatch = (qtd_QAbstractEventDispatcher_closingDown_dispatch_t) virts[0];
    qtd_QAbstractEventDispatcher_flush_dispatch = (qtd_QAbstractEventDispatcher_flush_dispatch_t) virts[1];
    qtd_QAbstractEventDispatcher_hasPendingEvents_dispatch = (qtd_QAbstractEventDispatcher_hasPendingEvents_dispatch_t) virts[2];
    qtd_QAbstractEventDispatcher_interrupt_dispatch = (qtd_QAbstractEventDispatcher_interrupt_dispatch_t) virts[3];
    qtd_QAbstractEventDispatcher_processEvents_ProcessEventsFlags_dispatch = (qtd_QAbstractEventDispatcher_processEvents_ProcessEventsFlags_dispatch_t) virts[4];
    qtd_QAbstractEventDispatcher_registerSocketNotifier_QSocketNotifier_dispatch = (qtd_QAbstractEventDispatcher_registerSocketNotifier_QSocketNotifier_dispatch_t) virts[5];
    qtd_QAbstractEventDispatcher_registerTimer_int_int_QObject_dispatch = (qtd_QAbstractEventDispatcher_registerTimer_int_int_QObject_dispatch_t) virts[6];
    qtd_QAbstractEventDispatcher_startingUp_dispatch = (qtd_QAbstractEventDispatcher_startingUp_dispatch_t) virts[7];
    qtd_QAbstractEventDispatcher_unregisterSocketNotifier_QSocketNotifier_dispatch = (qtd_QAbstractEventDispatcher_unregisterSocketNotifier_QSocketNotifier_dispatch_t) virts[8];
    qtd_QAbstractEventDispatcher_unregisterTimer_int_dispatch = (qtd_QAbstractEventDispatcher_unregisterTimer_int_dispatch_t) virts[9];
    qtd_QAbstractEventDispatcher_unregisterTimers_QObject_dispatch = (qtd_QAbstractEventDispatcher_unregisterTimers_QObject_dispatch_t) virts[10];
    qtd_QAbstractEventDispatcher_wakeUp_dispatch = (qtd_QAbstractEventDispatcher_wakeUp_dispatch_t) virts[11];
}
// Functions in shell class
int  QAbstractEventDispatcher_QtDShell::registerTimer(int  interval0, QObject*  object1)
{
    return QAbstractEventDispatcher::registerTimer((int )interval0, (QObject* )object1);
}

// public overrides for functions that are protected in the base class
QObject*  QAbstractEventDispatcher_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QAbstractEventDispatcher_QtDShell::__public_aboutToBlock()
{
    QAbstractEventDispatcher::aboutToBlock();
}

void QAbstractEventDispatcher_QtDShell::__public_awake()
{
    QAbstractEventDispatcher::awake();
}

// Write virtual function overries used to decide on static/virtual calls
void QAbstractEventDispatcher_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QAbstractEventDispatcher_QtDShell::__override_closingDown(bool static_call)
{
    if (static_call) {
        QAbstractEventDispatcher::closingDown();
    } else {
        closingDown();
    }
}

void QAbstractEventDispatcher_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QAbstractEventDispatcher_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QAbstractEventDispatcher_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QAbstractEventDispatcher_QtDShell::__override_flush(bool static_call)
{
    if (static_call) {
        return;
    } else {
        flush();
    }
}

bool  QAbstractEventDispatcher_QtDShell::__override_hasPendingEvents(bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return hasPendingEvents();
    }
}

void QAbstractEventDispatcher_QtDShell::__override_interrupt(bool static_call)
{
    if (static_call) {
        return;
    } else {
        interrupt();
    }
}

bool  QAbstractEventDispatcher_QtDShell::__override_processEvents(int  flags0, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return processEvents((QEventLoop::ProcessEventsFlags )flags0);
    }
}

void QAbstractEventDispatcher_QtDShell::__override_registerSocketNotifier(QSocketNotifier*  notifier0, bool static_call)
{
    if (static_call) {
        return;
    } else {
        registerSocketNotifier((QSocketNotifier* )notifier0);
    }
}

void QAbstractEventDispatcher_QtDShell::__override_registerTimer(int  timerId0, int  interval1, QObject*  object2, bool static_call)
{
    if (static_call) {
        return;
    } else {
        registerTimer((int )timerId0, (int )interval1, (QObject* )object2);
    }
}

void QAbstractEventDispatcher_QtDShell::__override_startingUp(bool static_call)
{
    if (static_call) {
        QAbstractEventDispatcher::startingUp();
    } else {
        startingUp();
    }
}

void QAbstractEventDispatcher_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QAbstractEventDispatcher_QtDShell::__override_unregisterSocketNotifier(QSocketNotifier*  notifier0, bool static_call)
{
    if (static_call) {
        return;
    } else {
        unregisterSocketNotifier((QSocketNotifier* )notifier0);
    }
}

bool  QAbstractEventDispatcher_QtDShell::__override_unregisterTimer(int  timerId0, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return unregisterTimer((int )timerId0);
    }
}

bool  QAbstractEventDispatcher_QtDShell::__override_unregisterTimers(QObject*  object0, bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return unregisterTimers((QObject* )object0);
    }
}

void QAbstractEventDispatcher_QtDShell::__override_wakeUp(bool static_call)
{
    if (static_call) {
        return;
    } else {
        wakeUp();
    }
}

// QAbstractEventDispatcher::aboutToBlock()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractEventDispatcher_aboutToBlock
(void* __this_nativeId)
{
    QAbstractEventDispatcher_QtDShell *__qt_this = (QAbstractEventDispatcher_QtDShell *) __this_nativeId;
    __qt_this->__public_aboutToBlock();

}

// QAbstractEventDispatcher::awake()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractEventDispatcher_awake
(void* __this_nativeId)
{
    QAbstractEventDispatcher_QtDShell *__qt_this = (QAbstractEventDispatcher_QtDShell *) __this_nativeId;
    __qt_this->__public_awake();

}

// ---externC---
// QAbstractEventDispatcher::QAbstractEventDispatcher(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractEventDispatcher_QAbstractEventDispatcher_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QAbstractEventDispatcher_QtDShell *__qt_this = new QAbstractEventDispatcher_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QAbstractEventDispatcher::registerTimer(int interval, QObject * object)
QTD_EXTERN QTD_EXPORT int qtd_QAbstractEventDispatcher_registerTimer_int_QObject
(void* __this_nativeId,
 int interval0,
 void* object1)
{
    QObject*  __qt_object1 = (QObject* ) object1;
    QAbstractEventDispatcher *__qt_this = (QAbstractEventDispatcher *) __this_nativeId;
    int  __qt_return_value = __qt_this->registerTimer((int )interval0, (QObject* )__qt_object1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractEventDispatcher::closingDown()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractEventDispatcher_closingDown
(void* __this_nativeId)
{
    QAbstractEventDispatcher_QtDShell *__qt_this = (QAbstractEventDispatcher_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_closingDown(__do_static_call);

}

// QAbstractEventDispatcher::flush()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractEventDispatcher_flush
(void* __this_nativeId)
{
    QAbstractEventDispatcher_QtDShell *__qt_this = (QAbstractEventDispatcher_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_flush(__do_static_call);

}

// QAbstractEventDispatcher::hasPendingEvents()
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractEventDispatcher_hasPendingEvents
(void* __this_nativeId)
{
    QAbstractEventDispatcher_QtDShell *__qt_this = (QAbstractEventDispatcher_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_hasPendingEvents(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractEventDispatcher::interrupt()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractEventDispatcher_interrupt
(void* __this_nativeId)
{
    QAbstractEventDispatcher_QtDShell *__qt_this = (QAbstractEventDispatcher_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_interrupt(__do_static_call);

}

// QAbstractEventDispatcher::processEvents(QFlags<QEventLoop::ProcessEventsFlag> flags)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractEventDispatcher_processEvents_ProcessEventsFlags
(void* __this_nativeId,
 int flags0)
{
    QFlags<QEventLoop::ProcessEventsFlag> __qt_flags0 = (QFlags<QEventLoop::ProcessEventsFlag>) flags0;
    QAbstractEventDispatcher_QtDShell *__qt_this = (QAbstractEventDispatcher_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_processEvents((QEventLoop::ProcessEventsFlags )__qt_flags0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractEventDispatcher::registerSocketNotifier(QSocketNotifier * notifier)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractEventDispatcher_registerSocketNotifier_QSocketNotifier
(void* __this_nativeId,
 void* notifier0)
{
    QSocketNotifier*  __qt_notifier0 = (QSocketNotifier* ) notifier0;
    QAbstractEventDispatcher_QtDShell *__qt_this = (QAbstractEventDispatcher_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_registerSocketNotifier((QSocketNotifier* )__qt_notifier0, __do_static_call);

}

// QAbstractEventDispatcher::registerTimer(int timerId, int interval, QObject * object)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractEventDispatcher_registerTimer_int_int_QObject
(void* __this_nativeId,
 int timerId0,
 int interval1,
 void* object2)
{
    QObject*  __qt_object2 = (QObject* ) object2;
    QAbstractEventDispatcher_QtDShell *__qt_this = (QAbstractEventDispatcher_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_registerTimer((int )timerId0, (int )interval1, (QObject* )__qt_object2, __do_static_call);

}

// QAbstractEventDispatcher::registeredTimers(QObject * object) const
// QAbstractEventDispatcher::startingUp()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractEventDispatcher_startingUp
(void* __this_nativeId)
{
    QAbstractEventDispatcher_QtDShell *__qt_this = (QAbstractEventDispatcher_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_startingUp(__do_static_call);

}

// QAbstractEventDispatcher::unregisterSocketNotifier(QSocketNotifier * notifier)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractEventDispatcher_unregisterSocketNotifier_QSocketNotifier
(void* __this_nativeId,
 void* notifier0)
{
    QSocketNotifier*  __qt_notifier0 = (QSocketNotifier* ) notifier0;
    QAbstractEventDispatcher_QtDShell *__qt_this = (QAbstractEventDispatcher_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_unregisterSocketNotifier((QSocketNotifier* )__qt_notifier0, __do_static_call);

}

// QAbstractEventDispatcher::unregisterTimer(int timerId)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractEventDispatcher_unregisterTimer_int
(void* __this_nativeId,
 int timerId0)
{
    QAbstractEventDispatcher_QtDShell *__qt_this = (QAbstractEventDispatcher_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_unregisterTimer((int )timerId0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractEventDispatcher::unregisterTimers(QObject * object)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractEventDispatcher_unregisterTimers_QObject
(void* __this_nativeId,
 void* object0)
{
    QObject*  __qt_object0 = (QObject* ) object0;
    QAbstractEventDispatcher_QtDShell *__qt_this = (QAbstractEventDispatcher_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_unregisterTimers((QObject* )__qt_object0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractEventDispatcher::wakeUp()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractEventDispatcher_wakeUp
(void* __this_nativeId)
{
    QAbstractEventDispatcher_QtDShell *__qt_this = (QAbstractEventDispatcher_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_wakeUp(__do_static_call);

}

// QAbstractEventDispatcher::instance(QThread * thread)
// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QAbstractEventDispatcher_staticMetaObject() {
    return (void*)&QAbstractEventDispatcher::staticMetaObject;
}


