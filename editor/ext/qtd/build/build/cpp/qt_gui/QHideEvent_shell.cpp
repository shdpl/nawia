#include <QVariant>

#include "QHideEvent_shell.h"
#include <iostream>
#include <qevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QHideEvent_QtDShell::QHideEvent_QtDShell(void *d_ptr)
    : QHideEvent(),
      QtdObjectLink(d_ptr)
{
}

QHideEvent_QtDShell::~QHideEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QHideEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QHideEvent::QHideEvent()
QTD_EXTERN QTD_EXPORT void* qtd_QHideEvent_QHideEvent
(void *d_ptr)
{
    QHideEvent_QtDShell *__qt_this = new QHideEvent_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors


