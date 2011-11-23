#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qvariant.h>

#include "QEventLoop_shell.h"
#include <iostream>
#include <qeventloop.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

class QEventLoopEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QEventLoopEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QEventLoop_createEntity(void *nativeId, void* dId)
{
    new QEventLoopEntity((QObject*)nativeId, dId);
}

QEventLoop_QtDShell::QEventLoop_QtDShell(void *d_ptr, QObject*  parent0)
    : QEventLoop(parent0),
      QObjectLink(this, d_ptr)
{
}

QEventLoop_QtDShell::~QEventLoop_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(CORE, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(CORE, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QEventLoop_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QEventLoop::metaObject();
}

int QEventLoop_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QEventLoop::qt_metacall(_c, _id, _a);
}

int QEventLoop_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QEventLoop::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QEventLoop_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QEventLoop_QtDShell *__qt_this = (QEventLoop_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(CORE, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QEventLoop_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QEventLoop_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QEventLoop_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QEventLoop_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(CORE, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QEventLoop_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QEventLoop_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QEventLoop_QtDShell::__public_sender() const
{
    return QObject::sender();
}

// Write virtual function overries used to decide on static/virtual calls
void QEventLoop_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QEventLoop_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QEventLoop_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QEventLoop_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QEventLoop_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// ---externC---
// QEventLoop::QEventLoop(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QEventLoop_QEventLoop_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QEventLoop_QtDShell *__qt_this = new QEventLoop_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QEventLoop::exec(QFlags<QEventLoop::ProcessEventsFlag> flags)
QTD_EXTERN QTD_EXPORT int qtd_QEventLoop_exec_ProcessEventsFlags
(void* __this_nativeId,
 int flags0)
{
    QFlags<QEventLoop::ProcessEventsFlag> __qt_flags0 = (QFlags<QEventLoop::ProcessEventsFlag>) flags0;
    QEventLoop_QtDShell *__qt_this = (QEventLoop_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->exec((QEventLoop::ProcessEventsFlags )__qt_flags0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QEventLoop::exit(int returnCode)
QTD_EXTERN QTD_EXPORT void qtd_QEventLoop_exit_int
(void* __this_nativeId,
 int returnCode0)
{
    QEventLoop_QtDShell *__qt_this = (QEventLoop_QtDShell *) __this_nativeId;
    __qt_this->exit((int )returnCode0);

}

// QEventLoop::isRunning() const
QTD_EXTERN QTD_EXPORT bool qtd_QEventLoop_isRunning_const
(void* __this_nativeId)
{
    QEventLoop_QtDShell *__qt_this = (QEventLoop_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isRunning();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QEventLoop::processEvents(QFlags<QEventLoop::ProcessEventsFlag> flags)
QTD_EXTERN QTD_EXPORT bool qtd_QEventLoop_processEvents_ProcessEventsFlags
(void* __this_nativeId,
 int flags0)
{
    QFlags<QEventLoop::ProcessEventsFlag> __qt_flags0 = (QFlags<QEventLoop::ProcessEventsFlag>) flags0;
    QEventLoop_QtDShell *__qt_this = (QEventLoop_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->processEvents((QEventLoop::ProcessEventsFlags )__qt_flags0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QEventLoop::processEvents(QFlags<QEventLoop::ProcessEventsFlag> flags, int maximumTime)
QTD_EXTERN QTD_EXPORT void qtd_QEventLoop_processEvents_ProcessEventsFlags_int
(void* __this_nativeId,
 int flags0,
 int maximumTime1)
{
    QFlags<QEventLoop::ProcessEventsFlag> __qt_flags0 = (QFlags<QEventLoop::ProcessEventsFlag>) flags0;
    QEventLoop_QtDShell *__qt_this = (QEventLoop_QtDShell *) __this_nativeId;
    __qt_this->processEvents((QEventLoop::ProcessEventsFlags )__qt_flags0, (int )maximumTime1);

}

// QEventLoop::quit()
QTD_EXTERN QTD_EXPORT void qtd_QEventLoop_quit
(void* __this_nativeId)
{
    QEventLoop_QtDShell *__qt_this = (QEventLoop_QtDShell *) __this_nativeId;
    __qt_this->quit();

}

// QEventLoop::wakeUp()
QTD_EXTERN QTD_EXPORT void qtd_QEventLoop_wakeUp
(void* __this_nativeId)
{
    QEventLoop_QtDShell *__qt_this = (QEventLoop_QtDShell *) __this_nativeId;
    __qt_this->wakeUp();

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QEventLoop_staticMetaObject() {
    return (void*)&QEventLoop::staticMetaObject;
}


