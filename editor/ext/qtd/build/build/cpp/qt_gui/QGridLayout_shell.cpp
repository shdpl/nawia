#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qgridlayout.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlist.h>
#include <qobject.h>
#include <qvariant.h>
#include <qwidget.h>

#include "QGridLayout_shell.h"
#include <iostream>
#include <qgridlayout.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QGridLayoutEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QGridLayoutEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QGridLayout_createEntity(void *nativeId, void* dId)
{
    new QGridLayoutEntity((QObject*)nativeId, dId);
}

QGridLayout_QtDShell::QGridLayout_QtDShell(void *d_ptr)
    : QGridLayout(),
      QObjectLink(this, d_ptr)
{
}

QGridLayout_QtDShell::QGridLayout_QtDShell(void *d_ptr, QWidget*  parent0)
    : QGridLayout(parent0),
      QObjectLink(this, d_ptr)
{
}

QGridLayout_QtDShell::~QGridLayout_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QGridLayout_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QGridLayout::metaObject();
}

int QGridLayout_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QGridLayout::qt_metacall(_c, _id, _a);
}

int QGridLayout_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QGridLayout::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QGridLayout_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QLayout_addItem_QLayoutItem_dispatch, (void *dId, void* arg__1))
void QGridLayout_QtDShell::addItem(QLayoutItem*  arg__1)
{
    qtd_QLayout_addItem_QLayoutItem_dispatch(QObjectLink::getLink(this)->dId, (QLayoutItem* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* e0))
void QGridLayout_QtDShell::childEvent(QChildEvent*  e0)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )e0);
}

QTD_FUNC_DECL(GUI, int, QLayout_count_const_dispatch, (void *dId))
int  QGridLayout_QtDShell::count() const
{
    return qtd_QLayout_count_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QGridLayout_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QGridLayout_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QGridLayout_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, int, QLayoutItem_expandingDirections_const_dispatch, (void *dId))
Qt::Orientations  QGridLayout_QtDShell::expandingDirections() const
{
    return (QFlags<Qt::Orientation>) qtd_QLayoutItem_expandingDirections_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_geometry_const_dispatch, (void *dId, QRect *__d_return_value))
QRect  QGridLayout_QtDShell::geometry() const
{
    QRect __d_return_value;
    qtd_QLayoutItem_geometry_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, bool, QLayoutItem_hasHeightForWidth_const_dispatch, (void *dId))
bool  QGridLayout_QtDShell::hasHeightForWidth() const
{
    return qtd_QLayoutItem_hasHeightForWidth_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, int, QLayoutItem_heightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QGridLayout_QtDShell::heightForWidth(int  arg__1) const
{
    return qtd_QLayoutItem_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, int, QLayout_indexOf_QWidget_const_dispatch, (void *dId, void* arg__1))
int  QGridLayout_QtDShell::indexOf(QWidget*  arg__1) const
{
    return qtd_QLayout_indexOf_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_invalidate_dispatch, (void *dId))
void QGridLayout_QtDShell::invalidate()
{
    qtd_QLayoutItem_invalidate_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, bool, QLayoutItem_isEmpty_const_dispatch, (void *dId))
bool  QGridLayout_QtDShell::isEmpty() const
{
    return qtd_QLayoutItem_isEmpty_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void*, QLayout_itemAt_int_const_dispatch, (void *dId, int index0))
QLayoutItem*  QGridLayout_QtDShell::itemAt(int  index0) const
{
    return (QLayoutItem*) qtd_QLayout_itemAt_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )index0);
}

