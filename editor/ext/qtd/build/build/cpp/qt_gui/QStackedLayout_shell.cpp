#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlist.h>
#include <qobject.h>
#include <qstackedlayout.h>
#include <qvariant.h>
#include <qwidget.h>

#include "QStackedLayout_shell.h"
#include <iostream>
#include <qstackedlayout.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QStackedLayoutEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QStackedLayoutEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QStackedLayout_createEntity(void *nativeId, void* dId)
{
    new QStackedLayoutEntity((QObject*)nativeId, dId);
}

QStackedLayout_QtDShell::QStackedLayout_QtDShell(void *d_ptr)
    : QStackedLayout(),
      QObjectLink(this, d_ptr)
{
}

QStackedLayout_QtDShell::QStackedLayout_QtDShell(void *d_ptr, QLayout*  parentLayout0)
    : QStackedLayout(parentLayout0),
      QObjectLink(this, d_ptr)
{
}

QStackedLayout_QtDShell::QStackedLayout_QtDShell(void *d_ptr, QWidget*  parent0)
    : QStackedLayout(parent0),
      QObjectLink(this, d_ptr)
{
}

QStackedLayout_QtDShell::~QStackedLayout_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QStackedLayout_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QStackedLayout::metaObject();
}

int QStackedLayout_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QStackedLayout::qt_metacall(_c, _id, _a);
}

int QStackedLayout_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QStackedLayout::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QStackedLayout_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QStackedLayout_QtDShell *__qt_this = (QStackedLayout_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QLayout_addItem_QLayoutItem_dispatch, (void *dId, void* item0))
void QStackedLayout_QtDShell::addItem(QLayoutItem*  item0)
{
    qtd_QLayout_addItem_QLayoutItem_dispatch(QObjectLink::getLink(this)->dId, (QLayoutItem* )item0);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* e0))
void QStackedLayout_QtDShell::childEvent(QChildEvent*  e0)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )e0);
}

QTD_FUNC_DECL(GUI, int, QLayout_count_const_dispatch, (void *dId))
int  QStackedLayout_QtDShell::count() const
{
    return qtd_QLayout_count_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QStackedLayout_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QStackedLayout_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QStackedLayout_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, int, QLayoutItem_expandingDirections_const_dispatch, (void *dId))
Qt::Orientations  QStackedLayout_QtDShell::expandingDirections() const
{
    return (QFlags<Qt::Orientation>) qtd_QLayoutItem_expandingDirections_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_geometry_const_dispatch, (void *dId, QRect *__d_return_value))
QRect  QStackedLayout_QtDShell::geometry() const
{
    QRect __d_return_value;
    qtd_QLayoutItem_geometry_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, bool, QLayoutItem_hasHeightForWidth_const_dispatch, (void *dId))
bool  QStackedLayout_QtDShell::hasHeightForWidth() const
{
    return qtd_QLayoutItem_hasHeightForWidth_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, int, QLayoutItem_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QStackedLayout_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QLayoutItem_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, int, QLayout_indexOf_QWidget_const_dispatch, (void *dId, void* arg__1))
int  QStackedLayout_QtDShell::indexOf(QWidget*  arg__1) const
{
    return qtd_QLayout_indexOf_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_invalidate_dispatch, (void *dId))
void QStackedLayout_QtDShell::invalidate()
{
    qtd_QLayoutItem_invalidate_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, bool, QLayoutItem_isEmpty_const_dispatch, (void *dId))
bool  QStackedLayout_QtDShell::isEmpty() const
{
    return qtd_QLayoutItem_isEmpty_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void*, QLayout_itemAt_int_const_dispatch, (void *dId, int arg__1))
QLayoutItem*  QStackedLayout_QtDShell::itemAt(int  arg__1) const
{
    return (QLayoutItem*) qtd_QLayout_itemAt_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QLayoutItem_layout_dispatch, (void *dId))
