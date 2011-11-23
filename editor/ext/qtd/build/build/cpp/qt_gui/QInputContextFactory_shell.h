#ifndef QINPUTCONTEXTFACTORY_SHELL_H
#define QINPUTCONTEXTFACTORY_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qinputcontextfactory.h>

#include <QVariant>
#include <qinputcontext.h>
#include <qobject.h>
#include <qstringlist.h>

class QInputContextFactory_QtDShell : public QInputContextFactory
{
public:
    QInputContextFactory_QtDShell();
    ~QInputContextFactory_QtDShell();

};

#endif // QINPUTCONTEXTFACTORY_SHELL_H