QTD_FUNC_DECL(GUI, void*, QLayoutItem_layout_dispatch, (void *dId))
QLayout*  QGridLayout_QtDShell::layout()
{
    return (QLayout*) qtd_QLayoutItem_layout_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_maximumSize_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QGridLayout_QtDShell::maximumSize() const
{
    QSize __d_return_value;
    qtd_QLayoutItem_maximumSize_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, int, QLayoutItem_minimumHeightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QGridLayout_QtDShell::minimumHeightForWidth(int  arg__1) const
{
    return qtd_QLayoutItem_minimumHeightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_minimumSize_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QGridLayout_QtDShell::minimumSize() const
{
    QSize __d_return_value;
    qtd_QLayoutItem_minimumSize_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_setGeometry_QRect_dispatch, (void *dId, QRect* arg__1))
void QGridLayout_QtDShell::setGeometry(const QRect&  arg__1)
{
    qtd_QLayoutItem_setGeometry_QRect_dispatch(QObjectLink::getLink(this)->dId, &(QRect& )arg__1);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QGridLayout_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QLayoutItem_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void*, QLayoutItem_spacerItem_dispatch, (void *dId))
QSpacerItem*  QGridLayout_QtDShell::spacerItem()
{
    return (QSpacerItem*) qtd_QLayoutItem_spacerItem_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void*, QLayout_takeAt_int_dispatch, (void *dId, int index0))
QLayoutItem*  QGridLayout_QtDShell::takeAt(int  index0)
{
    return (QLayoutItem*) qtd_QLayout_takeAt_int_dispatch(QObjectLink::getLink(this)->dId, (int )index0);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QGridLayout_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QLayoutItem_widget_dispatch, (void *dId))
QWidget*  QGridLayout_QtDShell::widget()
{
    return (QWidget*) qtd_QLayoutItem_widget_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_EXTERN QTD_EXPORT void qtd_QGridLayout_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
void QGridLayout_QtDShell::addItem(QLayoutItem*  item0, int  row1, int  column2, int  rowSpan3, int  columnSpan4, Qt::Alignment  arg__6)
{
    QGridLayout::addItem((QLayoutItem* )item0, (int )row1, (int )column2, (int )rowSpan3, (int )columnSpan4, (Qt::Alignment )arg__6);
}

// public overrides for functions that are protected in the base class
void QGridLayout_QtDShell::__public_addChildLayout(QLayout*  l0)
{
    QLayout::addChildLayout((QLayout* )l0);
}

void QGridLayout_QtDShell::__public_addChildWidget(QWidget*  w0)
{
    QLayout::addChildWidget((QWidget* )w0);
}

QRect  QGridLayout_QtDShell::__public_alignmentRect(const QRect&  arg__1) const
{
    return QLayout::alignmentRect((const QRect& )arg__1);
}

QObject*  QGridLayout_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QGridLayout_QtDShell::__public_widgetEvent(QEvent*  arg__1)
{
    QLayout::widgetEvent((QEvent* )arg__1);
}

// Write virtual function overries used to decide on static/virtual calls
void QGridLayout_QtDShell::__override_addItem(QLayoutItem*  arg__1, bool static_call)
{
    if (static_call) {
        QGridLayout::addItem((QLayoutItem* )arg__1);
    } else {
        addItem((QLayoutItem* )arg__1);
    }
}

void QGridLayout_QtDShell::__override_childEvent(QChildEvent*  e0, bool static_call)
{
    if (static_call) {
        QLayout::childEvent((QChildEvent* )e0);
    } else {
        childEvent((QChildEvent* )e0);
    }
}

int  QGridLayout_QtDShell::__override_count(bool static_call) const
{
    if (static_call) {
        return QGridLayout::count();
    } else {
        return count();
    }
}

void QGridLayout_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QGridLayout_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QGridLayout_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

int  QGridLayout_QtDShell::__override_expandingDirections(bool static_call) const
{
    if (static_call) {
        return QGridLayout::expandingDirections();
    } else {
        return expandingDirections();
    }
}

QRect  QGridLayout_QtDShell::__override_geometry(bool static_call) const
{
    if (static_call) {
        return QLayout::geometry();
    } else {
        return geometry();
    }
}

bool  QGridLayout_QtDShell::__override_hasHeightForWidth(bool static_call) const
{
    if (static_call) {
        return QGridLayout::hasHeightForWidth();
    } else {
        return hasHeightForWidth();
    }
}

int  QGridLayout_QtDShell::__override_heightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QGridLayout::heightForWidth((int )arg__1);
    } else {
        return heightForWidth((int )arg__1);
    }
}

int  QGridLayout_QtDShell::__override_indexOf(QWidget*  arg__1, bool static_call) const
{
    if (static_call) {
        return QLayout::indexOf((QWidget* )arg__1);
    } else {
        return indexOf((QWidget* )arg__1);
    }
}

void QGridLayout_QtDShell::__override_invalidate(bool static_call)
{
    if (static_call) {
        QGridLayout::invalidate();
    } else {
        invalidate();
    }
}

bool  QGridLayout_QtDShell::__override_isEmpty(bool static_call) const
{
    if (static_call) {
        return QLayout::isEmpty();
    } else {
        return isEmpty();
    }
}

QLayoutItem*  QGridLayout_QtDShell::__override_itemAt(int  index0, bool static_call) const
{
    if (static_call) {
        return QGridLayout::itemAt((int )index0);
    } else {
        return itemAt((int )index0);
    }
}

QLayout*  QGridLayout_QtDShell::__override_layout(bool static_call)
{
    if (static_call) {
        return QLayout::layout();
    } else {
        return layout();
    }
}

QSize  QGridLayout_QtDShell::__override_maximumSize(bool static_call) const
{
    if (static_call) {
        return QGridLayout::maximumSize();
    } else {
        return maximumSize();
    }
}

int  QGridLayout_QtDShell::__override_minimumHeightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QGridLayout::minimumHeightForWidth((int )arg__1);
    } else {
        return minimumHeightForWidth((int )arg__1);
    }
}

