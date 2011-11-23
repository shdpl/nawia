#ifndef QSTYLEOPTIONBUTTON_SHELL_H
#define QSTYLEOPTIONBUTTON_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstyleoption.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class QStyleOptionButton_QtDShell : public QStyleOptionButton
{
public:
    QStyleOptionButton_QtDShell();
    QStyleOptionButton_QtDShell(const QStyleOptionButton&  other0);
    QStyleOptionButton_QtDShell(int  version0);
    ~QStyleOptionButton_QtDShell();

};

#endif // QSTYLEOPTIONBUTTON_SHELL_H
