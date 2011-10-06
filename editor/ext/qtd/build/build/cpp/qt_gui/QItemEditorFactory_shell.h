#ifndef QITEMEDITORFACTORY_SHELL_H
#define QITEMEDITORFACTORY_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qitemeditorfactory.h>

#include <QVariant>
#include <qitemeditorfactory.h>

class QItemEditorFactory_QtDShell : public QItemEditorFactory, public QtdObjectLink
{
public:
    QItemEditorFactory_QtDShell(void *d_ptr);
    ~QItemEditorFactory_QtDShell();

};

#endif // QITEMEDITORFACTORY_SHELL_H
