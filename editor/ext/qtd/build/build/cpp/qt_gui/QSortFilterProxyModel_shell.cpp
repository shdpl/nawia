#include <QItemSelection>
#include <QSize>
#include <QStringList>
#include <QVariant>
#include <qabstractitemmodel.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qitemselectionmodel.h>
#include <qlist.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qregexp.h>
#include <qsortfilterproxymodel.h>
#include <qstringlist.h>
#include <qvariant.h>

#include "QSortFilterProxyModel_shell.h"
#include <iostream>
#include <qsortfilterproxymodel.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QSortFilterProxyModelEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QSortFilterProxyModelEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QSortFilterProxyModel_createEntity(void *nativeId, void* dId)
{
    new QSortFilterProxyModelEntity((QObject*)nativeId, dId);
}

QSortFilterProxyModel_QtDShell::QSortFilterProxyModel_QtDShell(void *d_ptr, QObject*  parent0)
    : QSortFilterProxyModel(parent0),
      QObjectLink(this, d_ptr)
{
}

QSortFilterProxyModel_QtDShell::~QSortFilterProxyModel_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QSortFilterProxyModel_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QSortFilterProxyModel::metaObject();
}

int QSortFilterProxyModel_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QSortFilterProxyModel::qt_metacall(_c, _id, _a);
}

int QSortFilterProxyModel_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QSortFilterProxyModel::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QSortFilterProxyModel_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QAbstractItemModel_buddy_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, QModelIndexAccessor* index0))
QModelIndex  QSortFilterProxyModel_QtDShell::buddy(const QModelIndex&  index0) const
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemModel_buddy_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(index0));
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_canFetchMore_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* parent0))
bool  QSortFilterProxyModel_QtDShell::canFetchMore(const QModelIndex&  parent0) const
{
    return qtd_QAbstractItemModel_canFetchMore_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0));
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QSortFilterProxyModel_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemModel_columnCount_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* parent0))
int  QSortFilterProxyModel_QtDShell::columnCount(const QModelIndex&  parent0) const
{
    return qtd_QAbstractItemModel_columnCount_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0));
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QSortFilterProxyModel_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemModel_data_QModelIndex_int_const_dispatch, (void *dId, QModelIndexAccessor* index0, int role1))
QVariant  QSortFilterProxyModel_QtDShell::data(const QModelIndex&  index0, int  role1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QAbstractItemModel_data_QModelIndex_int_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (int )role1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex_dispatch, (void *dId, void* data0, int action1, int row2, int column3, QModelIndexAccessor* parent4))
bool  QSortFilterProxyModel_QtDShell::dropMimeData(const QMimeData*  data0, Qt::DropAction  action1, int  row2, int  column3, const QModelIndex&  parent4)
{
    return qtd_QAbstractItemModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, (QMimeData* )data0, (Qt::DropAction )action1, (int )row2, (int )column3, &qtd_from_QModelIndex(parent4));
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QSortFilterProxyModel_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QSortFilterProxyModel_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_fetchMore_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* parent0))
void QSortFilterProxyModel_QtDShell::fetchMore(const QModelIndex&  parent0)
{
    qtd_QAbstractItemModel_fetchMore_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0));
}

QTD_FUNC_DECL(GUI, bool, QSortFilterProxyModel_filterAcceptsColumn_int_QModelIndex_const_dispatch, (void *dId, int source_column0, QModelIndexAccessor* source_parent1))
QTD_FUNC(GUI, QSortFilterProxyModel_filterAcceptsColumn_int_QModelIndex_const_dispatch)
bool  QSortFilterProxyModel_QtDShell::filterAcceptsColumn(int  source_column0, const QModelIndex&  source_parent1) const
{
    return qtd_QSortFilterProxyModel_filterAcceptsColumn_int_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, (int )source_column0, &qtd_from_QModelIndex(source_parent1));
}

QTD_FUNC_DECL(GUI, bool, QSortFilterProxyModel_filterAcceptsRow_int_QModelIndex_const_dispatch, (void *dId, int source_row0, QModelIndexAccessor* source_parent1))
QTD_FUNC(GUI, QSortFilterProxyModel_filterAcceptsRow_int_QModelIndex_const_dispatch)
bool  QSortFilterProxyModel_QtDShell::filterAcceptsRow(int  source_row0, const QModelIndex&  source_parent1) const
{
    return qtd_QSortFilterProxyModel_filterAcceptsRow_int_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, (int )source_row0, &qtd_from_QModelIndex(source_parent1));
}

QTD_FUNC_DECL(GUI, int, QAbstractItemModel_flags_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* index0))
Qt::ItemFlags  QSortFilterProxyModel_QtDShell::flags(const QModelIndex&  index0) const
{
    return (QFlags<Qt::ItemFlag>) qtd_QAbstractItemModel_flags_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0));
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_hasChildren_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* parent0))
bool  QSortFilterProxyModel_QtDShell::hasChildren(const QModelIndex&  parent0) const
{
    return qtd_QAbstractItemModel_hasChildren_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0));
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemModel_headerData_int_Orientation_int_const_dispatch, (void *dId, int section0, int orientation1, int role2))
QVariant  QSortFilterProxyModel_QtDShell::headerData(int  section0, Qt::Orientation  orientation1, int  role2) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QAbstractItemModel_headerData_int_Orientation_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )section0, (Qt::Orientation )orientation1, (int )role2);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_index_int_int_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, int row0, int column1, QModelIndexAccessor* parent2))
QModelIndex  QSortFilterProxyModel_QtDShell::index(int  row0, int  column1, const QModelIndex&  parent2) const
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemModel_index_int_int_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, (int )row0, (int )column1, &qtd_from_QModelIndex(parent2));
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_insertColumns_int_int_QModelIndex_dispatch, (void *dId, int column0, int count1, QModelIndexAccessor* parent2))
bool  QSortFilterProxyModel_QtDShell::insertColumns(int  column0, int  count1, const QModelIndex&  parent2)
{
    return qtd_QAbstractItemModel_insertColumns_int_int_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, (int )column0, (int )count1, &qtd_from_QModelIndex(parent2));
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_insertRows_int_int_QModelIndex_dispatch, (void *dId, int row0, int count1, QModelIndexAccessor* parent2))
bool  QSortFilterProxyModel_QtDShell::insertRows(int  row0, int  count1, const QModelIndex&  parent2)
{
    return qtd_QAbstractItemModel_insertRows_int_int_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, (int )row0, (int )count1, &qtd_from_QModelIndex(parent2));
}

QTD_FUNC_DECL(GUI, bool, QSortFilterProxyModel_lessThan_QModelIndex_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* left0, QModelIndexAccessor* right1))
QTD_FUNC(GUI, QSortFilterProxyModel_lessThan_QModelIndex_QModelIndex_const_dispatch)
bool  QSortFilterProxyModel_QtDShell::lessThan(const QModelIndex&  left0, const QModelIndex&  right1) const
{
    return qtd_QSortFilterProxyModel_lessThan_QModelIndex_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(left0), &qtd_from_QModelIndex(right1));
}

