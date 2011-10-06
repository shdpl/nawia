#ifndef QSTYLEOPTIONTITLEBAR_SHELL_H
#define QSTYLEOPTIONTITLEBAR_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstyleoption.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class QStyleOptionTitleBar_QtDShell : public QStyleOptionTitleBar
{
public:
    QStyleOptionTitleBar_QtDShell();
    QStyleOptionTitleBar_QtDShell(const QStyleOptionTitleBar&  other0);
    QStyleOptionTitleBar_QtDShell(int  version0);
    ~QStyleOptionTitleBar_QtDShell();

};

#endif // QSTYLEOPTIONTITLEBAR_SHELL_H
