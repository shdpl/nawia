#include <QVariant>
#include <qitemeditorfactory.h>

#include "QItemEditorFactory_shell.h"
#include <iostream>
#include <qitemeditorfactory.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QItemEditorFactory_delete(void* nativeId)
{
    delete (QItemEditorFactory_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QItemEditorFactory_destroy(void* nativeId)
{
    call_destructor((QItemEditorFactory_QtDShell*)nativeId);
}

QItemEditorFactory_QtDShell::QItemEditorFactory_QtDShell(void *d_ptr)
    : QItemEditorFactory(),
      QtdObjectLink(d_ptr)
{
}

QItemEditorFactory_QtDShell::~QItemEditorFactory_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QItemEditorFactory_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QItemEditorFactory::QItemEditorFactory()
QTD_EXTERN QTD_EXPORT void* qtd_QItemEditorFactory_QItemEditorFactory
(void *d_ptr)
{
    QItemEditorFactory_QtDShell *__qt_this = new QItemEditorFactory_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QItemEditorFactory::defaultFactory()
QTD_EXTERN QTD_EXPORT void* qtd_QItemEditorFactory_defaultFactory
()
{
    const QItemEditorFactory*  __qt_return_value = QItemEditorFactory_QtDShell::defaultFactory();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QItemEditorFactory::setDefaultFactory(QItemEditorFactory * factory)
QTD_EXTERN QTD_EXPORT void qtd_QItemEditorFactory_setDefaultFactory_QItemEditorFactory
(void* factory0)
{
    QItemEditorFactory*  __qt_factory0 = (QItemEditorFactory* ) factory0;
    QItemEditorFactory_QtDShell::setDefaultFactory((QItemEditorFactory* )__qt_factory0);

}

// ---externC---end
// Field accessors


