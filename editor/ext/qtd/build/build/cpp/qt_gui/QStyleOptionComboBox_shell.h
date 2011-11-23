#ifndef QSTYLEOPTIONCOMBOBOX_SHELL_H
#define QSTYLEOPTIONCOMBOBOX_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstyleoption.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class QStyleOptionComboBox_QtDShell : public QStyleOptionComboBox
{
public:
    QStyleOptionComboBox_QtDShell();
    QStyleOptionComboBox_QtDShell(const QStyleOptionComboBox&  other0);
    QStyleOptionComboBox_QtDShell(int  version0);
    ~QStyleOptionComboBox_QtDShell();

};

#endif // QSTYLEOPTIONCOMBOBOX_SHELL_H
