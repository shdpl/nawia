#ifndef QSTYLEOPTIONTABV2_SHELL_H
#define QSTYLEOPTIONTABV2_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstyleoption.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class QStyleOptionTabV2_QtDShell : public QStyleOptionTabV2
{
public:
    QStyleOptionTabV2_QtDShell();
    QStyleOptionTabV2_QtDShell(const QStyleOptionTab&  other0);
    QStyleOptionTabV2_QtDShell(const QStyleOptionTabV2&  other0);
    QStyleOptionTabV2_QtDShell(int  version0);
    ~QStyleOptionTabV2_QtDShell();

};

#endif // QSTYLEOPTIONTABV2_SHELL_H
