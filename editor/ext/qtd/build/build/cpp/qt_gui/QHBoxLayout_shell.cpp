#include <QVariant>
#include <qboxlayout.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlist.h>
#include <qobject.h>
#include <qvariant.h>
#include <qwidget.h>

#include "QHBoxLayout_shell.h"
#include <iostream>
#include <qboxlayout.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QHBoxLayoutEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QHBoxLayoutEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QHBoxLayout_createEntity(void *nativeId, void* dId)
{
    new QHBoxLayoutEntity((QObject*)nativeId, dId);
}

QHBoxLayout_QtDShell::QHBoxLayout_QtDShell(void *d_ptr)
    : QHBoxLayout(),
      QObjectLink(this, d_ptr)
{
}

QHBoxLayout_QtDShell::QHBoxLayout_QtDShell(void *d_ptr, QWidget*  parent0)
    : QHBoxLayout(parent0),
      QObjectLink(this, d_ptr)
{
}

QHBoxLayout_QtDShell::~QHBoxLayout_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QHBoxLayout_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QHBoxLayout::metaObject();
}

int QHBoxLayout_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QHBoxLayout::qt_metacall(_c, _id, _a);
}

int QHBoxLayout_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QHBoxLayout::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QHBoxLayout_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QHBoxLayout_QtDShell *__qt_this = (QHBoxLayout_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QLayout_addItem_QLayoutItem_dispatch, (void *dId, void* arg__1))
void QHBoxLayout_QtDShell::addItem(QLayoutItem*  arg__1)
{
    qtd_QLayout_addItem_QLayoutItem_dispatch(QObjectLink::getLink(this)->dId, (QLayoutItem* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* e0))
void QHBoxLayout_QtDShell::childEvent(QChildEvent*  e0)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )e0);
}

QTD_FUNC_DECL(GUI, int, QLayout_count_const_dispatch, (void *dId))
int  QHBoxLayout_QtDShell::count() const
{
    return qtd_QLayout_count_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QHBoxLayout_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QHBoxLayout_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QHBoxLayout_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, int, QLayoutItem_expandingDirections_const_dispatch, (void *dId))
Qt::Orientations  QHBoxLayout_QtDShell::expandingDirections() const
{
    return (QFlags<Qt::Orientation>) qtd_QLayoutItem_expandingDirections_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_geometry_const_dispatch, (void *dId, QRect *__d_return_value))
QRect  QHBoxLayout_QtDShell::geometry() const
{
    QRect __d_return_value;
    qtd_QLayoutItem_geometry_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, bool, QLayoutItem_hasHeightForWidth_const_dispatch, (void *dId))
bool  QHBoxLayout_QtDShell::hasHeightForWidth() const
{
    return qtd_QLayoutItem_hasHeightForWidth_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, int, QLayoutItem_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QHBoxLayout_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QLayoutItem_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, int, QLayout_indexOf_QWidget_const_dispatch, (void *dId, void* arg__1))
int  QHBoxLayout_QtDShell::indexOf(QWidget*  arg__1) const
{
    return qtd_QLayout_indexOf_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_invalidate_dispatch, (void *dId))
void QHBoxLayout_QtDShell::invalidate()
{
    qtd_QLayoutItem_invalidate_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, bool, QLayoutItem_isEmpty_const_dispatch, (void *dId))
bool  QHBoxLayout_QtDShell::isEmpty() const
{
    return qtd_QLayoutItem_isEmpty_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void*, QLayout_itemAt_int_const_dispatch, (void *dId, int arg__1))
QLayoutItem*  QHBoxLayout_QtDShell::itemAt(int  arg__1) const
{
    return (QLayoutItem*) qtd_QLayout_itemAt_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QLayoutItem_layout_dispatch, (void *dId))
