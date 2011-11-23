#include <QVariant>
#include <qaction.h>

#include "QActionEvent_shell.h"
#include <iostream>
#include <qevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QActionEvent_QtDShell::QActionEvent_QtDShell(void *d_ptr, int  type0, QAction*  action1, QAction*  before2)
    : QActionEvent(type0, action1, before2),
      QtdObjectLink(d_ptr)
{
}

QActionEvent_QtDShell::~QActionEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QActionEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QActionEvent::QActionEvent(int type, QAction * action, QAction * before)
QTD_EXTERN QTD_EXPORT void* qtd_QActionEvent_QActionEvent_int_QAction_QAction
(void *d_ptr,
 int type0,
 void* action1,
 void* before2)
{
    QAction*  __qt_action1 = (QAction* ) action1;
    QAction*  __qt_before2 = (QAction* ) before2;
    QActionEvent_QtDShell *__qt_this = new QActionEvent_QtDShell(d_ptr, (int )type0, (QAction* )__qt_action1, (QAction* )__qt_before2);
    return (void *) __qt_this;

}

// QActionEvent::action() const
QTD_EXTERN QTD_EXPORT void* qtd_QActionEvent_action_const
(void* __this_nativeId)
{
    QActionEvent_QtDShell *__qt_this = (QActionEvent_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->action();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QActionEvent::before() const
QTD_EXTERN QTD_EXPORT void* qtd_QActionEvent_before_const
(void* __this_nativeId)
{
    QActionEvent_QtDShell *__qt_this = (QActionEvent_QtDShell *) __this_nativeId;
    QAction*  __qt_return_value = __qt_this->before();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