QSize  QGridLayout_QtDShell::__override_minimumSize(bool static_call) const
{
    if (static_call) {
        return QGridLayout::minimumSize();
    } else {
        return minimumSize();
    }
}

void QGridLayout_QtDShell::__override_setGeometry(const QRect&  arg__1, bool static_call)
{
    if (static_call) {
        QGridLayout::setGeometry((const QRect& )arg__1);
    } else {
        setGeometry((const QRect& )arg__1);
    }
}

QSize  QGridLayout_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QGridLayout::sizeHint();
    } else {
        return sizeHint();
    }
}

QSpacerItem*  QGridLayout_QtDShell::__override_spacerItem(bool static_call)
{
    if (static_call) {
        return QLayoutItem::spacerItem();
    } else {
        return spacerItem();
    }
}

QLayoutItem*  QGridLayout_QtDShell::__override_takeAt(int  index0, bool static_call)
{
    if (static_call) {
        return QGridLayout::takeAt((int )index0);
    } else {
        return takeAt((int )index0);
    }
}

void QGridLayout_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

QWidget*  QGridLayout_QtDShell::__override_widget(bool static_call)
{
    if (static_call) {
        return QLayoutItem::widget();
    } else {
        return widget();
    }
}

// ---externC---
// QGridLayout::QGridLayout()
QTD_EXTERN QTD_EXPORT void* qtd_QGridLayout_QGridLayout
(void *d_ptr)
{
    QGridLayout_QtDShell *__qt_this = new QGridLayout_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QGridLayout::QGridLayout(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QGridLayout_QGridLayout_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QGridLayout_QtDShell *__qt_this = new QGridLayout_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QGridLayout::addItem(QLayoutItem * item, int row, int column, int rowSpan, int columnSpan, QFlags<Qt::AlignmentFlag> arg__6)
QTD_EXTERN QTD_EXPORT void qtd_QGridLayout_addItem_QLayoutItem_int_int_int_int_Alignment
(void* __this_nativeId,
 void* item0,
 int row1,
 int column2,
 int rowSpan3,
 int columnSpan4,
 int arg__6)
{
    QLayoutItem*  __qt_item0 = (QLayoutItem* ) item0;
    QFlags<Qt::AlignmentFlag> __qt_arg__6 = (QFlags<Qt::AlignmentFlag>) arg__6;
    QGridLayout *__qt_this = (QGridLayout *) __this_nativeId;
    __qt_this->addItem((QLayoutItem* )__qt_item0, (int )row1, (int )column2, (int )rowSpan3, (int )columnSpan4, (Qt::Alignment )__qt_arg__6);

}

// QGridLayout::addLayout(QLayout * arg__1, int row, int column, QFlags<Qt::AlignmentFlag> arg__4)
QTD_EXTERN QTD_EXPORT void qtd_QGridLayout_addLayout_QLayout_int_int_Alignment
(void* __this_nativeId,
 void* arg__1,
 int row1,
 int column2,
 int arg__4)
{
    QLayout*  __qt_arg__1 = (QLayout* ) arg__1;
    QFlags<Qt::AlignmentFlag> __qt_arg__4 = (QFlags<Qt::AlignmentFlag>) arg__4;
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    __qt_this->addLayout((QLayout* )__qt_arg__1, (int )row1, (int )column2, (Qt::Alignment )__qt_arg__4);

}

// QGridLayout::addLayout(QLayout * arg__1, int row, int column, int rowSpan, int columnSpan, QFlags<Qt::AlignmentFlag> arg__6)
QTD_EXTERN QTD_EXPORT void qtd_QGridLayout_addLayout_QLayout_int_int_int_int_Alignment
(void* __this_nativeId,
 void* arg__1,
 int row1,
 int column2,
 int rowSpan3,
 int columnSpan4,
 int arg__6)
{
    QLayout*  __qt_arg__1 = (QLayout* ) arg__1;
    QFlags<Qt::AlignmentFlag> __qt_arg__6 = (QFlags<Qt::AlignmentFlag>) arg__6;
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    __qt_this->addLayout((QLayout* )__qt_arg__1, (int )row1, (int )column2, (int )rowSpan3, (int )columnSpan4, (Qt::Alignment )__qt_arg__6);

}

// QGridLayout::addWidget(QWidget * arg__1, int row, int column, QFlags<Qt::AlignmentFlag> arg__4)
QTD_EXTERN QTD_EXPORT void qtd_QGridLayout_addWidget_QWidget_int_int_Alignment
(void* __this_nativeId,
 void* arg__1,
 int row1,
 int column2,
 int arg__4)
{
    QWidget*  __qt_arg__1 = (QWidget* ) arg__1;
    QFlags<Qt::AlignmentFlag> __qt_arg__4 = (QFlags<Qt::AlignmentFlag>) arg__4;
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    __qt_this->addWidget((QWidget* )__qt_arg__1, (int )row1, (int )column2, (Qt::Alignment )__qt_arg__4);

}

// QGridLayout::addWidget(QWidget * arg__1, int row, int column, int rowSpan, int columnSpan, QFlags<Qt::AlignmentFlag> arg__6)
QTD_EXTERN QTD_EXPORT void qtd_QGridLayout_addWidget_QWidget_int_int_int_int_Alignment
(void* __this_nativeId,
 void* arg__1,
 int row1,
 int column2,
 int rowSpan3,
 int columnSpan4,
 int arg__6)
{
    QWidget*  __qt_arg__1 = (QWidget* ) arg__1;
    QFlags<Qt::AlignmentFlag> __qt_arg__6 = (QFlags<Qt::AlignmentFlag>) arg__6;
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    __qt_this->addWidget((QWidget* )__qt_arg__1, (int )row1, (int )column2, (int )rowSpan3, (int )columnSpan4, (Qt::Alignment )__qt_arg__6);

}

// QGridLayout::cellRect(int row, int column) const
QTD_EXTERN QTD_EXPORT void qtd_QGridLayout_cellRect_int_int_const
(void* __this_nativeId,
 QRect * __d_return_value,
 int row0,
 int column1)
{
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->cellRect((int )row0, (int )column1);

    *__d_return_value = __qt_return_value;

}

// QGridLayout::columnCount() const
QTD_EXTERN QTD_EXPORT int qtd_QGridLayout_columnCount_const
(void* __this_nativeId)
{
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->columnCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGridLayout::columnMinimumWidth(int column) const
QTD_EXTERN QTD_EXPORT int qtd_QGridLayout_columnMinimumWidth_int_const
(void* __this_nativeId,
 int column0)
{
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->columnMinimumWidth((int )column0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGridLayout::columnStretch(int column) const
QTD_EXTERN QTD_EXPORT int qtd_QGridLayout_columnStretch_int_const
(void* __this_nativeId,
 int column0)
{
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->columnStretch((int )column0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGridLayout::getItemPosition(int idx, int * row, int * column, int * rowSpan, int * columnSpan)
QTD_EXTERN QTD_EXPORT void qtd_QGridLayout_getItemPosition_int_nativepointerint_nativepointerint_nativepointerint_nativepointerint
(void* __this_nativeId,
 int idx0,
 int* row1,
 int* column2,
 int* rowSpan3,
 int* columnSpan4)
{
    int*  __qt_row1 = (int* ) row1;
    int*  __qt_column2 = (int* ) column2;
    int*  __qt_rowSpan3 = (int* ) rowSpan3;
    int*  __qt_columnSpan4 = (int* ) columnSpan4;
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    __qt_this->getItemPosition((int )idx0, (int* )__qt_row1, (int* )__qt_column2, (int* )__qt_rowSpan3, (int* )__qt_columnSpan4);

}

// QGridLayout::horizontalSpacing() const
QTD_EXTERN QTD_EXPORT int qtd_QGridLayout_horizontalSpacing_const
(void* __this_nativeId)
{
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->horizontalSpacing();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGridLayout::itemAtPosition(int row, int column) const
QTD_EXTERN QTD_EXPORT void* qtd_QGridLayout_itemAtPosition_int_int_const
(void* __this_nativeId,
 int row0,
 int column1)
{
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    QLayoutItem*  __qt_return_value = __qt_this->itemAtPosition((int )row0, (int )column1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGridLayout::originCorner() const
QTD_EXTERN QTD_EXPORT int qtd_QGridLayout_originCorner_const
(void* __this_nativeId)
{
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->originCorner();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGridLayout::rowCount() const
QTD_EXTERN QTD_EXPORT int qtd_QGridLayout_rowCount_const
(void* __this_nativeId)
{
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->rowCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGridLayout::rowMinimumHeight(int row) const
QTD_EXTERN QTD_EXPORT int qtd_QGridLayout_rowMinimumHeight_int_const
(void* __this_nativeId,
 int row0)
{
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->rowMinimumHeight((int )row0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGridLayout::rowStretch(int row) const
QTD_EXTERN QTD_EXPORT int qtd_QGridLayout_rowStretch_int_const
(void* __this_nativeId,
 int row0)
{
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->rowStretch((int )row0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGridLayout::setColumnMinimumWidth(int column, int minSize)
QTD_EXTERN QTD_EXPORT void qtd_QGridLayout_setColumnMinimumWidth_int_int
(void* __this_nativeId,
 int column0,
 int minSize1)
{
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    __qt_this->setColumnMinimumWidth((int )column0, (int )minSize1);

}

// QGridLayout::setColumnStretch(int column, int stretch)
QTD_EXTERN QTD_EXPORT void qtd_QGridLayout_setColumnStretch_int_int
(void* __this_nativeId,
 int column0,
 int stretch1)
{
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    __qt_this->setColumnStretch((int )column0, (int )stretch1);

}

// QGridLayout::setDefaultPositioning(int n, Qt::Orientation orient)
QTD_EXTERN QTD_EXPORT void qtd_QGridLayout_setDefaultPositioning_int_Orientation
(void* __this_nativeId,
 int n0,
 int orient1)
{
    Qt::Orientation __qt_orient1 = (Qt::Orientation) orient1;
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    __qt_this->setDefaultPositioning((int )n0, (Qt::Orientation )__qt_orient1);

}

// QGridLayout::setHorizontalSpacing(int spacing)
QTD_EXTERN QTD_EXPORT void qtd_QGridLayout_setHorizontalSpacing_int
(void* __this_nativeId,
 int spacing0)
{
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    __qt_this->setHorizontalSpacing((int )spacing0);

}

// QGridLayout::setOriginCorner(Qt::Corner arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QGridLayout_setOriginCorner_Corner
(void* __this_nativeId,
 int arg__1)
{
    Qt::Corner __qt_arg__1 = (Qt::Corner) arg__1;
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    __qt_this->setOriginCorner((Qt::Corner )__qt_arg__1);

}

// QGridLayout::setRowMinimumHeight(int row, int minSize)
QTD_EXTERN QTD_EXPORT void qtd_QGridLayout_setRowMinimumHeight_int_int
(void* __this_nativeId,
 int row0,
 int minSize1)
{
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    __qt_this->setRowMinimumHeight((int )row0, (int )minSize1);

}

// QGridLayout::setRowStretch(int row, int stretch)
QTD_EXTERN QTD_EXPORT void qtd_QGridLayout_setRowStretch_int_int
(void* __this_nativeId,
 int row0,
 int stretch1)
{
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    __qt_this->setRowStretch((int )row0, (int )stretch1);

}

// QGridLayout::setSpacing(int spacing)
QTD_EXTERN QTD_EXPORT void qtd_QGridLayout_setSpacing_int
(void* __this_nativeId,
 int spacing0)
{
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    __qt_this->setSpacing((int )spacing0);

}

// QGridLayout::setVerticalSpacing(int spacing)
QTD_EXTERN QTD_EXPORT void qtd_QGridLayout_setVerticalSpacing_int
(void* __this_nativeId,
 int spacing0)
{
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    __qt_this->setVerticalSpacing((int )spacing0);

}

// QGridLayout::spacing() const
QTD_EXTERN QTD_EXPORT int qtd_QGridLayout_spacing_const
(void* __this_nativeId)
{
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->spacing();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGridLayout::verticalSpacing() const
QTD_EXTERN QTD_EXPORT int qtd_QGridLayout_verticalSpacing_const
(void* __this_nativeId)
{
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->verticalSpacing();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGridLayout::addItem(QLayoutItem * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QGridLayout_addItem_QLayoutItem
(void* __this_nativeId,
 void* arg__1)
{
    QLayoutItem*  __qt_arg__1 = (QLayoutItem* ) arg__1;
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_addItem((QLayoutItem* )__qt_arg__1, __do_static_call);

}

// QGridLayout::count() const
QTD_EXTERN QTD_EXPORT int qtd_QGridLayout_count_const
(void* __this_nativeId)
{
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_count(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGridLayout::expandingDirections() const
QTD_EXTERN QTD_EXPORT int qtd_QGridLayout_expandingDirections_const
(void* __this_nativeId)
{
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_expandingDirections(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGridLayout::hasHeightForWidth() const
QTD_EXTERN QTD_EXPORT bool qtd_QGridLayout_hasHeightForWidth_const
(void* __this_nativeId)
{
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_hasHeightForWidth(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGridLayout::heightForWidth(int arg__1) const
QTD_EXTERN QTD_EXPORT int qtd_QGridLayout_heightForWidth_int_const
(void* __this_nativeId,
 int arg__1)
{
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_heightForWidth((int )arg__1, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGridLayout::invalidate()
QTD_EXTERN QTD_EXPORT void qtd_QGridLayout_invalidate
(void* __this_nativeId)
{
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_invalidate(__do_static_call);

}

// QGridLayout::itemAt(int index) const
QTD_EXTERN QTD_EXPORT void* qtd_QGridLayout_itemAt_int_const
(void* __this_nativeId,
 int index0)
{
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QLayoutItem*  __qt_return_value = __qt_this->__override_itemAt((int )index0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGridLayout::maximumSize() const
QTD_EXTERN QTD_EXPORT void qtd_QGridLayout_maximumSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_maximumSize(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QGridLayout::minimumHeightForWidth(int arg__1) const
QTD_EXTERN QTD_EXPORT int qtd_QGridLayout_minimumHeightForWidth_int_const
(void* __this_nativeId,
 int arg__1)
{
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_minimumHeightForWidth((int )arg__1, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGridLayout::minimumSize() const
QTD_EXTERN QTD_EXPORT void qtd_QGridLayout_minimumSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_minimumSize(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QGridLayout::setGeometry(const QRect & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QGridLayout_setGeometry_QRect
(void* __this_nativeId,
 QRect arg__1)
{
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setGeometry((const QRect& )arg__1, __do_static_call);

}

// QGridLayout::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QGridLayout_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QGridLayout::takeAt(int index)
QTD_EXTERN QTD_EXPORT void* qtd_QGridLayout_takeAt_int
(void* __this_nativeId,
 int index0)
{
    QGridLayout_QtDShell *__qt_this = (QGridLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QLayoutItem*  __qt_return_value = __qt_this->__override_takeAt((int )index0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QGridLayout_staticMetaObject() {
    return (void*)&QGridLayout::staticMetaObject;
}


