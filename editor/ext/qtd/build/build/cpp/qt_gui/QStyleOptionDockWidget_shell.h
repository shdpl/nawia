#ifndef QSTYLEOPTIONDOCKWIDGET_SHELL_H
#define QSTYLEOPTIONDOCKWIDGET_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstyleoption.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class QStyleOptionDockWidget_QtDShell : public QStyleOptionDockWidget
{
public:
    QStyleOptionDockWidget_QtDShell();
    QStyleOptionDockWidget_QtDShell(const QStyleOptionDockWidget&  other0);
    QStyleOptionDockWidget_QtDShell(int  version0);
    ~QStyleOptionDockWidget_QtDShell();

};

#endif // QSTYLEOPTIONDOCKWIDGET_SHELL_H
