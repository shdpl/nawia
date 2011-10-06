#include <QVariant>
#include <qgraphicssceneevent.h>
#include <qwidget.h>

#include "QGraphicsSceneHoverEvent_shell.h"
#include <iostream>
#include <qgraphicssceneevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QGraphicsSceneHoverEvent_QtDShell::QGraphicsSceneHoverEvent_QtDShell(void *d_ptr, QEvent::Type  type0)
    : QGraphicsSceneHoverEvent(type0),
      QtdObjectLink(d_ptr)
{
}

QGraphicsSceneHoverEvent_QtDShell::~QGraphicsSceneHoverEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneHoverEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QGraphicsSceneHoverEvent::QGraphicsSceneHoverEvent(QEvent::Type type)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsSceneHoverEvent_QGraphicsSceneHoverEvent_Type
(void *d_ptr,
 int type0)
{
    QEvent::Type __qt_type0 = (QEvent::Type) type0;
    QGraphicsSceneHoverEvent_QtDShell *__qt_this = new QGraphicsSceneHoverEvent_QtDShell(d_ptr, (QEvent::Type )__qt_type0);
    return (void *) __qt_this;

}

// QGraphicsSceneHoverEvent::lastPos() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneHoverEvent_lastPos_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QGraphicsSceneHoverEvent_QtDShell *__qt_this = (QGraphicsSceneHoverEvent_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->lastPos();

    *__d_return_value = __qt_return_value;

}

// QGraphicsSceneHoverEvent::lastScenePos() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneHoverEvent_lastScenePos_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QGraphicsSceneHoverEvent_QtDShell *__qt_this = (QGraphicsSceneHoverEvent_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->lastScenePos();

    *__d_return_value = __qt_return_value;

}

// QGraphicsSceneHoverEvent::lastScreenPos() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneHoverEvent_lastScreenPos_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QGraphicsSceneHoverEvent_QtDShell *__qt_this = (QGraphicsSceneHoverEvent_QtDShell *) __this_nativeId;
    QPoint  __qt_return_value = __qt_this->lastScreenPos();

    *__d_return_value = __qt_return_value;

}

// QGraphicsSceneHoverEvent::modifiers() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsSceneHoverEvent_modifiers_const
(void* __this_nativeId)
{
    QGraphicsSceneHoverEvent_QtDShell *__qt_this = (QGraphicsSceneHoverEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->modifiers();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsSceneHoverEvent::pos() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneHoverEvent_pos_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QGraphicsSceneHoverEvent_QtDShell *__qt_this = (QGraphicsSceneHoverEvent_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->pos();

    *__d_return_value = __qt_return_value;

}

// QGraphicsSceneHoverEvent::scenePos() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneHoverEvent_scenePos_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QGraphicsSceneHoverEvent_QtDShell *__qt_this = (QGraphicsSceneHoverEvent_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->scenePos();

    *__d_return_value = __qt_return_value;

}

// QGraphicsSceneHoverEvent::screenPos() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneHoverEvent_screenPos_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QGraphicsSceneHoverEvent_QtDShell *__qt_this = (QGraphicsSceneHoverEvent_QtDShell *) __this_nativeId;
    QPoint  __qt_return_value = __qt_this->screenPos();

    *__d_return_value = __qt_return_value;

}

// QGraphicsSceneHoverEvent::setLastPos(const QPointF & pos)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneHoverEvent_setLastPos_QPointF
(void* __this_nativeId,
 QPointF pos0)
{
    QGraphicsSceneHoverEvent_QtDShell *__qt_this = (QGraphicsSceneHoverEvent_QtDShell *) __this_nativeId;
    __qt_this->setLastPos((const QPointF& )pos0);

}

// QGraphicsSceneHoverEvent::setLastScenePos(const QPointF & pos)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneHoverEvent_setLastScenePos_QPointF
(void* __this_nativeId,
 QPointF pos0)
{
    QGraphicsSceneHoverEvent_QtDShell *__qt_this = (QGraphicsSceneHoverEvent_QtDShell *) __this_nativeId;
    __qt_this->setLastScenePos((const QPointF& )pos0);

}

// QGraphicsSceneHoverEvent::setLastScreenPos(const QPoint & pos)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneHoverEvent_setLastScreenPos_QPoint
(void* __this_nativeId,
 QPoint pos0)
{
    QGraphicsSceneHoverEvent_QtDShell *__qt_this = (QGraphicsSceneHoverEvent_QtDShell *) __this_nativeId;
    __qt_this->setLastScreenPos((const QPoint& )pos0);

}

// QGraphicsSceneHoverEvent::setModifiers(QFlags<Qt::KeyboardModifier> modifiers)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneHoverEvent_setModifiers_KeyboardModifiers
(void* __this_nativeId,
 int modifiers0)
{
    QFlags<Qt::KeyboardModifier> __qt_modifiers0 = (QFlags<Qt::KeyboardModifier>) modifiers0;
    QGraphicsSceneHoverEvent_QtDShell *__qt_this = (QGraphicsSceneHoverEvent_QtDShell *) __this_nativeId;
    __qt_this->setModifiers((Qt::KeyboardModifiers )__qt_modifiers0);

}

// QGraphicsSceneHoverEvent::setPos(const QPointF & pos)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneHoverEvent_setPos_QPointF
(void* __this_nativeId,
 QPointF pos0)
{
    QGraphicsSceneHoverEvent_QtDShell *__qt_this = (QGraphicsSceneHoverEvent_QtDShell *) __this_nativeId;
    __qt_this->setPos((const QPointF& )pos0);

}

// QGraphicsSceneHoverEvent::setScenePos(const QPointF & pos)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneHoverEvent_setScenePos_QPointF
(void* __this_nativeId,
 QPointF pos0)
{
    QGraphicsSceneHoverEvent_QtDShell *__qt_this = (QGraphicsSceneHoverEvent_QtDShell *) __this_nativeId;
    __qt_this->setScenePos((const QPointF& )pos0);

}

// QGraphicsSceneHoverEvent::setScreenPos(const QPoint & pos)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneHoverEvent_setScreenPos_QPoint
(void* __this_nativeId,
 QPoint pos0)
{
    QGraphicsSceneHoverEvent_QtDShell *__qt_this = (QGraphicsSceneHoverEvent_QtDShell *) __this_nativeId;
    __qt_this->setScreenPos((const QPoint& )pos0);

}

// ---externC---end
// Field accessors


