#ifndef QSTYLEOPTIONPROGRESSBARV2_SHELL_H
#define QSTYLEOPTIONPROGRESSBARV2_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstyleoption.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class QStyleOptionProgressBarV2_QtDShell : public QStyleOptionProgressBarV2
{
public:
    QStyleOptionProgressBarV2_QtDShell();
    QStyleOptionProgressBarV2_QtDShell(const QStyleOptionProgressBar&  other0);
    QStyleOptionProgressBarV2_QtDShell(const QStyleOptionProgressBarV2&  other0);
    QStyleOptionProgressBarV2_QtDShell(int  version0);
    ~QStyleOptionProgressBarV2_QtDShell();

};

#endif // QSTYLEOPTIONPROGRESSBARV2_SHELL_H
