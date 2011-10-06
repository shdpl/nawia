#include <QVariant>
#include <qiconengine.h>
#include <qstringlist.h>

#include "QAbstractIconEngineFactoryV2_shell.h"
#include <iostream>
#include <qiconengineplugin.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT QIconEngineFactoryInterfaceV2* qtd_QAbstractIconEngineFactoryV2_cast_to_QAbstractIconEngineFactoryV2(QIconEngineFactoryInterfaceV2 *ptr)
{
    return dynamic_cast<QIconEngineFactoryInterfaceV2*>(ptr);
}

QTD_EXTERN QTD_EXPORT QFactoryInterface* qtd_QAbstractIconEngineFactoryV2_cast_to_QAbstractFactory(QIconEngineFactoryInterfaceV2 *ptr)
{
    return dynamic_cast<QFactoryInterface*>(ptr);
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractIconEngineFactoryV2_delete(void* nativeId)
{
    delete (QAbstractIconEngineFactoryV2_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractIconEngineFactoryV2_destroy(void* nativeId)
{
    call_destructor((QAbstractIconEngineFactoryV2_QtDShell*)nativeId);
}

QAbstractIconEngineFactoryV2_QtDShell::QAbstractIconEngineFactoryV2_QtDShell(void *d_ptr)
    : QIconEngineFactoryInterfaceV2(),
      QtdObjectLink(d_ptr)
{
}

QAbstractIconEngineFactoryV2_QtDShell::~QAbstractIconEngineFactoryV2_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QAbstractIconEngineFactoryV2_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QIconEngineFactoryInterfaceV2*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void*, QAbstractIconEngineFactoryV2_create_string_dispatch, (void *dId, const unsigned short* filename0, int filename0_size))
QTD_FUNC(GUI, QAbstractIconEngineFactoryV2_create_string_dispatch)
QIconEngineV2*  QAbstractIconEngineFactoryV2_QtDShell::create(const QString&  filename0)
{
    return (QIconEngineV2*) qtd_QAbstractIconEngineFactoryV2_create_string_dispatch(this->dId, filename0.utf16(), filename0.size());
}

QTD_FUNC_DECL(GUI, void, QAbstractFactory_keys_const_dispatch, (void *dId, void * __d_arr))
QStringList  QAbstractIconEngineFactoryV2_QtDShell::keys() const
{
    QStringList __d_return_value;
    qtd_QAbstractFactory_keys_const_dispatch(this->dId, &__d_return_value);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractIconEngineFactoryV2_initCallBacks(VoidFunc *virts) {
    qtd_QAbstractIconEngineFactoryV2_create_string_dispatch = (qtd_QAbstractIconEngineFactoryV2_create_string_dispatch_t) virts[0];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
QIconEngineV2*  QAbstractIconEngineFactoryV2_QtDShell::__override_create(const QString&  filename0, bool static_call)
{
    if (static_call) {
        return 0;
    } else {
        return create((const QString& )filename0);
    }
}

QStringList  QAbstractIconEngineFactoryV2_QtDShell::__override_keys(bool static_call) const
{
    if (static_call) {
        return QStringList();
    } else {
        return keys();
    }
}

// ---externC---
// QAbstractIconEngineFactoryV2::()
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractIconEngineFactoryV2_QAbstractIconEngineFactoryV2
(void *d_ptr)
{
    QAbstractIconEngineFactoryV2_QtDShell *__qt_this = new QAbstractIconEngineFactoryV2_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QAbstractIconEngineFactoryV2::create(const QString & filename)
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractIconEngineFactoryV2_create_string
(void* __this_nativeId,
 DArray filename0)
{
    QString __qt_filename0 = QString::fromUtf8((const char *)filename0.ptr, filename0.length);
    QAbstractIconEngineFactoryV2_QtDShell *__qt_this = (QAbstractIconEngineFactoryV2_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QIconEngineFactoryInterfaceV2*)__this_nativeId) != NULL;
    QIconEngineV2*  __qt_return_value = __qt_this->__override_create((const QString& )__qt_filename0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAbstractIconEngineFactoryV2::keys() const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractIconEngineFactoryV2_keys_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QAbstractIconEngineFactoryV2_QtDShell *__qt_this = (QAbstractIconEngineFactoryV2_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QIconEngineFactoryInterfaceV2*)__this_nativeId) != NULL;
    QStringList  __qt_return_value = __qt_this->__override_keys(__do_static_call);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// ---externC---end
// Field accessors


