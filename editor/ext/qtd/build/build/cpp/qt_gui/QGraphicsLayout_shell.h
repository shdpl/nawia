#ifndef QGRAPHICSLAYOUT_SHELL_H
#define QGRAPHICSLAYOUT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qgraphicslayout.h>

#include <QVariant>
#include <qcoreevent.h>
#include <qgraphicsitem.h>
#include <qgraphicslayout.h>
#include <qgraphicslayoutitem.h>
#include <qsizepolicy.h>

class QGraphicsLayout_QtDShell : public QGraphicsLayout, public QtdObjectLink
{
public:
    QGraphicsLayout_QtDShell(void *d_ptr, QGraphicsLayoutItem*  parent0);
    ~QGraphicsLayout_QtDShell();

    int  count() const;
    void invalidate();
    QGraphicsLayoutItem*  itemAt(int  i0) const;
    void removeAt(int  index0);
    void setGeometry(const QRectF&  rect0);
    QSizeF  sizeHint(Qt::SizeHint  which0, const QSizeF&  constraint1) const;
    void updateGeometry();
    void widgetEvent(QEvent*  e0);
    void __public_addChildLayoutItem(QGraphicsLayoutItem*  layoutItem0);
    void __public_setGraphicsItem(QGraphicsItem*  item0);
    void __public_setOwnedByLayout(bool  ownedByLayout0);
    int  __override_count(bool static_call) const;
    void __override_invalidate(bool static_call);
    QGraphicsLayoutItem*  __override_itemAt(int  i0, bool static_call) const;
    void __override_removeAt(int  index0, bool static_call);
    void __override_setGeometry(const QRectF&  rect0, bool static_call);
    QSizeF  __override_sizeHint(int  which0, const QSizeF&  constraint1, bool static_call) const;
    void __override_updateGeometry(bool static_call);
    void __override_widgetEvent(QEvent*  e0, bool static_call);
};

#endif // QGRAPHICSLAYOUT_SHELL_H
