#include <QVariant>
#include <qgraphicssceneevent.h>
#include <qwidget.h>

#include "QGraphicsSceneHelpEvent_shell.h"
#include <iostream>
#include <qgraphicssceneevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QGraphicsSceneHelpEvent_QtDShell::QGraphicsSceneHelpEvent_QtDShell(void *d_ptr, QEvent::Type  type0)
    : QGraphicsSceneHelpEvent(type0),
      QtdObjectLink(d_ptr)
{
}

QGraphicsSceneHelpEvent_QtDShell::~QGraphicsSceneHelpEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneHelpEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QGraphicsSceneHelpEvent::QGraphicsSceneHelpEvent(QEvent::Type type)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsSceneHelpEvent_QGraphicsSceneHelpEvent_Type
(void *d_ptr,
 int type0)
{
    QEvent::Type __qt_type0 = (QEvent::Type) type0;
    QGraphicsSceneHelpEvent_QtDShell *__qt_this = new QGraphicsSceneHelpEvent_QtDShell(d_ptr, (QEvent::Type )__qt_type0);
    return (void *) __qt_this;

}

// QGraphicsSceneHelpEvent::scenePos() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneHelpEvent_scenePos_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QGraphicsSceneHelpEvent_QtDShell *__qt_this = (QGraphicsSceneHelpEvent_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->scenePos();

    *__d_return_value = __qt_return_value;

}

// QGraphicsSceneHelpEvent::screenPos() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneHelpEvent_screenPos_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QGraphicsSceneHelpEvent_QtDShell *__qt_this = (QGraphicsSceneHelpEvent_QtDShell *) __this_nativeId;
    QPoint  __qt_return_value = __qt_this->screenPos();

    *__d_return_value = __qt_return_value;

}

// QGraphicsSceneHelpEvent::setScenePos(const QPointF & pos)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneHelpEvent_setScenePos_QPointF
(void* __this_nativeId,
 QPointF pos0)
{
    QGraphicsSceneHelpEvent_QtDShell *__qt_this = (QGraphicsSceneHelpEvent_QtDShell *) __this_nativeId;
    __qt_this->setScenePos((const QPointF& )pos0);

}

// QGraphicsSceneHelpEvent::setScreenPos(const QPoint & pos)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneHelpEvent_setScreenPos_QPoint
(void* __this_nativeId,
 QPoint pos0)
{
    QGraphicsSceneHelpEvent_QtDShell *__qt_this = (QGraphicsSceneHelpEvent_QtDShell *) __this_nativeId;
    __qt_this->setScreenPos((const QPoint& )pos0);

}

// ---externC---end
// Field accessors


