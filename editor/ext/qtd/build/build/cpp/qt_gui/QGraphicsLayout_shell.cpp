#include <QVariant>
#include <qcoreevent.h>
#include <qgraphicsitem.h>
#include <qgraphicslayout.h>
#include <qgraphicslayoutitem.h>
#include <qsizepolicy.h>

#include "QGraphicsLayout_shell.h"
#include <iostream>
#include <qgraphicslayout.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT QGraphicsLayoutItem* qtd_QGraphicsLayout_cast_to_QGraphicsLayoutItem(QGraphicsLayout *ptr)
{
    return dynamic_cast<QGraphicsLayoutItem*>(ptr);
}

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_delete(void* nativeId)
{
    delete (QGraphicsLayout_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_destroy(void* nativeId)
{
    call_destructor((QGraphicsLayout_QtDShell*)nativeId);
}

QGraphicsLayout_QtDShell::QGraphicsLayout_QtDShell(void *d_ptr, QGraphicsLayoutItem*  parent0)
    : QGraphicsLayout(parent0),
      QtdObjectLink(d_ptr)
{
}

QGraphicsLayout_QtDShell::~QGraphicsLayout_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QGraphicsLayout_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QGraphicsLayout*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, int, QGraphicsLayout_count_const_dispatch, (void *dId))
QTD_FUNC(GUI, QGraphicsLayout_count_const_dispatch)
int  QGraphicsLayout_QtDShell::count() const
{
    return qtd_QGraphicsLayout_count_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void, QGraphicsLayout_invalidate_dispatch, (void *dId))
QTD_FUNC(GUI, QGraphicsLayout_invalidate_dispatch)
void QGraphicsLayout_QtDShell::invalidate()
{
    qtd_QGraphicsLayout_invalidate_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void*, QGraphicsLayout_itemAt_int_const_dispatch, (void *dId, int i0))
QTD_FUNC(GUI, QGraphicsLayout_itemAt_int_const_dispatch)
QGraphicsLayoutItem*  QGraphicsLayout_QtDShell::itemAt(int  i0) const
{
    return (QGraphicsLayoutItem*) qtd_QGraphicsLayout_itemAt_int_const_dispatch(this->dId, (int )i0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsLayout_removeAt_int_dispatch, (void *dId, int index0))
QTD_FUNC(GUI, QGraphicsLayout_removeAt_int_dispatch)
void QGraphicsLayout_QtDShell::removeAt(int  index0)
{
    qtd_QGraphicsLayout_removeAt_int_dispatch(this->dId, (int )index0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsLayoutItem_setGeometry_QRectF_dispatch, (void *dId, QRectF* rect0))
void QGraphicsLayout_QtDShell::setGeometry(const QRectF&  rect0)
{
    qtd_QGraphicsLayoutItem_setGeometry_QRectF_dispatch(this->dId, &(QRectF& )rect0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsLayoutItem_sizeHint_SizeHint_QSizeF_const_dispatch, (void *dId, QSizeF *__d_return_value, int which0, QSizeF* constraint1))
QSizeF  QGraphicsLayout_QtDShell::sizeHint(Qt::SizeHint  which0, const QSizeF&  constraint1) const
{
    QSizeF __d_return_value;
    qtd_QGraphicsLayoutItem_sizeHint_SizeHint_QSizeF_const_dispatch(this->dId, &__d_return_value, (Qt::SizeHint )which0, &(QSizeF& )constraint1);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QGraphicsLayoutItem_updateGeometry_dispatch, (void *dId))
void QGraphicsLayout_QtDShell::updateGeometry()
{
    qtd_QGraphicsLayoutItem_updateGeometry_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void, QGraphicsLayout_widgetEvent_QEvent_dispatch, (void *dId, void* e0))
QTD_FUNC(GUI, QGraphicsLayout_widgetEvent_QEvent_dispatch)
void QGraphicsLayout_QtDShell::widgetEvent(QEvent*  e0)
{
    qtd_QGraphicsLayout_widgetEvent_QEvent_dispatch(this->dId, (QEvent* )e0);
}

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_initCallBacks(VoidFunc *virts) {
    qtd_QGraphicsLayout_count_const_dispatch = (qtd_QGraphicsLayout_count_const_dispatch_t) virts[0];
    qtd_QGraphicsLayout_invalidate_dispatch = (qtd_QGraphicsLayout_invalidate_dispatch_t) virts[1];
    qtd_QGraphicsLayout_itemAt_int_const_dispatch = (qtd_QGraphicsLayout_itemAt_int_const_dispatch_t) virts[2];
    qtd_QGraphicsLayout_removeAt_int_dispatch = (qtd_QGraphicsLayout_removeAt_int_dispatch_t) virts[3];
    qtd_QGraphicsLayout_widgetEvent_QEvent_dispatch = (qtd_QGraphicsLayout_widgetEvent_QEvent_dispatch_t) virts[4];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QGraphicsLayout_QtDShell::__public_addChildLayoutItem(QGraphicsLayoutItem*  layoutItem0)
{
    QGraphicsLayout::addChildLayoutItem((QGraphicsLayoutItem* )layoutItem0);
}

void QGraphicsLayout_QtDShell::__public_setGraphicsItem(QGraphicsItem*  item0)
{
    QGraphicsLayoutItem::setGraphicsItem((QGraphicsItem* )item0);
}

void QGraphicsLayout_QtDShell::__public_setOwnedByLayout(bool  ownedByLayout0)
{
    QGraphicsLayoutItem::setOwnedByLayout((bool )ownedByLayout0);
}

// Write virtual function overries used to decide on static/virtual calls
int  QGraphicsLayout_QtDShell::__override_count(bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return count();
    }
}

void QGraphicsLayout_QtDShell::__override_invalidate(bool static_call)
{
    if (static_call) {
        QGraphicsLayout::invalidate();
    } else {
        invalidate();
    }
}

QGraphicsLayoutItem*  QGraphicsLayout_QtDShell::__override_itemAt(int  i0, bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return itemAt((int )i0);
    }
}

void QGraphicsLayout_QtDShell::__override_removeAt(int  index0, bool static_call)
{
    if (static_call) {
        return;
    } else {
        removeAt((int )index0);
    }
}

void QGraphicsLayout_QtDShell::__override_setGeometry(const QRectF&  rect0, bool static_call)
{
    if (static_call) {
        QGraphicsLayoutItem::setGeometry((const QRectF& )rect0);
    } else {
        setGeometry((const QRectF& )rect0);
    }
}

QSizeF  QGraphicsLayout_QtDShell::__override_sizeHint(int  which0, const QSizeF&  constraint1, bool static_call) const
{
    if (static_call) {
        return QSizeF();
    } else {
        return sizeHint((Qt::SizeHint )which0, (const QSizeF& )constraint1);
    }
}

void QGraphicsLayout_QtDShell::__override_updateGeometry(bool static_call)
{
    if (static_call) {
        QGraphicsLayout::updateGeometry();
    } else {
        updateGeometry();
    }
}

void QGraphicsLayout_QtDShell::__override_widgetEvent(QEvent*  e0, bool static_call)
{
    if (static_call) {
        QGraphicsLayout::widgetEvent((QEvent* )e0);
    } else {
        widgetEvent((QEvent* )e0);
    }
}

// ---externC---
// QGraphicsLayout::QGraphicsLayout(QGraphicsLayoutItem * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsLayout_QGraphicsLayout_QGraphicsLayoutItem
(void *d_ptr,
 void* parent0)
{
    QGraphicsLayoutItem*  __qt_parent0 = (QGraphicsLayoutItem* ) parent0;
    QGraphicsLayout_QtDShell *__qt_this = new QGraphicsLayout_QtDShell(d_ptr, (QGraphicsLayoutItem* )__qt_parent0);
    return (void *) __qt_this;

}

// QGraphicsLayout::activate()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_activate
(void* __this_nativeId)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    __qt_this->activate();

}

// QGraphicsLayout::addChildLayoutItem(QGraphicsLayoutItem * layoutItem)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_addChildLayoutItem_QGraphicsLayoutItem
(void* __this_nativeId,
 void* layoutItem0)
{
    QGraphicsLayoutItem*  __qt_layoutItem0 = (QGraphicsLayoutItem* ) layoutItem0;
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    __qt_this->__public_addChildLayoutItem((QGraphicsLayoutItem* )__qt_layoutItem0);

}

// QGraphicsLayout::contentsRect() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_contentsRect_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->QGraphicsLayoutItem::contentsRect();

    *__d_return_value = __qt_return_value;

}

// QGraphicsLayout::effectiveSizeHint(Qt::SizeHint which, const QSizeF & constraint) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_effectiveSizeHint_SizeHint_QSizeF_const
(void* __this_nativeId,
 QSizeF * __d_return_value,
 int which0,
 QSizeF constraint1)
{
    Qt::SizeHint __qt_which0 = (Qt::SizeHint) which0;
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    QSizeF  __qt_return_value = __qt_this->QGraphicsLayoutItem::effectiveSizeHint((Qt::SizeHint )__qt_which0, (const QSizeF& )constraint1);

    *__d_return_value = __qt_return_value;

}

// QGraphicsLayout::geometry() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_geometry_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->QGraphicsLayoutItem::geometry();

    *__d_return_value = __qt_return_value;

}

