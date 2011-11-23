#include <QVariant>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qstyleoption.h>
#include <qvariant.h>
#include <qwidget.h>

#include "QAbstractItemDelegate_shell.h"
#include <iostream>
#include <qabstractitemdelegate.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QAbstractItemDelegateEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QAbstractItemDelegateEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemDelegate_createEntity(void *nativeId, void* dId)
{
    new QAbstractItemDelegateEntity((QObject*)nativeId, dId);
}

QAbstractItemDelegate_QtDShell::QAbstractItemDelegate_QtDShell(void *d_ptr, QObject*  parent0)
    : QAbstractItemDelegate(parent0),
      QObjectLink(this, d_ptr)
{
}

QAbstractItemDelegate_QtDShell::~QAbstractItemDelegate_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QAbstractItemDelegate_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QAbstractItemDelegate::metaObject();
}

int QAbstractItemDelegate_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QAbstractItemDelegate::qt_metacall(_c, _id, _a);
}

int QAbstractItemDelegate_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QAbstractItemDelegate::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QAbstractItemDelegate_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QAbstractItemDelegate_QtDShell *__qt_this = (QAbstractItemDelegate_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QAbstractItemDelegate_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemDelegate_createEditor_QWidget_QStyleOptionViewItem_QModelIndex_const_dispatch, (void *dId, void* parent0, void* option1, QModelIndexAccessor* index2))
QTD_FUNC(GUI, QAbstractItemDelegate_createEditor_QWidget_QStyleOptionViewItem_QModelIndex_const_dispatch)
QWidget*  QAbstractItemDelegate_QtDShell::createEditor(QWidget*  parent0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2) const
{
    return (QWidget*) qtd_QAbstractItemDelegate_createEditor_QWidget_QStyleOptionViewItem_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )parent0, &(QStyleOptionViewItem& )option1, &qtd_from_QModelIndex(index2));
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QAbstractItemDelegate_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemDelegate_editorEvent_QEvent_QAbstractItemModel_QStyleOptionViewItem_QModelIndex_dispatch, (void *dId, void* event0, void* model1, void* option2, QModelIndexAccessor* index3))
QTD_FUNC(GUI, QAbstractItemDelegate_editorEvent_QEvent_QAbstractItemModel_QStyleOptionViewItem_QModelIndex_dispatch)
bool  QAbstractItemDelegate_QtDShell::editorEvent(QEvent*  event0, QAbstractItemModel*  model1, const QStyleOptionViewItem&  option2, const QModelIndex&  index3)
{
    return qtd_QAbstractItemDelegate_editorEvent_QEvent_QAbstractItemModel_QStyleOptionViewItem_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0, (QAbstractItemModel* )model1, &(QStyleOptionViewItem& )option2, &qtd_from_QModelIndex(index3));
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QAbstractItemDelegate_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QAbstractItemDelegate_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemDelegate_paint_QPainter_QStyleOptionViewItem_QModelIndex_const_dispatch, (void *dId, void* painter0, void* option1, QModelIndexAccessor* index2))
QTD_FUNC(GUI, QAbstractItemDelegate_paint_QPainter_QStyleOptionViewItem_QModelIndex_const_dispatch)
void QAbstractItemDelegate_QtDShell::paint(QPainter*  painter0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2) const
{
    qtd_QAbstractItemDelegate_paint_QPainter_QStyleOptionViewItem_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, (QPainter* )painter0, &(QStyleOptionViewItem& )option1, &qtd_from_QModelIndex(index2));
}

QTD_FUNC_DECL(GUI, void, QAbstractItemDelegate_setEditorData_QWidget_QModelIndex_const_dispatch, (void *dId, void* editor0, QModelIndexAccessor* index1))
QTD_FUNC(GUI, QAbstractItemDelegate_setEditorData_QWidget_QModelIndex_const_dispatch)
void QAbstractItemDelegate_QtDShell::setEditorData(QWidget*  editor0, const QModelIndex&  index1) const
{
    qtd_QAbstractItemDelegate_setEditorData_QWidget_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )editor0, &qtd_from_QModelIndex(index1));
}

