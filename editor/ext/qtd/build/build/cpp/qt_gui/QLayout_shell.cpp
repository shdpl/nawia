#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlist.h>
#include <qobject.h>
#include <qvariant.h>
#include <qwidget.h>

#include "QLayout_shell.h"
#include <iostream>
#include <qlayout.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT QLayoutItem* qtd_QLayout_cast_to_QLayoutItem(QLayout *ptr)
{
    return dynamic_cast<QLayoutItem*>(ptr);
}

class QLayoutEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QLayoutEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QLayout_createEntity(void *nativeId, void* dId)
{
    new QLayoutEntity((QObject*)nativeId, dId);
}

QLayout_QtDShell::QLayout_QtDShell(void *d_ptr)
    : QLayout(),
      QObjectLink(this, d_ptr)
{
}

QLayout_QtDShell::QLayout_QtDShell(void *d_ptr, QWidget*  parent0)
    : QLayout(parent0),
      QObjectLink(this, d_ptr)
{
}

QLayout_QtDShell::~QLayout_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QLayout_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QLayout::metaObject();
}

int QLayout_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QLayout::qt_metacall(_c, _id, _a);
}

int QLayout_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QLayout::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QLayout_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QLayout_addItem_QLayoutItem_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QLayout_addItem_QLayoutItem_dispatch)
void QLayout_QtDShell::addItem(QLayoutItem*  arg__1)
{
    qtd_QLayout_addItem_QLayoutItem_dispatch(QObjectLink::getLink(this)->dId, (QLayoutItem* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* e0))
void QLayout_QtDShell::childEvent(QChildEvent*  e0)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )e0);
}

QTD_FUNC_DECL(GUI, int, QLayout_count_const_dispatch, (void *dId))
QTD_FUNC(GUI, QLayout_count_const_dispatch)
int  QLayout_QtDShell::count() const
{
    return qtd_QLayout_count_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QLayout_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QLayout_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QLayout_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, int, QLayoutItem_expandingDirections_const_dispatch, (void *dId))
Qt::Orientations  QLayout_QtDShell::expandingDirections() const
{
    return (QFlags<Qt::Orientation>) qtd_QLayoutItem_expandingDirections_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_geometry_const_dispatch, (void *dId, QRect *__d_return_value))
QRect  QLayout_QtDShell::geometry() const
{
    QRect __d_return_value;
    qtd_QLayoutItem_geometry_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, bool, QLayoutItem_hasHeightForWidth_const_dispatch, (void *dId))
bool  QLayout_QtDShell::hasHeightForWidth() const
{
    return qtd_QLayoutItem_hasHeightForWidth_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, int, QLayoutItem_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QLayout_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QLayoutItem_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, int, QLayout_indexOf_QWidget_const_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QLayout_indexOf_QWidget_const_dispatch)
int  QLayout_QtDShell::indexOf(QWidget*  arg__1) const
{
    return qtd_QLayout_indexOf_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_invalidate_dispatch, (void *dId))
void QLayout_QtDShell::invalidate()
{
    qtd_QLayoutItem_invalidate_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, bool, QLayoutItem_isEmpty_const_dispatch, (void *dId))
bool  QLayout_QtDShell::isEmpty() const
{
    return qtd_QLayoutItem_isEmpty_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void*, QLayout_itemAt_int_const_dispatch, (void *dId, int index0))
QTD_FUNC(GUI, QLayout_itemAt_int_const_dispatch)
QLayoutItem*  QLayout_QtDShell::itemAt(int  index0) const
{
    return (QLayoutItem*) qtd_QLayout_itemAt_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )index0);
}

