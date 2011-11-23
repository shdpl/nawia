#ifndef QNETWORKPROXYFACTORY_SHELL_H
#define QNETWORKPROXYFACTORY_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qnetworkproxy.h>

#include <QVariant>
#include <qlist.h>
#include <qnetworkproxy.h>

class QNetworkProxyFactory_QtDShell : public QNetworkProxyFactory, public QtdObjectLink
{
public:
    QNetworkProxyFactory_QtDShell(void *d_ptr);
    ~QNetworkProxyFactory_QtDShell();

    QList<QNetworkProxy >  queryProxy(const QNetworkProxyQuery&  query0);
    QList<QNetworkProxy >  __override_queryProxy(const QNetworkProxyQuery&  query0, bool static_call);
};

#endif // QNETWORKPROXYFACTORY_SHELL_H
