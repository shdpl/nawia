#ifndef QSTYLEOPTIONDOCKWIDGETV2_SHELL_H
#define QSTYLEOPTIONDOCKWIDGETV2_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstyleoption.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class QStyleOptionDockWidgetV2_QtDShell : public QStyleOptionDockWidgetV2
{
public:
    QStyleOptionDockWidgetV2_QtDShell();
    QStyleOptionDockWidgetV2_QtDShell(const QStyleOptionDockWidget&  other0);
    QStyleOptionDockWidgetV2_QtDShell(const QStyleOptionDockWidgetV2&  other0);
    QStyleOptionDockWidgetV2_QtDShell(int  version0);
    ~QStyleOptionDockWidgetV2_QtDShell();

};

#endif // QSTYLEOPTIONDOCKWIDGETV2_SHELL_H