QTD_FUNC_DECL(GUI, void*, QLayoutItem_layout_dispatch, (void *dId))
QLayout*  QLayout_QtDShell::layout()
{
    return (QLayout*) qtd_QLayoutItem_layout_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_maximumSize_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QLayout_QtDShell::maximumSize() const
{
    QSize __d_return_value;
    qtd_QLayoutItem_maximumSize_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, int, QLayoutItem_minimumHeightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QLayout_QtDShell::minimumHeightForWidth(int  arg__1) const
{
    return qtd_QLayoutItem_minimumHeightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_minimumSize_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QLayout_QtDShell::minimumSize() const
{
    QSize __d_return_value;
    qtd_QLayoutItem_minimumSize_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_setGeometry_QRect_dispatch, (void *dId, QRect* arg__1))
void QLayout_QtDShell::setGeometry(const QRect&  arg__1)
{
    qtd_QLayoutItem_setGeometry_QRect_dispatch(QObjectLink::getLink(this)->dId, &(QRect& )arg__1);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QLayout_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QLayoutItem_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void*, QLayoutItem_spacerItem_dispatch, (void *dId))
QSpacerItem*  QLayout_QtDShell::spacerItem()
{
    return (QSpacerItem*) qtd_QLayoutItem_spacerItem_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void*, QLayout_takeAt_int_dispatch, (void *dId, int index0))
QTD_FUNC(GUI, QLayout_takeAt_int_dispatch)
QLayoutItem*  QLayout_QtDShell::takeAt(int  index0)
{
    return (QLayoutItem*) qtd_QLayout_takeAt_int_dispatch(QObjectLink::getLink(this)->dId, (int )index0);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QLayout_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QLayoutItem_widget_dispatch, (void *dId))
QWidget*  QLayout_QtDShell::widget()
{
    return (QWidget*) qtd_QLayoutItem_widget_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_EXTERN QTD_EXPORT void qtd_QLayout_initCallBacks(VoidFunc *virts) {
    qtd_QLayout_addItem_QLayoutItem_dispatch = (qtd_QLayout_addItem_QLayoutItem_dispatch_t) virts[0];
    qtd_QLayout_count_const_dispatch = (qtd_QLayout_count_const_dispatch_t) virts[1];
    qtd_QLayout_indexOf_QWidget_const_dispatch = (qtd_QLayout_indexOf_QWidget_const_dispatch_t) virts[2];
    qtd_QLayout_itemAt_int_const_dispatch = (qtd_QLayout_itemAt_int_const_dispatch_t) virts[3];
    qtd_QLayout_takeAt_int_dispatch = (qtd_QLayout_takeAt_int_dispatch_t) virts[4];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QLayout_QtDShell::__public_addChildLayout(QLayout*  l0)
{
    QLayout::addChildLayout((QLayout* )l0);
}

void QLayout_QtDShell::__public_addChildWidget(QWidget*  w0)
{
    QLayout::addChildWidget((QWidget* )w0);
}

QRect  QLayout_QtDShell::__public_alignmentRect(const QRect&  arg__1) const
{
    return QLayout::alignmentRect((const QRect& )arg__1);
}

QObject*  QLayout_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QLayout_QtDShell::__public_widgetEvent(QEvent*  arg__1)
{
    QLayout::widgetEvent((QEvent* )arg__1);
}

// Write virtual function overries used to decide on static/virtual calls
void QLayout_QtDShell::__override_addItem(QLayoutItem*  arg__1, bool static_call)
{
    if (static_call) {
        return;
    } else {
        addItem((QLayoutItem* )arg__1);
    }
}

void QLayout_QtDShell::__override_childEvent(QChildEvent*  e0, bool static_call)
{
    if (static_call) {
        QLayout::childEvent((QChildEvent* )e0);
    } else {
        childEvent((QChildEvent* )e0);
    }
}

int  QLayout_QtDShell::__override_count(bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return count();
    }
}

void QLayout_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QLayout_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QLayout_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

int  QLayout_QtDShell::__override_expandingDirections(bool static_call) const
{
    if (static_call) {
        return QLayout::expandingDirections();
    } else {
        return expandingDirections();
    }
}

QRect  QLayout_QtDShell::__override_geometry(bool static_call) const
{
    if (static_call) {
        return QLayout::geometry();
    } else {
        return geometry();
    }
}

bool  QLayout_QtDShell::__override_hasHeightForWidth(bool static_call) const
{
    if (static_call) {
        return QLayoutItem::hasHeightForWidth();
    } else {
        return hasHeightForWidth();
    }
}

int  QLayout_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QLayoutItem::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

int  QLayout_QtDShell::__override_indexOf(QWidget*  arg__1, bool static_call) const
{
    if (static_call) {
        return QLayout::indexOf((QWidget* )arg__1);
    } else {
        return indexOf((QWidget* )arg__1);
    }
}

void QLayout_QtDShell::__override_invalidate(bool static_call)
{
    if (static_call) {
        QLayout::invalidate();
    } else {
        invalidate();
    }
}

bool  QLayout_QtDShell::__override_isEmpty(bool static_call) const
{
    if (static_call) {
        return QLayout::isEmpty();
    } else {
        return isEmpty();
    }
}

QLayoutItem*  QLayout_QtDShell::__override_itemAt(int  index0, bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return itemAt((int )index0);
    }
}

QLayout*  QLayout_QtDShell::__override_layout(bool static_call)
{
    if (static_call) {
        return QLayout::layout();
    } else {
        return layout();
    }
}

QSize  QLayout_QtDShell::__override_maximumSize(bool static_call) const
{
    if (static_call) {
        return QLayout::maximumSize();
    } else {
        return maximumSize();
    }
}

int  QLayout_QtDShell::__override_minimumHeightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QLayoutItem::minimumHeightForWidth((int )arg__1);
    } else {
        return minimumHeightForWidth((int )arg__1);
    }
}

QSize  QLayout_QtDShell::__override_minimumSize(bool static_call) const
{
    if (static_call) {
        return QLayout::minimumSize();
    } else {
        return minimumSize();
    }
}

void QLayout_QtDShell::__override_setGeometry(const QRect&  arg__1, bool static_call)
{
    if (static_call) {
        QLayout::setGeometry((const QRect& )arg__1);
    } else {
        setGeometry((const QRect& )arg__1);
    }
}

QSize  QLayout_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QSize();
    } else {
        return sizeHint();
    }
}

QSpacerItem*  QLayout_QtDShell::__override_spacerItem(bool static_call)
{
    if (static_call) {
        return QLayoutItem::spacerItem();
    } else {
        return spacerItem();
    }
}

QLayoutItem*  QLayout_QtDShell::__override_takeAt(int  index0, bool static_call)
{
    if (static_call) {
        return 0;
    } else {
        return takeAt((int )index0);
    }
}

void QLayout_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

QWidget*  QLayout_QtDShell::__override_widget(bool static_call)
{
    if (static_call) {
        return QLayoutItem::widget();
    } else {
        return widget();
    }
}

// ---externC---
// QLayout::QLayout()
QTD_EXTERN QTD_EXPORT void* qtd_QLayout_QLayout
(void *d_ptr)
{
    QLayout_QtDShell *__qt_this = new QLayout_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QLayout::QLayout(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QLayout_QLayout_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QLayout_QtDShell *__qt_this = new QLayout_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QLayout::activate()
QTD_EXTERN QTD_EXPORT bool qtd_QLayout_activate
(void* __this_nativeId)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->activate();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLayout::addChildLayout(QLayout * l)
QTD_EXTERN QTD_EXPORT void qtd_QLayout_addChildLayout_QLayout
(void* __this_nativeId,
 void* l0)
{
    QLayout*  __qt_l0 = (QLayout* ) l0;
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    __qt_this->__public_addChildLayout((QLayout* )__qt_l0);

}

// QLayout::addChildWidget(QWidget * w)
QTD_EXTERN QTD_EXPORT void qtd_QLayout_addChildWidget_QWidget
(void* __this_nativeId,
 void* w0)
{
    QWidget*  __qt_w0 = (QWidget* ) w0;
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    __qt_this->__public_addChildWidget((QWidget* )__qt_w0);

}

// QLayout::addWidget(QWidget * w)
QTD_EXTERN QTD_EXPORT void qtd_QLayout_addWidget_QWidget
(void* __this_nativeId,
 void* w0)
{
    QWidget*  __qt_w0 = (QWidget* ) w0;
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    __qt_this->addWidget((QWidget* )__qt_w0);

}

// QLayout::alignment() const
QTD_EXTERN QTD_EXPORT int qtd_QLayout_alignment_const
(void* __this_nativeId)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QLayoutItem::alignment();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLayout::alignmentRect(const QRect & arg__1) const
QTD_EXTERN QTD_EXPORT void qtd_QLayout_alignmentRect_QRect_const
(void* __this_nativeId,
 QRect * __d_return_value,
 QRect arg__1)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->__public_alignmentRect((const QRect& )arg__1);

    *__d_return_value = __qt_return_value;

}

// QLayout::contentsRect() const
QTD_EXTERN QTD_EXPORT void qtd_QLayout_contentsRect_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->contentsRect();

    *__d_return_value = __qt_return_value;

}

// QLayout::controlTypes() const
QTD_EXTERN QTD_EXPORT int qtd_QLayout_controlTypes_const
(void* __this_nativeId)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QLayoutItem::controlTypes();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLayout::getContentsMargins(int * left, int * top, int * right, int * bottom) const
QTD_EXTERN QTD_EXPORT void qtd_QLayout_getContentsMargins_nativepointerint_nativepointerint_nativepointerint_nativepointerint_const
(void* __this_nativeId,
 int* left0,
 int* top1,
 int* right2,
 int* bottom3)
{
    int*  __qt_left0 = (int* ) left0;
    int*  __qt_top1 = (int* ) top1;
    int*  __qt_right2 = (int* ) right2;
    int*  __qt_bottom3 = (int* ) bottom3;
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    __qt_this->getContentsMargins((int* )__qt_left0, (int* )__qt_top1, (int* )__qt_right2, (int* )__qt_bottom3);

}

// QLayout::isEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QLayout_isEnabled_const
(void* __this_nativeId)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLayout::menuBar() const
QTD_EXTERN QTD_EXPORT void* qtd_QLayout_menuBar_const
(void* __this_nativeId)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->menuBar();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QLayout::parentWidget() const
QTD_EXTERN QTD_EXPORT void* qtd_QLayout_parentWidget_const
(void* __this_nativeId)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->parentWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QLayout::removeItem(QLayoutItem * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLayout_removeItem_QLayoutItem
(void* __this_nativeId,
 void* arg__1)
{
    QLayoutItem*  __qt_arg__1 = (QLayoutItem* ) arg__1;
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    __qt_this->removeItem((QLayoutItem* )__qt_arg__1);

}

// QLayout::removeWidget(QWidget * w)
QTD_EXTERN QTD_EXPORT void qtd_QLayout_removeWidget_QWidget
(void* __this_nativeId,
 void* w0)
{
    QWidget*  __qt_w0 = (QWidget* ) w0;
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    __qt_this->removeWidget((QWidget* )__qt_w0);

}

// QLayout::setAlignment(QFlags<Qt::AlignmentFlag> alignment)
QTD_EXTERN QTD_EXPORT void qtd_QLayout_setAlignment_Alignment
(void* __this_nativeId,
 int alignment0)
{
    QFlags<Qt::AlignmentFlag> __qt_alignment0 = (QFlags<Qt::AlignmentFlag>) alignment0;
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    __qt_this->QLayoutItem::setAlignment((Qt::Alignment )__qt_alignment0);

}

// QLayout::setAlignment(QLayout * l, QFlags<Qt::AlignmentFlag> alignment)
QTD_EXTERN QTD_EXPORT bool qtd_QLayout_setAlignment_QLayout_Alignment
(void* __this_nativeId,
 void* l0,
 int alignment1)
{
    QLayout*  __qt_l0 = (QLayout* ) l0;
    QFlags<Qt::AlignmentFlag> __qt_alignment1 = (QFlags<Qt::AlignmentFlag>) alignment1;
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->setAlignment((QLayout* )__qt_l0, (Qt::Alignment )__qt_alignment1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLayout::setAlignment(QWidget * w, QFlags<Qt::AlignmentFlag> alignment)
QTD_EXTERN QTD_EXPORT bool qtd_QLayout_setAlignment_QWidget_Alignment
(void* __this_nativeId,
 void* w0,
 int alignment1)
{
    QWidget*  __qt_w0 = (QWidget* ) w0;
    QFlags<Qt::AlignmentFlag> __qt_alignment1 = (QFlags<Qt::AlignmentFlag>) alignment1;
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->setAlignment((QWidget* )__qt_w0, (Qt::Alignment )__qt_alignment1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLayout::setContentsMargins(int left, int top, int right, int bottom)
QTD_EXTERN QTD_EXPORT void qtd_QLayout_setContentsMargins_int_int_int_int
(void* __this_nativeId,
 int left0,
 int top1,
 int right2,
 int bottom3)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    __qt_this->setContentsMargins((int )left0, (int )top1, (int )right2, (int )bottom3);

}

// QLayout::setEnabled(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLayout_setEnabled_bool
(void* __this_nativeId,
 bool arg__1)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    __qt_this->setEnabled((bool )arg__1);

}

// QLayout::setMargin(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLayout_setMargin_int
(void* __this_nativeId,
 int arg__1)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    __qt_this->setMargin((int )arg__1);

}

// QLayout::setMenuBar(QWidget * w)
QTD_EXTERN QTD_EXPORT void qtd_QLayout_setMenuBar_QWidget
(void* __this_nativeId,
 void* w0)
{
    QWidget*  __qt_w0 = (QWidget* ) w0;
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    __qt_this->setMenuBar((QWidget* )__qt_w0);

}

// QLayout::setSizeConstraint(QLayout::SizeConstraint arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLayout_setSizeConstraint_SizeConstraint
(void* __this_nativeId,
 int arg__1)
{
    QLayout::SizeConstraint __qt_arg__1 = (QLayout::SizeConstraint) arg__1;
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    __qt_this->setSizeConstraint((QLayout::SizeConstraint )__qt_arg__1);

}

// QLayout::setSpacing(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLayout_setWidgetSpacing_int
(void* __this_nativeId,
 int arg__1)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    __qt_this->setSpacing((int )arg__1);

}

// QLayout::sizeConstraint() const
QTD_EXTERN QTD_EXPORT int qtd_QLayout_sizeConstraint_const
(void* __this_nativeId)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->sizeConstraint();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLayout::spacing() const
QTD_EXTERN QTD_EXPORT int qtd_QLayout_widgetSpacing_const
(void* __this_nativeId)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->spacing();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLayout::totalHeightForWidth(int w) const
QTD_EXTERN QTD_EXPORT int qtd_QLayout_totalHeightForWidth_int_const
(void* __this_nativeId,
 int w0)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->totalHeightForWidth((int )w0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLayout::totalMaximumSize() const
QTD_EXTERN QTD_EXPORT void qtd_QLayout_totalMaximumSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->totalMaximumSize();

    *__d_return_value = __qt_return_value;

}

// QLayout::totalMinimumSize() const
QTD_EXTERN QTD_EXPORT void qtd_QLayout_totalMinimumSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->totalMinimumSize();

    *__d_return_value = __qt_return_value;

}

