#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qdirmodel.h>
#include <qfileiconprovider.h>
#include <qfileinfo.h>
#include <qicon.h>
#include <qlist.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qvariant.h>

#include "QDirModel_shell.h"
#include <iostream>
#include <qdirmodel.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QDirModelEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QDirModelEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QDirModel_createEntity(void *nativeId, void* dId)
{
    new QDirModelEntity((QObject*)nativeId, dId);
}

QDirModel_QtDShell::QDirModel_QtDShell(void *d_ptr, QObject*  parent0)
    : QDirModel(parent0),
      QObjectLink(this, d_ptr)
{
}

QDirModel_QtDShell::QDirModel_QtDShell(void *d_ptr, const QStringList&  nameFilters0, QDir::Filters  filters1, QDir::SortFlags  sort2, QObject*  parent3)
    : QDirModel(nameFilters0, filters1, sort2, parent3),
      QObjectLink(this, d_ptr)
{
}

QDirModel_QtDShell::~QDirModel_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QDirModel_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QDirModel::metaObject();
}

int QDirModel_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QDirModel::qt_metacall(_c, _id, _a);
}

int QDirModel_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QDirModel::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QDirModel_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QAbstractItemModel_buddy_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, QModelIndexAccessor* index0))
QModelIndex  QDirModel_QtDShell::buddy(const QModelIndex&  index0) const
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemModel_buddy_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(index0));
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_canFetchMore_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* parent0))
bool  QDirModel_QtDShell::canFetchMore(const QModelIndex&  parent0) const
{
    return qtd_QAbstractItemModel_canFetchMore_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0));
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QDirModel_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemModel_columnCount_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* parent0))
int  QDirModel_QtDShell::columnCount(const QModelIndex&  parent0) const
{
    return qtd_QAbstractItemModel_columnCount_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0));
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QDirModel_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemModel_data_QModelIndex_int_const_dispatch, (void *dId, QModelIndexAccessor* index0, int role1))
QVariant  QDirModel_QtDShell::data(const QModelIndex&  index0, int  role1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QAbstractItemModel_data_QModelIndex_int_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (int )role1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex_dispatch, (void *dId, void* data0, int action1, int row2, int column3, QModelIndexAccessor* parent4))
bool  QDirModel_QtDShell::dropMimeData(const QMimeData*  data0, Qt::DropAction  action1, int  row2, int  column3, const QModelIndex&  parent4)
{
    return qtd_QAbstractItemModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, (QMimeData* )data0, (Qt::DropAction )action1, (int )row2, (int )column3, &qtd_from_QModelIndex(parent4));
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QDirModel_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QDirModel_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_fetchMore_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* parent0))
void QDirModel_QtDShell::fetchMore(const QModelIndex&  parent0)
{
    qtd_QAbstractItemModel_fetchMore_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0));
}

QTD_FUNC_DECL(GUI, int, QAbstractItemModel_flags_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* index0))
Qt::ItemFlags  QDirModel_QtDShell::flags(const QModelIndex&  index0) const
{
    return (QFlags<Qt::ItemFlag>) qtd_QAbstractItemModel_flags_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0));
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_hasChildren_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* index0))
bool  QDirModel_QtDShell::hasChildren(const QModelIndex&  index0) const
{
    return qtd_QAbstractItemModel_hasChildren_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0));
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemModel_headerData_int_Orientation_int_const_dispatch, (void *dId, int section0, int orientation1, int role2))
QVariant  QDirModel_QtDShell::headerData(int  section0, Qt::Orientation  orientation1, int  role2) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QAbstractItemModel_headerData_int_Orientation_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )section0, (Qt::Orientation )orientation1, (int )role2);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_index_int_int_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, int row0, int column1, QModelIndexAccessor* parent2))
QModelIndex  QDirModel_QtDShell::index(int  row0, int  column1, const QModelIndex&  parent2) const
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemModel_index_int_int_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, (int )row0, (int )column1, &qtd_from_QModelIndex(parent2));
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_insertColumns_int_int_QModelIndex_dispatch, (void *dId, int column0, int count1, QModelIndexAccessor* parent2))
bool  QDirModel_QtDShell::insertColumns(int  column0, int  count1, const QModelIndex&  parent2)
{
    return qtd_QAbstractItemModel_insertColumns_int_int_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, (int )column0, (int )count1, &qtd_from_QModelIndex(parent2));
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_insertRows_int_int_QModelIndex_dispatch, (void *dId, int row0, int count1, QModelIndexAccessor* parent2))
bool  QDirModel_QtDShell::insertRows(int  row0, int  count1, const QModelIndex&  parent2)
{
    return qtd_QAbstractItemModel_insertRows_int_int_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, (int )row0, (int )count1, &qtd_from_QModelIndex(parent2));
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_match_QModelIndex_int_QVariant_int_MatchFlags_const_dispatch, (void *dId, void * __d_arr, QModelIndexAccessor* start0, int role1, void* value2, int hits3, int flags4))
QList<QModelIndex >  QDirModel_QtDShell::match(const QModelIndex&  start0, int  role1, const QVariant&  value2, int  hits3, Qt::MatchFlags  flags4) const
{
    QList<QModelIndex > __d_return_value;
    qtd_QAbstractItemModel_match_QModelIndex_int_QVariant_int_MatchFlags_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(start0), (int )role1, &(QVariant& )value2, (int )hits3, (Qt::MatchFlags )flags4);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemModel_mimeData_QList_const_dispatch, (void *dId, void* indexes0))
QMimeData*  QDirModel_QtDShell::mimeData(const QList<QModelIndex >&  indexes0) const
{
    return (QMimeData*) qtd_QAbstractItemModel_mimeData_QList_const_dispatch(QObjectLink::getLink(this)->dId, (void*)&indexes0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_mimeTypes_const_dispatch, (void *dId, void * __d_arr))
QStringList  QDirModel_QtDShell::mimeTypes() const
{
    QStringList __d_return_value;
    qtd_QAbstractItemModel_mimeTypes_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_parent_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, QModelIndexAccessor* child0))
QModelIndex  QDirModel_QtDShell::parent(const QModelIndex&  child0) const
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemModel_parent_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(child0));
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_removeColumns_int_int_QModelIndex_dispatch, (void *dId, int column0, int count1, QModelIndexAccessor* parent2))
bool  QDirModel_QtDShell::removeColumns(int  column0, int  count1, const QModelIndex&  parent2)
{
    return qtd_QAbstractItemModel_removeColumns_int_int_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, (int )column0, (int )count1, &qtd_from_QModelIndex(parent2));
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_removeRows_int_int_QModelIndex_dispatch, (void *dId, int row0, int count1, QModelIndexAccessor* parent2))
bool  QDirModel_QtDShell::removeRows(int  row0, int  count1, const QModelIndex&  parent2)
{
    return qtd_QAbstractItemModel_removeRows_int_int_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, (int )row0, (int )count1, &qtd_from_QModelIndex(parent2));
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_revert_dispatch, (void *dId))
void QDirModel_QtDShell::revert()
{
    qtd_QAbstractItemModel_revert_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemModel_rowCount_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* parent0))
int  QDirModel_QtDShell::rowCount(const QModelIndex&  parent0) const
{
    return qtd_QAbstractItemModel_rowCount_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0));
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_setData_QModelIndex_QVariant_int_dispatch, (void *dId, QModelIndexAccessor* index0, void* value1, int role2))
bool  QDirModel_QtDShell::setData(const QModelIndex&  index0, const QVariant&  value1, int  role2)
{
    return qtd_QAbstractItemModel_setData_QModelIndex_QVariant_int_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), &(QVariant& )value1, (int )role2);
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_setHeaderData_int_Orientation_QVariant_int_dispatch, (void *dId, int section0, int orientation1, void* value2, int role3))
bool  QDirModel_QtDShell::setHeaderData(int  section0, Qt::Orientation  orientation1, const QVariant&  value2, int  role3)
{
    return qtd_QAbstractItemModel_setHeaderData_int_Orientation_QVariant_int_dispatch(QObjectLink::getLink(this)->dId, (int )section0, (Qt::Orientation )orientation1, &(QVariant& )value2, (int )role3);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_sort_int_SortOrder_dispatch, (void *dId, int column0, int order1))
void QDirModel_QtDShell::sort(int  column0, Qt::SortOrder  order1)
{
    qtd_QAbstractItemModel_sort_int_SortOrder_dispatch(QObjectLink::getLink(this)->dId, (int )column0, (Qt::SortOrder )order1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_span_QModelIndex_const_dispatch, (void *dId, QSize *__d_return_value, QModelIndexAccessor* index0))
QSize  QDirModel_QtDShell::span(const QModelIndex&  index0) const
{
    QSize __d_return_value;
    qtd_QAbstractItemModel_span_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(index0));
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_submit_dispatch, (void *dId))
bool  QDirModel_QtDShell::submit()
{
    return qtd_QAbstractItemModel_submit_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemModel_supportedDropActions_const_dispatch, (void *dId))
Qt::DropActions  QDirModel_QtDShell::supportedDropActions() const
{
    return (QFlags<Qt::DropAction>) qtd_QAbstractItemModel_supportedDropActions_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QDirModel_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QDirModel_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
QModelIndex  QDirModel_QtDShell::index(const QString&  path0, int  column1) const
{
    return QDirModel::index((const QString& )path0, (int )column1);
}

QObject*  QDirModel_QtDShell::parent() const
{
    return QDirModel::parent();
}

// public overrides for functions that are protected in the base class
void QDirModel_QtDShell::__public_beginInsertColumns(const QModelIndex&  parent0, int  first1, int  last2)
{
    QAbstractItemModel::beginInsertColumns((const QModelIndex& )parent0, (int )first1, (int )last2);
}

void QDirModel_QtDShell::__public_beginInsertRows(const QModelIndex&  parent0, int  first1, int  last2)
{
    QAbstractItemModel::beginInsertRows((const QModelIndex& )parent0, (int )first1, (int )last2);
}

bool  QDirModel_QtDShell::__public_beginMoveColumns(const QModelIndex&  sourceParent0, int  sourceFirst1, int  sourceLast2, const QModelIndex&  destinationParent3, int  destinationColumn4)
{
    return QAbstractItemModel::beginMoveColumns((const QModelIndex& )sourceParent0, (int )sourceFirst1, (int )sourceLast2, (const QModelIndex& )destinationParent3, (int )destinationColumn4);
}

bool  QDirModel_QtDShell::__public_beginMoveRows(const QModelIndex&  sourceParent0, int  sourceFirst1, int  sourceLast2, const QModelIndex&  destinationParent3, int  destinationRow4)
{
    return QAbstractItemModel::beginMoveRows((const QModelIndex& )sourceParent0, (int )sourceFirst1, (int )sourceLast2, (const QModelIndex& )destinationParent3, (int )destinationRow4);
}

void QDirModel_QtDShell::__public_beginRemoveColumns(const QModelIndex&  parent0, int  first1, int  last2)
{
    QAbstractItemModel::beginRemoveColumns((const QModelIndex& )parent0, (int )first1, (int )last2);
}

void QDirModel_QtDShell::__public_beginRemoveRows(const QModelIndex&  parent0, int  first1, int  last2)
{
    QAbstractItemModel::beginRemoveRows((const QModelIndex& )parent0, (int )first1, (int )last2);
}

void QDirModel_QtDShell::__public_beginResetModel()
{
    QAbstractItemModel::beginResetModel();
}

void QDirModel_QtDShell::__public_changePersistentIndex(const QModelIndex&  from0, const QModelIndex&  to1)
{
    QAbstractItemModel::changePersistentIndex((const QModelIndex& )from0, (const QModelIndex& )to1);
}

void QDirModel_QtDShell::__public_changePersistentIndexList(const QList<QModelIndex >&  from0, const QList<QModelIndex >&  to1)
{
    QAbstractItemModel::changePersistentIndexList((const QList<QModelIndex >& )from0, (const QList<QModelIndex >& )to1);
}

QModelIndex  QDirModel_QtDShell::__public_createIndex(int  row0, int  column1, int  id2) const
{
    return QAbstractItemModel::createIndex((int )row0, (int )column1, (int )id2);
}

QModelIndex  QDirModel_QtDShell::__public_createIndex(int  row0, int  column1, unsigned int  id2) const
{
    return QAbstractItemModel::createIndex((int )row0, (int )column1, (unsigned int )id2);
}

QModelIndex  QDirModel_QtDShell::__public_createIndex(int  row0, int  column1, void*  data2) const
{
    return QAbstractItemModel::createIndex((int )row0, (int )column1, (void* )data2);
}

bool  QDirModel_QtDShell::__public_decodeData(int  row0, int  column1, const QModelIndex&  parent2, QDataStream&  stream3)
{
    return QAbstractItemModel::decodeData((int )row0, (int )column1, (const QModelIndex& )parent2, (QDataStream& )stream3);
}

void QDirModel_QtDShell::__public_encodeData(const QList<QModelIndex >&  indexes0, QDataStream&  stream1) const
{
    QAbstractItemModel::encodeData((const QList<QModelIndex >& )indexes0, (QDataStream& )stream1);
}

void QDirModel_QtDShell::__public_endInsertColumns()
{
    QAbstractItemModel::endInsertColumns();
}

void QDirModel_QtDShell::__public_endInsertRows()
{
    QAbstractItemModel::endInsertRows();
}

void QDirModel_QtDShell::__public_endMoveColumns()
{
    QAbstractItemModel::endMoveColumns();
}

void QDirModel_QtDShell::__public_endMoveRows()
{
    QAbstractItemModel::endMoveRows();
}

void QDirModel_QtDShell::__public_endRemoveColumns()
{
    QAbstractItemModel::endRemoveColumns();
}

void QDirModel_QtDShell::__public_endRemoveRows()
{
    QAbstractItemModel::endRemoveRows();
}

void QDirModel_QtDShell::__public_endResetModel()
{
    QAbstractItemModel::endResetModel();
}

QList<QModelIndex >  QDirModel_QtDShell::__public_persistentIndexList() const
{
    return QAbstractItemModel::persistentIndexList();
}

void QDirModel_QtDShell::__public_reset()
{
    QAbstractItemModel::reset();
}

QObject*  QDirModel_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QDirModel_QtDShell::__public_dataChanged(const QModelIndex&  topLeft0, const QModelIndex&  bottomRight1)
{
    QAbstractItemModel::dataChanged((const QModelIndex& )topLeft0, (const QModelIndex& )bottomRight1);
}

void QDirModel_QtDShell::__public_headerDataChanged(int  orientation0, int  first1, int  last2)
{
    QAbstractItemModel::headerDataChanged((Qt::Orientation )orientation0, (int )first1, (int )last2);
}

void QDirModel_QtDShell::__public_layoutAboutToBeChanged()
{
    QAbstractItemModel::layoutAboutToBeChanged();
}

void QDirModel_QtDShell::__public_layoutChanged()
{
    QAbstractItemModel::layoutChanged();
}

// Write virtual function overries used to decide on static/virtual calls
QModelIndex  QDirModel_QtDShell::__override_buddy(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemModel::buddy((const QModelIndex& )index0);
    } else {
        return buddy((const QModelIndex& )index0);
    }
}

bool  QDirModel_QtDShell::__override_canFetchMore(const QModelIndex&  parent0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemModel::canFetchMore((const QModelIndex& )parent0);
    } else {
        return canFetchMore((const QModelIndex& )parent0);
    }
}

void QDirModel_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

int  QDirModel_QtDShell::__override_columnCount(const QModelIndex&  parent0, bool static_call) const
{
    if (static_call) {
        return QDirModel::columnCount((const QModelIndex& )parent0);
    } else {
        return columnCount((const QModelIndex& )parent0);
    }
}

void QDirModel_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

QVariant  QDirModel_QtDShell::__override_data(const QModelIndex&  index0, int  role1, bool static_call) const
{
    if (static_call) {
        return QDirModel::data((const QModelIndex& )index0, (int )role1);
    } else {
        return data((const QModelIndex& )index0, (int )role1);
    }
}

bool  QDirModel_QtDShell::__override_dropMimeData(const QMimeData*  data0, int  action1, int  row2, int  column3, const QModelIndex&  parent4, bool static_call)
{
    if (static_call) {
        return QDirModel::dropMimeData((const QMimeData* )data0, (Qt::DropAction )action1, (int )row2, (int )column3, (const QModelIndex& )parent4);
    } else {
        return dropMimeData((const QMimeData* )data0, (Qt::DropAction )action1, (int )row2, (int )column3, (const QModelIndex& )parent4);
    }
}

bool  QDirModel_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QDirModel_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QDirModel_QtDShell::__override_fetchMore(const QModelIndex&  parent0, bool static_call)
{
    if (static_call) {
        QAbstractItemModel::fetchMore((const QModelIndex& )parent0);
    } else {
        fetchMore((const QModelIndex& )parent0);
    }
}

int  QDirModel_QtDShell::__override_flags(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QDirModel::flags((const QModelIndex& )index0);
    } else {
        return flags((const QModelIndex& )index0);
    }
}

bool  QDirModel_QtDShell::__override_hasChildren(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QDirModel::hasChildren((const QModelIndex& )index0);
    } else {
        return hasChildren((const QModelIndex& )index0);
    }
}

