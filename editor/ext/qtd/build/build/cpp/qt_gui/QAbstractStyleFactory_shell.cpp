#include <QVariant>
#include <qstringlist.h>
#include <qstyle.h>

#include "QAbstractStyleFactory_shell.h"
#include <iostream>
#include <qstyleplugin.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT QStyleFactoryInterface* qtd_QAbstractStyleFactory_cast_to_QAbstractStyleFactory(QStyleFactoryInterface *ptr)
{
    return dynamic_cast<QStyleFactoryInterface*>(ptr);
}

QTD_EXTERN QTD_EXPORT QFactoryInterface* qtd_QAbstractStyleFactory_cast_to_QAbstractFactory(QStyleFactoryInterface *ptr)
{
    return dynamic_cast<QFactoryInterface*>(ptr);
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractStyleFactory_delete(void* nativeId)
{
    delete (QAbstractStyleFactory_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractStyleFactory_destroy(void* nativeId)
{
    call_destructor((QAbstractStyleFactory_QtDShell*)nativeId);
}

QAbstractStyleFactory_QtDShell::QAbstractStyleFactory_QtDShell(void *d_ptr)
    : QStyleFactoryInterface(),
      QtdObjectLink(d_ptr)
{
}

QAbstractStyleFactory_QtDShell::~QAbstractStyleFactory_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QAbstractStyleFactory_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QStyleFactoryInterface*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void*, QAbstractStyleFactory_create_string_dispatch, (void *dId, const unsigned short* key0, int key0_size))
QTD_FUNC(GUI, QAbstractStyleFactory_create_string_dispatch)
QStyle*  QAbstractStyleFactory_QtDShell::create(const QString&  key0)
{
    return (QStyle*) qtd_QAbstractStyleFactory_create_string_dispatch(this->dId, key0.utf16(), key0.size());
}

QTD_FUNC_DECL(GUI, void, QAbstractFactory_keys_const_dispatch, (void *dId, void * __d_arr))
QStringList  QAbstractStyleFactory_QtDShell::keys() const
{
    QStringList __d_return_value;
    qtd_QAbstractFactory_keys_const_dispatch(this->dId, &__d_return_value);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractStyleFactory_initCallBacks(VoidFunc *virts) {
    qtd_QAbstractStyleFactory_create_string_dispatch = (qtd_QAbstractStyleFactory_create_string_dispatch_t) virts[0];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
QStyle*  QAbstractStyleFactory_QtDShell::__override_create(const QString&  key0, bool static_call)
{
    if (static_call) {
        return 0;
    } else {
        return create((const QString& )key0);
    }
}

QStringList  QAbstractStyleFactory_QtDShell::__override_keys(bool static_call) const
{
    if (static_call) {
        return QStringList();
    } else {
        return keys();
    }
}

// ---externC---
// QAbstractStyleFactory::()
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractStyleFactory_QAbstractStyleFactory
(void *d_ptr)
{
    QAbstractStyleFactory_QtDShell *__qt_this = new QAbstractStyleFactory_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QAbstractStyleFactory::create(const QString & key)
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractStyleFactory_create_string
(void* __this_nativeId,
 DArray key0)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QAbstractStyleFactory_QtDShell *__qt_this = (QAbstractStyleFactory_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QStyleFactoryInterface*)__this_nativeId) != NULL;
    QStyle*  __qt_return_value = __qt_this->__override_create((const QString& )__qt_key0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAbstractStyleFactory::keys() const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractStyleFactory_keys_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QAbstractStyleFactory_QtDShell *__qt_this = (QAbstractStyleFactory_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QStyleFactoryInterface*)__this_nativeId) != NULL;
    QStringList  __qt_return_value = __qt_this->__override_keys(__do_static_call);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// ---externC---end
// Field accessors


