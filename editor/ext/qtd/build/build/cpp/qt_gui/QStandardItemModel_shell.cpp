#include <QSize>
#include <QStringList>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qlist.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qstandarditemmodel.h>
#include <qstringlist.h>
#include <qvariant.h>

#include "QStandardItemModel_shell.h"
#include <iostream>
#include <qstandarditemmodel.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QStandardItemModelEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QStandardItemModelEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QStandardItemModel_createEntity(void *nativeId, void* dId)
{
    new QStandardItemModelEntity((QObject*)nativeId, dId);
}

QStandardItemModel_QtDShell::QStandardItemModel_QtDShell(void *d_ptr, QObject*  parent0)
    : QStandardItemModel(parent0),
      QObjectLink(this, d_ptr)
{
}

QStandardItemModel_QtDShell::QStandardItemModel_QtDShell(void *d_ptr, int  rows0, int  columns1, QObject*  parent2)
    : QStandardItemModel(rows0, columns1, parent2),
      QObjectLink(this, d_ptr)
{
}

QStandardItemModel_QtDShell::~QStandardItemModel_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QStandardItemModel_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QStandardItemModel::metaObject();
}

int QStandardItemModel_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QStandardItemModel::qt_metacall(_c, _id, _a);
}

int QStandardItemModel_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QStandardItemModel::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QStandardItemModel_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QAbstractItemModel_buddy_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, QModelIndexAccessor* index0))
QModelIndex  QStandardItemModel_QtDShell::buddy(const QModelIndex&  index0) const
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemModel_buddy_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(index0));
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_canFetchMore_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* parent0))
bool  QStandardItemModel_QtDShell::canFetchMore(const QModelIndex&  parent0) const
{
    return qtd_QAbstractItemModel_canFetchMore_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0));
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QStandardItemModel_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemModel_columnCount_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* parent0))
int  QStandardItemModel_QtDShell::columnCount(const QModelIndex&  parent0) const
{
    return qtd_QAbstractItemModel_columnCount_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0));
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QStandardItemModel_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemModel_data_QModelIndex_int_const_dispatch, (void *dId, QModelIndexAccessor* index0, int role1))
QVariant  QStandardItemModel_QtDShell::data(const QModelIndex&  index0, int  role1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QAbstractItemModel_data_QModelIndex_int_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (int )role1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex_dispatch, (void *dId, void* data0, int action1, int row2, int column3, QModelIndexAccessor* parent4))
bool  QStandardItemModel_QtDShell::dropMimeData(const QMimeData*  data0, Qt::DropAction  action1, int  row2, int  column3, const QModelIndex&  parent4)
{
    return qtd_QAbstractItemModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, (QMimeData* )data0, (Qt::DropAction )action1, (int )row2, (int )column3, &qtd_from_QModelIndex(parent4));
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QStandardItemModel_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QStandardItemModel_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_fetchMore_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* parent0))
void QStandardItemModel_QtDShell::fetchMore(const QModelIndex&  parent0)
{
    qtd_QAbstractItemModel_fetchMore_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0));
}

QTD_FUNC_DECL(GUI, int, QAbstractItemModel_flags_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* index0))
Qt::ItemFlags  QStandardItemModel_QtDShell::flags(const QModelIndex&  index0) const
{
    return (QFlags<Qt::ItemFlag>) qtd_QAbstractItemModel_flags_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0));
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_hasChildren_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* parent0))
bool  QStandardItemModel_QtDShell::hasChildren(const QModelIndex&  parent0) const
{
    return qtd_QAbstractItemModel_hasChildren_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0));
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemModel_headerData_int_Orientation_int_const_dispatch, (void *dId, int section0, int orientation1, int role2))
QVariant  QStandardItemModel_QtDShell::headerData(int  section0, Qt::Orientation  orientation1, int  role2) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QAbstractItemModel_headerData_int_Orientation_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )section0, (Qt::Orientation )orientation1, (int )role2);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_index_int_int_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, int row0, int column1, QModelIndexAccessor* parent2))
QModelIndex  QStandardItemModel_QtDShell::index(int  row0, int  column1, const QModelIndex&  parent2) const
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemModel_index_int_int_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, (int )row0, (int )column1, &qtd_from_QModelIndex(parent2));
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_insertColumns_int_int_QModelIndex_dispatch, (void *dId, int column0, int count1, QModelIndexAccessor* parent2))
bool  QStandardItemModel_QtDShell::insertColumns(int  column0, int  count1, const QModelIndex&  parent2)
{
    return qtd_QAbstractItemModel_insertColumns_int_int_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, (int )column0, (int )count1, &qtd_from_QModelIndex(parent2));
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_insertRows_int_int_QModelIndex_dispatch, (void *dId, int row0, int count1, QModelIndexAccessor* parent2))
bool  QStandardItemModel_QtDShell::insertRows(int  row0, int  count1, const QModelIndex&  parent2)
{
    return qtd_QAbstractItemModel_insertRows_int_int_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, (int )row0, (int )count1, &qtd_from_QModelIndex(parent2));
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_match_QModelIndex_int_QVariant_int_MatchFlags_const_dispatch, (void *dId, void * __d_arr, QModelIndexAccessor* start0, int role1, void* value2, int hits3, int flags4))
QList<QModelIndex >  QStandardItemModel_QtDShell::match(const QModelIndex&  start0, int  role1, const QVariant&  value2, int  hits3, Qt::MatchFlags  flags4) const
{
    QList<QModelIndex > __d_return_value;
    qtd_QAbstractItemModel_match_QModelIndex_int_QVariant_int_MatchFlags_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(start0), (int )role1, &(QVariant& )value2, (int )hits3, (Qt::MatchFlags )flags4);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemModel_mimeData_QList_const_dispatch, (void *dId, void* indexes0))
QMimeData*  QStandardItemModel_QtDShell::mimeData(const QList<QModelIndex >&  indexes0) const
{
    return (QMimeData*) qtd_QAbstractItemModel_mimeData_QList_const_dispatch(QObjectLink::getLink(this)->dId, (void*)&indexes0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_mimeTypes_const_dispatch, (void *dId, void * __d_arr))
QStringList  QStandardItemModel_QtDShell::mimeTypes() const
{
    QStringList __d_return_value;
    qtd_QAbstractItemModel_mimeTypes_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_parent_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, QModelIndexAccessor* child0))
QModelIndex  QStandardItemModel_QtDShell::parent(const QModelIndex&  child0) const
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemModel_parent_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(child0));
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_removeColumns_int_int_QModelIndex_dispatch, (void *dId, int column0, int count1, QModelIndexAccessor* parent2))
bool  QStandardItemModel_QtDShell::removeColumns(int  column0, int  count1, const QModelIndex&  parent2)
{
    return qtd_QAbstractItemModel_removeColumns_int_int_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, (int )column0, (int )count1, &qtd_from_QModelIndex(parent2));
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_removeRows_int_int_QModelIndex_dispatch, (void *dId, int row0, int count1, QModelIndexAccessor* parent2))
bool  QStandardItemModel_QtDShell::removeRows(int  row0, int  count1, const QModelIndex&  parent2)
{
    return qtd_QAbstractItemModel_removeRows_int_int_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, (int )row0, (int )count1, &qtd_from_QModelIndex(parent2));
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_revert_dispatch, (void *dId))
void QStandardItemModel_QtDShell::revert()
{
    qtd_QAbstractItemModel_revert_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemModel_rowCount_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* parent0))
int  QStandardItemModel_QtDShell::rowCount(const QModelIndex&  parent0) const
{
    return qtd_QAbstractItemModel_rowCount_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0));
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_setData_QModelIndex_QVariant_int_dispatch, (void *dId, QModelIndexAccessor* index0, void* value1, int role2))
bool  QStandardItemModel_QtDShell::setData(const QModelIndex&  index0, const QVariant&  value1, int  role2)
{
    return qtd_QAbstractItemModel_setData_QModelIndex_QVariant_int_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), &(QVariant& )value1, (int )role2);
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_setHeaderData_int_Orientation_QVariant_int_dispatch, (void *dId, int section0, int orientation1, void* value2, int role3))
bool  QStandardItemModel_QtDShell::setHeaderData(int  section0, Qt::Orientation  orientation1, const QVariant&  value2, int  role3)
{
    return qtd_QAbstractItemModel_setHeaderData_int_Orientation_QVariant_int_dispatch(QObjectLink::getLink(this)->dId, (int )section0, (Qt::Orientation )orientation1, &(QVariant& )value2, (int )role3);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_sort_int_SortOrder_dispatch, (void *dId, int column0, int order1))
void QStandardItemModel_QtDShell::sort(int  column0, Qt::SortOrder  order1)
{
    qtd_QAbstractItemModel_sort_int_SortOrder_dispatch(QObjectLink::getLink(this)->dId, (int )column0, (Qt::SortOrder )order1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_span_QModelIndex_const_dispatch, (void *dId, QSize *__d_return_value, QModelIndexAccessor* index0))
QSize  QStandardItemModel_QtDShell::span(const QModelIndex&  index0) const
{
    QSize __d_return_value;
    qtd_QAbstractItemModel_span_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(index0));
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_submit_dispatch, (void *dId))
bool  QStandardItemModel_QtDShell::submit()
{
    return qtd_QAbstractItemModel_submit_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemModel_supportedDropActions_const_dispatch, (void *dId))
Qt::DropActions  QStandardItemModel_QtDShell::supportedDropActions() const
{
    return (QFlags<Qt::DropAction>) qtd_QAbstractItemModel_supportedDropActions_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QStandardItemModel_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QStandardItemModel_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QStandardItemModel_QtDShell::__public_beginInsertColumns(const QModelIndex&  parent0, int  first1, int  last2)
{
    QAbstractItemModel::beginInsertColumns((const QModelIndex& )parent0, (int )first1, (int )last2);
}

void QStandardItemModel_QtDShell::__public_beginInsertRows(const QModelIndex&  parent0, int  first1, int  last2)
{
    QAbstractItemModel::beginInsertRows((const QModelIndex& )parent0, (int )first1, (int )last2);
}

bool  QStandardItemModel_QtDShell::__public_beginMoveColumns(const QModelIndex&  sourceParent0, int  sourceFirst1, int  sourceLast2, const QModelIndex&  destinationParent3, int  destinationColumn4)
{
    return QAbstractItemModel::beginMoveColumns((const QModelIndex& )sourceParent0, (int )sourceFirst1, (int )sourceLast2, (const QModelIndex& )destinationParent3, (int )destinationColumn4);
}

bool  QStandardItemModel_QtDShell::__public_beginMoveRows(const QModelIndex&  sourceParent0, int  sourceFirst1, int  sourceLast2, const QModelIndex&  destinationParent3, int  destinationRow4)
{
    return QAbstractItemModel::beginMoveRows((const QModelIndex& )sourceParent0, (int )sourceFirst1, (int )sourceLast2, (const QModelIndex& )destinationParent3, (int )destinationRow4);
}

void QStandardItemModel_QtDShell::__public_beginRemoveColumns(const QModelIndex&  parent0, int  first1, int  last2)
{
    QAbstractItemModel::beginRemoveColumns((const QModelIndex& )parent0, (int )first1, (int )last2);
}

void QStandardItemModel_QtDShell::__public_beginRemoveRows(const QModelIndex&  parent0, int  first1, int  last2)
{
    QAbstractItemModel::beginRemoveRows((const QModelIndex& )parent0, (int )first1, (int )last2);
}

void QStandardItemModel_QtDShell::__public_beginResetModel()
{
    QAbstractItemModel::beginResetModel();
}

void QStandardItemModel_QtDShell::__public_changePersistentIndex(const QModelIndex&  from0, const QModelIndex&  to1)
{
    QAbstractItemModel::changePersistentIndex((const QModelIndex& )from0, (const QModelIndex& )to1);
}

void QStandardItemModel_QtDShell::__public_changePersistentIndexList(const QList<QModelIndex >&  from0, const QList<QModelIndex >&  to1)
{
    QAbstractItemModel::changePersistentIndexList((const QList<QModelIndex >& )from0, (const QList<QModelIndex >& )to1);
}

QModelIndex  QStandardItemModel_QtDShell::__public_createIndex(int  row0, int  column1, int  id2) const
{
    return QAbstractItemModel::createIndex((int )row0, (int )column1, (int )id2);
}

QModelIndex  QStandardItemModel_QtDShell::__public_createIndex(int  row0, int  column1, unsigned int  id2) const
{
    return QAbstractItemModel::createIndex((int )row0, (int )column1, (unsigned int )id2);
}

QModelIndex  QStandardItemModel_QtDShell::__public_createIndex(int  row0, int  column1, void*  data2) const
{
    return QAbstractItemModel::createIndex((int )row0, (int )column1, (void* )data2);
}

bool  QStandardItemModel_QtDShell::__public_decodeData(int  row0, int  column1, const QModelIndex&  parent2, QDataStream&  stream3)
{
    return QAbstractItemModel::decodeData((int )row0, (int )column1, (const QModelIndex& )parent2, (QDataStream& )stream3);
}

void QStandardItemModel_QtDShell::__public_encodeData(const QList<QModelIndex >&  indexes0, QDataStream&  stream1) const
{
    QAbstractItemModel::encodeData((const QList<QModelIndex >& )indexes0, (QDataStream& )stream1);
}

void QStandardItemModel_QtDShell::__public_endInsertColumns()
{
    QAbstractItemModel::endInsertColumns();
}

void QStandardItemModel_QtDShell::__public_endInsertRows()
{
    QAbstractItemModel::endInsertRows();
}

void QStandardItemModel_QtDShell::__public_endMoveColumns()
{
    QAbstractItemModel::endMoveColumns();
}

void QStandardItemModel_QtDShell::__public_endMoveRows()
{
    QAbstractItemModel::endMoveRows();
}

void QStandardItemModel_QtDShell::__public_endRemoveColumns()
{
    QAbstractItemModel::endRemoveColumns();
}

void QStandardItemModel_QtDShell::__public_endRemoveRows()
{
    QAbstractItemModel::endRemoveRows();
}

void QStandardItemModel_QtDShell::__public_endResetModel()
{
    QAbstractItemModel::endResetModel();
}

QList<QModelIndex >  QStandardItemModel_QtDShell::__public_persistentIndexList() const
{
    return QAbstractItemModel::persistentIndexList();
}

void QStandardItemModel_QtDShell::__public_reset()
{
    QAbstractItemModel::reset();
}

QObject*  QStandardItemModel_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QStandardItemModel_QtDShell::__public_dataChanged(const QModelIndex&  topLeft0, const QModelIndex&  bottomRight1)
{
    QAbstractItemModel::dataChanged((const QModelIndex& )topLeft0, (const QModelIndex& )bottomRight1);
}

void QStandardItemModel_QtDShell::__public_headerDataChanged(int  orientation0, int  first1, int  last2)
{
    QAbstractItemModel::headerDataChanged((Qt::Orientation )orientation0, (int )first1, (int )last2);
}

void QStandardItemModel_QtDShell::__public_itemChanged(QStandardItem*  item0)
{
    QStandardItemModel::itemChanged((QStandardItem* )item0);
}

void QStandardItemModel_QtDShell::__public_layoutAboutToBeChanged()
{
    QAbstractItemModel::layoutAboutToBeChanged();
}

void QStandardItemModel_QtDShell::__public_layoutChanged()
{
    QAbstractItemModel::layoutChanged();
}

// Write virtual function overries used to decide on static/virtual calls
QModelIndex  QStandardItemModel_QtDShell::__override_buddy(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemModel::buddy((const QModelIndex& )index0);
    } else {
        return buddy((const QModelIndex& )index0);
    }
}

bool  QStandardItemModel_QtDShell::__override_canFetchMore(const QModelIndex&  parent0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemModel::canFetchMore((const QModelIndex& )parent0);
    } else {
        return canFetchMore((const QModelIndex& )parent0);
    }
}

void QStandardItemModel_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