QLayout*  QStackedLayout_QtDShell::layout()
{
    return (QLayout*) qtd_QLayoutItem_layout_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_maximumSize_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QStackedLayout_QtDShell::maximumSize() const
{
    QSize __d_return_value;
    qtd_QLayoutItem_maximumSize_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, int, QLayoutItem_minimumHeightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QStackedLayout_QtDShell::minimumHeightForWidth(int  arg__1) const
{
    return qtd_QLayoutItem_minimumHeightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_minimumSize_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QStackedLayout_QtDShell::minimumSize() const
{
    QSize __d_return_value;
    qtd_QLayoutItem_minimumSize_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_setGeometry_QRect_dispatch, (void *dId, QRect* rect0))
void QStackedLayout_QtDShell::setGeometry(const QRect&  rect0)
{
    qtd_QLayoutItem_setGeometry_QRect_dispatch(QObjectLink::getLink(this)->dId, &(QRect& )rect0);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QStackedLayout_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QLayoutItem_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void*, QLayoutItem_spacerItem_dispatch, (void *dId))
QSpacerItem*  QStackedLayout_QtDShell::spacerItem()
{
    return (QSpacerItem*) qtd_QLayoutItem_spacerItem_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void*, QLayout_takeAt_int_dispatch, (void *dId, int arg__1))
QLayoutItem*  QStackedLayout_QtDShell::takeAt(int  arg__1)
{
    return (QLayoutItem*) qtd_QLayout_takeAt_int_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QStackedLayout_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QLayoutItem_widget_dispatch, (void *dId))
QWidget*  QStackedLayout_QtDShell::widget()
{
    return (QWidget*) qtd_QLayoutItem_widget_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_EXTERN QTD_EXPORT void qtd_QStackedLayout_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
QWidget*  QStackedLayout_QtDShell::widget(int  arg__1) const
{
    return QStackedLayout::widget((int )arg__1);
}

// public overrides for functions that are protected in the base class
void QStackedLayout_QtDShell::__public_addChildLayout(QLayout*  l0)
{
    QLayout::addChildLayout((QLayout* )l0);
}

void QStackedLayout_QtDShell::__public_addChildWidget(QWidget*  w0)
{
    QLayout::addChildWidget((QWidget* )w0);
}

QRect  QStackedLayout_QtDShell::__public_alignmentRect(const QRect&  arg__1) const
{
    return QLayout::alignmentRect((const QRect& )arg__1);
}

QObject*  QStackedLayout_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QStackedLayout_QtDShell::__public_widgetEvent(QEvent*  arg__1)
{
    QLayout::widgetEvent((QEvent* )arg__1);
}

void QStackedLayout_QtDShell::__public_currentChanged(int  index0)
{
    QStackedLayout::currentChanged((int )index0);
}

void QStackedLayout_QtDShell::__public_widgetRemoved(int  index0)
{
    QStackedLayout::widgetRemoved((int )index0);
}

// Write virtual function overries used to decide on static/virtual calls
void QStackedLayout_QtDShell::__override_addItem(QLayoutItem*  item0, bool static_call)
{
    if (static_call) {
        QStackedLayout::addItem((QLayoutItem* )item0);
    } else {
        addItem((QLayoutItem* )item0);
    }
}

void QStackedLayout_QtDShell::__override_childEvent(QChildEvent*  e0, bool static_call)
{
    if (static_call) {
        QLayout::childEvent((QChildEvent* )e0);
    } else {
        childEvent((QChildEvent* )e0);
    }
}

int  QStackedLayout_QtDShell::__override_count(bool static_call) const
{
    if (static_call) {
        return QStackedLayout::count();
    } else {
        return count();
    }
}

void QStackedLayout_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QStackedLayout_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QStackedLayout_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

int  QStackedLayout_QtDShell::__override_expandingDirections(bool static_call) const
{
    if (static_call) {
        return QLayout::expandingDirections();
    } else {
        return expandingDirections();
    }
}

QRect  QStackedLayout_QtDShell::__override_geometry(bool static_call) const
{
    if (static_call) {
        return QLayout::geometry();
    } else {
        return geometry();
    }
}

bool  QStackedLayout_QtDShell::__override_hasHeightForWidth(bool static_call) const
{
    if (static_call) {
        return QLayoutItem::hasHeightForWidth();
    } else {
        return hasHeightForWidth();
    }
}

int  QStackedLayout_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QLayoutItem::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

int  QStackedLayout_QtDShell::__override_indexOf(QWidget*  arg__1, bool static_call) const
{
    if (static_call) {
        return QLayout::indexOf((QWidget* )arg__1);
    } else {
        return indexOf((QWidget* )arg__1);
    }
}

void QStackedLayout_QtDShell::__override_invalidate(bool static_call)
{
    if (static_call) {
        QLayout::invalidate();
    } else {
        invalidate();
    }
}

bool  QStackedLayout_QtDShell::__override_isEmpty(bool static_call) const
{
    if (static_call) {
        return QLayout::isEmpty();
    } else {
        return isEmpty();
    }
}

QLayoutItem*  QStackedLayout_QtDShell::__override_itemAt(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QStackedLayout::itemAt((int )arg__1);
    } else {
        return itemAt((int )arg__1);
    }
}

QLayout*  QStackedLayout_QtDShell::__override_layout(bool static_call)
{
    if (static_call) {
        return QLayout::layout();
    } else {
        return layout();
    }
}

QSize  QStackedLayout_QtDShell::__override_maximumSize(bool static_call) const
{
    if (static_call) {
        return QLayout::maximumSize();
    } else {
        return maximumSize();
    }
}

int  QStackedLayout_QtDShell::__override_minimumHeightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QLayoutItem::minimumHeightForWidth((int )arg__1);
    } else {
        return minimumHeightForWidth((int )arg__1);
    }
}

QSize  QStackedLayout_QtDShell::__override_minimumSize(bool static_call) const
{
    if (static_call) {
        return QStackedLayout::minimumSize();
    } else {
        return minimumSize();
    }
}

void QStackedLayout_QtDShell::__override_setGeometry(const QRect&  rect0, bool static_call)
{
    if (static_call) {
        QStackedLayout::setGeometry((const QRect& )rect0);
    } else {
        setGeometry((const QRect& )rect0);
    }
}

QSize  QStackedLayout_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QStackedLayout::sizeHint();
    } else {
        return sizeHint();
    }
}

QSpacerItem*  QStackedLayout_QtDShell::__override_spacerItem(bool static_call)
{
    if (static_call) {
        return QLayoutItem::spacerItem();
    } else {
        return spacerItem();
    }
}

QLayoutItem*  QStackedLayout_QtDShell::__override_takeAt(int  arg__1, bool static_call)
{
    if (static_call) {
        return QStackedLayout::takeAt((int )arg__1);
    } else {
        return takeAt((int )arg__1);
    }
}

void QStackedLayout_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

QWidget*  QStackedLayout_QtDShell::__override_widget(bool static_call)
{
    if (static_call) {
        return QStackedLayout::widget();
    } else {
        return widget();
    }
}

// QStackedLayout::currentChanged(int index)
QTD_EXTERN QTD_EXPORT void qtd_QStackedLayout_currentChanged_int
(void* __this_nativeId,
 int index0)
{
    QStackedLayout_QtDShell *__qt_this = (QStackedLayout_QtDShell *) __this_nativeId;
    __qt_this->__public_currentChanged((int )index0);

}

// QStackedLayout::widgetRemoved(int index)
QTD_EXTERN QTD_EXPORT void qtd_QStackedLayout_widgetRemoved_int
(void* __this_nativeId,
 int index0)
{
    QStackedLayout_QtDShell *__qt_this = (QStackedLayout_QtDShell *) __this_nativeId;
    __qt_this->__public_widgetRemoved((int )index0);

}

// ---externC---
// QStackedLayout::QStackedLayout()
QTD_EXTERN QTD_EXPORT void* qtd_QStackedLayout_QStackedLayout
(void *d_ptr)
{
    QStackedLayout_QtDShell *__qt_this = new QStackedLayout_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QStackedLayout::QStackedLayout(QLayout * parentLayout)
QTD_EXTERN QTD_EXPORT void* qtd_QStackedLayout_QStackedLayout_QLayout
(void *d_ptr,
 void* parentLayout0)
{
    QLayout*  __qt_parentLayout0 = (QLayout* ) parentLayout0;
    QStackedLayout_QtDShell *__qt_this = new QStackedLayout_QtDShell(d_ptr, (QLayout* )__qt_parentLayout0);
    return (void *) __qt_this;

}

// QStackedLayout::QStackedLayout(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QStackedLayout_QStackedLayout_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QStackedLayout_QtDShell *__qt_this = new QStackedLayout_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QStackedLayout::addWidget(QWidget * w)
QTD_EXTERN QTD_EXPORT int qtd_QStackedLayout_addStackedWidget_QWidget
(void* __this_nativeId,
 void* w0)
{
    QWidget*  __qt_w0 = (QWidget* ) w0;
    QStackedLayout_QtDShell *__qt_this = (QStackedLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->addWidget((QWidget* )__qt_w0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStackedLayout::currentIndex() const
QTD_EXTERN QTD_EXPORT int qtd_QStackedLayout_currentIndex_const
(void* __this_nativeId)
{
    QStackedLayout_QtDShell *__qt_this = (QStackedLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->currentIndex();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStackedLayout::currentWidget() const
QTD_EXTERN QTD_EXPORT void* qtd_QStackedLayout_currentWidget_const
(void* __this_nativeId)
{
    QStackedLayout_QtDShell *__qt_this = (QStackedLayout_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->currentWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QStackedLayout::insertWidget(int index, QWidget * w)
QTD_EXTERN QTD_EXPORT int qtd_QStackedLayout_insertWidget_int_QWidget
(void* __this_nativeId,
 int index0,
 void* w1)
{
    QWidget*  __qt_w1 = (QWidget* ) w1;
    QStackedLayout_QtDShell *__qt_this = (QStackedLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->insertWidget((int )index0, (QWidget* )__qt_w1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStackedLayout::setCurrentIndex(int index)
QTD_EXTERN QTD_EXPORT void qtd_QStackedLayout_setCurrentIndex_int
(void* __this_nativeId,
 int index0)
{
    QStackedLayout_QtDShell *__qt_this = (QStackedLayout_QtDShell *) __this_nativeId;
    __qt_this->setCurrentIndex((int )index0);

}

// QStackedLayout::setCurrentWidget(QWidget * w)
QTD_EXTERN QTD_EXPORT void qtd_QStackedLayout_setCurrentWidget_QWidget
(void* __this_nativeId,
 void* w0)
{
    QWidget*  __qt_w0 = (QWidget* ) w0;
    QStackedLayout_QtDShell *__qt_this = (QStackedLayout_QtDShell *) __this_nativeId;
    __qt_this->setCurrentWidget((QWidget* )__qt_w0);

}

// QStackedLayout::setStackingMode(QStackedLayout::StackingMode stackingMode)
QTD_EXTERN QTD_EXPORT void qtd_QStackedLayout_setStackingMode_StackingMode
(void* __this_nativeId,
 int stackingMode0)
{
    QStackedLayout::StackingMode __qt_stackingMode0 = (QStackedLayout::StackingMode) stackingMode0;
    QStackedLayout_QtDShell *__qt_this = (QStackedLayout_QtDShell *) __this_nativeId;
    __qt_this->setStackingMode((QStackedLayout::StackingMode )__qt_stackingMode0);

}

// QStackedLayout::stackingMode() const
QTD_EXTERN QTD_EXPORT int qtd_QStackedLayout_stackingMode_const
(void* __this_nativeId)
{
    QStackedLayout_QtDShell *__qt_this = (QStackedLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->stackingMode();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStackedLayout::widget(int arg__1) const
QTD_EXTERN QTD_EXPORT void* qtd_QStackedLayout_widget_int_const
(void* __this_nativeId,
 int arg__1)
{
    QStackedLayout *__qt_this = (QStackedLayout *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->widget((int )arg__1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QStackedLayout::addItem(QLayoutItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QStackedLayout_addItem_QLayoutItem
(void* __this_nativeId,
 void* item0)
{
    QLayoutItem*  __qt_item0 = (QLayoutItem* ) item0;
    QStackedLayout_QtDShell *__qt_this = (QStackedLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_addItem((QLayoutItem* )__qt_item0, __do_static_call);

}

// QStackedLayout::count() const
QTD_EXTERN QTD_EXPORT int qtd_QStackedLayout_count_const
(void* __this_nativeId)
{
    QStackedLayout_QtDShell *__qt_this = (QStackedLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_count(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStackedLayout::itemAt(int arg__1) const
QTD_EXTERN QTD_EXPORT void* qtd_QStackedLayout_itemAt_int_const
(void* __this_nativeId,
 int arg__1)
{
    QStackedLayout_QtDShell *__qt_this = (QStackedLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QLayoutItem*  __qt_return_value = __qt_this->__override_itemAt((int )arg__1, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QStackedLayout::minimumSize() const
QTD_EXTERN QTD_EXPORT void qtd_QStackedLayout_minimumSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QStackedLayout_QtDShell *__qt_this = (QStackedLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_minimumSize(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QStackedLayout::setGeometry(const QRect & rect)
QTD_EXTERN QTD_EXPORT void qtd_QStackedLayout_setGeometry_QRect
(void* __this_nativeId,
 QRect rect0)
{
    QStackedLayout_QtDShell *__qt_this = (QStackedLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setGeometry((const QRect& )rect0, __do_static_call);

}

// QStackedLayout::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QStackedLayout_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QStackedLayout_QtDShell *__qt_this = (QStackedLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QStackedLayout::takeAt(int arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QStackedLayout_takeAt_int
(void* __this_nativeId,
 int arg__1)
{
    QStackedLayout_QtDShell *__qt_this = (QStackedLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QLayoutItem*  __qt_return_value = __qt_this->__override_takeAt((int )arg__1, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QStackedLayout::widget()
QTD_EXTERN QTD_EXPORT void* qtd_QStackedLayout_widget
(void* __this_nativeId)
{
    QStackedLayout_QtDShell *__qt_this = (QStackedLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QWidget*  __qt_return_value = __qt_this->__override_widget(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QStackedLayout_staticMetaObject() {
    return (void*)&QStackedLayout::staticMetaObject;
}


