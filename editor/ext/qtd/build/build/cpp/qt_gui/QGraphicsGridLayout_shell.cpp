#include <QVariant>
#include <qcoreevent.h>
#include <qgraphicsgridlayout.h>
#include <qgraphicsitem.h>
#include <qgraphicslayoutitem.h>
#include <qsizepolicy.h>

#include "QGraphicsGridLayout_shell.h"
#include <iostream>
#include <qgraphicsgridlayout.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsGridLayout_delete(void* nativeId)
{
    delete (QGraphicsGridLayout_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsGridLayout_destroy(void* nativeId)
{
    call_destructor((QGraphicsGridLayout_QtDShell*)nativeId);
}

QGraphicsGridLayout_QtDShell::QGraphicsGridLayout_QtDShell(void *d_ptr, QGraphicsLayoutItem*  parent0)
    : QGraphicsGridLayout(parent0),
      QtdObjectLink(d_ptr)
{
}

QGraphicsGridLayout_QtDShell::~QGraphicsGridLayout_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QGraphicsGridLayout_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QGraphicsGridLayout*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, int, QGraphicsLayout_count_const_dispatch, (void *dId))
int  QGraphicsGridLayout_QtDShell::count() const
{
    return qtd_QGraphicsLayout_count_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void, QGraphicsLayout_invalidate_dispatch, (void *dId))
void QGraphicsGridLayout_QtDShell::invalidate()
{
    qtd_QGraphicsLayout_invalidate_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsLayout_itemAt_int_const_dispatch, (void *dId, int index0))
QGraphicsLayoutItem*  QGraphicsGridLayout_QtDShell::itemAt(int  index0) const
{
    return (QGraphicsLayoutItem*) qtd_QGraphicsLayout_itemAt_int_const_dispatch(this->dId, (int )index0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsLayout_removeAt_int_dispatch, (void *dId, int index0))
void QGraphicsGridLayout_QtDShell::removeAt(int  index0)
{
    qtd_QGraphicsLayout_removeAt_int_dispatch(this->dId, (int )index0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsLayoutItem_setGeometry_QRectF_dispatch, (void *dId, QRectF* rect0))
void QGraphicsGridLayout_QtDShell::setGeometry(const QRectF&  rect0)
{
    qtd_QGraphicsLayoutItem_setGeometry_QRectF_dispatch(this->dId, &(QRectF& )rect0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsLayoutItem_sizeHint_SizeHint_QSizeF_const_dispatch, (void *dId, QSizeF *__d_return_value, int which0, QSizeF* constraint1))
QSizeF  QGraphicsGridLayout_QtDShell::sizeHint(Qt::SizeHint  which0, const QSizeF&  constraint1) const
{
    QSizeF __d_return_value;
    qtd_QGraphicsLayoutItem_sizeHint_SizeHint_QSizeF_const_dispatch(this->dId, &__d_return_value, (Qt::SizeHint )which0, &(QSizeF& )constraint1);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QGraphicsLayoutItem_updateGeometry_dispatch, (void *dId))
void QGraphicsGridLayout_QtDShell::updateGeometry()
{
    qtd_QGraphicsLayoutItem_updateGeometry_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void, QGraphicsLayout_widgetEvent_QEvent_dispatch, (void *dId, void* e0))
void QGraphicsGridLayout_QtDShell::widgetEvent(QEvent*  e0)
{
    qtd_QGraphicsLayout_widgetEvent_QEvent_dispatch(this->dId, (QEvent* )e0);
}

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsGridLayout_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
QGraphicsLayoutItem*  QGraphicsGridLayout_QtDShell::itemAt(int  row0, int  column1) const
{
    return QGraphicsGridLayout::itemAt((int )row0, (int )column1);
}

// public overrides for functions that are protected in the base class
void QGraphicsGridLayout_QtDShell::__public_addChildLayoutItem(QGraphicsLayoutItem*  layoutItem0)
{
    QGraphicsLayout::addChildLayoutItem((QGraphicsLayoutItem* )layoutItem0);
}

void QGraphicsGridLayout_QtDShell::__public_setGraphicsItem(QGraphicsItem*  item0)
{
    QGraphicsLayoutItem::setGraphicsItem((QGraphicsItem* )item0);
}

void QGraphicsGridLayout_QtDShell::__public_setOwnedByLayout(bool  ownedByLayout0)
{
    QGraphicsLayoutItem::setOwnedByLayout((bool )ownedByLayout0);
}

// Write virtual function overries used to decide on static/virtual calls
int  QGraphicsGridLayout_QtDShell::__override_count(bool static_call) const
{
    if (static_call) {
        return QGraphicsGridLayout::count();
    } else {
        return count();
    }
}

void QGraphicsGridLayout_QtDShell::__override_invalidate(bool static_call)
{
    if (static_call) {
        QGraphicsGridLayout::invalidate();
    } else {
        invalidate();
    }
}

QGraphicsLayoutItem*  QGraphicsGridLayout_QtDShell::__override_itemAt(int  index0, bool static_call) const
{
    if (static_call) {
        return QGraphicsGridLayout::itemAt((int )index0);
    } else {
        return itemAt((int )index0);
    }
}

void QGraphicsGridLayout_QtDShell::__override_removeAt(int  index0, bool static_call)
{
    if (static_call) {
        QGraphicsGridLayout::removeAt((int )index0);
    } else {
        removeAt((int )index0);
    }
}

void QGraphicsGridLayout_QtDShell::__override_setGeometry(const QRectF&  rect0, bool static_call)
{
    if (static_call) {
        QGraphicsGridLayout::setGeometry((const QRectF& )rect0);
    } else {
        setGeometry((const QRectF& )rect0);
    }
}

QSizeF  QGraphicsGridLayout_QtDShell::__override_sizeHint(int  which0, const QSizeF&  constraint1, bool static_call) const
{
    if (static_call) {
        return QGraphicsGridLayout::sizeHint((Qt::SizeHint )which0, (const QSizeF& )constraint1);
    } else {
        return sizeHint((Qt::SizeHint )which0, (const QSizeF& )constraint1);
    }
}

void QGraphicsGridLayout_QtDShell::__override_updateGeometry(bool static_call)
{
    if (static_call) {
        QGraphicsLayout::updateGeometry();
    } else {
        updateGeometry();
    }
}

void QGraphicsGridLayout_QtDShell::__override_widgetEvent(QEvent*  e0, bool static_call)
{
    if (static_call) {
        QGraphicsLayout::widgetEvent((QEvent* )e0);
    } else {
        widgetEvent((QEvent* )e0);
    }
}

// ---externC---
// QGraphicsGridLayout::QGraphicsGridLayout(QGraphicsLayoutItem * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsGridLayout_QGraphicsGridLayout_QGraphicsLayoutItem
(void *d_ptr,
 void* parent0)
{
    QGraphicsLayoutItem*  __qt_parent0 = (QGraphicsLayoutItem* ) parent0;
    QGraphicsGridLayout_QtDShell *__qt_this = new QGraphicsGridLayout_QtDShell(d_ptr, (QGraphicsLayoutItem* )__qt_parent0);
    return (void *) __qt_this;

}

// QGraphicsGridLayout::addItem(QGraphicsLayoutItem * item, int row, int column, QFlags<Qt::AlignmentFlag> alignment)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsGridLayout_addItem_QGraphicsLayoutItem_int_int_Alignment
(void* __this_nativeId,
 void* item0,
 int row1,
 int column2,
 int alignment3)
{
    QGraphicsLayoutItem*  __qt_item0 = (QGraphicsLayoutItem* ) item0;
    QFlags<Qt::AlignmentFlag> __qt_alignment3 = (QFlags<Qt::AlignmentFlag>) alignment3;
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    __qt_this->addItem((QGraphicsLayoutItem* )__qt_item0, (int )row1, (int )column2, (Qt::Alignment )__qt_alignment3);

}

// QGraphicsGridLayout::addItem(QGraphicsLayoutItem * item, int row, int column, int rowSpan, int columnSpan, QFlags<Qt::AlignmentFlag> alignment)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsGridLayout_addItem_QGraphicsLayoutItem_int_int_int_int_Alignment
(void* __this_nativeId,
 void* item0,
 int row1,
 int column2,
 int rowSpan3,
 int columnSpan4,
 int alignment5)
{
    QGraphicsLayoutItem*  __qt_item0 = (QGraphicsLayoutItem* ) item0;
    QFlags<Qt::AlignmentFlag> __qt_alignment5 = (QFlags<Qt::AlignmentFlag>) alignment5;
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    __qt_this->addItem((QGraphicsLayoutItem* )__qt_item0, (int )row1, (int )column2, (int )rowSpan3, (int )columnSpan4, (Qt::Alignment )__qt_alignment5);

}

// QGraphicsGridLayout::alignment(QGraphicsLayoutItem * item) const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsGridLayout_alignment_QGraphicsLayoutItem_const
(void* __this_nativeId,
 void* item0)
{
    QGraphicsLayoutItem*  __qt_item0 = (QGraphicsLayoutItem* ) item0;
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->alignment((QGraphicsLayoutItem* )__qt_item0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsGridLayout::columnAlignment(int column) const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsGridLayout_columnAlignment_int_const
(void* __this_nativeId,
 int column0)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->columnAlignment((int )column0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsGridLayout::columnCount() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsGridLayout_columnCount_const
(void* __this_nativeId)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->columnCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsGridLayout::columnMaximumWidth(int column) const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsGridLayout_columnMaximumWidth_int_const
(void* __this_nativeId,
 int column0)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->columnMaximumWidth((int )column0);

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsGridLayout::columnMinimumWidth(int column) const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsGridLayout_columnMinimumWidth_int_const
(void* __this_nativeId,
 int column0)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->columnMinimumWidth((int )column0);

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsGridLayout::columnPreferredWidth(int column) const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsGridLayout_columnPreferredWidth_int_const
(void* __this_nativeId,
 int column0)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->columnPreferredWidth((int )column0);

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsGridLayout::columnSpacing(int column) const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsGridLayout_columnSpacing_int_const
(void* __this_nativeId,
 int column0)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->columnSpacing((int )column0);

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsGridLayout::columnStretchFactor(int column) const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsGridLayout_columnStretchFactor_int_const
(void* __this_nativeId,
 int column0)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->columnStretchFactor((int )column0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsGridLayout::horizontalSpacing() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsGridLayout_horizontalSpacing_const
(void* __this_nativeId)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->horizontalSpacing();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsGridLayout::itemAt(int row, int column) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsGridLayout_itemAt_int_int_const
(void* __this_nativeId,
 int row0,
 int column1)
{
    QGraphicsGridLayout *__qt_this = (QGraphicsGridLayout *) __this_nativeId;
    QGraphicsLayoutItem*  __qt_return_value = __qt_this->itemAt((int )row0, (int )column1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsGridLayout::rowAlignment(int row) const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsGridLayout_rowAlignment_int_const
(void* __this_nativeId,
 int row0)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->rowAlignment((int )row0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsGridLayout::rowCount() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsGridLayout_rowCount_const
(void* __this_nativeId)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->rowCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsGridLayout::rowMaximumHeight(int row) const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsGridLayout_rowMaximumHeight_int_const
(void* __this_nativeId,
 int row0)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->rowMaximumHeight((int )row0);

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsGridLayout::rowMinimumHeight(int row) const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsGridLayout_rowMinimumHeight_int_const
(void* __this_nativeId,
 int row0)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->rowMinimumHeight((int )row0);

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsGridLayout::rowPreferredHeight(int row) const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsGridLayout_rowPreferredHeight_int_const
(void* __this_nativeId,
 int row0)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->rowPreferredHeight((int )row0);

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsGridLayout::rowSpacing(int row) const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsGridLayout_rowSpacing_int_const
(void* __this_nativeId,
 int row0)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->rowSpacing((int )row0);

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsGridLayout::rowStretchFactor(int row) const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsGridLayout_rowStretchFactor_int_const
(void* __this_nativeId,
 int row0)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->rowStretchFactor((int )row0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsGridLayout::setAlignment(QGraphicsLayoutItem * item, QFlags<Qt::AlignmentFlag> alignment)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsGridLayout_setAlignment_QGraphicsLayoutItem_Alignment
(void* __this_nativeId,
 void* item0,
 int alignment1)
{
    QGraphicsLayoutItem*  __qt_item0 = (QGraphicsLayoutItem* ) item0;
    QFlags<Qt::AlignmentFlag> __qt_alignment1 = (QFlags<Qt::AlignmentFlag>) alignment1;
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    __qt_this->setAlignment((QGraphicsLayoutItem* )__qt_item0, (Qt::Alignment )__qt_alignment1);

}

// QGraphicsGridLayout::setColumnAlignment(int column, QFlags<Qt::AlignmentFlag> alignment)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsGridLayout_setColumnAlignment_int_Alignment
(void* __this_nativeId,
 int column0,
 int alignment1)
{
    QFlags<Qt::AlignmentFlag> __qt_alignment1 = (QFlags<Qt::AlignmentFlag>) alignment1;
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    __qt_this->setColumnAlignment((int )column0, (Qt::Alignment )__qt_alignment1);

}

// QGraphicsGridLayout::setColumnFixedWidth(int column, double width)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsGridLayout_setColumnFixedWidth_int_double
(void* __this_nativeId,
 int column0,
 double width1)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    __qt_this->setColumnFixedWidth((int )column0, (double )width1);

}

// QGraphicsGridLayout::setColumnMaximumWidth(int column, double width)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsGridLayout_setColumnMaximumWidth_int_double
(void* __this_nativeId,
 int column0,
 double width1)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    __qt_this->setColumnMaximumWidth((int )column0, (double )width1);

}

// QGraphicsGridLayout::setColumnMinimumWidth(int column, double width)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsGridLayout_setColumnMinimumWidth_int_double
(void* __this_nativeId,
 int column0,
 double width1)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    __qt_this->setColumnMinimumWidth((int )column0, (double )width1);

}

// QGraphicsGridLayout::setColumnPreferredWidth(int column, double width)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsGridLayout_setColumnPreferredWidth_int_double
(void* __this_nativeId,
 int column0,
 double width1)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    __qt_this->setColumnPreferredWidth((int )column0, (double )width1);

}

// QGraphicsGridLayout::setColumnSpacing(int column, double spacing)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsGridLayout_setColumnSpacing_int_double
(void* __this_nativeId,
 int column0,
 double spacing1)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    __qt_this->setColumnSpacing((int )column0, (double )spacing1);

}

// QGraphicsGridLayout::setColumnStretchFactor(int column, int stretch)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsGridLayout_setColumnStretchFactor_int_int
(void* __this_nativeId,
 int column0,
 int stretch1)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    __qt_this->setColumnStretchFactor((int )column0, (int )stretch1);

}

// QGraphicsGridLayout::setHorizontalSpacing(double spacing)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsGridLayout_setHorizontalSpacing_double
(void* __this_nativeId,
 double spacing0)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    __qt_this->setHorizontalSpacing((double )spacing0);

}

// QGraphicsGridLayout::setRowAlignment(int row, QFlags<Qt::AlignmentFlag> alignment)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsGridLayout_setRowAlignment_int_Alignment
(void* __this_nativeId,
 int row0,
 int alignment1)
{
    QFlags<Qt::AlignmentFlag> __qt_alignment1 = (QFlags<Qt::AlignmentFlag>) alignment1;
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    __qt_this->setRowAlignment((int )row0, (Qt::Alignment )__qt_alignment1);

}

// QGraphicsGridLayout::setRowFixedHeight(int row, double height)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsGridLayout_setRowFixedHeight_int_double
(void* __this_nativeId,
 int row0,
 double height1)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    __qt_this->setRowFixedHeight((int )row0, (double )height1);

}

// QGraphicsGridLayout::setRowMaximumHeight(int row, double height)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsGridLayout_setRowMaximumHeight_int_double
(void* __this_nativeId,
 int row0,
 double height1)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    __qt_this->setRowMaximumHeight((int )row0, (double )height1);

}

// QGraphicsGridLayout::setRowMinimumHeight(int row, double height)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsGridLayout_setRowMinimumHeight_int_double
(void* __this_nativeId,
 int row0,
 double height1)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    __qt_this->setRowMinimumHeight((int )row0, (double )height1);

}

// QGraphicsGridLayout::setRowPreferredHeight(int row, double height)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsGridLayout_setRowPreferredHeight_int_double
(void* __this_nativeId,
 int row0,
 double height1)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    __qt_this->setRowPreferredHeight((int )row0, (double )height1);

}

// QGraphicsGridLayout::setRowSpacing(int row, double spacing)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsGridLayout_setRowSpacing_int_double
(void* __this_nativeId,
 int row0,
 double spacing1)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    __qt_this->setRowSpacing((int )row0, (double )spacing1);

}

// QGraphicsGridLayout::setRowStretchFactor(int row, int stretch)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsGridLayout_setRowStretchFactor_int_int
(void* __this_nativeId,
 int row0,
 int stretch1)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    __qt_this->setRowStretchFactor((int )row0, (int )stretch1);

}

// QGraphicsGridLayout::setSpacing(double spacing)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsGridLayout_setSpacing_double
(void* __this_nativeId,
 double spacing0)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    __qt_this->setSpacing((double )spacing0);

}

// QGraphicsGridLayout::setVerticalSpacing(double spacing)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsGridLayout_setVerticalSpacing_double
(void* __this_nativeId,
 double spacing0)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    __qt_this->setVerticalSpacing((double )spacing0);

}

// QGraphicsGridLayout::verticalSpacing() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsGridLayout_verticalSpacing_const
(void* __this_nativeId)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->verticalSpacing();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsGridLayout::count() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsGridLayout_count_const
(void* __this_nativeId)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsLayout*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_count(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsGridLayout::invalidate()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsGridLayout_invalidate
(void* __this_nativeId)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsLayout*)__this_nativeId) != NULL;
    __qt_this->__override_invalidate(__do_static_call);

}

// QGraphicsGridLayout::itemAt(int index) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsGridLayout_itemAt_int_const
(void* __this_nativeId,
 int index0)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsLayout*)__this_nativeId) != NULL;
    QGraphicsLayoutItem*  __qt_return_value = __qt_this->__override_itemAt((int )index0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsGridLayout::removeAt(int index)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsGridLayout_removeAt_int
(void* __this_nativeId,
 int index0)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsLayout*)__this_nativeId) != NULL;
    __qt_this->__override_removeAt((int )index0, __do_static_call);

}

// QGraphicsGridLayout::setGeometry(const QRectF & rect)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsGridLayout_setGeometry_QRectF
(void* __this_nativeId,
 QRectF rect0)
{
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsLayout*)__this_nativeId) != NULL;
    __qt_this->__override_setGeometry((const QRectF& )rect0, __do_static_call);

}

// QGraphicsGridLayout::sizeHint(Qt::SizeHint which, const QSizeF & constraint) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsGridLayout_sizeHint_SizeHint_QSizeF_const
(void* __this_nativeId,
 QSizeF * __d_return_value,
 int which0,
 QSizeF constraint1)
{
    Qt::SizeHint __qt_which0 = (Qt::SizeHint) which0;
    QGraphicsGridLayout_QtDShell *__qt_this = (QGraphicsGridLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsLayout*)__this_nativeId) != NULL;
    QSizeF  __qt_return_value = __qt_this->__override_sizeHint((Qt::SizeHint )__qt_which0, (const QSizeF& )constraint1, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// ---externC---end
// Field accessors


