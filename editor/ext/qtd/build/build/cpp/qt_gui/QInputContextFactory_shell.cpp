#include <QVariant>
#include <qinputcontext.h>
#include <qobject.h>
#include <qstringlist.h>

#include "QInputContextFactory_shell.h"
#include <iostream>
#include <qinputcontextfactory.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QInputContextFactory_delete(void* nativeId)
{
    delete (QInputContextFactory_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QInputContextFactory_destroy(void* nativeId)
{
    call_destructor((QInputContextFactory_QtDShell*)nativeId);
}

QInputContextFactory_QtDShell::QInputContextFactory_QtDShell()
    : QInputContextFactory()
{
}

QInputContextFactory_QtDShell::~QInputContextFactory_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QInputContextFactory_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QInputContextFactory::()
QTD_EXTERN QTD_EXPORT void* qtd_QInputContextFactory_QInputContextFactory
(void *d_ptr)
{
    QInputContextFactory_QtDShell *__qt_this = new QInputContextFactory_QtDShell();
    return (void *) __qt_this;

}

// QInputContextFactory::create(const QString & key, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QInputContextFactory_create_string_QObject
(DArray key0,
 void* parent1)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QObject*  __qt_parent1 = (QObject* ) parent1;
    QInputContext*  __qt_return_value = QInputContextFactory_QtDShell::create((const QString& )__qt_key0, (QObject* )__qt_parent1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QInputContextFactory::description(const QString & key)
QTD_EXTERN QTD_EXPORT void qtd_QInputContextFactory_description_string
(void* __d_return_value,
 DArray key0)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QString  __qt_return_value = QInputContextFactory_QtDShell::description((const QString& )__qt_key0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QInputContextFactory::displayName(const QString & key)
QTD_EXTERN QTD_EXPORT void qtd_QInputContextFactory_displayName_string
(void* __d_return_value,
 DArray key0)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QString  __qt_return_value = QInputContextFactory_QtDShell::displayName((const QString& )__qt_key0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QInputContextFactory::keys()
QTD_EXTERN QTD_EXPORT void qtd_QInputContextFactory_keys
(void* __d_return_value)
{
    QStringList  __qt_return_value = QInputContextFactory_QtDShell::keys();

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QInputContextFactory::languages(const QString & key)
QTD_EXTERN QTD_EXPORT void qtd_QInputContextFactory_languages_string
(void* __d_return_value,
 DArray key0)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QStringList  __qt_return_value = QInputContextFactory_QtDShell::languages((const QString& )__qt_key0);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// ---externC---end
// Field accessors