int  QStandardItemModel_QtDShell::__override_columnCount(const QModelIndex&  parent0, bool static_call) const
{
    if (static_call) {
        return QStandardItemModel::columnCount((const QModelIndex& )parent0);
    } else {
        return columnCount((const QModelIndex& )parent0);
    }
}

void QStandardItemModel_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

QVariant  QStandardItemModel_QtDShell::__override_data(const QModelIndex&  index0, int  role1, bool static_call) const
{
    if (static_call) {
        return QStandardItemModel::data((const QModelIndex& )index0, (int )role1);
    } else {
        return data((const QModelIndex& )index0, (int )role1);
    }
}

bool  QStandardItemModel_QtDShell::__override_dropMimeData(const QMimeData*  data0, int  action1, int  row2, int  column3, const QModelIndex&  parent4, bool static_call)
{
    if (static_call) {
        return QStandardItemModel::dropMimeData((const QMimeData* )data0, (Qt::DropAction )action1, (int )row2, (int )column3, (const QModelIndex& )parent4);
    } else {
        return dropMimeData((const QMimeData* )data0, (Qt::DropAction )action1, (int )row2, (int )column3, (const QModelIndex& )parent4);
    }
}

bool  QStandardItemModel_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QStandardItemModel_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QStandardItemModel_QtDShell::__override_fetchMore(const QModelIndex&  parent0, bool static_call)
{
    if (static_call) {
        QAbstractItemModel::fetchMore((const QModelIndex& )parent0);
    } else {
        fetchMore((const QModelIndex& )parent0);
    }
}

int  QStandardItemModel_QtDShell::__override_flags(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QStandardItemModel::flags((const QModelIndex& )index0);
    } else {
        return flags((const QModelIndex& )index0);
    }
}

bool  QStandardItemModel_QtDShell::__override_hasChildren(const QModelIndex&  parent0, bool static_call) const
{
    if (static_call) {
        return QStandardItemModel::hasChildren((const QModelIndex& )parent0);
    } else {
        return hasChildren((const QModelIndex& )parent0);
    }
}

QVariant  QStandardItemModel_QtDShell::__override_headerData(int  section0, int  orientation1, int  role2, bool static_call) const
{
    if (static_call) {
        return QStandardItemModel::headerData((int )section0, (Qt::Orientation )orientation1, (int )role2);
    } else {
        return headerData((int )section0, (Qt::Orientation )orientation1, (int )role2);
    }
}

QModelIndex  QStandardItemModel_QtDShell::__override_index(int  row0, int  column1, const QModelIndex&  parent2, bool static_call) const
{
    if (static_call) {
        return QStandardItemModel::index((int )row0, (int )column1, (const QModelIndex& )parent2);
    } else {
        return index((int )row0, (int )column1, (const QModelIndex& )parent2);
    }
}

bool  QStandardItemModel_QtDShell::__override_insertColumns(int  column0, int  count1, const QModelIndex&  parent2, bool static_call)
{
    if (static_call) {
        return QStandardItemModel::insertColumns((int )column0, (int )count1, (const QModelIndex& )parent2);
    } else {
        return insertColumns((int )column0, (int )count1, (const QModelIndex& )parent2);
    }
}

bool  QStandardItemModel_QtDShell::__override_insertRows(int  row0, int  count1, const QModelIndex&  parent2, bool static_call)
{
    if (static_call) {
        return QStandardItemModel::insertRows((int )row0, (int )count1, (const QModelIndex& )parent2);
    } else {
        return insertRows((int )row0, (int )count1, (const QModelIndex& )parent2);
    }
}

QList<QModelIndex >  QStandardItemModel_QtDShell::__override_match(const QModelIndex&  start0, int  role1, const QVariant&  value2, int  hits3, int  flags4, bool static_call) const
{
    if (static_call) {
        return QAbstractItemModel::match((const QModelIndex& )start0, (int )role1, (const QVariant& )value2, (int )hits3, (Qt::MatchFlags )flags4);
    } else {
        return match((const QModelIndex& )start0, (int )role1, (const QVariant& )value2, (int )hits3, (Qt::MatchFlags )flags4);
    }
}

QMimeData*  QStandardItemModel_QtDShell::__override_mimeData(const QList<QModelIndex >&  indexes0, bool static_call) const
{
    if (static_call) {
        return QStandardItemModel::mimeData((const QList<QModelIndex >& )indexes0);
    } else {
        return mimeData((const QList<QModelIndex >& )indexes0);
    }
}

QStringList  QStandardItemModel_QtDShell::__override_mimeTypes(bool static_call) const
{
    if (static_call) {
        return QStandardItemModel::mimeTypes();
    } else {
        return mimeTypes();
    }
}

QModelIndex  QStandardItemModel_QtDShell::__override_parent(const QModelIndex&  child0, bool static_call) const
{
    if (static_call) {
        return QStandardItemModel::parent((const QModelIndex& )child0);
    } else {
        return parent((const QModelIndex& )child0);
    }
}

bool  QStandardItemModel_QtDShell::__override_removeColumns(int  column0, int  count1, const QModelIndex&  parent2, bool static_call)
{
    if (static_call) {
        return QStandardItemModel::removeColumns((int )column0, (int )count1, (const QModelIndex& )parent2);
    } else {
        return removeColumns((int )column0, (int )count1, (const QModelIndex& )parent2);
    }
}

bool  QStandardItemModel_QtDShell::__override_removeRows(int  row0, int  count1, const QModelIndex&  parent2, bool static_call)
{
    if (static_call) {
        return QStandardItemModel::removeRows((int )row0, (int )count1, (const QModelIndex& )parent2);
    } else {
        return removeRows((int )row0, (int )count1, (const QModelIndex& )parent2);
    }
}

void QStandardItemModel_QtDShell::__override_revert(bool static_call)
{
    if (static_call) {
        QAbstractItemModel::revert();
    } else {
        revert();
    }
}

int  QStandardItemModel_QtDShell::__override_rowCount(const QModelIndex&  parent0, bool static_call) const
{
    if (static_call) {
        return QStandardItemModel::rowCount((const QModelIndex& )parent0);
    } else {
        return rowCount((const QModelIndex& )parent0);
    }
}

bool  QStandardItemModel_QtDShell::__override_setData(const QModelIndex&  index0, const QVariant&  value1, int  role2, bool static_call)
{
    if (static_call) {
        return QStandardItemModel::setData((const QModelIndex& )index0, (const QVariant& )value1, (int )role2);
    } else {
        return setData((const QModelIndex& )index0, (const QVariant& )value1, (int )role2);
    }
}

bool  QStandardItemModel_QtDShell::__override_setHeaderData(int  section0, int  orientation1, const QVariant&  value2, int  role3, bool static_call)
{
    if (static_call) {
        return QStandardItemModel::setHeaderData((int )section0, (Qt::Orientation )orientation1, (const QVariant& )value2, (int )role3);
    } else {
        return setHeaderData((int )section0, (Qt::Orientation )orientation1, (const QVariant& )value2, (int )role3);
    }
}

void QStandardItemModel_QtDShell::__override_sort(int  column0, int  order1, bool static_call)
{
    if (static_call) {
        QStandardItemModel::sort((int )column0, (Qt::SortOrder )order1);
    } else {
        sort((int )column0, (Qt::SortOrder )order1);
    }
}

QSize  QStandardItemModel_QtDShell::__override_span(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemModel::span((const QModelIndex& )index0);
    } else {
        return span((const QModelIndex& )index0);
    }
}

bool  QStandardItemModel_QtDShell::__override_submit(bool static_call)
{
    if (static_call) {
        return QAbstractItemModel::submit();
    } else {
        return submit();
    }
}

int  QStandardItemModel_QtDShell::__override_supportedDropActions(bool static_call) const
{
    if (static_call) {
        return QStandardItemModel::supportedDropActions();
    } else {
        return supportedDropActions();
    }
}

void QStandardItemModel_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// QStandardItemModel::itemChanged(QStandardItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItemModel_itemChanged_QStandardItem
(void* __this_nativeId,
 void* item0)
{
    QStandardItem*  __qt_item0 = (QStandardItem* ) item0;
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    __qt_this->__public_itemChanged((QStandardItem* )__qt_item0);

}

// ---externC---
// QStandardItemModel::QStandardItemModel(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QStandardItemModel_QStandardItemModel_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QStandardItemModel_QtDShell *__qt_this = new QStandardItemModel_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QStandardItemModel::QStandardItemModel(int rows, int columns, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QStandardItemModel_QStandardItemModel_int_int_QObject
(void *d_ptr,
 int rows0,
 int columns1,
 void* parent2)
{
    QObject*  __qt_parent2 = (QObject* ) parent2;
    QStandardItemModel_QtDShell *__qt_this = new QStandardItemModel_QtDShell(d_ptr, (int )rows0, (int )columns1, (QObject* )__qt_parent2);
    return (void *) __qt_this;

}

// QStandardItemModel::appendColumn(const QList<QStandardItem * > & items)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItemModel_appendColumn_QList
(void* __this_nativeId,
 void* items0)
{
QList<QStandardItem* > __qt_items0 = (*(QList<QStandardItem* > *)items0);
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    __qt_this->appendColumn((const QList<QStandardItem* >& )__qt_items0);

}

// QStandardItemModel::appendRow(QStandardItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItemModel_appendRow_QStandardItem
(void* __this_nativeId,
 void* item0)
{
    QStandardItem*  __qt_item0 = (QStandardItem* ) item0;
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    __qt_this->appendRow((QStandardItem* )__qt_item0);

}

// QStandardItemModel::appendRow(const QList<QStandardItem * > & items)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItemModel_appendRow_QList
(void* __this_nativeId,
 void* items0)
{
QList<QStandardItem* > __qt_items0 = (*(QList<QStandardItem* > *)items0);
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    __qt_this->appendRow((const QList<QStandardItem* >& )__qt_items0);

}

// QStandardItemModel::clear()
QTD_EXTERN QTD_EXPORT void qtd_QStandardItemModel_clear
(void* __this_nativeId)
{
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    __qt_this->clear();

}

