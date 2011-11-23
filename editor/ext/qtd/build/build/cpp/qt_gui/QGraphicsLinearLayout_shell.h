#ifndef QGRAPHICSLINEARLAYOUT_SHELL_H
#define QGRAPHICSLINEARLAYOUT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qgraphicslinearlayout.h>

#include <QVariant>
#include <qcoreevent.h>
#include <qgraphicsitem.h>
#include <qgraphicslayoutitem.h>
#include <qgraphicslinearlayout.h>
#include <qsizepolicy.h>

class QGraphicsLinearLayout_QtDShell : public QGraphicsLinearLayout, public QtdObjectLink
{
public:
    QGraphicsLinearLayout_QtDShell(void *d_ptr, QGraphicsLayoutItem*  parent0);
    QGraphicsLinearLayout_QtDShell(void *d_ptr, Qt::Orientation  orientation0, QGraphicsLayoutItem*  parent1);
    ~QGraphicsLinearLayout_QtDShell();

    int  count() const;
    void invalidate();
    QGraphicsLayoutItem*  itemAt(int  index0) const;
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
    QGraphicsLayoutItem*  __override_itemAt(int  index0, bool static_call) const;
    void __override_removeAt(int  index0, bool static_call);
    void __override_setGeometry(const QRectF&  rect0, bool static_call);
    QSizeF  __override_sizeHint(int  which0, const QSizeF&  constraint1, bool static_call) const;
    void __override_updateGeometry(bool static_call);
    void __override_widgetEvent(QEvent*  e0, bool static_call);
};

#endif // QGRAPHICSLINEARLAYOUT_SHELL_H
