#include <QVariant>
#include <qstringlist.h>
#include <qstyle.h>

#include "QStyleFactory_shell.h"
#include <iostream>
#include <qstylefactory.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QStyleFactory_delete(void* nativeId)
{
    delete (QStyleFactory_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QStyleFactory_destroy(void* nativeId)
{
    call_destructor((QStyleFactory_QtDShell*)nativeId);
}

QStyleFactory_QtDShell::QStyleFactory_QtDShell()
    : QStyleFactory()
{
}

QStyleFactory_QtDShell::~QStyleFactory_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStyleFactory_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStyleFactory::()
QTD_EXTERN QTD_EXPORT void* qtd_QStyleFactory_QStyleFactory
(void *d_ptr)
{
    QStyleFactory_QtDShell *__qt_this = new QStyleFactory_QtDShell();
    return (void *) __qt_this;

}

// QStyleFactory::create(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QStyleFactory_create_string
(DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QStyle*  __qt_return_value = QStyleFactory_QtDShell::create((const QString& )__qt_arg__1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QStyleFactory::keys()
QTD_EXTERN QTD_EXPORT void qtd_QStyleFactory_keys
(void* __d_return_value)
{
    QStringList  __qt_return_value = QStyleFactory_QtDShell::keys();

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// ---externC---end
// Field accessors


