#include <QVariant>
#include <qgraphicssceneevent.h>
#include <qmimedata.h>
#include <qwidget.h>

#include "QGraphicsSceneDragDropEvent_shell.h"
#include <iostream>
#include <qgraphicssceneevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QGraphicsSceneDragDropEvent_QtDShell::QGraphicsSceneDragDropEvent_QtDShell(void *d_ptr, QEvent::Type  type0)
    : QGraphicsSceneDragDropEvent(type0),
      QtdObjectLink(d_ptr)
{
}

QGraphicsSceneDragDropEvent_QtDShell::~QGraphicsSceneDragDropEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneDragDropEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QGraphicsSceneDragDropEvent::QGraphicsSceneDragDropEvent(QEvent::Type type)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsSceneDragDropEvent_QGraphicsSceneDragDropEvent_Type
(void *d_ptr,
 int type0)
{
    QEvent::Type __qt_type0 = (QEvent::Type) type0;
    QGraphicsSceneDragDropEvent_QtDShell *__qt_this = new QGraphicsSceneDragDropEvent_QtDShell(d_ptr, (QEvent::Type )__qt_type0);
    return (void *) __qt_this;

}

// QGraphicsSceneDragDropEvent::acceptProposedAction()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneDragDropEvent_acceptProposedAction
(void* __this_nativeId)
{
    QGraphicsSceneDragDropEvent_QtDShell *__qt_this = (QGraphicsSceneDragDropEvent_QtDShell *) __this_nativeId;
    __qt_this->acceptProposedAction();

}

