#include <QVariant>
#include <qabstractitemmodel.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qitemselectionmodel.h>
#include <qlist.h>
#include <qobject.h>
#include <qvariant.h>

#include "QItemSelectionModel_shell.h"
#include <iostream>
#include <qitemselectionmodel.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QItemSelectionModelEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QItemSelectionModelEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QItemSelectionModel_createEntity(void *nativeId, void* dId)
{
    new QItemSelectionModelEntity((QObject*)nativeId, dId);
}

QItemSelectionModel_QtDShell::QItemSelectionModel_QtDShell(void *d_ptr, QAbstractItemModel*  model0)
    : QItemSelectionModel(model0),
      QObjectLink(this, d_ptr)
{
}

QItemSelectionModel_QtDShell::QItemSelectionModel_QtDShell(void *d_ptr, QAbstractItemModel*  model0, QObject*  parent1)
    : QItemSelectionModel(model0, parent1),
      QObjectLink(this, d_ptr)
{
}

QItemSelectionModel_QtDShell::~QItemSelectionModel_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QItemSelectionModel_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QItemSelectionModel::metaObject();
}

int QItemSelectionModel_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QItemSelectionModel::qt_metacall(_c, _id, _a);
}

int QItemSelectionModel_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QItemSelectionModel::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QItemSelectionModel_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QItemSelectionModel_QtDShell *__qt_this = (QItemSelectionModel_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QItemSelectionModel_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QItemSelectionModel_clear_dispatch, (void *dId))
QTD_FUNC(GUI, QItemSelectionModel_clear_dispatch)
void QItemSelectionModel_QtDShell::clear()
{
    qtd_QItemSelectionModel_clear_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QItemSelectionModel_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QItemSelectionModel_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QItemSelectionModel_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QItemSelectionModel_reset_dispatch, (void *dId))
QTD_FUNC(GUI, QItemSelectionModel_reset_dispatch)
void QItemSelectionModel_QtDShell::reset()
{
    qtd_QItemSelectionModel_reset_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QItemSelectionModel_select_QItemSelection_SelectionFlags_dispatch, (void *dId, void* selection0, int command1))
QTD_FUNC(GUI, QItemSelectionModel_select_QItemSelection_SelectionFlags_dispatch)
void QItemSelectionModel_QtDShell::select(const QItemSelection&  selection0, QItemSelectionModel::SelectionFlags  command1)
{
    qtd_QItemSelectionModel_select_QItemSelection_SelectionFlags_dispatch(QObjectLink::getLink(this)->dId, &(QItemSelection& )selection0, (QItemSelectionModel::SelectionFlags )command1);
}