QVariant  QDirModel_QtDShell::__override_headerData(int  section0, int  orientation1, int  role2, bool static_call) const
{
    if (static_call) {
        return QDirModel::headerData((int )section0, (Qt::Orientation )orientation1, (int )role2);
    } else {
        return headerData((int )section0, (Qt::Orientation )orientation1, (int )role2);
    }
}

QModelIndex  QDirModel_QtDShell::__override_index(int  row0, int  column1, const QModelIndex&  parent2, bool static_call) const
{
    if (static_call) {
        return QDirModel::index((int )row0, (int )column1, (const QModelIndex& )parent2);
    } else {
        return index((int )row0, (int )column1, (const QModelIndex& )parent2);
    }
}

bool  QDirModel_QtDShell::__override_insertColumns(int  column0, int  count1, const QModelIndex&  parent2, bool static_call)
{
    if (static_call) {
        return QAbstractItemModel::insertColumns((int )column0, (int )count1, (const QModelIndex& )parent2);
    } else {
        return insertColumns((int )column0, (int )count1, (const QModelIndex& )parent2);
    }
}

bool  QDirModel_QtDShell::__override_insertRows(int  row0, int  count1, const QModelIndex&  parent2, bool static_call)
{
    if (static_call) {
        return QAbstractItemModel::insertRows((int )row0, (int )count1, (const QModelIndex& )parent2);
    } else {
        return insertRows((int )row0, (int )count1, (const QModelIndex& )parent2);
    }
}

QList<QModelIndex >  QDirModel_QtDShell::__override_match(const QModelIndex&  start0, int  role1, const QVariant&  value2, int  hits3, int  flags4, bool static_call) const
{
    if (static_call) {
        return QAbstractItemModel::match((const QModelIndex& )start0, (int )role1, (const QVariant& )value2, (int )hits3, (Qt::MatchFlags )flags4);
    } else {
        return match((const QModelIndex& )start0, (int )role1, (const QVariant& )value2, (int )hits3, (Qt::MatchFlags )flags4);
    }
}

QMimeData*  QDirModel_QtDShell::__override_mimeData(const QList<QModelIndex >&  indexes0, bool static_call) const
{
    if (static_call) {
        return QDirModel::mimeData((const QList<QModelIndex >& )indexes0);
    } else {
        return mimeData((const QList<QModelIndex >& )indexes0);
    }
}

QStringList  QDirModel_QtDShell::__override_mimeTypes(bool static_call) const
{
    if (static_call) {
        return QDirModel::mimeTypes();
    } else {
        return mimeTypes();
    }
}

QModelIndex  QDirModel_QtDShell::__override_parent(const QModelIndex&  child0, bool static_call) const
{
    if (static_call) {
        return QDirModel::parent((const QModelIndex& )child0);
    } else {
        return parent((const QModelIndex& )child0);
    }
}

bool  QDirModel_QtDShell::__override_removeColumns(int  column0, int  count1, const QModelIndex&  parent2, bool static_call)
{
    if (static_call) {
        return QAbstractItemModel::removeColumns((int )column0, (int )count1, (const QModelIndex& )parent2);
    } else {
        return removeColumns((int )column0, (int )count1, (const QModelIndex& )parent2);
    }
}

bool  QDirModel_QtDShell::__override_removeRows(int  row0, int  count1, const QModelIndex&  parent2, bool static_call)
{
    if (static_call) {
        return QAbstractItemModel::removeRows((int )row0, (int )count1, (const QModelIndex& )parent2);
    } else {
        return removeRows((int )row0, (int )count1, (const QModelIndex& )parent2);
    }
}

void QDirModel_QtDShell::__override_revert(bool static_call)
{
    if (static_call) {
        QAbstractItemModel::revert();
    } else {
        revert();
    }
}

int  QDirModel_QtDShell::__override_rowCount(const QModelIndex&  parent0, bool static_call) const
{
    if (static_call) {
        return QDirModel::rowCount((const QModelIndex& )parent0);
    } else {
        return rowCount((const QModelIndex& )parent0);
    }
}

bool  QDirModel_QtDShell::__override_setData(const QModelIndex&  index0, const QVariant&  value1, int  role2, bool static_call)
{
    if (static_call) {
        return QDirModel::setData((const QModelIndex& )index0, (const QVariant& )value1, (int )role2);
    } else {
        return setData((const QModelIndex& )index0, (const QVariant& )value1, (int )role2);
    }
}

bool  QDirModel_QtDShell::__override_setHeaderData(int  section0, int  orientation1, const QVariant&  value2, int  role3, bool static_call)
{
    if (static_call) {
        return QAbstractItemModel::setHeaderData((int )section0, (Qt::Orientation )orientation1, (const QVariant& )value2, (int )role3);
    } else {
        return setHeaderData((int )section0, (Qt::Orientation )orientation1, (const QVariant& )value2, (int )role3);
    }
}

void QDirModel_QtDShell::__override_sort(int  column0, int  order1, bool static_call)
{
    if (static_call) {
        QDirModel::sort((int )column0, (Qt::SortOrder )order1);
    } else {
        sort((int )column0, (Qt::SortOrder )order1);
    }
}

QSize  QDirModel_QtDShell::__override_span(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemModel::span((const QModelIndex& )index0);
    } else {
        return span((const QModelIndex& )index0);
    }
}

bool  QDirModel_QtDShell::__override_submit(bool static_call)
{
    if (static_call) {
        return QAbstractItemModel::submit();
    } else {
        return submit();
    }
}

int  QDirModel_QtDShell::__override_supportedDropActions(bool static_call) const
{
    if (static_call) {
        return QDirModel::supportedDropActions();
    } else {
        return supportedDropActions();
    }
}

void QDirModel_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// ---externC---
// QDirModel::QDirModel(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QDirModel_QDirModel_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QDirModel_QtDShell *__qt_this = new QDirModel_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QDirModel::QDirModel(const QStringList & nameFilters, QFlags<QDir::Filter> filters, QFlags<QDir::SortFlag> sort, QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QDirModel_QDirModel_QList_Filters_SortFlags_QObject
(void *d_ptr,
 void* nameFilters0,
 int filters1,
 int sort2,
 void* parent3)
{
QStringList __qt_nameFilters0 = (*(QStringList *)nameFilters0);
    QFlags<QDir::Filter> __qt_filters1 = (QFlags<QDir::Filter>) filters1;
    QFlags<QDir::SortFlag> __qt_sort2 = (QFlags<QDir::SortFlag>) sort2;
    QObject*  __qt_parent3 = (QObject* ) parent3;
    QDirModel_QtDShell *__qt_this = new QDirModel_QtDShell(d_ptr, (const QStringList& )__qt_nameFilters0, (QDir::Filters )__qt_filters1, (QDir::SortFlags )__qt_sort2, (QObject* )__qt_parent3);
    return (void *) __qt_this;

}

// QDirModel::fileIcon(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void* qtd_QDirModel_fileIcon_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    QIcon  __qt_return_value = __qt_this->fileIcon((const QModelIndex& )__qt_index0);

    void* __d_return_value = (void*) new QIcon(__qt_return_value);

    return __d_return_value;
}

// QDirModel::fileInfo(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void* qtd_QDirModel_fileInfo_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    QFileInfo  __qt_return_value = __qt_this->fileInfo((const QModelIndex& )__qt_index0);

    void* __d_return_value = (void*) new QFileInfo(__qt_return_value);

    return __d_return_value;
}

