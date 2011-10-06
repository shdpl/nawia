#ifndef QSTYLEOPTIONGROUPBOX_SHELL_H
#define QSTYLEOPTIONGROUPBOX_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstyleoption.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class QStyleOptionGroupBox_QtDShell : public QStyleOptionGroupBox
{
public:
    QStyleOptionGroupBox_QtDShell();
    QStyleOptionGroupBox_QtDShell(const QStyleOptionGroupBox&  other0);
    QStyleOptionGroupBox_QtDShell(int  version0);
    ~QStyleOptionGroupBox_QtDShell();

};

#endif // QSTYLEOPTIONGROUPBOX_SHELL_H
