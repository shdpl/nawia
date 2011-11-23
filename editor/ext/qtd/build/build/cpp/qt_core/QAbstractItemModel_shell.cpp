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
#include <qstringlist.h>
#include <qvariant.h>

#include "QAbstractItemModel_shell.h"
#include <iostream>
#include <qabstractitemmodel.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

class QAbstractItemModelEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QAbstractItemModelEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_createEntity(void *nativeId, void* dId)
{
    new QAbstractItemModelEntity((QObject*)nativeId, dId);
}

QAbstractItemModel_QtDShell::QAbstractItemModel_QtDShell(void *d_ptr, QObject*  parent0)
    : QAbstractItemModel(parent0),
      QObjectLink(this, d_ptr)
{
}

QAbstractItemModel_QtDShell::~QAbstractItemModel_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(CORE, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(CORE, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QAbstractItemModel_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QAbstractItemModel::metaObject();
}

int QAbstractItemModel_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QAbstractItemModel::qt_metacall(_c, _id, _a);
}

int QAbstractItemModel_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QAbstractItemModel::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QAbstractItemModel_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(CORE, void, QAbstractItemModel_buddy_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, QModelIndexAccessor* index0))
QTD_FUNC(CORE, QAbstractItemModel_buddy_QModelIndex_const_dispatch)
QModelIndex  QAbstractItemModel_QtDShell::buddy(const QModelIndex&  index0) const
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemModel_buddy_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(index0));
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(CORE, bool, QAbstractItemModel_canFetchMore_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* parent0))
QTD_FUNC(CORE, QAbstractItemModel_canFetchMore_QModelIndex_const_dispatch)
bool  QAbstractItemModel_QtDShell::canFetchMore(const QModelIndex&  parent0) const
{
    return qtd_QAbstractItemModel_canFetchMore_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0));
}

QTD_FUNC_DECL(CORE, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QAbstractItemModel_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, int, QAbstractItemModel_columnCount_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* parent0))
QTD_FUNC(CORE, QAbstractItemModel_columnCount_QModelIndex_const_dispatch)
int  QAbstractItemModel_QtDShell::columnCount(const QModelIndex&  parent0) const
{
    return qtd_QAbstractItemModel_columnCount_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0));
}

QTD_FUNC_DECL(CORE, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QAbstractItemModel_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, void*, QAbstractItemModel_data_QModelIndex_int_const_dispatch, (void *dId, QModelIndexAccessor* index0, int role1))
QTD_FUNC(CORE, QAbstractItemModel_data_QModelIndex_int_const_dispatch)
QVariant  QAbstractItemModel_QtDShell::data(const QModelIndex&  index0, int  role1) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QAbstractItemModel_data_QModelIndex_int_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), (int )role1);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(CORE, bool, QAbstractItemModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex_dispatch, (void *dId, void* data0, int action1, int row2, int column3, QModelIndexAccessor* parent4))
QTD_FUNC(CORE, QAbstractItemModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex_dispatch)
bool  QAbstractItemModel_QtDShell::dropMimeData(const QMimeData*  data0, Qt::DropAction  action1, int  row2, int  column3, const QModelIndex&  parent4)
{
    return qtd_QAbstractItemModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, (QMimeData* )data0, (Qt::DropAction )action1, (int )row2, (int )column3, &qtd_from_QModelIndex(parent4));
}

QTD_FUNC_DECL(CORE, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QAbstractItemModel_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QAbstractItemModel_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(CORE, void, QAbstractItemModel_fetchMore_QModelIndex_dispatch, (void *dId, QModelIndexAccessor* parent0))
QTD_FUNC(CORE, QAbstractItemModel_fetchMore_QModelIndex_dispatch)
void QAbstractItemModel_QtDShell::fetchMore(const QModelIndex&  parent0)
{
    qtd_QAbstractItemModel_fetchMore_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0));
}

QTD_FUNC_DECL(CORE, int, QAbstractItemModel_flags_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* index0))
QTD_FUNC(CORE, QAbstractItemModel_flags_QModelIndex_const_dispatch)
Qt::ItemFlags  QAbstractItemModel_QtDShell::flags(const QModelIndex&  index0) const
{
    return (QFlags<Qt::ItemFlag>) qtd_QAbstractItemModel_flags_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0));
}

QTD_FUNC_DECL(CORE, bool, QAbstractItemModel_hasChildren_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* parent0))
QTD_FUNC(CORE, QAbstractItemModel_hasChildren_QModelIndex_const_dispatch)
bool  QAbstractItemModel_QtDShell::hasChildren(const QModelIndex&  parent0) const
{
    return qtd_QAbstractItemModel_hasChildren_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0));
}

QTD_FUNC_DECL(CORE, void*, QAbstractItemModel_headerData_int_Orientation_int_const_dispatch, (void *dId, int section0, int orientation1, int role2))
QTD_FUNC(CORE, QAbstractItemModel_headerData_int_Orientation_int_const_dispatch)
QVariant  QAbstractItemModel_QtDShell::headerData(int  section0, Qt::Orientation  orientation1, int  role2) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QAbstractItemModel_headerData_int_Orientation_int_const_dispatch(QObjectLink::getLink(this)->dId, (int )section0, (Qt::Orientation )orientation1, (int )role2);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(CORE, void, QAbstractItemModel_index_int_int_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, int row0, int column1, QModelIndexAccessor* parent2))
QTD_FUNC(CORE, QAbstractItemModel_index_int_int_QModelIndex_const_dispatch)
QModelIndex  QAbstractItemModel_QtDShell::index(int  row0, int  column1, const QModelIndex&  parent2) const
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemModel_index_int_int_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, (int )row0, (int )column1, &qtd_from_QModelIndex(parent2));
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(CORE, bool, QAbstractItemModel_insertColumns_int_int_QModelIndex_dispatch, (void *dId, int column0, int count1, QModelIndexAccessor* parent2))
QTD_FUNC(CORE, QAbstractItemModel_insertColumns_int_int_QModelIndex_dispatch)
bool  QAbstractItemModel_QtDShell::insertColumns(int  column0, int  count1, const QModelIndex&  parent2)
{
    return qtd_QAbstractItemModel_insertColumns_int_int_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, (int )column0, (int )count1, &qtd_from_QModelIndex(parent2));
}

QTD_FUNC_DECL(CORE, bool, QAbstractItemModel_insertRows_int_int_QModelIndex_dispatch, (void *dId, int row0, int count1, QModelIndexAccessor* parent2))
QTD_FUNC(CORE, QAbstractItemModel_insertRows_int_int_QModelIndex_dispatch)
bool  QAbstractItemModel_QtDShell::insertRows(int  row0, int  count1, const QModelIndex&  parent2)
{
    return qtd_QAbstractItemModel_insertRows_int_int_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, (int )row0, (int )count1, &qtd_from_QModelIndex(parent2));
}

QTD_FUNC_DECL(CORE, void, QAbstractItemModel_match_QModelIndex_int_QVariant_int_MatchFlags_const_dispatch, (void *dId, void * __d_arr, QModelIndexAccessor* start0, int role1, void* value2, int hits3, int flags4))
QTD_FUNC(CORE, QAbstractItemModel_match_QModelIndex_int_QVariant_int_MatchFlags_const_dispatch)
QList<QModelIndex >  QAbstractItemModel_QtDShell::match(const QModelIndex&  start0, int  role1, const QVariant&  value2, int  hits3, Qt::MatchFlags  flags4) const
{
    QList<QModelIndex > __d_return_value;
    qtd_QAbstractItemModel_match_QModelIndex_int_QVariant_int_MatchFlags_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(start0), (int )role1, &(QVariant& )value2, (int )hits3, (Qt::MatchFlags )flags4);
    return __d_return_value;
}

QTD_FUNC_DECL(CORE, void*, QAbstractItemModel_mimeData_QList_const_dispatch, (void *dId, void* indexes0))
QTD_FUNC(CORE, QAbstractItemModel_mimeData_QList_const_dispatch)
QMimeData*  QAbstractItemModel_QtDShell::mimeData(const QList<QModelIndex >&  indexes0) const
{
    return (QMimeData*) qtd_QAbstractItemModel_mimeData_QList_const_dispatch(QObjectLink::getLink(this)->dId, (void*)&indexes0);
}

QTD_FUNC_DECL(CORE, void, QAbstractItemModel_mimeTypes_const_dispatch, (void *dId, void * __d_arr))
QTD_FUNC(CORE, QAbstractItemModel_mimeTypes_const_dispatch)
QStringList  QAbstractItemModel_QtDShell::mimeTypes() const
{
    QStringList __d_return_value;
    qtd_QAbstractItemModel_mimeTypes_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value);
    return __d_return_value;
}

QTD_FUNC_DECL(CORE, void, QAbstractItemModel_parent_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor *__d_return_value, QModelIndexAccessor* child0))
QTD_FUNC(CORE, QAbstractItemModel_parent_QModelIndex_const_dispatch)
QModelIndex  QAbstractItemModel_QtDShell::parent(const QModelIndex&  child0) const
{
    QModelIndexAccessor __d_return_value;
    qtd_QAbstractItemModel_parent_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(child0));
    QModelIndex __qt_return_value = qtd_to_QModelIndex( __d_return_value );
    return __qt_return_value;
}

QTD_FUNC_DECL(CORE, bool, QAbstractItemModel_removeColumns_int_int_QModelIndex_dispatch, (void *dId, int column0, int count1, QModelIndexAccessor* parent2))
QTD_FUNC(CORE, QAbstractItemModel_removeColumns_int_int_QModelIndex_dispatch)
bool  QAbstractItemModel_QtDShell::removeColumns(int  column0, int  count1, const QModelIndex&  parent2)
{
    return qtd_QAbstractItemModel_removeColumns_int_int_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, (int )column0, (int )count1, &qtd_from_QModelIndex(parent2));
}

QTD_FUNC_DECL(CORE, bool, QAbstractItemModel_removeRows_int_int_QModelIndex_dispatch, (void *dId, int row0, int count1, QModelIndexAccessor* parent2))
QTD_FUNC(CORE, QAbstractItemModel_removeRows_int_int_QModelIndex_dispatch)
bool  QAbstractItemModel_QtDShell::removeRows(int  row0, int  count1, const QModelIndex&  parent2)
{
    return qtd_QAbstractItemModel_removeRows_int_int_QModelIndex_dispatch(QObjectLink::getLink(this)->dId, (int )row0, (int )count1, &qtd_from_QModelIndex(parent2));
}

QTD_FUNC_DECL(CORE, void, QAbstractItemModel_revert_dispatch, (void *dId))
QTD_FUNC(CORE, QAbstractItemModel_revert_dispatch)
void QAbstractItemModel_QtDShell::revert()
{
    qtd_QAbstractItemModel_revert_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, int, QAbstractItemModel_rowCount_QModelIndex_const_dispatch, (void *dId, QModelIndexAccessor* parent0))
QTD_FUNC(CORE, QAbstractItemModel_rowCount_QModelIndex_const_dispatch)
int  QAbstractItemModel_QtDShell::rowCount(const QModelIndex&  parent0) const
{
    return qtd_QAbstractItemModel_rowCount_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(parent0));
}

QTD_FUNC_DECL(CORE, bool, QAbstractItemModel_setData_QModelIndex_QVariant_int_dispatch, (void *dId, QModelIndexAccessor* index0, void* value1, int role2))
QTD_FUNC(CORE, QAbstractItemModel_setData_QModelIndex_QVariant_int_dispatch)
bool  QAbstractItemModel_QtDShell::setData(const QModelIndex&  index0, const QVariant&  value1, int  role2)
{
    return qtd_QAbstractItemModel_setData_QModelIndex_QVariant_int_dispatch(QObjectLink::getLink(this)->dId, &qtd_from_QModelIndex(index0), &(QVariant& )value1, (int )role2);
}

QTD_FUNC_DECL(CORE, bool, QAbstractItemModel_setHeaderData_int_Orientation_QVariant_int_dispatch, (void *dId, int section0, int orientation1, void* value2, int role3))
QTD_FUNC(CORE, QAbstractItemModel_setHeaderData_int_Orientation_QVariant_int_dispatch)
bool  QAbstractItemModel_QtDShell::setHeaderData(int  section0, Qt::Orientation  orientation1, const QVariant&  value2, int  role3)
{
    return qtd_QAbstractItemModel_setHeaderData_int_Orientation_QVariant_int_dispatch(QObjectLink::getLink(this)->dId, (int )section0, (Qt::Orientation )orientation1, &(QVariant& )value2, (int )role3);
}

QTD_FUNC_DECL(CORE, void, QAbstractItemModel_sort_int_SortOrder_dispatch, (void *dId, int column0, int order1))
QTD_FUNC(CORE, QAbstractItemModel_sort_int_SortOrder_dispatch)
void QAbstractItemModel_QtDShell::sort(int  column0, Qt::SortOrder  order1)
{
    qtd_QAbstractItemModel_sort_int_SortOrder_dispatch(QObjectLink::getLink(this)->dId, (int )column0, (Qt::SortOrder )order1);
}

QTD_FUNC_DECL(CORE, void, QAbstractItemModel_span_QModelIndex_const_dispatch, (void *dId, QSize *__d_return_value, QModelIndexAccessor* index0))
QTD_FUNC(CORE, QAbstractItemModel_span_QModelIndex_const_dispatch)
QSize  QAbstractItemModel_QtDShell::span(const QModelIndex&  index0) const
{
    QSize __d_return_value;
    qtd_QAbstractItemModel_span_QModelIndex_const_dispatch(QObjectLink::getLink(this)->dId, &__d_return_value, &qtd_from_QModelIndex(index0));
    return __d_return_value;
}

QTD_FUNC_DECL(CORE, bool, QAbstractItemModel_submit_dispatch, (void *dId))
QTD_FUNC(CORE, QAbstractItemModel_submit_dispatch)
bool  QAbstractItemModel_QtDShell::submit()
{
    return qtd_QAbstractItemModel_submit_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, int, QAbstractItemModel_supportedDropActions_const_dispatch, (void *dId))
QTD_FUNC(CORE, QAbstractItemModel_supportedDropActions_const_dispatch)
Qt::DropActions  QAbstractItemModel_QtDShell::supportedDropActions() const
{
    return (QFlags<Qt::DropAction>) qtd_QAbstractItemModel_supportedDropActions_const_dispatch(QObjectLink::getLink(this)->dId);
}

QTD_FUNC_DECL(CORE, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QAbstractItemModel_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_initCallBacks(VoidFunc *virts) {
    qtd_QAbstractItemModel_buddy_QModelIndex_const_dispatch = (qtd_QAbstractItemModel_buddy_QModelIndex_const_dispatch_t) virts[0];
    qtd_QAbstractItemModel_canFetchMore_QModelIndex_const_dispatch = (qtd_QAbstractItemModel_canFetchMore_QModelIndex_const_dispatch_t) virts[1];
    qtd_QAbstractItemModel_columnCount_QModelIndex_const_dispatch = (qtd_QAbstractItemModel_columnCount_QModelIndex_const_dispatch_t) virts[2];
    qtd_QAbstractItemModel_data_QModelIndex_int_const_dispatch = (qtd_QAbstractItemModel_data_QModelIndex_int_const_dispatch_t) virts[3];
    qtd_QAbstractItemModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex_dispatch = (qtd_QAbstractItemModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex_dispatch_t) virts[4];
    qtd_QAbstractItemModel_fetchMore_QModelIndex_dispatch = (qtd_QAbstractItemModel_fetchMore_QModelIndex_dispatch_t) virts[5];
    qtd_QAbstractItemModel_flags_QModelIndex_const_dispatch = (qtd_QAbstractItemModel_flags_QModelIndex_const_dispatch_t) virts[6];
    qtd_QAbstractItemModel_hasChildren_QModelIndex_const_dispatch = (qtd_QAbstractItemModel_hasChildren_QModelIndex_const_dispatch_t) virts[7];
    qtd_QAbstractItemModel_headerData_int_Orientation_int_const_dispatch = (qtd_QAbstractItemModel_headerData_int_Orientation_int_const_dispatch_t) virts[8];
    qtd_QAbstractItemModel_index_int_int_QModelIndex_const_dispatch = (qtd_QAbstractItemModel_index_int_int_QModelIndex_const_dispatch_t) virts[9];
    qtd_QAbstractItemModel_insertColumns_int_int_QModelIndex_dispatch = (qtd_QAbstractItemModel_insertColumns_int_int_QModelIndex_dispatch_t) virts[10];
    qtd_QAbstractItemModel_insertRows_int_int_QModelIndex_dispatch = (qtd_QAbstractItemModel_insertRows_int_int_QModelIndex_dispatch_t) virts[11];
    qtd_QAbstractItemModel_match_QModelIndex_int_QVariant_int_MatchFlags_const_dispatch = (qtd_QAbstractItemModel_match_QModelIndex_int_QVariant_int_MatchFlags_const_dispatch_t) virts[12];
    qtd_QAbstractItemModel_mimeData_QList_const_dispatch = (qtd_QAbstractItemModel_mimeData_QList_const_dispatch_t) virts[13];
    qtd_QAbstractItemModel_mimeTypes_const_dispatch = (qtd_QAbstractItemModel_mimeTypes_const_dispatch_t) virts[14];
    qtd_QAbstractItemModel_parent_QModelIndex_const_dispatch = (qtd_QAbstractItemModel_parent_QModelIndex_const_dispatch_t) virts[15];
    qtd_QAbstractItemModel_removeColumns_int_int_QModelIndex_dispatch = (qtd_QAbstractItemModel_removeColumns_int_int_QModelIndex_dispatch_t) virts[16];
    qtd_QAbstractItemModel_removeRows_int_int_QModelIndex_dispatch = (qtd_QAbstractItemModel_removeRows_int_int_QModelIndex_dispatch_t) virts[17];
    qtd_QAbstractItemModel_revert_dispatch = (qtd_QAbstractItemModel_revert_dispatch_t) virts[18];
    qtd_QAbstractItemModel_rowCount_QModelIndex_const_dispatch = (qtd_QAbstractItemModel_rowCount_QModelIndex_const_dispatch_t) virts[19];
    qtd_QAbstractItemModel_setData_QModelIndex_QVariant_int_dispatch = (qtd_QAbstractItemModel_setData_QModelIndex_QVariant_int_dispatch_t) virts[20];
    qtd_QAbstractItemModel_setHeaderData_int_Orientation_QVariant_int_dispatch = (qtd_QAbstractItemModel_setHeaderData_int_Orientation_QVariant_int_dispatch_t) virts[21];
    qtd_QAbstractItemModel_sort_int_SortOrder_dispatch = (qtd_QAbstractItemModel_sort_int_SortOrder_dispatch_t) virts[22];
    qtd_QAbstractItemModel_span_QModelIndex_const_dispatch = (qtd_QAbstractItemModel_span_QModelIndex_const_dispatch_t) virts[23];
    qtd_QAbstractItemModel_submit_dispatch = (qtd_QAbstractItemModel_submit_dispatch_t) virts[24];
    qtd_QAbstractItemModel_supportedDropActions_const_dispatch = (qtd_QAbstractItemModel_supportedDropActions_const_dispatch_t) virts[25];
}
// Functions in shell class
QObject*  QAbstractItemModel_QtDShell::parent() const
{
    return QAbstractItemModel::parent();
}

// public overrides for functions that are protected in the base class
void QAbstractItemModel_QtDShell::__public_beginInsertColumns(const QModelIndex&  parent0, int  first1, int  last2)
{
    QAbstractItemModel::beginInsertColumns((const QModelIndex& )parent0, (int )first1, (int )last2);
}

void QAbstractItemModel_QtDShell::__public_beginInsertRows(const QModelIndex&  parent0, int  first1, int  last2)
{
    QAbstractItemModel::beginInsertRows((const QModelIndex& )parent0, (int )first1, (int )last2);
}

bool  QAbstractItemModel_QtDShell::__public_beginMoveColumns(const QModelIndex&  sourceParent0, int  sourceFirst1, int  sourceLast2, const QModelIndex&  destinationParent3, int  destinationColumn4)
{
    return QAbstractItemModel::beginMoveColumns((const QModelIndex& )sourceParent0, (int )sourceFirst1, (int )sourceLast2, (const QModelIndex& )destinationParent3, (int )destinationColumn4);
}

bool  QAbstractItemModel_QtDShell::__public_beginMoveRows(const QModelIndex&  sourceParent0, int  sourceFirst1, int  sourceLast2, const QModelIndex&  destinationParent3, int  destinationRow4)
{
    return QAbstractItemModel::beginMoveRows((const QModelIndex& )sourceParent0, (int )sourceFirst1, (int )sourceLast2, (const QModelIndex& )destinationParent3, (int )destinationRow4);
}

void QAbstractItemModel_QtDShell::__public_beginRemoveColumns(const QModelIndex&  parent0, int  first1, int  last2)
{
    QAbstractItemModel::beginRemoveColumns((const QModelIndex& )parent0, (int )first1, (int )last2);
}

void QAbstractItemModel_QtDShell::__public_beginRemoveRows(const QModelIndex&  parent0, int  first1, int  last2)
{
    QAbstractItemModel::beginRemoveRows((const QModelIndex& )parent0, (int )first1, (int )last2);
}

void QAbstractItemModel_QtDShell::__public_beginResetModel()
{
    QAbstractItemModel::beginResetModel();
}

void QAbstractItemModel_QtDShell::__public_changePersistentIndex(const QModelIndex&  from0, const QModelIndex&  to1)
{
    QAbstractItemModel::changePersistentIndex((const QModelIndex& )from0, (const QModelIndex& )to1);
}

void QAbstractItemModel_QtDShell::__public_changePersistentIndexList(const QList<QModelIndex >&  from0, const QList<QModelIndex >&  to1)
{
    QAbstractItemModel::changePersistentIndexList((const QList<QModelIndex >& )from0, (const QList<QModelIndex >& )to1);
}

QModelIndex  QAbstractItemModel_QtDShell::__public_createIndex(int  row0, int  column1, int  id2) const
{
    return QAbstractItemModel::createIndex((int )row0, (int )column1, (int )id2);
}

QModelIndex  QAbstractItemModel_QtDShell::__public_createIndex(int  row0, int  column1, unsigned int  id2) const
{
    return QAbstractItemModel::createIndex((int )row0, (int )column1, (unsigned int )id2);
}

QModelIndex  QAbstractItemModel_QtDShell::__public_createIndex(int  row0, int  column1, void*  data2) const
{
    return QAbstractItemModel::createIndex((int )row0, (int )column1, (void* )data2);
}

bool  QAbstractItemModel_QtDShell::__public_decodeData(int  row0, int  column1, const QModelIndex&  parent2, QDataStream&  stream3)
{
    return QAbstractItemModel::decodeData((int )row0, (int )column1, (const QModelIndex& )parent2, (QDataStream& )stream3);
}

void QAbstractItemModel_QtDShell::__public_encodeData(const QList<QModelIndex >&  indexes0, QDataStream&  stream1) const
{
    QAbstractItemModel::encodeData((const QList<QModelIndex >& )indexes0, (QDataStream& )stream1);
}

void QAbstractItemModel_QtDShell::__public_endInsertColumns()
{
    QAbstractItemModel::endInsertColumns();
}

void QAbstractItemModel_QtDShell::__public_endInsertRows()
{
    QAbstractItemModel::endInsertRows();
}

void QAbstractItemModel_QtDShell::__public_endMoveColumns()
{
    QAbstractItemModel::endMoveColumns();
}

void QAbstractItemModel_QtDShell::__public_endMoveRows()
{
    QAbstractItemModel::endMoveRows();
}

void QAbstractItemModel_QtDShell::__public_endRemoveColumns()
{
    QAbstractItemModel::endRemoveColumns();
}

void QAbstractItemModel_QtDShell::__public_endRemoveRows()
{
    QAbstractItemModel::endRemoveRows();
}

void QAbstractItemModel_QtDShell::__public_endResetModel()
{
    QAbstractItemModel::endResetModel();
}

QList<QModelIndex >  QAbstractItemModel_QtDShell::__public_persistentIndexList() const
{
    return QAbstractItemModel::persistentIndexList();
}

void QAbstractItemModel_QtDShell::__public_reset()
{
    QAbstractItemModel::reset();
}

QObject*  QAbstractItemModel_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QAbstractItemModel_QtDShell::__public_dataChanged(const QModelIndex&  topLeft0, const QModelIndex&  bottomRight1)
{
    QAbstractItemModel::dataChanged((const QModelIndex& )topLeft0, (const QModelIndex& )bottomRight1);
}

void QAbstractItemModel_QtDShell::__public_headerDataChanged(int  orientation0, int  first1, int  last2)
{
    QAbstractItemModel::headerDataChanged((Qt::Orientation )orientation0, (int )first1, (int )last2);
}

void QAbstractItemModel_QtDShell::__public_layoutAboutToBeChanged()
{
    QAbstractItemModel::layoutAboutToBeChanged();
}

void QAbstractItemModel_QtDShell::__public_layoutChanged()
{
    QAbstractItemModel::layoutChanged();
}

// Write virtual function overries used to decide on static/virtual calls
QModelIndex  QAbstractItemModel_QtDShell::__override_buddy(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemModel::buddy((const QModelIndex& )index0);
    } else {
        return buddy((const QModelIndex& )index0);
    }
}

bool  QAbstractItemModel_QtDShell::__override_canFetchMore(const QModelIndex&  parent0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemModel::canFetchMore((const QModelIndex& )parent0);
    } else {
        return canFetchMore((const QModelIndex& )parent0);
    }
}

void QAbstractItemModel_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

int  QAbstractItemModel_QtDShell::__override_columnCount(const QModelIndex&  parent0, bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return columnCount((const QModelIndex& )parent0);
    }
}

void QAbstractItemModel_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

QVariant  QAbstractItemModel_QtDShell::__override_data(const QModelIndex&  index0, int  role1, bool static_call) const
{
    if (static_call) {
        return QVariant();
    } else {
        return data((const QModelIndex& )index0, (int )role1);
    }
}

bool  QAbstractItemModel_QtDShell::__override_dropMimeData(const QMimeData*  data0, int  action1, int  row2, int  column3, const QModelIndex&  parent4, bool static_call)
{
    if (static_call) {
        return QAbstractItemModel::dropMimeData((const QMimeData* )data0, (Qt::DropAction )action1, (int )row2, (int )column3, (const QModelIndex& )parent4);
    } else {
        return dropMimeData((const QMimeData* )data0, (Qt::DropAction )action1, (int )row2, (int )column3, (const QModelIndex& )parent4);
    }
}

bool  QAbstractItemModel_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QObject::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QAbstractItemModel_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QAbstractItemModel_QtDShell::__override_fetchMore(const QModelIndex&  parent0, bool static_call)
{
    if (static_call) {
        QAbstractItemModel::fetchMore((const QModelIndex& )parent0);
    } else {
        fetchMore((const QModelIndex& )parent0);
    }
}

int  QAbstractItemModel_QtDShell::__override_flags(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemModel::flags((const QModelIndex& )index0);
    } else {
        return flags((const QModelIndex& )index0);
    }
}

