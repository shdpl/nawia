#ifndef QSTYLEOPTIONCOMPLEX_SHELL_H
#define QSTYLEOPTIONCOMPLEX_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstyleoption.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class QStyleOptionComplex_QtDShell : public QStyleOptionComplex
{
public:
    QStyleOptionComplex_QtDShell(const QStyleOptionComplex&  other0);
    QStyleOptionComplex_QtDShell(int  version0, int  type1);
    ~QStyleOptionComplex_QtDShell();

};

#endif // QSTYLEOPTIONCOMPLEX_SHELL_H