QLayout*  QHBoxLayout_QtDShell::layout()
{
    return (QLayout*) qtd_QLayoutItem_layout_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_maximumSize_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QHBoxLayout_QtDShell::maximumSize() const
{
    QSize __d_return_value;
    qtd_QLayoutItem_maximumSize_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, int, QLayoutItem_minimumHeightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QHBoxLayout_QtDShell::minimumHeightForWidth(int  arg__1) const
{
    return qtd_QLayoutItem_minimumHeightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_minimumSize_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QHBoxLayout_QtDShell::minimumSize() const
{
    QSize __d_return_value;
    qtd_QLayoutItem_minimumSize_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_setGeometry_QRect_dispatch, (void *dId, QRect* arg__1))
void QHBoxLayout_QtDShell::setGeometry(const QRect&  arg__1)
{
    qtd_QLayoutItem_setGeometry_QRect_dispatch(QObjectLink::getLink(this)->dId, &(QRect& )arg__1);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QHBoxLayout_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QLayoutItem_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void*, QLayoutItem_spacerItem_dispatch, (void *dId))
QSpacerItem*  QHBoxLayout_QtDShell::spacerItem()
{
    return (QSpacerItem*) qtd_QLayoutItem_spacerItem_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void*, QLayout_takeAt_int_dispatch, (void *dId, int arg__1))
QLayoutItem*  QHBoxLayout_QtDShell::takeAt(int  arg__1)
{
    return (QLayoutItem*) qtd_QLayout_takeAt_int_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QHBoxLayout_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QLayoutItem_widget_dispatch, (void *dId))
QWidget*  QHBoxLayout_QtDShell::widget()
{
    return (QWidget*) qtd_QLayoutItem_widget_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_EXTERN QTD_EXPORT void qtd_QHBoxLayout_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QHBoxLayout_QtDShell::__public_addChildLayout(QLayout*  l0)
{
    QLayout::addChildLayout((QLayout* )l0);
}

void QHBoxLayout_QtDShell::__public_addChildWidget(QWidget*  w0)
{
    QLayout::addChildWidget((QWidget* )w0);
}

QRect  QHBoxLayout_QtDShell::__public_alignmentRect(const QRect&  arg__1) const
{
    return QLayout::alignmentRect((const QRect& )arg__1);
}

void QHBoxLayout_QtDShell::__public_insertItem(int  index0, QLayoutItem*  arg__2)
{
    QBoxLayout::insertItem((int )index0, (QLayoutItem* )arg__2);
}

QObject*  QHBoxLayout_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QHBoxLayout_QtDShell::__public_widgetEvent(QEvent*  arg__1)
{
    QLayout::widgetEvent((QEvent* )arg__1);
}

// Write virtual function overries used to decide on static/virtual calls
void QHBoxLayout_QtDShell::__override_addItem(QLayoutItem*  arg__1, bool static_call)
{
    if (static_call) {
        QBoxLayout::addItem((QLayoutItem* )arg__1);
    } else {
        addItem((QLayoutItem* )arg__1);
    }
}

void QHBoxLayout_QtDShell::__override_childEvent(QChildEvent*  e0, bool static_call)
{
    if (static_call) {
        QLayout::childEvent((QChildEvent* )e0);
    } else {
        childEvent((QChildEvent* )e0);
    }
}

int  QHBoxLayout_QtDShell::__override_count(bool static_call) const
{
    if (static_call) {
        return QBoxLayout::count();
    } else {
        return count();
    }
}

void QHBoxLayout_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QHBoxLayout_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QHBoxLayout_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

int  QHBoxLayout_QtDShell::__override_expandingDirections(bool static_call) const
{
    if (static_call) {
        return QBoxLayout::expandingDirections();
    } else {
        return expandingDirections();
    }
}

QRect  QHBoxLayout_QtDShell::__override_geometry(bool static_call) const
{
    if (static_call) {
        return QLayout::geometry();
    } else {
        return geometry();
    }
}

bool  QHBoxLayout_QtDShell::__override_hasHeightForWidth(bool static_call) const
{
    if (static_call) {
        return QBoxLayout::hasHeightForWidth();
    } else {
        return hasHeightForWidth();
    }
}

int  QHBoxLayout_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QBoxLayout::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

int  QHBoxLayout_QtDShell::__override_indexOf(QWidget*  arg__1, bool static_call) const
{
    if (static_call) {
        return QLayout::indexOf((QWidget* )arg__1);
    } else {
        return indexOf((QWidget* )arg__1);
    }
}

void QHBoxLayout_QtDShell::__override_invalidate(bool static_call)
{
    if (static_call) {
        QBoxLayout::invalidate();
    } else {
        invalidate();
    }
}

bool  QHBoxLayout_QtDShell::__override_isEmpty(bool static_call) const
{
    if (static_call) {
        return QLayout::isEmpty();
    } else {
        return isEmpty();
    }
}

QLayoutItem*  QHBoxLayout_QtDShell::__override_itemAt(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QBoxLayout::itemAt((int )arg__1);
    } else {
        return itemAt((int )arg__1);
    }
}

QLayout*  QHBoxLayout_QtDShell::__override_layout(bool static_call)
{
    if (static_call) {
        return QLayout::layout();
    } else {
        return layout();
    }
}

QSize  QHBoxLayout_QtDShell::__override_maximumSize(bool static_call) const
{
    if (static_call) {
        return QBoxLayout::maximumSize();
    } else {
        return maximumSize();
    }
}

int  QHBoxLayout_QtDShell::__override_minimumHeightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QBoxLayout::minimumHeightForWidth((int )arg__1);
    } else {
        return minimumHeightForWidth((int )arg__1);
    }
}

QSize  QHBoxLayout_QtDShell::__override_minimumSize(bool static_call) const
{
    if (static_call) {
        return QBoxLayout::minimumSize();
    } else {
        return minimumSize();
    }
}

void QHBoxLayout_QtDShell::__override_setGeometry(const QRect&  arg__1, bool static_call)
{
    if (static_call) {
        QBoxLayout::setGeometry((const QRect& )arg__1);
    } else {
        setGeometry((const QRect& )arg__1);
    }
}

QSize  QHBoxLayout_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QBoxLayout::sizeHint();
    } else {
        return sizeHint();
    }
}

QSpacerItem*  QHBoxLayout_QtDShell::__override_spacerItem(bool static_call)
{
    if (static_call) {
        return QLayoutItem::spacerItem();
    } else {
        return spacerItem();
    }
}

QLayoutItem*  QHBoxLayout_QtDShell::__override_takeAt(int  arg__1, bool static_call)
{
    if (static_call) {
        return QBoxLayout::takeAt((int )arg__1);
    } else {
        return takeAt((int )arg__1);
    }
}

void QHBoxLayout_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

QWidget*  QHBoxLayout_QtDShell::__override_widget(bool static_call)
{
    if (static_call) {
        return QLayoutItem::widget();
    } else {
        return widget();
    }
}

// ---externC---
// QHBoxLayout::QHBoxLayout()
QTD_EXTERN QTD_EXPORT void* qtd_QHBoxLayout_QHBoxLayout
(void *d_ptr)
{
    QHBoxLayout_QtDShell *__qt_this = new QHBoxLayout_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QHBoxLayout::QHBoxLayout(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QHBoxLayout_QHBoxLayout_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QHBoxLayout_QtDShell *__qt_this = new QHBoxLayout_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QHBoxLayout_staticMetaObject() {
    return (void*)&QHBoxLayout::staticMetaObject;
}