QTD_FUNC_DECL(GUI, void, QItemSelectionModel_select_QModelIndex_SelectionFlags_dispatch, (void *dId, QModelIndexAccessor* index0, int command1))
QTD_FUNC(GUI, QItemSelectionModel_select_QModelIndex_SelectionFlags_dispatch)
void QItemSelectionModel_QtDShell::select(const QModelIndex&  index0, QItemSelectionModel::SelectionFlags  command1)
{
    qtd_QItemSelectionModel_select_QModelIndex_SelectionFlags_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (QItemSelectionModel::SelectionFlags )command1);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QItemSelectionModel_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QItemSelectionModel_initCallBacks(VoidFunc *virts) {
    qtd_QItemSelectionModel_clear_dispatch = (qtd_QItemSelectionModel_clear_dispatch_t) virts[0];
    qtd_QItemSelectionModel_reset_dispatch = (qtd_QItemSelectionModel_reset_dispatch_t) virts[1];
    qtd_QItemSelectionModel_select_QItemSelection_SelectionFlags_dispatch = (qtd_QItemSelectionModel_select_QItemSelection_SelectionFlags_dispatch_t) virts[2];
    qtd_QItemSelectionModel_select_QModelIndex_SelectionFlags_dispatch = (qtd_QItemSelectionModel_select_QModelIndex_SelectionFlags_dispatch_t) virts[3];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QItemSelectionModel_QtDShell::__public_emitSelectionChanged(const QItemSelection&  newSelection0, const QItemSelection&  oldSelection1)
{
    QItemSelectionModel::emitSelectionChanged((const QItemSelection& )newSelection0, (const QItemSelection& )oldSelection1);
}

QObject*  QItemSelectionModel_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QItemSelectionModel_QtDShell::__public_currentChanged(const QModelIndex&  current0, const QModelIndex&  previous1)
{
    QItemSelectionModel::currentChanged((const QModelIndex& )current0, (const QModelIndex& )previous1);
}

void QItemSelectionModel_QtDShell::__public_currentColumnChanged(const QModelIndex&  current0, const QModelIndex&  previous1)
{
    QItemSelectionModel::currentColumnChanged((const QModelIndex& )current0, (const QModelIndex& )previous1);
}

void QItemSelectionModel_QtDShell::__public_currentRowChanged(const QModelIndex&  current0, const QModelIndex&  previous1)
{
    QItemSelectionModel::currentRowChanged((const QModelIndex& )current0, (const QModelIndex& )previous1);
}

void QItemSelectionModel_QtDShell::__public_selectionChanged(const QItemSelection&  selected0, const QItemSelection&  deselected1)
{
    QItemSelectionModel::selectionChanged((const QItemSelection& )selected0, (const QItemSelection& )deselected1);
}

// Write virtual function overries used to decide on static/virtual calls
void QItemSelectionModel_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QItemSelectionModel_QtDShell::__override_clear(bool static_call)
{
    if (static_call) {
        QItemSelectionModel::clear();
    } else {
        clear();
    }
}

void QItemSelectionModel_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QItemSelectionModel_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QItemSelectionModel_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QItemSelectionModel_QtDShell::__override_reset(bool static_call)
{
    if (static_call) {
        QItemSelectionModel::reset();
    } else {
        reset();
    }
}

void QItemSelectionModel_QtDShell::__override_select(const QItemSelection&  selection0, int  command1, bool static_call)
{
    if (static_call) {
        QItemSelectionModel::select((const QItemSelection& )selection0, (QItemSelectionModel::SelectionFlags )command1);
    } else {
        select((const QItemSelection& )selection0, (QItemSelectionModel::SelectionFlags )command1);
    }
}

void QItemSelectionModel_QtDShell::__override_select(const QModelIndex&  index0, int  command1, bool static_call)
{
    if (static_call) {
        QItemSelectionModel::select((const QModelIndex& )index0, (QItemSelectionModel::SelectionFlags )command1);
    } else {
        select((const QModelIndex& )index0, (QItemSelectionModel::SelectionFlags )command1);
    }
}

void QItemSelectionModel_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// QItemSelectionModel::currentChanged(const QModelIndex & current, const QModelIndex & previous)
QTD_EXTERN QTD_EXPORT void qtd_QItemSelectionModel_currentChanged_QModelIndex_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor current0,
 QModelIndexAccessor previous1)
{
    QModelIndex __qt_current0 = qtd_to_QModelIndex(current0);
    QModelIndex __qt_previous1 = qtd_to_QModelIndex(previous1);
    QItemSelectionModel_QtDShell *__qt_this = (QItemSelectionModel_QtDShell *) __this_nativeId;
    __qt_this->__public_currentChanged((const QModelIndex& )__qt_current0, (const QModelIndex& )__qt_previous1);

}

// QItemSelectionModel::currentColumnChanged(const QModelIndex & current, const QModelIndex & previous)
QTD_EXTERN QTD_EXPORT void qtd_QItemSelectionModel_currentColumnChanged_QModelIndex_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor current0,
 QModelIndexAccessor previous1)
{
    QModelIndex __qt_current0 = qtd_to_QModelIndex(current0);
    QModelIndex __qt_previous1 = qtd_to_QModelIndex(previous1);
    QItemSelectionModel_QtDShell *__qt_this = (QItemSelectionModel_QtDShell *) __this_nativeId;
    __qt_this->__public_currentColumnChanged((const QModelIndex& )__qt_current0, (const QModelIndex& )__qt_previous1);

}

// QItemSelectionModel::currentRowChanged(const QModelIndex & current, const QModelIndex & previous)
QTD_EXTERN QTD_EXPORT void qtd_QItemSelectionModel_currentRowChanged_QModelIndex_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor current0,
 QModelIndexAccessor previous1)
{
    QModelIndex __qt_current0 = qtd_to_QModelIndex(current0);
    QModelIndex __qt_previous1 = qtd_to_QModelIndex(previous1);
    QItemSelectionModel_QtDShell *__qt_this = (QItemSelectionModel_QtDShell *) __this_nativeId;
    __qt_this->__public_currentRowChanged((const QModelIndex& )__qt_current0, (const QModelIndex& )__qt_previous1);

}

// QItemSelectionModel::selectionChanged(const QItemSelection & selected, const QItemSelection & deselected)
QTD_EXTERN QTD_EXPORT void qtd_QItemSelectionModel_selectionChanged_QItemSelection_QItemSelection
(void* __this_nativeId,
 void* selected0,
 void* deselected1)
{
    const QItemSelection&  __qt_selected0 = (const QItemSelection& ) *(QItemSelection *)selected0;
    const QItemSelection&  __qt_deselected1 = (const QItemSelection& ) *(QItemSelection *)deselected1;
    QItemSelectionModel_QtDShell *__qt_this = (QItemSelectionModel_QtDShell *) __this_nativeId;
    __qt_this->__public_selectionChanged((const QItemSelection& )__qt_selected0, (const QItemSelection& )__qt_deselected1);

}

// ---externC---
// QItemSelectionModel::QItemSelectionModel(QAbstractItemModel * model)
QTD_EXTERN QTD_EXPORT void* qtd_QItemSelectionModel_QItemSelectionModel_QAbstractItemModel
(void *d_ptr,
 void* model0)
{
    QAbstractItemModel*  __qt_model0 = (QAbstractItemModel* ) model0;
    QItemSelectionModel_QtDShell *__qt_this = new QItemSelectionModel_QtDShell(d_ptr, (QAbstractItemModel* )__qt_model0);
    return (void *) __qt_this;

}

// QItemSelectionModel::QItemSelectionModel(QAbstractItemModel * model, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QItemSelectionModel_QItemSelectionModel_QAbstractItemModel_QObject
(void *d_ptr,
 void* model0,
 void* parent1)
{
    QAbstractItemModel*  __qt_model0 = (QAbstractItemModel* ) model0;
    QObject*  __qt_parent1 = (QObject* ) parent1;
    QItemSelectionModel_QtDShell *__qt_this = new QItemSelectionModel_QtDShell(d_ptr, (QAbstractItemModel* )__qt_model0, (QObject* )__qt_parent1);
    return (void *) __qt_this;

}

// QItemSelectionModel::clearSelection()
QTD_EXTERN QTD_EXPORT void qtd_QItemSelectionModel_clearSelection
(void* __this_nativeId)
{
    QItemSelectionModel_QtDShell *__qt_this = (QItemSelectionModel_QtDShell *) __this_nativeId;
    __qt_this->clearSelection();

}

// QItemSelectionModel::columnIntersectsSelection(int column, const QModelIndex & parent_) const
QTD_EXTERN QTD_EXPORT bool qtd_QItemSelectionModel_columnIntersectsSelection_int_QModelIndex_const
(void* __this_nativeId,
 int column0,
 QModelIndexAccessor parent1)
{
    QModelIndex __qt_parent1 = qtd_to_QModelIndex(parent1);
    QItemSelectionModel_QtDShell *__qt_this = (QItemSelectionModel_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->columnIntersectsSelection((int )column0, (const QModelIndex& )__qt_parent1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemSelectionModel::currentIndex() const
QTD_EXTERN QTD_EXPORT void qtd_QItemSelectionModel_currentIndex_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value)
{
    QItemSelectionModel_QtDShell *__qt_this = (QItemSelectionModel_QtDShell *) __this_nativeId;
    QModelIndex  __qt_return_value = __qt_this->currentIndex();

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QItemSelectionModel::emitSelectionChanged(const QItemSelection & newSelection, const QItemSelection & oldSelection)
QTD_EXTERN QTD_EXPORT void qtd_QItemSelectionModel_emitSelectionChanged_QItemSelection_QItemSelection
(void* __this_nativeId,
 void* newSelection0,
 void* oldSelection1)
{
    const QItemSelection&  __qt_newSelection0 = (const QItemSelection& ) *(QItemSelection *)newSelection0;
    const QItemSelection&  __qt_oldSelection1 = (const QItemSelection& ) *(QItemSelection *)oldSelection1;
    QItemSelectionModel_QtDShell *__qt_this = (QItemSelectionModel_QtDShell *) __this_nativeId;
    __qt_this->__public_emitSelectionChanged((const QItemSelection& )__qt_newSelection0, (const QItemSelection& )__qt_oldSelection1);

}

// QItemSelectionModel::hasSelection() const
QTD_EXTERN QTD_EXPORT bool qtd_QItemSelectionModel_hasSelection_const
(void* __this_nativeId)
{
    QItemSelectionModel_QtDShell *__qt_this = (QItemSelectionModel_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasSelection();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemSelectionModel::isColumnSelected(int column, const QModelIndex & parent_) const
QTD_EXTERN QTD_EXPORT bool qtd_QItemSelectionModel_isColumnSelected_int_QModelIndex_const
(void* __this_nativeId,
 int column0,
 QModelIndexAccessor parent1)
{
    QModelIndex __qt_parent1 = qtd_to_QModelIndex(parent1);
    QItemSelectionModel_QtDShell *__qt_this = (QItemSelectionModel_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isColumnSelected((int )column0, (const QModelIndex& )__qt_parent1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemSelectionModel::isRowSelected(int row, const QModelIndex & parent_) const
QTD_EXTERN QTD_EXPORT bool qtd_QItemSelectionModel_isRowSelected_int_QModelIndex_const
(void* __this_nativeId,
 int row0,
 QModelIndexAccessor parent1)
{
    QModelIndex __qt_parent1 = qtd_to_QModelIndex(parent1);
    QItemSelectionModel_QtDShell *__qt_this = (QItemSelectionModel_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isRowSelected((int )row0, (const QModelIndex& )__qt_parent1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemSelectionModel::isSelected(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT bool qtd_QItemSelectionModel_isSelected_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QItemSelectionModel_QtDShell *__qt_this = (QItemSelectionModel_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isSelected((const QModelIndex& )__qt_index0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemSelectionModel::model() const
QTD_EXTERN QTD_EXPORT void* qtd_QItemSelectionModel_model_const
(void* __this_nativeId)
{
    QItemSelectionModel_QtDShell *__qt_this = (QItemSelectionModel_QtDShell *) __this_nativeId;
    const QAbstractItemModel*  __qt_return_value = __qt_this->model();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QItemSelectionModel::rowIntersectsSelection(int row, const QModelIndex & parent_) const
QTD_EXTERN QTD_EXPORT bool qtd_QItemSelectionModel_rowIntersectsSelection_int_QModelIndex_const
(void* __this_nativeId,
 int row0,
 QModelIndexAccessor parent1)
{
    QModelIndex __qt_parent1 = qtd_to_QModelIndex(parent1);
    QItemSelectionModel_QtDShell *__qt_this = (QItemSelectionModel_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->rowIntersectsSelection((int )row0, (const QModelIndex& )__qt_parent1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QItemSelectionModel::selectedColumns(int row) const
QTD_EXTERN QTD_EXPORT void qtd_QItemSelectionModel_selectedColumns_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int row0)
{
    QItemSelectionModel_QtDShell *__qt_this = (QItemSelectionModel_QtDShell *) __this_nativeId;
    QList<QModelIndex >  __qt_return_value = __qt_this->selectedColumns((int )row0);

QList<QModelIndex > &__d_return_value_tmp = (*(QList<QModelIndex > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QItemSelectionModel::selectedIndexes() const
QTD_EXTERN QTD_EXPORT void qtd_QItemSelectionModel_selectedIndexes_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QItemSelectionModel_QtDShell *__qt_this = (QItemSelectionModel_QtDShell *) __this_nativeId;
    QList<QModelIndex >  __qt_return_value = __qt_this->selectedIndexes();

QList<QModelIndex > &__d_return_value_tmp = (*(QList<QModelIndex > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QItemSelectionModel::selectedRows(int column) const
QTD_EXTERN QTD_EXPORT void qtd_QItemSelectionModel_selectedRows_int_const
(void* __this_nativeId,
 void* __d_return_value,
 int column0)
{
    QItemSelectionModel_QtDShell *__qt_this = (QItemSelectionModel_QtDShell *) __this_nativeId;
    QList<QModelIndex >  __qt_return_value = __qt_this->selectedRows((int )column0);

QList<QModelIndex > &__d_return_value_tmp = (*(QList<QModelIndex > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QItemSelectionModel::selection() const
QTD_EXTERN QTD_EXPORT void* qtd_QItemSelectionModel_selection_const
(void* __this_nativeId)
{
    QItemSelectionModel_QtDShell *__qt_this = (QItemSelectionModel_QtDShell *) __this_nativeId;
    const QItemSelection  __qt_return_value = __qt_this->selection();

    void* __d_return_value = (void*) new QItemSelection(__qt_return_value);

    return __d_return_value;
}

// QItemSelectionModel::setCurrentIndex(const QModelIndex & index, QFlags<QItemSelectionModel::SelectionFlag> command)
QTD_EXTERN QTD_EXPORT void qtd_QItemSelectionModel_setCurrentIndex_QModelIndex_SelectionFlags
(void* __this_nativeId,
 QModelIndexAccessor index0,
 int command1)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QFlags<QItemSelectionModel::SelectionFlag> __qt_command1 = (QFlags<QItemSelectionModel::SelectionFlag>) command1;
    QItemSelectionModel_QtDShell *__qt_this = (QItemSelectionModel_QtDShell *) __this_nativeId;
    __qt_this->setCurrentIndex((const QModelIndex& )__qt_index0, (QItemSelectionModel::SelectionFlags )__qt_command1);

}

// QItemSelectionModel::clear()
QTD_EXTERN QTD_EXPORT void qtd_QItemSelectionModel_clear
(void* __this_nativeId)
{
    QItemSelectionModel_QtDShell *__qt_this = (QItemSelectionModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_clear(__do_static_call);

}

// QItemSelectionModel::reset()
QTD_EXTERN QTD_EXPORT void qtd_QItemSelectionModel_reset
(void* __this_nativeId)
{
    QItemSelectionModel_QtDShell *__qt_this = (QItemSelectionModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_reset(__do_static_call);

}

// QItemSelectionModel::select(const QItemSelection & selection, QFlags<QItemSelectionModel::SelectionFlag> command)
QTD_EXTERN QTD_EXPORT void qtd_QItemSelectionModel_select_QItemSelection_SelectionFlags
(void* __this_nativeId,
 void* selection0,
 int command1)
{
    const QItemSelection&  __qt_selection0 = (const QItemSelection& ) *(QItemSelection *)selection0;
    QFlags<QItemSelectionModel::SelectionFlag> __qt_command1 = (QFlags<QItemSelectionModel::SelectionFlag>) command1;
    QItemSelectionModel_QtDShell *__qt_this = (QItemSelectionModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_select((const QItemSelection& )__qt_selection0, (QItemSelectionModel::SelectionFlags )__qt_command1, __do_static_call);

}

// QItemSelectionModel::select(const QModelIndex & index, QFlags<QItemSelectionModel::SelectionFlag> command)
QTD_EXTERN QTD_EXPORT void qtd_QItemSelectionModel_select_QModelIndex_SelectionFlags
(void* __this_nativeId,
 QModelIndexAccessor index0,
 int command1)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QFlags<QItemSelectionModel::SelectionFlag> __qt_command1 = (QFlags<QItemSelectionModel::SelectionFlag>) command1;
    QItemSelectionModel_QtDShell *__qt_this = (QItemSelectionModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_select((const QModelIndex& )__qt_index0, (QItemSelectionModel::SelectionFlags )__qt_command1, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QItemSelectionModel_staticMetaObject() {
    return (void*)&QItemSelectionModel::staticMetaObject;
}


