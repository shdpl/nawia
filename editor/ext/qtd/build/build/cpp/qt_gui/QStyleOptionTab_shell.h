#ifndef QSTYLEOPTIONTAB_SHELL_H
#define QSTYLEOPTIONTAB_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstyleoption.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class QStyleOptionTab_QtDShell : public QStyleOptionTab
{
public:
    QStyleOptionTab_QtDShell();
    QStyleOptionTab_QtDShell(const QStyleOptionTab&  other0);
    QStyleOptionTab_QtDShell(int  version0);
    ~QStyleOptionTab_QtDShell();

};

#endif // QSTYLEOPTIONTAB_SHELL_H
