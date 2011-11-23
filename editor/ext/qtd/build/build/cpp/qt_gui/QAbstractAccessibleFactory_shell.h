#ifndef QABSTRACTACCESSIBLEFACTORY_SHELL_H
#define QABSTRACTACCESSIBLEFACTORY_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qaccessibleplugin.h>

#include <QVariant>
#include <qaccessible.h>
#include <qobject.h>
#include <qstringlist.h>

class QAbstractAccessibleFactory_QtDShell : public QAccessibleFactoryInterface, public QtdObjectLink
{
public:
    QAbstractAccessibleFactory_QtDShell(void *d_ptr);
    ~QAbstractAccessibleFactory_QtDShell();

    QAccessibleInterface*  create(const QString&  key0, QObject*  object1);
    QStringList  keys() const;
    QAccessibleInterface*  __override_create(const QString&  key0, QObject*  object1, bool static_call);
    QStringList  __override_keys(bool static_call) const;
};

#endif // QABSTRACTACCESSIBLEFACTORY_SHELL_H
