#ifndef QSTYLEOPTIONMENUITEM_SHELL_H
#define QSTYLEOPTIONMENUITEM_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstyleoption.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class QStyleOptionMenuItem_QtDShell : public QStyleOptionMenuItem
{
public:
    QStyleOptionMenuItem_QtDShell();
    QStyleOptionMenuItem_QtDShell(const QStyleOptionMenuItem&  other0);
    QStyleOptionMenuItem_QtDShell(int  version0);
    ~QStyleOptionMenuItem_QtDShell();

};

#endif // QSTYLEOPTIONMENUITEM_SHELL_H
