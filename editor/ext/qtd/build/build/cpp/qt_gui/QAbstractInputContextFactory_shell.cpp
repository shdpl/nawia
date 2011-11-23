#include <QVariant>
#include <qinputcontext.h>
#include <qstringlist.h>

#include "QAbstractInputContextFactory_shell.h"
#include <iostream>
#include <qinputcontextplugin.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT QInputContextFactoryInterface* qtd_QAbstractInputContextFactory_cast_to_QAbstractInputContextFactory(QInputContextFactoryInterface *ptr)
{
    return dynamic_cast<QInputContextFactoryInterface*>(ptr);
}

QTD_EXTERN QTD_EXPORT QFactoryInterface* qtd_QAbstractInputContextFactory_cast_to_QAbstractFactory(QInputContextFactoryInterface *ptr)
{
    return dynamic_cast<QFactoryInterface*>(ptr);
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractInputContextFactory_delete(void* nativeId)
{
    delete (QAbstractInputContextFactory_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractInputContextFactory_destroy(void* nativeId)
{
    call_destructor((QAbstractInputContextFactory_QtDShell*)nativeId);
}

QAbstractInputContextFactory_QtDShell::QAbstractInputContextFactory_QtDShell(void *d_ptr)
    : QInputContextFactoryInterface(),
      QtdObjectLink(d_ptr)
{
}

QAbstractInputContextFactory_QtDShell::~QAbstractInputContextFactory_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QAbstractInputContextFactory_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QInputContextFactoryInterface*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void*, QAbstractInputContextFactory_create_string_dispatch, (void *dId, const unsigned short* key0, int key0_size))
QTD_FUNC(GUI, QAbstractInputContextFactory_create_string_dispatch)
QInputContext*  QAbstractInputContextFactory_QtDShell::create(const QString&  key0)
{
    return (QInputContext*) qtd_QAbstractInputContextFactory_create_string_dispatch(this->dId, key0.utf16(), key0.size());
}

QTD_FUNC_DECL(GUI, void, QAbstractInputContextFactory_description_string_dispatch, (void *dId, DArray* ret_str, const unsigned short* key0, int key0_size))
QTD_FUNC(GUI, QAbstractInputContextFactory_description_string_dispatch)
QString  QAbstractInputContextFactory_QtDShell::description(const QString&  key0)
{
    DArray ret_str;
    qtd_QAbstractInputContextFactory_description_string_dispatch(this->dId, &ret_str, key0.utf16(), key0.size());
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(GUI, void, QAbstractInputContextFactory_displayName_string_dispatch, (void *dId, DArray* ret_str, const unsigned short* key0, int key0_size))
QTD_FUNC(GUI, QAbstractInputContextFactory_displayName_string_dispatch)
QString  QAbstractInputContextFactory_QtDShell::displayName(const QString&  key0)
{
    DArray ret_str;
    qtd_QAbstractInputContextFactory_displayName_string_dispatch(this->dId, &ret_str, key0.utf16(), key0.size());
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(GUI, void, QAbstractFactory_keys_const_dispatch, (void *dId, void * __d_arr))
QStringList  QAbstractInputContextFactory_QtDShell::keys() const
{
    QStringList __d_return_value;
    qtd_QAbstractFactory_keys_const_dispatch(this->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QAbstractInputContextFactory_languages_string_dispatch, (void *dId, void * __d_arr, const unsigned short* key0, int key0_size))
QTD_FUNC(GUI, QAbstractInputContextFactory_languages_string_dispatch)
QStringList  QAbstractInputContextFactory_QtDShell::languages(const QString&  key0)
{
    QStringList __d_return_value;
    qtd_QAbstractInputContextFactory_languages_string_dispatch(this->dId, &__d_return_value, key0.utf16(), key0.size());
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractInputContextFactory_initCallBacks(VoidFunc *virts) {
    qtd_QAbstractInputContextFactory_create_string_dispatch = (qtd_QAbstractInputContextFactory_create_string_dispatch_t) virts[0];
    qtd_QAbstractInputContextFactory_description_string_dispatch = (qtd_QAbstractInputContextFactory_description_string_dispatch_t) virts[1];
    qtd_QAbstractInputContextFactory_displayName_string_dispatch = (qtd_QAbstractInputContextFactory_displayName_string_dispatch_t) virts[2];
    qtd_QAbstractInputContextFactory_languages_string_dispatch = (qtd_QAbstractInputContextFactory_languages_string_dispatch_t) virts[3];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
QInputContext*  QAbstractInputContextFactory_QtDShell::__override_create(const QString&  key0, bool static_call)
{
    if (static_call) {
        return 0;
    } else {
        return create((const QString& )key0);
    }
}

QString  QAbstractInputContextFactory_QtDShell::__override_description(const QString&  key0, bool static_call)
{
    if (static_call) {
        return QString();
    } else {
        return description((const QString& )key0);
    }
}

QString  QAbstractInputContextFactory_QtDShell::__override_displayName(const QString&  key0, bool static_call)
{
    if (static_call) {
        return QString();
    } else {
        return displayName((const QString& )key0);
    }
}

QStringList  QAbstractInputContextFactory_QtDShell::__override_keys(bool static_call) const
{
    if (static_call) {
        return QStringList();
    } else {
        return keys();
    }
}

QStringList  QAbstractInputContextFactory_QtDShell::__override_languages(const QString&  key0, bool static_call)
{
    if (static_call) {
        return QStringList();
    } else {
        return languages((const QString& )key0);
    }
}

// ---externC---
// QAbstractInputContextFactory::()
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractInputContextFactory_QAbstractInputContextFactory
(void *d_ptr)
{
    QAbstractInputContextFactory_QtDShell *__qt_this = new QAbstractInputContextFactory_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QAbstractInputContextFactory::create(const QString & key)
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractInputContextFactory_create_string
(void* __this_nativeId,
 DArray key0)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QAbstractInputContextFactory_QtDShell *__qt_this = (QAbstractInputContextFactory_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QInputContextFactoryInterface*)__this_nativeId) != NULL;
    QInputContext*  __qt_return_value = __qt_this->__override_create((const QString& )__qt_key0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAbstractInputContextFactory::description(const QString & key)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractInputContextFactory_description_string
(void* __this_nativeId,
 void* __d_return_value,
 DArray key0)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QAbstractInputContextFactory_QtDShell *__qt_this = (QAbstractInputContextFactory_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QInputContextFactoryInterface*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_description((const QString& )__qt_key0, __do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QAbstractInputContextFactory::displayName(const QString & key)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractInputContextFactory_displayName_string
(void* __this_nativeId,
 void* __d_return_value,
 DArray key0)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QAbstractInputContextFactory_QtDShell *__qt_this = (QAbstractInputContextFactory_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QInputContextFactoryInterface*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_displayName((const QString& )__qt_key0, __do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QAbstractInputContextFactory::keys() const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractInputContextFactory_keys_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QAbstractInputContextFactory_QtDShell *__qt_this = (QAbstractInputContextFactory_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QInputContextFactoryInterface*)__this_nativeId) != NULL;
    QStringList  __qt_return_value = __qt_this->__override_keys(__do_static_call);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QAbstractInputContextFactory::languages(const QString & key)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractInputContextFactory_languages_string
(void* __this_nativeId,
 void* __d_return_value,
 DArray key0)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QAbstractInputContextFactory_QtDShell *__qt_this = (QAbstractInputContextFactory_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QInputContextFactoryInterface*)__this_nativeId) != NULL;
    QStringList  __qt_return_value = __qt_this->__override_languages((const QString& )__qt_key0, __do_static_call);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// ---externC---end
// Field accessors


