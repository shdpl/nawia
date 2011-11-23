#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qvariant.h>

#include "QFutureWatcherBase_shell.h"
#include <iostream>
#include <qfuturewatcher.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

class QFutureWatcherBaseEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QFutureWatcherBaseEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QFutureWatcherBase_createEntity(void *nativeId, void* dId)
{
    new QFutureWatcherBaseEntity((QObject*)nativeId, dId);
}

QFutureWatcherBase_QtDShell::QFutureWatcherBase_QtDShell(void *d_ptr, QObject*  parent0)
    : QFutureWatcherBase(parent0),
      QObjectLink(this, d_ptr)
{
}

QFutureWatcherBase_QtDShell::~QFutureWatcherBase_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(CORE, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(CORE, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QFutureWatcherBase_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QFutureWatcherBase::metaObject();
}

int QFutureWatcherBase_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QFutureWatcherBase::qt_metacall(_c, _id, _a);
}

int QFutureWatcherBase_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QFutureWatcherBase::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QFutureWatcherBase_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QFutureWatcherBase_QtDShell *__qt_this = (QFutureWatcherBase_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(CORE, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QFutureWatcherBase_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QFutureWatcherBase_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_event_QEvent_dispatch, (void *dId, void* event0))
bool  QFutureWatcherBase_QtDShell::event(QEvent*  event0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(CORE, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QFutureWatcherBase_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(CORE, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QFutureWatcherBase_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QFutureWatcherBase_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QFutureWatcherBase_QtDShell::__public_connectOutputInterface()
{
    QFutureWatcherBase::connectOutputInterface();
}

void QFutureWatcherBase_QtDShell::__public_disconnectOutputInterface(bool  pendingAssignment0)
{
    QFutureWatcherBase::disconnectOutputInterface((bool )pendingAssignment0);
}

QObject*  QFutureWatcherBase_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QFutureWatcherBase_QtDShell::__public_canceled()
{
    QFutureWatcherBase::canceled();
}

void QFutureWatcherBase_QtDShell::__public_finished()
{
    QFutureWatcherBase::finished();
}

void QFutureWatcherBase_QtDShell::__public_paused()
{
    QFutureWatcherBase::paused();
}

void QFutureWatcherBase_QtDShell::__public_progressRangeChanged(int  minimum0, int  maximum1)
{
    QFutureWatcherBase::progressRangeChanged((int )minimum0, (int )maximum1);
}

void QFutureWatcherBase_QtDShell::__public_progressTextChanged(const QString&  progressText0)
{
    QFutureWatcherBase::progressTextChanged((const QString& )progressText0);
}

void QFutureWatcherBase_QtDShell::__public_progressValueChanged(int  progressValue0)
{
    QFutureWatcherBase::progressValueChanged((int )progressValue0);
}

void QFutureWatcherBase_QtDShell::__public_resultReadyAt(int  resultIndex0)
{
    QFutureWatcherBase::resultReadyAt((int )resultIndex0);
}

void QFutureWatcherBase_QtDShell::__public_resultsReadyAt(int  beginIndex0, int  endIndex1)
{
    QFutureWatcherBase::resultsReadyAt((int )beginIndex0, (int )endIndex1);
}

void QFutureWatcherBase_QtDShell::__public_resumed()
{
    QFutureWatcherBase::resumed();
}

void QFutureWatcherBase_QtDShell::__public_started()
{
    QFutureWatcherBase::started();
}

// Write virtual function overries used to decide on static/virtual calls
void QFutureWatcherBase_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QFutureWatcherBase_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QFutureWatcherBase_QtDShell::__override_event(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QFutureWatcherBase::event((QEvent* )event0);
    } else {
        return event((QEvent* )event0);
    }
}

bool  QFutureWatcherBase_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QFutureWatcherBase_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// QFutureWatcherBase::canceled()
QTD_EXTERN QTD_EXPORT void qtd_QFutureWatcherBase_canceled
(void* __this_nativeId)
{
    QFutureWatcherBase_QtDShell *__qt_this = (QFutureWatcherBase_QtDShell *) __this_nativeId;
    __qt_this->__public_canceled();

}

// QFutureWatcherBase::finished()
QTD_EXTERN QTD_EXPORT void qtd_QFutureWatcherBase_finished
(void* __this_nativeId)
{
    QFutureWatcherBase_QtDShell *__qt_this = (QFutureWatcherBase_QtDShell *) __this_nativeId;
    __qt_this->__public_finished();

}

// QFutureWatcherBase::paused()
QTD_EXTERN QTD_EXPORT void qtd_QFutureWatcherBase_paused
(void* __this_nativeId)
{
    QFutureWatcherBase_QtDShell *__qt_this = (QFutureWatcherBase_QtDShell *) __this_nativeId;
    __qt_this->__public_paused();

}

// QFutureWatcherBase::progressRangeChanged(int minimum, int maximum)
QTD_EXTERN QTD_EXPORT void qtd_QFutureWatcherBase_progressRangeChanged_int_int
(void* __this_nativeId,
 int minimum0,
 int maximum1)
{
    QFutureWatcherBase_QtDShell *__qt_this = (QFutureWatcherBase_QtDShell *) __this_nativeId;
    __qt_this->__public_progressRangeChanged((int )minimum0, (int )maximum1);

}

// QFutureWatcherBase::progressTextChanged(const QString & progressText)
QTD_EXTERN QTD_EXPORT void qtd_QFutureWatcherBase_progressTextChanged_string
(void* __this_nativeId,
 DArray progressText0)
{
    QString __qt_progressText0 = QString::fromUtf8((const char *)progressText0.ptr, progressText0.length);
    QFutureWatcherBase_QtDShell *__qt_this = (QFutureWatcherBase_QtDShell *) __this_nativeId;
    __qt_this->__public_progressTextChanged((const QString& )__qt_progressText0);

}

// QFutureWatcherBase::progressValueChanged(int progressValue)
QTD_EXTERN QTD_EXPORT void qtd_QFutureWatcherBase_progressValueChanged_int
(void* __this_nativeId,
 int progressValue0)
{
    QFutureWatcherBase_QtDShell *__qt_this = (QFutureWatcherBase_QtDShell *) __this_nativeId;
    __qt_this->__public_progressValueChanged((int )progressValue0);

}

// QFutureWatcherBase::resultReadyAt(int resultIndex)
QTD_EXTERN QTD_EXPORT void qtd_QFutureWatcherBase_resultReadyAt_int
(void* __this_nativeId,
 int resultIndex0)
{
    QFutureWatcherBase_QtDShell *__qt_this = (QFutureWatcherBase_QtDShell *) __this_nativeId;
    __qt_this->__public_resultReadyAt((int )resultIndex0);

}

// QFutureWatcherBase::resultsReadyAt(int beginIndex, int endIndex)
QTD_EXTERN QTD_EXPORT void qtd_QFutureWatcherBase_resultsReadyAt_int_int
(void* __this_nativeId,
 int beginIndex0,
 int endIndex1)
{
    QFutureWatcherBase_QtDShell *__qt_this = (QFutureWatcherBase_QtDShell *) __this_nativeId;
    __qt_this->__public_resultsReadyAt((int )beginIndex0, (int )endIndex1);

}

// QFutureWatcherBase::resumed()
QTD_EXTERN QTD_EXPORT void qtd_QFutureWatcherBase_resumed
(void* __this_nativeId)
{
    QFutureWatcherBase_QtDShell *__qt_this = (QFutureWatcherBase_QtDShell *) __this_nativeId;
    __qt_this->__public_resumed();

}

// QFutureWatcherBase::started()
QTD_EXTERN QTD_EXPORT void qtd_QFutureWatcherBase_started
(void* __this_nativeId)
{
    QFutureWatcherBase_QtDShell *__qt_this = (QFutureWatcherBase_QtDShell *) __this_nativeId;
    __qt_this->__public_started();

}

// ---externC---
// QFutureWatcherBase::QFutureWatcherBase(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QFutureWatcherBase_QFutureWatcherBase_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QFutureWatcherBase_QtDShell *__qt_this = new QFutureWatcherBase_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QFutureWatcherBase::cancel()
QTD_EXTERN QTD_EXPORT void qtd_QFutureWatcherBase_cancel
(void* __this_nativeId)
{
    QFutureWatcherBase_QtDShell *__qt_this = (QFutureWatcherBase_QtDShell *) __this_nativeId;
    __qt_this->cancel();

}

// QFutureWatcherBase::connectOutputInterface()
QTD_EXTERN QTD_EXPORT void qtd_QFutureWatcherBase_connectOutputInterface
(void* __this_nativeId)
{
    QFutureWatcherBase_QtDShell *__qt_this = (QFutureWatcherBase_QtDShell *) __this_nativeId;
    __qt_this->__public_connectOutputInterface();

}

// QFutureWatcherBase::disconnectOutputInterface(bool pendingAssignment)
QTD_EXTERN QTD_EXPORT void qtd_QFutureWatcherBase_disconnectOutputInterface_bool
(void* __this_nativeId,
 bool pendingAssignment0)
{
    QFutureWatcherBase_QtDShell *__qt_this = (QFutureWatcherBase_QtDShell *) __this_nativeId;
    __qt_this->__public_disconnectOutputInterface((bool )pendingAssignment0);

}

// QFutureWatcherBase::isCanceled() const
QTD_EXTERN QTD_EXPORT bool qtd_QFutureWatcherBase_isCanceled_const
(void* __this_nativeId)
{
    QFutureWatcherBase_QtDShell *__qt_this = (QFutureWatcherBase_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isCanceled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFutureWatcherBase::isFinished() const
QTD_EXTERN QTD_EXPORT bool qtd_QFutureWatcherBase_isFinished_const
(void* __this_nativeId)
{
    QFutureWatcherBase_QtDShell *__qt_this = (QFutureWatcherBase_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isFinished();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFutureWatcherBase::isPaused() const
QTD_EXTERN QTD_EXPORT bool qtd_QFutureWatcherBase_isPaused_const
(void* __this_nativeId)
{
    QFutureWatcherBase_QtDShell *__qt_this = (QFutureWatcherBase_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isPaused();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFutureWatcherBase::isRunning() const
QTD_EXTERN QTD_EXPORT bool qtd_QFutureWatcherBase_isRunning_const
(void* __this_nativeId)
{
    QFutureWatcherBase_QtDShell *__qt_this = (QFutureWatcherBase_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isRunning();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFutureWatcherBase::isStarted() const
QTD_EXTERN QTD_EXPORT bool qtd_QFutureWatcherBase_isStarted_const
(void* __this_nativeId)
{
    QFutureWatcherBase_QtDShell *__qt_this = (QFutureWatcherBase_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isStarted();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFutureWatcherBase::pause()
QTD_EXTERN QTD_EXPORT void qtd_QFutureWatcherBase_pause
(void* __this_nativeId)
{
    QFutureWatcherBase_QtDShell *__qt_this = (QFutureWatcherBase_QtDShell *) __this_nativeId;
    __qt_this->pause();

}

// QFutureWatcherBase::progressMaximum() const
QTD_EXTERN QTD_EXPORT int qtd_QFutureWatcherBase_progressMaximum_const
(void* __this_nativeId)
{
    QFutureWatcherBase_QtDShell *__qt_this = (QFutureWatcherBase_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->progressMaximum();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFutureWatcherBase::progressMinimum() const
QTD_EXTERN QTD_EXPORT int qtd_QFutureWatcherBase_progressMinimum_const
(void* __this_nativeId)
{
    QFutureWatcherBase_QtDShell *__qt_this = (QFutureWatcherBase_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->progressMinimum();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFutureWatcherBase::progressText() const
QTD_EXTERN QTD_EXPORT void qtd_QFutureWatcherBase_progressText_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFutureWatcherBase_QtDShell *__qt_this = (QFutureWatcherBase_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->progressText();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFutureWatcherBase::progressValue() const
QTD_EXTERN QTD_EXPORT int qtd_QFutureWatcherBase_progressValue_const
(void* __this_nativeId)
{
    QFutureWatcherBase_QtDShell *__qt_this = (QFutureWatcherBase_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->progressValue();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFutureWatcherBase::resume()
QTD_EXTERN QTD_EXPORT void qtd_QFutureWatcherBase_resume
(void* __this_nativeId)
{
    QFutureWatcherBase_QtDShell *__qt_this = (QFutureWatcherBase_QtDShell *) __this_nativeId;
    __qt_this->resume();

}

// QFutureWatcherBase::setPaused(bool paused)
QTD_EXTERN QTD_EXPORT void qtd_QFutureWatcherBase_setPaused_bool
(void* __this_nativeId,
 bool paused0)
{
    QFutureWatcherBase_QtDShell *__qt_this = (QFutureWatcherBase_QtDShell *) __this_nativeId;
    __qt_this->setPaused((bool )paused0);

}

// QFutureWatcherBase::setPendingResultsLimit(int limit)
QTD_EXTERN QTD_EXPORT void qtd_QFutureWatcherBase_setPendingResultsLimit_int
(void* __this_nativeId,
 int limit0)
{
    QFutureWatcherBase_QtDShell *__qt_this = (QFutureWatcherBase_QtDShell *) __this_nativeId;
    __qt_this->setPendingResultsLimit((int )limit0);

}

// QFutureWatcherBase::togglePaused()
QTD_EXTERN QTD_EXPORT void qtd_QFutureWatcherBase_togglePaused
(void* __this_nativeId)
{
    QFutureWatcherBase_QtDShell *__qt_this = (QFutureWatcherBase_QtDShell *) __this_nativeId;
    __qt_this->togglePaused();

}

// QFutureWatcherBase::waitForFinished()
QTD_EXTERN QTD_EXPORT void qtd_QFutureWatcherBase_waitForFinished
(void* __this_nativeId)
{
    QFutureWatcherBase_QtDShell *__qt_this = (QFutureWatcherBase_QtDShell *) __this_nativeId;
    __qt_this->waitForFinished();

}

// QFutureWatcherBase::event(QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QFutureWatcherBase_event_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QFutureWatcherBase_QtDShell *__qt_this = (QFutureWatcherBase_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_event0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QFutureWatcherBase_staticMetaObject() {
    return (void*)&QFutureWatcherBase::staticMetaObject;
}


