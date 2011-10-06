#include <QVariant>
#include <qgraphicsitem.h>
#include <qgraphicslayoutitem.h>
#include <qsizepolicy.h>

#include "QGraphicsLayoutItem_shell.h"
#include <iostream>
#include <qgraphicslayoutitem.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT QGraphicsLayoutItem* qtd_QGraphicsLayoutItem_cast_to_QGraphicsLayoutItem(QGraphicsLayoutItem *ptr)
{
    return dynamic_cast<QGraphicsLayoutItem*>(ptr);
}

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayoutItem_delete(void* nativeId)
{
    delete (QGraphicsLayoutItem_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayoutItem_destroy(void* nativeId)
{
    call_destructor((QGraphicsLayoutItem_QtDShell*)nativeId);
}

QGraphicsLayoutItem_QtDShell::QGraphicsLayoutItem_QtDShell(void *d_ptr, QGraphicsLayoutItem*  parent0, bool  isLayout1)
    : QGraphicsLayoutItem(parent0, isLayout1),
      QtdObjectLink(d_ptr)
{
}

QGraphicsLayoutItem_QtDShell::~QGraphicsLayoutItem_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QGraphicsLayoutItem_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QGraphicsLayoutItem*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QGraphicsLayoutItem_setGeometry_QRectF_dispatch, (void *dId, QRectF* rect0))
QTD_FUNC(GUI, QGraphicsLayoutItem_setGeometry_QRectF_dispatch)
void QGraphicsLayoutItem_QtDShell::setGeometry(const QRectF&  rect0)
{
    qtd_QGraphicsLayoutItem_setGeometry_QRectF_dispatch(this->dId, &(QRectF& )rect0);
}

QTD_FUNC_DECL(GUI, void, QGraphicsLayoutItem_sizeHint_SizeHint_QSizeF_const_dispatch, (void *dId, QSizeF *__d_return_value, int which0, QSizeF* constraint1))
QTD_FUNC(GUI, QGraphicsLayoutItem_sizeHint_SizeHint_QSizeF_const_dispatch)
QSizeF  QGraphicsLayoutItem_QtDShell::sizeHint(Qt::SizeHint  which0, const QSizeF&  constraint1) const
{
    QSizeF __d_return_value;
    qtd_QGraphicsLayoutItem_sizeHint_SizeHint_QSizeF_const_dispatch(this->dId, &__d_return_value, (Qt::SizeHint )which0, &(QSizeF& )constraint1);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QGraphicsLayoutItem_updateGeometry_dispatch, (void *dId))
QTD_FUNC(GUI, QGraphicsLayoutItem_updateGeometry_dispatch)
void QGraphicsLayoutItem_QtDShell::updateGeometry()
{
    qtd_QGraphicsLayoutItem_updateGeometry_dispatch(this->dId);
}

QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayoutItem_initCallBacks(VoidFunc *virts) {
    qtd_QGraphicsLayoutItem_setGeometry_QRectF_dispatch = (qtd_QGraphicsLayoutItem_setGeometry_QRectF_dispatch_t) virts[0];
    qtd_QGraphicsLayoutItem_sizeHint_SizeHint_QSizeF_const_dispatch = (qtd_QGraphicsLayoutItem_sizeHint_SizeHint_QSizeF_const_dispatch_t) virts[1];
    qtd_QGraphicsLayoutItem_updateGeometry_dispatch = (qtd_QGraphicsLayoutItem_updateGeometry_dispatch_t) virts[2];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QGraphicsLayoutItem_QtDShell::__public_setGraphicsItem(QGraphicsItem*  item0)
{
    QGraphicsLayoutItem::setGraphicsItem((QGraphicsItem* )item0);
}

void QGraphicsLayoutItem_QtDShell::__public_setOwnedByLayout(bool  ownedByLayout0)
{
    QGraphicsLayoutItem::setOwnedByLayout((bool )ownedByLayout0);
}

// Write virtual function overries used to decide on static/virtual calls
void QGraphicsLayoutItem_QtDShell::__override_setGeometry(const QRectF&  rect0, bool static_call)
{
    if (static_call) {
        QGraphicsLayoutItem::setGeometry((const QRectF& )rect0);
    } else {
        setGeometry((const QRectF& )rect0);
    }
}

QSizeF  QGraphicsLayoutItem_QtDShell::__override_sizeHint(int  which0, const QSizeF&  constraint1, bool static_call) const
{
    if (static_call) {
        return QSizeF();
    } else {
        return sizeHint((Qt::SizeHint )which0, (const QSizeF& )constraint1);
    }
}

void QGraphicsLayoutItem_QtDShell::__override_updateGeometry(bool static_call)
{
    if (static_call) {
        QGraphicsLayoutItem::updateGeometry();
    } else {
        updateGeometry();
    }
}

// ---externC---
// QGraphicsLayoutItem::QGraphicsLayoutItem(QGraphicsLayoutItem * parent_, bool isLayout)
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsLayoutItem_QGraphicsLayoutItem_QGraphicsLayoutItem_bool
(void *d_ptr,
 void* parent0,
 bool isLayout1)
{
    QGraphicsLayoutItem*  __qt_parent0 = (QGraphicsLayoutItem* ) parent0;
    QGraphicsLayoutItem_QtDShell *__qt_this = new QGraphicsLayoutItem_QtDShell(d_ptr, (QGraphicsLayoutItem* )__qt_parent0, (bool )isLayout1);
    return (void *) __qt_this;

}

// QGraphicsLayoutItem::contentsRect() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayoutItem_contentsRect_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->contentsRect();

    *__d_return_value = __qt_return_value;

}

// QGraphicsLayoutItem::effectiveSizeHint(Qt::SizeHint which, const QSizeF & constraint) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayoutItem_effectiveSizeHint_SizeHint_QSizeF_const
(void* __this_nativeId,
 QSizeF * __d_return_value,
 int which0,
 QSizeF constraint1)
{
    Qt::SizeHint __qt_which0 = (Qt::SizeHint) which0;
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    QSizeF  __qt_return_value = __qt_this->effectiveSizeHint((Qt::SizeHint )__qt_which0, (const QSizeF& )constraint1);

    *__d_return_value = __qt_return_value;

}

// QGraphicsLayoutItem::geometry() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayoutItem_geometry_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->geometry();

    *__d_return_value = __qt_return_value;

}

