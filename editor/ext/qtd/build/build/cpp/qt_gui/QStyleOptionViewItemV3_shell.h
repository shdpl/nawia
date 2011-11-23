#ifndef QSTYLEOPTIONVIEWITEMV3_SHELL_H
#define QSTYLEOPTIONVIEWITEMV3_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstyleoption.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class QStyleOptionViewItemV3_QtDShell : public QStyleOptionViewItemV3
{
public:
    QStyleOptionViewItemV3_QtDShell();
    QStyleOptionViewItemV3_QtDShell(const QStyleOptionViewItem&  other0);
    QStyleOptionViewItemV3_QtDShell(const QStyleOptionViewItemV3&  other0);
    QStyleOptionViewItemV3_QtDShell(int  version0);
    ~QStyleOptionViewItemV3_QtDShell();

};

#endif // QSTYLEOPTIONVIEWITEMV3_SHELL_H
