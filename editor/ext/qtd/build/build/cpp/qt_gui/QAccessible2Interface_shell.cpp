#include <QVariant>

#include "QAccessible2Interface_shell.h"
#include <iostream>
#include <qaccessible2.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QAccessible2Interface_delete(void* nativeId)
{
    delete (QAccessible2Interface_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QAccessible2Interface_destroy(void* nativeId)
{
    call_destructor((QAccessible2Interface_QtDShell*)nativeId);
}

QAccessible2Interface_QtDShell::QAccessible2Interface_QtDShell(void *d_ptr)
    : QAccessible2Interface(),
      QtdObjectLink(d_ptr)
{
}

QAccessible2Interface_QtDShell::~QAccessible2Interface_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QAccessible2Interface_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QAccessible2Interface::()
QTD_EXTERN QTD_EXPORT void* qtd_QAccessible2Interface_QAccessible2Interface
(void *d_ptr)
{
    QAccessible2Interface_QtDShell *__qt_this = new QAccessible2Interface_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors


