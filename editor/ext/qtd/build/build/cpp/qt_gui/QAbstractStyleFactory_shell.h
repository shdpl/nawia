#ifndef QABSTRACTSTYLEFACTORY_SHELL_H
#define QABSTRACTSTYLEFACTORY_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstyleplugin.h>

#include <QVariant>
#include <qstringlist.h>
#include <qstyle.h>

class QAbstractStyleFactory_QtDShell : public QStyleFactoryInterface, public QtdObjectLink
{
public:
    QAbstractStyleFactory_QtDShell(void *d_ptr);
    ~QAbstractStyleFactory_QtDShell();

    QStyle*  create(const QString&  key0);
    QStringList  keys() const;
    QStyle*  __override_create(const QString&  key0, bool static_call);
    QStringList  __override_keys(bool static_call) const;
};

#endif // QABSTRACTSTYLEFACTORY_SHELL_H
