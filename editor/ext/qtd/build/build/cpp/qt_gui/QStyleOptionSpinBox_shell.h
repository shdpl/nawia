#ifndef QSTYLEOPTIONSPINBOX_SHELL_H
#define QSTYLEOPTIONSPINBOX_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstyleoption.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class QStyleOptionSpinBox_QtDShell : public QStyleOptionSpinBox
{
public:
    QStyleOptionSpinBox_QtDShell();
    QStyleOptionSpinBox_QtDShell(const QStyleOptionSpinBox&  other0);
    QStyleOptionSpinBox_QtDShell(int  version0);
    ~QStyleOptionSpinBox_QtDShell();

};

#endif // QSTYLEOPTIONSPINBOX_SHELL_H
