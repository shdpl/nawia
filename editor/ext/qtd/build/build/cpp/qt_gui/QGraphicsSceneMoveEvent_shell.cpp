#include <QVariant>
#include <qgraphicssceneevent.h>
#include <qwidget.h>

#include "QGraphicsSceneMoveEvent_shell.h"
#include <iostream>
#include <qgraphicssceneevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QGraphicsSceneMoveEvent_QtDShell::QGraphicsSceneMoveEvent_QtDShell(void *d_ptr)
    : QGraphicsSceneMoveEvent(),
      QtdObjectLink(d_ptr)
{
}

QGraphicsSceneMoveEvent_QtDShell::~QGraphicsSceneMoveEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneMoveEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QGraphicsSceneMoveEvent::QGraphicsSceneMoveEvent()
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsSceneMoveEvent_QGraphicsSceneMoveEvent
(void *d_ptr)
{
    QGraphicsSceneMoveEvent_QtDShell *__qt_this = new QGraphicsSceneMoveEvent_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QGraphicsSceneMoveEvent::newPos() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneMoveEvent_newPos_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QGraphicsSceneMoveEvent_QtDShell *__qt_this = (QGraphicsSceneMoveEvent_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->newPos();

    *__d_return_value = __qt_return_value;

}

// QGraphicsSceneMoveEvent::oldPos() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneMoveEvent_oldPos_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QGraphicsSceneMoveEvent_QtDShell *__qt_this = (QGraphicsSceneMoveEvent_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->oldPos();

    *__d_return_value = __qt_return_value;

}

// QGraphicsSceneMoveEvent::setNewPos(const QPointF & pos)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneMoveEvent_setNewPos_QPointF
(void* __this_nativeId,
 QPointF pos0)
{
    QGraphicsSceneMoveEvent_QtDShell *__qt_this = (QGraphicsSceneMoveEvent_QtDShell *) __this_nativeId;
    __qt_this->setNewPos((const QPointF& )pos0);

}

// QGraphicsSceneMoveEvent::setOldPos(const QPointF & pos)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneMoveEvent_setOldPos_QPointF
(void* __this_nativeId,
 QPointF pos0)
{
    QGraphicsSceneMoveEvent_QtDShell *__qt_this = (QGraphicsSceneMoveEvent_QtDShell *) __this_nativeId;
    __qt_this->setOldPos((const QPointF& )pos0);

}

// ---externC---end
// Field accessors


