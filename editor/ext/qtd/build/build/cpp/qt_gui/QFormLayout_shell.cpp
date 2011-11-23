#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlist.h>
#include <qobject.h>
#include <qvariant.h>
#include <qwidget.h>

#include "QFormLayout_shell.h"
#include <iostream>
#include <qformlayout.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QFormLayoutEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QFormLayoutEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QFormLayout_createEntity(void *nativeId, void* dId)
{
    new QFormLayoutEntity((QObject*)nativeId, dId);
}

QFormLayout_QtDShell::QFormLayout_QtDShell(void *d_ptr, QWidget*  parent0)
    : QFormLayout(parent0),
      QObjectLink(this, d_ptr)
{
}

QFormLayout_QtDShell::~QFormLayout_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QFormLayout_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QFormLayout::metaObject();
}

int QFormLayout_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QFormLayout::qt_metacall(_c, _id, _a);
}

int QFormLayout_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QFormLayout::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QFormLayout_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QLayout_addItem_QLayoutItem_dispatch, (void *dId, void* item0))
void QFormLayout_QtDShell::addItem(QLayoutItem*  item0)
{
    qtd_QLayout_addItem_QLayoutItem_dispatch(QObjectLink::getLink(this)->dId, (QLayoutItem* )item0);
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* e0))
void QFormLayout_QtDShell::childEvent(QChildEvent*  e0)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )e0);
}

QTD_FUNC_DECL(GUI, int, QLayout_count_const_dispatch, (void *dId))
int  QFormLayout_QtDShell::count() const
{
    return qtd_QLayout_count_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QFormLayout_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QFormLayout_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QFormLayout_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, int, QLayoutItem_expandingDirections_const_dispatch, (void *dId))
Qt::Orientations  QFormLayout_QtDShell::expandingDirections() const
{
    return (QFlags<Qt::Orientation>) qtd_QLayoutItem_expandingDirections_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_geometry_const_dispatch, (void *dId, QRect *__d_return_value))
QRect  QFormLayout_QtDShell::geometry() const
{
    QRect __d_return_value;
    qtd_QLayoutItem_geometry_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, bool, QLayoutItem_hasHeightForWidth_const_dispatch, (void *dId))
bool  QFormLayout_QtDShell::hasHeightForWidth() const
{
    return qtd_QLayoutItem_hasHeightForWidth_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, int, QLayoutItem_heightForWidth_int_const_dispatch, (void *dId, int width0))
int  QFormLayout_QtDShell::heightForWidth(int  width0) const
{
    return qtd_QLayoutItem_heightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )width0);
}

QTD_FUNC_DECL(GUI, int, QLayout_indexOf_QWidget_const_dispatch, (void *dId, void* arg__1))
int  QFormLayout_QtDShell::indexOf(QWidget*  arg__1) const
{
    return qtd_QLayout_indexOf_QWidget_const_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_invalidate_dispatch, (void *dId))
void QFormLayout_QtDShell::invalidate()
{
    qtd_QLayoutItem_invalidate_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, bool, QLayoutItem_isEmpty_const_dispatch, (void *dId))
bool  QFormLayout_QtDShell::isEmpty() const
{
    return qtd_QLayoutItem_isEmpty_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void*, QLayout_itemAt_int_const_dispatch, (void *dId, int index0))
QLayoutItem*  QFormLayout_QtDShell::itemAt(int  index0) const
{
    return (QLayoutItem*) qtd_QLayout_itemAt_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )index0);
}

QTD_FUNC_DECL(GUI, void*, QLayoutItem_layout_dispatch, (void *dId))
QLayout*  QFormLayout_QtDShell::layout()
{
    return (QLayout*) qtd_QLayoutItem_layout_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_maximumSize_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QFormLayout_QtDShell::maximumSize() const
{
    QSize __d_return_value;
    qtd_QLayoutItem_maximumSize_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, int, QLayoutItem_minimumHeightForWidth_int_const_dispatch, (void *dId, int arg__1))
int  QFormLayout_QtDShell::minimumHeightForWidth(int  arg__1) const
{
    return qtd_QLayoutItem_minimumHeightForWidth_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )arg__1);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_minimumSize_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QFormLayout_QtDShell::minimumSize() const
{
    QSize __d_return_value;
    qtd_QLayoutItem_minimumSize_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_setGeometry_QRect_dispatch, (void *dId, QRect* rect0))
void QFormLayout_QtDShell::setGeometry(const QRect&  rect0)
{
    qtd_QLayoutItem_setGeometry_QRect_dispatch(QObjectLink::getLink(this)->dId, &(QRect& )rect0);
}

QTD_FUNC_DECL(GUI, void, QLayoutItem_sizeHint_const_dispatch, (void *dId, QSize *__d_return_value))
QSize  QFormLayout_QtDShell::sizeHint() const
{
    QSize __d_return_value;
    qtd_QLayoutItem_sizeHint_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void*, QLayoutItem_spacerItem_dispatch, (void *dId))
QSpacerItem*  QFormLayout_QtDShell::spacerItem()
{
    return (QSpacerItem*) qtd_QLayoutItem_spacerItem_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void*, QLayout_takeAt_int_dispatch, (void *dId, int index0))
QLayoutItem*  QFormLayout_QtDShell::takeAt(int  index0)
{
    return (QLayoutItem*) qtd_QLayout_takeAt_int_dispatch(QObjectLink::getLink(this)->dId, (int )index0);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QFormLayout_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QLayoutItem_widget_dispatch, (void *dId))
QWidget*  QFormLayout_QtDShell::widget()
{
    return (QWidget*) qtd_QLayoutItem_widget_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_EXTERN QTD_EXPORT void qtd_QFormLayout_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
QLayoutItem*  QFormLayout_QtDShell::itemAt(int  row0, QFormLayout::ItemRole  role1) const
{
    return QFormLayout::itemAt((int )row0, (QFormLayout::ItemRole )role1);
}

// public overrides for functions that are protected in the base class
void QFormLayout_QtDShell::__public_addChildLayout(QLayout*  l0)
{
    QLayout::addChildLayout((QLayout* )l0);
}

void QFormLayout_QtDShell::__public_addChildWidget(QWidget*  w0)
{
    QLayout::addChildWidget((QWidget* )w0);
}

QRect  QFormLayout_QtDShell::__public_alignmentRect(const QRect&  arg__1) const
{
    return QLayout::alignmentRect((const QRect& )arg__1);
}

QObject*  QFormLayout_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QFormLayout_QtDShell::__public_widgetEvent(QEvent*  arg__1)
{
    QLayout::widgetEvent((QEvent* )arg__1);
}

// Write virtual function overries used to decide on static/virtual calls
void QFormLayout_QtDShell::__override_addItem(QLayoutItem*  item0, bool static_call)
{
    if (static_call) {
        QFormLayout::addItem((QLayoutItem* )item0);
    } else {
        addItem((QLayoutItem* )item0);
    }
}

void QFormLayout_QtDShell::__override_childEvent(QChildEvent*  e0, bool static_call)
{
    if (static_call) {
        QLayout::childEvent((QChildEvent* )e0);
    } else {
        childEvent((QChildEvent* )e0);
    }
}

int  QFormLayout_QtDShell::__override_count(bool static_call) const
{
    if (static_call) {
        return QFormLayout::count();
    } else {
        return count();
    }
}

void QFormLayout_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QFormLayout_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QFormLayout_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

int  QFormLayout_QtDShell::__override_expandingDirections(bool static_call) const
{
    if (static_call) {
        return QFormLayout::expandingDirections();
    } else {
        return expandingDirections();
    }
}

QRect  QFormLayout_QtDShell::__override_geometry(bool static_call) const
{
    if (static_call) {
        return QLayout::geometry();
    } else {
        return geometry();
    }
}

bool  QFormLayout_QtDShell::__override_hasHeightForWidth(bool static_call) const
{
    if (static_call) {
        return QFormLayout::hasHeightForWidth();
    } else {
        return hasHeightForWidth();
    }
}

int  QFormLayout_QtDShell::__override_heightForWidth(int  width0, bool static_call) const
{
    if (static_call) {
        return QFormLayout::heightForWidth((int )width0);
    } else {
        return heightForWidth((int )width0);
    }
}

int  QFormLayout_QtDShell::__override_indexOf(QWidget*  arg__1, bool static_call) const
{
    if (static_call) {
        return QLayout::indexOf((QWidget* )arg__1);
    } else {
        return indexOf((QWidget* )arg__1);
    }
}

void QFormLayout_QtDShell::__override_invalidate(bool static_call)
{
    if (static_call) {
        QFormLayout::invalidate();
    } else {
        invalidate();
    }
}

bool  QFormLayout_QtDShell::__override_isEmpty(bool static_call) const
{
    if (static_call) {
        return QLayout::isEmpty();
    } else {
        return isEmpty();
    }
}

QLayoutItem*  QFormLayout_QtDShell::__override_itemAt(int  index0, bool static_call) const
{
    if (static_call) {
        return QFormLayout::itemAt((int )index0);
    } else {
        return itemAt((int )index0);
    }
}

QLayout*  QFormLayout_QtDShell::__override_layout(bool static_call)
{
    if (static_call) {
        return QLayout::layout();
    } else {
        return layout();
    }
}

QSize  QFormLayout_QtDShell::__override_maximumSize(bool static_call) const
{
    if (static_call) {
        return QLayout::maximumSize();
    } else {
        return maximumSize();
    }
}

int  QFormLayout_QtDShell::__override_minimumHeightForWidth(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QLayoutItem::minimumHeightForWidth((int )arg__1);
    } else {
        return minimumHeightForWidth((int )arg__1);
    }
}

