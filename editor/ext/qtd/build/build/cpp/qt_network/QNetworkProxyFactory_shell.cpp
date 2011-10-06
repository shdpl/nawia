#include <QVariant>
#include <qlist.h>
#include <qnetworkproxy.h>

#include "QNetworkProxyFactory_shell.h"
#include <iostream>
#include <qnetworkproxy.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_network.h"

QTD_EXTERN QTD_EXPORT void qtd_QNetworkProxyFactory_delete(void* nativeId)
{
    delete (QNetworkProxyFactory_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QNetworkProxyFactory_destroy(void* nativeId)
{
    call_destructor((QNetworkProxyFactory_QtDShell*)nativeId);
}

QNetworkProxyFactory_QtDShell::QNetworkProxyFactory_QtDShell(void *d_ptr)
    : QNetworkProxyFactory(),
      QtdObjectLink(d_ptr)
{
}

QNetworkProxyFactory_QtDShell::~QNetworkProxyFactory_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QNetworkProxyFactory_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QNetworkProxyFactory*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(NETWORK, void, QNetworkProxyFactory_queryProxy_QNetworkProxyQuery_dispatch, (void *dId, void * __d_arr, void* query0))
QTD_FUNC(NETWORK, QNetworkProxyFactory_queryProxy_QNetworkProxyQuery_dispatch)
QList<QNetworkProxy >  QNetworkProxyFactory_QtDShell::queryProxy(const QNetworkProxyQuery&  query0)
{
    QList<QNetworkProxy > __d_return_value;
    qtd_QNetworkProxyFactory_queryProxy_QNetworkProxyQuery_dispatch(this->dId, &__d_return_value, &(QNetworkProxyQuery& )query0);
    return __d_return_value;
}

QTD_EXTERN QTD_EXPORT void qtd_QNetworkProxyFactory_initCallBacks(VoidFunc *virts) {
    qtd_QNetworkProxyFactory_queryProxy_QNetworkProxyQuery_dispatch = (qtd_QNetworkProxyFactory_queryProxy_QNetworkProxyQuery_dispatch_t) virts[0];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
QList<QNetworkProxy >  QNetworkProxyFactory_QtDShell::__override_queryProxy(const QNetworkProxyQuery&  query0, bool static_call)
{
    if (static_call) {
        return QList<QNetworkProxy >();
    } else {
        return queryProxy((const QNetworkProxyQuery& )query0);
    }
}

// ---externC---
// QNetworkProxyFactory::QNetworkProxyFactory()
QTD_EXTERN QTD_EXPORT void* qtd_QNetworkProxyFactory_QNetworkProxyFactory
(void *d_ptr)
{
    QNetworkProxyFactory_QtDShell *__qt_this = new QNetworkProxyFactory_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QNetworkProxyFactory::queryProxy(const QNetworkProxyQuery & query)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkProxyFactory_queryProxy_QNetworkProxyQuery
(void* __this_nativeId,
 void* __d_return_value,
 void* query0)
{
    const QNetworkProxyQuery&  __qt_query0 = (const QNetworkProxyQuery& ) *(QNetworkProxyQuery *)query0;
    QNetworkProxyFactory_QtDShell *__qt_this = (QNetworkProxyFactory_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QNetworkProxyFactory*)__this_nativeId) != NULL;
    QList<QNetworkProxy >  __qt_return_value = __qt_this->__override_queryProxy((const QNetworkProxyQuery& )__qt_query0, __do_static_call);

QList<QNetworkProxy > &__d_return_value_tmp = (*(QList<QNetworkProxy > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QNetworkProxyFactory::proxyForQuery(const QNetworkProxyQuery & query)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkProxyFactory_proxyForQuery_QNetworkProxyQuery
(void* __d_return_value,
 void* query0)
{
    const QNetworkProxyQuery&  __qt_query0 = (const QNetworkProxyQuery& ) *(QNetworkProxyQuery *)query0;
    QList<QNetworkProxy >  __qt_return_value = QNetworkProxyFactory_QtDShell::proxyForQuery((const QNetworkProxyQuery& )__qt_query0);

QList<QNetworkProxy > &__d_return_value_tmp = (*(QList<QNetworkProxy > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QNetworkProxyFactory::setApplicationProxyFactory(QNetworkProxyFactory * factory)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkProxyFactory_setApplicationProxyFactory_QNetworkProxyFactory
(void* factory0)
{
    QNetworkProxyFactory*  __qt_factory0 = (QNetworkProxyFactory* ) factory0;
    QNetworkProxyFactory_QtDShell::setApplicationProxyFactory((QNetworkProxyFactory* )__qt_factory0);

}

// QNetworkProxyFactory::setUseSystemConfiguration(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkProxyFactory_setUseSystemConfiguration_bool
(bool enable0)
{
    QNetworkProxyFactory_QtDShell::setUseSystemConfiguration((bool )enable0);

}

// QNetworkProxyFactory::systemProxyForQuery(const QNetworkProxyQuery & query)
QTD_EXTERN QTD_EXPORT void qtd_QNetworkProxyFactory_systemProxyForQuery_QNetworkProxyQuery
(void* __d_return_value,
 void* query0)
{
    const QNetworkProxyQuery&  __qt_query0 = (const QNetworkProxyQuery& ) *(QNetworkProxyQuery *)query0;
    QList<QNetworkProxy >  __qt_return_value = QNetworkProxyFactory_QtDShell::systemProxyForQuery((const QNetworkProxyQuery& )__qt_query0);

QList<QNetworkProxy > &__d_return_value_tmp = (*(QList<QNetworkProxy > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// ---externC---end
// Field accessors


