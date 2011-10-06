#ifndef QSTYLEOPTIONFRAMEV2_SHELL_H
#define QSTYLEOPTIONFRAMEV2_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstyleoption.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class QStyleOptionFrameV2_QtDShell : public QStyleOptionFrameV2
{
public:
    QStyleOptionFrameV2_QtDShell();
    QStyleOptionFrameV2_QtDShell(const QStyleOptionFrame&  other0);
    QStyleOptionFrameV2_QtDShell(const QStyleOptionFrameV2&  other0);
    QStyleOptionFrameV2_QtDShell(int  version0);
    ~QStyleOptionFrameV2_QtDShell();

};

#endif // QSTYLEOPTIONFRAMEV2_SHELL_H
