#include <QVariant>
#include <qlocale.h>
#include <qvariant.h>

#include "QSystemLocale_shell.h"
#include <iostream>
#include <qlocale.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QSystemLocale_delete(void* nativeId)
{
    delete (QSystemLocale_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QSystemLocale_destroy(void* nativeId)
{
    call_destructor((QSystemLocale_QtDShell*)nativeId);
}

QSystemLocale_QtDShell::QSystemLocale_QtDShell(void *d_ptr)
    : QSystemLocale(),
      QtdObjectLink(d_ptr)
{
}

QSystemLocale_QtDShell::~QSystemLocale_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QSystemLocale_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QSystemLocale*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(CORE, void*, QSystemLocale_fallbackLocale_const_dispatch, (void *dId))
QTD_FUNC(CORE, QSystemLocale_fallbackLocale_const_dispatch)
QLocale  QSystemLocale_QtDShell::fallbackLocale() const
{
    QLocale *__qt_return_value = (QLocale*) qtd_QSystemLocale_fallbackLocale_const_dispatch(this->dId);
    return QLocale(*__qt_return_value);
}

QTD_FUNC_DECL(CORE, void*, QSystemLocale_query_QueryType_QVariant_const_dispatch, (void *dId, int type0, void* in1))
QTD_FUNC(CORE, QSystemLocale_query_QueryType_QVariant_const_dispatch)
QVariant  QSystemLocale_QtDShell::query(QSystemLocale::QueryType  type0, QVariant  in1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QSystemLocale_query_QueryType_QVariant_const_dispatch(this->dId, (QSystemLocale::QueryType )type0, (QVariant )in1);
    return QVariant(*__qt_return_value);
}

QTD_EXTERN QTD_EXPORT void qtd_QSystemLocale_initCallBacks(VoidFunc *virts) {
    qtd_QSystemLocale_fallbackLocale_const_dispatch = (qtd_QSystemLocale_fallbackLocale_const_dispatch_t) virts[0];
    qtd_QSystemLocale_query_QueryType_QVariant_const_dispatch = (qtd_QSystemLocale_query_QueryType_QVariant_const_dispatch_t) virts[1];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
QLocale  QSystemLocale_QtDShell::__override_fallbackLocale(bool static_call) const
{
    if (static_call) {
        return QSystemLocale::fallbackLocale();
    } else {
        return fallbackLocale();
    }
}

QVariant  QSystemLocale_QtDShell::__override_query(int  type0, QVariant  in1, bool static_call) const
{
    if (static_call) {
        return QSystemLocale::query((QSystemLocale::QueryType )type0, (QVariant )in1);
    } else {
        return query((QSystemLocale::QueryType )type0, (QVariant )in1);
    }
}

// ---externC---
// QSystemLocale::QSystemLocale()
QTD_EXTERN QTD_EXPORT void* qtd_QSystemLocale_QSystemLocale
(void *d_ptr)
{
    QSystemLocale_QtDShell *__qt_this = new QSystemLocale_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QSystemLocale::fallbackLocale() const
QTD_EXTERN QTD_EXPORT void* qtd_QSystemLocale_fallbackLocale_const
(void* __this_nativeId)
{
    QSystemLocale_QtDShell *__qt_this = (QSystemLocale_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QSystemLocale*)__this_nativeId) != NULL;
    QLocale  __qt_return_value = __qt_this->__override_fallbackLocale(__do_static_call);

    void* __d_return_value = (void*) new QLocale(__qt_return_value);

    return __d_return_value;
}

// QSystemLocale::query(QSystemLocale::QueryType type, QVariant in_) const
QTD_EXTERN QTD_EXPORT void* qtd_QSystemLocale_query_QueryType_QVariant_const
(void* __this_nativeId,
 int type0,
 QVariant* in1)
{
    QSystemLocale::QueryType __qt_type0 = (QSystemLocale::QueryType) type0;
    QVariant __qt_in1 = in1 == NULL ? QVariant() : QVariant(*in1);
    QSystemLocale_QtDShell *__qt_this = (QSystemLocale_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QSystemLocale*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_query((QSystemLocale::QueryType )__qt_type0, (QVariant )__qt_in1, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors


