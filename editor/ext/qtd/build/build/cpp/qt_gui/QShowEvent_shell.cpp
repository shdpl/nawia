#include <QVariant>

#include "QShowEvent_shell.h"
#include <iostream>
#include <qevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QShowEvent_QtDShell::QShowEvent_QtDShell(void *d_ptr)
    : QShowEvent(),
      QtdObjectLink(d_ptr)
{
}

QShowEvent_QtDShell::~QShowEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QShowEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QShowEvent::QShowEvent()
QTD_EXTERN QTD_EXPORT void* qtd_QShowEvent_QShowEvent
(void *d_ptr)
{
    QShowEvent_QtDShell *__qt_this = new QShowEvent_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors


