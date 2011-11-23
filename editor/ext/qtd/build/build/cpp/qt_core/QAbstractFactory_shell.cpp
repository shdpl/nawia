#include <QVariant>
#include <qstringlist.h>

#include "QAbstractFactory_shell.h"
#include <iostream>
#include <qfactoryinterface.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT QFactoryInterface* qtd_QAbstractFactory_cast_to_QAbstractFactory(QFactoryInterface *ptr)
{
    return dynamic_cast<QFactoryInterface*>(ptr);
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractFactory_delete(void* nativeId)
{
    delete (QAbstractFactory_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractFactory_destroy(void* nativeId)
{
    call_destructor((QAbstractFactory_QtDShell*)nativeId);
}

QAbstractFactory_QtDShell::QAbstractFactory_QtDShell(void *d_ptr)
    : QFactoryInterface(),
      QtdObjectLink(d_ptr)
{
}

QAbstractFactory_QtDShell::~QAbstractFactory_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QAbstractFactory_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QFactoryInterface*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(CORE, void, QAbstractFactory_keys_const_dispatch, (void *dId, void * __d_arr))
QTD_FUNC(CORE, QAbstractFactory_keys_const_dispatch)
QStringList  QAbstractFactory_QtDShell::keys() const
{
    QStringList __d_return_value;
    qtd_QAbstractFactory_keys_const_dispatch(this->dId, &__d_return_value);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractFactory_initCallBacks(VoidFunc *virts) {
    qtd_QAbstractFactory_keys_const_dispatch = (qtd_QAbstractFactory_keys_const_dispatch_t) virts[0];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
QStringList  QAbstractFactory_QtDShell::__override_keys(bool static_call) const
{
    if (static_call) {
        return QStringList();
    } else {
        return keys();
    }
}

// ---externC---
// QAbstractFactory::()
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractFactory_QAbstractFactory
(void *d_ptr)
{
    QAbstractFactory_QtDShell *__qt_this = new QAbstractFactory_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QAbstractFactory::keys() const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractFactory_keys_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QAbstractFactory_QtDShell *__qt_this = (QAbstractFactory_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QFactoryInterface*)__this_nativeId) != NULL;
    QStringList  __qt_return_value = __qt_this->__override_keys(__do_static_call);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// ---externC---end
// Field accessors


