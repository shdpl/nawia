#include <QVariant>

#include "QTextBlockUserData_shell.h"
#include <iostream>
#include <qtextobject.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QTextBlockUserData_delete(void* nativeId)
{
    delete (QTextBlockUserData_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QTextBlockUserData_destroy(void* nativeId)
{
    call_destructor((QTextBlockUserData_QtDShell*)nativeId);
}

QTextBlockUserData_QtDShell::QTextBlockUserData_QtDShell(void *d_ptr)
    : QTextBlockUserData(),
      QtdObjectLink(d_ptr)
{
}

QTextBlockUserData_QtDShell::~QTextBlockUserData_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QTextBlockUserData_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QTextBlockUserData::()
QTD_EXTERN QTD_EXPORT void* qtd_QTextBlockUserData_QTextBlockUserData
(void *d_ptr)
{
    QTextBlockUserData_QtDShell *__qt_this = new QTextBlockUserData_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors


