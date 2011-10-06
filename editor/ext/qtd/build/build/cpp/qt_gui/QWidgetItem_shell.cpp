#include <QVariant>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qwidget.h>

#include "QWidgetItem_shell.h"
#include <iostream>
#include <qlayoutitem.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT QLayoutItem* qtd_QWidgetItem_cast_to_QLayoutItem(QWidgetItem *ptr)
{
    return dynamic_cast<QLayoutItem*>(ptr);
}

QTD_EXTERN QTD_EXPORT void qtd_QWidgetItem_delete(void* nativeId)
{
    delete (QWidgetItem_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QWidgetItem_destroy(void* nativeId)
{
    call_destructor((QWidgetItem_QtDShell*)nativeId);
}

QWidgetItem_QtDShell::QWidgetItem_QtDShell(void *d_ptr, QWidget*  w0)
    : QWidgetItem(w0),
      QtdObjectLink(d_ptr)
{
}

QWidgetItem_QtDShell::~QWidgetItem_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QWidgetItem_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QWidgetItem*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, int, QLayoutItem_expandingDirections_const_dispatch, (void *dId))
Qt::Orientations  QWidgetItem_QtDShell::expandingDirections() const
{
    return (QFlags<Qt::Orientation>) qtd_QLayoutItem_expandingDirections_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_geometry_const_dispatch, (void *dId, QRect *__d_return_value))
QRect  QWidgetItem_QtDShell::geometry() const
{
    QRect __d_return_value;
    qtd_QLayoutItem_geometry_const_dispatch(this->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, bool, QLayoutItem_hasHeightForWidth_const_dispatch, (void *dId))
bool  QWidgetItem_QtDShell::hasHeightForWidth() const
{
    return qtd_QLayoutItem_hasHeightForWidth_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, int, QLayoutItem_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QWidgetItem_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QLayoutItem_heightForWidth_int_const_dispatch(this->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_invalidate_dispatch, (void *dId))
void QWidgetItem_QtDShell::invalidate()
{
    qtd_QLayoutItem_invalidate_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, bool, QLayoutItem_isEmpty_const_dispatch, (void *dId))
bool  QWidgetItem_QtDShell::isEmpty() const
{
    return qtd_QLayoutItem_isEmpty_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void*, QLayoutItem_layout_dispatch, (void *dId))
QLayout*  QWidgetItem_QtDShell::layout()
{
    return (QLayout*) qtd_QLayoutItem_layout_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_maximumSize_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QWidgetItem_QtDShell::maximumSize() const
{
    QSize __d_return_value;
    qtd_QLayoutItem_maximumSize_const_dispatch(this->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, int, QLayoutItem_minimumHeightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QWidgetItem_QtDShell::minimumHeightForWidth(int  arg__1) const
{
    return qtd_QLayoutItem_minimumHeightForWidth_int_const_dispatch(this->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_minimumSize_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QWidgetItem_QtDShell::minimumSize() const
{
    QSize __d_return_value;
    qtd_QLayoutItem_minimumSize_const_dispatch(this->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_setGeometry_QRect_dispatch, (void *dId, QRect* arg__1))
void QWidgetItem_QtDShell::setGeometry(const QRect&  arg__1)
{
    qtd_QLayoutItem_setGeometry_QRect_dispatch(this->dId, &(QRect& )arg__1);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QWidgetItem_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QLayoutItem_sizeHint_const_dispatch(this->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void*, QLayoutItem_spacerItem_dispatch, (void *dId))
QSpacerItem*  QWidgetItem_QtDShell::spacerItem()
{
    return (QSpacerItem*) qtd_QLayoutItem_spacerItem_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void*, QLayoutItem_widget_dispatch, (void *dId))
QWidget*  QWidgetItem_QtDShell::widget()
{
    return (QWidget*) qtd_QLayoutItem_widget_dispatch(this->dId);
}

QTD_EXTERN QTD_EXPORT void qtd_QWidgetItem_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
int  QWidgetItem_QtDShell::__override_expandingDirections(bool static_call) const
{
    if (static_call) {
        return QWidgetItem::expandingDirections();
    } else {
        return expandingDirections();
    }
}

QRect  QWidgetItem_QtDShell::__override_geometry(bool static_call) const
{
    if (static_call) {
        return QWidgetItem::geometry();
    } else {
        return geometry();
    }
}

bool  QWidgetItem_QtDShell::__override_hasHeightForWidth(bool static_call) const
{
    if (static_call) {
        return QWidgetItem::hasHeightForWidth();
    } else {
        return hasHeightForWidth();
    }
}

int  QWidgetItem_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QWidgetItem::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QWidgetItem_QtDShell::__override_invalidate(bool static_call)
{
    if (static_call) {
        QLayoutItem::invalidate();
    } else {
        invalidate();
    }
}

bool  QWidgetItem_QtDShell::__override_isEmpty(bool static_call) const
{
    if (static_call) {
        return QWidgetItem::isEmpty();
    } else {
        return isEmpty();
    }
}

QLayout*  QWidgetItem_QtDShell::__override_layout(bool static_call)
{
    if (static_call) {
        return QLayoutItem::layout();
    } else {
        return layout();
    }
}

QSize  QWidgetItem_QtDShell::__override_maximumSize(bool static_call) const
{
    if (static_call) {
        return QWidgetItem::maximumSize();
    } else {
        return maximumSize();
    }
}

int  QWidgetItem_QtDShell::__override_minimumHeightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QLayoutItem::minimumHeightForWidth((int )arg__1);
    } else {
        return minimumHeightForWidth((int )arg__1);
    }
}

QSize  QWidgetItem_QtDShell::__override_minimumSize(bool static_call) const
{
    if (static_call) {
        return QWidgetItem::minimumSize();
    } else {
        return minimumSize();
    }
}

void QWidgetItem_QtDShell::__override_setGeometry(const QRect&  arg__1, bool static_call)
{
    if (static_call) {
        QWidgetItem::setGeometry((const QRect& )arg__1);
    } else {
        setGeometry((const QRect& )arg__1);
    }
}

QSize  QWidgetItem_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QWidgetItem::sizeHint();
    } else {
        return sizeHint();
    }
}

QSpacerItem*  QWidgetItem_QtDShell::__override_spacerItem(bool static_call)
{
    if (static_call) {
        return QLayoutItem::spacerItem();
    } else {
        return spacerItem();
    }
}

QWidget*  QWidgetItem_QtDShell::__override_widget(bool static_call)
{
    if (static_call) {
        return QWidgetItem::widget();
    } else {
        return widget();
    }
}

// ---externC---
// QWidgetItem::QWidgetItem(QWidget * w)
QTD_EXTERN QTD_EXPORT void* qtd_QWidgetItem_QWidgetItem_QWidget
(void *d_ptr,
 void* w0)
{
    QWidget*  __qt_w0 = (QWidget* ) w0;
    QWidgetItem_QtDShell *__qt_this = new QWidgetItem_QtDShell(d_ptr, (QWidget* )__qt_w0);
    return (void *) __qt_this;

}

// QWidgetItem::alignment() const
QTD_EXTERN QTD_EXPORT int qtd_QWidgetItem_alignment_const
(void* __this_nativeId)
{
    QWidgetItem_QtDShell *__qt_this = (QWidgetItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QLayoutItem::alignment();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidgetItem::controlTypes() const
QTD_EXTERN QTD_EXPORT int qtd_QWidgetItem_controlTypes_const
(void* __this_nativeId)
{
    QWidgetItem_QtDShell *__qt_this = (QWidgetItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QLayoutItem::controlTypes();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidgetItem::setAlignment(QFlags<Qt::AlignmentFlag> a)
QTD_EXTERN QTD_EXPORT void qtd_QWidgetItem_setAlignment_Alignment
(void* __this_nativeId,
 int a0)
{
    QFlags<Qt::AlignmentFlag> __qt_a0 = (QFlags<Qt::AlignmentFlag>) a0;
    QWidgetItem_QtDShell *__qt_this = (QWidgetItem_QtDShell *) __this_nativeId;
    __qt_this->QLayoutItem::setAlignment((Qt::Alignment )__qt_a0);

}

// QWidgetItem::expandingDirections() const
QTD_EXTERN QTD_EXPORT int qtd_QWidgetItem_expandingDirections_const
(void* __this_nativeId)
{
    QWidgetItem_QtDShell *__qt_this = (QWidgetItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QWidgetItem*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_expandingDirections(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidgetItem::geometry() const
QTD_EXTERN QTD_EXPORT void qtd_QWidgetItem_geometry_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QWidgetItem_QtDShell *__qt_this = (QWidgetItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QWidgetItem*)__this_nativeId) != NULL;
    QRect  __qt_return_value = __qt_this->__override_geometry(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QWidgetItem::hasHeightForWidth() const
QTD_EXTERN QTD_EXPORT bool qtd_QWidgetItem_hasHeightForWidth_const
(void* __this_nativeId)
{
    QWidgetItem_QtDShell *__qt_this = (QWidgetItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QWidgetItem*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_hasHeightForWidth(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidgetItem::heightForWidth(int arg__1) const
QTD_EXTERN QTD_EXPORT int qtd_QWidgetItem_heightForWidth_int_const
(void* __this_nativeId,
 int arg__1)
{
    QWidgetItem_QtDShell *__qt_this = (QWidgetItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QWidgetItem*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_heightForWidth((int )arg__1, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidgetItem::invalidate()
QTD_EXTERN QTD_EXPORT void qtd_QWidgetItem_invalidate
(void* __this_nativeId)
{
    QWidgetItem_QtDShell *__qt_this = (QWidgetItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QWidgetItem*)__this_nativeId) != NULL;
    __qt_this->__override_invalidate(__do_static_call);

}

// QWidgetItem::isEmpty() const
QTD_EXTERN QTD_EXPORT bool qtd_QWidgetItem_isEmpty_const
(void* __this_nativeId)
{
    QWidgetItem_QtDShell *__qt_this = (QWidgetItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QWidgetItem*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_isEmpty(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidgetItem::layout()
QTD_EXTERN QTD_EXPORT void* qtd_QWidgetItem_layout
(void* __this_nativeId)
{
    QWidgetItem_QtDShell *__qt_this = (QWidgetItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QWidgetItem*)__this_nativeId) != NULL;
    QLayout*  __qt_return_value = __qt_this->__override_layout(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWidgetItem::maximumSize() const
QTD_EXTERN QTD_EXPORT void qtd_QWidgetItem_maximumSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QWidgetItem_QtDShell *__qt_this = (QWidgetItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QWidgetItem*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_maximumSize(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QWidgetItem::minimumHeightForWidth(int arg__1) const
QTD_EXTERN QTD_EXPORT int qtd_QWidgetItem_minimumHeightForWidth_int_const
(void* __this_nativeId,
 int arg__1)
{
    QWidgetItem_QtDShell *__qt_this = (QWidgetItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QWidgetItem*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_minimumHeightForWidth((int )arg__1, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWidgetItem::minimumSize() const
QTD_EXTERN QTD_EXPORT void qtd_QWidgetItem_minimumSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QWidgetItem_QtDShell *__qt_this = (QWidgetItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QWidgetItem*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_minimumSize(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QWidgetItem::setGeometry(const QRect & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QWidgetItem_setGeometry_QRect
(void* __this_nativeId,
 QRect arg__1)
{
    QWidgetItem_QtDShell *__qt_this = (QWidgetItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QWidgetItem*)__this_nativeId) != NULL;
    __qt_this->__override_setGeometry((const QRect& )arg__1, __do_static_call);

}

// QWidgetItem::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QWidgetItem_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QWidgetItem_QtDShell *__qt_this = (QWidgetItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QWidgetItem*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QWidgetItem::spacerItem()
QTD_EXTERN QTD_EXPORT void* qtd_QWidgetItem_spacerItem
(void* __this_nativeId)
{
    QWidgetItem_QtDShell *__qt_this = (QWidgetItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QWidgetItem*)__this_nativeId) != NULL;
    QSpacerItem*  __qt_return_value = __qt_this->__override_spacerItem(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QWidgetItem::widget()
QTD_EXTERN QTD_EXPORT void* qtd_QWidgetItem_widget
(void* __this_nativeId)
{
    QWidgetItem_QtDShell *__qt_this = (QWidgetItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QWidgetItem*)__this_nativeId) != NULL;
    QWidget*  __qt_return_value = __qt_this->__override_widget(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