QTD_FUNC_DECL(GUI, void, QAbstractProxyModel_mapFromSource_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, QModelIndexAccessor* sourceIndex0))
QModelIndex  QSortFilterProxyModel_QtDShell::mapFromSource(const QModelIndex&  sourceIndex0) const
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractProxyModel_mapFromSource_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(sourceIndex0));
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, void*, QAbstractProxyModel_mapSelectionFromSource_QItemSelection_const_dispatch, (void *dId, void* sourceSelection0))
QItemSelection  QSortFilterProxyModel_QtDShell::mapSelectionFromSource(const QItemSelection&  sourceSelection0) const
{
    QItemSelection *__qt_return_value = (QItemSelection*) qtd_QAbstractProxyModel_mapSelectionFromSource_QItemSelection_const_dispatch(QObjectLink::getLink(this)->dId, &(QItemSelection& )sourceSelection0);
    return QItemSelection(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void*, QAbstractProxyModel_mapSelectionToSource_QItemSelection_const_dispatch, (void *dId, void* proxySelection0))
QItemSelection  QSortFilterProxyModel_QtDShell::mapSelectionToSource(const QItemSelection&  proxySelection0) const
{
    QItemSelection *__qt_return_value = (QItemSelection*) qtd_QAbstractProxyModel_mapSelectionToSource_QItemSelection_const_dispatch(QObjectLink::getLink(this)->dId, &(QItemSelection& )proxySelection0);
    return QItemSelection(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QAbstractProxyModel_mapToSource_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, QModelIndexAccessor* proxyIndex0))
QModelIndex  QSortFilterProxyModel_QtDShell::mapToSource(const QModelIndex&  proxyIndex0) const
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractProxyModel_mapToSource_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(proxyIndex0));
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_match_QModelIndex_int_QVariant_int_MatchFlags_const_dispatch, (void *dId, void * __d_arr, QModelIndexAccessor* start0, int role1, void* value2, int hits3, int flags4))
QList<QModelIndex >  QSortFilterProxyModel_QtDShell::match(const QModelIndex&  start0, int  role1, const QVariant&  value2, int  hits3, Qt::MatchFlags  flags4) const
{
    QList<QModelIndex > __d_return_value;
    qtd_QAbstractItemModel_match_QModelIndex_int_QVariant_int_MatchFlags_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(start0), (int )role1, &(QVariant& )value2, (int )hits3, (Qt::MatchFlags )flags4);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemModel_mimeData_QList_const_dispatch, (void *dId, void* indexes0))
QMimeData*  QSortFilterProxyModel_QtDShell::mimeData(const QList<QModelIndex >&  indexes0) const
{
    return (QMimeData*) qtd_QAbstractItemModel_mimeData_QList_const_dispatch(QObjectLink::getLink(this)->dId, (void*)&indexes0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_mimeTypes_const_dispatch, (void *dId, void * __d_arr))
QStringList  QSortFilterProxyModel_QtDShell::mimeTypes() const
{
    QStringList __d_return_value;
    qtd_QAbstractItemModel_mimeTypes_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_parent_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, QModelIndexAccessor* child0))
QModelIndex  QSortFilterProxyModel_QtDShell::parent(const QModelIndex&  child0) const
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemModel_parent_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(child0));
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_removeColumns_int_int_QModelIndex_dispatch, (void *dId, int column0, int count1, QModelIndexAccessor* parent2))
bool  QSortFilterProxyModel_QtDShell::removeColumns(int  column0, int  count1, const QModelIndex&  parent2)
{
    return qtd_QAbstractItemModel_removeColumns_int_int_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, (int )column0, (int )count1, &qtd_from_QModelIndex(parent2));
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_removeRows_int_int_QModelIndex_dispatch, (void *dId, int row0, int count1, QModelIndexAccessor* parent2))
bool  QSortFilterProxyModel_QtDShell::removeRows(int  row0, int  count1, const QModelIndex&  parent2)
{
    return qtd_QAbstractItemModel_removeRows_int_int_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, (int )row0, (int )count1, &qtd_from_QModelIndex(parent2));
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_revert_dispatch, (void *dId))
void QSortFilterProxyModel_QtDShell::revert()
{
    qtd_QAbstractItemModel_revert_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemModel_rowCount_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* parent0))
int  QSortFilterProxyModel_QtDShell::rowCount(const QModelIndex&  parent0) const
{
    return qtd_QAbstractItemModel_rowCount_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0));
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_setData_QModelIndex_QVariant_int_dispatch, (void *dId, QModelIndexAccessor* index0, void* value1, int role2))
bool  QSortFilterProxyModel_QtDShell::setData(const QModelIndex&  index0, const QVariant&  value1, int  role2)
{
    return qtd_QAbstractItemModel_setData_QModelIndex_QVariant_int_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), &(QVariant& )value1, (int )role2);
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_setHeaderData_int_Orientation_QVariant_int_dispatch, (void *dId, int section0, int orientation1, void* value2, int role3))
bool  QSortFilterProxyModel_QtDShell::setHeaderData(int  section0, Qt::Orientation  orientation1, const QVariant&  value2, int  role3)
{
    return qtd_QAbstractItemModel_setHeaderData_int_Orientation_QVariant_int_dispatch(QObjectLink::getLink(this)->dId, (int )section0, (Qt::Orientation )orientation1, &(QVariant& )value2, (int )role3);
}

QTD_FUNC_DECL(GUI, void, QAbstractProxyModel_setSourceModel_QAbstractItemModel_dispatch, (void *dId, void* sourceModel0))
void QSortFilterProxyModel_QtDShell::setSourceModel(QAbstractItemModel*  sourceModel0)
{
    qtd_QAbstractProxyModel_setSourceModel_QAbstractItemModel_dispatch(QObjectLink::getLink(this)->dId, (QAbstractItemModel* )sourceModel0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_sort_int_SortOrder_dispatch, (void *dId, int column0, int order1))
void QSortFilterProxyModel_QtDShell::sort(int  column0, Qt::SortOrder  order1)
{
    qtd_QAbstractItemModel_sort_int_SortOrder_dispatch(QObjectLink::getLink(this)->dId, (int )column0, (Qt::SortOrder )order1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_span_QModelIndex_const_dispatch, (void *dId, QSize *__d_return_value, QModelIndexAccessor* index0))
QSize  QSortFilterProxyModel_QtDShell::span(const QModelIndex&  index0) const
{
    QSize __d_return_value;
    qtd_QAbstractItemModel_span_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(index0));
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_submit_dispatch, (void *dId))
bool  QSortFilterProxyModel_QtDShell::submit()
{
    return qtd_QAbstractItemModel_submit_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemModel_supportedDropActions_const_dispatch, (void *dId))
Qt::DropActions  QSortFilterProxyModel_QtDShell::supportedDropActions() const
{
    return (QFlags<Qt::DropAction>) qtd_QAbstractItemModel_supportedDropActions_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QSortFilterProxyModel_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QSortFilterProxyModel_initCallBacks(VoidFunc *virts) {
    qtd_QSortFilterProxyModel_filterAcceptsColumn_int_QModelIndex_const_dispatch = (qtd_QSortFilterProxyModel_filterAcceptsColumn_int_QModelIndex_const_dispatch_t) virts[0];
    qtd_QSortFilterProxyModel_filterAcceptsRow_int_QModelIndex_const_dispatch = (qtd_QSortFilterProxyModel_filterAcceptsRow_int_QModelIndex_const_dispatch_t) virts[1];
    qtd_QSortFilterProxyModel_lessThan_QModelIndex_QModelIndex_const_dispatch = (qtd_QSortFilterProxyModel_lessThan_QModelIndex_QModelIndex_const_dispatch_t) virts[2];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QSortFilterProxyModel_QtDShell::__public_beginInsertColumns(const QModelIndex&  parent0, int  first1, int  last2)
{
    QAbstractItemModel::beginInsertColumns((const QModelIndex& )parent0, (int )first1, (int )last2);
}

void QSortFilterProxyModel_QtDShell::__public_beginInsertRows(const QModelIndex&  parent0, int  first1, int  last2)
{
    QAbstractItemModel::beginInsertRows((const QModelIndex& )parent0, (int )first1, (int )last2);
}

bool  QSortFilterProxyModel_QtDShell::__public_beginMoveColumns(const QModelIndex&  sourceParent0, int  sourceFirst1, int  sourceLast2, const QModelIndex&  destinationParent3, int  destinationColumn4)
{
    return QAbstractItemModel::beginMoveColumns((const QModelIndex& )sourceParent0, (int )sourceFirst1, (int )sourceLast2, (const QModelIndex& )destinationParent3, (int )destinationColumn4);
}

bool  QSortFilterProxyModel_QtDShell::__public_beginMoveRows(const QModelIndex&  sourceParent0, int  sourceFirst1, int  sourceLast2, const QModelIndex&  destinationParent3, int  destinationRow4)
{
    return QAbstractItemModel::beginMoveRows((const QModelIndex& )sourceParent0, (int )sourceFirst1, (int )sourceLast2, (const QModelIndex& )destinationParent3, (int )destinationRow4);
}

void QSortFilterProxyModel_QtDShell::__public_beginRemoveColumns(const QModelIndex&  parent0, int  first1, int  last2)
{
    QAbstractItemModel::beginRemoveColumns((const QModelIndex& )parent0, (int )first1, (int )last2);
}

void QSortFilterProxyModel_QtDShell::__public_beginRemoveRows(const QModelIndex&  parent0, int  first1, int  last2)
{
    QAbstractItemModel::beginRemoveRows((const QModelIndex& )parent0, (int )first1, (int )last2);
}

void QSortFilterProxyModel_QtDShell::__public_beginResetModel()
{
    QAbstractItemModel::beginResetModel();
}

void QSortFilterProxyModel_QtDShell::__public_changePersistentIndex(const QModelIndex&  from0, const QModelIndex&  to1)
{
    QAbstractItemModel::changePersistentIndex((const QModelIndex& )from0, (const QModelIndex& )to1);
}

void QSortFilterProxyModel_QtDShell::__public_changePersistentIndexList(const QList<QModelIndex >&  from0, const QList<QModelIndex >&  to1)
{
    QAbstractItemModel::changePersistentIndexList((const QList<QModelIndex >& )from0, (const QList<QModelIndex >& )to1);
}

QModelIndex  QSortFilterProxyModel_QtDShell::__public_createIndex(int  row0, int  column1, int  id2) const
{
    return QAbstractItemModel::createIndex((int )row0, (int )column1, (int )id2);
}

QModelIndex  QSortFilterProxyModel_QtDShell::__public_createIndex(int  row0, int  column1, unsigned int  id2) const
{
    return QAbstractItemModel::createIndex((int )row0, (int )column1, (unsigned int )id2);
}

QModelIndex  QSortFilterProxyModel_QtDShell::__public_createIndex(int  row0, int  column1, void*  data2) const
{
    return QAbstractItemModel::createIndex((int )row0, (int )column1, (void* )data2);
}

bool  QSortFilterProxyModel_QtDShell::__public_decodeData(int  row0, int  column1, const QModelIndex&  parent2, QDataStream&  stream3)
{
    return QAbstractItemModel::decodeData((int )row0, (int )column1, (const QModelIndex& )parent2, (QDataStream& )stream3);
}

void QSortFilterProxyModel_QtDShell::__public_encodeData(const QList<QModelIndex >&  indexes0, QDataStream&  stream1) const
{
    QAbstractItemModel::encodeData((const QList<QModelIndex >& )indexes0, (QDataStream& )stream1);
}

void QSortFilterProxyModel_QtDShell::__public_endInsertColumns()
{
    QAbstractItemModel::endInsertColumns();
}

void QSortFilterProxyModel_QtDShell::__public_endInsertRows()
{
    QAbstractItemModel::endInsertRows();
}

void QSortFilterProxyModel_QtDShell::__public_endMoveColumns()
{
    QAbstractItemModel::endMoveColumns();
}

void QSortFilterProxyModel_QtDShell::__public_endMoveRows()
{
    QAbstractItemModel::endMoveRows();
}

void QSortFilterProxyModel_QtDShell::__public_endRemoveColumns()
{
    QAbstractItemModel::endRemoveColumns();
}

void QSortFilterProxyModel_QtDShell::__public_endRemoveRows()
{
    QAbstractItemModel::endRemoveRows();
}

void QSortFilterProxyModel_QtDShell::__public_endResetModel()
{
    QAbstractItemModel::endResetModel();
}

void QSortFilterProxyModel_QtDShell::__public_invalidateFilter()
{
    QSortFilterProxyModel::invalidateFilter();
}

QList<QModelIndex >  QSortFilterProxyModel_QtDShell::__public_persistentIndexList() const
{
    return QAbstractItemModel::persistentIndexList();
}

void QSortFilterProxyModel_QtDShell::__public_reset()
{
    QAbstractItemModel::reset();
}

QObject*  QSortFilterProxyModel_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QSortFilterProxyModel_QtDShell::__public_dataChanged(const QModelIndex&  topLeft0, const QModelIndex&  bottomRight1)
{
    QAbstractItemModel::dataChanged((const QModelIndex& )topLeft0, (const QModelIndex& )bottomRight1);
}

void QSortFilterProxyModel_QtDShell::__public_headerDataChanged(int  orientation0, int  first1, int  last2)
{
    QAbstractItemModel::headerDataChanged((Qt::Orientation )orientation0, (int )first1, (int )last2);
}

void QSortFilterProxyModel_QtDShell::__public_layoutAboutToBeChanged()
{
    QAbstractItemModel::layoutAboutToBeChanged();
}

void QSortFilterProxyModel_QtDShell::__public_layoutChanged()
{
    QAbstractItemModel::layoutChanged();
}

// Write virtual function overries used to decide on static/virtual calls
QModelIndex  QSortFilterProxyModel_QtDShell::__override_buddy(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QSortFilterProxyModel::buddy((const QModelIndex& )index0);
    } else {
        return buddy((const QModelIndex& )index0);
    }
}

bool  QSortFilterProxyModel_QtDShell::__override_canFetchMore(const QModelIndex&  parent0, bool static_call) const
{
    if (static_call) {
        return QSortFilterProxyModel::canFetchMore((const QModelIndex& )parent0);
    } else {
        return canFetchMore((const QModelIndex& )parent0);
    }
}

void QSortFilterProxyModel_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

int  QSortFilterProxyModel_QtDShell::__override_columnCount(const QModelIndex&  parent0, bool static_call) const
{
    if (static_call) {
        return QSortFilterProxyModel::columnCount((const QModelIndex& )parent0);
    } else {
        return columnCount((const QModelIndex& )parent0);
    }
}

void QSortFilterProxyModel_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

QVariant  QSortFilterProxyModel_QtDShell::__override_data(const QModelIndex&  index0, int  role1, bool static_call) const
{
    if (static_call) {
        return QSortFilterProxyModel::data((const QModelIndex& )index0, (int )role1);
    } else {
        return data((const QModelIndex& )index0, (int )role1);
    }
}

bool  QSortFilterProxyModel_QtDShell::__override_dropMimeData(const QMimeData*  data0, int  action1, int  row2, int  column3, const QModelIndex&  parent4, bool static_call)
{
    if (static_call) {
        return QSortFilterProxyModel::dropMimeData((const QMimeData* )data0, (Qt::DropAction )action1, (int )row2, (int )column3, (const QModelIndex& )parent4);
    } else {
        return dropMimeData((const QMimeData* )data0, (Qt::DropAction )action1, (int )row2, (int )column3, (const QModelIndex& )parent4);
    }
}

bool  QSortFilterProxyModel_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QSortFilterProxyModel_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QSortFilterProxyModel_QtDShell::__override_fetchMore(const QModelIndex&  parent0, bool static_call)
{
    if (static_call) {
        QSortFilterProxyModel::fetchMore((const QModelIndex& )parent0);
    } else {
        fetchMore((const QModelIndex& )parent0);
    }
}

bool  QSortFilterProxyModel_QtDShell::__override_filterAcceptsColumn(int  source_column0, const QModelIndex&  source_parent1, bool static_call) const
{
    if (static_call) {
        return QSortFilterProxyModel::filterAcceptsColumn((int )source_column0, (const QModelIndex& )source_parent1);
    } else {
        return filterAcceptsColumn((int )source_column0, (const QModelIndex& )source_parent1);
    }
}

bool  QSortFilterProxyModel_QtDShell::__override_filterAcceptsRow(int  source_row0, const QModelIndex&  source_parent1, bool static_call) const
{
    if (static_call) {
        return QSortFilterProxyModel::filterAcceptsRow((int )source_row0, (const QModelIndex& )source_parent1);
    } else {
        return filterAcceptsRow((int )source_row0, (const QModelIndex& )source_parent1);
    }
}

int  QSortFilterProxyModel_QtDShell::__override_flags(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QSortFilterProxyModel::flags((const QModelIndex& )index0);
    } else {
        return flags((const QModelIndex& )index0);
    }
}

bool  QSortFilterProxyModel_QtDShell::__override_hasChildren(const QModelIndex&  parent0, bool static_call) const
{
    if (static_call) {
        return QSortFilterProxyModel::hasChildren((const QModelIndex& )parent0);
    } else {
        return hasChildren((const QModelIndex& )parent0);
    }
}

QVariant  QSortFilterProxyModel_QtDShell::__override_headerData(int  section0, int  orientation1, int  role2, bool static_call) const
{
    if (static_call) {
        return QSortFilterProxyModel::headerData((int )section0, (Qt::Orientation )orientation1, (int )role2);
    } else {
        return headerData((int )section0, (Qt::Orientation )orientation1, (int )role2);
    }
}

QModelIndex  QSortFilterProxyModel_QtDShell::__override_index(int  row0, int  column1, const QModelIndex&  parent2, bool static_call) const
{
    if (static_call) {
        return QSortFilterProxyModel::index((int )row0, (int )column1, (const QModelIndex& )parent2);
    } else {
        return index((int )row0, (int )column1, (const QModelIndex& )parent2);
    }
}

bool  QSortFilterProxyModel_QtDShell::__override_insertColumns(int  column0, int  count1, const QModelIndex&  parent2, bool static_call)
{
    if (static_call) {
        return QSortFilterProxyModel::insertColumns((int )column0, (int )count1, (const QModelIndex& )parent2);
    } else {
        return insertColumns((int )column0, (int )count1, (const QModelIndex& )parent2);
    }
}

bool  QSortFilterProxyModel_QtDShell::__override_insertRows(int  row0, int  count1, const QModelIndex&  parent2, bool static_call)
{
    if (static_call) {
        return QSortFilterProxyModel::insertRows((int )row0, (int )count1, (const QModelIndex& )parent2);
    } else {
        return insertRows((int )row0, (int )count1, (const QModelIndex& )parent2);
    }
}

bool  QSortFilterProxyModel_QtDShell::__override_lessThan(const QModelIndex&  left0, const QModelIndex&  right1, bool static_call) const
{
    if (static_call) {
        return QSortFilterProxyModel::lessThan((const QModelIndex& )left0, (const QModelIndex& )right1);
    } else {
        return lessThan((const QModelIndex& )left0, (const QModelIndex& )right1);
    }
}

QModelIndex  QSortFilterProxyModel_QtDShell::__override_mapFromSource(const QModelIndex&  sourceIndex0, bool static_call) const
{
    if (static_call) {
        return QSortFilterProxyModel::mapFromSource((const QModelIndex& )sourceIndex0);
    } else {
        return mapFromSource((const QModelIndex& )sourceIndex0);
    }
}

QItemSelection  QSortFilterProxyModel_QtDShell::__override_mapSelectionFromSource(const QItemSelection&  sourceSelection0, bool static_call) const
{
    if (static_call) {
        return QSortFilterProxyModel::mapSelectionFromSource((const QItemSelection& )sourceSelection0);
    } else {
        return mapSelectionFromSource((const QItemSelection& )sourceSelection0);
    }
}

QItemSelection  QSortFilterProxyModel_QtDShell::__override_mapSelectionToSource(const QItemSelection&  proxySelection0, bool static_call) const
{
    if (static_call) {
        return QSortFilterProxyModel::mapSelectionToSource((const QItemSelection& )proxySelection0);
    } else {
        return mapSelectionToSource((const QItemSelection& )proxySelection0);
    }
}

QModelIndex  QSortFilterProxyModel_QtDShell::__override_mapToSource(const QModelIndex&  proxyIndex0, bool static_call) const
{
    if (static_call) {
        return QSortFilterProxyModel::mapToSource((const QModelIndex& )proxyIndex0);
    } else {
        return mapToSource((const QModelIndex& )proxyIndex0);
    }
}

QList<QModelIndex >  QSortFilterProxyModel_QtDShell::__override_match(const QModelIndex&  start0, int  role1, const QVariant&  value2, int  hits3, int  flags4, bool static_call) const
{
    if (static_call) {
        return QSortFilterProxyModel::match((const QModelIndex& )start0, (int )role1, (const QVariant& )value2, (int )hits3, (Qt::MatchFlags )flags4);
    } else {
        return match((const QModelIndex& )start0, (int )role1, (const QVariant& )value2, (int )hits3, (Qt::MatchFlags )flags4);
    }
}

QMimeData*  QSortFilterProxyModel_QtDShell::__override_mimeData(const QList<QModelIndex >&  indexes0, bool static_call) const
{
    if (static_call) {
        return QSortFilterProxyModel::mimeData((const QList<QModelIndex >& )indexes0);
    } else {
        return mimeData((const QList<QModelIndex >& )indexes0);
    }
}

QStringList  QSortFilterProxyModel_QtDShell::__override_mimeTypes(bool static_call) const
{
    if (static_call) {
        return QSortFilterProxyModel::mimeTypes();
    } else {
        return mimeTypes();
    }
}

QModelIndex  QSortFilterProxyModel_QtDShell::__override_parent(const QModelIndex&  child0, bool static_call) const
{
    if (static_call) {
        return QSortFilterProxyModel::parent((const QModelIndex& )child0);
    } else {
        return parent((const QModelIndex& )child0);
    }
}

bool  QSortFilterProxyModel_QtDShell::__override_removeColumns(int  column0, int  count1, const QModelIndex&  parent2, bool static_call)
{
    if (static_call) {
        return QSortFilterProxyModel::removeColumns((int )column0, (int )count1, (const QModelIndex& )parent2);
    } else {
        return removeColumns((int )column0, (int )count1, (const QModelIndex& )parent2);
    }
}

bool  QSortFilterProxyModel_QtDShell::__override_removeRows(int  row0, int  count1, const QModelIndex&  parent2, bool static_call)
{
    if (static_call) {
        return QSortFilterProxyModel::removeRows((int )row0, (int )count1, (const QModelIndex& )parent2);
    } else {
        return removeRows((int )row0, (int )count1, (const QModelIndex& )parent2);
    }
}

void QSortFilterProxyModel_QtDShell::__override_revert(bool static_call)
{
    if (static_call) {
        QAbstractProxyModel::revert();
    } else {
        revert();
    }
}

int  QSortFilterProxyModel_QtDShell::__override_rowCount(const QModelIndex&  parent0, bool static_call) const
{
    if (static_call) {
        return QSortFilterProxyModel::rowCount((const QModelIndex& )parent0);
    } else {
        return rowCount((const QModelIndex& )parent0);
    }
}

bool  QSortFilterProxyModel_QtDShell::__override_setData(const QModelIndex&  index0, const QVariant&  value1, int  role2, bool static_call)
{
    if (static_call) {
        return QSortFilterProxyModel::setData((const QModelIndex& )index0, (const QVariant& )value1, (int )role2);
    } else {
        return setData((const QModelIndex& )index0, (const QVariant& )value1, (int )role2);
    }
}

bool  QSortFilterProxyModel_QtDShell::__override_setHeaderData(int  section0, int  orientation1, const QVariant&  value2, int  role3, bool static_call)
{
    if (static_call) {
        return QSortFilterProxyModel::setHeaderData((int )section0, (Qt::Orientation )orientation1, (const QVariant& )value2, (int )role3);
    } else {
        return setHeaderData((int )section0, (Qt::Orientation )orientation1, (const QVariant& )value2, (int )role3);
    }
}

void QSortFilterProxyModel_QtDShell::__override_setSourceModel(QAbstractItemModel*  sourceModel0, bool static_call)
{
    if (static_call) {
        QSortFilterProxyModel::setSourceModel((QAbstractItemModel* )sourceModel0);
    } else {
        setSourceModel((QAbstractItemModel* )sourceModel0);
    }
}

void QSortFilterProxyModel_QtDShell::__override_sort(int  column0, int  order1, bool static_call)
{
    if (static_call) {
        QSortFilterProxyModel::sort((int )column0, (Qt::SortOrder )order1);
    } else {
        sort((int )column0, (Qt::SortOrder )order1);
    }
}

QSize  QSortFilterProxyModel_QtDShell::__override_span(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QSortFilterProxyModel::span((const QModelIndex& )index0);
    } else {
        return span((const QModelIndex& )index0);
    }
}

bool  QSortFilterProxyModel_QtDShell::__override_submit(bool static_call)
{
    if (static_call) {
        return QAbstractProxyModel::submit();
    } else {
        return submit();
    }
}

int  QSortFilterProxyModel_QtDShell::__override_supportedDropActions(bool static_call) const
{
    if (static_call) {
        return QSortFilterProxyModel::supportedDropActions();
    } else {
        return supportedDropActions();
    }
}

void QSortFilterProxyModel_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// ---externC---
// QSortFilterProxyModel::QSortFilterProxyModel(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QSortFilterProxyModel_QSortFilterProxyModel_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QSortFilterProxyModel_QtDShell *__qt_this = new QSortFilterProxyModel_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QSortFilterProxyModel::dynamicSortFilter() const
QTD_EXTERN QTD_EXPORT bool qtd_QSortFilterProxyModel_dynamicSortFilter_const
(void* __this_nativeId)
{
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->dynamicSortFilter();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSortFilterProxyModel::filterCaseSensitivity() const
QTD_EXTERN QTD_EXPORT int qtd_QSortFilterProxyModel_filterCaseSensitivity_const
(void* __this_nativeId)
{
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->filterCaseSensitivity();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSortFilterProxyModel::filterKeyColumn() const
QTD_EXTERN QTD_EXPORT int qtd_QSortFilterProxyModel_filterKeyColumn_const
(void* __this_nativeId)
{
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->filterKeyColumn();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSortFilterProxyModel::filterRegExp() const
QTD_EXTERN QTD_EXPORT void* qtd_QSortFilterProxyModel_filterRegExp_const
(void* __this_nativeId)
{
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    QRegExp  __qt_return_value = __qt_this->filterRegExp();

    void* __d_return_value = (void*) new QRegExp(__qt_return_value);

    return __d_return_value;
}

// QSortFilterProxyModel::filterRole() const
QTD_EXTERN QTD_EXPORT int qtd_QSortFilterProxyModel_filterRole_const
(void* __this_nativeId)
{
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->filterRole();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSortFilterProxyModel::invalidate()
QTD_EXTERN QTD_EXPORT void qtd_QSortFilterProxyModel_invalidate
(void* __this_nativeId)
{
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    __qt_this->invalidate();

}

// QSortFilterProxyModel::invalidateFilter()
QTD_EXTERN QTD_EXPORT void qtd_QSortFilterProxyModel_invalidateFilter
(void* __this_nativeId)
{
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    __qt_this->__public_invalidateFilter();

}

// QSortFilterProxyModel::isSortLocaleAware() const
QTD_EXTERN QTD_EXPORT bool qtd_QSortFilterProxyModel_isSortLocaleAware_const
(void* __this_nativeId)
{
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isSortLocaleAware();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSortFilterProxyModel::setDynamicSortFilter(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QSortFilterProxyModel_setDynamicSortFilter_bool
(void* __this_nativeId,
 bool enable0)
{
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    __qt_this->setDynamicSortFilter((bool )enable0);

}

// QSortFilterProxyModel::setFilterCaseSensitivity(Qt::CaseSensitivity cs)
QTD_EXTERN QTD_EXPORT void qtd_QSortFilterProxyModel_setFilterCaseSensitivity_CaseSensitivity
(void* __this_nativeId,
 int cs0)
{
    Qt::CaseSensitivity __qt_cs0 = (Qt::CaseSensitivity) cs0;
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    __qt_this->setFilterCaseSensitivity((Qt::CaseSensitivity )__qt_cs0);

}

// QSortFilterProxyModel::setFilterFixedString(const QString & pattern)
QTD_EXTERN QTD_EXPORT void qtd_QSortFilterProxyModel_setFilterFixedString_string
(void* __this_nativeId,
 DArray pattern0)
{
    QString __qt_pattern0 = QString::fromUtf8((const char *)pattern0.ptr, pattern0.length);
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    __qt_this->setFilterFixedString((const QString& )__qt_pattern0);

}

// QSortFilterProxyModel::setFilterKeyColumn(int column)
QTD_EXTERN QTD_EXPORT void qtd_QSortFilterProxyModel_setFilterKeyColumn_int
(void* __this_nativeId,
 int column0)
{
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    __qt_this->setFilterKeyColumn((int )column0);

}

// QSortFilterProxyModel::setFilterRegExp(const QRegExp & regExp)
QTD_EXTERN QTD_EXPORT void qtd_QSortFilterProxyModel_setFilterRegExp_QRegExp
(void* __this_nativeId,
 void* regExp0)
{
    const QRegExp&  __qt_regExp0 = (const QRegExp& ) *(QRegExp *)regExp0;
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    __qt_this->setFilterRegExp((const QRegExp& )__qt_regExp0);

}

// QSortFilterProxyModel::setFilterRegExp(const QString & pattern)
QTD_EXTERN QTD_EXPORT void qtd_QSortFilterProxyModel_setFilterRegExp_string
(void* __this_nativeId,
 DArray pattern0)
{
    QString __qt_pattern0 = QString::fromUtf8((const char *)pattern0.ptr, pattern0.length);
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    __qt_this->setFilterRegExp((const QString& )__qt_pattern0);

}

// QSortFilterProxyModel::setFilterRole(int role)
QTD_EXTERN QTD_EXPORT void qtd_QSortFilterProxyModel_setFilterRole_int
(void* __this_nativeId,
 int role0)
{
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    __qt_this->setFilterRole((int )role0);

}

// QSortFilterProxyModel::setFilterWildcard(const QString & pattern)
QTD_EXTERN QTD_EXPORT void qtd_QSortFilterProxyModel_setFilterWildcard_string
(void* __this_nativeId,
 DArray pattern0)
{
    QString __qt_pattern0 = QString::fromUtf8((const char *)pattern0.ptr, pattern0.length);
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    __qt_this->setFilterWildcard((const QString& )__qt_pattern0);

}

// QSortFilterProxyModel::setSortCaseSensitivity(Qt::CaseSensitivity cs)
QTD_EXTERN QTD_EXPORT void qtd_QSortFilterProxyModel_setSortCaseSensitivity_CaseSensitivity
(void* __this_nativeId,
 int cs0)
{
    Qt::CaseSensitivity __qt_cs0 = (Qt::CaseSensitivity) cs0;
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    __qt_this->setSortCaseSensitivity((Qt::CaseSensitivity )__qt_cs0);

}

// QSortFilterProxyModel::setSortLocaleAware(bool on)
QTD_EXTERN QTD_EXPORT void qtd_QSortFilterProxyModel_setSortLocaleAware_bool
(void* __this_nativeId,
 bool on0)
{
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    __qt_this->setSortLocaleAware((bool )on0);

}

// QSortFilterProxyModel::setSortRole(int role)
QTD_EXTERN QTD_EXPORT void qtd_QSortFilterProxyModel_setSortRole_int
(void* __this_nativeId,
 int role0)
{
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    __qt_this->setSortRole((int )role0);

}

// QSortFilterProxyModel::sortCaseSensitivity() const
QTD_EXTERN QTD_EXPORT int qtd_QSortFilterProxyModel_sortCaseSensitivity_const
(void* __this_nativeId)
{
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->sortCaseSensitivity();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSortFilterProxyModel::sortColumn() const
QTD_EXTERN QTD_EXPORT int qtd_QSortFilterProxyModel_sortColumn_const
(void* __this_nativeId)
{
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->sortColumn();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSortFilterProxyModel::sortOrder() const
QTD_EXTERN QTD_EXPORT int qtd_QSortFilterProxyModel_sortOrder_const
(void* __this_nativeId)
{
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->sortOrder();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSortFilterProxyModel::sortRole() const
QTD_EXTERN QTD_EXPORT int qtd_QSortFilterProxyModel_sortRole_const
(void* __this_nativeId)
{
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->sortRole();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSortFilterProxyModel::buddy(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QSortFilterProxyModel_buddy_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QModelIndex  __qt_return_value = __qt_this->__override_buddy((const QModelIndex& )__qt_index0, __do_static_call);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QSortFilterProxyModel::canFetchMore(const QModelIndex & parent_) const
QTD_EXTERN QTD_EXPORT bool qtd_QSortFilterProxyModel_canFetchMore_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor parent0)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_canFetchMore((const QModelIndex& )__qt_parent0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSortFilterProxyModel::columnCount(const QModelIndex & parent_) const
QTD_EXTERN QTD_EXPORT int qtd_QSortFilterProxyModel_columnCount_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor parent0)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_columnCount((const QModelIndex& )__qt_parent0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSortFilterProxyModel::data(const QModelIndex & index, int role) const
QTD_EXTERN QTD_EXPORT void* qtd_QSortFilterProxyModel_data_QModelIndex_int_const
(void* __this_nativeId,
 QModelIndexAccessor index0,
 int role1)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_data((const QModelIndex& )__qt_index0, (int )role1, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QSortFilterProxyModel::dropMimeData(const QMimeData * data, Qt::DropAction action, int row, int column, const QModelIndex & parent_)
QTD_EXTERN QTD_EXPORT bool qtd_QSortFilterProxyModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex
(void* __this_nativeId,
 void* data0,
 int action1,
 int row2,
 int column3,
 QModelIndexAccessor parent4)
{
    const QMimeData*  __qt_data0 = (const QMimeData* ) data0;
    Qt::DropAction __qt_action1 = (Qt::DropAction) action1;
    QModelIndex __qt_parent4 = qtd_to_QModelIndex(parent4);
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_dropMimeData((const QMimeData* )__qt_data0, (Qt::DropAction )__qt_action1, (int )row2, (int )column3, (const QModelIndex& )__qt_parent4, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSortFilterProxyModel::fetchMore(const QModelIndex & parent_)
QTD_EXTERN QTD_EXPORT void qtd_QSortFilterProxyModel_fetchMore_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor parent0)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_fetchMore((const QModelIndex& )__qt_parent0, __do_static_call);

}

// QSortFilterProxyModel::filterAcceptsColumn(int source_column, const QModelIndex & source_parent) const
QTD_EXTERN QTD_EXPORT bool qtd_QSortFilterProxyModel_filterAcceptsColumn_int_QModelIndex_const
(void* __this_nativeId,
 int source_column0,
 QModelIndexAccessor source_parent1)
{
    QModelIndex __qt_source_parent1 = qtd_to_QModelIndex(source_parent1);
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_filterAcceptsColumn((int )source_column0, (const QModelIndex& )__qt_source_parent1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSortFilterProxyModel::filterAcceptsRow(int source_row, const QModelIndex & source_parent) const
QTD_EXTERN QTD_EXPORT bool qtd_QSortFilterProxyModel_filterAcceptsRow_int_QModelIndex_const
(void* __this_nativeId,
 int source_row0,
 QModelIndexAccessor source_parent1)
{
    QModelIndex __qt_source_parent1 = qtd_to_QModelIndex(source_parent1);
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_filterAcceptsRow((int )source_row0, (const QModelIndex& )__qt_source_parent1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSortFilterProxyModel::flags(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT int qtd_QSortFilterProxyModel_flags_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_flags((const QModelIndex& )__qt_index0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSortFilterProxyModel::hasChildren(const QModelIndex & parent_) const
QTD_EXTERN QTD_EXPORT bool qtd_QSortFilterProxyModel_hasChildren_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor parent0)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_hasChildren((const QModelIndex& )__qt_parent0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSortFilterProxyModel::headerData(int section, Qt::Orientation orientation, int role) const
QTD_EXTERN QTD_EXPORT void* qtd_QSortFilterProxyModel_headerData_int_Orientation_int_const
(void* __this_nativeId,
 int section0,
 int orientation1,
 int role2)
{
    Qt::Orientation __qt_orientation1 = (Qt::Orientation) orientation1;
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_headerData((int )section0, (Qt::Orientation )__qt_orientation1, (int )role2, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QSortFilterProxyModel::index(int row, int column, const QModelIndex & parent_) const
QTD_EXTERN QTD_EXPORT void qtd_QSortFilterProxyModel_index_int_int_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int row0,
 int column1,
 QModelIndexAccessor parent2)
{
    QModelIndex __qt_parent2 = qtd_to_QModelIndex(parent2);
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QModelIndex  __qt_return_value = __qt_this->__override_index((int )row0, (int )column1, (const QModelIndex& )__qt_parent2, __do_static_call);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QSortFilterProxyModel::insertColumns(int column, int count, const QModelIndex & parent_)
QTD_EXTERN QTD_EXPORT bool qtd_QSortFilterProxyModel_insertColumns_int_int_QModelIndex
(void* __this_nativeId,
 int column0,
 int count1,
 QModelIndexAccessor parent2)
{
    QModelIndex __qt_parent2 = qtd_to_QModelIndex(parent2);
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_insertColumns((int )column0, (int )count1, (const QModelIndex& )__qt_parent2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSortFilterProxyModel::insertRows(int row, int count, const QModelIndex & parent_)
QTD_EXTERN QTD_EXPORT bool qtd_QSortFilterProxyModel_insertRows_int_int_QModelIndex
(void* __this_nativeId,
 int row0,
 int count1,
 QModelIndexAccessor parent2)
{
    QModelIndex __qt_parent2 = qtd_to_QModelIndex(parent2);
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_insertRows((int )row0, (int )count1, (const QModelIndex& )__qt_parent2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSortFilterProxyModel::lessThan(const QModelIndex & left, const QModelIndex & right) const
QTD_EXTERN QTD_EXPORT bool qtd_QSortFilterProxyModel_lessThan_QModelIndex_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor left0,
 QModelIndexAccessor right1)
{
    QModelIndex __qt_left0 = qtd_to_QModelIndex(left0);
    QModelIndex __qt_right1 = qtd_to_QModelIndex(right1);
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_lessThan((const QModelIndex& )__qt_left0, (const QModelIndex& )__qt_right1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSortFilterProxyModel::mapFromSource(const QModelIndex & sourceIndex) const
QTD_EXTERN QTD_EXPORT void qtd_QSortFilterProxyModel_mapFromSource_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 QModelIndexAccessor sourceIndex0)
{
    QModelIndex __qt_sourceIndex0 = qtd_to_QModelIndex(sourceIndex0);
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QModelIndex  __qt_return_value = __qt_this->__override_mapFromSource((const QModelIndex& )__qt_sourceIndex0, __do_static_call);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QSortFilterProxyModel::mapSelectionFromSource(const QItemSelection & sourceSelection) const
QTD_EXTERN QTD_EXPORT void* qtd_QSortFilterProxyModel_mapSelectionFromSource_QItemSelection_const
(void* __this_nativeId,
 void* sourceSelection0)
{
    const QItemSelection&  __qt_sourceSelection0 = (const QItemSelection& ) *(QItemSelection *)sourceSelection0;
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QItemSelection  __qt_return_value = __qt_this->__override_mapSelectionFromSource((const QItemSelection& )__qt_sourceSelection0, __do_static_call);

    void* __d_return_value = (void*) new QItemSelection(__qt_return_value);

    return __d_return_value;
}

// QSortFilterProxyModel::mapSelectionToSource(const QItemSelection & proxySelection) const
QTD_EXTERN QTD_EXPORT void* qtd_QSortFilterProxyModel_mapSelectionToSource_QItemSelection_const
(void* __this_nativeId,
 void* proxySelection0)
{
    const QItemSelection&  __qt_proxySelection0 = (const QItemSelection& ) *(QItemSelection *)proxySelection0;
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QItemSelection  __qt_return_value = __qt_this->__override_mapSelectionToSource((const QItemSelection& )__qt_proxySelection0, __do_static_call);

    void* __d_return_value = (void*) new QItemSelection(__qt_return_value);

    return __d_return_value;
}

// QSortFilterProxyModel::mapToSource(const QModelIndex & proxyIndex) const
QTD_EXTERN QTD_EXPORT void qtd_QSortFilterProxyModel_mapToSource_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 QModelIndexAccessor proxyIndex0)
{
    QModelIndex __qt_proxyIndex0 = qtd_to_QModelIndex(proxyIndex0);
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QModelIndex  __qt_return_value = __qt_this->__override_mapToSource((const QModelIndex& )__qt_proxyIndex0, __do_static_call);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QSortFilterProxyModel::match(const QModelIndex & start, int role, const QVariant & value, int hits, QFlags<Qt::MatchFlag> flags) const
QTD_EXTERN QTD_EXPORT void qtd_QSortFilterProxyModel_match_QModelIndex_int_QVariant_int_MatchFlags_const
(void* __this_nativeId,
 void* __d_return_value,
 QModelIndexAccessor start0,
 int role1,
 QVariant* value2,
 int hits3,
 int flags4)
{
    QModelIndex __qt_start0 = qtd_to_QModelIndex(start0);
    QVariant __qt_value2 = value2 == NULL ? QVariant() : QVariant(*value2);
    QFlags<Qt::MatchFlag> __qt_flags4 = (QFlags<Qt::MatchFlag>) flags4;
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QList<QModelIndex >  __qt_return_value = __qt_this->__override_match((const QModelIndex& )__qt_start0, (int )role1, (const QVariant& )__qt_value2, (int )hits3, (Qt::MatchFlags )__qt_flags4, __do_static_call);

QList<QModelIndex > &__d_return_value_tmp = (*(QList<QModelIndex > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QSortFilterProxyModel::mimeData(const QList<QModelIndex > & indexes) const
QTD_EXTERN QTD_EXPORT void* qtd_QSortFilterProxyModel_mimeData_QList_const
(void* __this_nativeId,
 void* indexes0)
{
QList<QModelIndex > __qt_indexes0 = (*(QList<QModelIndex > *)indexes0);
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QMimeData*  __qt_return_value = __qt_this->__override_mimeData((const QList<QModelIndex >& )__qt_indexes0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QSortFilterProxyModel::mimeTypes() const
QTD_EXTERN QTD_EXPORT void qtd_QSortFilterProxyModel_mimeTypes_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QStringList  __qt_return_value = __qt_this->__override_mimeTypes(__do_static_call);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QSortFilterProxyModel::parent(const QModelIndex & child) const
QTD_EXTERN QTD_EXPORT void qtd_QSortFilterProxyModel_parent_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 QModelIndexAccessor child0)
{
    QModelIndex __qt_child0 = qtd_to_QModelIndex(child0);
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QModelIndex  __qt_return_value = __qt_this->__override_parent((const QModelIndex& )__qt_child0, __do_static_call);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QSortFilterProxyModel::removeColumns(int column, int count, const QModelIndex & parent_)
QTD_EXTERN QTD_EXPORT bool qtd_QSortFilterProxyModel_removeColumns_int_int_QModelIndex
(void* __this_nativeId,
 int column0,
 int count1,
 QModelIndexAccessor parent2)
{
    QModelIndex __qt_parent2 = qtd_to_QModelIndex(parent2);
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_removeColumns((int )column0, (int )count1, (const QModelIndex& )__qt_parent2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSortFilterProxyModel::removeRows(int row, int count, const QModelIndex & parent_)
QTD_EXTERN QTD_EXPORT bool qtd_QSortFilterProxyModel_removeRows_int_int_QModelIndex
(void* __this_nativeId,
 int row0,
 int count1,
 QModelIndexAccessor parent2)
{
    QModelIndex __qt_parent2 = qtd_to_QModelIndex(parent2);
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_removeRows((int )row0, (int )count1, (const QModelIndex& )__qt_parent2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSortFilterProxyModel::rowCount(const QModelIndex & parent_) const
QTD_EXTERN QTD_EXPORT int qtd_QSortFilterProxyModel_rowCount_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor parent0)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_rowCount((const QModelIndex& )__qt_parent0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSortFilterProxyModel::setData(const QModelIndex & index, const QVariant & value, int role)
QTD_EXTERN QTD_EXPORT bool qtd_QSortFilterProxyModel_setData_QModelIndex_QVariant_int
(void* __this_nativeId,
 QModelIndexAccessor index0,
 QVariant* value1,
 int role2)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QVariant __qt_value1 = value1 == NULL ? QVariant() : QVariant(*value1);
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_setData((const QModelIndex& )__qt_index0, (const QVariant& )__qt_value1, (int )role2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSortFilterProxyModel::setHeaderData(int section, Qt::Orientation orientation, const QVariant & value, int role)
QTD_EXTERN QTD_EXPORT bool qtd_QSortFilterProxyModel_setHeaderData_int_Orientation_QVariant_int
(void* __this_nativeId,
 int section0,
 int orientation1,
 QVariant* value2,
 int role3)
{
    Qt::Orientation __qt_orientation1 = (Qt::Orientation) orientation1;
    QVariant __qt_value2 = value2 == NULL ? QVariant() : QVariant(*value2);
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_setHeaderData((int )section0, (Qt::Orientation )__qt_orientation1, (const QVariant& )__qt_value2, (int )role3, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSortFilterProxyModel::setSourceModel(QAbstractItemModel * sourceModel)
QTD_EXTERN QTD_EXPORT void qtd_QSortFilterProxyModel_setSourceModel_QAbstractItemModel
(void* __this_nativeId,
 void* sourceModel0)
{
    QAbstractItemModel*  __qt_sourceModel0 = (QAbstractItemModel* ) sourceModel0;
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setSourceModel((QAbstractItemModel* )__qt_sourceModel0, __do_static_call);

}

// QSortFilterProxyModel::sort(int column, Qt::SortOrder order)
QTD_EXTERN QTD_EXPORT void qtd_QSortFilterProxyModel_sort_int_SortOrder
(void* __this_nativeId,
 int column0,
 int order1)
{
    Qt::SortOrder __qt_order1 = (Qt::SortOrder) order1;
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_sort((int )column0, (Qt::SortOrder )__qt_order1, __do_static_call);

}

// QSortFilterProxyModel::span(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QSortFilterProxyModel_span_QModelIndex_const
(void* __this_nativeId,
 QSize * __d_return_value,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_span((const QModelIndex& )__qt_index0, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QSortFilterProxyModel::supportedDropActions() const
QTD_EXTERN QTD_EXPORT int qtd_QSortFilterProxyModel_supportedDropActions_const
(void* __this_nativeId)
{
    QSortFilterProxyModel_QtDShell *__qt_this = (QSortFilterProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_supportedDropActions(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QSortFilterProxyModel_staticMetaObject() {
    return (void*)&QSortFilterProxyModel::staticMetaObject;
}


