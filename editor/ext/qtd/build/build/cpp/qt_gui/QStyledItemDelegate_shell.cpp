#include <QVariant>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qitemeditorfactory.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qpainter.h>
#include <qstyleditemdelegate.h>
#include <qstyleoption.h>
#include <qvariant.h>
#include <qwidget.h>

#include "QStyledItemDelegate_shell.h"
#include <iostream>
#include <qstyleditemdelegate.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QStyledItemDelegateEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QStyledItemDelegateEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QStyledItemDelegate_createEntity(void *nativeId, void* dId)
{
    new QStyledItemDelegateEntity((QObject*)nativeId, dId);
}

QStyledItemDelegate_QtDShell::QStyledItemDelegate_QtDShell(void *d_ptr, QObject*  parent0)
    : QStyledItemDelegate(parent0),
      QObjectLink(this, d_ptr)
{
}

QStyledItemDelegate_QtDShell::~QStyledItemDelegate_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QStyledItemDelegate_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QStyledItemDelegate::metaObject();
}

int QStyledItemDelegate_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QStyledItemDelegate::qt_metacall(_c, _id, _a);
}

int QStyledItemDelegate_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QStyledItemDelegate::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QStyledItemDelegate_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QStyledItemDelegate_QtDShell *__qt_this = (QStyledItemDelegate_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QStyledItemDelegate_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemDelegate_createEditor_QWidget_QStyleOptionViewItem_QModelIndex_const_dispatch, (void *dId, void* parent0, void* option1, QModelIndexAccessor* index2))
QWidget*  QStyledItemDelegate_QtDShell::createEditor(QWidget*  parent0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2) const
{
    return (QWidget*) qtd_QAbstractItemDelegate_createEditor_QWidget_QStyleOptionViewItem_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )parent0, &(QStyleOptionViewItem& )option1, &qtd_from_QModelIndex(index2));
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QStyledItemDelegate_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QStyledItemDelegate_displayText_QVariant_QLocale_const_dispatch, (void *dId, DArray* ret_str, void* value0, void* locale1))
QTD_FUNC(GUI, QStyledItemDelegate_displayText_QVariant_QLocale_const_dispatch)
QString  QStyledItemDelegate_QtDShell::displayText(const QVariant&  value0, const QLocale&  locale1) const
{
    DArray ret_str;
    qtd_QStyledItemDelegate_displayText_QVariant_QLocale_const_dispatch(QObjectLink::getLink(this)->dId, &ret_str, &(QVariant& )value0, &(QLocale& )locale1);
    return QString::fromUtf8((const char*) ret_str.ptr, ret_str.length);
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemDelegate_editorEvent_QEvent_QAbstractItemModel_QStyleOptionViewItem_QModelIndex_dispatch, (void *dId, void* event0, void* model1, void* option2, QModelIndexAccessor* index3))
bool  QStyledItemDelegate_QtDShell::editorEvent(QEvent*  event0, QAbstractItemModel*  model1, const QStyleOptionViewItem&  option2, const QModelIndex&  index3)
{
    return qtd_QAbstractItemDelegate_editorEvent_QEvent_QAbstractItemModel_QStyleOptionViewItem_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0, (QAbstractItemModel* )model1, &(QStyleOptionViewItem& )option2, &qtd_from_QModelIndex(index3));
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QStyledItemDelegate_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* object0, void* event1))
bool  QStyledItemDelegate_QtDShell::eventFilter(QObject*  object0, QEvent*  event1)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )object0, (QEvent* )event1);
}

QTD_FUNC_DECL(GUI, void, QStyledItemDelegate_initStyleOption_nativepointerQStyleOptionViewItem_QModelIndex_const_dispatch, (void *dId, void* option0, QModelIndexAccessor* index1))
QTD_FUNC(GUI, QStyledItemDelegate_initStyleOption_nativepointerQStyleOptionViewItem_QModelIndex_const_dispatch)
void QStyledItemDelegate_QtDShell::initStyleOption(QStyleOptionViewItem*  option0, const QModelIndex&  index1) const
{
    qtd_QStyledItemDelegate_initStyleOption_nativepointerQStyleOptionViewItem_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, (QStyleOptionViewItem* )option0, &qtd_from_QModelIndex(index1));
}

