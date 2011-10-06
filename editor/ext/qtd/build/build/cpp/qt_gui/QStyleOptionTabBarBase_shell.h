#ifndef QSTYLEOPTIONTABBARBASE_SHELL_H
#define QSTYLEOPTIONTABBARBASE_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstyleoption.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class QStyleOptionTabBarBase_QtDShell : public QStyleOptionTabBarBase
{
public:
    QStyleOptionTabBarBase_QtDShell();
    QStyleOptionTabBarBase_QtDShell(const QStyleOptionTabBarBase&  other0);
    QStyleOptionTabBarBase_QtDShell(int  version0);
    ~QStyleOptionTabBarBase_QtDShell();

};

#endif // QSTYLEOPTIONTABBARBASE_SHELL_H
