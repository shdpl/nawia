#ifndef QSTYLEOPTIONVIEWITEM_SHELL_H
#define QSTYLEOPTIONVIEWITEM_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstyleoption.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qwidget.h>

class QStyleOptionViewItem_QtDShell : public QStyleOptionViewItem
{
public:
    QStyleOptionViewItem_QtDShell();
    QStyleOptionViewItem_QtDShell(const QStyleOptionViewItem&  other0);
    QStyleOptionViewItem_QtDShell(int  version0);
    ~QStyleOptionViewItem_QtDShell();

};

#endif // QSTYLEOPTIONVIEWITEM_SHELL_H