QTD_FUNC_DECL(GUI, void, QAbstractItemDelegate_paint_QPainter_QStyleOptionViewItem_QModelIndex_const_dispatch, (void *dId, void* painter0, void* option1, QModelIndexAccessor* index2))
void QStyledItemDelegate_QtDShell::paint(QPainter*  painter0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2) const
{
    qtd_QAbstractItemDelegate_paint_QPainter_QStyleOptionViewItem_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, (QPainter* )painter0, &(QStyleOptionViewItem& )option1, &qtd_from_QModelIndex(index2));
}

QTD_FUNC_DECL(GUI, void, QAbstractItemDelegate_setEditorData_QWidget_QModelIndex_const_dispatch, (void *dId, void* editor0, QModelIndexAccessor* index1))
void QStyledItemDelegate_QtDShell::setEditorData(QWidget*  editor0, const QModelIndex&  index1) const
{
    qtd_QAbstractItemDelegate_setEditorData_QWidget_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )editor0, &qtd_from_QModelIndex(index1));
}

QTD_FUNC_DECL(GUI, void, QAbstractItemDelegate_setModelData_QWidget_QAbstractItemModel_QModelIndex_const_dispatch, (void *dId, void* editor0, void* model1, QModelIndexAccessor* index2))
void QStyledItemDelegate_QtDShell::setModelData(QWidget*  editor0, QAbstractItemModel*  model1, const QModelIndex&  index2) const
{
    qtd_QAbstractItemDelegate_setModelData_QWidget_QAbstractItemModel_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )editor0, (QAbstractItemModel* )model1, &qtd_from_QModelIndex(index2));
}

QTD_FUNC_DECL(GUI, void, QAbstractItemDelegate_sizeHint_QStyleOptionViewItem_QModelIndex_const_dispatch, (void *dId, QSize *__d_return_value, void* option0, QModelIndexAccessor* index1))
QSize  QStyledItemDelegate_QtDShell::sizeHint(const QStyleOptionViewItem&  option0, const QModelIndex&  index1) const
{
    QSize __d_return_value;
    qtd_QAbstractItemDelegate_sizeHint_QStyleOptionViewItem_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &(QStyleOptionViewItem& )option0, &qtd_from_QModelIndex(index1));
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QStyledItemDelegate_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemDelegate_updateEditorGeometry_QWidget_QStyleOptionViewItem_QModelIndex_const_dispatch, (void *dId, void* editor0, void* option1, QModelIndexAccessor* index2))
void QStyledItemDelegate_QtDShell::updateEditorGeometry(QWidget*  editor0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2) const
{
    qtd_QAbstractItemDelegate_updateEditorGeometry_QWidget_QStyleOptionViewItem_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )editor0, &(QStyleOptionViewItem& )option1, &qtd_from_QModelIndex(index2));
}