bool  QAbstractItemModel_QtDShell::__override_hasChildren(const QModelIndex&  parent0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemModel::hasChildren((const QModelIndex& )parent0);
    } else {
        return hasChildren((const QModelIndex& )parent0);
    }
}

QVariant  QAbstractItemModel_QtDShell::__override_headerData(int  section0, int  orientation1, int  role2, bool static_call) const
{
    if (static_call) {
        return QAbstractItemModel::headerData((int )section0, (Qt::Orientation )orientation1, (int )role2);
    } else {
        return headerData((int )section0, (Qt::Orientation )orientation1, (int )role2);
    }
}

QModelIndex  QAbstractItemModel_QtDShell::__override_index(int  row0, int  column1, const QModelIndex&  parent2, bool static_call) const
{
    if (static_call) {
        return QModelIndex();
    } else {
        return index((int )row0, (int )column1, (const QModelIndex& )parent2);
    }
}

bool  QAbstractItemModel_QtDShell::__override_insertColumns(int  column0, int  count1, const QModelIndex&  parent2, bool static_call)
{
    if (static_call) {
        return QAbstractItemModel::insertColumns((int )column0, (int )count1, (const QModelIndex& )parent2);
    } else {
        return insertColumns((int )column0, (int )count1, (const QModelIndex& )parent2);
    }
}

bool  QAbstractItemModel_QtDShell::__override_insertRows(int  row0, int  count1, const QModelIndex&  parent2, bool static_call)
{
    if (static_call) {
        return QAbstractItemModel::insertRows((int )row0, (int )count1, (const QModelIndex& )parent2);
    } else {
        return insertRows((int )row0, (int )count1, (const QModelIndex& )parent2);
    }
}

QList<QModelIndex >  QAbstractItemModel_QtDShell::__override_match(const QModelIndex&  start0, int  role1, const QVariant&  value2, int  hits3, int  flags4, bool static_call) const
{
    if (static_call) {
        return QAbstractItemModel::match((const QModelIndex& )start0, (int )role1, (const QVariant& )value2, (int )hits3, (Qt::MatchFlags )flags4);
    } else {
        return match((const QModelIndex& )start0, (int )role1, (const QVariant& )value2, (int )hits3, (Qt::MatchFlags )flags4);
    }
}

QMimeData*  QAbstractItemModel_QtDShell::__override_mimeData(const QList<QModelIndex >&  indexes0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemModel::mimeData((const QList<QModelIndex >& )indexes0);
    } else {
        return mimeData((const QList<QModelIndex >& )indexes0);
    }
}

QStringList  QAbstractItemModel_QtDShell::__override_mimeTypes(bool static_call) const
{
    if (static_call) {
        return QAbstractItemModel::mimeTypes();
    } else {
        return mimeTypes();
    }
}

QModelIndex  QAbstractItemModel_QtDShell::__override_parent(const QModelIndex&  child0, bool static_call) const
{
    if (static_call) {
        return QModelIndex();
    } else {
        return parent((const QModelIndex& )child0);
    }
}

bool  QAbstractItemModel_QtDShell::__override_removeColumns(int  column0, int  count1, const QModelIndex&  parent2, bool static_call)
{
    if (static_call) {
        return QAbstractItemModel::removeColumns((int )column0, (int )count1, (const QModelIndex& )parent2);
    } else {
        return removeColumns((int )column0, (int )count1, (const QModelIndex& )parent2);
    }
}

bool  QAbstractItemModel_QtDShell::__override_removeRows(int  row0, int  count1, const QModelIndex&  parent2, bool static_call)
{
    if (static_call) {
        return QAbstractItemModel::removeRows((int )row0, (int )count1, (const QModelIndex& )parent2);
    } else {
        return removeRows((int )row0, (int )count1, (const QModelIndex& )parent2);
    }
}

void QAbstractItemModel_QtDShell::__override_revert(bool static_call)
{
    if (static_call) {
        QAbstractItemModel::revert();
    } else {
        revert();
    }
}

int  QAbstractItemModel_QtDShell::__override_rowCount(const QModelIndex&  parent0, bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return rowCount((const QModelIndex& )parent0);
    }
}

bool  QAbstractItemModel_QtDShell::__override_setData(const QModelIndex&  index0, const QVariant&  value1, int  role2, bool static_call)
{
    if (static_call) {
        return QAbstractItemModel::setData((const QModelIndex& )index0, (const QVariant& )value1, (int )role2);
    } else {
        return setData((const QModelIndex& )index0, (const QVariant& )value1, (int )role2);
    }
}

bool  QAbstractItemModel_QtDShell::__override_setHeaderData(int  section0, int  orientation1, const QVariant&  value2, int  role3, bool static_call)
{
    if (static_call) {
        return QAbstractItemModel::setHeaderData((int )section0, (Qt::Orientation )orientation1, (const QVariant& )value2, (int )role3);
    } else {
        return setHeaderData((int )section0, (Qt::Orientation )orientation1, (const QVariant& )value2, (int )role3);
    }
}

void QAbstractItemModel_QtDShell::__override_sort(int  column0, int  order1, bool static_call)
{
    if (static_call) {
        QAbstractItemModel::sort((int )column0, (Qt::SortOrder )order1);
    } else {
        sort((int )column0, (Qt::SortOrder )order1);
    }
}

QSize  QAbstractItemModel_QtDShell::__override_span(const QModelIndex&  index0, bool static_call) const
{
    if (static_call) {
        return QAbstractItemModel::span((const QModelIndex& )index0);
    } else {
        return span((const QModelIndex& )index0);
    }
}

bool  QAbstractItemModel_QtDShell::__override_submit(bool static_call)
{
    if (static_call) {
        return QAbstractItemModel::submit();
    } else {
        return submit();
    }
}

int  QAbstractItemModel_QtDShell::__override_supportedDropActions(bool static_call) const
{
    if (static_call) {
        return QAbstractItemModel::supportedDropActions();
    } else {
        return supportedDropActions();
    }
}

void QAbstractItemModel_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// QAbstractItemModel::dataChanged(const QModelIndex & topLeft, const QModelIndex & bottomRight)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_dataChanged_QModelIndex_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor topLeft0,
 QModelIndexAccessor bottomRight1)
{
    QModelIndex __qt_topLeft0 = qtd_to_QModelIndex(topLeft0);
    QModelIndex __qt_bottomRight1 = qtd_to_QModelIndex(bottomRight1);
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    __qt_this->__public_dataChanged((const QModelIndex& )__qt_topLeft0, (const QModelIndex& )__qt_bottomRight1);

}

// QAbstractItemModel::headerDataChanged(Qt::Orientation orientation, int first, int last)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_headerDataChanged_Orientation_int_int
(void* __this_nativeId,
 int orientation0,
 int first1,
 int last2)
{
    Qt::Orientation __qt_orientation0 = (Qt::Orientation) orientation0;
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    __qt_this->__public_headerDataChanged((Qt::Orientation )__qt_orientation0, (int )first1, (int )last2);

}

// QAbstractItemModel::layoutAboutToBeChanged()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_layoutAboutToBeChanged
(void* __this_nativeId)
{
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    __qt_this->__public_layoutAboutToBeChanged();

}

// QAbstractItemModel::layoutChanged()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_layoutChanged
(void* __this_nativeId)
{
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    __qt_this->__public_layoutChanged();

}

// ---externC---
// QAbstractItemModel::QAbstractItemModel(QObject * parent_)
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractItemModel_QAbstractItemModel_QObject
(void *d_ptr,
 void* parent0)
{
    QObject*  __qt_parent0 = (QObject* ) parent0;
    QAbstractItemModel_QtDShell *__qt_this = new QAbstractItemModel_QtDShell(d_ptr, (QObject* )__qt_parent0);
    return (void *) __qt_this;

}

// QAbstractItemModel::beginInsertColumns(const QModelIndex & parent_, int first, int last)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_beginInsertColumns_QModelIndex_int_int
(void* __this_nativeId,
 QModelIndexAccessor parent0,
 int first1,
 int last2)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    __qt_this->__public_beginInsertColumns((const QModelIndex& )__qt_parent0, (int )first1, (int )last2);

}

// QAbstractItemModel::beginInsertRows(const QModelIndex & parent_, int first, int last)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_beginInsertRows_QModelIndex_int_int
(void* __this_nativeId,
 QModelIndexAccessor parent0,
 int first1,
 int last2)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    __qt_this->__public_beginInsertRows((const QModelIndex& )__qt_parent0, (int )first1, (int )last2);

}

// QAbstractItemModel::beginMoveColumns(const QModelIndex & sourceParent, int sourceFirst, int sourceLast, const QModelIndex & destinationParent, int destinationColumn)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractItemModel_beginMoveColumns_QModelIndex_int_int_QModelIndex_int
(void* __this_nativeId,
 QModelIndexAccessor sourceParent0,
 int sourceFirst1,
 int sourceLast2,
 QModelIndexAccessor destinationParent3,
 int destinationColumn4)
{
    QModelIndex __qt_sourceParent0 = qtd_to_QModelIndex(sourceParent0);
    QModelIndex __qt_destinationParent3 = qtd_to_QModelIndex(destinationParent3);
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->__public_beginMoveColumns((const QModelIndex& )__qt_sourceParent0, (int )sourceFirst1, (int )sourceLast2, (const QModelIndex& )__qt_destinationParent3, (int )destinationColumn4);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemModel::beginMoveRows(const QModelIndex & sourceParent, int sourceFirst, int sourceLast, const QModelIndex & destinationParent, int destinationRow)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractItemModel_beginMoveRows_QModelIndex_int_int_QModelIndex_int
(void* __this_nativeId,
 QModelIndexAccessor sourceParent0,
 int sourceFirst1,
 int sourceLast2,
 QModelIndexAccessor destinationParent3,
 int destinationRow4)
{
    QModelIndex __qt_sourceParent0 = qtd_to_QModelIndex(sourceParent0);
    QModelIndex __qt_destinationParent3 = qtd_to_QModelIndex(destinationParent3);
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->__public_beginMoveRows((const QModelIndex& )__qt_sourceParent0, (int )sourceFirst1, (int )sourceLast2, (const QModelIndex& )__qt_destinationParent3, (int )destinationRow4);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemModel::beginRemoveColumns(const QModelIndex & parent_, int first, int last)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_beginRemoveColumns_QModelIndex_int_int
(void* __this_nativeId,
 QModelIndexAccessor parent0,
 int first1,
 int last2)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    __qt_this->__public_beginRemoveColumns((const QModelIndex& )__qt_parent0, (int )first1, (int )last2);

}

// QAbstractItemModel::beginRemoveRows(const QModelIndex & parent_, int first, int last)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_beginRemoveRows_QModelIndex_int_int
(void* __this_nativeId,
 QModelIndexAccessor parent0,
 int first1,
 int last2)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    __qt_this->__public_beginRemoveRows((const QModelIndex& )__qt_parent0, (int )first1, (int )last2);

}

// QAbstractItemModel::beginResetModel()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_beginResetModel
(void* __this_nativeId)
{
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    __qt_this->__public_beginResetModel();

}

// QAbstractItemModel::changePersistentIndex(const QModelIndex & from, const QModelIndex & to)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_changePersistentIndex_QModelIndex_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor from0,
 QModelIndexAccessor to1)
{
    QModelIndex __qt_from0 = qtd_to_QModelIndex(from0);
    QModelIndex __qt_to1 = qtd_to_QModelIndex(to1);
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    __qt_this->__public_changePersistentIndex((const QModelIndex& )__qt_from0, (const QModelIndex& )__qt_to1);

}

// QAbstractItemModel::changePersistentIndexList(const QList<QModelIndex > & from, const QList<QModelIndex > & to)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_changePersistentIndexList_QList_QList
(void* __this_nativeId,
 void* from0,
 void* to1)
{
QList<QModelIndex > __qt_from0 = (*(QList<QModelIndex > *)from0);
QList<QModelIndex > __qt_to1 = (*(QList<QModelIndex > *)to1);
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    __qt_this->__public_changePersistentIndexList((const QList<QModelIndex >& )__qt_from0, (const QList<QModelIndex >& )__qt_to1);

}

// QAbstractItemModel::createIndex(int row, int column, int id) const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_createIndex_int_int_int_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int row0,
 int column1,
 int id2)
{
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    QModelIndex  __qt_return_value = __qt_this->__public_createIndex((int )row0, (int )column1, (int )id2);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QAbstractItemModel::createIndex(int row, int column, unsigned int id) const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_createIndex_int_int_uint_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int row0,
 int column1,
 unsigned int id2)
{
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    QModelIndex  __qt_return_value = __qt_this->__public_createIndex((int )row0, (int )column1, (unsigned int )id2);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QAbstractItemModel::createIndex(int row, int column, void * data) const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_createIndex_int_int_nativepointervoid_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int row0,
 int column1,
 void* data2)
{
    void*  __qt_data2 = (void* ) data2;
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    QModelIndex  __qt_return_value = __qt_this->__public_createIndex((int )row0, (int )column1, (void* )__qt_data2);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QAbstractItemModel::decodeData(int row, int column, const QModelIndex & parent_, QDataStream & stream)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractItemModel_decodeData_int_int_QModelIndex_QDataStream
(void* __this_nativeId,
 int row0,
 int column1,
 QModelIndexAccessor parent2,
 void* stream3)
{
    QModelIndex __qt_parent2 = qtd_to_QModelIndex(parent2);
    QDataStream&  __qt_stream3 = (QDataStream& ) * (QDataStream *) stream3;
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->__public_decodeData((int )row0, (int )column1, (const QModelIndex& )__qt_parent2, (QDataStream& )__qt_stream3);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemModel::encodeData(const QList<QModelIndex > & indexes, QDataStream & stream) const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_encodeData_QList_QDataStream_const
(void* __this_nativeId,
 void* indexes0,
 void* stream1)
{
QList<QModelIndex > __qt_indexes0 = (*(QList<QModelIndex > *)indexes0);
    QDataStream&  __qt_stream1 = (QDataStream& ) * (QDataStream *) stream1;
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    __qt_this->__public_encodeData((const QList<QModelIndex >& )__qt_indexes0, (QDataStream& )__qt_stream1);

}

// QAbstractItemModel::endInsertColumns()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_endInsertColumns
(void* __this_nativeId)
{
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    __qt_this->__public_endInsertColumns();

}

// QAbstractItemModel::endInsertRows()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_endInsertRows
(void* __this_nativeId)
{
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    __qt_this->__public_endInsertRows();

}

// QAbstractItemModel::endMoveColumns()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_endMoveColumns
(void* __this_nativeId)
{
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    __qt_this->__public_endMoveColumns();

}

// QAbstractItemModel::endMoveRows()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_endMoveRows
(void* __this_nativeId)
{
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    __qt_this->__public_endMoveRows();

}

// QAbstractItemModel::endRemoveColumns()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_endRemoveColumns
(void* __this_nativeId)
{
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    __qt_this->__public_endRemoveColumns();

}

// QAbstractItemModel::endRemoveRows()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_endRemoveRows
(void* __this_nativeId)
{
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    __qt_this->__public_endRemoveRows();

}

// QAbstractItemModel::endResetModel()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_endResetModel
(void* __this_nativeId)
{
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    __qt_this->__public_endResetModel();

}

// QAbstractItemModel::hasIndex(int row, int column, const QModelIndex & parent_) const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractItemModel_hasIndex_int_int_QModelIndex_const
(void* __this_nativeId,
 int row0,
 int column1,
 QModelIndexAccessor parent2)
{
    QModelIndex __qt_parent2 = qtd_to_QModelIndex(parent2);
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasIndex((int )row0, (int )column1, (const QModelIndex& )__qt_parent2);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemModel::insertColumn(int column, const QModelIndex & parent_)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractItemModel_insertColumn_int_QModelIndex
(void* __this_nativeId,
 int column0,
 QModelIndexAccessor parent1)
{
    QModelIndex __qt_parent1 = qtd_to_QModelIndex(parent1);
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->insertColumn((int )column0, (const QModelIndex& )__qt_parent1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemModel::insertRow(int row, const QModelIndex & parent_)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractItemModel_insertRow_int_QModelIndex
(void* __this_nativeId,
 int row0,
 QModelIndexAccessor parent1)
{
    QModelIndex __qt_parent1 = qtd_to_QModelIndex(parent1);
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->insertRow((int )row0, (const QModelIndex& )__qt_parent1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemModel::persistentIndexList() const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_persistentIndexList_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    QList<QModelIndex >  __qt_return_value = __qt_this->__public_persistentIndexList();

QList<QModelIndex > &__d_return_value_tmp = (*(QList<QModelIndex > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QAbstractItemModel::removeColumn(int column, const QModelIndex & parent_)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractItemModel_removeColumn_int_QModelIndex
(void* __this_nativeId,
 int column0,
 QModelIndexAccessor parent1)
{
    QModelIndex __qt_parent1 = qtd_to_QModelIndex(parent1);
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->removeColumn((int )column0, (const QModelIndex& )__qt_parent1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemModel::removeRow(int row, const QModelIndex & parent_)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractItemModel_removeRow_int_QModelIndex
(void* __this_nativeId,
 int row0,
 QModelIndexAccessor parent1)
{
    QModelIndex __qt_parent1 = qtd_to_QModelIndex(parent1);
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->removeRow((int )row0, (const QModelIndex& )__qt_parent1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemModel::reset()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_reset
(void* __this_nativeId)
{
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    __qt_this->__public_reset();

}

// QAbstractItemModel::roleNames() const
// QAbstractItemModel::setRoleNames(const QHash<int, QByteArray > & roleNames)
// QAbstractItemModel::setSupportedDragActions(QFlags<Qt::DropAction> arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_setSupportedDragActions_DropActions
(void* __this_nativeId,
 int arg__1)
{
    QFlags<Qt::DropAction> __qt_arg__1 = (QFlags<Qt::DropAction>) arg__1;
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    __qt_this->setSupportedDragActions((Qt::DropActions )__qt_arg__1);

}

// QAbstractItemModel::sibling(int row, int column, const QModelIndex & idx) const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_sibling_int_int_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int row0,
 int column1,
 QModelIndexAccessor idx2)
{
    QModelIndex __qt_idx2 = qtd_to_QModelIndex(idx2);
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    QModelIndex  __qt_return_value = __qt_this->sibling((int )row0, (int )column1, (const QModelIndex& )__qt_idx2);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QAbstractItemModel::supportedDragActions() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractItemModel_supportedDragActions_const
(void* __this_nativeId)
{
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->supportedDragActions();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemModel::buddy(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_buddy_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QModelIndex  __qt_return_value = __qt_this->__override_buddy((const QModelIndex& )__qt_index0, __do_static_call);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QAbstractItemModel::canFetchMore(const QModelIndex & parent_) const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractItemModel_canFetchMore_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor parent0)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_canFetchMore((const QModelIndex& )__qt_parent0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemModel::columnCount(const QModelIndex & parent_) const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractItemModel_columnCount_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor parent0)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_columnCount((const QModelIndex& )__qt_parent0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemModel::data(const QModelIndex & index, int role) const
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractItemModel_data_QModelIndex_int_const
(void* __this_nativeId,
 QModelIndexAccessor index0,
 int role1)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_data((const QModelIndex& )__qt_index0, (int )role1, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QAbstractItemModel::dropMimeData(const QMimeData * data, Qt::DropAction action, int row, int column, const QModelIndex & parent_)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractItemModel_dropMimeData_QMimeData_DropAction_int_int_QModelIndex
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
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_dropMimeData((const QMimeData* )__qt_data0, (Qt::DropAction )__qt_action1, (int )row2, (int )column3, (const QModelIndex& )__qt_parent4, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemModel::fetchMore(const QModelIndex & parent_)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_fetchMore_QModelIndex
(void* __this_nativeId,
 QModelIndexAccessor parent0)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_fetchMore((const QModelIndex& )__qt_parent0, __do_static_call);

}

// QAbstractItemModel::flags(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractItemModel_flags_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_flags((const QModelIndex& )__qt_index0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemModel::hasChildren(const QModelIndex & parent_) const
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractItemModel_hasChildren_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor parent0)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_hasChildren((const QModelIndex& )__qt_parent0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemModel::headerData(int section, Qt::Orientation orientation, int role) const
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractItemModel_headerData_int_Orientation_int_const
(void* __this_nativeId,
 int section0,
 int orientation1,
 int role2)
{
    Qt::Orientation __qt_orientation1 = (Qt::Orientation) orientation1;
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_headerData((int )section0, (Qt::Orientation )__qt_orientation1, (int )role2, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QAbstractItemModel::index(int row, int column, const QModelIndex & parent_) const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_index_int_int_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 int row0,
 int column1,
 QModelIndexAccessor parent2)
{
    QModelIndex __qt_parent2 = qtd_to_QModelIndex(parent2);
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QModelIndex  __qt_return_value = __qt_this->__override_index((int )row0, (int )column1, (const QModelIndex& )__qt_parent2, __do_static_call);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QAbstractItemModel::insertColumns(int column, int count, const QModelIndex & parent_)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractItemModel_insertColumns_int_int_QModelIndex
(void* __this_nativeId,
 int column0,
 int count1,
 QModelIndexAccessor parent2)
{
    QModelIndex __qt_parent2 = qtd_to_QModelIndex(parent2);
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_insertColumns((int )column0, (int )count1, (const QModelIndex& )__qt_parent2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemModel::insertRows(int row, int count, const QModelIndex & parent_)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractItemModel_insertRows_int_int_QModelIndex
(void* __this_nativeId,
 int row0,
 int count1,
 QModelIndexAccessor parent2)
{
    QModelIndex __qt_parent2 = qtd_to_QModelIndex(parent2);
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_insertRows((int )row0, (int )count1, (const QModelIndex& )__qt_parent2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemModel::itemData(const QModelIndex & index) const
// QAbstractItemModel::match(const QModelIndex & start, int role, const QVariant & value, int hits, QFlags<Qt::MatchFlag> flags) const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_match_QModelIndex_int_QVariant_int_MatchFlags_const
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
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QList<QModelIndex >  __qt_return_value = __qt_this->__override_match((const QModelIndex& )__qt_start0, (int )role1, (const QVariant& )__qt_value2, (int )hits3, (Qt::MatchFlags )__qt_flags4, __do_static_call);

QList<QModelIndex > &__d_return_value_tmp = (*(QList<QModelIndex > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QAbstractItemModel::mimeData(const QList<QModelIndex > & indexes) const
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractItemModel_mimeData_QList_const
(void* __this_nativeId,
 void* indexes0)
{
QList<QModelIndex > __qt_indexes0 = (*(QList<QModelIndex > *)indexes0);
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QMimeData*  __qt_return_value = __qt_this->__override_mimeData((const QList<QModelIndex >& )__qt_indexes0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QAbstractItemModel::mimeTypes() const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_mimeTypes_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QStringList  __qt_return_value = __qt_this->__override_mimeTypes(__do_static_call);

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QAbstractItemModel::parent(const QModelIndex & child) const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_parent_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor* __d_return_value,
 QModelIndexAccessor child0)
{
    QModelIndex __qt_child0 = qtd_to_QModelIndex(child0);
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QModelIndex  __qt_return_value = __qt_this->__override_parent((const QModelIndex& )__qt_child0, __do_static_call);

    *__d_return_value = qtd_from_QModelIndex(__qt_return_value);

}

// QAbstractItemModel::removeColumns(int column, int count, const QModelIndex & parent_)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractItemModel_removeColumns_int_int_QModelIndex
(void* __this_nativeId,
 int column0,
 int count1,
 QModelIndexAccessor parent2)
{
    QModelIndex __qt_parent2 = qtd_to_QModelIndex(parent2);
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_removeColumns((int )column0, (int )count1, (const QModelIndex& )__qt_parent2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemModel::removeRows(int row, int count, const QModelIndex & parent_)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractItemModel_removeRows_int_int_QModelIndex
(void* __this_nativeId,
 int row0,
 int count1,
 QModelIndexAccessor parent2)
{
    QModelIndex __qt_parent2 = qtd_to_QModelIndex(parent2);
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_removeRows((int )row0, (int )count1, (const QModelIndex& )__qt_parent2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemModel::revert()
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_revert
(void* __this_nativeId)
{
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_revert(__do_static_call);

}

// QAbstractItemModel::rowCount(const QModelIndex & parent_) const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractItemModel_rowCount_QModelIndex_const
(void* __this_nativeId,
 QModelIndexAccessor parent0)
{
    QModelIndex __qt_parent0 = qtd_to_QModelIndex(parent0);
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_rowCount((const QModelIndex& )__qt_parent0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemModel::setData(const QModelIndex & index, const QVariant & value, int role)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractItemModel_setData_QModelIndex_QVariant_int
(void* __this_nativeId,
 QModelIndexAccessor index0,
 QVariant* value1,
 int role2)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QVariant __qt_value1 = value1 == NULL ? QVariant() : QVariant(*value1);
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_setData((const QModelIndex& )__qt_index0, (const QVariant& )__qt_value1, (int )role2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemModel::setHeaderData(int section, Qt::Orientation orientation, const QVariant & value, int role)
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractItemModel_setHeaderData_int_Orientation_QVariant_int
(void* __this_nativeId,
 int section0,
 int orientation1,
 QVariant* value2,
 int role3)
{
    Qt::Orientation __qt_orientation1 = (Qt::Orientation) orientation1;
    QVariant __qt_value2 = value2 == NULL ? QVariant() : QVariant(*value2);
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_setHeaderData((int )section0, (Qt::Orientation )__qt_orientation1, (const QVariant& )__qt_value2, (int )role3, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemModel::setItemData(const QModelIndex & index, const QMap<int, QVariant > & roles)
// QAbstractItemModel::sort(int column, Qt::SortOrder order)
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_sort_int_SortOrder
(void* __this_nativeId,
 int column0,
 int order1)
{
    Qt::SortOrder __qt_order1 = (Qt::SortOrder) order1;
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_sort((int )column0, (Qt::SortOrder )__qt_order1, __do_static_call);

}

// QAbstractItemModel::span(const QModelIndex & index) const
QTD_EXTERN QTD_EXPORT void qtd_QAbstractItemModel_span_QModelIndex_const
(void* __this_nativeId,
 QSize * __d_return_value,
 QModelIndexAccessor index0)
{
    QModelIndex __qt_index0 = qtd_to_QModelIndex(index0);
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    QSize  __qt_return_value = __qt_this->__override_span((const QModelIndex& )__qt_index0, __do_static_call);

    *__d_return_value = __qt_return_value;

}

// QAbstractItemModel::submit()
QTD_EXTERN QTD_EXPORT bool qtd_QAbstractItemModel_submit
(void* __this_nativeId)
{
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_submit(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAbstractItemModel::supportedDropActions() const
QTD_EXTERN QTD_EXPORT int qtd_QAbstractItemModel_supportedDropActions_const
(void* __this_nativeId)
{
    QAbstractItemModel_QtDShell *__qt_this = (QAbstractItemModel_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_supportedDropActions(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QAbstractItemModel_staticMetaObject() {
    return (void*)&QAbstractItemModel::staticMetaObject;
}


