#include <QVariant>
#include <qcoreevent.h>
#include <qgraphicsitem.h>
#include <qgraphicslayoutitem.h>
#include <qgraphicslinearlayout.h>
#include <qsizepolicy.h>

#include "QGraphicsLinearLayout_shell.h"
#include <iostream>
#include <qgraphicslinearlayout.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLinearLayout_delete(void* nativeId)
{
    delete (QGraphicsLinearLayout_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLinearLayout_destroy(void* nativeId)
{
    call_destructor((QGraphicsLinearLayout_QtDShell*)nativeId);
}

QGraphicsLinearLayout_QtDShell::QGraphicsLinearLayout_QtDShell(void *d_ptr, QGraphicsLayoutItem*  parent0)
    : QGraphicsLinearLayout(parent0),
      QtdObjectLink(d_ptr)
{
}

QGraphicsLinearLayout_QtDShell::QGraphicsLinearLayout_QtDShell(void *d_ptr, Qt::Orientation  orientation0, QGraphicsLayoutItem*  parent1)
    : QGraphicsLinearLayout(orientation0, parent1),
      QtdObjectLink(d_ptr)
{
}

QGraphicsLinearLayout_QtDShell::~QGraphicsLinearLayout_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QGraphicsLinearLayout_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QGraphicsLinearLayout*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, int, QGraphicsLayout_count_const_dispatch, (void *dId))
int  QGraphicsLinearLayout_QtDShell::count() const
{
    return qtd_QGraphicsLayout_count_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void, QGraphicsLayout_invalidate_dispatch, (void *dId))
void QGraphicsLinearLayout_QtDShell::invalidate()
{
    qtd_QGraphicsLayout_invalidate_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsLayout_itemAt_int_const_dispatch, (void *dId, int index0))
QGraphicsLayoutItem*  QGraphicsLinearLayout_QtDShell::itemAt(int  index0) const
{
    return (QGraphicsLayoutItem*) qtd_QGraphicsLayout_itemAt_int_const_dispatch(this->dId, (int )index0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsLayout_removeAt_int_dispatch, (void *dId, int index0))
void QGraphicsLinearLayout_QtDShell::removeAt(int  index0)
{
    qtd_QGraphicsLayout_removeAt_int_dispatch(this->dId, (int )index0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsLayoutItem_setGeometry_QRectF_dispatch, (void *dId, QRectF* rect0))
void QGraphicsLinearLayout_QtDShell::setGeometry(const QRectF&  rect0)
{
    qtd_QGraphicsLayoutItem_setGeometry_QRectF_dispatch(this->dId, &(QRectF& )rect0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsLayoutItem_sizeHint_SizeHint_QSizeF_const_dispatch, (void *dId, QSizeF *__d_return_value, int which0, QSizeF* constraint1))
QSizeF  QGraphicsLinearLayout_QtDShell::sizeHint(Qt::SizeHint  which0, const QSizeF&  constraint1) const
{
    QSizeF __d_return_value;
    qtd_QGraphicsLayoutItem_sizeHint_SizeHint_QSizeF_const_dispatch(this->dId, &__d_return_value, (Qt::SizeHint )which0, &(QSizeF& )constraint1);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QGraphicsLayoutItem_updateGeometry_dispatch, (void *dId))
void QGraphicsLinearLayout_QtDShell::updateGeometry()
{
    qtd_QGraphicsLayoutItem_updateGeometry_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void, QGraphicsLayout_widgetEvent_QEvent_dispatch, (void *dId, void* e0))
void QGraphicsLinearLayout_QtDShell::widgetEvent(QEvent*  e0)
{
    qtd_QGraphicsLayout_widgetEvent_QEvent_dispatch(this->dId, (QEvent* )e0);
}

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLinearLayout_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QGraphicsLinearLayout_QtDShell::__public_addChildLayoutItem(QGraphicsLayoutItem*  layoutItem0)
{
    QGraphicsLayout::addChildLayoutItem((QGraphicsLayoutItem* )layoutItem0);
}

void QGraphicsLinearLayout_QtDShell::__public_setGraphicsItem(QGraphicsItem*  item0)
{
    QGraphicsLayoutItem::setGraphicsItem((QGraphicsItem* )item0);
}

void QGraphicsLinearLayout_QtDShell::__public_setOwnedByLayout(bool  ownedByLayout0)
{
    QGraphicsLayoutItem::setOwnedByLayout((bool )ownedByLayout0);
}

// Write virtual function overries used to decide on static/virtual calls
int  QGraphicsLinearLayout_QtDShell::__override_count(bool static_call) const
{
    if (static_call) {
        return QGraphicsLinearLayout::count();
    } else {
        return count();
    }
}

void QGraphicsLinearLayout_QtDShell::__override_invalidate(bool static_call)
{
    if (static_call) {
        QGraphicsLinearLayout::invalidate();
    } else {
        invalidate();
    }
}

QGraphicsLayoutItem*  QGraphicsLinearLayout_QtDShell::__override_itemAt(int  index0, bool static_call) const
{
    if (static_call) {
        return QGraphicsLinearLayout::itemAt((int )index0);
    } else {
        return itemAt((int )index0);
    }
}

void QGraphicsLinearLayout_QtDShell::__override_removeAt(int  index0, bool static_call)
{
    if (static_call) {
        QGraphicsLinearLayout::removeAt((int )index0);
    } else {
        removeAt((int )index0);
    }
}

void QGraphicsLinearLayout_QtDShell::__override_setGeometry(const QRectF&  rect0, bool static_call)
{
    if (static_call) {
        QGraphicsLinearLayout::setGeometry((const QRectF& )rect0);
    } else {
        setGeometry((const QRectF& )rect0);
    }
}

QSizeF  QGraphicsLinearLayout_QtDShell::__override_sizeHint(int  which0, const QSizeF&  constraint1, bool static_call) const
{
    if (static_call) {
        return QGraphicsLinearLayout::sizeHint((Qt::SizeHint )which0, (const QSizeF& )constraint1);
    } else {
        return sizeHint((Qt::SizeHint )which0, (const QSizeF& )constraint1);
    }
}

void QGraphicsLinearLayout_QtDShell::__override_updateGeometry(bool static_call)
{
    if (static_call) {
        QGraphicsLayout::updateGeometry();
    } else {
        updateGeometry();
    }
}

void QGraphicsLinearLayout_QtDShell::__override_widgetEvent(QEvent*  e0, bool static_call)
{
    if (static_call) {
        QGraphicsLayout::widgetEvent((QEvent* )e0);
    } else {
        widgetEvent((QEvent* )e0);
    }
}

// ---externC---
// QGraphicsLinearLayout::QGraphicsLinearLayout(QGraphicsLayoutItem * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsLinearLayout_QGraphicsLinearLayout_QGraphicsLayoutItem
(void *d_ptr,
 void* parent0)
{
    QGraphicsLayoutItem*  __qt_parent0 = (QGraphicsLayoutItem* ) parent0;
    QGraphicsLinearLayout_QtDShell *__qt_this = new QGraphicsLinearLayout_QtDShell(d_ptr, (QGraphicsLayoutItem* )__qt_parent0);
    return (void *) __qt_this;

}

// QGraphicsLinearLayout::QGraphicsLinearLayout(Qt::Orientation orientation, QGraphicsLayoutItem * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsLinearLayout_QGraphicsLinearLayout_Orientation_QGraphicsLayoutItem
(void *d_ptr,
 int orientation0,
 void* parent1)
{
    Qt::Orientation __qt_orientation0 = (Qt::Orientation) orientation0;
    QGraphicsLayoutItem*  __qt_parent1 = (QGraphicsLayoutItem* ) parent1;
    QGraphicsLinearLayout_QtDShell *__qt_this = new QGraphicsLinearLayout_QtDShell(d_ptr, (Qt::Orientation )__qt_orientation0, (QGraphicsLayoutItem* )__qt_parent1);
    return (void *) __qt_this;

}

// QGraphicsLinearLayout::addItem(QGraphicsLayoutItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLinearLayout_addItem_QGraphicsLayoutItem
(void* __this_nativeId,
 void* item0)
{
    QGraphicsLayoutItem*  __qt_item0 = (QGraphicsLayoutItem* ) item0;
    QGraphicsLinearLayout_QtDShell *__qt_this = (QGraphicsLinearLayout_QtDShell *) __this_nativeId;
    __qt_this->addItem((QGraphicsLayoutItem* )__qt_item0);

}

// QGraphicsLinearLayout::addStretch(int stretch)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLinearLayout_addStretch_int
(void* __this_nativeId,
 int stretch0)
{
    QGraphicsLinearLayout_QtDShell *__qt_this = (QGraphicsLinearLayout_QtDShell *) __this_nativeId;
    __qt_this->addStretch((int )stretch0);

}

// QGraphicsLinearLayout::alignment(QGraphicsLayoutItem * item) const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsLinearLayout_alignment_QGraphicsLayoutItem_const
(void* __this_nativeId,
 void* item0)
{
    QGraphicsLayoutItem*  __qt_item0 = (QGraphicsLayoutItem* ) item0;
    QGraphicsLinearLayout_QtDShell *__qt_this = (QGraphicsLinearLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->alignment((QGraphicsLayoutItem* )__qt_item0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsLinearLayout::dump(int indent) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLinearLayout_dump_int_const
(void* __this_nativeId,
 int indent0)
{
    QGraphicsLinearLayout_QtDShell *__qt_this = (QGraphicsLinearLayout_QtDShell *) __this_nativeId;
    __qt_this->dump((int )indent0);

}

// QGraphicsLinearLayout::insertItem(int index, QGraphicsLayoutItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLinearLayout_insertItem_int_QGraphicsLayoutItem
(void* __this_nativeId,
 int index0,
 void* item1)
{
    QGraphicsLayoutItem*  __qt_item1 = (QGraphicsLayoutItem* ) item1;
    QGraphicsLinearLayout_QtDShell *__qt_this = (QGraphicsLinearLayout_QtDShell *) __this_nativeId;
    __qt_this->insertItem((int )index0, (QGraphicsLayoutItem* )__qt_item1);

}

// QGraphicsLinearLayout::insertStretch(int index, int stretch)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLinearLayout_insertStretch_int_int
(void* __this_nativeId,
 int index0,
 int stretch1)
{
    QGraphicsLinearLayout_QtDShell *__qt_this = (QGraphicsLinearLayout_QtDShell *) __this_nativeId;
    __qt_this->insertStretch((int )index0, (int )stretch1);

}

// QGraphicsLinearLayout::itemSpacing(int index) const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsLinearLayout_itemSpacing_int_const
(void* __this_nativeId,
 int index0)
{
    QGraphicsLinearLayout_QtDShell *__qt_this = (QGraphicsLinearLayout_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->itemSpacing((int )index0);

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsLinearLayout::orientation() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsLinearLayout_orientation_const
(void* __this_nativeId)
{
    QGraphicsLinearLayout_QtDShell *__qt_this = (QGraphicsLinearLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->orientation();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsLinearLayout::removeItem(QGraphicsLayoutItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLinearLayout_removeItem_QGraphicsLayoutItem
(void* __this_nativeId,
 void* item0)
{
    QGraphicsLayoutItem*  __qt_item0 = (QGraphicsLayoutItem* ) item0;
    QGraphicsLinearLayout_QtDShell *__qt_this = (QGraphicsLinearLayout_QtDShell *) __this_nativeId;
    __qt_this->removeItem((QGraphicsLayoutItem* )__qt_item0);

}

// QGraphicsLinearLayout::setAlignment(QGraphicsLayoutItem * item, QFlags<Qt::AlignmentFlag> alignment)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLinearLayout_setAlignment_QGraphicsLayoutItem_Alignment
(void* __this_nativeId,
 void* item0,
 int alignment1)
{
    QGraphicsLayoutItem*  __qt_item0 = (QGraphicsLayoutItem* ) item0;
    QFlags<Qt::AlignmentFlag> __qt_alignment1 = (QFlags<Qt::AlignmentFlag>) alignment1;
    QGraphicsLinearLayout_QtDShell *__qt_this = (QGraphicsLinearLayout_QtDShell *) __this_nativeId;
    __qt_this->setAlignment((QGraphicsLayoutItem* )__qt_item0, (Qt::Alignment )__qt_alignment1);

}

// QGraphicsLinearLayout::setItemSpacing(int index, double spacing)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLinearLayout_setItemSpacing_int_double
(void* __this_nativeId,
 int index0,
 double spacing1)
{
    QGraphicsLinearLayout_QtDShell *__qt_this = (QGraphicsLinearLayout_QtDShell *) __this_nativeId;
    __qt_this->setItemSpacing((int )index0, (double )spacing1);

}

// QGraphicsLinearLayout::setOrientation(Qt::Orientation orientation)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLinearLayout_setOrientation_Orientation
(void* __this_nativeId,
 int orientation0)
{
    Qt::Orientation __qt_orientation0 = (Qt::Orientation) orientation0;
    QGraphicsLinearLayout_QtDShell *__qt_this = (QGraphicsLinearLayout_QtDShell *) __this_nativeId;
    __qt_this->setOrientation((Qt::Orientation )__qt_orientation0);

}

// QGraphicsLinearLayout::setSpacing(double spacing)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLinearLayout_setSpacing_double
(void* __this_nativeId,
 double spacing0)
{
    QGraphicsLinearLayout_QtDShell *__qt_this = (QGraphicsLinearLayout_QtDShell *) __this_nativeId;
    __qt_this->setSpacing((double )spacing0);

}

// QGraphicsLinearLayout::setStretchFactor(QGraphicsLayoutItem * item, int stretch)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLinearLayout_setStretchFactor_QGraphicsLayoutItem_int
(void* __this_nativeId,
 void* item0,
 int stretch1)
{
    QGraphicsLayoutItem*  __qt_item0 = (QGraphicsLayoutItem* ) item0;
    QGraphicsLinearLayout_QtDShell *__qt_this = (QGraphicsLinearLayout_QtDShell *) __this_nativeId;
    __qt_this->setStretchFactor((QGraphicsLayoutItem* )__qt_item0, (int )stretch1);

}

// QGraphicsLinearLayout::spacing() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsLinearLayout_spacing_const
(void* __this_nativeId)
{
    QGraphicsLinearLayout_QtDShell *__qt_this = (QGraphicsLinearLayout_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->spacing();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsLinearLayout::stretchFactor(QGraphicsLayoutItem * item) const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsLinearLayout_stretchFactor_QGraphicsLayoutItem_const
(void* __this_nativeId,
 void* item0)
{
    QGraphicsLayoutItem*  __qt_item0 = (QGraphicsLayoutItem* ) item0;
    QGraphicsLinearLayout_QtDShell *__qt_this = (QGraphicsLinearLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->stretchFactor((QGraphicsLayoutItem* )__qt_item0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsLinearLayout::count() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsLinearLayout_count_const
(void* __this_nativeId)
{
    QGraphicsLinearLayout_QtDShell *__qt_this = (QGraphicsLinearLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsLayout*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_count(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsLinearLayout::invalidate()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLinearLayout_invalidate
(void* __this_nativeId)
{
    QGraphicsLinearLayout_QtDShell *__qt_this = (QGraphicsLinearLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsLayout*)__this_nativeId) != NULL;
    __qt_this->__override_invalidate(__do_static_call);

}

// QGraphicsLinearLayout::itemAt(int index) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsLinearLayout_itemAt_int_const
(void* __this_nativeId,
 int index0)
{
    QGraphicsLinearLayout_QtDShell *__qt_this = (QGraphicsLinearLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsLayout*)__this_nativeId) != NULL;
    QGraphicsLayoutItem*  __qt_return_value = __qt_this->__override_itemAt((int )index0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsLinearLayout::removeAt(int index)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLinearLayout_removeAt_int
(void* __this_nativeId,
 int index0)
{
    QGraphicsLinearLayout_QtDShell *__qt_this = (QGraphicsLinearLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsLayout*)__this_nativeId) != NULL;
    __qt_this->__override_removeAt((int )index0, __do_static_call);

}

// QGraphicsLinearLayout::setGeometry(const QRectF & rect)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLinearLayout_setGeometry_QRectF
(void* __this_nativeId,
 QRectF rect0)
{
    QGraphicsLinearLayout_QtDShell *__qt_this = (QGraphicsLinearLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsLayout*)__this_nativeId) != NULL;
    __qt_this->__override_setGeometry((const QRectF& )rect0, __do_static_call);

}

// QGraphicsLinearLayout::sizeHint(Qt::SizeHint which, const QSizeF & constraint) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLinearLayout_sizeHint_SizeHint_QSizeF_const
(void* __this_nativeId,
 QSizeF * __d_return_value,
 int which0,
 QSizeF constraint1)
{
    Qt::SizeHint __qt_which0 = (Qt::SizeHint) which0;
    QGraphicsLinearLayout_QtDShell *__qt_this = (QGraphicsLinearLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsLayout*)__this_nativeId) != NULL;
    QSizeF  __qt_return_value = __qt_this->__override_sizeHint((Qt::SizeHint )__qt_which0, (const QSizeF& )constraint1, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// ---externC---end
// Field accessors


