#include <QVariant>
#include <qgraphicssceneevent.h>
#include <qwidget.h>

#include "QGraphicsSceneWheelEvent_shell.h"
#include <iostream>
#include <qgraphicssceneevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QGraphicsSceneWheelEvent_QtDShell::QGraphicsSceneWheelEvent_QtDShell(void *d_ptr, QEvent::Type  type0)
    : QGraphicsSceneWheelEvent(type0),
      QtdObjectLink(d_ptr)
{
}

QGraphicsSceneWheelEvent_QtDShell::~QGraphicsSceneWheelEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneWheelEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QGraphicsSceneWheelEvent::QGraphicsSceneWheelEvent(QEvent::Type type)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsSceneWheelEvent_QGraphicsSceneWheelEvent_Type
(void *d_ptr,
 int type0)
{
    QEvent::Type __qt_type0 = (QEvent::Type) type0;
    QGraphicsSceneWheelEvent_QtDShell *__qt_this = new QGraphicsSceneWheelEvent_QtDShell(d_ptr, (QEvent::Type )__qt_type0);
    return (void *) __qt_this;

}

// QGraphicsSceneWheelEvent::buttons() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsSceneWheelEvent_buttons_const
(void* __this_nativeId)
{
    QGraphicsSceneWheelEvent_QtDShell *__qt_this = (QGraphicsSceneWheelEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->buttons();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsSceneWheelEvent::delta() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsSceneWheelEvent_delta_const
(void* __this_nativeId)
{
    QGraphicsSceneWheelEvent_QtDShell *__qt_this = (QGraphicsSceneWheelEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->delta();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsSceneWheelEvent::modifiers() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsSceneWheelEvent_modifiers_const
(void* __this_nativeId)
{
    QGraphicsSceneWheelEvent_QtDShell *__qt_this = (QGraphicsSceneWheelEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->modifiers();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsSceneWheelEvent::orientation() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsSceneWheelEvent_orientation_const
(void* __this_nativeId)
{
    QGraphicsSceneWheelEvent_QtDShell *__qt_this = (QGraphicsSceneWheelEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->orientation();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsSceneWheelEvent::pos() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneWheelEvent_pos_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QGraphicsSceneWheelEvent_QtDShell *__qt_this = (QGraphicsSceneWheelEvent_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->pos();

    *__d_return_value = __qt_return_value;

}

// QGraphicsSceneWheelEvent::scenePos() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneWheelEvent_scenePos_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QGraphicsSceneWheelEvent_QtDShell *__qt_this = (QGraphicsSceneWheelEvent_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->scenePos();

    *__d_return_value = __qt_return_value;

}

// QGraphicsSceneWheelEvent::screenPos() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneWheelEvent_screenPos_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QGraphicsSceneWheelEvent_QtDShell *__qt_this = (QGraphicsSceneWheelEvent_QtDShell *) __this_nativeId;
    QPoint  __qt_return_value = __qt_this->screenPos();

    *__d_return_value = __qt_return_value;

}

// QGraphicsSceneWheelEvent::setButtons(QFlags<Qt::MouseButton> buttons)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneWheelEvent_setButtons_MouseButtons
(void* __this_nativeId,
 int buttons0)
{
    QFlags<Qt::MouseButton> __qt_buttons0 = (QFlags<Qt::MouseButton>) buttons0;
    QGraphicsSceneWheelEvent_QtDShell *__qt_this = (QGraphicsSceneWheelEvent_QtDShell *) __this_nativeId;
    __qt_this->setButtons((Qt::MouseButtons )__qt_buttons0);

}

// QGraphicsSceneWheelEvent::setDelta(int delta)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneWheelEvent_setDelta_int
(void* __this_nativeId,
 int delta0)
{
    QGraphicsSceneWheelEvent_QtDShell *__qt_this = (QGraphicsSceneWheelEvent_QtDShell *) __this_nativeId;
    __qt_this->setDelta((int )delta0);

}

// QGraphicsSceneWheelEvent::setModifiers(QFlags<Qt::KeyboardModifier> modifiers)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneWheelEvent_setModifiers_KeyboardModifiers
(void* __this_nativeId,
 int modifiers0)
{
    QFlags<Qt::KeyboardModifier> __qt_modifiers0 = (QFlags<Qt::KeyboardModifier>) modifiers0;
    QGraphicsSceneWheelEvent_QtDShell *__qt_this = (QGraphicsSceneWheelEvent_QtDShell *) __this_nativeId;
    __qt_this->setModifiers((Qt::KeyboardModifiers )__qt_modifiers0);

}

// QGraphicsSceneWheelEvent::setOrientation(Qt::Orientation orientation)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneWheelEvent_setOrientation_Orientation
(void* __this_nativeId,
 int orientation0)
{
    Qt::Orientation __qt_orientation0 = (Qt::Orientation) orientation0;
    QGraphicsSceneWheelEvent_QtDShell *__qt_this = (QGraphicsSceneWheelEvent_QtDShell *) __this_nativeId;
    __qt_this->setOrientation((Qt::Orientation )__qt_orientation0);

}

// QGraphicsSceneWheelEvent::setPos(const QPointF & pos)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneWheelEvent_setPos_QPointF
(void* __this_nativeId,
 QPointF pos0)
{
    QGraphicsSceneWheelEvent_QtDShell *__qt_this = (QGraphicsSceneWheelEvent_QtDShell *) __this_nativeId;
    __qt_this->setPos((const QPointF& )pos0);

}

// QGraphicsSceneWheelEvent::setScenePos(const QPointF & pos)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneWheelEvent_setScenePos_QPointF
(void* __this_nativeId,
 QPointF pos0)
{
    QGraphicsSceneWheelEvent_QtDShell *__qt_this = (QGraphicsSceneWheelEvent_QtDShell *) __this_nativeId;
    __qt_this->setScenePos((const QPointF& )pos0);

}

// QGraphicsSceneWheelEvent::setScreenPos(const QPoint & pos)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneWheelEvent_setScreenPos_QPoint
(void* __this_nativeId,
 QPoint pos0)
{
    QGraphicsSceneWheelEvent_QtDShell *__qt_this = (QGraphicsSceneWheelEvent_QtDShell *) __this_nativeId;
    __qt_this->setScreenPos((const QPoint& )pos0);

}

// ---externC---end
// Field accessors