// QGraphicsLayoutItem::graphicsItem() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsLayoutItem_graphicsItem_const
(void* __this_nativeId)
{
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    QGraphicsItem*  __qt_return_value = __qt_this->graphicsItem();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsLayoutItem::isLayout() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsLayoutItem_isLayout_const
(void* __this_nativeId)
{
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isLayout();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsLayoutItem::maximumHeight() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsLayoutItem_maximumHeight_const
(void* __this_nativeId)
{
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->maximumHeight();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsLayoutItem::maximumSize() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayoutItem_maximumSize_const
(void* __this_nativeId,
 QSizeF * __d_return_value)
{
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    QSizeF  __qt_return_value = __qt_this->maximumSize();

    *__d_return_value = __qt_return_value;

}

// QGraphicsLayoutItem::maximumWidth() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsLayoutItem_maximumWidth_const
(void* __this_nativeId)
{
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->maximumWidth();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsLayoutItem::minimumHeight() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsLayoutItem_minimumHeight_const
(void* __this_nativeId)
{
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->minimumHeight();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsLayoutItem::minimumSize() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayoutItem_minimumSize_const
(void* __this_nativeId,
 QSizeF * __d_return_value)
{
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    QSizeF  __qt_return_value = __qt_this->minimumSize();

    *__d_return_value = __qt_return_value;

}

// QGraphicsLayoutItem::minimumWidth() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsLayoutItem_minimumWidth_const
(void* __this_nativeId)
{
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->minimumWidth();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsLayoutItem::ownedByLayout() const
QTD_EXTERN QTD_EXPORT bool qtd_QGraphicsLayoutItem_ownedByLayout_const
(void* __this_nativeId)
{
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->ownedByLayout();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsLayoutItem::parentLayoutItem() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsLayoutItem_parentLayoutItem_const
(void* __this_nativeId)
{
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    QGraphicsLayoutItem*  __qt_return_value = __qt_this->parentLayoutItem();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGraphicsLayoutItem::preferredHeight() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsLayoutItem_preferredHeight_const
(void* __this_nativeId)
{
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->preferredHeight();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsLayoutItem::preferredSize() const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayoutItem_preferredSize_const
(void* __this_nativeId,
 QSizeF * __d_return_value)
{
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    QSizeF  __qt_return_value = __qt_this->preferredSize();

    *__d_return_value = __qt_return_value;

}

// QGraphicsLayoutItem::preferredWidth() const
QTD_EXTERN QTD_EXPORT double qtd_QGraphicsLayoutItem_preferredWidth_const
(void* __this_nativeId)
{
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    double  __qt_return_value = __qt_this->preferredWidth();

    double __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGraphicsLayoutItem::setGraphicsItem(QGraphicsItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayoutItem_setGraphicsItem_QGraphicsItem
(void* __this_nativeId,
 void* item0)
{
    QGraphicsItem*  __qt_item0 = (QGraphicsItem* ) item0;
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    __qt_this->__public_setGraphicsItem((QGraphicsItem* )__qt_item0);

}

// QGraphicsLayoutItem::setMaximumHeight(double height)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayoutItem_setMaximumHeight_double
(void* __this_nativeId,
 double height0)
{
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    __qt_this->setMaximumHeight((double )height0);

}

// QGraphicsLayoutItem::setMaximumSize(const QSizeF & size)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayoutItem_setMaximumSize_QSizeF
(void* __this_nativeId,
 QSizeF size0)
{
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    __qt_this->setMaximumSize((const QSizeF& )size0);

}

// QGraphicsLayoutItem::setMaximumSize(double w, double h)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayoutItem_setMaximumSize_double_double
(void* __this_nativeId,
 double w0,
 double h1)
{
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    __qt_this->setMaximumSize((double )w0, (double )h1);

}

// QGraphicsLayoutItem::setMaximumWidth(double width)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayoutItem_setMaximumWidth_double
(void* __this_nativeId,
 double width0)
{
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    __qt_this->setMaximumWidth((double )width0);

}

// QGraphicsLayoutItem::setMinimumHeight(double height)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayoutItem_setMinimumHeight_double
(void* __this_nativeId,
 double height0)
{
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    __qt_this->setMinimumHeight((double )height0);

}

// QGraphicsLayoutItem::setMinimumSize(const QSizeF & size)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayoutItem_setMinimumSize_QSizeF
(void* __this_nativeId,
 QSizeF size0)
{
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    __qt_this->setMinimumSize((const QSizeF& )size0);

}

// QGraphicsLayoutItem::setMinimumSize(double w, double h)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayoutItem_setMinimumSize_double_double
(void* __this_nativeId,
 double w0,
 double h1)
{
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    __qt_this->setMinimumSize((double )w0, (double )h1);

}

// QGraphicsLayoutItem::setMinimumWidth(double width)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayoutItem_setMinimumWidth_double
(void* __this_nativeId,
 double width0)
{
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    __qt_this->setMinimumWidth((double )width0);

}

// QGraphicsLayoutItem::setOwnedByLayout(bool ownedByLayout)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayoutItem_setOwnedByLayout_bool
(void* __this_nativeId,
 bool ownedByLayout0)
{
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    __qt_this->__public_setOwnedByLayout((bool )ownedByLayout0);

}

// QGraphicsLayoutItem::setParentLayoutItem(QGraphicsLayoutItem * parent_)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayoutItem_setParentLayoutItem_QGraphicsLayoutItem
(void* __this_nativeId,
 void* parent0)
{
    QGraphicsLayoutItem*  __qt_parent0 = (QGraphicsLayoutItem* ) parent0;
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    __qt_this->setParentLayoutItem((QGraphicsLayoutItem* )__qt_parent0);

}

// QGraphicsLayoutItem::setPreferredHeight(double height)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayoutItem_setPreferredHeight_double
(void* __this_nativeId,
 double height0)
{
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    __qt_this->setPreferredHeight((double )height0);

}

// QGraphicsLayoutItem::setPreferredSize(const QSizeF & size)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayoutItem_setPreferredSize_QSizeF
(void* __this_nativeId,
 QSizeF size0)
{
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    __qt_this->setPreferredSize((const QSizeF& )size0);

}

// QGraphicsLayoutItem::setPreferredSize(double w, double h)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayoutItem_setPreferredSize_double_double
(void* __this_nativeId,
 double w0,
 double h1)
{
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    __qt_this->setPreferredSize((double )w0, (double )h1);

}

// QGraphicsLayoutItem::setPreferredWidth(double width)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayoutItem_setPreferredWidth_double
(void* __this_nativeId,
 double width0)
{
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    __qt_this->setPreferredWidth((double )width0);

}

// QGraphicsLayoutItem::setSizePolicy(QSizePolicy::Policy hPolicy, QSizePolicy::Policy vPolicy, QSizePolicy::ControlType controlType)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayoutItem_setSizePolicy_Policy_Policy_ControlType
(void* __this_nativeId,
 int hPolicy0,
 int vPolicy1,
 int controlType2)
{
    QSizePolicy::Policy __qt_hPolicy0 = (QSizePolicy::Policy) hPolicy0;
    QSizePolicy::Policy __qt_vPolicy1 = (QSizePolicy::Policy) vPolicy1;
    QSizePolicy::ControlType __qt_controlType2 = (QSizePolicy::ControlType) controlType2;
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    __qt_this->setSizePolicy((QSizePolicy::Policy )__qt_hPolicy0, (QSizePolicy::Policy )__qt_vPolicy1, (QSizePolicy::ControlType )__qt_controlType2);

}

// QGraphicsLayoutItem::setSizePolicy(const QSizePolicy & policy)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayoutItem_setSizePolicy_QSizePolicy
(void* __this_nativeId,
 void* policy0)
{
    const QSizePolicy&  __qt_policy0 = (const QSizePolicy& ) *(QSizePolicy *)policy0;
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    __qt_this->setSizePolicy((const QSizePolicy& )__qt_policy0);

}

// QGraphicsLayoutItem::sizePolicy() const
QTD_EXTERN QTD_EXPORT void* qtd_QGraphicsLayoutItem_sizePolicy_const
(void* __this_nativeId)
{
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    QSizePolicy  __qt_return_value = __qt_this->sizePolicy();

    void* __d_return_value = (void*) new QSizePolicy(__qt_return_value);

    return __d_return_value;
}

// QGraphicsLayoutItem::setGeometry(const QRectF & rect)
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayoutItem_setGeometry_QRectF
(void* __this_nativeId,
 QRectF rect0)
{
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsLayoutItem*)__this_nativeId) != NULL;
    __qt_this->__override_setGeometry((const QRectF& )rect0, __do_static_call);

}

// QGraphicsLayoutItem::sizeHint(Qt::SizeHint which, const QSizeF & constraint) const
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayoutItem_sizeHint_SizeHint_QSizeF_const
(void* __this_nativeId,
 QSizeF * __d_return_value,
 int which0,
 QSizeF constraint1)
{
    Qt::SizeHint __qt_which0 = (Qt::SizeHint) which0;
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsLayoutItem*)__this_nativeId) != NULL;
    QSizeF  __qt_return_value = __qt_this->__override_sizeHint((Qt::SizeHint )__qt_which0, (const QSizeF& )constraint1, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QGraphicsLayoutItem::updateGeometry()
QTD_EXTERN QTD_EXPORT void qtd_QGraphicsLayoutItem_updateGeometry
(void* __this_nativeId)
{
    QGraphicsLayoutItem_QtDShell *__qt_this = (QGraphicsLayoutItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGraphicsLayoutItem*)__this_nativeId) != NULL;
    __qt_this->__override_updateGeometry(__do_static_call);

}

// ---externC---end
// Field accessors


