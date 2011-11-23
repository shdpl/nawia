#include <QVariant>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qwidget.h>

#include "QLayoutItem_shell.h"
#include <iostream>
#include <qlayoutitem.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT QLayoutItem* qtd_QLayoutItem_cast_to_QLayoutItem(QLayoutItem *ptr)
{
    return dynamic_cast<QLayoutItem*>(ptr);
}

QTD_EXTERN QTD_EXPORT void qtd_QLayoutItem_delete(void* nativeId)
{
    delete (QLayoutItem_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QLayoutItem_destroy(void* nativeId)
{
    call_destructor((QLayoutItem_QtDShell*)nativeId);
}

QLayoutItem_QtDShell::QLayoutItem_QtDShell(void *d_ptr, Qt::Alignment  alignment0)
    : QLayoutItem(alignment0),
      QtdObjectLink(d_ptr)
{
}

QLayoutItem_QtDShell::~QLayoutItem_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QLayoutItem_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QLayoutItem*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, int, QLayoutItem_expandingDirections_const_dispatch, (void *dId))
QTD_FUNC(GUI, QLayoutItem_expandingDirections_const_dispatch)
Qt::Orientations  QLayoutItem_QtDShell::expandingDirections() const
{
    return (QFlags<Qt::Orientation>) qtd_QLayoutItem_expandingDirections_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_geometry_const_dispatch, (void *dId, QRect *__d_return_value))
QTD_FUNC(GUI, QLayoutItem_geometry_const_dispatch)
QRect  QLayoutItem_QtDShell::geometry() const
{
    QRect __d_return_value;
    qtd_QLayoutItem_geometry_const_dispatch(this->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, bool, QLayoutItem_hasHeightForWidth_const_dispatch, (void *dId))
QTD_FUNC(GUI, QLayoutItem_hasHeightForWidth_const_dispatch)
bool  QLayoutItem_QtDShell::hasHeightForWidth() const
{
    return qtd_QLayoutItem_hasHeightForWidth_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, int, QLayoutItem_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
QTD_FUNC(GUI, QLayoutItem_heightForWidth_int_const_dispatch)
int  QLayoutItem_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QLayoutItem_heightForWidth_int_const_dispatch(this->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_invalidate_dispatch, (void *dId))
QTD_FUNC(GUI, QLayoutItem_invalidate_dispatch)
void QLayoutItem_QtDShell::invalidate()
{
    qtd_QLayoutItem_invalidate_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, bool, QLayoutItem_isEmpty_const_dispatch, (void *dId))
QTD_FUNC(GUI, QLayoutItem_isEmpty_const_dispatch)
bool  QLayoutItem_QtDShell::isEmpty() const
{
    return qtd_QLayoutItem_isEmpty_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void*, QLayoutItem_layout_dispatch, (void *dId))
QTD_FUNC(GUI, QLayoutItem_layout_dispatch)
QLayout*  QLayoutItem_QtDShell::layout()
{
    return (QLayout*) qtd_QLayoutItem_layout_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_maximumSize_const_dispatch, (void *dId, QSize *__d_return_value))
QTD_FUNC(GUI, QLayoutItem_maximumSize_const_dispatch)
QSize  QLayoutItem_QtDShell::maximumSize() const
{
    QSize __d_return_value;
    qtd_QLayoutItem_maximumSize_const_dispatch(this->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, int, QLayoutItem_minimumHeightForWidth_int_const_dispatch, (void *dId, int arg__1))
QTD_FUNC(GUI, QLayoutItem_minimumHeightForWidth_int_const_dispatch)
int  QLayoutItem_QtDShell::minimumHeightForWidth(int  arg__1) const
{
    return qtd_QLayoutItem_minimumHeightForWidth_int_const_dispatch(this->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_minimumSize_const_dispatch, (void *dId, QSize *__d_return_value))
QTD_FUNC(GUI, QLayoutItem_minimumSize_const_dispatch)
QSize  QLayoutItem_QtDShell::minimumSize() const
{
    QSize __d_return_value;
    qtd_QLayoutItem_minimumSize_const_dispatch(this->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_setGeometry_QRect_dispatch, (void *dId, QRect* arg__1))
QTD_FUNC(GUI, QLayoutItem_setGeometry_QRect_dispatch)
void QLayoutItem_QtDShell::setGeometry(const QRect&  arg__1)
{
    qtd_QLayoutItem_setGeometry_QRect_dispatch(this->dId, &(QRect& )arg__1);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QTD_FUNC(GUI, QLayoutItem_sizeHint_const_dispatch)
QSize  QLayoutItem_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QLayoutItem_sizeHint_const_dispatch(this->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void*, QLayoutItem_spacerItem_dispatch, (void *dId))
QTD_FUNC(GUI, QLayoutItem_spacerItem_dispatch)
QSpacerItem*  QLayoutItem_QtDShell::spacerItem()
{
    return (QSpacerItem*) qtd_QLayoutItem_spacerItem_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void*, QLayoutItem_widget_dispatch, (void *dId))
QTD_FUNC(GUI, QLayoutItem_widget_dispatch)
QWidget*  QLayoutItem_QtDShell::widget()
{
    return (QWidget*) qtd_QLayoutItem_widget_dispatch(this->dId);
}

QTD_EXTERN QTD_EXPORT void qtd_QLayoutItem_initCallBacks(VoidFunc *virts) {
    qtd_QLayoutItem_expandingDirections_const_dispatch = (qtd_QLayoutItem_expandingDirections_const_dispatch_t) virts[0];
    qtd_QLayoutItem_geometry_const_dispatch = (qtd_QLayoutItem_geometry_const_dispatch_t) virts[1];
    qtd_QLayoutItem_hasHeightForWidth_const_dispatch = (qtd_QLayoutItem_hasHeightForWidth_const_dispatch_t) virts[2];
    qtd_QLayoutItem_heightForWidth_int_const_dispatch = (qtd_QLayoutItem_heightForWidth_int_const_dispatch_t) virts[3];
    qtd_QLayoutItem_invalidate_dispatch = (qtd_QLayoutItem_invalidate_dispatch_t) virts[4];
    qtd_QLayoutItem_isEmpty_const_dispatch = (qtd_QLayoutItem_isEmpty_const_dispatch_t) virts[5];
    qtd_QLayoutItem_layout_dispatch = (qtd_QLayoutItem_layout_dispatch_t) virts[6];
    qtd_QLayoutItem_maximumSize_const_dispatch = (qtd_QLayoutItem_maximumSize_const_dispatch_t) virts[7];
    qtd_QLayoutItem_minimumHeightForWidth_int_const_dispatch = (qtd_QLayoutItem_minimumHeightForWidth_int_const_dispatch_t) virts[8];
    qtd_QLayoutItem_minimumSize_const_dispatch = (qtd_QLayoutItem_minimumSize_const_dispatch_t) virts[9];
    qtd_QLayoutItem_setGeometry_QRect_dispatch = (qtd_QLayoutItem_setGeometry_QRect_dispatch_t) virts[10];
    qtd_QLayoutItem_sizeHint_const_dispatch = (qtd_QLayoutItem_sizeHint_const_dispatch_t) virts[11];
    qtd_QLayoutItem_spacerItem_dispatch = (qtd_QLayoutItem_spacerItem_dispatch_t) virts[12];
    qtd_QLayoutItem_widget_dispatch = (qtd_QLayoutItem_widget_dispatch_t) virts[13];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
int  QLayoutItem_QtDShell::__override_expandingDirections(bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return expandingDirections();
    }
}

QRect  QLayoutItem_QtDShell::__override_geometry(bool static_call) const
{
    if (static_call) {
        return QRect();
    } else {
        return geometry();
    }
}

bool  QLayoutItem_QtDShell::__override_hasHeightForWidth(bool static_call) const
{
    if (static_call) {
        return QLayoutItem::hasHeightForWidth();
    } else {
        return hasHeightForWidth();
    }
}

int  QLayoutItem_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QLayoutItem::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

void QLayoutItem_QtDShell::__override_invalidate(bool static_call)
{
    if (static_call) {
        QLayoutItem::invalidate();
    } else {
        invalidate();
    }
}

bool  QLayoutItem_QtDShell::__override_isEmpty(bool static_call) const
{
    if (static_call) {
        return false;
    } else {
        return isEmpty();
    }
}

QLayout*  QLayoutItem_QtDShell::__override_layout(bool static_call)
{
    if (static_call) {
        return QLayoutItem::layout();
    } else {
        return layout();
    }
}

QSize  QLayoutItem_QtDShell::__override_maximumSize(bool static_call) const
{
    if (static_call) {
        return QSize();
    } else {
        return maximumSize();
    }
}

int  QLayoutItem_QtDShell::__override_minimumHeightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QLayoutItem::minimumHeightForWidth((int )arg__1);
    } else {
        return minimumHeightForWidth((int )arg__1);
    }
}

QSize  QLayoutItem_QtDShell::__override_minimumSize(bool static_call) const
{
    if (static_call) {
        return QSize();
    } else {
        return minimumSize();
    }
}

void QLayoutItem_QtDShell::__override_setGeometry(const QRect&  arg__1, bool static_call)
{
    if (static_call) {
        return;
    } else {
        setGeometry((const QRect& )arg__1);
    }
}

QSize  QLayoutItem_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QSize();
    } else {
        return sizeHint();
    }
}

QSpacerItem*  QLayoutItem_QtDShell::__override_spacerItem(bool static_call)
{
    if (static_call) {
        return QLayoutItem::spacerItem();
    } else {
        return spacerItem();
    }
}

QWidget*  QLayoutItem_QtDShell::__override_widget(bool static_call)
{
    if (static_call) {
        return QLayoutItem::widget();
    } else {
        return widget();
    }
}

// ---externC---
// QLayoutItem::QLayoutItem(QFlags<Qt::AlignmentFlag> alignment)
QTD_EXTERN QTD_EXPORT void* qtd_QLayoutItem_QLayoutItem_Alignment
(void *d_ptr,
 int alignment0)
{
    QFlags<Qt::AlignmentFlag> __qt_alignment0 = (QFlags<Qt::AlignmentFlag>) alignment0;
    QLayoutItem_QtDShell *__qt_this = new QLayoutItem_QtDShell(d_ptr, (Qt::Alignment )__qt_alignment0);
    return (void *) __qt_this;

}

// QLayoutItem::alignment() const
QTD_EXTERN QTD_EXPORT int qtd_QLayoutItem_alignment_const
(void* __this_nativeId)
{
    QLayoutItem_QtDShell *__qt_this = (QLayoutItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->alignment();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLayoutItem::controlTypes() const
QTD_EXTERN QTD_EXPORT int qtd_QLayoutItem_controlTypes_const
(void* __this_nativeId)
{
    QLayoutItem_QtDShell *__qt_this = (QLayoutItem_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->controlTypes();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLayoutItem::setAlignment(QFlags<Qt::AlignmentFlag> a)
QTD_EXTERN QTD_EXPORT void qtd_QLayoutItem_setAlignment_Alignment
(void* __this_nativeId,
 int a0)
{
    QFlags<Qt::AlignmentFlag> __qt_a0 = (QFlags<Qt::AlignmentFlag>) a0;
    QLayoutItem_QtDShell *__qt_this = (QLayoutItem_QtDShell *) __this_nativeId;
    __qt_this->setAlignment((Qt::Alignment )__qt_a0);

}

// QLayoutItem::expandingDirections() const
QTD_EXTERN QTD_EXPORT int qtd_QLayoutItem_expandingDirections_const
(void* __this_nativeId)
{
    QLayoutItem_QtDShell *__qt_this = (QLayoutItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QLayoutItem*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_expandingDirections(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLayoutItem::geometry() const
QTD_EXTERN QTD_EXPORT void qtd_QLayoutItem_geometry_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QLayoutItem_QtDShell *__qt_this = (QLayoutItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QLayoutItem*)__this_nativeId) != NULL;
    QRect  __qt_return_value = __qt_this->__override_geometry(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QLayoutItem::hasHeightForWidth() const
QTD_EXTERN QTD_EXPORT bool qtd_QLayoutItem_hasHeightForWidth_const
(void* __this_nativeId)
{
    QLayoutItem_QtDShell *__qt_this = (QLayoutItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QLayoutItem*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_hasHeightForWidth(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLayoutItem::heightForWidth(int arg__1) const
QTD_EXTERN QTD_EXPORT int qtd_QLayoutItem_heightForWidth_int_const
(void* __this_nativeId,
 int arg__1)
{
    QLayoutItem_QtDShell *__qt_this = (QLayoutItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QLayoutItem*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_heightForWidth((int )arg__1, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLayoutItem::invalidate()
QTD_EXTERN QTD_EXPORT void qtd_QLayoutItem_invalidate
(void* __this_nativeId)
{
    QLayoutItem_QtDShell *__qt_this = (QLayoutItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QLayoutItem*)__this_nativeId) != NULL;
    __qt_this->__override_invalidate(__do_static_call);

}

// QLayoutItem::isEmpty() const
QTD_EXTERN QTD_EXPORT bool qtd_QLayoutItem_isEmpty_const
(void* __this_nativeId)
{
    QLayoutItem_QtDShell *__qt_this = (QLayoutItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QLayoutItem*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_isEmpty(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLayoutItem::layout()
QTD_EXTERN QTD_EXPORT void* qtd_QLayoutItem_layout
(void* __this_nativeId)
{
    QLayoutItem_QtDShell *__qt_this = (QLayoutItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QLayoutItem*)__this_nativeId) != NULL;
    QLayout*  __qt_return_value = __qt_this->__override_layout(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QLayoutItem::maximumSize() const
QTD_EXTERN QTD_EXPORT void qtd_QLayoutItem_maximumSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QLayoutItem_QtDShell *__qt_this = (QLayoutItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QLayoutItem*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_maximumSize(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QLayoutItem::minimumHeightForWidth(int arg__1) const
QTD_EXTERN QTD_EXPORT int qtd_QLayoutItem_minimumHeightForWidth_int_const
(void* __this_nativeId,
 int arg__1)
{
    QLayoutItem_QtDShell *__qt_this = (QLayoutItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QLayoutItem*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_minimumHeightForWidth((int )arg__1, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLayoutItem::minimumSize() const
QTD_EXTERN QTD_EXPORT void qtd_QLayoutItem_minimumSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QLayoutItem_QtDShell *__qt_this = (QLayoutItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QLayoutItem*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_minimumSize(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QLayoutItem::setGeometry(const QRect & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLayoutItem_setGeometry_QRect
(void* __this_nativeId,
 QRect arg__1)
{
    QLayoutItem_QtDShell *__qt_this = (QLayoutItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QLayoutItem*)__this_nativeId) != NULL;
    __qt_this->__override_setGeometry((const QRect& )arg__1, __do_static_call);

}

// QLayoutItem::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QLayoutItem_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QLayoutItem_QtDShell *__qt_this = (QLayoutItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QLayoutItem*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QLayoutItem::spacerItem()
QTD_EXTERN QTD_EXPORT void* qtd_QLayoutItem_spacerItem
(void* __this_nativeId)
{
    QLayoutItem_QtDShell *__qt_this = (QLayoutItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QLayoutItem*)__this_nativeId) != NULL;
    QSpacerItem*  __qt_return_value = __qt_this->__override_spacerItem(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QLayoutItem::widget()
QTD_EXTERN QTD_EXPORT void* qtd_QLayoutItem_widget
(void* __this_nativeId)
{
    QLayoutItem_QtDShell *__qt_this = (QLayoutItem_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QLayoutItem*)__this_nativeId) != NULL;
    QWidget*  __qt_return_value = __qt_this->__override_widget(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
Qt::Alignment  QLayoutItem_QtDShell::align__getter()
{
    return align;
}

QTD_EXTERN QTD_EXPORT int qtd_QLayoutItem_align_
(void* __this_nativeId){
    QLayoutItem_QtDShell *__qt_object = (QLayoutItem_QtDShell *) __this_nativeId;
    Qt::Alignment __tmp_align_ = __qt_object->align__getter();
    int __d_return_value = __tmp_align_;
    return __d_return_value;
}

void QLayoutItem_QtDShell::align__setter(Qt::Alignment  align0)
{
    this->align = align0;
}

QTD_EXTERN QTD_EXPORT void qtd_QLayoutItem_align__Alignment
(void* __this_nativeId,
 int align0){
    QFlags<Qt::AlignmentFlag> __qt_align0 = (QFlags<Qt::AlignmentFlag>) align0;
    QLayoutItem_QtDShell *__qt_object = (QLayoutItem_QtDShell *) __this_nativeId;
    __qt_object->align__setter(__qt_align0);
}