// QGraphicsSceneDragDropEvent::buttons() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsSceneDragDropEvent_buttons_const
(void* __this_nativeId)
{
    QGraphicsSceneDragDropEvent_QtDShell *__qt_this = (QGraphicsSceneDragDropEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->buttons();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsSceneDragDropEvent::dropAction() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsSceneDragDropEvent_dropAction_const
(void* __this_nativeId)
{
    QGraphicsSceneDragDropEvent_QtDShell *__qt_this = (QGraphicsSceneDragDropEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->dropAction();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsSceneDragDropEvent::mimeData() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsSceneDragDropEvent_mimeData_const
(void* __this_nativeId)
{
    QGraphicsSceneDragDropEvent_QtDShell *__qt_this = (QGraphicsSceneDragDropEvent_QtDShell *) __this_nativeId;
    const QMimeData*  __qt_return_value = __qt_this->mimeData();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsSceneDragDropEvent::modifiers() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsSceneDragDropEvent_modifiers_const
(void* __this_nativeId)
{
    QGraphicsSceneDragDropEvent_QtDShell *__qt_this = (QGraphicsSceneDragDropEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->modifiers();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsSceneDragDropEvent::pos() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneDragDropEvent_pos_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QGraphicsSceneDragDropEvent_QtDShell *__qt_this = (QGraphicsSceneDragDropEvent_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->pos();

    *__d_return_value = __qt_return_value;

}

// QGraphicsSceneDragDropEvent::possibleActions() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsSceneDragDropEvent_possibleActions_const
(void* __this_nativeId)
{
    QGraphicsSceneDragDropEvent_QtDShell *__qt_this = (QGraphicsSceneDragDropEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->possibleActions();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsSceneDragDropEvent::proposedAction() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsSceneDragDropEvent_proposedAction_const
(void* __this_nativeId)
{
    QGraphicsSceneDragDropEvent_QtDShell *__qt_this = (QGraphicsSceneDragDropEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->proposedAction();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsSceneDragDropEvent::scenePos() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneDragDropEvent_scenePos_const
(void* __this_nativeId,
 QPointF * __d_return_value)
{
    QGraphicsSceneDragDropEvent_QtDShell *__qt_this = (QGraphicsSceneDragDropEvent_QtDShell *) __this_nativeId;
    QPointF  __qt_return_value = __qt_this->scenePos();

    *__d_return_value = __qt_return_value;

}

// QGraphicsSceneDragDropEvent::screenPos() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneDragDropEvent_screenPos_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QGraphicsSceneDragDropEvent_QtDShell *__qt_this = (QGraphicsSceneDragDropEvent_QtDShell *) __this_nativeId;
    QPoint  __qt_return_value = __qt_this->screenPos();

    *__d_return_value = __qt_return_value;

}

// QGraphicsSceneDragDropEvent::setButtons(QFlags<Qt::MouseButton> buttons)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneDragDropEvent_setButtons_MouseButtons
(void* __this_nativeId,
 int buttons0)
{
    QFlags<Qt::MouseButton> __qt_buttons0 = (QFlags<Qt::MouseButton>) buttons0;
    QGraphicsSceneDragDropEvent_QtDShell *__qt_this = (QGraphicsSceneDragDropEvent_QtDShell *) __this_nativeId;
    __qt_this->setButtons((Qt::MouseButtons )__qt_buttons0);

}

// QGraphicsSceneDragDropEvent::setDropAction(Qt::DropAction action)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneDragDropEvent_setDropAction_DropAction
(void* __this_nativeId,
 int action0)
{
    Qt::DropAction __qt_action0 = (Qt::DropAction) action0;
    QGraphicsSceneDragDropEvent_QtDShell *__qt_this = (QGraphicsSceneDragDropEvent_QtDShell *) __this_nativeId;
    __qt_this->setDropAction((Qt::DropAction )__qt_action0);

}

// QGraphicsSceneDragDropEvent::setModifiers(QFlags<Qt::KeyboardModifier> modifiers)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneDragDropEvent_setModifiers_KeyboardModifiers
(void* __this_nativeId,
 int modifiers0)
{
    QFlags<Qt::KeyboardModifier> __qt_modifiers0 = (QFlags<Qt::KeyboardModifier>) modifiers0;
    QGraphicsSceneDragDropEvent_QtDShell *__qt_this = (QGraphicsSceneDragDropEvent_QtDShell *) __this_nativeId;
    __qt_this->setModifiers((Qt::KeyboardModifiers )__qt_modifiers0);

}

// QGraphicsSceneDragDropEvent::setPos(const QPointF & pos)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneDragDropEvent_setPos_QPointF
(void* __this_nativeId,
 QPointF pos0)
{
    QGraphicsSceneDragDropEvent_QtDShell *__qt_this = (QGraphicsSceneDragDropEvent_QtDShell *) __this_nativeId;
    __qt_this->setPos((const QPointF& )pos0);

}

// QGraphicsSceneDragDropEvent::setPossibleActions(QFlags<Qt::DropAction> actions)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneDragDropEvent_setPossibleActions_DropActions
(void* __this_nativeId,
 int actions0)
{
    QFlags<Qt::DropAction> __qt_actions0 = (QFlags<Qt::DropAction>) actions0;
    QGraphicsSceneDragDropEvent_QtDShell *__qt_this = (QGraphicsSceneDragDropEvent_QtDShell *) __this_nativeId;
    __qt_this->setPossibleActions((Qt::DropActions )__qt_actions0);

}

// QGraphicsSceneDragDropEvent::setProposedAction(Qt::DropAction action)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneDragDropEvent_setProposedAction_DropAction
(void* __this_nativeId,
 int action0)
{
    Qt::DropAction __qt_action0 = (Qt::DropAction) action0;
    QGraphicsSceneDragDropEvent_QtDShell *__qt_this = (QGraphicsSceneDragDropEvent_QtDShell *) __this_nativeId;
    __qt_this->setProposedAction((Qt::DropAction )__qt_action0);

}

// QGraphicsSceneDragDropEvent::setScenePos(const QPointF & pos)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneDragDropEvent_setScenePos_QPointF
(void* __this_nativeId,
 QPointF pos0)
{
    QGraphicsSceneDragDropEvent_QtDShell *__qt_this = (QGraphicsSceneDragDropEvent_QtDShell *) __this_nativeId;
    __qt_this->setScenePos((const QPointF& )pos0);

}

// QGraphicsSceneDragDropEvent::setScreenPos(const QPoint & pos)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsSceneDragDropEvent_setScreenPos_QPoint
(void* __this_nativeId,
 QPoint pos0)
{
    QGraphicsSceneDragDropEvent_QtDShell *__qt_this = (QGraphicsSceneDragDropEvent_QtDShell *) __this_nativeId;
    __qt_this->setScreenPos((const QPoint& )pos0);

}

// QGraphicsSceneDragDropEvent::source() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsSceneDragDropEvent_source_const
(void* __this_nativeId)
{
    QGraphicsSceneDragDropEvent_QtDShell *__qt_this = (QGraphicsSceneDragDropEvent_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->source();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