// QLayout::totalSizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QLayout_totalSizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->totalSizeHint();

    *__d_return_value = __qt_return_value;

}

// QLayout::update()
QTD_EXTERN QTD_EXPORT void qtd_QLayout_update
(void* __this_nativeId)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    __qt_this->update();

}

// QLayout::widgetEvent(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLayout_widgetEvent_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    __qt_this->__public_widgetEvent((QEvent* )__qt_arg__1);

}

// QLayout::addItem(QLayoutItem * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLayout_addItem_QLayoutItem
(void* __this_nativeId,
 void* arg__1)
{
    QLayoutItem*  __qt_arg__1 = (QLayoutItem* ) arg__1;
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_addItem((QLayoutItem* )__qt_arg__1, __do_static_call);

}

// QLayout::childEvent(QChildEvent * e)
QTD_EXTERN QTD_EXPORT void qtd_QLayout_childEvent_QChildEvent
(void* __this_nativeId,
 void* e0)
{
    QChildEvent*  __qt_e0 = (QChildEvent* ) e0;
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_childEvent((QChildEvent* )__qt_e0, __do_static_call);

}

// QLayout::count() const
QTD_EXTERN QTD_EXPORT int qtd_QLayout_count_const
(void* __this_nativeId)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_count(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLayout::expandingDirections() const
QTD_EXTERN QTD_EXPORT int qtd_QLayout_expandingDirections_const
(void* __this_nativeId)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_expandingDirections(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLayout::geometry() const
QTD_EXTERN QTD_EXPORT void qtd_QLayout_geometry_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QRect  __qt_return_value = __qt_this->__override_geometry(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QLayout::hasHeightForWidth() const
QTD_EXTERN QTD_EXPORT bool qtd_QLayout_hasHeightForWidth_const
(void* __this_nativeId)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_hasHeightForWidth(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLayout::heightForWidth(int arg__1) const
QTD_EXTERN QTD_EXPORT int qtd_QLayout_heightForWidth_int_const
(void* __this_nativeId,
 int arg__1)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_heightForWidth((int )arg__1, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLayout::indexOf(QWidget * arg__1) const
QTD_EXTERN QTD_EXPORT int qtd_QLayout_indexOf_QWidget_const
(void* __this_nativeId,
 void* arg__1)
{
    QWidget*  __qt_arg__1 = (QWidget* ) arg__1;
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_indexOf((QWidget* )__qt_arg__1, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLayout::invalidate()
QTD_EXTERN QTD_EXPORT void qtd_QLayout_invalidate
(void* __this_nativeId)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_invalidate(__do_static_call);

}

// QLayout::isEmpty() const
QTD_EXTERN QTD_EXPORT bool qtd_QLayout_isEmpty_const
(void* __this_nativeId)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_isEmpty(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLayout::itemAt(int index) const
QTD_EXTERN QTD_EXPORT void* qtd_QLayout_itemAt_int_const
(void* __this_nativeId,
 int index0)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QLayoutItem*  __qt_return_value = __qt_this->__override_itemAt((int )index0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QLayout::layout()
QTD_EXTERN QTD_EXPORT void* qtd_QLayout_layout
(void* __this_nativeId)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QLayout*  __qt_return_value = __qt_this->__override_layout(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QLayout::maximumSize() const
QTD_EXTERN QTD_EXPORT void qtd_QLayout_maximumSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_maximumSize(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QLayout::minimumHeightForWidth(int arg__1) const
QTD_EXTERN QTD_EXPORT int qtd_QLayout_minimumHeightForWidth_int_const
(void* __this_nativeId,
 int arg__1)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_minimumHeightForWidth((int )arg__1, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QLayout::minimumSize() const
QTD_EXTERN QTD_EXPORT void qtd_QLayout_minimumSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_minimumSize(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QLayout::setGeometry(const QRect & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QLayout_setGeometry_QRect
(void* __this_nativeId,
 QRect arg__1)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setGeometry((const QRect& )arg__1, __do_static_call);

}

// QLayout::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QLayout_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QLayout::spacerItem()
QTD_EXTERN QTD_EXPORT void* qtd_QLayout_spacerItem
(void* __this_nativeId)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSpacerItem*  __qt_return_value = __qt_this->__override_spacerItem(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QLayout::takeAt(int index)
QTD_EXTERN QTD_EXPORT void* qtd_QLayout_takeAt_int
(void* __this_nativeId,
 int index0)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QLayoutItem*  __qt_return_value = __qt_this->__override_takeAt((int )index0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QLayout::widget()
QTD_EXTERN QTD_EXPORT void* qtd_QLayout_widget
(void* __this_nativeId)
{
    QLayout_QtDShell *__qt_this = (QLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QWidget*  __qt_return_value = __qt_this->__override_widget(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QLayout::closestAcceptableSize(const QWidget * w, const QSize & s)
QTD_EXTERN QTD_EXPORT void qtd_QLayout_closestAcceptableSize_QWidget_QSize
(QSize * __d_return_value,
 void* w0,
 QSize s1)
{
    const QWidget*  __qt_w0 = (const QWidget* ) w0;
    QSize  __qt_return_value = QLayout_QtDShell::closestAcceptableSize((const QWidget* )__qt_w0, (const QSize& )s1);

    *__d_return_value = __qt_return_value;

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QLayout_staticMetaObject() {
    return (void*)&QLayout::staticMetaObject;
}


