#include <QVariant>
#include <qaccessible.h>
#include <qobject.h>
#include <qstringlist.h>

#include "QAbstractAccessibleFactory_shell.h"
#include <iostream>
#include <qaccessibleplugin.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT QAccessibleFactoryInterface* qtd_QAbstractAccessibleFactory_cast_to_QAbstractAccessibleFactory(QAccessibleFactoryInterface *ptr)
{
    return dynamic_cast<QAccessibleFactoryInterface*>(ptr);
}

QTD_EXTERN QTD_EXPORT QFactoryInterface* qtd_QAbstractAccessibleFactory_cast_to_QAbstractFactory(QAccessibleFactoryInterface *ptr)
{
    return dynamic_cast<QFactoryInterface*>(ptr);
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractAccessibleFactory_delete(void* nativeId)
{
    delete (QAbstractAccessibleFactory_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractAccessibleFactory_destroy(void* nativeId)
{
    call_destructor((QAbstractAccessibleFactory_QtDShell*)nativeId);
}

QAbstractAccessibleFactory_QtDShell::QAbstractAccessibleFactory_QtDShell(void *d_ptr)
    : QAccessibleFactoryInterface(),
      QtdObjectLink(d_ptr)
{
}

QAbstractAccessibleFactory_QtDShell::~QAbstractAccessibleFactory_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QAbstractAccessibleFactory_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QAccessibleFactoryInterface*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void*, QAbstractAccessibleFactory_create_string_QObject_dispatch, (void *dId, const unsigned short* key0, int key0_size, void* object1))
QTD_FUNC(GUI, QAbstractAccessibleFactory_create_string_QObject_dispatch)
QAccessibleInterface*  QAbstractAccessibleFactory_QtDShell::create(const QString&  key0, QObject*  object1)
{
    return (QAccessibleInterface*) qtd_QAbstractAccessibleFactory_create_string_QObject_dispatch(this->dId, key0.utf16(), key0.size(), (QObject* )object1);
}

QTD_FUNC_DECL(GUI, void, QAbstractFactory_keys_const_dispatch, (void *dId, void * __d_arr))
QStringList  QAbstractAccessibleFactory_QtDShell::keys() const
{
    QStringList __d_return_value;
    qtd_QAbstractFactory_keys_const_dispatch(this->dId, &__d_return_value);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractAccessibleFactory_initCallBacks(VoidFunc *virts) {
    qtd_QAbstractAccessibleFactory_create_string_QObject_dispatch = (qtd_QAbstractAccessibleFactory_create_string_QObject_dispatch_t) virts[0];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
QAccessibleInterface*  QAbstractAccessibleFactory_QtDShell::__override_create(const QString&  key0, QObject*  object1, bool static_call)
{
    if (static_call) {
        return 0;
    } else {
        return create((const QString& )key0, (QObject* )object1);
    }
}

QStringList  QAbstractAccessibleFactory_QtDShell::__override_keys(bool static_call) const
{
    if (static_call) {
        return QStringList();
    } else {
        return keys();
    }
}

// ---externC---
// QAbstractAccessibleFactory::()
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractAccessibleFactory_QAbstractAccessibleFactory
(void *d_ptr)
{
    QAbstractAccessibleFactory_QtDShell *__qt_this = new QAbstractAccessibleFactory_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QAbstractAccessibleFactory::create(const QString & key, QObject * object)
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractAccessibleFactory_create_string_QObject
(void* __this_nativeId,
 DArray key0,
 void* object1)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QObject*  __qt_object1 = (QObject* ) object1;
    QAbstractAccessibleFactory_QtDShell *__qt_this = (QAbstractAccessibleFactory_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleFactoryInterface*)__this_nativeId) != NULL;
    QAccessibleInterface*  __qt_return_value = __qt_this->__override_create((const QString& )__qt_key0, (QObject* )__qt_object1, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAbstractAccessibleFactory::keys() const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractAccessibleFactory_keys_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QAbstractAccessibleFactory_QtDShell *__qt_this = (QAbstractAccessibleFactory_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleFactoryInterface*)__this_nativeId) != NULL;
    QStringList  __qt_return_value = __qt_this->__override_keys(__do_static_call);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// ---externC---end
// Field accessors


