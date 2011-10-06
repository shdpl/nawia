#include <QVariant>
#include <qgraphicssceneevent.h>
#include <qwidget.h>

#include "QGraphicsSceneContextMenuEvent_shell.h"
#include <iostream>
#include <qgraphicssceneevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QGraphicsSceneContextMenuEvent_QtDShell::QGraphicsSceneContextMenuEvent_QtDShell(void *d_ptr, QEvent::Type  type0)
    : QGraphicsSceneContextMenuEvent(type0),
      QtdObjectLink(d_ptr)
{
}

QGraphicsSceneContextMenuEvent_QtDShell::~QGraphicsSceneContextMenuEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneContextMenuEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QGraphicsSceneContextMenuEvent::QGraphicsSceneContextMenuEvent(QEvent::Type type)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsSceneContextMenuEvent_QGraphicsSceneContextMenuEvent_Type
(void *d_ptr,
 int type0)
{
    QEvent::Type __qt_type0 = (QEvent::Type) type0;
    QGraphicsSceneContextMenuEvent_QtDShell *__qt_this = new QGraphicsSceneContextMenuEvent_QtDShell(d_ptr, (QEvent::Type )__qt_type0);
    return (void *) __qt_this;

}

// QGraphicsSceneContextMenuEvent::modifiers() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsSceneContextMenuEvent_modifiers_const
(void* __this_nativeId)
{
    QGraphicsSceneContextMenuEvent_QtDShell *__qt_this = (QGraphicsSceneContextMenuEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->modifiers();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsSceneContextMenuEvent::pos() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneContextMenuEvent_pos_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QGraphicsSceneContextMenuEvent_QtDShell *__qt_this = (QGraphicsSceneContextMenuEvent_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->pos();

    *__d_return_value = __qt_return_value;

}

// QGraphicsSceneContextMenuEvent::reason() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsSceneContextMenuEvent_reason_const
(void* __this_nativeId)
{
    QGraphicsSceneContextMenuEvent_QtDShell *__qt_this = (QGraphicsSceneContextMenuEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->reason();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsSceneContextMenuEvent::scenePos() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneContextMenuEvent_scenePos_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QGraphicsSceneContextMenuEvent_QtDShell *__qt_this = (QGraphicsSceneContextMenuEvent_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->scenePos();

    *__d_return_value = __qt_return_value;

}

// QGraphicsSceneContextMenuEvent::screenPos() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneContextMenuEvent_screenPos_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QGraphicsSceneContextMenuEvent_QtDShell *__qt_this = (QGraphicsSceneContextMenuEvent_QtDShell *) __this_nativeId;
    QPoint  __qt_return_value = __qt_this->screenPos();

    *__d_return_value = __qt_return_value;

}

// QGraphicsSceneContextMenuEvent::setModifiers(QFlags<Qt::KeyboardModifier> modifiers)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneContextMenuEvent_setModifiers_KeyboardModifiers
(void* __this_nativeId,
 int modifiers0)
{
    QFlags<Qt::KeyboardModifier> __qt_modifiers0 = (QFlags<Qt::KeyboardModifier>) modifiers0;
    QGraphicsSceneContextMenuEvent_QtDShell *__qt_this = (QGraphicsSceneContextMenuEvent_QtDShell *) __this_nativeId;
    __qt_this->setModifiers((Qt::KeyboardModifiers )__qt_modifiers0);

}

// QGraphicsSceneContextMenuEvent::setPos(const QPointF & pos)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneContextMenuEvent_setPos_QPointF
(void* __this_nativeId,
 QPointF pos0)
{
    QGraphicsSceneContextMenuEvent_QtDShell *__qt_this = (QGraphicsSceneContextMenuEvent_QtDShell *) __this_nativeId;
    __qt_this->setPos((const QPointF& )pos0);

}

// QGraphicsSceneContextMenuEvent::setReason(QGraphicsSceneContextMenuEvent::Reason reason)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneContextMenuEvent_setReason_Reason
(void* __this_nativeId,
 int reason0)
{
    QGraphicsSceneContextMenuEvent::Reason __qt_reason0 = (QGraphicsSceneContextMenuEvent::Reason) reason0;
    QGraphicsSceneContextMenuEvent_QtDShell *__qt_this = (QGraphicsSceneContextMenuEvent_QtDShell *) __this_nativeId;
    __qt_this->setReason((QGraphicsSceneContextMenuEvent::Reason )__qt_reason0);

}

// QGraphicsSceneContextMenuEvent::setScenePos(const QPointF & pos)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneContextMenuEvent_setScenePos_QPointF
(void* __this_nativeId,
 QPointF pos0)
{
    QGraphicsSceneContextMenuEvent_QtDShell *__qt_this = (QGraphicsSceneContextMenuEvent_QtDShell *) __this_nativeId;
    __qt_this->setScenePos((const QPointF& )pos0);

}

// QGraphicsSceneContextMenuEvent::setScreenPos(const QPoint & pos)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneContextMenuEvent_setScreenPos_QPoint
(void* __this_nativeId,
 QPoint pos0)
{
    QGraphicsSceneContextMenuEvent_QtDShell *__qt_this = (QGraphicsSceneContextMenuEvent_QtDShell *) __this_nativeId;
    __qt_this->setScreenPos((const QPoint& )pos0);

}

// ---externC---end
// Field accessors