// QStandardItemModel::findItems(const QString & text, QFlags<Qt::MatchFlag> flags, int column) const
QTD_EXTERN QTD_EXPORT void qtd_QStandardItemModel_findItems_string_MatchFlags_int_const
(void* __this_nativeId,
 void* __d_return_value,
 DArray text0,
 int flags1,
 int column2)
{
    QString __qt_text0 = QString::fromUtf8((const char *)text0.ptr, text0.length);
    QFlags<Qt::MatchFlag> __qt_flags1 = (QFlags<Qt::MatchFlag>) flags1;
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    QList<QStandardItem* >  __qt_return_value = __qt_this->findItems((const QString& )__qt_text0, (Qt::MatchFlags )__qt_flags1, (int )column2);

QList<QStandardItem* > &__d_return_value_tmp = (*(QList<QStandardItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QStandardItemModel::horizontalHeaderItem(int column) const
QTD_EXTERN QTD_EXPORT void* qtd_QStandardItemModel_horizontalHeaderItem_int_const
(void* __this_nativeId,
 int column0)
{
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    QStandardItem*  __qt_return_value = __qt_this->horizontalHeaderItem((int )column0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QStandardItemModel::indexFromItem(const QStandardItem * item) const
QTD_EXTERN QTD_EXPORT void qtd_QStandardItemModel_indexFromItem_QStandardItem_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 void* item0)
{
    const QStandardItem*  __qt_item0 = (const QStandardItem* ) item0;
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    QModelIndex  __qt_return_value = __qt_this->indexFromItem((const QStandardItem* )__qt_item0);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QStandardItemModel::insertColumn(int column, const QList<QStandardItem * > & items)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItemModel_insertColumn_int_QList
(void* __this_nativeId,
 int column0,
 void* items1)
{
QList<QStandardItem* > __qt_items1 = (*(QList<QStandardItem* > *)items1);
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    __qt_this->insertColumn((int )column0, (const QList<QStandardItem* >& )__qt_items1);

}

// QStandardItemModel::insertRow(int row, QStandardItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItemModel_insertRow_int_QStandardItem
(void* __this_nativeId,
 int row0,
 void* item1)
{
    QStandardItem*  __qt_item1 = (QStandardItem* ) item1;
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    __qt_this->insertRow((int )row0, (QStandardItem* )__qt_item1);

}

// QStandardItemModel::insertRow(int row, const QList<QStandardItem * > & items)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItemModel_insertRow_int_QList
(void* __this_nativeId,
 int row0,
 void* items1)
{
QList<QStandardItem* > __qt_items1 = (*(QList<QStandardItem* > *)items1);
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    __qt_this->insertRow((int )row0, (const QList<QStandardItem* >& )__qt_items1);

}

// QStandardItemModel::invisibleRootItem() const
QTD_EXTERN QTD_EXPORT void* qtd_QStandardItemModel_invisibleRootItem_const
(void* __this_nativeId)
{
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    QStandardItem*  __qt_return_value = __qt_this->invisibleRootItem();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QStandardItemModel::item(int row, int column) const
QTD_EXTERN QTD_EXPORT void* qtd_QStandardItemModel_item_int_int_const
(void* __this_nativeId,
 int row0,
 int column1)
{
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    QStandardItem*  __qt_return_value = __qt_this->item((int )row0, (int )column1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QStandardItemModel::itemFromIndex(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void* qtd_QStandardItemModel_itemFromIndex_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    QStandardItem*  __qt_return_value = __qt_this->itemFromIndex((const QModelIndex& )__qt_index0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QStandardItemModel::itemPrototype() const
QTD_EXTERN QTD_EXPORT void* qtd_QStandardItemModel_itemPrototype_const
(void* __this_nativeId)
{
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    const QStandardItem*  __qt_return_value = __qt_this->itemPrototype();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QStandardItemModel::setColumnCount(int columns)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItemModel_setColumnCount_int
(void* __this_nativeId,
 int columns0)
{
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    __qt_this->setColumnCount((int )columns0);

}

// QStandardItemModel::setHorizontalHeaderItem(int column, QStandardItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItemModel_setHorizontalHeaderItem_int_QStandardItem
(void* __this_nativeId,
 int column0,
 void* item1)
{
    QStandardItem*  __qt_item1 = (QStandardItem* ) item1;
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    __qt_this->setHorizontalHeaderItem((int )column0, (QStandardItem* )__qt_item1);

}

// QStandardItemModel::setHorizontalHeaderLabels(const QStringList & labels)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItemModel_setHorizontalHeaderLabels_QList
(void* __this_nativeId,
 void* labels0)
{
QStringList __qt_labels0 = (*(QStringList *)labels0);
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    __qt_this->setHorizontalHeaderLabels((const QStringList& )__qt_labels0);

}

// QStandardItemModel::setItem(int row, QStandardItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItemModel_setItem_int_QStandardItem
(void* __this_nativeId,
 int row0,
 void* item1)
{
    QStandardItem*  __qt_item1 = (QStandardItem* ) item1;
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    __qt_this->setItem((int )row0, (QStandardItem* )__qt_item1);

}

// QStandardItemModel::setItem(int row, int column, QStandardItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItemModel_setItem_int_int_QStandardItem
(void* __this_nativeId,
 int row0,
 int column1,
 void* item2)
{
    QStandardItem*  __qt_item2 = (QStandardItem* ) item2;
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    __qt_this->setItem((int )row0, (int )column1, (QStandardItem* )__qt_item2);

}

// QStandardItemModel::setItemPrototype(const QStandardItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItemModel_setItemPrototype_QStandardItem
(void* __this_nativeId,
 void* item0)
{
    const QStandardItem*  __qt_item0 = (const QStandardItem* ) item0;
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    __qt_this->setItemPrototype((const QStandardItem* )__qt_item0);

}

// QStandardItemModel::setRowCount(int rows)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItemModel_setRowCount_int
(void* __this_nativeId,
 int rows0)
{
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    __qt_this->setRowCount((int )rows0);

}

// QStandardItemModel::setSortRole(int role)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItemModel_setSortRole_int
(void* __this_nativeId,
 int role0)
{
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    __qt_this->setSortRole((int )role0);

}

// QStandardItemModel::setVerticalHeaderItem(int row, QStandardItem * item)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItemModel_setVerticalHeaderItem_int_QStandardItem
(void* __this_nativeId,
 int row0,
 void* item1)
{
    QStandardItem*  __qt_item1 = (QStandardItem* ) item1;
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    __qt_this->setVerticalHeaderItem((int )row0, (QStandardItem* )__qt_item1);

}

// QStandardItemModel::setVerticalHeaderLabels(const QStringList & labels)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItemModel_setVerticalHeaderLabels_QList
(void* __this_nativeId,
 void* labels0)
{
QStringList __qt_labels0 = (*(QStringList *)labels0);
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    __qt_this->setVerticalHeaderLabels((const QStringList& )__qt_labels0);

}

// QStandardItemModel::sortRole() const
QTD_EXTERN QTD_EXPORT int qtd_QStandardItemModel_sortRole_const
(void* __this_nativeId)
{
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->sortRole();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStandardItemModel::takeColumn(int column)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItemModel_takeColumn_int
(void* __this_nativeId,
 void* __d_return_value,
 int column0)
{
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    QList<QStandardItem* >  __qt_return_value = __qt_this->takeColumn((int )column0);

QList<QStandardItem* > &__d_return_value_tmp = (*(QList<QStandardItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QStandardItemModel::takeHorizontalHeaderItem(int column)
QTD_EXTERN QTD_EXPORT void* qtd_QStandardItemModel_takeHorizontalHeaderItem_int
(void* __this_nativeId,
 int column0)
{
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    QStandardItem*  __qt_return_value = __qt_this->takeHorizontalHeaderItem((int )column0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QStandardItemModel::takeItem(int row, int column)
QTD_EXTERN QTD_EXPORT void* qtd_QStandardItemModel_takeItem_int_int
(void* __this_nativeId,
 int row0,
 int column1)
{
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    QStandardItem*  __qt_return_value = __qt_this->takeItem((int )row0, (int )column1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QStandardItemModel::takeRow(int row)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItemModel_takeRow_int
(void* __this_nativeId,
 void* __d_return_value,
 int row0)
{
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    QList<QStandardItem* >  __qt_return_value = __qt_this->takeRow((int )row0);

QList<QStandardItem* > &__d_return_value_tmp = (*(QList<QStandardItem* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QStandardItemModel::takeVerticalHeaderItem(int row)
QTD_EXTERN QTD_EXPORT void* qtd_QStandardItemModel_takeVerticalHeaderItem_int
(void* __this_nativeId,
 int row0)
{
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    QStandardItem*  __qt_return_value = __qt_this->takeVerticalHeaderItem((int )row0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QStandardItemModel::verticalHeaderItem(int row) const
QTD_EXTERN QTD_EXPORT void* qtd_QStandardItemModel_verticalHeaderItem_int_const
(void* __this_nativeId,
 int row0)
{
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    QStandardItem*  __qt_return_value = __qt_this->verticalHeaderItem((int )row0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QStandardItemModel::columnCount(const QModelIndex & parent_) const
QTD_EXTERN QTD_EXPORT int qtd_QStandardItemModel_columnCount_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor parent0)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_columnCount((const QModelIndex& )__qt_parent0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStandardItemModel::data(const QModelIndex & index, int role) const
QTD_EXTERN QTD_EXPORT void* qtd_QStandardItemModel_data_QModelIndex_int_const
(void* __this_nativeId,
 QModelIndexAccessor index0,
 int role1)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_data((const QModelIndex& )__qt_index0, (int )role1, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QStandardItemModel::dropMimeData(const QMimeData * data, Qt::DropAction action, int row, int column, const QModelIndex & parent_)
QTD_EXTERN QTD_EXPORT bool qtd_QStandardItemModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex
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
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_dropMimeData((const QMimeData* )__qt_data0, (Qt::DropAction )__qt_action1, (int )row2, (int )column3, (const QModelIndex& )__qt_parent4, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStandardItemModel::flags(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT int qtd_QStandardItemModel_flags_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_flags((const QModelIndex& )__qt_index0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStandardItemModel::hasChildren(const QModelIndex & parent_) const
QTD_EXTERN QTD_EXPORT bool qtd_QStandardItemModel_hasChildren_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor parent0)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_hasChildren((const QModelIndex& )__qt_parent0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStandardItemModel::headerData(int section, Qt::Orientation orientation, int role) const
QTD_EXTERN QTD_EXPORT void* qtd_QStandardItemModel_headerData_int_Orientation_int_const
(void* __this_nativeId,
 int section0,
 int orientation1,
 int role2)
{
    Qt::Orientation __qt_orientation1 = (Qt::Orientation) orientation1;
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_headerData((int )section0, (Qt::Orientation )__qt_orientation1, (int )role2, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QStandardItemModel::index(int row, int column, const QModelIndex & parent_) const
QTD_EXTERN QTD_EXPORT void qtd_QStandardItemModel_index_int_int_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int row0,
 int column1,
 QModelIndexAccessor parent2)
{
    QModelIndex __qt_parent2 = qtd_to_QModelIndex(parent2);
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QModelIndex  __qt_return_value = __qt_this->__override_index((int )row0, (int )column1, (const QModelIndex& )__qt_parent2, __do_static_call);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QStandardItemModel::insertColumns(int column, int count, const QModelIndex & parent_)
QTD_EXTERN QTD_EXPORT bool qtd_QStandardItemModel_insertColumns_int_int_QModelIndex
(void* __this_nativeId,
 int column0,
 int count1,
 QModelIndexAccessor parent2)
{
    QModelIndex __qt_parent2 = qtd_to_QModelIndex(parent2);
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_insertColumns((int )column0, (int )count1, (const QModelIndex& )__qt_parent2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStandardItemModel::insertRows(int row, int count, const QModelIndex & parent_)
QTD_EXTERN QTD_EXPORT bool qtd_QStandardItemModel_insertRows_int_int_QModelIndex
(void* __this_nativeId,
 int row0,
 int count1,
 QModelIndexAccessor parent2)
{
    QModelIndex __qt_parent2 = qtd_to_QModelIndex(parent2);
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_insertRows((int )row0, (int )count1, (const QModelIndex& )__qt_parent2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStandardItemModel::itemData(const QModelIndex & index) const
// QStandardItemModel::mimeData(const QList<QModelIndex > & indexes) const
QTD_EXTERN QTD_EXPORT void* qtd_QStandardItemModel_mimeData_QList_const
(void* __this_nativeId,
 void* indexes0)
{
QList<QModelIndex > __qt_indexes0 = (*(QList<QModelIndex > *)indexes0);
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QMimeData*  __qt_return_value = __qt_this->__override_mimeData((const QList<QModelIndex >& )__qt_indexes0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QStandardItemModel::mimeTypes() const
QTD_EXTERN QTD_EXPORT void qtd_QStandardItemModel_mimeTypes_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QStringList  __qt_return_value = __qt_this->__override_mimeTypes(__do_static_call);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QStandardItemModel::parent(const QModelIndex & child) const
QTD_EXTERN QTD_EXPORT void qtd_QStandardItemModel_parent_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 QModelIndexAccessor child0)
{
    QModelIndex __qt_child0 = qtd_to_QModelIndex(child0);
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QModelIndex  __qt_return_value = __qt_this->__override_parent((const QModelIndex& )__qt_child0, __do_static_call);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QStandardItemModel::removeColumns(int column, int count, const QModelIndex & parent_)
QTD_EXTERN QTD_EXPORT bool qtd_QStandardItemModel_removeColumns_int_int_QModelIndex
(void* __this_nativeId,
 int column0,
 int count1,
 QModelIndexAccessor parent2)
{
    QModelIndex __qt_parent2 = qtd_to_QModelIndex(parent2);
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_removeColumns((int )column0, (int )count1, (const QModelIndex& )__qt_parent2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStandardItemModel::removeRows(int row, int count, const QModelIndex & parent_)
QTD_EXTERN QTD_EXPORT bool qtd_QStandardItemModel_removeRows_int_int_QModelIndex
(void* __this_nativeId,
 int row0,
 int count1,
 QModelIndexAccessor parent2)
{
    QModelIndex __qt_parent2 = qtd_to_QModelIndex(parent2);
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_removeRows((int )row0, (int )count1, (const QModelIndex& )__qt_parent2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStandardItemModel::rowCount(const QModelIndex & parent_) const
QTD_EXTERN QTD_EXPORT int qtd_QStandardItemModel_rowCount_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor parent0)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_rowCount((const QModelIndex& )__qt_parent0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStandardItemModel::setData(const QModelIndex & index, const QVariant & value, int role)
QTD_EXTERN QTD_EXPORT bool qtd_QStandardItemModel_setData_QModelIndex_QVariant_int
(void* __this_nativeId,
 QModelIndexAccessor index0,
 QVariant* value1,
 int role2)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QVariant __qt_value1 = value1 == NULL ? QVariant() : QVariant(*value1);
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_setData((const QModelIndex& )__qt_index0, (const QVariant& )__qt_value1, (int )role2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStandardItemModel::setHeaderData(int section, Qt::Orientation orientation, const QVariant & value, int role)
QTD_EXTERN QTD_EXPORT bool qtd_QStandardItemModel_setHeaderData_int_Orientation_QVariant_int
(void* __this_nativeId,
 int section0,
 int orientation1,
 QVariant* value2,
 int role3)
{
    Qt::Orientation __qt_orientation1 = (Qt::Orientation) orientation1;
    QVariant __qt_value2 = value2 == NULL ? QVariant() : QVariant(*value2);
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_setHeaderData((int )section0, (Qt::Orientation )__qt_orientation1, (const QVariant& )__qt_value2, (int )role3, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QStandardItemModel::setItemData(const QModelIndex & index, const QMap<int, QVariant > & roles)
// QStandardItemModel::sort(int column, Qt::SortOrder order)
QTD_EXTERN QTD_EXPORT void qtd_QStandardItemModel_sort_int_SortOrder
(void* __this_nativeId,
 int column0,
 int order1)
{
    Qt::SortOrder __qt_order1 = (Qt::SortOrder) order1;
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_sort((int )column0, (Qt::SortOrder )__qt_order1, __do_static_call);

}

// QStandardItemModel::supportedDropActions() const
QTD_EXTERN QTD_EXPORT int qtd_QStandardItemModel_supportedDropActions_const
(void* __this_nativeId)
{
    QStandardItemModel_QtDShell *__qt_this = (QStandardItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_supportedDropActions(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QStandardItemModel_staticMetaObject() {
    return (void*)&QStandardItemModel::staticMetaObject;
}