QTD_FUNC_DECL(GUI, void, QAbstractItemDelegate_setModelData_QWidget_QAbstractItemModel_QModelIndex_const_dispatch, (void *dId, void* editor0, void* model1, QModelIndexAccessor* index2))
QTD_FUNC(GUI, QAbstractItemDelegate_setModelData_QWidget_QAbstractItemModel_QModelIndex_const_dispatch)
void QAbstractItemDelegate_QtDShell::setModelData(QWidget*  editor0, QAbstractItemModel*  model1, const QModelIndex&  index2) const
{
    qtd_QAbstractItemDelegate_setModelData_QWidget_QAbstractItemModel_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )editor0, (QAbstractItemModel* )model1, &qtd_from_QModelIndex(index2));
}

QTD_FUNC_DECL(GUI, void, QAbstractItemDelegate_sizeHint_QStyleOptionViewItem_QModelIndex_const_dispatch, (void *dId, QSize *__d_return_value, void* option0, QModelIndexAccessor* index1))
QTD_FUNC(GUI, QAbstractItemDelegate_sizeHint_QStyleOptionViewItem_QModelIndex_const_dispatch)
QSize  QAbstractItemDelegate_QtDShell::sizeHint(const QStyleOptionViewItem&  option0, const QModelIndex&  index1) const
{
    QSize __d_return_value;
    qtd_QAbstractItemDelegate_sizeHint_QStyleOptionViewItem_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &(QStyleOptionViewItem& )option0, &qtd_from_QModelIndex(index1));
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QAbstractItemDelegate_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemDelegate_updateEditorGeometry_QWidget_QStyleOptionViewItem_QModelIndex_const_dispatch, (void *dId, void* editor0, void* option1, QModelIndexAccessor* index2))
QTD_FUNC(GUI, QAbstractItemDelegate_updateEditorGeometry_QWidget_QStyleOptionViewItem_QModelIndex_const_dispatch)
void QAbstractItemDelegate_QtDShell::updateEditorGeometry(QWidget*  editor0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2) const
{
    qtd_QAbstractItemDelegate_updateEditorGeometry_QWidget_QStyleOptionViewItem_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, (QWidget* )editor0, &(QStyleOptionViewItem& )option1, &qtd_from_QModelIndex(index2));
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemDelegate_initCallBacks(VoidFunc *virts) {
    qtd_QAbstractItemDelegate_createEditor_QWidget_QStyleOptionViewItem_QModelIndex_const_dispatch = (qtd_QAbstractItemDelegate_createEditor_QWidget_QStyleOptionViewItem_QModelIndex_const_dispatch_t) virts[0];
    qtd_QAbstractItemDelegate_editorEvent_QEvent_QAbstractItemModel_QStyleOptionViewItem_QModelIndex_dispatch = (qtd_QAbstractItemDelegate_editorEvent_QEvent_QAbstractItemModel_QStyleOptionViewItem_QModelIndex_dispatch_t) virts[1];
    qtd_QAbstractItemDelegate_paint_QPainter_QStyleOptionViewItem_QModelIndex_const_dispatch = (qtd_QAbstractItemDelegate_paint_QPainter_QStyleOptionViewItem_QModelIndex_const_dispatch_t) virts[2];
    qtd_QAbstractItemDelegate_setEditorData_QWidget_QModelIndex_const_dispatch = (qtd_QAbstractItemDelegate_setEditorData_QWidget_QModelIndex_const_dispatch_t) virts[3];
    qtd_QAbstractItemDelegate_setModelData_QWidget_QAbstractItemModel_QModelIndex_const_dispatch = (qtd_QAbstractItemDelegate_setModelData_QWidget_QAbstractItemModel_QModelIndex_const_dispatch_t) virts[4];
    qtd_QAbstractItemDelegate_sizeHint_QStyleOptionViewItem_QModelIndex_const_dispatch = (qtd_QAbstractItemDelegate_sizeHint_QStyleOptionViewItem_QModelIndex_const_dispatch_t) virts[5];
    qtd_QAbstractItemDelegate_updateEditorGeometry_QWidget_QStyleOptionViewItem_QModelIndex_const_dispatch = (qtd_QAbstractItemDelegate_updateEditorGeometry_QWidget_QStyleOptionViewItem_QModelIndex_const_dispatch_t) virts[6];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QAbstractItemDelegate_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QAbstractItemDelegate_QtDShell::__public_closeEditor(QWidget*  editor0, int  hint1)
{
    QAbstractItemDelegate::closeEditor((QWidget* )editor0, (QAbstractItemDelegate::EndEditHint )hint1);
}

void QAbstractItemDelegate_QtDShell::__public_commitData(QWidget*  editor0)
{
    QAbstractItemDelegate::commitData((QWidget* )editor0);
}

void QAbstractItemDelegate_QtDShell::__public_sizeHintChanged(const QModelIndex&  arg__1)
{
    QAbstractItemDelegate::sizeHintChanged((const QModelIndex& )arg__1);
}

// Write virtual function overries used to decide on static/virtual calls
void QAbstractItemDelegate_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

QWidget*  QAbstractItemDelegate_QtDShell::__override_createEditor(QWidget*  parent0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2, bool static_call) const
{
    if (static_call) {
        return QAbstractItemDelegate::createEditor((QWidget* )parent0, (const QStyleOptionViewItem& )option1, (const QModelIndex& )index2);
    } else {
        return createEditor((QWidget* )parent0, (const QStyleOptionViewItem& )option1, (const QModelIndex& )index2);
    }
}

void QAbstractItemDelegate_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QAbstractItemDelegate_QtDShell::__override_editorEvent(QEvent*  event0, QAbstractItemModel*  model1, const QStyleOptionViewItem&  option2, const QModelIndex&  index3, bool static_call)
{
    if (static_call) {
        return QAbstractItemDelegate::editorEvent((QEvent* )event0, (QAbstractItemModel* )model1, (const QStyleOptionViewItem& )option2, (const QModelIndex& )index3);
    } else {
        return editorEvent((QEvent* )event0, (QAbstractItemModel* )model1, (const QStyleOptionViewItem& )option2, (const QModelIndex& )index3);
    }
}

bool  QAbstractItemDelegate_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QAbstractItemDelegate_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QAbstractItemDelegate_QtDShell::__override_paint(QPainter*  painter0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2, bool static_call) const
{
    if (static_call) {
        return;
    } else {
        paint((QPainter* )painter0, (const QStyleOptionViewItem& )option1, (const QModelIndex& )index2);
    }
}

void QAbstractItemDelegate_QtDShell::__override_setEditorData(QWidget*  editor0, const QModelIndex&  index1, bool static_call) const
{
    if (static_call) {
        QAbstractItemDelegate::setEditorData((QWidget* )editor0, (const QModelIndex& )index1);
    } else {
        setEditorData((QWidget* )editor0, (const QModelIndex& )index1);
    }
}

void QAbstractItemDelegate_QtDShell::__override_setModelData(QWidget*  editor0, QAbstractItemModel*  model1, const QModelIndex&  index2, bool static_call) const
{
    if (static_call) {
        QAbstractItemDelegate::setModelData((QWidget* )editor0, (QAbstractItemModel* )model1, (const QModelIndex& )index2);
    } else {
        setModelData((QWidget* )editor0, (QAbstractItemModel* )model1, (const QModelIndex& )index2);
    }
}

QSize  QAbstractItemDelegate_QtDShell::__override_sizeHint(const QStyleOptionViewItem&  option0, const QModelIndex&  index1, bool static_call) const
{
    if (static_call) {
        return QSize();
    } else {
        return sizeHint((const QStyleOptionViewItem& )option0, (const QModelIndex& )index1);
    }
}

void QAbstractItemDelegate_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

void QAbstractItemDelegate_QtDShell::__override_updateEditorGeometry(QWidget*  editor0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2, bool static_call) const
{
    if (static_call) {
        QAbstractItemDelegate::updateEditorGeometry((QWidget* )editor0, (const QStyleOptionViewItem& )option1, (const QModelIndex& )index2);
    } else {
        updateEditorGeometry((QWidget* )editor0, (const QStyleOptionViewItem& )option1, (const QModelIndex& )index2);
    }
}

// QAbstractItemDelegate::closeEditor(QWidget * editor, QAbstractItemDelegate::EndEditHint hint)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemDelegate_closeEditor_QWidget_EndEditHint
(void* __this_nativeId,
 void* editor0,
 int hint1)
{
    QWidget*  __qt_editor0 = (QWidget* ) editor0;
    QAbstractItemDelegate::EndEditHint __qt_hint1 = (QAbstractItemDelegate::EndEditHint) hint1;
    QAbstractItemDelegate_QtDShell *__qt_this = (QAbstractItemDelegate_QtDShell *) __this_nativeId;
    __qt_this->__public_closeEditor((QWidget* )__qt_editor0, (QAbstractItemDelegate::EndEditHint )__qt_hint1);

}

// QAbstractItemDelegate::commitData(QWidget * editor)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemDelegate_commitData_QWidget
(void* __this_nativeId,
 void* editor0)
{
    QWidget*  __qt_editor0 = (QWidget* ) editor0;
    QAbstractItemDelegate_QtDShell *__qt_this = (QAbstractItemDelegate_QtDShell *) __this_nativeId;
    __qt_this->__public_commitData((QWidget* )__qt_editor0);

}

// QAbstractItemDelegate::sizeHintChanged(const QModelIndex & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemDelegate_sizeHintChanged_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor arg__1)
{
    QModelIndex __qt_arg__1 = qtd_to_QModelIndex(arg__1);
    QAbstractItemDelegate_QtDShell *__qt_this = (QAbstractItemDelegate_QtDShell *) __this_nativeId;
    __qt_this->__public_sizeHintChanged((const QModelIndex& )__qt_arg__1);

}

// ---externC---
// QAbstractItemDelegate::QAbstractItemDelegate(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractItemDelegate_QAbstractItemDelegate_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QAbstractItemDelegate_QtDShell *__qt_this = new QAbstractItemDelegate_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QAbstractItemDelegate::helpEvent(QHelpEvent * event, QAbstractItemView * view, const QStyleOptionViewItem & option, const QModelIndex & index)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractItemDelegate_helpEvent_QHelpEvent_QAbstractItemView_QStyleOptionViewItem_QModelIndex
(void* __this_nativeId,
 void* event0,
 void* view1,
 void* option2,
 QModelIndexAccessor index3)
{
    QHelpEvent*  __qt_event0 = (QHelpEvent* ) event0;
    QAbstractItemView*  __qt_view1 = (QAbstractItemView* ) view1;
    const QStyleOptionViewItem&  __qt_option2 = (const QStyleOptionViewItem& ) *(QStyleOptionViewItem *)option2;
    QModelIndex __qt_index3 = qtd_to_QModelIndex(index3);
    QAbstractItemDelegate_QtDShell *__qt_this = (QAbstractItemDelegate_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->helpEvent((QHelpEvent* )__qt_event0, (QAbstractItemView* )__qt_view1, (const QStyleOptionViewItem& )__qt_option2, (const QModelIndex& )__qt_index3);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemDelegate::createEditor(QWidget * parent_, const QStyleOptionViewItem & option, const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractItemDelegate_createEditor_QWidget_QStyleOptionViewItem_QModelIndex_const
(void* __this_nativeId,
 void* parent0,
 void* option1,
 QModelIndexAccessor index2)
{
    QWidget*  __qt_parent0 = (QWidget* ) parent0;
    const QStyleOptionViewItem&  __qt_option1 = (const QStyleOptionViewItem& ) *(QStyleOptionViewItem *)option1;
    QModelIndex __qt_index2 = qtd_to_QModelIndex(index2);
    QAbstractItemDelegate_QtDShell *__qt_this = (QAbstractItemDelegate_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QWidget*  __qt_return_value = __qt_this->__override_createEditor((QWidget* )__qt_parent0, (const QStyleOptionViewItem& )__qt_option1, (const QModelIndex& )__qt_index2, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAbstractItemDelegate::editorEvent(QEvent * event, QAbstractItemModel * model, const QStyleOptionViewItem & option, const QModelIndex & index)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractItemDelegate_editorEvent_QEvent_QAbstractItemModel_QStyleOptionViewItem_QModelIndex
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
    QAbstractItemDelegate_QtDShell *__qt_this = (QAbstractItemDelegate_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_editorEvent((QEvent* )__qt_event0, (QAbstractItemModel* )__qt_model1, (const QStyleOptionViewItem& )__qt_option2, (const QModelIndex& )__qt_index3, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemDelegate::paint(QPainter * painter, const QStyleOptionViewItem & option, const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemDelegate_paint_QPainter_QStyleOptionViewItem_QModelIndex_const
(void* __this_nativeId,
 void* painter0,
 void* option1,
 QModelIndexAccessor index2)
{
    QPainter*  __qt_painter0 = (QPainter* ) painter0;
    const QStyleOptionViewItem&  __qt_option1 = (const QStyleOptionViewItem& ) *(QStyleOptionViewItem *)option1;
    QModelIndex __qt_index2 = qtd_to_QModelIndex(index2);
    QAbstractItemDelegate_QtDShell *__qt_this = (QAbstractItemDelegate_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_paint((QPainter* )__qt_painter0, (const QStyleOptionViewItem& )__qt_option1, (const QModelIndex& )__qt_index2, __do_static_call);

}

// QAbstractItemDelegate::setEditorData(QWidget * editor, const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemDelegate_setEditorData_QWidget_QModelIndex_const
(void* __this_nativeId,
 void* editor0,
 QModelIndexAccessor index1)
{
    QWidget*  __qt_editor0 = (QWidget* ) editor0;
    QModelIndex __qt_index1 = qtd_to_QModelIndex(index1);
    QAbstractItemDelegate_QtDShell *__qt_this = (QAbstractItemDelegate_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setEditorData((QWidget* )__qt_editor0, (const QModelIndex& )__qt_index1, __do_static_call);

}

// QAbstractItemDelegate::setModelData(QWidget * editor, QAbstractItemModel * model, const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemDelegate_setModelData_QWidget_QAbstractItemModel_QModelIndex_const
(void* __this_nativeId,
 void* editor0,
 void* model1,
 QModelIndexAccessor index2)
{
    QWidget*  __qt_editor0 = (QWidget* ) editor0;
    QAbstractItemModel*  __qt_model1 = (QAbstractItemModel* ) model1;
    QModelIndex __qt_index2 = qtd_to_QModelIndex(index2);
    QAbstractItemDelegate_QtDShell *__qt_this = (QAbstractItemDelegate_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setModelData((QWidget* )__qt_editor0, (QAbstractItemModel* )__qt_model1, (const QModelIndex& )__qt_index2, __do_static_call);

}

// QAbstractItemDelegate::sizeHint(const QStyleOptionViewItem & option, const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemDelegate_sizeHint_QStyleOptionViewItem_QModelIndex_const
(void* __this_nativeId,
 QSize * __d_return_value,
 void* option0,
 QModelIndexAccessor index1)
{
    const QStyleOptionViewItem&  __qt_option0 = (const QStyleOptionViewItem& ) *(QStyleOptionViewItem *)option0;
    QModelIndex __qt_index1 = qtd_to_QModelIndex(index1);
    QAbstractItemDelegate_QtDShell *__qt_this = (QAbstractItemDelegate_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_sizeHint((const QStyleOptionViewItem& )__qt_option0, (const QModelIndex& )__qt_index1, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QAbstractItemDelegate::updateEditorGeometry(QWidget * editor, const QStyleOptionViewItem & option, const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemDelegate_updateEditorGeometry_QWidget_QStyleOptionViewItem_QModelIndex_const
(void* __this_nativeId,
 void* editor0,
 void* option1,
 QModelIndexAccessor index2)
{
    QWidget*  __qt_editor0 = (QWidget* ) editor0;
    const QStyleOptionViewItem&  __qt_option1 = (const QStyleOptionViewItem& ) *(QStyleOptionViewItem *)option1;
    QModelIndex __qt_index2 = qtd_to_QModelIndex(index2);
    QAbstractItemDelegate_QtDShell *__qt_this = (QAbstractItemDelegate_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_updateEditorGeometry((QWidget* )__qt_editor0, (const QStyleOptionViewItem& )__qt_option1, (const QModelIndex& )__qt_index2, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QAbstractItemDelegate_staticMetaObject() {
    return (void*)&QAbstractItemDelegate::staticMetaObject;
}


