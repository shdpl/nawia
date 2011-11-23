#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qdatetime.h>
#include <qdir.h>
#include <qfileiconprovider.h>
#include <qfileinfo.h>
#include <qfilesystemmodel.h>
#include <qicon.h>
#include <qlist.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qvariant.h>

#include "QFileSystemModel_shell.h"
#include <iostream>
#include <qfilesystemmodel.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QFileSystemModelEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QFileSystemModelEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QFileSystemModel_createEntity(void *nativeId, void* dId)
{
    new QFileSystemModelEntity((QObject*)nativeId, dId);
}

QFileSystemModel_QtDShell::QFileSystemModel_QtDShell(void *d_ptr, QObject*  parent0)
    : QFileSystemModel(parent0),
      QObjectLink(this, d_ptr)
{
}

QFileSystemModel_QtDShell::~QFileSystemModel_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QFileSystemModel_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QFileSystemModel::metaObject();
}

int QFileSystemModel_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QFileSystemModel::qt_metacall(_c, _id, _a);
}

int QFileSystemModel_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QFileSystemModel::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QFileSystemModel_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QAbstractItemModel_buddy_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, QModelIndexAccessor* index0))
QModelIndex  QFileSystemModel_QtDShell::buddy(const QModelIndex&  index0) const
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemModel_buddy_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(index0));
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_canFetchMore_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* parent0))
bool  QFileSystemModel_QtDShell::canFetchMore(const QModelIndex&  parent0) const
{
    return qtd_QAbstractItemModel_canFetchMore_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0));
}

QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QFileSystemModel_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemModel_columnCount_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* parent0))
int  QFileSystemModel_QtDShell::columnCount(const QModelIndex&  parent0) const
{
    return qtd_QAbstractItemModel_columnCount_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0));
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QFileSystemModel_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemModel_data_QModelIndex_int_const_dispatch, (void *dId, QModelIndexAccessor* index0, int role1))
QVariant  QFileSystemModel_QtDShell::data(const QModelIndex&  index0, int  role1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QAbstractItemModel_data_QModelIndex_int_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (int )role1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex_dispatch, (void *dId, void* data0, int action1, int row2, int column3, QModelIndexAccessor* parent4))
bool  QFileSystemModel_QtDShell::dropMimeData(const QMimeData*  data0, Qt::DropAction  action1, int  row2, int  column3, const QModelIndex&  parent4)
{
    return qtd_QAbstractItemModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, (QMimeData* )data0, (Qt::DropAction )action1, (int )row2, (int )column3, &qtd_from_QModelIndex(parent4));
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* event0))
bool  QFileSystemModel_QtDShell::event(QEvent*  event0)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )event0);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QFileSystemModel_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_fetchMore_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* parent0))
void QFileSystemModel_QtDShell::fetchMore(const QModelIndex&  parent0)
{
    qtd_QAbstractItemModel_fetchMore_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0));
}

QTD_FUNC_DECL(GUI, int, QAbstractItemModel_flags_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* index0))
Qt::ItemFlags  QFileSystemModel_QtDShell::flags(const QModelIndex&  index0) const
{
    return (QFlags<Qt::ItemFlag>) qtd_QAbstractItemModel_flags_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0));
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_hasChildren_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* parent0))
bool  QFileSystemModel_QtDShell::hasChildren(const QModelIndex&  parent0) const
{
    return qtd_QAbstractItemModel_hasChildren_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0));
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemModel_headerData_int_Orientation_int_const_dispatch, (void *dId, int section0, int orientation1, int role2))
QVariant  QFileSystemModel_QtDShell::headerData(int  section0, Qt::Orientation  orientation1, int  role2) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QAbstractItemModel_headerData_int_Orientation_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )section0, (Qt::Orientation )orientation1, (int )role2);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_index_int_int_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, int row0, int column1, QModelIndexAccessor* parent2))
QModelIndex  QFileSystemModel_QtDShell::index(int  row0, int  column1, const QModelIndex&  parent2) const
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemModel_index_int_int_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, (int )row0, (int )column1, &qtd_from_QModelIndex(parent2));
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_insertColumns_int_int_QModelIndex_dispatch, (void *dId, int column0, int count1, QModelIndexAccessor* parent2))
bool  QFileSystemModel_QtDShell::insertColumns(int  column0, int  count1, const QModelIndex&  parent2)
{
    return qtd_QAbstractItemModel_insertColumns_int_int_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, (int )column0, (int )count1, &qtd_from_QModelIndex(parent2));
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_insertRows_int_int_QModelIndex_dispatch, (void *dId, int row0, int count1, QModelIndexAccessor* parent2))
bool  QFileSystemModel_QtDShell::insertRows(int  row0, int  count1, const QModelIndex&  parent2)
{
    return qtd_QAbstractItemModel_insertRows_int_int_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, (int )row0, (int )count1, &qtd_from_QModelIndex(parent2));
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_match_QModelIndex_int_QVariant_int_MatchFlags_const_dispatch, (void *dId, void * __d_arr, QModelIndexAccessor* start0, int role1, void* value2, int hits3, int flags4))
QList<QModelIndex >  QFileSystemModel_QtDShell::match(const QModelIndex&  start0, int  role1, const QVariant&  value2, int  hits3, Qt::MatchFlags  flags4) const
{
    QList<QModelIndex > __d_return_value;
    qtd_QAbstractItemModel_match_QModelIndex_int_QVariant_int_MatchFlags_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(start0), (int )role1, &(QVariant& )value2, (int )hits3, (Qt::MatchFlags )flags4);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void*, QAbstractItemModel_mimeData_QList_const_dispatch, (void *dId, void* indexes0))
QMimeData*  QFileSystemModel_QtDShell::mimeData(const QList<QModelIndex >&  indexes0) const
{
    return (QMimeData*) qtd_QAbstractItemModel_mimeData_QList_const_dispatch(QObjectLink::getLink(this)->dId, (void*)&indexes0);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_mimeTypes_const_dispatch, (void *dId, void * __d_arr))
QStringList  QFileSystemModel_QtDShell::mimeTypes() const
{
    QStringList __d_return_value;
    qtd_QAbstractItemModel_mimeTypes_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_parent_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, QModelIndexAccessor* child0))
QModelIndex  QFileSystemModel_QtDShell::parent(const QModelIndex&  child0) const
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemModel_parent_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(child0));
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_removeColumns_int_int_QModelIndex_dispatch, (void *dId, int column0, int count1, QModelIndexAccessor* parent2))
bool  QFileSystemModel_QtDShell::removeColumns(int  column0, int  count1, const QModelIndex&  parent2)
{
    return qtd_QAbstractItemModel_removeColumns_int_int_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, (int )column0, (int )count1, &qtd_from_QModelIndex(parent2));
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_removeRows_int_int_QModelIndex_dispatch, (void *dId, int row0, int count1, QModelIndexAccessor* parent2))
bool  QFileSystemModel_QtDShell::removeRows(int  row0, int  count1, const QModelIndex&  parent2)
{
    return qtd_QAbstractItemModel_removeRows_int_int_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, (int )row0, (int )count1, &qtd_from_QModelIndex(parent2));
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_revert_dispatch, (void *dId))
void QFileSystemModel_QtDShell::revert()
{
    qtd_QAbstractItemModel_revert_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemModel_rowCount_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* parent0))
int  QFileSystemModel_QtDShell::rowCount(const QModelIndex&  parent0) const
{
    return qtd_QAbstractItemModel_rowCount_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0));
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_setData_QModelIndex_QVariant_int_dispatch, (void *dId, QModelIndexAccessor* index0, void* value1, int role2))
bool  QFileSystemModel_QtDShell::setData(const QModelIndex&  index0, const QVariant&  value1, int  role2)
{
    return qtd_QAbstractItemModel_setData_QModelIndex_QVariant_int_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), &(QVariant& )value1, (int )role2);
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_setHeaderData_int_Orientation_QVariant_int_dispatch, (void *dId, int section0, int orientation1, void* value2, int role3))
bool  QFileSystemModel_QtDShell::setHeaderData(int  section0, Qt::Orientation  orientation1, const QVariant&  value2, int  role3)
{
    return qtd_QAbstractItemModel_setHeaderData_int_Orientation_QVariant_int_dispatch(QObjectLink::getLink(this)->dId, (int )section0, (Qt::Orientation )orientation1, &(QVariant& )value2, (int )role3);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_sort_int_SortOrder_dispatch, (void *dId, int column0, int order1))
void QFileSystemModel_QtDShell::sort(int  column0, Qt::SortOrder  order1)
{
    qtd_QAbstractItemModel_sort_int_SortOrder_dispatch(QObjectLink::getLink(this)->dId, (int )column0, (Qt::SortOrder )order1);
}

QTD_FUNC_DECL(GUI, void, QAbstractItemModel_span_QModelIndex_const_dispatch, (void *dId, QSize *__d_return_value, QModelIndexAccessor* index0))
QSize  QFileSystemModel_QtDShell::span(const QModelIndex&  index0) const
{
    QSize __d_return_value;
    qtd_QAbstractItemModel_span_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(index0));
    return __d_return_value;
}

QTD_FUNC_DECL(GUI, bool, QAbstractItemModel_submit_dispatch, (void *dId))
bool  QFileSystemModel_QtDShell::submit()
{
    return qtd_QAbstractItemModel_submit_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, int, QAbstractItemModel_supportedDropActions_const_dispatch, (void *dId))
Qt::DropActions  QFileSystemModel_QtDShell::supportedDropActions() const
{
    return (QFlags<Qt::DropAction>) qtd_QAbstractItemModel_supportedDropActions_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* event0))
void QFileSystemModel_QtDShell::timerEvent(QTimerEvent*  event0)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )event0);
}

QTD_EXTERN QTD_EXPORT void qtd_QFileSystemModel_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
QModelIndex  QFileSystemModel_QtDShell::index(const QString&  path0, int  column1) const
{
    return QFileSystemModel::index((const QString& )path0, (int )column1);
}

// public overrides for functions that are protected in the base class
void QFileSystemModel_QtDShell::__public_beginInsertColumns(const QModelIndex&  parent0, int  first1, int  last2)
{
    QAbstractItemModel::beginInsertColumns((const QModelIndex& )parent0, (int )first1, (int )last2);
}

void QFileSystemModel_QtDShell::__public_beginInsertRows(const QModelIndex&  parent0, int  first1, int  last2)
{
    QAbstractItemModel::beginInsertRows((const QModelIndex& )parent0, (int )first1, (int )last2);
}

bool  QFileSystemModel_QtDShell::__public_beginMoveColumns(const QModelIndex&  sourceParent0, int  sourceFirst1, int  sourceLast2, const QModelIndex&  destinationParent3, int  destinationColumn4)
{
    return QAbstractItemModel::beginMoveColumns((const QModelIndex& )sourceParent0, (int )sourceFirst1, (int )sourceLast2, (const QModelIndex& )destinationParent3, (int )destinationColumn4);
}

bool  QFileSystemModel_QtDShell::__public_beginMoveRows(const QModelIndex&  sourceParent0, int  sourceFirst1, int  sourceLast2, const QModelIndex&  destinationParent3, int  destinationRow4)
{
    return QAbstractItemModel::beginMoveRows((const QModelIndex& )sourceParent0, (int )sourceFirst1, (int )sourceLast2, (const QModelIndex& )destinationParent3, (int )destinationRow4);
}

void QFileSystemModel_QtDShell::__public_beginRemoveColumns(const QModelIndex&  parent0, int  first1, int  last2)
{
    QAbstractItemModel::beginRemoveColumns((const QModelIndex& )parent0, (int )first1, (int )last2);
}

void QFileSystemModel_QtDShell::__public_beginRemoveRows(const QModelIndex&  parent0, int  first1, int  last2)
{
    QAbstractItemModel::beginRemoveRows((const QModelIndex& )parent0, (int )first1, (int )last2);
}

void QFileSystemModel_QtDShell::__public_beginResetModel()
{
    QAbstractItemModel::beginResetModel();
}

void QFileSystemModel_QtDShell::__public_changePersistentIndex(const QModelIndex&  from0, const QModelIndex&  to1)
{
    QAbstractItemModel::changePersistentIndex((const QModelIndex& )from0, (const QModelIndex& )to1);
}

void QFileSystemModel_QtDShell::__public_changePersistentIndexList(const QList<QModelIndex >&  from0, const QList<QModelIndex >&  to1)
{
    QAbstractItemModel::changePersistentIndexList((const QList<QModelIndex >& )from0, (const QList<QModelIndex >& )to1);
}

QModelIndex  QFileSystemModel_QtDShell::__public_createIndex(int  row0, int  column1, int  id2) const
{
    return QAbstractItemModel::createIndex((int )row0, (int )column1, (int )id2);
}

QModelIndex  QFileSystemModel_QtDShell::__public_createIndex(int  row0, int  column1, unsigned int  id2) const
{
    return QAbstractItemModel::createIndex((int )row0, (int )column1, (unsigned int )id2);
}

QModelIndex  QFileSystemModel_QtDShell::__public_createIndex(int  row0, int  column1, void*  data2) const
{
    return QAbstractItemModel::createIndex((int )row0, (int )column1, (void* )data2);
}

bool  QFileSystemModel_QtDShell::__public_decodeData(int  row0, int  column1, const QModelIndex&  parent2, QDataStream&  stream3)
{
    return QAbstractItemModel::decodeData((int )row0, (int )column1, (const QModelIndex& )parent2, (QDataStream& )stream3);
}

void QFileSystemModel_QtDShell::__public_encodeData(const QList<QModelIndex >&  indexes0, QDataStream&  stream1) const
{
    QAbstractItemModel::encodeData((const QList<QModelIndex >& )indexes0, (QDataStream& )stream1);
}

void QFileSystemModel_QtDShell::__public_endInsertColumns()
{
    QAbstractItemModel::endInsertColumns();
}

void QFileSystemModel_QtDShell::__public_endInsertRows()
{
    QAbstractItemModel::endInsertRows();
}

void QFileSystemModel_QtDShell::__public_endMoveColumns()
{
    QAbstractItemModel::endMoveColumns();
}

void QFileSystemModel_QtDShell::__public_endMoveRows()
{
    QAbstractItemModel::endMoveRows();
}

void QFileSystemModel_QtDShell::__public_endRemoveColumns()
{
    QAbstractItemModel::endRemoveColumns();
}

void QFileSystemModel_QtDShell::__public_endRemoveRows()
{
    QAbstractItemModel::endRemoveRows();
}

void QFileSystemModel_QtDShell::__public_endResetModel()
{
    QAbstractItemModel::endResetModel();
}

QList<QModelIndex >  QFileSystemModel_QtDShell::__public_persistentIndexList() const
{
    return QAbstractItemModel::persistentIndexList();
}

void QFileSystemModel_QtDShell::__public_reset()
{
    QAbstractItemModel::reset();
}

QObject*  QFileSystemModel_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QFileSystemModel_QtDShell::__public_dataChanged(const QModelIndex&  topLeft0, const QModelIndex&  bottomRight1)
{
    QAbstractItemModel::dataChanged((const QModelIndex& )topLeft0, (const QModelIndex& )bottomRight1);
}

void QFileSystemModel_QtDShell::__public_directoryLoaded(const QString&  path0)
{
    QFileSystemModel::directoryLoaded((const QString& )path0);
}

void QFileSystemModel_QtDShell::__public_fileRenamed(const QString&  path0, const QString&  oldName1, const QString&  newName2)
{
    QFileSystemModel::fileRenamed((const QString& )path0, (const QString& )oldName1, (const QString& )newName2);
}

void QFileSystemModel_QtDShell::__public_headerDataChanged(int  orientation0, int  first1, int  last2)
{
    QAbstractItemModel::headerDataChanged((Qt::Orientation )orientation0, (int )first1, (int )last2);
}

void QFileSystemModel_QtDShell::__public_layoutAboutToBeChanged()
{
    QAbstractItemModel::layoutAboutToBeChanged();
}

void QFileSystemModel_QtDShell::__public_layoutChanged()
{
    QAbstractItemModel::layoutChanged();
}

void QFileSystemModel_QtDShell::__public_rootPathChanged(const QString&  newPath0)
{
    QFileSystemModel::rootPathChanged((const QString& )newPath0);
}

// Write virtual function overries used to decide on static/virtual calls
QModelIndex  QFileSystemModel_QtDShell::__override_buddy(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemModel::buddy((const QModelIndex& )index0);
    } else {
        return buddy((const QModelIndex& )index0);
    }
}

bool  QFileSystemModel_QtDShell::__override_canFetchMore(const QModelIndex&  parent0, bool static_call) const
{
    if (static_call) {
        return QFileSystemModel::canFetchMore((const QModelIndex& )parent0);
    } else {
        return canFetchMore((const QModelIndex& )parent0);
    }
}

void QFileSystemModel_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

int  QFileSystemModel_QtDShell::__override_columnCount(const QModelIndex&  parent0, bool static_call) const
{
    if (static_call) {
        return QFileSystemModel::columnCount((const QModelIndex& )parent0);
    } else {
        return columnCount((const QModelIndex& )parent0);
    }
}

void QFileSystemModel_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

QVariant  QFileSystemModel_QtDShell::__override_data(const QModelIndex&  index0, int  role1, bool static_call) const
{
    if (static_call) {
        return QFileSystemModel::data((const QModelIndex& )index0, (int )role1);
    } else {
        return data((const QModelIndex& )index0, (int )role1);
    }
}

bool  QFileSystemModel_QtDShell::__override_dropMimeData(const QMimeData*  data0, int  action1, int  row2, int  column3, const QModelIndex&  parent4, bool static_call)
{
    if (static_call) {
        return QFileSystemModel::dropMimeData((const QMimeData* )data0, (Qt::DropAction )action1, (int )row2, (int )column3, (const QModelIndex& )parent4);
    } else {
        return dropMimeData((const QMimeData* )data0, (Qt::DropAction )action1, (int )row2, (int )column3, (const QModelIndex& )parent4);
    }
}

bool  QFileSystemModel_QtDShell::__override_event(QEvent*  event0, bool static_call)
{
    if (static_call) {
        return QFileSystemModel::event((QEvent* )event0);
    } else {
        return event((QEvent* )event0);
    }
}

bool  QFileSystemModel_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QFileSystemModel_QtDShell::__override_fetchMore(const QModelIndex&  parent0, bool static_call)
{
    if (static_call) {
        QFileSystemModel::fetchMore((const QModelIndex& )parent0);
    } else {
        fetchMore((const QModelIndex& )parent0);
    }
}

int  QFileSystemModel_QtDShell::__override_flags(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QFileSystemModel::flags((const QModelIndex& )index0);
    } else {
        return flags((const QModelIndex& )index0);
    }
}

bool  QFileSystemModel_QtDShell::__override_hasChildren(const QModelIndex&  parent0, bool static_call) const
{
    if (static_call) {
        return QFileSystemModel::hasChildren((const QModelIndex& )parent0);
    } else {
        return hasChildren((const QModelIndex& )parent0);
    }
}

QVariant  QFileSystemModel_QtDShell::__override_headerData(int  section0, int  orientation1, int  role2, bool static_call) const
{
    if (static_call) {
        return QFileSystemModel::headerData((int )section0, (Qt::Orientation )orientation1, (int )role2);
    } else {
        return headerData((int )section0, (Qt::Orientation )orientation1, (int )role2);
    }
}

QModelIndex  QFileSystemModel_QtDShell::__override_index(int  row0, int  column1, const QModelIndex&  parent2, bool static_call) const
{
    if (static_call) {
        return QFileSystemModel::index((int )row0, (int )column1, (const QModelIndex& )parent2);
    } else {
        return index((int )row0, (int )column1, (const QModelIndex& )parent2);
    }
}

bool  QFileSystemModel_QtDShell::__override_insertColumns(int  column0, int  count1, const QModelIndex&  parent2, bool static_call)
{
    if (static_call) {
        return QAbstractItemModel::insertColumns((int )column0, (int )count1, (const QModelIndex& )parent2);
    } else {
        return insertColumns((int )column0, (int )count1, (const QModelIndex& )parent2);
    }
}

bool  QFileSystemModel_QtDShell::__override_insertRows(int  row0, int  count1, const QModelIndex&  parent2, bool static_call)
{
    if (static_call) {
        return QAbstractItemModel::insertRows((int )row0, (int )count1, (const QModelIndex& )parent2);
    } else {
        return insertRows((int )row0, (int )count1, (const QModelIndex& )parent2);
    }
}

QList<QModelIndex >  QFileSystemModel_QtDShell::__override_match(const QModelIndex&  start0, int  role1, const QVariant&  value2, int  hits3, int  flags4, bool static_call) const
{
    if (static_call) {
        return QAbstractItemModel::match((const QModelIndex& )start0, (int )role1, (const QVariant& )value2, (int )hits3, (Qt::MatchFlags )flags4);
    } else {
        return match((const QModelIndex& )start0, (int )role1, (const QVariant& )value2, (int )hits3, (Qt::MatchFlags )flags4);
    }
}

QMimeData*  QFileSystemModel_QtDShell::__override_mimeData(const QList<QModelIndex >&  indexes0, bool static_call) const
{
    if (static_call) {
        return QFileSystemModel::mimeData((const QList<QModelIndex >& )indexes0);
    } else {
        return mimeData((const QList<QModelIndex >& )indexes0);
    }
}

QStringList  QFileSystemModel_QtDShell::__override_mimeTypes(bool static_call) const
{
    if (static_call) {
        return QFileSystemModel::mimeTypes();
    } else {
        return mimeTypes();
    }
}

QModelIndex  QFileSystemModel_QtDShell::__override_parent(const QModelIndex&  child0, bool static_call) const
{
    if (static_call) {
        return QFileSystemModel::parent((const QModelIndex& )child0);
    } else {
        return parent((const QModelIndex& )child0);
    }
}

bool  QFileSystemModel_QtDShell::__override_removeColumns(int  column0, int  count1, const QModelIndex&  parent2, bool static_call)
{
    if (static_call) {
        return QAbstractItemModel::removeColumns((int )column0, (int )count1, (const QModelIndex& )parent2);
    } else {
        return removeColumns((int )column0, (int )count1, (const QModelIndex& )parent2);
    }
}

bool  QFileSystemModel_QtDShell::__override_removeRows(int  row0, int  count1, const QModelIndex&  parent2, bool static_call)
{
    if (static_call) {
        return QAbstractItemModel::removeRows((int )row0, (int )count1, (const QModelIndex& )parent2);
    } else {
        return removeRows((int )row0, (int )count1, (const QModelIndex& )parent2);
    }
}

void QFileSystemModel_QtDShell::__override_revert(bool static_call)
{
    if (static_call) {
        QAbstractItemModel::revert();
    } else {
        revert();
    }
}

int  QFileSystemModel_QtDShell::__override_rowCount(const QModelIndex&  parent0, bool static_call) const
{
    if (static_call) {
        return QFileSystemModel::rowCount((const QModelIndex& )parent0);
    } else {
        return rowCount((const QModelIndex& )parent0);
    }
}

bool  QFileSystemModel_QtDShell::__override_setData(const QModelIndex&  index0, const QVariant&  value1, int  role2, bool static_call)
{
    if (static_call) {
        return QFileSystemModel::setData((const QModelIndex& )index0, (const QVariant& )value1, (int )role2);
    } else {
        return setData((const QModelIndex& )index0, (const QVariant& )value1, (int )role2);
    }
}

bool  QFileSystemModel_QtDShell::__override_setHeaderData(int  section0, int  orientation1, const QVariant&  value2, int  role3, bool static_call)
{
    if (static_call) {
        return QAbstractItemModel::setHeaderData((int )section0, (Qt::Orientation )orientation1, (const QVariant& )value2, (int )role3);
    } else {
        return setHeaderData((int )section0, (Qt::Orientation )orientation1, (const QVariant& )value2, (int )role3);
    }
}

void QFileSystemModel_QtDShell::__override_sort(int  column0, int  order1, bool static_call)
{
    if (static_call) {
        QFileSystemModel::sort((int )column0, (Qt::SortOrder )order1);
    } else {
        sort((int )column0, (Qt::SortOrder )order1);
    }
}

QSize  QFileSystemModel_QtDShell::__override_span(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemModel::span((const QModelIndex& )index0);
    } else {
        return span((const QModelIndex& )index0);
    }
}

bool  QFileSystemModel_QtDShell::__override_submit(bool static_call)
{
    if (static_call) {
        return QAbstractItemModel::submit();
    } else {
        return submit();
    }
}

int  QFileSystemModel_QtDShell::__override_supportedDropActions(bool static_call) const
{
    if (static_call) {
        return QFileSystemModel::supportedDropActions();
    } else {
        return supportedDropActions();
    }
}

void QFileSystemModel_QtDShell::__override_timerEvent(QTimerEvent*  event0, bool static_call)
{
    if (static_call) {
        QFileSystemModel::timerEvent((QTimerEvent* )event0);
    } else {
        timerEvent((QTimerEvent* )event0);
    }
}

// QFileSystemModel::directoryLoaded(const QString & path)
QTD_EXTERN QTD_EXPORT void qtd_QFileSystemModel_directoryLoaded_string
(void* __this_nativeId,
 DArray path0)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    __qt_this->__public_directoryLoaded((const QString& )__qt_path0);

}

// QFileSystemModel::fileRenamed(const QString & path, const QString & oldName, const QString & newName)
QTD_EXTERN QTD_EXPORT void qtd_QFileSystemModel_fileRenamed_string_string_string
(void* __this_nativeId,
 DArray path0,
 DArray oldName1,
 DArray newName2)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    QString __qt_oldName1 = QString::fromUtf8((const char *)oldName1.ptr, oldName1.length);
    QString __qt_newName2 = QString::fromUtf8((const char *)newName2.ptr, newName2.length);
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    __qt_this->__public_fileRenamed((const QString& )__qt_path0, (const QString& )__qt_oldName1, (const QString& )__qt_newName2);

}

// QFileSystemModel::rootPathChanged(const QString & newPath)
QTD_EXTERN QTD_EXPORT void qtd_QFileSystemModel_rootPathChanged_string
(void* __this_nativeId,
 DArray newPath0)
{
    QString __qt_newPath0 = QString::fromUtf8((const char *)newPath0.ptr, newPath0.length);
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    __qt_this->__public_rootPathChanged((const QString& )__qt_newPath0);

}

// ---externC---
// QFileSystemModel::QFileSystemModel(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QFileSystemModel_QFileSystemModel_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QFileSystemModel_QtDShell *__qt_this = new QFileSystemModel_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QFileSystemModel::fileIcon(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void* qtd_QFileSystemModel_fileIcon_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    QIcon  __qt_return_value = __qt_this->fileIcon((const QModelIndex& )__qt_index0);

    void* __d_return_value = (void*) new QIcon(__qt_return_value);

    return __d_return_value;
}

// QFileSystemModel::fileInfo(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void* qtd_QFileSystemModel_fileInfo_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    QFileInfo  __qt_return_value = __qt_this->fileInfo((const QModelIndex& )__qt_index0);

    void* __d_return_value = (void*) new QFileInfo(__qt_return_value);

    return __d_return_value;
}

// QFileSystemModel::fileName(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QFileSystemModel_fileName_QModelIndex_const
(void* __this_nativeId,
 void* __d_return_value,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->fileName((const QModelIndex& )__qt_index0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFileSystemModel::filePath(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QFileSystemModel_filePath_QModelIndex_const
(void* __this_nativeId,
 void* __d_return_value,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->filePath((const QModelIndex& )__qt_index0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFileSystemModel::filter() const
QTD_EXTERN QTD_EXPORT int qtd_QFileSystemModel_filter_const
(void* __this_nativeId)
{
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->filter();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileSystemModel::iconProvider() const
QTD_EXTERN QTD_EXPORT void* qtd_QFileSystemModel_iconProvider_const
(void* __this_nativeId)
{
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    QFileIconProvider*  __qt_return_value = __qt_this->iconProvider();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QFileSystemModel::index(const QString & path, int column) const
QTD_EXTERN QTD_EXPORT void qtd_QFileSystemModel_index_string_int_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 DArray path0,
 int column1)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    QFileSystemModel *__qt_this = (QFileSystemModel *) __this_nativeId;
    QModelIndex  __qt_return_value = __qt_this->index((const QString& )__qt_path0, (int )column1);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QFileSystemModel::isDir(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT bool qtd_QFileSystemModel_isDir_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isDir((const QModelIndex& )__qt_index0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileSystemModel::isReadOnly() const
QTD_EXTERN QTD_EXPORT bool qtd_QFileSystemModel_isReadOnly_const
(void* __this_nativeId)
{
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isReadOnly();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileSystemModel::lastModified(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void* qtd_QFileSystemModel_lastModified_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    QDateTime  __qt_return_value = __qt_this->lastModified((const QModelIndex& )__qt_index0);

    void* __d_return_value = (void*) new QDateTime(__qt_return_value);

    return __d_return_value;
}

// QFileSystemModel::mkdir(const QModelIndex & parent_, const QString & name)
QTD_EXTERN QTD_EXPORT void qtd_QFileSystemModel_mkdir_QModelIndex_string
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 QModelIndexAccessor parent0,
 DArray name1)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QString __qt_name1 = QString::fromUtf8((const char *)name1.ptr, name1.length);
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    QModelIndex  __qt_return_value = __qt_this->mkdir((const QModelIndex& )__qt_parent0, (const QString& )__qt_name1);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QFileSystemModel::myComputer(int role) const
QTD_EXTERN QTD_EXPORT void* qtd_QFileSystemModel_myComputer_int_const
(void* __this_nativeId,
 int role0)
{
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->myComputer((int )role0);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QFileSystemModel::nameFilterDisables() const
QTD_EXTERN QTD_EXPORT bool qtd_QFileSystemModel_nameFilterDisables_const
(void* __this_nativeId)
{
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->nameFilterDisables();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileSystemModel::nameFilters() const
QTD_EXTERN QTD_EXPORT void qtd_QFileSystemModel_nameFilters_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    QStringList  __qt_return_value = __qt_this->nameFilters();

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QFileSystemModel::permissions(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT int qtd_QFileSystemModel_permissions_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->permissions((const QModelIndex& )__qt_index0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileSystemModel::remove(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT bool qtd_QFileSystemModel_remove_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->remove((const QModelIndex& )__qt_index0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileSystemModel::resolveSymlinks() const
QTD_EXTERN QTD_EXPORT bool qtd_QFileSystemModel_resolveSymlinks_const
(void* __this_nativeId)
{
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->resolveSymlinks();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileSystemModel::rmdir(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT bool qtd_QFileSystemModel_rmdir_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->rmdir((const QModelIndex& )__qt_index0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileSystemModel::rootDirectory() const
QTD_EXTERN QTD_EXPORT void* qtd_QFileSystemModel_rootDirectory_const
(void* __this_nativeId)
{
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    QDir  __qt_return_value = __qt_this->rootDirectory();

    void* __d_return_value = (void*) new QDir(__qt_return_value);

    return __d_return_value;
}

// QFileSystemModel::rootPath() const
QTD_EXTERN QTD_EXPORT void qtd_QFileSystemModel_rootPath_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->rootPath();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFileSystemModel::setFilter(QFlags<QDir::Filter> filters)
QTD_EXTERN QTD_EXPORT void qtd_QFileSystemModel_setFilter_Filters
(void* __this_nativeId,
 int filters0)
{
    QFlags<QDir::Filter> __qt_filters0 = (QFlags<QDir::Filter>) filters0;
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    __qt_this->setFilter((QDir::Filters )__qt_filters0);

}

// QFileSystemModel::setIconProvider(QFileIconProvider * provider)
QTD_EXTERN QTD_EXPORT void qtd_QFileSystemModel_setIconProvider_QFileIconProvider
(void* __this_nativeId,
 void* provider0)
{
    QFileIconProvider*  __qt_provider0 = (QFileIconProvider* ) provider0;
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    __qt_this->setIconProvider((QFileIconProvider* )__qt_provider0);

}

// QFileSystemModel::setNameFilterDisables(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QFileSystemModel_setNameFilterDisables_bool
(void* __this_nativeId,
 bool enable0)
{
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    __qt_this->setNameFilterDisables((bool )enable0);

}

// QFileSystemModel::setNameFilters(const QStringList & filters)
QTD_EXTERN QTD_EXPORT void qtd_QFileSystemModel_setNameFilters_QList
(void* __this_nativeId,
 void* filters0)
{
QStringList __qt_filters0 = (*(QStringList *)filters0);
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    __qt_this->setNameFilters((const QStringList& )__qt_filters0);

}

// QFileSystemModel::setReadOnly(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QFileSystemModel_setReadOnly_bool
(void* __this_nativeId,
 bool enable0)
{
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    __qt_this->setReadOnly((bool )enable0);

}

// QFileSystemModel::setResolveSymlinks(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QFileSystemModel_setResolveSymlinks_bool
(void* __this_nativeId,
 bool enable0)
{
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    __qt_this->setResolveSymlinks((bool )enable0);

}

// QFileSystemModel::setRootPath(const QString & path)
QTD_EXTERN QTD_EXPORT void qtd_QFileSystemModel_setRootPath_string
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 DArray path0)
{
    QString __qt_path0 = QString::fromUtf8((const char *)path0.ptr, path0.length);
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    QModelIndex  __qt_return_value = __qt_this->setRootPath((const QString& )__qt_path0);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QFileSystemModel::size(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT qint64 qtd_QFileSystemModel_size_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->size((const QModelIndex& )__qt_index0);

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileSystemModel::type(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QFileSystemModel_type_QModelIndex_const
(void* __this_nativeId,
 void* __d_return_value,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->type((const QModelIndex& )__qt_index0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFileSystemModel::canFetchMore(const QModelIndex & parent_) const
QTD_EXTERN QTD_EXPORT bool qtd_QFileSystemModel_canFetchMore_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor parent0)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_canFetchMore((const QModelIndex& )__qt_parent0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileSystemModel::columnCount(const QModelIndex & parent_) const
QTD_EXTERN QTD_EXPORT int qtd_QFileSystemModel_columnCount_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor parent0)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_columnCount((const QModelIndex& )__qt_parent0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileSystemModel::data(const QModelIndex & index, int role) const
QTD_EXTERN QTD_EXPORT void* qtd_QFileSystemModel_data_QModelIndex_int_const
(void* __this_nativeId,
 QModelIndexAccessor index0,
 int role1)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_data((const QModelIndex& )__qt_index0, (int )role1, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QFileSystemModel::dropMimeData(const QMimeData * data, Qt::DropAction action, int row, int column, const QModelIndex & parent_)
QTD_EXTERN QTD_EXPORT bool qtd_QFileSystemModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex
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
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_dropMimeData((const QMimeData* )__qt_data0, (Qt::DropAction )__qt_action1, (int )row2, (int )column3, (const QModelIndex& )__qt_parent4, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileSystemModel::event(QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QFileSystemModel_event_QEvent
(void* __this_nativeId,
 void* event0)
{
    QEvent*  __qt_event0 = (QEvent* ) event0;
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_event0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileSystemModel::fetchMore(const QModelIndex & parent_)
QTD_EXTERN QTD_EXPORT void qtd_QFileSystemModel_fetchMore_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor parent0)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_fetchMore((const QModelIndex& )__qt_parent0, __do_static_call);

}

// QFileSystemModel::flags(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT int qtd_QFileSystemModel_flags_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_flags((const QModelIndex& )__qt_index0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileSystemModel::hasChildren(const QModelIndex & parent_) const
QTD_EXTERN QTD_EXPORT bool qtd_QFileSystemModel_hasChildren_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor parent0)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_hasChildren((const QModelIndex& )__qt_parent0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileSystemModel::headerData(int section, Qt::Orientation orientation, int role) const
QTD_EXTERN QTD_EXPORT void* qtd_QFileSystemModel_headerData_int_Orientation_int_const
(void* __this_nativeId,
 int section0,
 int orientation1,
 int role2)
{
    Qt::Orientation __qt_orientation1 = (Qt::Orientation) orientation1;
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_headerData((int )section0, (Qt::Orientation )__qt_orientation1, (int )role2, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QFileSystemModel::index(int row, int column, const QModelIndex & parent_) const
QTD_EXTERN QTD_EXPORT void qtd_QFileSystemModel_index_int_int_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int row0,
 int column1,
 QModelIndexAccessor parent2)
{
    QModelIndex __qt_parent2 = qtd_to_QModelIndex(parent2);
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QModelIndex  __qt_return_value = __qt_this->__override_index((int )row0, (int )column1, (const QModelIndex& )__qt_parent2, __do_static_call);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QFileSystemModel::mimeData(const QList<QModelIndex > & indexes) const
QTD_EXTERN QTD_EXPORT void* qtd_QFileSystemModel_mimeData_QList_const
(void* __this_nativeId,
 void* indexes0)
{
QList<QModelIndex > __qt_indexes0 = (*(QList<QModelIndex > *)indexes0);
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QMimeData*  __qt_return_value = __qt_this->__override_mimeData((const QList<QModelIndex >& )__qt_indexes0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QFileSystemModel::mimeTypes() const
QTD_EXTERN QTD_EXPORT void qtd_QFileSystemModel_mimeTypes_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QStringList  __qt_return_value = __qt_this->__override_mimeTypes(__do_static_call);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QFileSystemModel::parent(const QModelIndex & child) const
QTD_EXTERN QTD_EXPORT void qtd_QFileSystemModel_parent_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 QModelIndexAccessor child0)
{
    QModelIndex __qt_child0 = qtd_to_QModelIndex(child0);
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QModelIndex  __qt_return_value = __qt_this->__override_parent((const QModelIndex& )__qt_child0, __do_static_call);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QFileSystemModel::rowCount(const QModelIndex & parent_) const
QTD_EXTERN QTD_EXPORT int qtd_QFileSystemModel_rowCount_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor parent0)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_rowCount((const QModelIndex& )__qt_parent0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileSystemModel::setData(const QModelIndex & index, const QVariant & value, int role)
QTD_EXTERN QTD_EXPORT bool qtd_QFileSystemModel_setData_QModelIndex_QVariant_int
(void* __this_nativeId,
 QModelIndexAccessor index0,
 QVariant* value1,
 int role2)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QVariant __qt_value1 = value1 == NULL ? QVariant() : QVariant(*value1);
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_setData((const QModelIndex& )__qt_index0, (const QVariant& )__qt_value1, (int )role2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileSystemModel::sort(int column, Qt::SortOrder order)
QTD_EXTERN QTD_EXPORT void qtd_QFileSystemModel_sort_int_SortOrder
(void* __this_nativeId,
 int column0,
 int order1)
{
    Qt::SortOrder __qt_order1 = (Qt::SortOrder) order1;
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_sort((int )column0, (Qt::SortOrder )__qt_order1, __do_static_call);

}

// QFileSystemModel::supportedDropActions() const
QTD_EXTERN QTD_EXPORT int qtd_QFileSystemModel_supportedDropActions_const
(void* __this_nativeId)
{
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_supportedDropActions(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFileSystemModel::timerEvent(QTimerEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QFileSystemModel_timerEvent_QTimerEvent
(void* __this_nativeId,
 void* event0)
{
    QTimerEvent*  __qt_event0 = (QTimerEvent* ) event0;
    QFileSystemModel_QtDShell *__qt_this = (QFileSystemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_timerEvent((QTimerEvent* )__qt_event0, __do_static_call);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QFileSystemModel_staticMetaObject() {
    return (void*)&QFileSystemModel::staticMetaObject;
}


