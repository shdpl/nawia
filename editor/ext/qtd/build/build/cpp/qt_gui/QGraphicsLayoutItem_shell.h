#ifndef QGRAPHICSLAYOUTITEM_SHELL_H
#define QGRAPHICSLAYOUTITEM_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qgraphicslayoutitem.h>

#include <QVariant>
#include <qgraphicsitem.h>
#include <qgraphicslayoutitem.h>
#include <qsizepolicy.h>

class QGraphicsLayoutItem_QtDShell : public QGraphicsLayoutItem, public QtdObjectLink
{
public:
    QGraphicsLayoutItem_QtDShell(void *d_ptr, QGraphicsLayoutItem*  parent0, bool  isLayout1);
    ~QGraphicsLayoutItem_QtDShell();

    void setGeometry(const QRectF&  rect0);
    QSizeF  sizeHint(Qt::SizeHint  which0, const QSizeF&  constraint1) const;
    void updateGeometry();
    void __public_setGraphicsItem(QGraphicsItem*  item0);
    void __public_setOwnedByLayout(bool  ownedByLayout0);
    void __override_setGeometry(const QRectF&  rect0, bool static_call);
    QSizeF  __override_sizeHint(int  which0, const QSizeF&  constraint1, bool static_call) const;
    void __override_updateGeometry(bool static_call);
};

#endif // QGRAPHICSLAYOUTITEM_SHELL_H