QSize  QFormLayout_QtDShell::__override_minimumSize(bool static_call) const
{
    if (static_call) {
        return QFormLayout::minimumSize();
    } else {
        return minimumSize();
    }
}

void QFormLayout_QtDShell::__override_setGeometry(const QRect&  rect0, bool static_call)
{
    if (static_call) {
        QFormLayout::setGeometry((const QRect& )rect0);
    } else {
        setGeometry((const QRect& )rect0);
    }
}

QSize  QFormLayout_QtDShell::__override_sizeHint(bool static_call) const
{
    if (static_call) {
        return QFormLayout::sizeHint();
    } else {
        return sizeHint();
    }
}

QSpacerItem*  QFormLayout_QtDShell::__override_spacerItem(bool static_call)
{
    if (static_call) {
        return QLayoutItem::spacerItem();
    } else {
        return spacerItem();
    }
}

QLayoutItem*  QFormLayout_QtDShell::__override_takeAt(int  index0, bool static_call)
{
    if (static_call) {
        return QFormLayout::takeAt((int )index0);
    } else {
        return takeAt((int )index0);
    }
}

void QFormLayout_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

QWidget*  QFormLayout_QtDShell::__override_widget(bool static_call)
{
    if (static_call) {
        return QLayoutItem::widget();
    } else {
        return widget();
    }
}

// ---externC---
// QFormLayout::QFormLayout(QWidget * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QFormLayout_QFormLayout_QWidget
(void *d_ptr,
 void* parent0)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    QFormLayout_QtDShell *__qt_this = new QFormLayout_QtDShell(d_ptr, (QWidget* )__qt_parent0);
    return (void *) __qt_this;

}

// QFormLayout::addRow(QLayout * layout)
QTD_EXTERN QTD_EXPORT void qtd_QFormLayout_addRow_QLayout
(void* __this_nativeId,
 void* layout0)
{
    QLayout*  __qt_layout0 = (QLayout* ) layout0;
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    __qt_this->addRow((QLayout* )__qt_layout0);

}

// QFormLayout::addRow(QWidget * label, QLayout * field)
QTD_EXTERN QTD_EXPORT void qtd_QFormLayout_addRow_QWidget_QLayout
(void* __this_nativeId,
 void* label0,
 void* field1)
{
    QWidget*  __qt_label0 = (QWidget* ) label0;
    QLayout*  __qt_field1 = (QLayout* ) field1;
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    __qt_this->addRow((QWidget* )__qt_label0, (QLayout* )__qt_field1);

}

// QFormLayout::addRow(QWidget * label, QWidget * field)
QTD_EXTERN QTD_EXPORT void qtd_QFormLayout_addRow_QWidget_QWidget
(void* __this_nativeId,
 void* label0,
 void* field1)
{
    QWidget*  __qt_label0 = (QWidget* ) label0;
    QWidget*  __qt_field1 = (QWidget* ) field1;
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    __qt_this->addRow((QWidget* )__qt_label0, (QWidget* )__qt_field1);

}

