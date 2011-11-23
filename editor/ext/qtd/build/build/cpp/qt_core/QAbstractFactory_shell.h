#ifndef QABSTRACTFACTORY_SHELL_H
#define QABSTRACTFACTORY_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qfactoryinterface.h>

#include <QVariant>
#include <qstringlist.h>

class QAbstractFactory_QtDShell : public QFactoryInterface, public QtdObjectLink
{
public:
    QAbstractFactory_QtDShell(void *d_ptr);
    ~QAbstractFactory_QtDShell();

    QStringList  keys() const;
    QStringList  __override_keys(bool static_call) const;
};

#endif // QABSTRACTFACTORY_SHELL_H
