#include <QVariant>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qwidget.h>

#include "QSpacerItem_shell.h"
#include <iostream>
#include <qlayoutitem.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT QLayoutItem* qtd_QSpacerItem_cast_to_QLayoutItem(QSpacerItem *ptr)
{
    return dynamic_cast<QLayoutItem*>(ptr);
}

QTD_EXTERN QTD_EXPORT void qtd_QSpacerItem_delete(void* nativeId)
{
    delete (QSpacerItem_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QSpacerItem_destroy(void* nativeId)
{
    call_destructor((QSpacerItem_QtDShell*)nativeId);
}

QSpacerItem_QtDShell::QSpacerItem_QtDShell(void *d_ptr, int  w0, int  h1, QSizePolicy::Policy  hData2, QSizePolicy::Policy  vData3)
    : QSpacerItem(w0, h1, hData2, vData3),
      QtdObjectLink(d_ptr)
{
}

QSpacerItem_QtDShell::~QSpacerItem_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QSpacerItem_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QSpacerItem*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, int, QLayoutItem_expandingDirections_const_dispatch, (void *dId))
Qt::Orientations  QSpacerItem_QtDShell::expandingDirections() const
{
    return (QFlags<Qt::Orientation>) qtd_QLayoutItem_expandingDirections_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_geometry_const_dispatch, (void *dId, QRect *__d_return_value))
QRect  QSpacerItem_QtDShell::geometry() const
{
    QRect __d_return_value;
    qtd_QLayoutItem_geometry_const_dispatch(this->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, bool, QLayoutItem_hasHeightForWidth_const_dispatch, (void *dId))
bool  QSpacerItem_QtDShell::hasHeightForWidth() const
{
    return qtd_QLayoutItem_hasHeightForWidth_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, int, QLayoutItem_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QSpacerItem_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QLayoutItem_heightForWidth_int_const_dispatch(this->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_invalidate_dispatch, (void *dId))
void QSpacerItem_QtDShell::invalidate()
{
    qtd_QLayoutItem_invalidate_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, bool, QLayoutItem_isEmpty_const_dispatch, (void *dId))
bool  QSpacerItem_QtDShell::isEmpty() const
{
    return qtd_QLayoutItem_isEmpty_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void*, QLayoutItem_layout_dispatch, (void *dId))
QLayout*  QSpacerItem_QtDShell::layout()
{
    return (QLayout*) qtd_QLayoutItem_layout_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_maximumSize_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QSpacerItem_QtDShell::maximumSize() const
{
    QSize __d_return_value;
    qtd_QLayoutItem_maximumSize_const_dispatch(this->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, int, QLayoutItem_minimumHeightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QSpacerItem_QtDShell::minimumHeightForWidth(int  arg__1) const
{
    return qtd_QLayoutItem_minimumHeightForWidth_int_const_dispatch(this->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_minimumSize_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QSpacerItem_QtDShell::minimumSize() const
{
    QSize __d_return_value;
    qtd_QLayoutItem_minimumSize_const_dispatch(this->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_setGeometry_QRect_dispatch, (void *dId, QRect* arg__1))
void QSpacerItem_QtDShell::setGeometry(const QRect&  arg__1)
{
    qtd_QLayoutItem_setGeometry_QRect_dispatch(this->dId, &(QRect& )arg__1);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QSpacerItem_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QLayoutItem_sizeHint_const_dispatch(this->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void*, QLayoutItem_spacerItem_dispatch, (void *dId))
QSpacerItem*  QSpacerItem_QtDShell::spacerItem()
{
    return (QSpacerItem*) qtd_QLayoutItem_spacerItem_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void*, QLayoutItem_widget_dispatch, (void *dId))
QWidget*  QSpacerItem_QtDShell::widget()
{
    return (QWidget*) qtd_QLayoutItem_widget_dispatch(this->dId);
}

QTD_EXTERN QTD_EXPORT void qtd_QSpacerItem_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
int  QSpacerItem_QtDShell::__override_expandingDirections(bool static_call) const
{
    if (static_call) {
        return QSpacerItem::expandingDirections();
    } else {
        return expandingDirections();
    }
}

QRect  QSpacerItem_QtDShell::__override_geometry(bool static_call) const
{
    if (static_call) {
        return QSpacerItem::geometry();
    } else {
        return geometry();
    }
}

bool  QSpacerItem_QtDShell::__override_hasHeightForWidth(bool static_call) const
{
    if (static_call) {
        return QLayoutItem::hasHeightForWidth();
    } else {
        return hasHeightForWidth();
    }
}

int  QSpacerItem_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QLayoutItem::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QSpacerItem_QtDShell::__override_invalidate(bool static_call)
{
    if (static_call) {
        QLayoutItem::invalidate();
    } else {
        invalidate();
    }
}

bool  QSpacerItem_QtDShell::__override_isEmpty(bool static_call) const
{
    if (static_call) {
        return QSpacerItem::isEmpty();
    } else {
        return isEmpty();
    }
}

QLayout*  QSpacerItem_QtDShell::__override_layout(bool static_call)
{
    if (static_call) {
        return QLayoutItem::layout();
    } else {
        return layout();
    }
}

QSize  QSpacerItem_QtDShell::__override_maximumSize(bool static_call) const
{
    if (static_call) {
        return QSpacerItem::maximumSize();
    } else {
        return maximumSize();
    }
}

int  QSpacerItem_QtDShell::__override_minimumHeightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QLayoutItem::minimumHeightForWidth((int )arg__1);
    } else {
        return minimumHeightForWidth((int )arg__1);
    }
}

QSize  QSpacerItem_QtDShell::__override_minimumSize(bool static_call) const
{
    if (static_call) {
        return QSpacerItem::minimumSize();
    } else {
        return minimumSize();
    }
}

void QSpacerItem_QtDShell::__override_setGeometry(const QRect&  arg__1, bool static_call)
{
    if (static_call) {
        QSpacerItem::setGeometry((const QRect& )arg__1);
    } else {
        setGeometry((const QRect& )arg__1);
    }
}

QSize  QSpacerItem_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QSpacerItem::sizeHint();
    } else {
        return sizeHint();
    }
}

QSpacerItem*  QSpacerItem_QtDShell::__override_spacerItem(bool static_call)
{
    if (static_call) {
        return QSpacerItem::spacerItem();
    } else {
        return spacerItem();
    }
}

QWidget*  QSpacerItem_QtDShell::__override_widget(bool static_call)
{
    if (static_call) {
        return QLayoutItem::widget();
    } else {
        return widget();
    }
}

// ---externC---
// QSpacerItem::QSpacerItem(int w, int h, QSizePolicy::Policy hData, QSizePolicy::Policy vData)
QTD_EXTERN QTD_EXPORT void* qtd_QSpacerItem_QSpacerItem_int_int_Policy_Policy
(void *d_ptr,
 int w0,
 int h1,
 int hData2,
 int vData3)
{
    QSizePolicy::Policy __qt_hData2 = (QSizePolicy::Policy) hData2;
    QSizePolicy::Policy __qt_vData3 = (QSizePolicy::Policy) vData3;
    QSpacerItem_QtDShell *__qt_this = new QSpacerItem_QtDShell(d_ptr, (int )w0, (int )h1, (QSizePolicy::Policy )__qt_hData2, (QSizePolicy::Policy )__qt_vData3);
    return (void *) __qt_this;

}

// QSpacerItem::alignment() const
QTD_EXTERN QTD_EXPORT int qtd_QSpacerItem_alignment_const
(void* __this_nativeId)
{
    QSpacerItem_QtDShell *__qt_this = (QSpacerItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QLayoutItem::alignment();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSpacerItem::changeSize(int w, int h, QSizePolicy::Policy hData, QSizePolicy::Policy vData)
QTD_EXTERN QTD_EXPORT void qtd_QSpacerItem_changeSize_int_int_Policy_Policy
(void* __this_nativeId,
 int w0,
 int h1,
 int hData2,
 int vData3)
{
    QSizePolicy::Policy __qt_hData2 = (QSizePolicy::Policy) hData2;
    QSizePolicy::Policy __qt_vData3 = (QSizePolicy::Policy) vData3;
    QSpacerItem_QtDShell *__qt_this = (QSpacerItem_QtDShell *) __this_nativeId;
    __qt_this->changeSize((int )w0, (int )h1, (QSizePolicy::Policy )__qt_hData2, (QSizePolicy::Policy )__qt_vData3);

}

// QSpacerItem::controlTypes() const
QTD_EXTERN QTD_EXPORT int qtd_QSpacerItem_controlTypes_const
(void* __this_nativeId)
{
    QSpacerItem_QtDShell *__qt_this = (QSpacerItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QLayoutItem::controlTypes();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSpacerItem::setAlignment(QFlags<Qt::AlignmentFlag> a)
QTD_EXTERN QTD_EXPORT void qtd_QSpacerItem_setAlignment_Alignment
(void* __this_nativeId,
 int a0)
{
    QFlags<Qt::AlignmentFlag> __qt_a0 = (QFlags<Qt::AlignmentFlag>) a0;
    QSpacerItem_QtDShell *__qt_this = (QSpacerItem_QtDShell *) __this_nativeId;
    __qt_this->QLayoutItem::setAlignment((Qt::Alignment )__qt_a0);

}

// QSpacerItem::expandingDirections() const
QTD_EXTERN QTD_EXPORT int qtd_QSpacerItem_expandingDirections_const
(void* __this_nativeId)
{
    QSpacerItem_QtDShell *__qt_this = (QSpacerItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QSpacerItem*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_expandingDirections(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSpacerItem::geometry() const
QTD_EXTERN QTD_EXPORT void qtd_QSpacerItem_geometry_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QSpacerItem_QtDShell *__qt_this = (QSpacerItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QSpacerItem*)__this_nativeId) != NULL;
    QRect  __qt_return_value = __qt_this->__override_geometry(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QSpacerItem::hasHeightForWidth() const
QTD_EXTERN QTD_EXPORT bool qtd_QSpacerItem_hasHeightForWidth_const
(void* __this_nativeId)
{
    QSpacerItem_QtDShell *__qt_this = (QSpacerItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QSpacerItem*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_hasHeightForWidth(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSpacerItem::heightForWidth(int arg__1) const
QTD_EXTERN QTD_EXPORT int qtd_QSpacerItem_heightForWidth_int_const
(void* __this_nativeId,
 int arg__1)
{
    QSpacerItem_QtDShell *__qt_this = (QSpacerItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QSpacerItem*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_heightForWidth((int )arg__1, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSpacerItem::invalidate()
QTD_EXTERN QTD_EXPORT void qtd_QSpacerItem_invalidate
(void* __this_nativeId)
{
    QSpacerItem_QtDShell *__qt_this = (QSpacerItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QSpacerItem*)__this_nativeId) != NULL;
    __qt_this->__override_invalidate(__do_static_call);

}

// QSpacerItem::isEmpty() const
QTD_EXTERN QTD_EXPORT bool qtd_QSpacerItem_isEmpty_const
(void* __this_nativeId)
{
    QSpacerItem_QtDShell *__qt_this = (QSpacerItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QSpacerItem*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_isEmpty(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSpacerItem::layout()
QTD_EXTERN QTD_EXPORT void* qtd_QSpacerItem_layout
(void* __this_nativeId)
{
    QSpacerItem_QtDShell *__qt_this = (QSpacerItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QSpacerItem*)__this_nativeId) != NULL;
    QLayout*  __qt_return_value = __qt_this->__override_layout(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QSpacerItem::maximumSize() const
QTD_EXTERN QTD_EXPORT void qtd_QSpacerItem_maximumSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QSpacerItem_QtDShell *__qt_this = (QSpacerItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QSpacerItem*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_maximumSize(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QSpacerItem::minimumHeightForWidth(int arg__1) const
QTD_EXTERN QTD_EXPORT int qtd_QSpacerItem_minimumHeightForWidth_int_const
(void* __this_nativeId,
 int arg__1)
{
    QSpacerItem_QtDShell *__qt_this = (QSpacerItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QSpacerItem*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_minimumHeightForWidth((int )arg__1, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSpacerItem::minimumSize() const
QTD_EXTERN QTD_EXPORT void qtd_QSpacerItem_minimumSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QSpacerItem_QtDShell *__qt_this = (QSpacerItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QSpacerItem*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_minimumSize(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QSpacerItem::setGeometry(const QRect & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QSpacerItem_setGeometry_QRect
(void* __this_nativeId,
 QRect arg__1)
{
    QSpacerItem_QtDShell *__qt_this = (QSpacerItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QSpacerItem*)__this_nativeId) != NULL;
    __qt_this->__override_setGeometry((const QRect& )arg__1, __do_static_call);

}

// QSpacerItem::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QSpacerItem_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QSpacerItem_QtDShell *__qt_this = (QSpacerItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QSpacerItem*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QSpacerItem::spacerItem()
QTD_EXTERN QTD_EXPORT void* qtd_QSpacerItem_spacerItem
(void* __this_nativeId)
{
    QSpacerItem_QtDShell *__qt_this = (QSpacerItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QSpacerItem*)__this_nativeId) != NULL;
    QSpacerItem*  __qt_return_value = __qt_this->__override_spacerItem(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QSpacerItem::widget()
QTD_EXTERN QTD_EXPORT void* qtd_QSpacerItem_widget
(void* __this_nativeId)
{
    QSpacerItem_QtDShell *__qt_this = (QSpacerItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QSpacerItem*)__this_nativeId) != NULL;
    QWidget*  __qt_return_value = __qt_this->__override_widget(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