// QDirModel::fileName(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QDirModel_fileName_QModelIndex_const
(void* __this_nativeId,
 void* __d_return_value,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->fileName((const QModelIndex& )__qt_index0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDirModel::filePath(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QDirModel_filePath_QModelIndex_const
(void* __this_nativeId,
 void* __d_return_value,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->filePath((const QModelIndex& )__qt_index0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDirModel::filter() const
QTD_EXTERN QTD_EXPORT int qtd_QDirModel_filter_const
(void* __this_nativeId)
{
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->filter();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDirModel::iconProvider() const
QTD_EXTERN QTD_EXPORT void* qtd_QDirModel_iconProvider_const
(void* __this_nativeId)
{
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    QFileIconProvider*  __qt_return_value = __qt_this->iconProvider();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QDirModel::index(const QString & path, int column) const
QTD_EXTERN QTD_EXPORT void qtd_QDirModel_index_string_int_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 DArray path0,
 int column1)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    QDirModel *__qt_this = (QDirModel *) __this_nativeId;
    QModelIndex  __qt_return_value = __qt_this->index((const QString& )__qt_path0, (int )column1);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QDirModel::isDir(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT bool qtd_QDirModel_isDir_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isDir((const QModelIndex& )__qt_index0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDirModel::isReadOnly() const
QTD_EXTERN QTD_EXPORT bool qtd_QDirModel_isReadOnly_const
(void* __this_nativeId)
{
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isReadOnly();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDirModel::lazyChildCount() const
QTD_EXTERN QTD_EXPORT bool qtd_QDirModel_lazyChildCount_const
(void* __this_nativeId)
{
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->lazyChildCount();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDirModel::mkdir(const QModelIndex & parent_, const QString & name)
QTD_EXTERN QTD_EXPORT void qtd_QDirModel_mkdir_QModelIndex_string
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 QModelIndexAccessor parent0,
 DArray name1)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QString __qt_name1 = QString::fromUtf8((const char *)name1.ptr, name1.length);
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    QModelIndex  __qt_return_value = __qt_this->mkdir((const QModelIndex& )__qt_parent0, (const QString& )__qt_name1);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QDirModel::nameFilters() const
QTD_EXTERN QTD_EXPORT void qtd_QDirModel_nameFilters_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    QStringList  __qt_return_value = __qt_this->nameFilters();

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QDirModel::refresh(const QModelIndex & parent_)
QTD_EXTERN QTD_EXPORT void qtd_QDirModel_refresh_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor parent0)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    __qt_this->refresh((const QModelIndex& )__qt_parent0);

}

// QDirModel::remove(const QModelIndex & index)
QTD_EXTERN QTD_EXPORT bool qtd_QDirModel_remove_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->remove((const QModelIndex& )__qt_index0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDirModel::resolveSymlinks() const
QTD_EXTERN QTD_EXPORT bool qtd_QDirModel_resolveSymlinks_const
(void* __this_nativeId)
{
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->resolveSymlinks();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDirModel::rmdir(const QModelIndex & index)
QTD_EXTERN QTD_EXPORT bool qtd_QDirModel_rmdir_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->rmdir((const QModelIndex& )__qt_index0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDirModel::setFilter(QFlags<QDir::Filter> filters)
QTD_EXTERN QTD_EXPORT void qtd_QDirModel_setFilter_Filters
(void* __this_nativeId,
 int filters0)
{
    QFlags<QDir::Filter> __qt_filters0 = (QFlags<QDir::Filter>) filters0;
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    __qt_this->setFilter((QDir::Filters )__qt_filters0);

}

// QDirModel::setIconProvider(QFileIconProvider * provider)
QTD_EXTERN QTD_EXPORT void qtd_QDirModel_setIconProvider_QFileIconProvider
(void* __this_nativeId,
 void* provider0)
{
    QFileIconProvider*  __qt_provider0 = (QFileIconProvider* ) provider0;
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    __qt_this->setIconProvider((QFileIconProvider* )__qt_provider0);

}

// QDirModel::setLazyChildCount(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QDirModel_setLazyChildCount_bool
(void* __this_nativeId,
 bool enable0)
{
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    __qt_this->setLazyChildCount((bool )enable0);

}

// QDirModel::setNameFilters(const QStringList & filters)
QTD_EXTERN QTD_EXPORT void qtd_QDirModel_setNameFilters_QList
(void* __this_nativeId,
 void* filters0)
{
QStringList __qt_filters0 = (*(QStringList *)filters0);
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    __qt_this->setNameFilters((const QStringList& )__qt_filters0);

}

// QDirModel::setReadOnly(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QDirModel_setReadOnly_bool
(void* __this_nativeId,
 bool enable0)
{
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    __qt_this->setReadOnly((bool )enable0);

}

// QDirModel::setResolveSymlinks(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QDirModel_setResolveSymlinks_bool
(void* __this_nativeId,
 bool enable0)
{
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    __qt_this->setResolveSymlinks((bool )enable0);

}

// QDirModel::setSorting(QFlags<QDir::SortFlag> sort)
QTD_EXTERN QTD_EXPORT void qtd_QDirModel_setSorting_SortFlags
(void* __this_nativeId,
 int sort0)
{
    QFlags<QDir::SortFlag> __qt_sort0 = (QFlags<QDir::SortFlag>) sort0;
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    __qt_this->setSorting((QDir::SortFlags )__qt_sort0);

}

// QDirModel::sorting() const
QTD_EXTERN QTD_EXPORT int qtd_QDirModel_sorting_const
(void* __this_nativeId)
{
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->sorting();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDirModel::columnCount(const QModelIndex & parent_) const
QTD_EXTERN QTD_EXPORT int qtd_QDirModel_columnCount_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor parent0)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_columnCount((const QModelIndex& )__qt_parent0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDirModel::data(const QModelIndex & index, int role) const
QTD_EXTERN QTD_EXPORT void* qtd_QDirModel_data_QModelIndex_int_const
(void* __this_nativeId,
 QModelIndexAccessor index0,
 int role1)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_data((const QModelIndex& )__qt_index0, (int )role1, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QDirModel::dropMimeData(const QMimeData * data, Qt::DropAction action, int row, int column, const QModelIndex & parent_)
QTD_EXTERN QTD_EXPORT bool qtd_QDirModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex
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
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_dropMimeData((const QMimeData* )__qt_data0, (Qt::DropAction )__qt_action1, (int )row2, (int )column3, (const QModelIndex& )__qt_parent4, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDirModel::flags(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT int qtd_QDirModel_flags_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_flags((const QModelIndex& )__qt_index0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDirModel::hasChildren(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT bool qtd_QDirModel_hasChildren_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_hasChildren((const QModelIndex& )__qt_index0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDirModel::headerData(int section, Qt::Orientation orientation, int role) const
QTD_EXTERN QTD_EXPORT void* qtd_QDirModel_headerData_int_Orientation_int_const
(void* __this_nativeId,
 int section0,
 int orientation1,
 int role2)
{
    Qt::Orientation __qt_orientation1 = (Qt::Orientation) orientation1;
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_headerData((int )section0, (Qt::Orientation )__qt_orientation1, (int )role2, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QDirModel::index(int row, int column, const QModelIndex & parent_) const
QTD_EXTERN QTD_EXPORT void qtd_QDirModel_index_int_int_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int row0,
 int column1,
 QModelIndexAccessor parent2)
{
    QModelIndex __qt_parent2 = qtd_to_QModelIndex(parent2);
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QModelIndex  __qt_return_value = __qt_this->__override_index((int )row0, (int )column1, (const QModelIndex& )__qt_parent2, __do_static_call);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QDirModel::mimeData(const QList<QModelIndex > & indexes) const
QTD_EXTERN QTD_EXPORT void* qtd_QDirModel_mimeData_QList_const
(void* __this_nativeId,
 void* indexes0)
{
QList<QModelIndex > __qt_indexes0 = (*(QList<QModelIndex > *)indexes0);
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QMimeData*  __qt_return_value = __qt_this->__override_mimeData((const QList<QModelIndex >& )__qt_indexes0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QDirModel::mimeTypes() const
QTD_EXTERN QTD_EXPORT void qtd_QDirModel_mimeTypes_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QStringList  __qt_return_value = __qt_this->__override_mimeTypes(__do_static_call);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QDirModel::parent(const QModelIndex & child) const
QTD_EXTERN QTD_EXPORT void qtd_QDirModel_parent_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 QModelIndexAccessor child0)
{
    QModelIndex __qt_child0 = qtd_to_QModelIndex(child0);
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QModelIndex  __qt_return_value = __qt_this->__override_parent((const QModelIndex& )__qt_child0, __do_static_call);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QDirModel::rowCount(const QModelIndex & parent_) const
QTD_EXTERN QTD_EXPORT int qtd_QDirModel_rowCount_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor parent0)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_rowCount((const QModelIndex& )__qt_parent0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDirModel::setData(const QModelIndex & index, const QVariant & value, int role)
QTD_EXTERN QTD_EXPORT bool qtd_QDirModel_setData_QModelIndex_QVariant_int
(void* __this_nativeId,
 QModelIndexAccessor index0,
 QVariant* value1,
 int role2)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QVariant __qt_value1 = value1 == NULL ? QVariant() : QVariant(*value1);
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_setData((const QModelIndex& )__qt_index0, (const QVariant& )__qt_value1, (int )role2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDirModel::sort(int column, Qt::SortOrder order)
QTD_EXTERN QTD_EXPORT void qtd_QDirModel_sort_int_SortOrder
(void* __this_nativeId,
 int column0,
 int order1)
{
    Qt::SortOrder __qt_order1 = (Qt::SortOrder) order1;
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_sort((int )column0, (Qt::SortOrder )__qt_order1, __do_static_call);

}

// QDirModel::supportedDropActions() const
QTD_EXTERN QTD_EXPORT int qtd_QDirModel_supportedDropActions_const
(void* __this_nativeId)
{
    QDirModel_QtDShell *__qt_this = (QDirModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_supportedDropActions(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QDirModel_staticMetaObject() {
    return (void*)&QDirModel::staticMetaObject;
}


