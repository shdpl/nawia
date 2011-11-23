#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qgraphicsitem.h>
#include <qgraphicsitemanimation.h>
#include <qlist.h>
#include <qmatrix.h>
#include <qobject.h>
#include <qpair.h>
#include <qtimeline.h>
#include <qvariant.h>

#include "QGraphicsItemAnimation_shell.h"
#include <iostream>
#include <qgraphicsitemanimation.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QGraphicsItemAnimationEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QGraphicsItemAnimationEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItemAnimation_createEntity(void *nativeId, void* dId)
{
    new QGraphicsItemAnimationEntity((QObject*)nativeId, dId);
}

QGraphicsItemAnimation_QtDShell::QGraphicsItemAnimation_QtDShell(void *d_ptr, QObject*  parent0)
    : QGraphicsItemAnimation(parent0),
      QObjectLink(this, d_ptr)
{
}

QGraphicsItemAnimation_QtDShell::~QGraphicsItemAnimation_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QGraphicsItemAnimation_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QGraphicsItemAnimation::metaObject();
}

int QGraphicsItemAnimation_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QGraphicsItemAnimation::qt_metacall(_c, _id, _a);
}

int QGraphicsItemAnimation_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QGraphicsItemAnimation::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QGraphicsItemAnimation_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QGraphicsItemAnimation_QtDShell *__qt_this = (QGraphicsItemAnimation_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QGraphicsItemAnimation_afterAnimationStep_double_dispatch, (void *dId, double step0))
QTD_FUNC(GUI, QGraphicsItemAnimation_afterAnimationStep_double_dispatch)
void QGraphicsItemAnimation_QtDShell::afterAnimationStep(double  step0)
{
    qtd_QGraphicsItemAnimation_afterAnimationStep_double_dispatch(QObjectLink::getLink(this)->dId, (double )step0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsItemAnimation_beforeAnimationStep_double_dispatch, (void *dId, double step0))
QTD_FUNC(GUI, QGraphicsItemAnimation_beforeAnimationStep_double_dispatch)
void QGraphicsItemAnimation_QtDShell::beforeAnimationStep(double  step0)
{
    qtd_QGraphicsItemAnimation_beforeAnimationStep_double_dispatch(QObjectLink::getLink(this)->dId, (double )step0);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QGraphicsItemAnimation_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QGraphicsItemAnimation_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QGraphicsItemAnimation_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QGraphicsItemAnimation_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QGraphicsItemAnimation_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItemAnimation_initCallBacks(VoidFunc *virts) {
    qtd_QGraphicsItemAnimation_afterAnimationStep_double_dispatch = (qtd_QGraphicsItemAnimation_afterAnimationStep_double_dispatch_t) virts[0];
    qtd_QGraphicsItemAnimation_beforeAnimationStep_double_dispatch = (qtd_QGraphicsItemAnimation_beforeAnimationStep_double_dispatch_t) virts[1];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QGraphicsItemAnimation_QtDShell::__public_sender() const
{
    return QObject::sender();
}

// Write virtual function overries used to decide on static/virtual calls
void QGraphicsItemAnimation_QtDShell::__override_afterAnimationStep(double  step0, bool static_call)
{
    if (static_call) {
        QGraphicsItemAnimation::afterAnimationStep((double )step0);
    } else {
        afterAnimationStep((double )step0);
    }
}

void QGraphicsItemAnimation_QtDShell::__override_beforeAnimationStep(double  step0, bool static_call)
{
    if (static_call) {
        QGraphicsItemAnimation::beforeAnimationStep((double )step0);
    } else {
        beforeAnimationStep((double )step0);
    }
}

void QGraphicsItemAnimation_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QGraphicsItemAnimation_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QGraphicsItemAnimation_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QGraphicsItemAnimation_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QGraphicsItemAnimation_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// ---externC---
// QGraphicsItemAnimation::QGraphicsItemAnimation(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItemAnimation_QGraphicsItemAnimation_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QGraphicsItemAnimation_QtDShell *__qt_this = new QGraphicsItemAnimation_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QGraphicsItemAnimation::clear()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItemAnimation_clear
(void* __this_nativeId)
{
    QGraphicsItemAnimation_QtDShell *__qt_this = (QGraphicsItemAnimation_QtDShell *) __this_nativeId;
    __qt_this->clear();

}

// QGraphicsItemAnimation::horizontalScaleAt(double step) const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsItemAnimation_horizontalScaleAt_double_const
(void* __this_nativeId,
 double step0)
{
    QGraphicsItemAnimation_QtDShell *__qt_this = (QGraphicsItemAnimation_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->horizontalScaleAt((double )step0);

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItemAnimation::horizontalShearAt(double step) const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsItemAnimation_horizontalShearAt_double_const
(void* __this_nativeId,
 double step0)
{
    QGraphicsItemAnimation_QtDShell *__qt_this = (QGraphicsItemAnimation_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->horizontalShearAt((double )step0);

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItemAnimation::item() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItemAnimation_item_const
(void* __this_nativeId)
{
    QGraphicsItemAnimation_QtDShell *__qt_this = (QGraphicsItemAnimation_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->item();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsItemAnimation::matrixAt(double step) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItemAnimation_matrixAt_double_const
(void* __this_nativeId,
 double step0)
{
    QGraphicsItemAnimation_QtDShell *__qt_this = (QGraphicsItemAnimation_QtDShell *) __this_nativeId;
    QMatrix  __qt_return_value = __qt_this->matrixAt((double )step0);

    void* __d_return_value = (void*) new QMatrix(__qt_return_value);

    return __d_return_value;
}

// QGraphicsItemAnimation::posAt(double step) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItemAnimation_posAt_double_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 double step0)
{
    QGraphicsItemAnimation_QtDShell *__qt_this = (QGraphicsItemAnimation_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->posAt((double )step0);

    *__d_return_value = __qt_return_value;

}

// QGraphicsItemAnimation::posList() const
// QGraphicsItemAnimation::reset()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItemAnimation_reset
(void* __this_nativeId)
{
    QGraphicsItemAnimation_QtDShell *__qt_this = (QGraphicsItemAnimation_QtDShell *) __this_nativeId;
    __qt_this->reset();

}

// QGraphicsItemAnimation::rotationAt(double step) const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsItemAnimation_rotationAt_double_const
(void* __this_nativeId,
 double step0)
{
    QGraphicsItemAnimation_QtDShell *__qt_this = (QGraphicsItemAnimation_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->rotationAt((double )step0);

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItemAnimation::rotationList() const
// QGraphicsItemAnimation::scaleList() const
// QGraphicsItemAnimation::setItem(QGraphicsItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItemAnimation_setItem_QGraphicsItem
(void* __this_nativeId,
 void* item0)
{
    QGraphicsItem*  __qt_item0 = (QGraphicsItem* ) item0;
    QGraphicsItemAnimation_QtDShell *__qt_this = (QGraphicsItemAnimation_QtDShell *) __this_nativeId;
    __qt_this->setItem((QGraphicsItem* )__qt_item0);

}

// QGraphicsItemAnimation::setPosAt(double step, const QPointF & pos)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItemAnimation_setPosAt_double_QPointF
(void* __this_nativeId,
 double step0,
 QPointF pos1)
{
    QGraphicsItemAnimation_QtDShell *__qt_this = (QGraphicsItemAnimation_QtDShell *) __this_nativeId;
    __qt_this->setPosAt((double )step0, (const QPointF& )pos1);

}

// QGraphicsItemAnimation::setRotationAt(double step, double angle)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItemAnimation_setRotationAt_double_double
(void* __this_nativeId,
 double step0,
 double angle1)
{
    QGraphicsItemAnimation_QtDShell *__qt_this = (QGraphicsItemAnimation_QtDShell *) __this_nativeId;
    __qt_this->setRotationAt((double )step0, (double )angle1);

}

// QGraphicsItemAnimation::setScaleAt(double step, double sx, double sy)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItemAnimation_setScaleAt_double_double_double
(void* __this_nativeId,
 double step0,
 double sx1,
 double sy2)
{
    QGraphicsItemAnimation_QtDShell *__qt_this = (QGraphicsItemAnimation_QtDShell *) __this_nativeId;
    __qt_this->setScaleAt((double )step0, (double )sx1, (double )sy2);

}

// QGraphicsItemAnimation::setShearAt(double step, double sh, double sv)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItemAnimation_setShearAt_double_double_double
(void* __this_nativeId,
 double step0,
 double sh1,
 double sv2)
{
    QGraphicsItemAnimation_QtDShell *__qt_this = (QGraphicsItemAnimation_QtDShell *) __this_nativeId;
    __qt_this->setShearAt((double )step0, (double )sh1, (double )sv2);

}

// QGraphicsItemAnimation::setStep(double x)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItemAnimation_setStep_double
(void* __this_nativeId,
 double x0)
{
    QGraphicsItemAnimation_QtDShell *__qt_this = (QGraphicsItemAnimation_QtDShell *) __this_nativeId;
    __qt_this->setStep((double )x0);

}

// QGraphicsItemAnimation::setTimeLine(QTimeLine * timeLine)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItemAnimation_setTimeLine_QTimeLine
(void* __this_nativeId,
 void* timeLine0)
{
    QTimeLine*  __qt_timeLine0 = (QTimeLine* ) timeLine0;
    QGraphicsItemAnimation_QtDShell *__qt_this = (QGraphicsItemAnimation_QtDShell *) __this_nativeId;
    __qt_this->setTimeLine((QTimeLine* )__qt_timeLine0);

}

// QGraphicsItemAnimation::setTranslationAt(double step, double dx, double dy)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItemAnimation_setTranslationAt_double_double_double
(void* __this_nativeId,
 double step0,
 double dx1,
 double dy2)
{
    QGraphicsItemAnimation_QtDShell *__qt_this = (QGraphicsItemAnimation_QtDShell *) __this_nativeId;
    __qt_this->setTranslationAt((double )step0, (double )dx1, (double )dy2);

}

// QGraphicsItemAnimation::shearList() const
// QGraphicsItemAnimation::timeLine() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItemAnimation_timeLine_const
(void* __this_nativeId)
{
    QGraphicsItemAnimation_QtDShell *__qt_this = (QGraphicsItemAnimation_QtDShell *) __this_nativeId;
    QTimeLine*  __qt_return_value = __qt_this->timeLine();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsItemAnimation::translationList() const
// QGraphicsItemAnimation::verticalScaleAt(double step) const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsItemAnimation_verticalScaleAt_double_const
(void* __this_nativeId,
 double step0)
{
    QGraphicsItemAnimation_QtDShell *__qt_this = (QGraphicsItemAnimation_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->verticalScaleAt((double )step0);

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItemAnimation::verticalShearAt(double step) const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsItemAnimation_verticalShearAt_double_const
(void* __this_nativeId,
 double step0)
{
    QGraphicsItemAnimation_QtDShell *__qt_this = (QGraphicsItemAnimation_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->verticalShearAt((double )step0);

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItemAnimation::xTranslationAt(double step) const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsItemAnimation_xTranslationAt_double_const
(void* __this_nativeId,
 double step0)
{
    QGraphicsItemAnimation_QtDShell *__qt_this = (QGraphicsItemAnimation_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->xTranslationAt((double )step0);

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItemAnimation::yTranslationAt(double step) const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsItemAnimation_yTranslationAt_double_const
(void* __this_nativeId,
 double step0)
{
    QGraphicsItemAnimation_QtDShell *__qt_this = (QGraphicsItemAnimation_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->yTranslationAt((double )step0);

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsItemAnimation::afterAnimationStep(double step)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItemAnimation_afterAnimationStep_double
(void* __this_nativeId,
 double step0)
{
    QGraphicsItemAnimation_QtDShell *__qt_this = (QGraphicsItemAnimation_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_afterAnimationStep((double )step0, __do_static_call);

}

// QGraphicsItemAnimation::beforeAnimationStep(double step)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsItemAnimation_beforeAnimationStep_double
(void* __this_nativeId,
 double step0)
{
    QGraphicsItemAnimation_QtDShell *__qt_this = (QGraphicsItemAnimation_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_beforeAnimationStep((double )step0, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsItemAnimation_staticMetaObject() {
    return (void*)&QGraphicsItemAnimation::staticMetaObject;
}


