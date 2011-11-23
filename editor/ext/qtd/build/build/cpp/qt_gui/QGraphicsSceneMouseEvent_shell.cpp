#include <QVariant>
#include <qgraphicssceneevent.h>
#include <qwidget.h>

#include "QGraphicsSceneMouseEvent_shell.h"
#include <iostream>
#include <qgraphicssceneevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QGraphicsSceneMouseEvent_QtDShell::QGraphicsSceneMouseEvent_QtDShell(void *d_ptr, QEvent::Type  type0)
    : QGraphicsSceneMouseEvent(type0),
      QtdObjectLink(d_ptr)
{
}

QGraphicsSceneMouseEvent_QtDShell::~QGraphicsSceneMouseEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneMouseEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QGraphicsSceneMouseEvent::QGraphicsSceneMouseEvent(QEvent::Type type)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsSceneMouseEvent_QGraphicsSceneMouseEvent_Type
(void *d_ptr,
 int type0)
{
    QEvent::Type __qt_type0 = (QEvent::Type) type0;
    QGraphicsSceneMouseEvent_QtDShell *__qt_this = new QGraphicsSceneMouseEvent_QtDShell(d_ptr, (QEvent::Type )__qt_type0);
    return (void *) __qt_this;

}

// QGraphicsSceneMouseEvent::button() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsSceneMouseEvent_button_const
(void* __this_nativeId)
{
    QGraphicsSceneMouseEvent_QtDShell *__qt_this = (QGraphicsSceneMouseEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->button();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsSceneMouseEvent::buttonDownPos(Qt::MouseButton button) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneMouseEvent_buttonDownPos_MouseButton_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 int button0)
{
    Qt::MouseButton __qt_button0 = (Qt::MouseButton) button0;
    QGraphicsSceneMouseEvent_QtDShell *__qt_this = (QGraphicsSceneMouseEvent_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->buttonDownPos((Qt::MouseButton )__qt_button0);

    *__d_return_value = __qt_return_value;

}

// QGraphicsSceneMouseEvent::buttonDownScenePos(Qt::MouseButton button) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneMouseEvent_buttonDownScenePos_MouseButton_const
(void* __this_nativeId,
 QPointF * __d_return_value,
 int button0)
{
    Qt::MouseButton __qt_button0 = (Qt::MouseButton) button0;
    QGraphicsSceneMouseEvent_QtDShell *__qt_this = (QGraphicsSceneMouseEvent_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->buttonDownScenePos((Qt::MouseButton )__qt_button0);

    *__d_return_value = __qt_return_value;

}

// QGraphicsSceneMouseEvent::buttonDownScreenPos(Qt::MouseButton button) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneMouseEvent_buttonDownScreenPos_MouseButton_const
(void* __this_nativeId,
 QPoint * __d_return_value,
 int button0)
{
    Qt::MouseButton __qt_button0 = (Qt::MouseButton) button0;
    QGraphicsSceneMouseEvent_QtDShell *__qt_this = (QGraphicsSceneMouseEvent_QtDShell *) __this_nativeId;
    QPoint  __qt_return_value = __qt_this->buttonDownScreenPos((Qt::MouseButton )__qt_button0);

    *__d_return_value = __qt_return_value;

}

// QGraphicsSceneMouseEvent::buttons() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsSceneMouseEvent_buttons_const
(void* __this_nativeId)
{
    QGraphicsSceneMouseEvent_QtDShell *__qt_this = (QGraphicsSceneMouseEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->buttons();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsSceneMouseEvent::lastPos() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneMouseEvent_lastPos_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QGraphicsSceneMouseEvent_QtDShell *__qt_this = (QGraphicsSceneMouseEvent_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->lastPos();

    *__d_return_value = __qt_return_value;

}

// QGraphicsSceneMouseEvent::lastScenePos() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneMouseEvent_lastScenePos_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QGraphicsSceneMouseEvent_QtDShell *__qt_this = (QGraphicsSceneMouseEvent_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->lastScenePos();

    *__d_return_value = __qt_return_value;

}

// QGraphicsSceneMouseEvent::lastScreenPos() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneMouseEvent_lastScreenPos_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QGraphicsSceneMouseEvent_QtDShell *__qt_this = (QGraphicsSceneMouseEvent_QtDShell *) __this_nativeId;
    QPoint  __qt_return_value = __qt_this->lastScreenPos();

    *__d_return_value = __qt_return_value;

}

// QGraphicsSceneMouseEvent::modifiers() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsSceneMouseEvent_modifiers_const
(void* __this_nativeId)
{
    QGraphicsSceneMouseEvent_QtDShell *__qt_this = (QGraphicsSceneMouseEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->modifiers();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsSceneMouseEvent::pos() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneMouseEvent_pos_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QGraphicsSceneMouseEvent_QtDShell *__qt_this = (QGraphicsSceneMouseEvent_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->pos();

    *__d_return_value = __qt_return_value;

}

// QGraphicsSceneMouseEvent::scenePos() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneMouseEvent_scenePos_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QGraphicsSceneMouseEvent_QtDShell *__qt_this = (QGraphicsSceneMouseEvent_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->scenePos();

    *__d_return_value = __qt_return_value;

}

// QGraphicsSceneMouseEvent::screenPos() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneMouseEvent_screenPos_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QGraphicsSceneMouseEvent_QtDShell *__qt_this = (QGraphicsSceneMouseEvent_QtDShell *) __this_nativeId;
    QPoint  __qt_return_value = __qt_this->screenPos();

    *__d_return_value = __qt_return_value;

}

// QGraphicsSceneMouseEvent::setButton(Qt::MouseButton button)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneMouseEvent_setButton_MouseButton
(void* __this_nativeId,
 int button0)
{
    Qt::MouseButton __qt_button0 = (Qt::MouseButton) button0;
    QGraphicsSceneMouseEvent_QtDShell *__qt_this = (QGraphicsSceneMouseEvent_QtDShell *) __this_nativeId;
    __qt_this->setButton((Qt::MouseButton )__qt_button0);

}

// QGraphicsSceneMouseEvent::setButtonDownPos(Qt::MouseButton button, const QPointF & pos)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneMouseEvent_setButtonDownPos_MouseButton_QPointF
(void* __this_nativeId,
 int button0,
 QPointF pos1)
{
    Qt::MouseButton __qt_button0 = (Qt::MouseButton) button0;
    QGraphicsSceneMouseEvent_QtDShell *__qt_this = (QGraphicsSceneMouseEvent_QtDShell *) __this_nativeId;
    __qt_this->setButtonDownPos((Qt::MouseButton )__qt_button0, (const QPointF& )pos1);

}

// QGraphicsSceneMouseEvent::setButtonDownScenePos(Qt::MouseButton button, const QPointF & pos)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneMouseEvent_setButtonDownScenePos_MouseButton_QPointF
(void* __this_nativeId,
 int button0,
 QPointF pos1)
{
    Qt::MouseButton __qt_button0 = (Qt::MouseButton) button0;
    QGraphicsSceneMouseEvent_QtDShell *__qt_this = (QGraphicsSceneMouseEvent_QtDShell *) __this_nativeId;
    __qt_this->setButtonDownScenePos((Qt::MouseButton )__qt_button0, (const QPointF& )pos1);

}

// QGraphicsSceneMouseEvent::setButtonDownScreenPos(Qt::MouseButton button, const QPoint & pos)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneMouseEvent_setButtonDownScreenPos_MouseButton_QPoint
(void* __this_nativeId,
 int button0,
 QPoint pos1)
{
    Qt::MouseButton __qt_button0 = (Qt::MouseButton) button0;
    QGraphicsSceneMouseEvent_QtDShell *__qt_this = (QGraphicsSceneMouseEvent_QtDShell *) __this_nativeId;
    __qt_this->setButtonDownScreenPos((Qt::MouseButton )__qt_button0, (const QPoint& )pos1);

}

// QGraphicsSceneMouseEvent::setButtons(QFlags<Qt::MouseButton> buttons)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneMouseEvent_setButtons_MouseButtons
(void* __this_nativeId,
 int buttons0)
{
    QFlags<Qt::MouseButton> __qt_buttons0 = (QFlags<Qt::MouseButton>) buttons0;
    QGraphicsSceneMouseEvent_QtDShell *__qt_this = (QGraphicsSceneMouseEvent_QtDShell *) __this_nativeId;
    __qt_this->setButtons((Qt::MouseButtons )__qt_buttons0);

}

// QGraphicsSceneMouseEvent::setLastPos(const QPointF & pos)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneMouseEvent_setLastPos_QPointF
(void* __this_nativeId,
 QPointF pos0)
{
    QGraphicsSceneMouseEvent_QtDShell *__qt_this = (QGraphicsSceneMouseEvent_QtDShell *) __this_nativeId;
    __qt_this->setLastPos((const QPointF& )pos0);

}

// QGraphicsSceneMouseEvent::setLastScenePos(const QPointF & pos)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneMouseEvent_setLastScenePos_QPointF
(void* __this_nativeId,
 QPointF pos0)
{
    QGraphicsSceneMouseEvent_QtDShell *__qt_this = (QGraphicsSceneMouseEvent_QtDShell *) __this_nativeId;
    __qt_this->setLastScenePos((const QPointF& )pos0);

}

// QGraphicsSceneMouseEvent::setLastScreenPos(const QPoint & pos)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneMouseEvent_setLastScreenPos_QPoint
(void* __this_nativeId,
 QPoint pos0)
{
    QGraphicsSceneMouseEvent_QtDShell *__qt_this = (QGraphicsSceneMouseEvent_QtDShell *) __this_nativeId;
    __qt_this->setLastScreenPos((const QPoint& )pos0);

}

// QGraphicsSceneMouseEvent::setModifiers(QFlags<Qt::KeyboardModifier> modifiers)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneMouseEvent_setModifiers_KeyboardModifiers
(void* __this_nativeId,
 int modifiers0)
{
    QFlags<Qt::KeyboardModifier> __qt_modifiers0 = (QFlags<Qt::KeyboardModifier>) modifiers0;
    QGraphicsSceneMouseEvent_QtDShell *__qt_this = (QGraphicsSceneMouseEvent_QtDShell *) __this_nativeId;
    __qt_this->setModifiers((Qt::KeyboardModifiers )__qt_modifiers0);

}

// QGraphicsSceneMouseEvent::setPos(const QPointF & pos)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneMouseEvent_setPos_QPointF
(void* __this_nativeId,
 QPointF pos0)
{
    QGraphicsSceneMouseEvent_QtDShell *__qt_this = (QGraphicsSceneMouseEvent_QtDShell *) __this_nativeId;
    __qt_this->setPos((const QPointF& )pos0);

}

// QGraphicsSceneMouseEvent::setScenePos(const QPointF & pos)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneMouseEvent_setScenePos_QPointF
(void* __this_nativeId,
 QPointF pos0)
{
    QGraphicsSceneMouseEvent_QtDShell *__qt_this = (QGraphicsSceneMouseEvent_QtDShell *) __this_nativeId;
    __qt_this->setScenePos((const QPointF& )pos0);

}

// QGraphicsSceneMouseEvent::setScreenPos(const QPoint & pos)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneMouseEvent_setScreenPos_QPoint
(void* __this_nativeId,
 QPoint pos0)
{
    QGraphicsSceneMouseEvent_QtDShell *__qt_this = (QGraphicsSceneMouseEvent_QtDShell *) __this_nativeId;
    __qt_this->setScreenPos((const QPoint& )pos0);

}

// ---externC---end
// Field accessors


