#include <QVariant>

#include "QCloseEvent_shell.h"
#include <iostream>
#include <qevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QCloseEvent_QtDShell::QCloseEvent_QtDShell(void *d_ptr)
    : QCloseEvent(),
      QtdObjectLink(d_ptr)
{
}

QCloseEvent_QtDShell::~QCloseEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QCloseEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QCloseEvent::QCloseEvent()
QTD_EXTERN QTD_EXPORT void* qtd_QCloseEvent_QCloseEvent
(void *d_ptr)
{
    QCloseEvent_QtDShell *__qt_this = new QCloseEvent_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors


