#include <QPixmap>
#include <QSize>
#include <QStringList>
#include <QVariant>
#include <qabstractitemmodel.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qlist.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qproxymodel.h>
#include <qstringlist.h>
#include <qvariant.h>

#include "QProxyModel_shell.h"
#include <iostream>
#include <qproxymodel.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QProxyModelEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QProxyModelEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QProxyModel_createEntity(void *nativeId, void* dId)
{
    new QProxyModelEntity((QObject*)nativeId, dId);
}

QProxyModel_QtDShell::QProxyModel_QtDShell(void *d_ptr, QObject*  parent0)
    : QProxyModel(parent0),
      QObjectLink(this, d_ptr)
{
}

QProxyModel_QtDShell::~QProxyModel_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QProxyModel_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QProxyModel::metaObject();
}

int QProxyModel_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QProxyModel::qt_metacall(_c, _id, _a);
}

int QProxyModel_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QProxyModel::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QProxyModel_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QProxyModel_QtDShell *__qt_this = (QProxyModel_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QAbstractItemModel_buddy_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, QModelIndexAccessor* index0))
QModelIndex  QProxyModel_QtDShell::buddy(const QModelIndex&  index0) const
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemModel_buddy_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(index0));
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_canFetchMore_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* parent0))
bool  QProxyModel_QtDShell::canFetchMore(const QModelIndex&  parent0) const
{
    return qtd_QAbstractItemModel_canFetchMore_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0));
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QProxyModel_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemModel_columnCount_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* parent0))
int  QProxyModel_QtDShell::columnCount(const QModelIndex&  parent0) const
{
    return qtd_QAbstractItemModel_columnCount_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0));
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QProxyModel_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemModel_data_QModelIndex_int_const_dispatch, (void *dId, QModelIndexAccessor* index0, int role1))
QVariant  QProxyModel_QtDShell::data(const QModelIndex&  index0, int  role1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QAbstractItemModel_data_QModelIndex_int_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (int )role1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex_dispatch, (void *dId, void* data0, int action1, int row2, int column3, QModelIndexAccessor* parent4))
bool  QProxyModel_QtDShell::dropMimeData(const QMimeData*  data0, Qt::DropAction  action1, int  row2, int  column3, const QModelIndex&  parent4)
{
    return qtd_QAbstractItemModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, (QMimeData* )data0, (Qt::DropAction )action1, (int )row2, (int )column3, &qtd_from_QModelIndex(parent4));
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QProxyModel_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QProxyModel_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_fetchMore_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* parent0))
void QProxyModel_QtDShell::fetchMore(const QModelIndex&  parent0)
{
    qtd_QAbstractItemModel_fetchMore_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0));
}

QTD_FUNC_DECL(GUI, int, QAbstractItemModel_flags_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* index0))
Qt::ItemFlags  QProxyModel_QtDShell::flags(const QModelIndex&  index0) const
{
    return (QFlags<Qt::ItemFlag>) qtd_QAbstractItemModel_flags_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0));
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_hasChildren_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* parent0))
bool  QProxyModel_QtDShell::hasChildren(const QModelIndex&  parent0) const
{
    return qtd_QAbstractItemModel_hasChildren_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0));
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemModel_headerData_int_Orientation_int_const_dispatch, (void *dId, int section0, int orientation1, int role2))
QVariant  QProxyModel_QtDShell::headerData(int  section0, Qt::Orientation  orientation1, int  role2) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QAbstractItemModel_headerData_int_Orientation_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )section0, (Qt::Orientation )orientation1, (int )role2);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_index_int_int_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, int row0, int column1, QModelIndexAccessor* parent2))
QModelIndex  QProxyModel_QtDShell::index(int  row0, int  column1, const QModelIndex&  parent2) const
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemModel_index_int_int_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, (int )row0, (int )column1, &qtd_from_QModelIndex(parent2));
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_insertColumns_int_int_QModelIndex_dispatch, (void *dId, int column0, int count1, QModelIndexAccessor* parent2))
bool  QProxyModel_QtDShell::insertColumns(int  column0, int  count1, const QModelIndex&  parent2)
{
    return qtd_QAbstractItemModel_insertColumns_int_int_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, (int )column0, (int )count1, &qtd_from_QModelIndex(parent2));
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_insertRows_int_int_QModelIndex_dispatch, (void *dId, int row0, int count1, QModelIndexAccessor* parent2))
bool  QProxyModel_QtDShell::insertRows(int  row0, int  count1, const QModelIndex&  parent2)
{
    return qtd_QAbstractItemModel_insertRows_int_int_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, (int )row0, (int )count1, &qtd_from_QModelIndex(parent2));
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_match_QModelIndex_int_QVariant_int_MatchFlags_const_dispatch, (void *dId, void * __d_arr, QModelIndexAccessor* start0, int role1, void* value2, int hits3, int flags4))
QList<QModelIndex >  QProxyModel_QtDShell::match(const QModelIndex&  start0, int  role1, const QVariant&  value2, int  hits3, Qt::MatchFlags  flags4) const
{
    QList<QModelIndex > __d_return_value;
    qtd_QAbstractItemModel_match_QModelIndex_int_QVariant_int_MatchFlags_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(start0), (int )role1, &(QVariant& )value2, (int )hits3, (Qt::MatchFlags )flags4);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemModel_mimeData_QList_const_dispatch, (void *dId, void* indexes0))
QMimeData*  QProxyModel_QtDShell::mimeData(const QList<QModelIndex >&  indexes0) const
{
    return (QMimeData*) qtd_QAbstractItemModel_mimeData_QList_const_dispatch(QObjectLink::getLink(this)->dId, (void*)&indexes0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_mimeTypes_const_dispatch, (void *dId, void * __d_arr))
QStringList  QProxyModel_QtDShell::mimeTypes() const
{
    QStringList __d_return_value;
    qtd_QAbstractItemModel_mimeTypes_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_parent_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, QModelIndexAccessor* child0))
QModelIndex  QProxyModel_QtDShell::parent(const QModelIndex&  child0) const
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemModel_parent_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(child0));
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_removeColumns_int_int_QModelIndex_dispatch, (void *dId, int column0, int count1, QModelIndexAccessor* parent2))
bool  QProxyModel_QtDShell::removeColumns(int  column0, int  count1, const QModelIndex&  parent2)
{
    return qtd_QAbstractItemModel_removeColumns_int_int_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, (int )column0, (int )count1, &qtd_from_QModelIndex(parent2));
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_removeRows_int_int_QModelIndex_dispatch, (void *dId, int row0, int count1, QModelIndexAccessor* parent2))
bool  QProxyModel_QtDShell::removeRows(int  row0, int  count1, const QModelIndex&  parent2)
{
    return qtd_QAbstractItemModel_removeRows_int_int_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, (int )row0, (int )count1, &qtd_from_QModelIndex(parent2));
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_revert_dispatch, (void *dId))
void QProxyModel_QtDShell::revert()
{
    qtd_QAbstractItemModel_revert_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemModel_rowCount_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* parent0))
int  QProxyModel_QtDShell::rowCount(const QModelIndex&  parent0) const
{
    return qtd_QAbstractItemModel_rowCount_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0));
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_setData_QModelIndex_QVariant_int_dispatch, (void *dId, QModelIndexAccessor* index0, void* value1, int role2))
bool  QProxyModel_QtDShell::setData(const QModelIndex&  index0, const QVariant&  value1, int  role2)
{
    return qtd_QAbstractItemModel_setData_QModelIndex_QVariant_int_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), &(QVariant& )value1, (int )role2);
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_setHeaderData_int_Orientation_QVariant_int_dispatch, (void *dId, int section0, int orientation1, void* value2, int role3))
bool  QProxyModel_QtDShell::setHeaderData(int  section0, Qt::Orientation  orientation1, const QVariant&  value2, int  role3)
{
    return qtd_QAbstractItemModel_setHeaderData_int_Orientation_QVariant_int_dispatch(QObjectLink::getLink(this)->dId, (int )section0, (Qt::Orientation )orientation1, &(QVariant& )value2, (int )role3);
}

QTD_FUNC_DECL(GUI, void, QProxyModel_setModel_QAbstractItemModel_dispatch, (void *dId, void* model0))
QTD_FUNC(GUI, QProxyModel_setModel_QAbstractItemModel_dispatch)
void QProxyModel_QtDShell::setModel(QAbstractItemModel*  model0)
{
    qtd_QProxyModel_setModel_QAbstractItemModel_dispatch(QObjectLink::getLink(this)->dId, (QAbstractItemModel* )model0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_sort_int_SortOrder_dispatch, (void *dId, int column0, int order1))
void QProxyModel_QtDShell::sort(int  column0, Qt::SortOrder  order1)
{
    qtd_QAbstractItemModel_sort_int_SortOrder_dispatch(QObjectLink::getLink(this)->dId, (int )column0, (Qt::SortOrder )order1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_span_QModelIndex_const_dispatch, (void *dId, QSize *__d_return_value, QModelIndexAccessor* index0))
QSize  QProxyModel_QtDShell::span(const QModelIndex&  index0) const
{
    QSize __d_return_value;
    qtd_QAbstractItemModel_span_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(index0));
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_submit_dispatch, (void *dId))
bool  QProxyModel_QtDShell::submit()
{
    return qtd_QAbstractItemModel_submit_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemModel_supportedDropActions_const_dispatch, (void *dId))
Qt::DropActions  QProxyModel_QtDShell::supportedDropActions() const
{
    return (QFlags<Qt::DropAction>) qtd_QAbstractItemModel_supportedDropActions_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QProxyModel_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QProxyModel_initCallBacks(VoidFunc *virts) {
    qtd_QProxyModel_setModel_QAbstractItemModel_dispatch = (qtd_QProxyModel_setModel_QAbstractItemModel_dispatch_t) virts[0];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
void QProxyModel_QtDShell::__public_beginInsertColumns(const QModelIndex&  parent0, int  first1, int  last2)
{
    QAbstractItemModel::beginInsertColumns((const QModelIndex& )parent0, (int )first1, (int )last2);
}

void QProxyModel_QtDShell::__public_beginInsertRows(const QModelIndex&  parent0, int  first1, int  last2)
{
    QAbstractItemModel::beginInsertRows((const QModelIndex& )parent0, (int )first1, (int )last2);
}

bool  QProxyModel_QtDShell::__public_beginMoveColumns(const QModelIndex&  sourceParent0, int  sourceFirst1, int  sourceLast2, const QModelIndex&  destinationParent3, int  destinationColumn4)
{
    return QAbstractItemModel::beginMoveColumns((const QModelIndex& )sourceParent0, (int )sourceFirst1, (int )sourceLast2, (const QModelIndex& )destinationParent3, (int )destinationColumn4);
}

bool  QProxyModel_QtDShell::__public_beginMoveRows(const QModelIndex&  sourceParent0, int  sourceFirst1, int  sourceLast2, const QModelIndex&  destinationParent3, int  destinationRow4)
{
    return QAbstractItemModel::beginMoveRows((const QModelIndex& )sourceParent0, (int )sourceFirst1, (int )sourceLast2, (const QModelIndex& )destinationParent3, (int )destinationRow4);
}

void QProxyModel_QtDShell::__public_beginRemoveColumns(const QModelIndex&  parent0, int  first1, int  last2)
{
    QAbstractItemModel::beginRemoveColumns((const QModelIndex& )parent0, (int )first1, (int )last2);
}

void QProxyModel_QtDShell::__public_beginRemoveRows(const QModelIndex&  parent0, int  first1, int  last2)
{
    QAbstractItemModel::beginRemoveRows((const QModelIndex& )parent0, (int )first1, (int )last2);
}

void QProxyModel_QtDShell::__public_beginResetModel()
{
    QAbstractItemModel::beginResetModel();
}

void QProxyModel_QtDShell::__public_changePersistentIndex(const QModelIndex&  from0, const QModelIndex&  to1)
{
    QAbstractItemModel::changePersistentIndex((const QModelIndex& )from0, (const QModelIndex& )to1);
}

void QProxyModel_QtDShell::__public_changePersistentIndexList(const QList<QModelIndex >&  from0, const QList<QModelIndex >&  to1)
{
    QAbstractItemModel::changePersistentIndexList((const QList<QModelIndex >& )from0, (const QList<QModelIndex >& )to1);
}

void QProxyModel_QtDShell::__public_connectToModel(const QAbstractItemModel*  model0) const
{
    QProxyModel::connectToModel((const QAbstractItemModel* )model0);
}

QModelIndex  QProxyModel_QtDShell::__public_createIndex(int  row0, int  column1, int  id2) const
{
    return QAbstractItemModel::createIndex((int )row0, (int )column1, (int )id2);
}

QModelIndex  QProxyModel_QtDShell::__public_createIndex(int  row0, int  column1, unsigned int  id2) const
{
    return QAbstractItemModel::createIndex((int )row0, (int )column1, (unsigned int )id2);
}

QModelIndex  QProxyModel_QtDShell::__public_createIndex(int  row0, int  column1, void*  data2) const
{
    return QAbstractItemModel::createIndex((int )row0, (int )column1, (void* )data2);
}

bool  QProxyModel_QtDShell::__public_decodeData(int  row0, int  column1, const QModelIndex&  parent2, QDataStream&  stream3)
{
    return QAbstractItemModel::decodeData((int )row0, (int )column1, (const QModelIndex& )parent2, (QDataStream& )stream3);
}

void QProxyModel_QtDShell::__public_disconnectFromModel(const QAbstractItemModel*  model0) const
{
    QProxyModel::disconnectFromModel((const QAbstractItemModel* )model0);
}

void QProxyModel_QtDShell::__public_encodeData(const QList<QModelIndex >&  indexes0, QDataStream&  stream1) const
{
    QAbstractItemModel::encodeData((const QList<QModelIndex >& )indexes0, (QDataStream& )stream1);
}

void QProxyModel_QtDShell::__public_endInsertColumns()
{
    QAbstractItemModel::endInsertColumns();
}

void QProxyModel_QtDShell::__public_endInsertRows()
{
    QAbstractItemModel::endInsertRows();
}

void QProxyModel_QtDShell::__public_endMoveColumns()
{
    QAbstractItemModel::endMoveColumns();
}

void QProxyModel_QtDShell::__public_endMoveRows()
{
    QAbstractItemModel::endMoveRows();
}

void QProxyModel_QtDShell::__public_endRemoveColumns()
{
    QAbstractItemModel::endRemoveColumns();
}

void QProxyModel_QtDShell::__public_endRemoveRows()
{
    QAbstractItemModel::endRemoveRows();
}

void QProxyModel_QtDShell::__public_endResetModel()
{
    QAbstractItemModel::endResetModel();
}

QList<QModelIndex >  QProxyModel_QtDShell::__public_persistentIndexList() const
{
    return QAbstractItemModel::persistentIndexList();
}

void QProxyModel_QtDShell::__public_reset()
{
    QAbstractItemModel::reset();
}

QObject*  QProxyModel_QtDShell::__public_sender() const
{
    return QObject::sender();
}

QModelIndex  QProxyModel_QtDShell::__public_setProxyModel(const QModelIndex&  source_index0) const
{
    return QProxyModel::setProxyModel((const QModelIndex& )source_index0);
}

QModelIndex  QProxyModel_QtDShell::__public_setSourceModel(const QModelIndex&  proxy_index0) const
{
    return QProxyModel::setSourceModel((const QModelIndex& )proxy_index0);
}

void QProxyModel_QtDShell::__public_dataChanged(const QModelIndex&  topLeft0, const QModelIndex&  bottomRight1)
{
    QAbstractItemModel::dataChanged((const QModelIndex& )topLeft0, (const QModelIndex& )bottomRight1);
}

void QProxyModel_QtDShell::__public_headerDataChanged(int  orientation0, int  first1, int  last2)
{
    QAbstractItemModel::headerDataChanged((Qt::Orientation )orientation0, (int )first1, (int )last2);
}

void QProxyModel_QtDShell::__public_layoutAboutToBeChanged()
{
    QAbstractItemModel::layoutAboutToBeChanged();
}

void QProxyModel_QtDShell::__public_layoutChanged()
{
    QAbstractItemModel::layoutChanged();
}

// Write virtual function overries used to decide on static/virtual calls
QModelIndex  QProxyModel_QtDShell::__override_buddy(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemModel::buddy((const QModelIndex& )index0);
    } else {
        return buddy((const QModelIndex& )index0);
    }
}

bool  QProxyModel_QtDShell::__override_canFetchMore(const QModelIndex&  parent0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemModel::canFetchMore((const QModelIndex& )parent0);
    } else {
        return canFetchMore((const QModelIndex& )parent0);
    }
}

void QProxyModel_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

int  QProxyModel_QtDShell::__override_columnCount(const QModelIndex&  parent0, bool static_call) const
{
    if (static_call) {
        return QProxyModel::columnCount((const QModelIndex& )parent0);
    } else {
        return columnCount((const QModelIndex& )parent0);
    }
}

void QProxyModel_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

QVariant  QProxyModel_QtDShell::__override_data(const QModelIndex&  index0, int  role1, bool static_call) const
{
    if (static_call) {
        return QProxyModel::data((const QModelIndex& )index0, (int )role1);
    } else {
        return data((const QModelIndex& )index0, (int )role1);
    }
}

bool  QProxyModel_QtDShell::__override_dropMimeData(const QMimeData*  data0, int  action1, int  row2, int  column3, const QModelIndex&  parent4, bool static_call)
{
    if (static_call) {
        return QProxyModel::dropMimeData((const QMimeData* )data0, (Qt::DropAction )action1, (int )row2, (int )column3, (const QModelIndex& )parent4);
    } else {
        return dropMimeData((const QMimeData* )data0, (Qt::DropAction )action1, (int )row2, (int )column3, (const QModelIndex& )parent4);
    }
}

bool  QProxyModel_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QProxyModel_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QProxyModel_QtDShell::__override_fetchMore(const QModelIndex&  parent0, bool static_call)
{
    if (static_call) {
        QProxyModel::fetchMore((const QModelIndex& )parent0);
    } else {
        fetchMore((const QModelIndex& )parent0);
    }
}

int  QProxyModel_QtDShell::__override_flags(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QProxyModel::flags((const QModelIndex& )index0);
    } else {
        return flags((const QModelIndex& )index0);
    }
}

bool  QProxyModel_QtDShell::__override_hasChildren(const QModelIndex&  parent0, bool static_call) const
{
    if (static_call) {
        return QProxyModel::hasChildren((const QModelIndex& )parent0);
    } else {
        return hasChildren((const QModelIndex& )parent0);
    }
}

QVariant  QProxyModel_QtDShell::__override_headerData(int  section0, int  orientation1, int  role2, bool static_call) const
{
    if (static_call) {
        return QProxyModel::headerData((int )section0, (Qt::Orientation )orientation1, (int )role2);
    } else {
        return headerData((int )section0, (Qt::Orientation )orientation1, (int )role2);
    }
}

QModelIndex  QProxyModel_QtDShell::__override_index(int  row0, int  column1, const QModelIndex&  parent2, bool static_call) const
{
    if (static_call) {
        return QProxyModel::index((int )row0, (int )column1, (const QModelIndex& )parent2);
    } else {
        return index((int )row0, (int )column1, (const QModelIndex& )parent2);
    }
}

bool  QProxyModel_QtDShell::__override_insertColumns(int  column0, int  count1, const QModelIndex&  parent2, bool static_call)
{
    if (static_call) {
        return QProxyModel::insertColumns((int )column0, (int )count1, (const QModelIndex& )parent2);
    } else {
        return insertColumns((int )column0, (int )count1, (const QModelIndex& )parent2);
    }
}

bool  QProxyModel_QtDShell::__override_insertRows(int  row0, int  count1, const QModelIndex&  parent2, bool static_call)
{
    if (static_call) {
        return QProxyModel::insertRows((int )row0, (int )count1, (const QModelIndex& )parent2);
    } else {
        return insertRows((int )row0, (int )count1, (const QModelIndex& )parent2);
    }
}

QList<QModelIndex >  QProxyModel_QtDShell::__override_match(const QModelIndex&  start0, int  role1, const QVariant&  value2, int  hits3, int  flags4, bool static_call) const
{
    if (static_call) {
        return QProxyModel::match((const QModelIndex& )start0, (int )role1, (const QVariant& )value2, (int )hits3, (Qt::MatchFlags )flags4);
    } else {
        return match((const QModelIndex& )start0, (int )role1, (const QVariant& )value2, (int )hits3, (Qt::MatchFlags )flags4);
    }
}

QMimeData*  QProxyModel_QtDShell::__override_mimeData(const QList<QModelIndex >&  indexes0, bool static_call) const
{
    if (static_call) {
        return QProxyModel::mimeData((const QList<QModelIndex >& )indexes0);
    } else {
        return mimeData((const QList<QModelIndex >& )indexes0);
    }
}

QStringList  QProxyModel_QtDShell::__override_mimeTypes(bool static_call) const
{
    if (static_call) {
        return QProxyModel::mimeTypes();
    } else {
        return mimeTypes();
    }
}

QModelIndex  QProxyModel_QtDShell::__override_parent(const QModelIndex&  child0, bool static_call) const
{
    if (static_call) {
        return QProxyModel::parent((const QModelIndex& )child0);
    } else {
        return parent((const QModelIndex& )child0);
    }
}

bool  QProxyModel_QtDShell::__override_removeColumns(int  column0, int  count1, const QModelIndex&  parent2, bool static_call)
{
    if (static_call) {
        return QAbstractItemModel::removeColumns((int )column0, (int )count1, (const QModelIndex& )parent2);
    } else {
        return removeColumns((int )column0, (int )count1, (const QModelIndex& )parent2);
    }
}

bool  QProxyModel_QtDShell::__override_removeRows(int  row0, int  count1, const QModelIndex&  parent2, bool static_call)
{
    if (static_call) {
        return QAbstractItemModel::removeRows((int )row0, (int )count1, (const QModelIndex& )parent2);
    } else {
        return removeRows((int )row0, (int )count1, (const QModelIndex& )parent2);
    }
}

void QProxyModel_QtDShell::__override_revert(bool static_call)
{
    if (static_call) {
        QProxyModel::revert();
    } else {
        revert();
    }
}

int  QProxyModel_QtDShell::__override_rowCount(const QModelIndex&  parent0, bool static_call) const
{
    if (static_call) {
        return QProxyModel::rowCount((const QModelIndex& )parent0);
    } else {
        return rowCount((const QModelIndex& )parent0);
    }
}

bool  QProxyModel_QtDShell::__override_setData(const QModelIndex&  index0, const QVariant&  value1, int  role2, bool static_call)
{
    if (static_call) {
        return QProxyModel::setData((const QModelIndex& )index0, (const QVariant& )value1, (int )role2);
    } else {
        return setData((const QModelIndex& )index0, (const QVariant& )value1, (int )role2);
    }
}

bool  QProxyModel_QtDShell::__override_setHeaderData(int  section0, int  orientation1, const QVariant&  value2, int  role3, bool static_call)
{
    if (static_call) {
        return QProxyModel::setHeaderData((int )section0, (Qt::Orientation )orientation1, (const QVariant& )value2, (int )role3);
    } else {
        return setHeaderData((int )section0, (Qt::Orientation )orientation1, (const QVariant& )value2, (int )role3);
    }
}

void QProxyModel_QtDShell::__override_setModel(QAbstractItemModel*  model0, bool static_call)
{
    if (static_call) {
        QProxyModel::setModel((QAbstractItemModel* )model0);
    } else {
        setModel((QAbstractItemModel* )model0);
    }
}

void QProxyModel_QtDShell::__override_sort(int  column0, int  order1, bool static_call)
{
    if (static_call) {
        QProxyModel::sort((int )column0, (Qt::SortOrder )order1);
    } else {
        sort((int )column0, (Qt::SortOrder )order1);
    }
}

QSize  QProxyModel_QtDShell::__override_span(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QProxyModel::span((const QModelIndex& )index0);
    } else {
        return span((const QModelIndex& )index0);
    }
}

bool  QProxyModel_QtDShell::__override_submit(bool static_call)
{
    if (static_call) {
        return QProxyModel::submit();
    } else {
        return submit();
    }
}

int  QProxyModel_QtDShell::__override_supportedDropActions(bool static_call) const
{
    if (static_call) {
        return QProxyModel::supportedDropActions();
    } else {
        return supportedDropActions();
    }
}

void QProxyModel_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// ---externC---
// QProxyModel::QProxyModel(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QProxyModel_QProxyModel_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QProxyModel_QtDShell *__qt_this = new QProxyModel_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QProxyModel::connectToModel(const QAbstractItemModel * model) const
QTD_EXTERN QTD_EXPORT void qtd_QProxyModel_connectToModel_QAbstractItemModel_const
(void* __this_nativeId,
 void* model0)
{
    const QAbstractItemModel*  __qt_model0 = (const QAbstractItemModel* ) model0;
    QProxyModel_QtDShell *__qt_this = (QProxyModel_QtDShell *) __this_nativeId;
    __qt_this->__public_connectToModel((const QAbstractItemModel* )__qt_model0);

}

// QProxyModel::disconnectFromModel(const QAbstractItemModel * model) const
QTD_EXTERN QTD_EXPORT void qtd_QProxyModel_disconnectFromModel_QAbstractItemModel_const
(void* __this_nativeId,
 void* model0)
{
    const QAbstractItemModel*  __qt_model0 = (const QAbstractItemModel* ) model0;
    QProxyModel_QtDShell *__qt_this = (QProxyModel_QtDShell *) __this_nativeId;
    __qt_this->__public_disconnectFromModel((const QAbstractItemModel* )__qt_model0);

}

// QProxyModel::model() const
QTD_EXTERN QTD_EXPORT void* qtd_QProxyModel_model_const
(void* __this_nativeId)
{
    QProxyModel_QtDShell *__qt_this = (QProxyModel_QtDShell *) __this_nativeId;
    QAbstractItemModel*  __qt_return_value = __qt_this->model();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QProxyModel::setProxyModel(const QModelIndex & source_index) const
QTD_EXTERN QTD_EXPORT void qtd_QProxyModel_setProxyModel_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 QModelIndexAccessor source_index0)
{
    QModelIndex __qt_source_index0 = qtd_to_QModelIndex(source_index0);
    QProxyModel_QtDShell *__qt_this = (QProxyModel_QtDShell *) __this_nativeId;
    QModelIndex  __qt_return_value = __qt_this->__public_setProxyModel((const QModelIndex& )__qt_source_index0);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QProxyModel::setSourceModel(const QModelIndex & proxy_index) const
QTD_EXTERN QTD_EXPORT void qtd_QProxyModel_setSourceModel_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 QModelIndexAccessor proxy_index0)
{
    QModelIndex __qt_proxy_index0 = qtd_to_QModelIndex(proxy_index0);
    QProxyModel_QtDShell *__qt_this = (QProxyModel_QtDShell *) __this_nativeId;
    QModelIndex  __qt_return_value = __qt_this->__public_setSourceModel((const QModelIndex& )__qt_proxy_index0);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QProxyModel::columnCount(const QModelIndex & parent_) const
QTD_EXTERN QTD_EXPORT int qtd_QProxyModel_columnCount_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor parent0)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QProxyModel_QtDShell *__qt_this = (QProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_columnCount((const QModelIndex& )__qt_parent0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProxyModel::data(const QModelIndex & index, int role) const
QTD_EXTERN QTD_EXPORT void* qtd_QProxyModel_data_QModelIndex_int_const
(void* __this_nativeId,
 QModelIndexAccessor index0,
 int role1)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QProxyModel_QtDShell *__qt_this = (QProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_data((const QModelIndex& )__qt_index0, (int )role1, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QProxyModel::dropMimeData(const QMimeData * data, Qt::DropAction action, int row, int column, const QModelIndex & parent_)
QTD_EXTERN QTD_EXPORT bool qtd_QProxyModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex
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
    QProxyModel_QtDShell *__qt_this = (QProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_dropMimeData((const QMimeData* )__qt_data0, (Qt::DropAction )__qt_action1, (int )row2, (int )column3, (const QModelIndex& )__qt_parent4, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProxyModel::fetchMore(const QModelIndex & parent_)
QTD_EXTERN QTD_EXPORT void qtd_QProxyModel_fetchMore_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor parent0)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QProxyModel_QtDShell *__qt_this = (QProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_fetchMore((const QModelIndex& )__qt_parent0, __do_static_call);

}

// QProxyModel::flags(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT int qtd_QProxyModel_flags_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QProxyModel_QtDShell *__qt_this = (QProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_flags((const QModelIndex& )__qt_index0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProxyModel::hasChildren(const QModelIndex & parent_) const
QTD_EXTERN QTD_EXPORT bool qtd_QProxyModel_hasChildren_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor parent0)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QProxyModel_QtDShell *__qt_this = (QProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_hasChildren((const QModelIndex& )__qt_parent0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProxyModel::headerData(int section, Qt::Orientation orientation, int role) const
QTD_EXTERN QTD_EXPORT void* qtd_QProxyModel_headerData_int_Orientation_int_const
(void* __this_nativeId,
 int section0,
 int orientation1,
 int role2)
{
    Qt::Orientation __qt_orientation1 = (Qt::Orientation) orientation1;
    QProxyModel_QtDShell *__qt_this = (QProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_headerData((int )section0, (Qt::Orientation )__qt_orientation1, (int )role2, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QProxyModel::index(int row, int column, const QModelIndex & parent_) const
QTD_EXTERN QTD_EXPORT void qtd_QProxyModel_index_int_int_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int row0,
 int column1,
 QModelIndexAccessor parent2)
{
    QModelIndex __qt_parent2 = qtd_to_QModelIndex(parent2);
    QProxyModel_QtDShell *__qt_this = (QProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QModelIndex  __qt_return_value = __qt_this->__override_index((int )row0, (int )column1, (const QModelIndex& )__qt_parent2, __do_static_call);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QProxyModel::insertColumns(int column, int count, const QModelIndex & parent_)
QTD_EXTERN QTD_EXPORT bool qtd_QProxyModel_insertColumns_int_int_QModelIndex
(void* __this_nativeId,
 int column0,
 int count1,
 QModelIndexAccessor parent2)
{
    QModelIndex __qt_parent2 = qtd_to_QModelIndex(parent2);
    QProxyModel_QtDShell *__qt_this = (QProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_insertColumns((int )column0, (int )count1, (const QModelIndex& )__qt_parent2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProxyModel::insertRows(int row, int count, const QModelIndex & parent_)
QTD_EXTERN QTD_EXPORT bool qtd_QProxyModel_insertRows_int_int_QModelIndex
(void* __this_nativeId,
 int row0,
 int count1,
 QModelIndexAccessor parent2)
{
    QModelIndex __qt_parent2 = qtd_to_QModelIndex(parent2);
    QProxyModel_QtDShell *__qt_this = (QProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_insertRows((int )row0, (int )count1, (const QModelIndex& )__qt_parent2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProxyModel::match(const QModelIndex & start, int role, const QVariant & value, int hits, QFlags<Qt::MatchFlag> flags) const
QTD_EXTERN QTD_EXPORT void qtd_QProxyModel_match_QModelIndex_int_QVariant_int_MatchFlags_const
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
    QProxyModel_QtDShell *__qt_this = (QProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QList<QModelIndex >  __qt_return_value = __qt_this->__override_match((const QModelIndex& )__qt_start0, (int )role1, (const QVariant& )__qt_value2, (int )hits3, (Qt::MatchFlags )__qt_flags4, __do_static_call);

QList<QModelIndex > &__d_return_value_tmp = (*(QList<QModelIndex > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QProxyModel::mimeData(const QList<QModelIndex > & indexes) const
QTD_EXTERN QTD_EXPORT void* qtd_QProxyModel_mimeData_QList_const
(void* __this_nativeId,
 void* indexes0)
{
QList<QModelIndex > __qt_indexes0 = (*(QList<QModelIndex > *)indexes0);
    QProxyModel_QtDShell *__qt_this = (QProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QMimeData*  __qt_return_value = __qt_this->__override_mimeData((const QList<QModelIndex >& )__qt_indexes0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QProxyModel::mimeTypes() const
QTD_EXTERN QTD_EXPORT void qtd_QProxyModel_mimeTypes_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QProxyModel_QtDShell *__qt_this = (QProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QStringList  __qt_return_value = __qt_this->__override_mimeTypes(__do_static_call);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QProxyModel::parent(const QModelIndex & child) const
QTD_EXTERN QTD_EXPORT void qtd_QProxyModel_parent_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 QModelIndexAccessor child0)
{
    QModelIndex __qt_child0 = qtd_to_QModelIndex(child0);
    QProxyModel_QtDShell *__qt_this = (QProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QModelIndex  __qt_return_value = __qt_this->__override_parent((const QModelIndex& )__qt_child0, __do_static_call);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QProxyModel::revert()
QTD_EXTERN QTD_EXPORT void qtd_QProxyModel_revert
(void* __this_nativeId)
{
    QProxyModel_QtDShell *__qt_this = (QProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_revert(__do_static_call);

}

// QProxyModel::rowCount(const QModelIndex & parent_) const
QTD_EXTERN QTD_EXPORT int qtd_QProxyModel_rowCount_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor parent0)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QProxyModel_QtDShell *__qt_this = (QProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_rowCount((const QModelIndex& )__qt_parent0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProxyModel::setData(const QModelIndex & index, const QVariant & value, int role)
QTD_EXTERN QTD_EXPORT bool qtd_QProxyModel_setData_QModelIndex_QVariant_int
(void* __this_nativeId,
 QModelIndexAccessor index0,
 QVariant* value1,
 int role2)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QVariant __qt_value1 = value1 == NULL ? QVariant() : QVariant(*value1);
    QProxyModel_QtDShell *__qt_this = (QProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_setData((const QModelIndex& )__qt_index0, (const QVariant& )__qt_value1, (int )role2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProxyModel::setHeaderData(int section, Qt::Orientation orientation, const QVariant & value, int role)
QTD_EXTERN QTD_EXPORT bool qtd_QProxyModel_setHeaderData_int_Orientation_QVariant_int
(void* __this_nativeId,
 int section0,
 int orientation1,
 QVariant* value2,
 int role3)
{
    Qt::Orientation __qt_orientation1 = (Qt::Orientation) orientation1;
    QVariant __qt_value2 = value2 == NULL ? QVariant() : QVariant(*value2);
    QProxyModel_QtDShell *__qt_this = (QProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_setHeaderData((int )section0, (Qt::Orientation )__qt_orientation1, (const QVariant& )__qt_value2, (int )role3, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProxyModel::setModel(QAbstractItemModel * model)
QTD_EXTERN QTD_EXPORT void qtd_QProxyModel_setModel_QAbstractItemModel
(void* __this_nativeId,
 void* model0)
{
    QAbstractItemModel*  __qt_model0 = (QAbstractItemModel* ) model0;
    QProxyModel_QtDShell *__qt_this = (QProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_setModel((QAbstractItemModel* )__qt_model0, __do_static_call);

}

// QProxyModel::sort(int column, Qt::SortOrder order)
QTD_EXTERN QTD_EXPORT void qtd_QProxyModel_sort_int_SortOrder
(void* __this_nativeId,
 int column0,
 int order1)
{
    Qt::SortOrder __qt_order1 = (Qt::SortOrder) order1;
    QProxyModel_QtDShell *__qt_this = (QProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_sort((int )column0, (Qt::SortOrder )__qt_order1, __do_static_call);

}

// QProxyModel::span(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QProxyModel_span_QModelIndex_const
(void* __this_nativeId,
 QSize * __d_return_value,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QProxyModel_QtDShell *__qt_this = (QProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_span((const QModelIndex& )__qt_index0, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QProxyModel::submit()
QTD_EXTERN QTD_EXPORT bool qtd_QProxyModel_submit
(void* __this_nativeId)
{
    QProxyModel_QtDShell *__qt_this = (QProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_submit(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QProxyModel::supportedDropActions() const
QTD_EXTERN QTD_EXPORT int qtd_QProxyModel_supportedDropActions_const
(void* __this_nativeId)
{
    QProxyModel_QtDShell *__qt_this = (QProxyModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_supportedDropActions(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QProxyModel_staticMetaObject() {
    return (void*)&QProxyModel::staticMetaObject;
}


