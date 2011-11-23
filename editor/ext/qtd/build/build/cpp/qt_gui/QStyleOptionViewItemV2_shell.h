#ifndef QSTYLEOPTIONVIEWITEMV2_SHELL_H
#define QSTYLEOPTIONVIEWITEMV2_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstyleoption.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class QStyleOptionViewItemV2_QtDShell : public QStyleOptionViewItemV2
{
public:
    QStyleOptionViewItemV2_QtDShell();
    QStyleOptionViewItemV2_QtDShell(const QStyleOptionViewItem&  other0);
    QStyleOptionViewItemV2_QtDShell(const QStyleOptionViewItemV2&  other0);
    QStyleOptionViewItemV2_QtDShell(int  version0);
    ~QStyleOptionViewItemV2_QtDShell();

};

#endif // QSTYLEOPTIONVIEWITEMV2_SHELL_H
