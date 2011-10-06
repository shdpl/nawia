#include <QVariant>
#include <qmimedata.h>
#include <qwidget.h>

#include "QDragEnterEvent_shell.h"
#include <iostream>
#include <qevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QDragEnterEvent_QtDShell::QDragEnterEvent_QtDShell(void *d_ptr, const QPoint&  pos0, Qt::DropActions  actions1, const QMimeData*  data2, Qt::MouseButtons  buttons3, Qt::KeyboardModifiers  modifiers4)
    : QDragEnterEvent(pos0, actions1, data2, buttons3, modifiers4),
      QtdObjectLink(d_ptr)
{
}

QDragEnterEvent_QtDShell::~QDragEnterEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QDragEnterEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QDragEnterEvent::QDragEnterEvent(const QPoint & pos, QFlags<Qt::DropAction> actions, const QMimeData * data, QFlags<Qt::MouseButton> buttons, QFlags<Qt::KeyboardModifier> modifiers)
QTD_EXTERN QTD_EXPORT void* qtd_QDragEnterEvent_QDragEnterEvent_QPoint_DropActions_QMimeData_MouseButtons_KeyboardModifiers
(void *d_ptr,
 QPoint pos0,
 int actions1,
 void* data2,
 int buttons3,
 int modifiers4)
{
    QFlags<Qt::DropAction> __qt_actions1 = (QFlags<Qt::DropAction>) actions1;
    const QMimeData*  __qt_data2 = (const QMimeData* ) data2;
    QFlags<Qt::MouseButton> __qt_buttons3 = (QFlags<Qt::MouseButton>) buttons3;
    QFlags<Qt::KeyboardModifier> __qt_modifiers4 = (QFlags<Qt::KeyboardModifier>) modifiers4;
    QDragEnterEvent_QtDShell *__qt_this = new QDragEnterEvent_QtDShell(d_ptr, (const QPoint& )pos0, (Qt::DropActions )__qt_actions1, (const QMimeData* )__qt_data2, (Qt::MouseButtons )__qt_buttons3, (Qt::KeyboardModifiers )__qt_modifiers4);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors


