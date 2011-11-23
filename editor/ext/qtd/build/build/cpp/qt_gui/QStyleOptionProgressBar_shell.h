#ifndef QSTYLEOPTIONPROGRESSBAR_SHELL_H
#define QSTYLEOPTIONPROGRESSBAR_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstyleoption.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class QStyleOptionProgressBar_QtDShell : public QStyleOptionProgressBar
{
public:
    QStyleOptionProgressBar_QtDShell();
    QStyleOptionProgressBar_QtDShell(const QStyleOptionProgressBar&  other0);
    QStyleOptionProgressBar_QtDShell(int  version0);
    ~QStyleOptionProgressBar_QtDShell();

};

#endif // QSTYLEOPTIONPROGRESSBAR_SHELL_H
