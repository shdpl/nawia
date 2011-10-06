#ifndef QSTYLEOPTIONSIZEGRIP_SHELL_H
#define QSTYLEOPTIONSIZEGRIP_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstyleoption.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class QStyleOptionSizeGrip_QtDShell : public QStyleOptionSizeGrip
{
public:
    QStyleOptionSizeGrip_QtDShell();
    QStyleOptionSizeGrip_QtDShell(const QStyleOptionSizeGrip&  other0);
    QStyleOptionSizeGrip_QtDShell(int  version0);
    ~QStyleOptionSizeGrip_QtDShell();

};

#endif // QSTYLEOPTIONSIZEGRIP_SHELL_H
