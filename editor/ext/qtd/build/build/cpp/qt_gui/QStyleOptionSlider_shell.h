#ifndef QSTYLEOPTIONSLIDER_SHELL_H
#define QSTYLEOPTIONSLIDER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstyleoption.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class QStyleOptionSlider_QtDShell : public QStyleOptionSlider
{
public:
    QStyleOptionSlider_QtDShell();
    QStyleOptionSlider_QtDShell(const QStyleOptionSlider&  other0);
    QStyleOptionSlider_QtDShell(int  version0);
    ~QStyleOptionSlider_QtDShell();

};

#endif // QSTYLEOPTIONSLIDER_SHELL_H
