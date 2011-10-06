#include <QVariant>

#include "QDragLeaveEvent_shell.h"
#include <iostream>
#include <qevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QDragLeaveEvent_QtDShell::QDragLeaveEvent_QtDShell(void *d_ptr)
    : QDragLeaveEvent(),
      QtdObjectLink(d_ptr)
{
}

QDragLeaveEvent_QtDShell::~QDragLeaveEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QDragLeaveEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QDragLeaveEvent::QDragLeaveEvent()
QTD_EXTERN QTD_EXPORT void* qtd_QDragLeaveEvent_QDragLeaveEvent
(void *d_ptr)
{
    QDragLeaveEvent_QtDShell *__qt_this = new QDragLeaveEvent_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors


