#ifndef QSTYLEOPTIONHEADER_SHELL_H
#define QSTYLEOPTIONHEADER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstyleoption.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class QStyleOptionHeader_QtDShell : public QStyleOptionHeader
{
public:
    QStyleOptionHeader_QtDShell();
    QStyleOptionHeader_QtDShell(const QStyleOptionHeader&  other0);
    QStyleOptionHeader_QtDShell(int  version0);
    ~QStyleOptionHeader_QtDShell();

};

#endif // QSTYLEOPTIONHEADER_SHELL_H
