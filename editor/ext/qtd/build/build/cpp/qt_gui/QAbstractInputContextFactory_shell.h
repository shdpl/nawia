#ifndef QABSTRACTINPUTCONTEXTFACTORY_SHELL_H
#define QABSTRACTINPUTCONTEXTFACTORY_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qinputcontextplugin.h>

#include <QVariant>
#include <qinputcontext.h>
#include <qstringlist.h>

class QAbstractInputContextFactory_QtDShell : public QInputContextFactoryInterface, public QtdObjectLink
{
public:
    QAbstractInputContextFactory_QtDShell(void *d_ptr);
    ~QAbstractInputContextFactory_QtDShell();

    QInputContext*  create(const QString&  key0);
    QString  description(const QString&  key0);
    QString  displayName(const QString&  key0);
    QStringList  keys() const;
    QStringList  languages(const QString&  key0);
    QInputContext*  __override_create(const QString&  key0, bool static_call);
    QString  __override_description(const QString&  key0, bool static_call);
    QString  __override_displayName(const QString&  key0, bool static_call);
    QStringList  __override_keys(bool static_call) const;
    QStringList  __override_languages(const QString&  key0, bool static_call);
};

#endif // QABSTRACTINPUTCONTEXTFACTORY_SHELL_H