// QGraphicsLayout::graphicsItem() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsLayout_graphicsItem_const
(void* __this_nativeId)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->QGraphicsLayoutItem::graphicsItem();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsLayout::isActivated() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsLayout_isActivated_const
(void* __this_nativeId)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isActivated();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsLayout::isLayout() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsLayout_isLayout_const
(void* __this_nativeId)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsLayoutItem::isLayout();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsLayout::maximumHeight() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsLayout_maximumHeight_const
(void* __this_nativeId)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->QGraphicsLayoutItem::maximumHeight();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsLayout::maximumSize() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_maximumSize_const
(void* __this_nativeId,
 QSizeF * __d_return_value)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    QSizeF  __qt_return_value = __qt_this->QGraphicsLayoutItem::maximumSize();

    *__d_return_value = __qt_return_value;

}

// QGraphicsLayout::maximumWidth() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsLayout_maximumWidth_const
(void* __this_nativeId)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->QGraphicsLayoutItem::maximumWidth();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsLayout::minimumHeight() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsLayout_minimumHeight_const
(void* __this_nativeId)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->QGraphicsLayoutItem::minimumHeight();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsLayout::minimumSize() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_minimumSize_const
(void* __this_nativeId,
 QSizeF * __d_return_value)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    QSizeF  __qt_return_value = __qt_this->QGraphicsLayoutItem::minimumSize();

    *__d_return_value = __qt_return_value;

}

// QGraphicsLayout::minimumWidth() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsLayout_minimumWidth_const
(void* __this_nativeId)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->QGraphicsLayoutItem::minimumWidth();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsLayout::ownedByLayout() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsLayout_ownedByLayout_const
(void* __this_nativeId)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QGraphicsLayoutItem::ownedByLayout();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsLayout::parentLayoutItem() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsLayout_parentLayoutItem_const
(void* __this_nativeId)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    QGraphicsLayoutItem*  __qt_return_value = __qt_this->QGraphicsLayoutItem::parentLayoutItem();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsLayout::preferredHeight() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsLayout_preferredHeight_const
(void* __this_nativeId)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->QGraphicsLayoutItem::preferredHeight();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsLayout::preferredSize() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_preferredSize_const
(void* __this_nativeId,
 QSizeF * __d_return_value)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    QSizeF  __qt_return_value = __qt_this->QGraphicsLayoutItem::preferredSize();

    *__d_return_value = __qt_return_value;

}

// QGraphicsLayout::preferredWidth() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsLayout_preferredWidth_const
(void* __this_nativeId)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->QGraphicsLayoutItem::preferredWidth();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsLayout::setContentsMargins(double left, double top, double right, double bottom)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_setContentsMargins_double_double_double_double
(void* __this_nativeId,
 double left0,
 double top1,
 double right2,
 double bottom3)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    __qt_this->setContentsMargins((double )left0, (double )top1, (double )right2, (double )bottom3);

}

// QGraphicsLayout::setGraphicsItem(QGraphicsItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_setGraphicsItem_QGraphicsItem
(void* __this_nativeId,
 void* item0)
{
    QGraphicsItem*  __qt_item0 = (QGraphicsItem* ) item0;
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    __qt_this->__public_setGraphicsItem((QGraphicsItem* )__qt_item0);

}

// QGraphicsLayout::setMaximumHeight(double height)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_setMaximumHeight_double
(void* __this_nativeId,
 double height0)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsLayoutItem::setMaximumHeight((double )height0);

}

// QGraphicsLayout::setMaximumSize(const QSizeF & size)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_setMaximumSize_QSizeF
(void* __this_nativeId,
 QSizeF size0)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsLayoutItem::setMaximumSize((const QSizeF& )size0);

}

// QGraphicsLayout::setMaximumSize(double w, double h)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_setMaximumSize_double_double
(void* __this_nativeId,
 double w0,
 double h1)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsLayoutItem::setMaximumSize((double )w0, (double )h1);

}

// QGraphicsLayout::setMaximumWidth(double width)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_setMaximumWidth_double
(void* __this_nativeId,
 double width0)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsLayoutItem::setMaximumWidth((double )width0);

}

// QGraphicsLayout::setMinimumHeight(double height)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_setMinimumHeight_double
(void* __this_nativeId,
 double height0)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsLayoutItem::setMinimumHeight((double )height0);

}

// QGraphicsLayout::setMinimumSize(const QSizeF & size)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_setMinimumSize_QSizeF
(void* __this_nativeId,
 QSizeF size0)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsLayoutItem::setMinimumSize((const QSizeF& )size0);

}

// QGraphicsLayout::setMinimumSize(double w, double h)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_setMinimumSize_double_double
(void* __this_nativeId,
 double w0,
 double h1)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsLayoutItem::setMinimumSize((double )w0, (double )h1);

}

// QGraphicsLayout::setMinimumWidth(double width)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_setMinimumWidth_double
(void* __this_nativeId,
 double width0)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsLayoutItem::setMinimumWidth((double )width0);

}

// QGraphicsLayout::setOwnedByLayout(bool ownedByLayout)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_setOwnedByLayout_bool
(void* __this_nativeId,
 bool ownedByLayout0)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    __qt_this->__public_setOwnedByLayout((bool )ownedByLayout0);

}

// QGraphicsLayout::setParentLayoutItem(QGraphicsLayoutItem * parent_)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_setParentLayoutItem_QGraphicsLayoutItem
(void* __this_nativeId,
 void* parent0)
{
    QGraphicsLayoutItem*  __qt_parent0 = (QGraphicsLayoutItem* ) parent0;
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsLayoutItem::setParentLayoutItem((QGraphicsLayoutItem* )__qt_parent0);

}

// QGraphicsLayout::setPreferredHeight(double height)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_setPreferredHeight_double
(void* __this_nativeId,
 double height0)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsLayoutItem::setPreferredHeight((double )height0);

}

// QGraphicsLayout::setPreferredSize(const QSizeF & size)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_setPreferredSize_QSizeF
(void* __this_nativeId,
 QSizeF size0)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsLayoutItem::setPreferredSize((const QSizeF& )size0);

}

// QGraphicsLayout::setPreferredSize(double w, double h)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_setPreferredSize_double_double
(void* __this_nativeId,
 double w0,
 double h1)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsLayoutItem::setPreferredSize((double )w0, (double )h1);

}

// QGraphicsLayout::setPreferredWidth(double width)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_setPreferredWidth_double
(void* __this_nativeId,
 double width0)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsLayoutItem::setPreferredWidth((double )width0);

}

// QGraphicsLayout::setSizePolicy(QSizePolicy::Policy hPolicy, QSizePolicy::Policy vPolicy, QSizePolicy::ControlType controlType)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_setSizePolicy_Policy_Policy_ControlType
(void* __this_nativeId,
 int hPolicy0,
 int vPolicy1,
 int controlType2)
{
    QSizePolicy::Policy __qt_hPolicy0 = (QSizePolicy::Policy) hPolicy0;
    QSizePolicy::Policy __qt_vPolicy1 = (QSizePolicy::Policy) vPolicy1;
    QSizePolicy::ControlType __qt_controlType2 = (QSizePolicy::ControlType) controlType2;
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsLayoutItem::setSizePolicy((QSizePolicy::Policy )__qt_hPolicy0, (QSizePolicy::Policy )__qt_vPolicy1, (QSizePolicy::ControlType )__qt_controlType2);

}

// QGraphicsLayout::setSizePolicy(const QSizePolicy & policy)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_setSizePolicy_QSizePolicy
(void* __this_nativeId,
 void* policy0)
{
    const QSizePolicy&  __qt_policy0 = (const QSizePolicy& ) *(QSizePolicy *)policy0;
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    __qt_this->QGraphicsLayoutItem::setSizePolicy((const QSizePolicy& )__qt_policy0);

}

// QGraphicsLayout::sizePolicy() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsLayout_sizePolicy_const
(void* __this_nativeId)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    QSizePolicy  __qt_return_value = __qt_this->QGraphicsLayoutItem::sizePolicy();

    void* __d_return_value = (void*) new QSizePolicy(__qt_return_value);

    return __d_return_value;
}

// QGraphicsLayout::count() const
QTD_EXTERN QTD_EXPORT int qtd_QGraphicsLayout_count_const
(void* __this_nativeId)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsLayout*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_count(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsLayout::invalidate()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_invalidate
(void* __this_nativeId)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsLayout*)__this_nativeId) != NULL;
    __qt_this->__override_invalidate(__do_static_call);

}

// QGraphicsLayout::itemAt(int i) const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsLayout_itemAt_int_const
(void* __this_nativeId,
 int i0)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsLayout*)__this_nativeId) != NULL;
    QGraphicsLayoutItem*  __qt_return_value = __qt_this->__override_itemAt((int )i0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsLayout::removeAt(int index)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_removeAt_int
(void* __this_nativeId,
 int index0)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsLayout*)__this_nativeId) != NULL;
    __qt_this->__override_removeAt((int )index0, __do_static_call);

}

// QGraphicsLayout::setGeometry(const QRectF & rect)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_setGeometry_QRectF
(void* __this_nativeId,
 QRectF rect0)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsLayout*)__this_nativeId) != NULL;
    __qt_this->__override_setGeometry((const QRectF& )rect0, __do_static_call);

}

// QGraphicsLayout::sizeHint(Qt::SizeHint which, const QSizeF & constraint) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_sizeHint_SizeHint_QSizeF_const
(void* __this_nativeId,
 QSizeF * __d_return_value,
 int which0,
 QSizeF constraint1)
{
    Qt::SizeHint __qt_which0 = (Qt::SizeHint) which0;
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsLayout*)__this_nativeId) != NULL;
    QSizeF  __qt_return_value = __qt_this->__override_sizeHint((Qt::SizeHint )__qt_which0, (const QSizeF& )constraint1, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QGraphicsLayout::updateGeometry()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_updateGeometry
(void* __this_nativeId)
{
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsLayout*)__this_nativeId) != NULL;
    __qt_this->__override_updateGeometry(__do_static_call);

}

// QGraphicsLayout::widgetEvent(QEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayout_widgetEvent_QEvent
(void* __this_nativeId,
 void* e0)
{
    QEvent*  __qt_e0 = (QEvent* ) e0;
    QGraphicsLayout_QtDShell *__qt_this = (QGraphicsLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsLayout*)__this_nativeId) != NULL;
    __qt_this->__override_widgetEvent((QEvent* )__qt_e0, __do_static_call);

}

// ---externC---end
// Field accessors