// QFormLayout::addRow(QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QFormLayout_addRow_QWidget
(void* __this_nativeId,
 void* widget0)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    __qt_this->addRow((QWidget* )__qt_widget0);

}

// QFormLayout::addRow(const QString & labelText, QLayout * field)
QTD_EXTERN QTD_EXPORT void qtd_QFormLayout_addRow_string_QLayout
(void* __this_nativeId,
 DArray labelText0,
 void* field1)
{
    QString __qt_labelText0 = QString::fromUtf8((const char *)labelText0.ptr, labelText0.length);
    QLayout*  __qt_field1 = (QLayout* ) field1;
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    __qt_this->addRow((const QString& )__qt_labelText0, (QLayout* )__qt_field1);

}

// QFormLayout::addRow(const QString & labelText, QWidget * field)
QTD_EXTERN QTD_EXPORT void qtd_QFormLayout_addRow_string_QWidget
(void* __this_nativeId,
 DArray labelText0,
 void* field1)
{
    QString __qt_labelText0 = QString::fromUtf8((const char *)labelText0.ptr, labelText0.length);
    QWidget*  __qt_field1 = (QWidget* ) field1;
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    __qt_this->addRow((const QString& )__qt_labelText0, (QWidget* )__qt_field1);

}

// QFormLayout::fieldGrowthPolicy() const
QTD_EXTERN QTD_EXPORT int qtd_QFormLayout_fieldGrowthPolicy_const
(void* __this_nativeId)
{
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->fieldGrowthPolicy();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFormLayout::formAlignment() const
QTD_EXTERN QTD_EXPORT int qtd_QFormLayout_formAlignment_const
(void* __this_nativeId)
{
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->formAlignment();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFormLayout::getItemPosition(int index, int * rowPtr, QFormLayout::ItemRole * rolePtr) const
QTD_EXTERN QTD_EXPORT void qtd_QFormLayout_getItemPosition_int_nativepointerint_nativepointerItemRole_const
(void* __this_nativeId,
 int index0,
 int* rowPtr1,
 QFormLayout::ItemRole* rolePtr2)
{
    int*  __qt_rowPtr1 = (int* ) rowPtr1;
    QFormLayout::ItemRole*  __qt_rolePtr2 = (QFormLayout::ItemRole* ) rolePtr2;
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    __qt_this->getItemPosition((int )index0, (int* )__qt_rowPtr1, (QFormLayout::ItemRole* )__qt_rolePtr2);

}

// QFormLayout::getLayoutPosition(QLayout * layout, int * rowPtr, QFormLayout::ItemRole * rolePtr) const
QTD_EXTERN QTD_EXPORT void qtd_QFormLayout_getLayoutPosition_QLayout_nativepointerint_nativepointerItemRole_const
(void* __this_nativeId,
 void* layout0,
 int* rowPtr1,
 QFormLayout::ItemRole* rolePtr2)
{
    QLayout*  __qt_layout0 = (QLayout* ) layout0;
    int*  __qt_rowPtr1 = (int* ) rowPtr1;
    QFormLayout::ItemRole*  __qt_rolePtr2 = (QFormLayout::ItemRole* ) rolePtr2;
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    __qt_this->getLayoutPosition((QLayout* )__qt_layout0, (int* )__qt_rowPtr1, (QFormLayout::ItemRole* )__qt_rolePtr2);

}

// QFormLayout::getWidgetPosition(QWidget * widget, int * rowPtr, QFormLayout::ItemRole * rolePtr) const
QTD_EXTERN QTD_EXPORT void qtd_QFormLayout_getWidgetPosition_QWidget_nativepointerint_nativepointerItemRole_const
(void* __this_nativeId,
 void* widget0,
 int* rowPtr1,
 QFormLayout::ItemRole* rolePtr2)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    int*  __qt_rowPtr1 = (int* ) rowPtr1;
    QFormLayout::ItemRole*  __qt_rolePtr2 = (QFormLayout::ItemRole* ) rolePtr2;
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    __qt_this->getWidgetPosition((QWidget* )__qt_widget0, (int* )__qt_rowPtr1, (QFormLayout::ItemRole* )__qt_rolePtr2);

}

// QFormLayout::horizontalSpacing() const
QTD_EXTERN QTD_EXPORT int qtd_QFormLayout_horizontalSpacing_const
(void* __this_nativeId)
{
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->horizontalSpacing();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFormLayout::insertRow(int row, QLayout * layout)
QTD_EXTERN QTD_EXPORT void qtd_QFormLayout_insertRow_int_QLayout
(void* __this_nativeId,
 int row0,
 void* layout1)
{
    QLayout*  __qt_layout1 = (QLayout* ) layout1;
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    __qt_this->insertRow((int )row0, (QLayout* )__qt_layout1);

}

// QFormLayout::insertRow(int row, QWidget * label, QLayout * field)
QTD_EXTERN QTD_EXPORT void qtd_QFormLayout_insertRow_int_QWidget_QLayout
(void* __this_nativeId,
 int row0,
 void* label1,
 void* field2)
{
    QWidget*  __qt_label1 = (QWidget* ) label1;
    QLayout*  __qt_field2 = (QLayout* ) field2;
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    __qt_this->insertRow((int )row0, (QWidget* )__qt_label1, (QLayout* )__qt_field2);

}

// QFormLayout::insertRow(int row, QWidget * label, QWidget * field)
QTD_EXTERN QTD_EXPORT void qtd_QFormLayout_insertRow_int_QWidget_QWidget
(void* __this_nativeId,
 int row0,
 void* label1,
 void* field2)
{
    QWidget*  __qt_label1 = (QWidget* ) label1;
    QWidget*  __qt_field2 = (QWidget* ) field2;
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    __qt_this->insertRow((int )row0, (QWidget* )__qt_label1, (QWidget* )__qt_field2);

}

// QFormLayout::insertRow(int row, QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QFormLayout_insertRow_int_QWidget
(void* __this_nativeId,
 int row0,
 void* widget1)
{
    QWidget*  __qt_widget1 = (QWidget* ) widget1;
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    __qt_this->insertRow((int )row0, (QWidget* )__qt_widget1);

}

// QFormLayout::insertRow(int row, const QString & labelText, QLayout * field)
QTD_EXTERN QTD_EXPORT void qtd_QFormLayout_insertRow_int_string_QLayout
(void* __this_nativeId,
 int row0,
 DArray labelText1,
 void* field2)
{
    QString __qt_labelText1 = QString::fromUtf8((const char *)labelText1.ptr, labelText1.length);
    QLayout*  __qt_field2 = (QLayout* ) field2;
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    __qt_this->insertRow((int )row0, (const QString& )__qt_labelText1, (QLayout* )__qt_field2);

}

// QFormLayout::insertRow(int row, const QString & labelText, QWidget * field)
QTD_EXTERN QTD_EXPORT void qtd_QFormLayout_insertRow_int_string_QWidget
(void* __this_nativeId,
 int row0,
 DArray labelText1,
 void* field2)
{
    QString __qt_labelText1 = QString::fromUtf8((const char *)labelText1.ptr, labelText1.length);
    QWidget*  __qt_field2 = (QWidget* ) field2;
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    __qt_this->insertRow((int )row0, (const QString& )__qt_labelText1, (QWidget* )__qt_field2);

}

// QFormLayout::itemAt(int row, QFormLayout::ItemRole role) const
QTD_EXTERN QTD_EXPORT void* qtd_QFormLayout_itemAt_int_ItemRole_const
(void* __this_nativeId,
 int row0,
 int role1)
{
    QFormLayout::ItemRole __qt_role1 = (QFormLayout::ItemRole) role1;
    QFormLayout *__qt_this = (QFormLayout *) __this_nativeId;
    QLayoutItem*  __qt_return_value = __qt_this->itemAt((int )row0, (QFormLayout::ItemRole )__qt_role1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QFormLayout::labelAlignment() const
QTD_EXTERN QTD_EXPORT int qtd_QFormLayout_labelAlignment_const
(void* __this_nativeId)
{
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->labelAlignment();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFormLayout::labelForField(QLayout * field) const
QTD_EXTERN QTD_EXPORT void* qtd_QFormLayout_labelForField_QLayout_const
(void* __this_nativeId,
 void* field0)
{
    QLayout*  __qt_field0 = (QLayout* ) field0;
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->labelForField((QLayout* )__qt_field0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QFormLayout::labelForField(QWidget * field) const
QTD_EXTERN QTD_EXPORT void* qtd_QFormLayout_labelForField_QWidget_const
(void* __this_nativeId,
 void* field0)
{
    QWidget*  __qt_field0 = (QWidget* ) field0;
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    QWidget*  __qt_return_value = __qt_this->labelForField((QWidget* )__qt_field0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QFormLayout::rowCount() const
QTD_EXTERN QTD_EXPORT int qtd_QFormLayout_rowCount_const
(void* __this_nativeId)
{
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->rowCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFormLayout::rowWrapPolicy() const
QTD_EXTERN QTD_EXPORT int qtd_QFormLayout_rowWrapPolicy_const
(void* __this_nativeId)
{
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->rowWrapPolicy();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFormLayout::setFieldGrowthPolicy(QFormLayout::FieldGrowthPolicy policy)
QTD_EXTERN QTD_EXPORT void qtd_QFormLayout_setFieldGrowthPolicy_FieldGrowthPolicy
(void* __this_nativeId,
 int policy0)
{
    QFormLayout::FieldGrowthPolicy __qt_policy0 = (QFormLayout::FieldGrowthPolicy) policy0;
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    __qt_this->setFieldGrowthPolicy((QFormLayout::FieldGrowthPolicy )__qt_policy0);

}

// QFormLayout::setFormAlignment(QFlags<Qt::AlignmentFlag> alignment)
QTD_EXTERN QTD_EXPORT void qtd_QFormLayout_setFormAlignment_Alignment
(void* __this_nativeId,
 int alignment0)
{
    QFlags<Qt::AlignmentFlag> __qt_alignment0 = (QFlags<Qt::AlignmentFlag>) alignment0;
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    __qt_this->setFormAlignment((Qt::Alignment )__qt_alignment0);

}

// QFormLayout::setHorizontalSpacing(int spacing)
QTD_EXTERN QTD_EXPORT void qtd_QFormLayout_setHorizontalSpacing_int
(void* __this_nativeId,
 int spacing0)
{
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    __qt_this->setHorizontalSpacing((int )spacing0);

}

// QFormLayout::setItem(int row, QFormLayout::ItemRole role, QLayoutItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QFormLayout_setItem_private_int_ItemRole_QLayoutItem
(void* __this_nativeId,
 int row0,
 int role1,
 void* item2)
{
    QFormLayout::ItemRole __qt_role1 = (QFormLayout::ItemRole) role1;
    QLayoutItem*  __qt_item2 = (QLayoutItem* ) item2;
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    __qt_this->setItem((int )row0, (QFormLayout::ItemRole )__qt_role1, (QLayoutItem* )__qt_item2);

}

// QFormLayout::setLabelAlignment(QFlags<Qt::AlignmentFlag> alignment)
QTD_EXTERN QTD_EXPORT void qtd_QFormLayout_setLabelAlignment_Alignment
(void* __this_nativeId,
 int alignment0)
{
    QFlags<Qt::AlignmentFlag> __qt_alignment0 = (QFlags<Qt::AlignmentFlag>) alignment0;
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    __qt_this->setLabelAlignment((Qt::Alignment )__qt_alignment0);

}

// QFormLayout::setLayout(int row, QFormLayout::ItemRole role, QLayout * layout)
QTD_EXTERN QTD_EXPORT void qtd_QFormLayout_setLayout_int_ItemRole_QLayout
(void* __this_nativeId,
 int row0,
 int role1,
 void* layout2)
{
    QFormLayout::ItemRole __qt_role1 = (QFormLayout::ItemRole) role1;
    QLayout*  __qt_layout2 = (QLayout* ) layout2;
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    __qt_this->setLayout((int )row0, (QFormLayout::ItemRole )__qt_role1, (QLayout* )__qt_layout2);

}

// QFormLayout::setRowWrapPolicy(QFormLayout::RowWrapPolicy policy)
QTD_EXTERN QTD_EXPORT void qtd_QFormLayout_setRowWrapPolicy_RowWrapPolicy
(void* __this_nativeId,
 int policy0)
{
    QFormLayout::RowWrapPolicy __qt_policy0 = (QFormLayout::RowWrapPolicy) policy0;
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    __qt_this->setRowWrapPolicy((QFormLayout::RowWrapPolicy )__qt_policy0);

}

// QFormLayout::setSpacing(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QFormLayout_setSpacing_int
(void* __this_nativeId,
 int arg__1)
{
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    __qt_this->setSpacing((int )arg__1);

}

// QFormLayout::setVerticalSpacing(int spacing)
QTD_EXTERN QTD_EXPORT void qtd_QFormLayout_setVerticalSpacing_int
(void* __this_nativeId,
 int spacing0)
{
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    __qt_this->setVerticalSpacing((int )spacing0);

}

// QFormLayout::setWidget(int row, QFormLayout::ItemRole role, QWidget * widget)
QTD_EXTERN QTD_EXPORT void qtd_QFormLayout_setWidget_int_ItemRole_QWidget
(void* __this_nativeId,
 int row0,
 int role1,
 void* widget2)
{
    QFormLayout::ItemRole __qt_role1 = (QFormLayout::ItemRole) role1;
    QWidget*  __qt_widget2 = (QWidget* ) widget2;
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    __qt_this->setWidget((int )row0, (QFormLayout::ItemRole )__qt_role1, (QWidget* )__qt_widget2);

}

// QFormLayout::spacing() const
QTD_EXTERN QTD_EXPORT int qtd_QFormLayout_spacing_const
(void* __this_nativeId)
{
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->spacing();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFormLayout::verticalSpacing() const
QTD_EXTERN QTD_EXPORT int qtd_QFormLayout_verticalSpacing_const
(void* __this_nativeId)
{
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->verticalSpacing();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFormLayout::addItem(QLayoutItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QFormLayout_addItem_QLayoutItem
(void* __this_nativeId,
 void* item0)
{
    QLayoutItem*  __qt_item0 = (QLayoutItem* ) item0;
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_addItem((QLayoutItem* )__qt_item0, __do_static_call);

}

// QFormLayout::count() const
QTD_EXTERN QTD_EXPORT int qtd_QFormLayout_count_const
(void* __this_nativeId)
{
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_count(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFormLayout::expandingDirections() const
QTD_EXTERN QTD_EXPORT int qtd_QFormLayout_expandingDirections_const
(void* __this_nativeId)
{
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_expandingDirections(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFormLayout::hasHeightForWidth() const
QTD_EXTERN QTD_EXPORT bool qtd_QFormLayout_hasHeightForWidth_const
(void* __this_nativeId)
{
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_hasHeightForWidth(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFormLayout::heightForWidth(int width) const
QTD_EXTERN QTD_EXPORT int qtd_QFormLayout_heightForWidth_int_const
(void* __this_nativeId,
 int width0)
{
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_heightForWidth((int )width0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFormLayout::invalidate()
QTD_EXTERN QTD_EXPORT void qtd_QFormLayout_invalidate
(void* __this_nativeId)
{
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_invalidate(__do_static_call);

}

// QFormLayout::itemAt(int index) const
QTD_EXTERN QTD_EXPORT void* qtd_QFormLayout_itemAt_int_const
(void* __this_nativeId,
 int index0)
{
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QLayoutItem*  __qt_return_value = __qt_this->__override_itemAt((int )index0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QFormLayout::minimumSize() const
QTD_EXTERN QTD_EXPORT void qtd_QFormLayout_minimumSize_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_minimumSize(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QFormLayout::setGeometry(const QRect & rect)
QTD_EXTERN QTD_EXPORT void qtd_QFormLayout_setGeometry_QRect
(void* __this_nativeId,
 QRect rect0)
{
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setGeometry((const QRect& )rect0, __do_static_call);

}

// QFormLayout::sizeHint() const
QTD_EXTERN QTD_EXPORT void qtd_QFormLayout_sizeHint_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint(__do_static_call);

    *__d_return_value = __qt_return_value;

}

// QFormLayout::takeAt(int index)
QTD_EXTERN QTD_EXPORT void* qtd_QFormLayout_takeAt_int
(void* __this_nativeId,
 int index0)
{
    QFormLayout_QtDShell *__qt_this = (QFormLayout_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QLayoutItem*  __qt_return_value = __qt_this->__override_takeAt((int )index0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QFormLayout_staticMetaObject() {
    return (void*)&QFormLayout::staticMetaObject;
}


