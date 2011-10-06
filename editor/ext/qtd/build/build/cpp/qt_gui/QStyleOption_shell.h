#ifndef QSTYLEOPTION_SHELL_H
#define QSTYLEOPTION_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstyleoption.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class QStyleOption_QtDShell : public QStyleOption
{
public:
    QStyleOption_QtDShell(const QStyleOption&  other0);
    QStyleOption_QtDShell(int  version0, int  type1);
    ~QStyleOption_QtDShell();

};

#endif // QSTYLEOPTION_SHELL_H
