#ifndef QSTYLEOPTIONFRAME_SHELL_H
#define QSTYLEOPTIONFRAME_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstyleoption.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class QStyleOptionFrame_QtDShell : public QStyleOptionFrame
{
public:
    QStyleOptionFrame_QtDShell();
    QStyleOptionFrame_QtDShell(const QStyleOptionFrame&  other0);
    QStyleOptionFrame_QtDShell(int  version0);
    ~QStyleOptionFrame_QtDShell();

};

#endif // QSTYLEOPTIONFRAME_SHELL_H
