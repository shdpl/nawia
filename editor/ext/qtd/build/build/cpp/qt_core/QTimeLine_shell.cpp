#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qtimeline.h>
#include <qvariant.h>

#include "QTimeLine_shell.h"
#include <iostream>
#include <qtimeline.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

class QTimeLineEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QTimeLineEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QTimeLine_createEntity(void *nativeId, void* dId)
{
    new QTimeLineEntity((QObject*)nativeId, dId);
}

QTimeLine_QtDShell::QTimeLine_QtDShell(void *d_ptr, int  duration0, QObject*  parent1)
    : QTimeLine(duration0, parent1),
      QObjectLink(this, d_ptr)
{
}

QTimeLine_QtDShell::~QTimeLine_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(CORE, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(CORE, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QTimeLine_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QTimeLine::metaObject();
}

int QTimeLine_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QTimeLine::qt_metacall(_c, _id, _a);
}

int QTimeLine_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QTimeLine::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QTimeLine_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QTimeLine_QtDShell *__qt_this = (QTimeLine_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(CORE, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QTimeLine_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QTimeLine_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QTimeLine_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QTimeLine_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(CORE, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* event0))
void QTimeLine_QtDShell::timerEvent(QTimerEvent*  event0)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )event0);
}

QTD_FUNC_DECL(CORE, double, QTimeLine_valueForTime_int_const_dispatch, (void *dId, int msec0))
QTD_FUNC(CORE, QTimeLine_valueForTime_int_const_dispatch)
double  QTimeLine_QtDShell::valueForTime(int  msec0) const
{
    return qtd_QTimeLine_valueForTime_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )msec0);
}

