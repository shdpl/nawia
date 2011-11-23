#include <QVariant>

#include "QIconDragEvent_shell.h"
#include <iostream>
#include <qevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QIconDragEvent_QtDShell::QIconDragEvent_QtDShell(void *d_ptr)
    : QIconDragEvent(),
      QtdObjectLink(d_ptr)
{
}

QIconDragEvent_QtDShell::~QIconDragEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QIconDragEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QIconDragEvent::QIconDragEvent()
QTD_EXTERN QTD_EXPORT void* qtd_QIconDragEvent_QIconDragEvent
(void *d_ptr)
{
    QIconDragEvent_QtDShell *__qt_this = new QIconDragEvent_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors


