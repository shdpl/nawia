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

#include "QBoxLayout_shell.h"
#include <iostream>
#include <qboxlayout.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QBoxLayoutEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QBoxLayoutEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QBoxLayout_createEntity(void *nativeId, void* dId)
{
    new QBoxLayoutEntity((QObject*)nativeId, dId);
}

QBoxLayout_QtDShell::QBoxLayout_QtDShell(void *d_ptr, QBoxLayout::Direction  arg__1, QWidget*  parent1)
    : QBoxLayout(arg__1, parent1),
      QObjectLink(this, d_ptr)
{
}

QBoxLayout_QtDShell::~QBoxLayout_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QBoxLayout_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QBoxLayout::metaObject();
}

int QBoxLayout_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QBoxLayout::qt_metacall(_c, _id, _a);
}

int QBoxLayout_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QBoxLayout::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QBoxLayout_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QLayout_addItem_QLayoutItem_dispatch, (void *dId, void* arg__1))
void QBoxLayout_QtDShell::addItem(QLayoutItem*  arg__1)
{
    qtd_QLayout_addItem_QLayoutItem_dispatch(QObjectLink::getLink(this)->dId, (QLayoutItem* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* e0))
void QBoxLayout_QtDShell::childEvent(QChildEvent*  e0)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )e0);
}

QTD_FUNC_DECL(GUI, int, QLayout_count_const_dispatch, (void *dId))
int  QBoxLayout_QtDShell::count() const
{
    return qtd_QLayout_count_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QBoxLayout_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QBoxLayout_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QBoxLayout_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, int, QLayoutItem_expandingDirections_const_dispatch, (void *dId))
Qt::Orientations  QBoxLayout_QtDShell::expandingDirections() const
{
    return (QFlags<Qt::Orientation>) qtd_QLayoutItem_expandingDirections_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_geometry_const_dispatch, (void *dId, QRect *__d_return_value))
QRect  QBoxLayout_QtDShell::geometry() const
{
    QRect __d_return_value;
    qtd_QLayoutItem_geometry_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, bool, QLayoutItem_hasHeightForWidth_const_dispatch, (void *dId))
bool  QBoxLayout_QtDShell::hasHeightForWidth() const
{
    return qtd_QLayoutItem_hasHeightForWidth_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, int, QLayoutItem_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QBoxLayout_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QLayoutItem_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, int, QLayout_indexOf_QWidget_const_dispatch, (void *dId, void* arg__1))
int  QBoxLayout_QtDShell::indexOf(QWidget*  arg__1) const
{
    return qtd_QLayout_indexOf_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_invalidate_dispatch, (void *dId))
void QBoxLayout_QtDShell::invalidate()
{
    qtd_QLayoutItem_invalidate_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, bool, QLayoutItem_isEmpty_const_dispatch, (void *dId))
bool  QBoxLayout_QtDShell::isEmpty() const
{
    return qtd_QLayoutItem_isEmpty_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void*, QLayout_itemAt_int_const_dispatch, (void *dId, int arg__1))
QLayoutItem*  QBoxLayout_QtDShell::itemAt(int  arg__1) const
{
    return (QLayoutItem*) qtd_QLayout_itemAt_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QLayoutItem_layout_dispatch, (void *dId))
QLayout*  QBoxLayout_QtDShell::layout()
{
    return (QLayout*) qtd_QLayoutItem_layout_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_maximumSize_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QBoxLayout_QtDShell::maximumSize() const
{
    QSize __d_return_value;
    qtd_QLayoutItem_maximumSize_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, int, QLayoutItem_minimumHeightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QBoxLayout_QtDShell::minimumHeightForWidth(int  arg__1) const
{
    return qtd_QLayoutItem_minimumHeightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_minimumSize_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QBoxLayout_QtDShell::minimumSize() const
{
    QSize __d_return_value;
    qtd_QLayoutItem_minimumSize_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_setGeometry_QRect_dispatch, (void *dId, QRect* arg__1))
void QBoxLayout_QtDShell::setGeometry(const QRect&  arg__1)
{
    qtd_QLayoutItem_setGeometry_QRect_dispatch(QObjectLink::getLink(this)->dId, &(QRect& )arg__1);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QBoxLayout_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QLayoutItem_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void*, QLayoutItem_spacerItem_dispatch, (void *dId))
QSpacerItem*  QBoxLayout_QtDShell::spacerItem()
{
    return (QSpacerItem*) qtd_QLayoutItem_spacerItem_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void*, QLayout_takeAt_int_dispatch, (void *dId, int arg__1))
QLayoutItem*  QBoxLayout_QtDShell::takeAt(int  arg__1)
{
    return (QLayoutItem*) qtd_QLayout_takeAt_int_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QBoxLayout_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QLayoutItem_widget_dispatch, (void *dId))
QWidget*  QBoxLayout_QtDShell::widget()
{
    return (QWidget*) qtd_QLayoutItem_widget_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_EXTERN QTD_EXPORT void qtd_QBoxLayout_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QBoxLayout_QtDShell::__public_addChildLayout(QLayout*  l0)
{
    QLayout::addChildLayout((QLayout* )l0);
}

void QBoxLayout_QtDShell::__public_addChildWidget(QWidget*  w0)
{
    QLayout::addChildWidget((QWidget* )w0);
}

QRect  QBoxLayout_QtDShell::__public_alignmentRect(const QRect&  arg__1) const
{
    return QLayout::alignmentRect((const QRect& )arg__1);
}

void QBoxLayout_QtDShell::__public_insertItem(int  index0, QLayoutItem*  arg__2)
{
    QBoxLayout::insertItem((int )index0, (QLayoutItem* )arg__2);
}

QObject*  QBoxLayout_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QBoxLayout_QtDShell::__public_widgetEvent(QEvent*  arg__1)
{
    QLayout::widgetEvent((QEvent* )arg__1);
}

// Write virtual function overries used to decide on static/virtual calls
void QBoxLayout_QtDShell::__override_addItem(QLayoutItem*  arg__1, bool static_call)
{
    if (static_call) {
        QBoxLayout::addItem((QLayoutItem* )arg__1);
    } else {
        addItem((QLayoutItem* )arg__1);
    }
}

void QBoxLayout_QtDShell::__override_childEvent(QChildEvent*  e0, bool static_call)
{
    if (static_call) {
        QLayout::childEvent((QChildEvent* )e0);
    } else {
        childEvent((QChildEvent* )e0);
    }
}

int  QBoxLayout_QtDShell::__override_count(bool static_call) const
{
    if (static_call) {
        return QBoxLayout::count();
    } else {
        return count();
    }
}

void QBoxLayout_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QBoxLayout_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QBoxLayout_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

int  QBoxLayout_QtDShell::__override_expandingDirections(bool static_call) const
{
    if (static_call) {
        return QBoxLayout::expandingDirections();
    } else {
        return expandingDirections();
    }
}

QRect  QBoxLayout_QtDShell::__override_geometry(bool static_call) const
{
    if (static_call) {
        return QLayout::geometry();
    } else {
        return geometry();
    }
}

bool  QBoxLayout_QtDShell::__override_hasHeightForWidth(bool static_call) const
{
    if (static_call) {
        return QBoxLayout::hasHeightForWidth();
    } else {
        return hasHeightForWidth();
    }
}

int  QBoxLayout_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QBoxLayout::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

int  QBoxLayout_QtDShell::__override_indexOf(QWidget*  arg__1, bool static_call) const
{
    if (static_call) {
        return QLayout::indexOf((QWidget* )arg__1);
    } else {
        return indexOf((QWidget* )arg__1);
    }
}

void QBoxLayout_QtDShell::__override_invalidate(bool static_call)
{
    if (static_call) {
        QBoxLayout::invalidate();
    } else {
        invalidate();
    }
}

bool  QBoxLayout_QtDShell::__override_isEmpty(bool static_call) const
{
    if (static_call) {
        return QLayout::isEmpty();
    } else {
        return isEmpty();
    }
}

QLayoutItem*  QBoxLayout_QtDShell::__override_itemAt(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QBoxLayout::itemAt((int )arg__1);
    } else {
        return itemAt((int )arg__1);
    }
}

QLayout*  QBoxLayout_QtDShell::__override_layout(bool static_call)
{
    if (static_call) {
        return QLayout::layout();
    } else {
        return layout();
    }
}

QSize  QBoxLayout_QtDShell::__override_maximumSize(bool static_call) const
{
    if (static_call) {
        return QBoxLayout::maximumSize();
    } else {
        return maximumSize();
    }
}

int  QBoxLayout_QtDShell::__override_minimumHeightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QBoxLayout::minimumHeightForWidth((int )arg__1);
    } else {
        return minimumHeightForWidth((int )arg__1);
    }
}

QSize  QBoxLayout_QtDShell::__override_minimumSize(bool static_call) const
{
    if (static_call) {
        return QBoxLayout::minimumSize();
    } else {
        return minimumSize();
    }
}

void QBoxLayout_QtDShell::__override_setGeometry(const QRect&  arg__1, bool static_call)
{
    if (static_call) {
        QBoxLayout::setGeometry((const QRect& )arg__1);
    } else {
        setGeometry((const QRect& )arg__1);
    }
}

QSize  QBoxLayout_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QBoxLayout::sizeHint();
    } else {
        return sizeHint();
    }
}

QSpacerItem*  QBoxLayout_QtDShell::__override_spacerItem(bool static_call)
{
    if (static_call) {
        return QLayoutItem::spacerItem();
    } else {
        return spacerItem();
    }
}

QLayoutItem*  QBoxLayout_QtDShell::__override_takeAt(int  arg__1, bool static_call)
{
    if (static_call) {
        return QBoxLayout::takeAt((int )arg__1);
    } else {
        return takeAt((int )arg__1);
    }
}

void QBoxLayout_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

QWidget*  QBoxLayout_QtDShell::__override_widget(bool static_call)
{
    if (static_call) {
        return QLayoutItem::widget();
    } else {
        return widget();
    }
}

// ---externC---
// QBoxLayout::QBoxLayout(QBoxLayout::Direction arg__1, QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QBoxLayout_QBoxLayout_Direction_QWidget
(void *d_ptr,
 int arg__1,
 void* parent1)
{
    QBoxLayout::Direction __qt_arg__1 = (QBoxLayout::Direction) arg__1;
    QWidget*  __qt_parent1 = (QWidget* ) parent1;
    QBoxLayout_QtDShell *__qt_this = new QBoxLayout_QtDShell(d_ptr, (QBoxLayout::Direction )__qt_arg__1, (QWidget* )__qt_parent1);
    return (void *) __qt_this;

}

// QBoxLayout::addLayout(QLayout * layout, int stretch)
QTD_EXTERN QTD_EXPORT void qtd_QBoxLayout_addLayout_QLayout_int
(void* __this_nativeId,
 void* layout0,
 int stretch1)
{
    QLayout*  __qt_layout0 = (QLayout* ) layout0;
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    __qt_this->addLayout((QLayout* )__qt_layout0, (int )stretch1);

}

// QBoxLayout::addSpacerItem(QSpacerItem * spacerItem)
QTD_EXTERN QTD_EXPORT void qtd_QBoxLayout_addSpacerItem_QSpacerItem
(void* __this_nativeId,
 void* spacerItem0)
{
    QSpacerItem*  __qt_spacerItem0 = (QSpacerItem* ) spacerItem0;
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    __qt_this->addSpacerItem((QSpacerItem* )__qt_spacerItem0);

}

// QBoxLayout::addSpacing(int size)
QTD_EXTERN QTD_EXPORT void qtd_QBoxLayout_addSpacing_int
(void* __this_nativeId,
 int size0)
{
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    __qt_this->addSpacing((int )size0);

}

// QBoxLayout::addStretch(int stretch)
QTD_EXTERN QTD_EXPORT void qtd_QBoxLayout_addStretch_int
(void* __this_nativeId,
 int stretch0)
{
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    __qt_this->addStretch((int )stretch0);

}

// QBoxLayout::addStrut(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QBoxLayout_addStrut_int
(void* __this_nativeId,
 int arg__1)
{
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    __qt_this->addStrut((int )arg__1);

}

// QBoxLayout::addWidget(QWidget * arg__1, int stretch, QFlags<Qt::AlignmentFlag> alignment)
QTD_EXTERN QTD_EXPORT void qtd_QBoxLayout_addWidget_QWidget_int_Alignment
(void* __this_nativeId,
 void* arg__1,
 int stretch1,
 int alignment2)
{
    QWidget*  __qt_arg__1 = (QWidget* ) arg__1;
    QFlags<Qt::AlignmentFlag> __qt_alignment2 = (QFlags<Qt::AlignmentFlag>) alignment2;
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    __qt_this->addWidget((QWidget* )__qt_arg__1, (int )stretch1, (Qt::Alignment )__qt_alignment2);

}

// QBoxLayout::direction() const
QTD_EXTERN QTD_EXPORT int qtd_QBoxLayout_direction_const
(void* __this_nativeId)
{
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->direction();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QBoxLayout::insertItem(int index, QLayoutItem * arg__2)
QTD_EXTERN QTD_EXPORT void qtd_QBoxLayout_insertItem_int_QLayoutItem
(void* __this_nativeId,
 int index0,
 void* arg__2)
{
    QLayoutItem*  __qt_arg__2 = (QLayoutItem* ) arg__2;
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    __qt_this->__public_insertItem((int )index0, (QLayoutItem* )__qt_arg__2);

}

// QBoxLayout::insertLayout(int index, QLayout * layout, int stretch)
QTD_EXTERN QTD_EXPORT void qtd_QBoxLayout_insertLayout_int_QLayout_int
(void* __this_nativeId,
 int index0,
 void* layout1,
 int stretch2)
{
    QLayout*  __qt_layout1 = (QLayout* ) layout1;
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    __qt_this->insertLayout((int )index0, (QLayout* )__qt_layout1, (int )stretch2);

}

// QBoxLayout::insertSpacerItem(int index, QSpacerItem * spacerItem)
QTD_EXTERN QTD_EXPORT void qtd_QBoxLayout_insertSpacerItem_int_QSpacerItem
(void* __this_nativeId,
 int index0,
 void* spacerItem1)
{
    QSpacerItem*  __qt_spacerItem1 = (QSpacerItem* ) spacerItem1;
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    __qt_this->insertSpacerItem((int )index0, (QSpacerItem* )__qt_spacerItem1);

}

// QBoxLayout::insertSpacing(int index, int size)
QTD_EXTERN QTD_EXPORT void qtd_QBoxLayout_insertSpacing_int_int
(void* __this_nativeId,
 int index0,
 int size1)
{
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    __qt_this->insertSpacing((int )index0, (int )size1);

}

// QBoxLayout::insertStretch(int index, int stretch)
QTD_EXTERN QTD_EXPORT void qtd_QBoxLayout_insertStretch_int_int
(void* __this_nativeId,
 int index0,
 int stretch1)
{
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    __qt_this->insertStretch((int )index0, (int )stretch1);

}

// QBoxLayout::insertWidget(int index, QWidget * widget, int stretch, QFlags<Qt::AlignmentFlag> alignment)
QTD_EXTERN QTD_EXPORT void qtd_QBoxLayout_insertWidget_int_QWidget_int_Alignment
(void* __this_nativeId,
 int index0,
 void* widget1,
 int stretch2,
 int alignment3)
{
    QWidget*  __qt_widget1 = (QWidget* ) widget1;
    QFlags<Qt::AlignmentFlag> __qt_alignment3 = (QFlags<Qt::AlignmentFlag>) alignment3;
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    __qt_this->insertWidget((int )index0, (QWidget* )__qt_widget1, (int )stretch2, (Qt::Alignment )__qt_alignment3);

}

// QBoxLayout::setDirection(QBoxLayout::Direction arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QBoxLayout_setDirection_Direction
(void* __this_nativeId,
 int arg__1)
{
    QBoxLayout::Direction __qt_arg__1 = (QBoxLayout::Direction) arg__1;
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    __qt_this->setDirection((QBoxLayout::Direction )__qt_arg__1);

}

// QBoxLayout::setSpacing(int spacing)
QTD_EXTERN QTD_EXPORT void qtd_QBoxLayout_setSpacing_int
(void* __this_nativeId,
 int spacing0)
{
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    __qt_this->setSpacing((int )spacing0);

}

// QBoxLayout::setStretch(int index, int stretch)
QTD_EXTERN QTD_EXPORT void qtd_QBoxLayout_setStretch_int_int
(void* __this_nativeId,
 int index0,
 int stretch1)
{
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    __qt_this->setStretch((int )index0, (int )stretch1);

}

// QBoxLayout::setStretchFactor(QLayout * l, int stretch)
QTD_EXTERN QTD_EXPORT bool qtd_QBoxLayout_setStretchFactor_QLayout_int
(void* __this_nativeId,
 void* l0,
 int stretch1)
{
    QLayout*  __qt_l0 = (QLayout* ) l0;
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->setStretchFactor((QLayout* )__qt_l0, (int )stretch1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QBoxLayout::setStretchFactor(QWidget * w, int stretch)
QTD_EXTERN QTD_EXPORT bool qtd_QBoxLayout_setStretchFactor_QWidget_int
(void* __this_nativeId,
 void* w0,
 int stretch1)
{
    QWidget*  __qt_w0 = (QWidget* ) w0;
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->setStretchFactor((QWidget* )__qt_w0, (int )stretch1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QBoxLayout::spacing() const
QTD_EXTERN QTD_EXPORT int qtd_QBoxLayout_spacing_const
(void* __this_nativeId)
{
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->spacing();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QBoxLayout::stretch(int index) const
QTD_EXTERN QTD_EXPORT int qtd_QBoxLayout_stretch_int_const
(void* __this_nativeId,
 int index0)
{
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->stretch((int )index0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QBoxLayout::addItem(QLayoutItem * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QBoxLayout_addItem_QLayoutItem
(void* __this_nativeId,
 void* arg__1)
{
    QLayoutItem*  __qt_arg__1 = (QLayoutItem* ) arg__1;
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_addItem((QLayoutItem* )__qt_arg__1, __do_static_call);

}

// QBoxLayout::count() const
QTD_EXTERN QTD_EXPORT int qtd_QBoxLayout_count_const
(void* __this_nativeId)
{
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_count(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QBoxLayout::expandingDirections() const
QTD_EXTERN QTD_EXPORT int qtd_QBoxLayout_expandingDirections_const
(void* __this_nativeId)
{
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_expandingDirections(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QBoxLayout::hasHeightForWidth() const
QTD_EXTERN QTD_EXPORT bool qtd_QBoxLayout_hasHeightForWidth_const
(void* __this_nativeId)
{
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_hasHeightForWidth(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QBoxLayout::heightForWidth(int arg__1) const
QTD_EXTERN QTD_EXPORT int qtd_QBoxLayout_heightForWidth_int_const
(void* __this_nativeId,
 int arg__1)
{
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_heightForWidth((int )arg__1, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QBoxLayout::invalidate()
QTD_EXTERN QTD_EXPORT void qtd_QBoxLayout_invalidate
(void* __this_nativeId)
{
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_invalidate(__do_static_call);

}

// QBoxLayout::itemAt(int arg__1) const
QTD_EXTERN QTD_EXPORT void* qtd_QBoxLayout_itemAt_int_const
(void* __this_nativeId,
 int arg__1)
{
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QLayoutItem*  __qt_return_value = __qt_this->__override_itemAt((int )arg__1, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QBoxLayout::maximumSize() const
QTD_EXTERN QTD_EXPORT void qtd_QBoxLayout_maximumSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_maximumSize(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QBoxLayout::minimumHeightForWidth(int arg__1) const
QTD_EXTERN QTD_EXPORT int qtd_QBoxLayout_minimumHeightForWidth_int_const
(void* __this_nativeId,
 int arg__1)
{
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_minimumHeightForWidth((int )arg__1, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QBoxLayout::minimumSize() const
QTD_EXTERN QTD_EXPORT void qtd_QBoxLayout_minimumSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_minimumSize(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QBoxLayout::setGeometry(const QRect & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QBoxLayout_setGeometry_QRect
(void* __this_nativeId,
 QRect arg__1)
{
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setGeometry((const QRect& )arg__1, __do_static_call);

}

// QBoxLayout::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QBoxLayout_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QBoxLayout::takeAt(int arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QBoxLayout_takeAt_int
(void* __this_nativeId,
 int arg__1)
{
    QBoxLayout_QtDShell *__qt_this = (QBoxLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QLayoutItem*  __qt_return_value = __qt_this->__override_takeAt((int )arg__1, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QBoxLayout_staticMetaObject() {
    return (void*)&QBoxLayout::staticMetaObject;
}