QTD_EXTERN QTD_EXPORT void qtd_QTimeLine_initCallBacks(VoidFunc *virts) {
    qtd_QTimeLine_valueForTime_int_const_dispatch = (qtd_QTimeLine_valueForTime_int_const_dispatch_t) virts[0];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QTimeLine_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QTimeLine_QtDShell::__public_finished()
{
    QTimeLine::finished();
}

void QTimeLine_QtDShell::__public_frameChanged(int  arg__1)
{
    QTimeLine::frameChanged((int )arg__1);
}

void QTimeLine_QtDShell::__public_stateChanged(int  newState0)
{
    QTimeLine::stateChanged((QTimeLine::State )newState0);
}

void QTimeLine_QtDShell::__public_valueChanged(double  x0)
{
    QTimeLine::valueChanged((double )x0);
}

// Write virtual function overries used to decide on static/virtual calls
void QTimeLine_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QTimeLine_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QTimeLine_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QTimeLine_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QTimeLine_QtDShell::__override_timerEvent(QTimerEvent*  event0, bool static_call)
{
    if (static_call) {
        QTimeLine::timerEvent((QTimerEvent* )event0);
    } else {
        timerEvent((QTimerEvent* )event0);
    }
}

double  QTimeLine_QtDShell::__override_valueForTime(int  msec0, bool static_call) const
{
    if (static_call) {
        return QTimeLine::valueForTime((int )msec0);
    } else {
        return valueForTime((int )msec0);
    }
}

// QTimeLine::finished()
QTD_EXTERN QTD_EXPORT void qtd_QTimeLine_finished
(void* __this_nativeId)
{
    QTimeLine_QtDShell *__qt_this = (QTimeLine_QtDShell *) __this_nativeId;
    __qt_this->__public_finished();

}

// QTimeLine::frameChanged(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QTimeLine_frameChanged_int
(void* __this_nativeId,
 int arg__1)
{
    QTimeLine_QtDShell *__qt_this = (QTimeLine_QtDShell *) __this_nativeId;
    __qt_this->__public_frameChanged((int )arg__1);

}

// QTimeLine::stateChanged(QTimeLine::State newState)
QTD_EXTERN QTD_EXPORT void qtd_QTimeLine_stateChanged_State
(void* __this_nativeId,
 int newState0)
{
    QTimeLine::State __qt_newState0 = (QTimeLine::State) newState0;
    QTimeLine_QtDShell *__qt_this = (QTimeLine_QtDShell *) __this_nativeId;
    __qt_this->__public_stateChanged((QTimeLine::State )__qt_newState0);

}

// QTimeLine::valueChanged(double x)
QTD_EXTERN QTD_EXPORT void qtd_QTimeLine_valueChanged_double
(void* __this_nativeId,
 double x0)
{
    QTimeLine_QtDShell *__qt_this = (QTimeLine_QtDShell *) __this_nativeId;
    __qt_this->__public_valueChanged((double )x0);

}

// ---externC---
// QTimeLine::QTimeLine(int duration, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QTimeLine_QTimeLine_int_QObject
(void *d_ptr,
 int duration0,
 void* parent1)
{
    QObject*  __qt_parent1 = (QObject* ) parent1;
    QTimeLine_QtDShell *__qt_this = new QTimeLine_QtDShell(d_ptr, (int )duration0, (QObject* )__qt_parent1);
    return (void *) __qt_this;

}

// QTimeLine::currentFrame() const
QTD_EXTERN QTD_EXPORT int qtd_QTimeLine_currentFrame_const
(void* __this_nativeId)
{
    QTimeLine_QtDShell *__qt_this = (QTimeLine_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->currentFrame();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTimeLine::currentTime() const
QTD_EXTERN QTD_EXPORT int qtd_QTimeLine_currentTime_const
(void* __this_nativeId)
{
    QTimeLine_QtDShell *__qt_this = (QTimeLine_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->currentTime();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTimeLine::currentValue() const
QTD_EXTERN QTD_EXPORT double qtd_QTimeLine_currentValue_const
(void* __this_nativeId)
{
    QTimeLine_QtDShell *__qt_this = (QTimeLine_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->currentValue();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTimeLine::curveShape() const
QTD_EXTERN QTD_EXPORT int qtd_QTimeLine_curveShape_const
(void* __this_nativeId)
{
    QTimeLine_QtDShell *__qt_this = (QTimeLine_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->curveShape();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTimeLine::direction() const
QTD_EXTERN QTD_EXPORT int qtd_QTimeLine_direction_const
(void* __this_nativeId)
{
    QTimeLine_QtDShell *__qt_this = (QTimeLine_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->direction();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTimeLine::duration() const
QTD_EXTERN QTD_EXPORT int qtd_QTimeLine_duration_const
(void* __this_nativeId)
{
    QTimeLine_QtDShell *__qt_this = (QTimeLine_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->duration();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTimeLine::endFrame() const
QTD_EXTERN QTD_EXPORT int qtd_QTimeLine_endFrame_const
(void* __this_nativeId)
{
    QTimeLine_QtDShell *__qt_this = (QTimeLine_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->endFrame();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTimeLine::frameForTime(int msec) const
QTD_EXTERN QTD_EXPORT int qtd_QTimeLine_frameForTime_int_const
(void* __this_nativeId,
 int msec0)
{
    QTimeLine_QtDShell *__qt_this = (QTimeLine_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->frameForTime((int )msec0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTimeLine::loopCount() const
QTD_EXTERN QTD_EXPORT int qtd_QTimeLine_loopCount_const
(void* __this_nativeId)
{
    QTimeLine_QtDShell *__qt_this = (QTimeLine_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->loopCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTimeLine::resume()
QTD_EXTERN QTD_EXPORT void qtd_QTimeLine_resume
(void* __this_nativeId)
{
    QTimeLine_QtDShell *__qt_this = (QTimeLine_QtDShell *) __this_nativeId;
    __qt_this->resume();

}

// QTimeLine::setCurrentTime(int msec)
QTD_EXTERN QTD_EXPORT void qtd_QTimeLine_setCurrentTime_int
(void* __this_nativeId,
 int msec0)
{
    QTimeLine_QtDShell *__qt_this = (QTimeLine_QtDShell *) __this_nativeId;
    __qt_this->setCurrentTime((int )msec0);

}

// QTimeLine::setCurveShape(QTimeLine::CurveShape shape)
QTD_EXTERN QTD_EXPORT void qtd_QTimeLine_setCurveShape_CurveShape
(void* __this_nativeId,
 int shape0)
{
    QTimeLine::CurveShape __qt_shape0 = (QTimeLine::CurveShape) shape0;
    QTimeLine_QtDShell *__qt_this = (QTimeLine_QtDShell *) __this_nativeId;
    __qt_this->setCurveShape((QTimeLine::CurveShape )__qt_shape0);

}

// QTimeLine::setDirection(QTimeLine::Direction direction)
QTD_EXTERN QTD_EXPORT void qtd_QTimeLine_setDirection_Direction
(void* __this_nativeId,
 int direction0)
{
    QTimeLine::Direction __qt_direction0 = (QTimeLine::Direction) direction0;
    QTimeLine_QtDShell *__qt_this = (QTimeLine_QtDShell *) __this_nativeId;
    __qt_this->setDirection((QTimeLine::Direction )__qt_direction0);

}

// QTimeLine::setDuration(int duration)
QTD_EXTERN QTD_EXPORT void qtd_QTimeLine_setDuration_int
(void* __this_nativeId,
 int duration0)
{
    QTimeLine_QtDShell *__qt_this = (QTimeLine_QtDShell *) __this_nativeId;
    __qt_this->setDuration((int )duration0);

}

// QTimeLine::setEndFrame(int frame)
QTD_EXTERN QTD_EXPORT void qtd_QTimeLine_setEndFrame_int
(void* __this_nativeId,
 int frame0)
{
    QTimeLine_QtDShell *__qt_this = (QTimeLine_QtDShell *) __this_nativeId;
    __qt_this->setEndFrame((int )frame0);

}

// QTimeLine::setFrameRange(int startFrame, int endFrame)
QTD_EXTERN QTD_EXPORT void qtd_QTimeLine_setFrameRange_int_int
(void* __this_nativeId,
 int startFrame0,
 int endFrame1)
{
    QTimeLine_QtDShell *__qt_this = (QTimeLine_QtDShell *) __this_nativeId;
    __qt_this->setFrameRange((int )startFrame0, (int )endFrame1);

}

// QTimeLine::setLoopCount(int count)
QTD_EXTERN QTD_EXPORT void qtd_QTimeLine_setLoopCount_int
(void* __this_nativeId,
 int count0)
{
    QTimeLine_QtDShell *__qt_this = (QTimeLine_QtDShell *) __this_nativeId;
    __qt_this->setLoopCount((int )count0);

}

// QTimeLine::setPaused(bool paused)
QTD_EXTERN QTD_EXPORT void qtd_QTimeLine_setPaused_bool
(void* __this_nativeId,
 bool paused0)
{
    QTimeLine_QtDShell *__qt_this = (QTimeLine_QtDShell *) __this_nativeId;
    __qt_this->setPaused((bool )paused0);

}

// QTimeLine::setStartFrame(int frame)
QTD_EXTERN QTD_EXPORT void qtd_QTimeLine_setStartFrame_int
(void* __this_nativeId,
 int frame0)
{
    QTimeLine_QtDShell *__qt_this = (QTimeLine_QtDShell *) __this_nativeId;
    __qt_this->setStartFrame((int )frame0);

}

// QTimeLine::setUpdateInterval(int interval)
QTD_EXTERN QTD_EXPORT void qtd_QTimeLine_setUpdateInterval_int
(void* __this_nativeId,
 int interval0)
{
    QTimeLine_QtDShell *__qt_this = (QTimeLine_QtDShell *) __this_nativeId;
    __qt_this->setUpdateInterval((int )interval0);

}

// QTimeLine::start()
QTD_EXTERN QTD_EXPORT void qtd_QTimeLine_start
(void* __this_nativeId)
{
    QTimeLine_QtDShell *__qt_this = (QTimeLine_QtDShell *) __this_nativeId;
    __qt_this->start();

}

// QTimeLine::startFrame() const
QTD_EXTERN QTD_EXPORT int qtd_QTimeLine_startFrame_const
(void* __this_nativeId)
{
    QTimeLine_QtDShell *__qt_this = (QTimeLine_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->startFrame();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTimeLine::state() const
QTD_EXTERN QTD_EXPORT int qtd_QTimeLine_state_const
(void* __this_nativeId)
{
    QTimeLine_QtDShell *__qt_this = (QTimeLine_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->state();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTimeLine::stop()
QTD_EXTERN QTD_EXPORT void qtd_QTimeLine_stop
(void* __this_nativeId)
{
    QTimeLine_QtDShell *__qt_this = (QTimeLine_QtDShell *) __this_nativeId;
    __qt_this->stop();

}

// QTimeLine::toggleDirection()
QTD_EXTERN QTD_EXPORT void qtd_QTimeLine_toggleDirection
(void* __this_nativeId)
{
    QTimeLine_QtDShell *__qt_this = (QTimeLine_QtDShell *) __this_nativeId;
    __qt_this->toggleDirection();

}

// QTimeLine::updateInterval() const
QTD_EXTERN QTD_EXPORT int qtd_QTimeLine_updateInterval_const
(void* __this_nativeId)
{
    QTimeLine_QtDShell *__qt_this = (QTimeLine_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->updateInterval();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QTimeLine::timerEvent(QTimerEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QTimeLine_timerEvent_QTimerEvent
(void* __this_nativeId,
 void* event0)
{
    QTimerEvent*  __qt_event0 = (QTimerEvent* ) event0;
    QTimeLine_QtDShell *__qt_this = (QTimeLine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_timerEvent((QTimerEvent* )__qt_event0, __do_static_call);

}

// QTimeLine::valueForTime(int msec) const
QTD_EXTERN QTD_EXPORT double qtd_QTimeLine_valueForTime_int_const
(void* __this_nativeId,
 int msec0)
{
    QTimeLine_QtDShell *__qt_this = (QTimeLine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    double  __qt_return_value = __qt_this->__override_valueForTime((int )msec0, __do_static_call);

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QTimeLine_staticMetaObject() {
    return (void*)&QTimeLine::staticMetaObject;
}


