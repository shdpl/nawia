#ifndef QSTYLEOPTIONGRAPHICSITEM_SHELL_H
#define QSTYLEOPTIONGRAPHICSITEM_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstyleoption.h>

#include <QVariant>
#include <qstyleoption.h>
#include <qtransform.h>
#include <qwidget.h>

class QStyleOptionGraphicsItem_QtDShell : public QStyleOptionGraphicsItem
{
public:
    QStyleOptionGraphicsItem_QtDShell();
    QStyleOptionGraphicsItem_QtDShell(const QStyleOptionGraphicsItem&  other0);
    QStyleOptionGraphicsItem_QtDShell(int  version0);
    ~QStyleOptionGraphicsItem_QtDShell();

};

#endif // QSTYLEOPTIONGRAPHICSITEM_SHELL_H
