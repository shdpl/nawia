#include <QVariant>

#include "QToolBarChangeEvent_shell.h"
#include <iostream>
#include <qevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QToolBarChangeEvent_QtDShell::QToolBarChangeEvent_QtDShell(void *d_ptr, bool  t0)
    : QToolBarChangeEvent(t0),
      QtdObjectLink(d_ptr)
{
}

QToolBarChangeEvent_QtDShell::~QToolBarChangeEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QToolBarChangeEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QToolBarChangeEvent::QToolBarChangeEvent(bool t)
QTD_EXTERN QTD_EXPORT void* qtd_QToolBarChangeEvent_QToolBarChangeEvent_bool
(void *d_ptr,
 bool t0)
{
    QToolBarChangeEvent_QtDShell *__qt_this = new QToolBarChangeEvent_QtDShell(d_ptr, (bool )t0);
    return (void *) __qt_this;

}

// QToolBarChangeEvent::toggle() const
QTD_EXTERN QTD_EXPORT bool qtd_QToolBarChangeEvent_toggle_const
(void* __this_nativeId)
{
    QToolBarChangeEvent_QtDShell *__qt_this = (QToolBarChangeEvent_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->toggle();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


