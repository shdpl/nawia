#include <QVariant>
#include <qmimedata.h>
#include <qwidget.h>

#include "QDragMoveEvent_shell.h"
#include <iostream>
#include <qevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QDragMoveEvent_QtDShell::QDragMoveEvent_QtDShell(void *d_ptr, const QPoint&  pos0, Qt::DropActions  actions1, const QMimeData*  data2, Qt::MouseButtons  buttons3, Qt::KeyboardModifiers  modifiers4, QEvent::Type  type5)
    : QDragMoveEvent(pos0, actions1, data2, buttons3, modifiers4, type5),
      QtdObjectLink(d_ptr)
{
}

QDragMoveEvent_QtDShell::~QDragMoveEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QDragMoveEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QDragMoveEvent::QDragMoveEvent(const QPoint & pos, QFlags<Qt::DropAction> actions, const QMimeData * data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers, QEvent::Type type)
QTD_EXTERN QTD_EXPORT void* qtd_QDragMoveEvent_QDragMoveEvent_QPoint_DropActions_QMimeData_MouseButtons_KeyboardModifiers_Type
(void *d_ptr,
 QPoint pos0,
 int actions1,
 void* data2,
 int buttons3,
 int modifiers4,
 int type5)
{
    QFlags<Qt::DropAction> __qt_actions1 = (QFlags<Qt::DropAction>) actions1;
    const QMimeData*  __qt_data2 = (const QMimeData* ) data2;
    QFlags<Qt::MouseButton> __qt_buttons3 = (QFlags<Qt::MouseButton>) buttons3;
    QFlags<Qt::KeyboardModifier> __qt_modifiers4 = (QFlags<Qt::KeyboardModifier>) modifiers4;
    QEvent::Type __qt_type5 = (QEvent::Type) type5;
    QDragMoveEvent_QtDShell *__qt_this = new QDragMoveEvent_QtDShell(d_ptr, (const QPoint& )pos0, (Qt::DropActions )__qt_actions1, (const QMimeData* )__qt_data2, (Qt::MouseButtons )__qt_buttons3, (Qt::KeyboardModifiers )__qt_modifiers4, (QEvent::Type )__qt_type5);
    return (void *) __qt_this;

}

// QDragMoveEvent::accept(const QRect & r)
QTD_EXTERN QTD_EXPORT void qtd_QDragMoveEvent_accept_QRect
(void* __this_nativeId,
 QRect r0)
{
    QDragMoveEvent_QtDShell *__qt_this = (QDragMoveEvent_QtDShell *) __this_nativeId;
    __qt_this->accept((const QRect& )r0);

}

// QDragMoveEvent::answerRect() const
QTD_EXTERN QTD_EXPORT void qtd_QDragMoveEvent_answerRect_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QDragMoveEvent_QtDShell *__qt_this = (QDragMoveEvent_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->answerRect();

    *__d_return_value = __qt_return_value;

}

// QDragMoveEvent::ignore(const QRect & r)
QTD_EXTERN QTD_EXPORT void qtd_QDragMoveEvent_ignore_QRect
(void* __this_nativeId,
 QRect r0)
{
    QDragMoveEvent_QtDShell *__qt_this = (QDragMoveEvent_QtDShell *) __this_nativeId;
    __qt_this->ignore((const QRect& )r0);

}

// ---externC---end
// Field accessors
QRect  QDragMoveEvent_QtDShell::rect_getter()
{
    return rect;
}

QTD_EXTERN QTD_EXPORT void qtd_QDragMoveEvent_rect
(void* __this_nativeId,
 QRect * __d_return_value){
    QDragMoveEvent_QtDShell *__qt_object = (QDragMoveEvent_QtDShell *) __this_nativeId;
    QRect __tmp_rect = __qt_object->rect_getter();
    *__d_return_value = __tmp_rect;
}

void QDragMoveEvent_QtDShell::setRect_setter(QRect  rect0)
{
    this->rect = rect0;
}

QTD_EXTERN QTD_EXPORT void qtd_QDragMoveEvent_setRect_QRect
(void* __this_nativeId,
 QRect rect0){
    QDragMoveEvent_QtDShell *__qt_object = (QDragMoveEvent_QtDShell *) __this_nativeId;
    __qt_object->setRect_setter(rect0);
}



