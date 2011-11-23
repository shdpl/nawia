#include <QVariant>
#include <qaccessible.h>
#include <qobject.h>

#include "QAccessible_shell.h"
#include <iostream>
#include <qaccessible.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QAccessible_delete(void* nativeId)
{
    delete (QAccessible_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QAccessible_destroy(void* nativeId)
{
    call_destructor((QAccessible_QtDShell*)nativeId);
}

QAccessible_QtDShell::QAccessible_QtDShell()
    : QAccessible()
{
}

QAccessible_QtDShell::~QAccessible_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QAccessible_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QAccessible::()
QTD_EXTERN QTD_EXPORT void* qtd_QAccessible_QAccessible
(void *d_ptr)
{
    QAccessible_QtDShell *__qt_this = new QAccessible_QtDShell();
    return (void *) __qt_this;

}

// QAccessible::isActive()
QTD_EXTERN QTD_EXPORT bool qtd_QAccessible_isActive
()
{
    bool  __qt_return_value = QAccessible_QtDShell::isActive();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessible::queryAccessibleInterface(QObject * arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QAccessible_queryAccessibleInterface_QObject
(void* arg__1)
{
    QObject*  __qt_arg__1 = (QObject* ) arg__1;
    QAccessibleInterface*  __qt_return_value = QAccessible_QtDShell::queryAccessibleInterface((QObject* )__qt_arg__1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAccessible::setRootObject(QObject * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAccessible_setRootObject_QObject
(void* arg__1)
{
    QObject*  __qt_arg__1 = (QObject* ) arg__1;
    QAccessible_QtDShell::setRootObject((QObject* )__qt_arg__1);

}

// QAccessible::updateAccessibility(QObject * arg__1, int who, QAccessible::Event reason)
QTD_EXTERN QTD_EXPORT void qtd_QAccessible_updateAccessibility_QObject_int_Event
(void* arg__1,
 int who1,
 int reason2)
{
    QObject*  __qt_arg__1 = (QObject* ) arg__1;
    QAccessible::Event __qt_reason2 = (QAccessible::Event) reason2;
    QAccessible_QtDShell::updateAccessibility((QObject* )__qt_arg__1, (int )who1, (QAccessible::Event )__qt_reason2);

}

// ---externC---end
// Field accessors


