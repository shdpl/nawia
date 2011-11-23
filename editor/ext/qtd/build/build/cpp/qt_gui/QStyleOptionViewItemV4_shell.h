#ifndef QSTYLEOPTIONVIEWITEMV4_SHELL_H
#define QSTYLEOPTIONVIEWITEMV4_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstyleoption.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class QStyleOptionViewItemV4_QtDShell : public QStyleOptionViewItemV4
{
public:
    QStyleOptionViewItemV4_QtDShell();
    QStyleOptionViewItemV4_QtDShell(const QStyleOptionViewItem&  other0);
    QStyleOptionViewItemV4_QtDShell(const QStyleOptionViewItemV4&  other0);
    QStyleOptionViewItemV4_QtDShell(int  version0);
    ~QStyleOptionViewItemV4_QtDShell();

};

#endif // QSTYLEOPTIONVIEWITEMV4_SHELL_H