QTD_EXTERN QTD_EXPORT void qtd_QStyledItemDelegate_initCallBacks(VoidFunc *virts) {
    qtd_QStyledItemDelegate_displayText_QVariant_QLocale_const_dispatch = (qtd_QStyledItemDelegate_displayText_QVariant_QLocale_const_dispatch_t) virts[0];
    qtd_QStyledItemDelegate_initStyleOption_nativepointerQStyleOptionViewItem_QModelIndex_const_dispatch = (qtd_QStyledItemDelegate_initStyleOption_nativepointerQStyleOptionViewItem_QModelIndex_const_dispatch_t) virts[1];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QStyledItemDelegate_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QStyledItemDelegate_QtDShell::__public_closeEditor(QWidget*  editor0, int  hint1)
{
    QAbstractItemDelegate::closeEditor((QWidget* )editor0, (QAbstractItemDelegate::EndEditHint )hint1);
}

void QStyledItemDelegate_QtDShell::__public_commitData(QWidget*  editor0)
{
    QAbstractItemDelegate::commitData((QWidget* )editor0);
}

void QStyledItemDelegate_QtDShell::__public_sizeHintChanged(const QModelIndex&  arg__1)
{
    QAbstractItemDelegate::sizeHintChanged((const QModelIndex& )arg__1);
}

// Write virtual function overries used to decide on static/virtual calls
void QStyledItemDelegate_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

QWidget*  QStyledItemDelegate_QtDShell::__override_createEditor(QWidget*  parent0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2, bool static_call) const
{
    if (static_call) {
        return QStyledItemDelegate::createEditor((QWidget* )parent0, (const QStyleOptionViewItem& )option1, (const QModelIndex& )index2);
    } else {
        return createEditor((QWidget* )parent0, (const QStyleOptionViewItem& )option1, (const QModelIndex& )index2);
    }
}

void QStyledItemDelegate_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

QString  QStyledItemDelegate_QtDShell::__override_displayText(const QVariant&  value0, const QLocale&  locale1, bool static_call) const
{
    if (static_call) {
        return QStyledItemDelegate::displayText((const QVariant& )value0, (const QLocale& )locale1);
    } else {
        return displayText((const QVariant& )value0, (const QLocale& )locale1);
    }
}

bool  QStyledItemDelegate_QtDShell::__override_editorEvent(QEvent*  event0, QAbstractItemModel*  model1, const QStyleOptionViewItem&  option2, const QModelIndex&  index3, bool static_call)
{
    if (static_call) {
        return QStyledItemDelegate::editorEvent((QEvent* )event0, (QAbstractItemModel* )model1, (const QStyleOptionViewItem& )option2, (const QModelIndex& )index3);
    } else {
        return editorEvent((QEvent* )event0, (QAbstractItemModel* )model1, (const QStyleOptionViewItem& )option2, (const QModelIndex& )index3);
    }
}

bool  QStyledItemDelegate_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QStyledItemDelegate_QtDShell::__override_eventFilter(QObject*  object0, QEvent*  event1, bool static_call)
{
    if (static_call) {
        return QStyledItemDelegate::eventFilter((QObject* )object0, (QEvent* )event1);
    } else {
        return eventFilter((QObject* )object0, (QEvent* )event1);
    }
}

void QStyledItemDelegate_QtDShell::__override_initStyleOption(QStyleOptionViewItem*  option0, const QModelIndex&  index1, bool static_call) const
{
    if (static_call) {
        QStyledItemDelegate::initStyleOption((QStyleOptionViewItem* )option0, (const QModelIndex& )index1);
    } else {
        initStyleOption((QStyleOptionViewItem* )option0, (const QModelIndex& )index1);
    }
}

void QStyledItemDelegate_QtDShell::__override_paint(QPainter*  painter0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2, bool static_call) const
{
    if (static_call) {
        QStyledItemDelegate::paint((QPainter* )painter0, (const QStyleOptionViewItem& )option1, (const QModelIndex& )index2);
    } else {
        paint((QPainter* )painter0, (const QStyleOptionViewItem& )option1, (const QModelIndex& )index2);
    }
}

void QStyledItemDelegate_QtDShell::__override_setEditorData(QWidget*  editor0, const QModelIndex&  index1, bool static_call) const
{
    if (static_call) {
        QStyledItemDelegate::setEditorData((QWidget* )editor0, (const QModelIndex& )index1);
    } else {
        setEditorData((QWidget* )editor0, (const QModelIndex& )index1);
    }
}

void QStyledItemDelegate_QtDShell::__override_setModelData(QWidget*  editor0, QAbstractItemModel*  model1, const QModelIndex&  index2, bool static_call) const
{
    if (static_call) {
        QStyledItemDelegate::setModelData((QWidget* )editor0, (QAbstractItemModel* )model1, (const QModelIndex& )index2);
    } else {
        setModelData((QWidget* )editor0, (QAbstractItemModel* )model1, (const QModelIndex& )index2);
    }
}

QSize  QStyledItemDelegate_QtDShell::__override_sizeHint(const QStyleOptionViewItem&  option0, const QModelIndex&  index1, bool static_call) const
{
    if (static_call) {
        return QStyledItemDelegate::sizeHint((const QStyleOptionViewItem& )option0, (const QModelIndex& )index1);
    } else {
        return sizeHint((const QStyleOptionViewItem& )option0, (const QModelIndex& )index1);
    }
}

void QStyledItemDelegate_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QStyledItemDelegate_QtDShell::__override_updateEditorGeometry(QWidget*  editor0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2, bool static_call) const
{
    if (static_call) {
        QStyledItemDelegate::updateEditorGeometry((QWidget* )editor0, (const QStyleOptionViewItem& )option1, (const QModelIndex& )index2);
    } else {
        updateEditorGeometry((QWidget* )editor0, (const QStyleOptionViewItem& )option1, (const QModelIndex& )index2);
    }
}

// ---externC---
// QStyledItemDelegate::QStyledItemDelegate(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QStyledItemDelegate_QStyledItemDelegate_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QStyledItemDelegate_QtDShell *__qt_this = new QStyledItemDelegate_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QStyledItemDelegate::itemEditorFactory() const
QTD_EXTERN QTD_EXPORT void* qtd_QStyledItemDelegate_itemEditorFactory_const
(void* __this_nativeId)
{
    QStyledItemDelegate_QtDShell *__qt_this = (QStyledItemDelegate_QtDShell *) __this_nativeId;
    QItemEditorFactory*  __qt_return_value = __qt_this->itemEditorFactory();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QStyledItemDelegate::setItemEditorFactory(QItemEditorFactory * factory)
QTD_EXTERN QTD_EXPORT void qtd_QStyledItemDelegate_setItemEditorFactory_QItemEditorFactory
(void* __this_nativeId,
 void* factory0)
{
    QItemEditorFactory*  __qt_factory0 = (QItemEditorFactory* ) factory0;
    QStyledItemDelegate_QtDShell *__qt_this = (QStyledItemDelegate_QtDShell *) __this_nativeId;
    __qt_this->setItemEditorFactory((QItemEditorFactory* )__qt_factory0);

}

// QStyledItemDelegate::createEditor(QWidget * parent_, const QStyleOptionViewItem & option, const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void* qtd_QStyledItemDelegate_createEditor_QWidget_QStyleOptionViewItem_QModelIndex_const
(void* __this_nativeId,
 void* parent0,
 void* option1,
 QModelIndexAccessor index2)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    const QStyleOptionViewItem&  __qt_option1 = (const QStyleOptionViewItem& ) *(QStyleOptionViewItem *)option1;
    QModelIndex __qt_index2 = qtd_to_QModelIndex(index2);
    QStyledItemDelegate_QtDShell *__qt_this = (QStyledItemDelegate_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QWidget*  __qt_return_value = __qt_this->__override_createEditor((QWidget* )__qt_parent0, (const QStyleOptionViewItem& )__qt_option1, (const QModelIndex& )__qt_index2, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QStyledItemDelegate::displayText(const QVariant & value, const QLocale & locale) const
QTD_EXTERN QTD_EXPORT void qtd_QStyledItemDelegate_displayText_QVariant_QLocale_const
(void* __this_nativeId,
 void* __d_return_value,
 QVariant* value0,
 void* locale1)
{
    QVariant __qt_value0 = value0 == NULL ? QVariant() : QVariant(*value0);
    const QLocale&  __qt_locale1 = (const QLocale& ) *(QLocale *)locale1;
    QStyledItemDelegate_QtDShell *__qt_this = (QStyledItemDelegate_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QString  __qt_return_value = __qt_this->__override_displayText((const QVariant& )__qt_value0, (const QLocale& )__qt_locale1, __do_static_call);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QStyledItemDelegate::editorEvent(QEvent * event, QAbstractItemModel * model, const QStyleOptionViewItem & option, const QModelIndex & index)
QTD_EXTERN QTD_EXPORT bool qtd_QStyledItemDelegate_editorEvent_QEvent_QAbstractItemModel_QStyleOptionViewItem_QModelIndex
(void* __this_nativeId,
 void* event0,
 void* model1,
 void* option2,
 QModelIndexAccessor index3)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QAbstractItemModel*  __qt_model1 = (QAbstractItemModel* ) model1;
    const QStyleOptionViewItem&  __qt_option2 = (const QStyleOptionViewItem& ) *(QStyleOptionViewItem *)option2;
    QModelIndex __qt_index3 = qtd_to_QModelIndex(index3);
    QStyledItemDelegate_QtDShell *__qt_this = (QStyledItemDelegate_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_editorEvent((QEvent* )__qt_event0, (QAbstractItemModel* )__qt_model1, (const QStyleOptionViewItem& )__qt_option2, (const QModelIndex& )__qt_index3, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStyledItemDelegate::eventFilter(QObject * object, QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QStyledItemDelegate_eventFilter_QObject_QEvent
(void* __this_nativeId,
 void* object0,
 void* event1)
{
    QObject*  __qt_object0 = (QObject* ) object0;
    QEvent*  __qt_event1 = (QEvent* ) event1;
    QStyledItemDelegate_QtDShell *__qt_this = (QStyledItemDelegate_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_eventFilter((QObject* )__qt_object0, (QEvent* )__qt_event1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStyledItemDelegate::initStyleOption(QStyleOptionViewItem * option, const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QStyledItemDelegate_initStyleOption_nativepointerQStyleOptionViewItem_QModelIndex_const
(void* __this_nativeId,
 void* option0,
 QModelIndexAccessor index1)
{
    QStyleOptionViewItem*  __qt_option0 = (QStyleOptionViewItem* ) option0;
    QModelIndex __qt_index1 = qtd_to_QModelIndex(index1);
    QStyledItemDelegate_QtDShell *__qt_this = (QStyledItemDelegate_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_initStyleOption((QStyleOptionViewItem* )__qt_option0, (const QModelIndex& )__qt_index1, __do_static_call);

}

// QStyledItemDelegate::paint(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QStyledItemDelegate_paint_QPainter_QStyleOptionViewItem_QModelIndex_const
(void* __this_nativeId,
 void* painter0,
 void* option1,
 QModelIndexAccessor index2)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    const QStyleOptionViewItem&  __qt_option1 = (const QStyleOptionViewItem& ) *(QStyleOptionViewItem *)option1;
    QModelIndex __qt_index2 = qtd_to_QModelIndex(index2);
    QStyledItemDelegate_QtDShell *__qt_this = (QStyledItemDelegate_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paint((QPainter* )__qt_painter0, (const QStyleOptionViewItem& )__qt_option1, (const QModelIndex& )__qt_index2, __do_static_call);

}

// QStyledItemDelegate::setEditorData(QWidget * editor, const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QStyledItemDelegate_setEditorData_QWidget_QModelIndex_const
(void* __this_nativeId,
 void* editor0,
 QModelIndexAccessor index1)
{
    QWidget*  __qt_editor0 = (QWidget* ) editor0;
    QModelIndex __qt_index1 = qtd_to_QModelIndex(index1);
    QStyledItemDelegate_QtDShell *__qt_this = (QStyledItemDelegate_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setEditorData((QWidget* )__qt_editor0, (const QModelIndex& )__qt_index1, __do_static_call);

}

// QStyledItemDelegate::setModelData(QWidget * editor, QAbstractItemModel * model, const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QStyledItemDelegate_setModelData_QWidget_QAbstractItemModel_QModelIndex_const
(void* __this_nativeId,
 void* editor0,
 void* model1,
 QModelIndexAccessor index2)
{
    QWidget*  __qt_editor0 = (QWidget* ) editor0;
    QAbstractItemModel*  __qt_model1 = (QAbstractItemModel* ) model1;
    QModelIndex __qt_index2 = qtd_to_QModelIndex(index2);
    QStyledItemDelegate_QtDShell *__qt_this = (QStyledItemDelegate_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setModelData((QWidget* )__qt_editor0, (QAbstractItemModel* )__qt_model1, (const QModelIndex& )__qt_index2, __do_static_call);

}

// QStyledItemDelegate::sizeHint(const QStyleOptionViewItem & option, const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QStyledItemDelegate_sizeHint_QStyleOptionViewItem_QModelIndex_const
(void* __this_nativeId,
 QSize * __d_return_value,
 void* option0,
 QModelIndexAccessor index1)
{
    const QStyleOptionViewItem&  __qt_option0 = (const QStyleOptionViewItem& ) *(QStyleOptionViewItem *)option0;
    QModelIndex __qt_index1 = qtd_to_QModelIndex(index1);
    QStyledItemDelegate_QtDShell *__qt_this = (QStyledItemDelegate_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint((const QStyleOptionViewItem& )__qt_option0, (const QModelIndex& )__qt_index1, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QStyledItemDelegate::updateEditorGeometry(QWidget * editor, const QStyleOptionViewItem & option, const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QStyledItemDelegate_updateEditorGeometry_QWidget_QStyleOptionViewItem_QModelIndex_const
(void* __this_nativeId,
 void* editor0,
 void* option1,
 QModelIndexAccessor index2)
{
    QWidget*  __qt_editor0 = (QWidget* ) editor0;
    const QStyleOptionViewItem&  __qt_option1 = (const QStyleOptionViewItem& ) *(QStyleOptionViewItem *)option1;
    QModelIndex __qt_index2 = qtd_to_QModelIndex(index2);
    QStyledItemDelegate_QtDShell *__qt_this = (QStyledItemDelegate_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_updateEditorGeometry((QWidget* )__qt_editor0, (const QStyleOptionViewItem& )__qt_option1, (const QModelIndex& )__qt_index2, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QStyledItemDelegate_staticMetaObject() {
    return (void*)&QStyledItemDelegate::staticMetaObject;
}


