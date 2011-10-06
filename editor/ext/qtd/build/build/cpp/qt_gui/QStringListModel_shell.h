#ifndef QSTRINGLISTMODEL_SHELL_H
#define QSTRINGLISTMODEL_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstringlistmodel.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatastream.h>
#include <qlist.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qstringlistmodel.h>
#include <qvariant.h>

class QStringListModel_QtDShell : public QStringListModel, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QStringListModel_QtDShell(void *d_ptr, QObject*  parent0);
    QStringListModel_QtDShell(void *d_ptr, const QStringList&  strings0, QObject*  parent1);
    ~QStringListModel_QtDShell();

    QModelIndex  buddy(const QModelIndex&  index0) const;
    bool  canFetchMore(const QModelIndex&  parent0) const;
    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    QVariant  data(const QModelIndex&  index0, int  role1) const;
    bool  dropMimeData(const QMimeData*  data0, Qt::DropAction  action1, int  row2, int  column3, const QModelIndex&  parent4);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void fetchMore(const QModelIndex&  parent0);
    Qt::ItemFlags  flags(const QModelIndex&  index0) const;
    QVariant  headerData(int  section0, Qt::Orientation  orientation1, int  role2) const;
    QModelIndex  index(int  row0, int  column1, const QModelIndex&  parent2) const;
    bool  insertColumns(int  column0, int  count1, const QModelIndex&  parent2);
    bool  insertRows(int  row0, int  count1, const QModelIndex&  parent2);
    QList<QModelIndex >  match(const QModelIndex&  start0, int  role1, const QVariant&  value2, int  hits3, Qt::MatchFlags  flags4) const;
    QMimeData*  mimeData(const QList<QModelIndex >&  indexes0) const;
    QStringList  mimeTypes() const;
    bool  removeColumns(int  column0, int  count1, const QModelIndex&  parent2);
    bool  removeRows(int  row0, int  count1, const QModelIndex&  parent2);
    void revert();
    int  rowCount(const QModelIndex&  parent0) const;
    bool  setData(const QModelIndex&  index0, const QVariant&  value1, int  role2);
    bool  setHeaderData(int  section0, Qt::Orientation  orientation1, const QVariant&  value2, int  role3);
    void sort(int  column0, Qt::SortOrder  order1);
    QSize  span(const QModelIndex&  index0) const;
    bool  submit();
    Qt::DropActions  supportedDropActions() const;
    void timerEvent(QTimerEvent*  arg__1);
    void __public_beginInsertColumns(const QModelIndex&  parent0, int  first1, int  last2);
    void __public_beginInsertRows(const QModelIndex&  parent0, int  first1, int  last2);
    bool  __public_beginMoveColumns(const QModelIndex&  sourceParent0, int  sourceFirst1, int  sourceLast2, const QModelIndex&  destinationParent3, int  destinationColumn4);
    bool  __public_beginMoveRows(const QModelIndex&  sourceParent0, int  sourceFirst1, int  sourceLast2, const QModelIndex&  destinationParent3, int  destinationRow4);
    void __public_beginRemoveColumns(const QModelIndex&  parent0, int  first1, int  last2);
    void __public_beginRemoveRows(const QModelIndex&  parent0, int  first1, int  last2);
    void __public_beginResetModel();
    void __public_changePersistentIndex(const QModelIndex&  from0, const QModelIndex&  to1);
    void __public_changePersistentIndexList(const QList<QModelIndex >&  from0, const QList<QModelIndex >&  to1);
    QModelIndex  __public_createIndex(int  row0, int  column1, int  id2) const;
    QModelIndex  __public_createIndex(int  row0, int  column1, unsigned int  id2) const;
    QModelIndex  __public_createIndex(int  row0, int  column1, void*  data2) const;
    bool  __public_decodeData(int  row0, int  column1, const QModelIndex&  parent2, QDataStream&  stream3);
    void __public_encodeData(const QList<QModelIndex >&  indexes0, QDataStream&  stream1) const;
    void __public_endInsertColumns();
    void __public_endInsertRows();
    void __public_endMoveColumns();
    void __public_endMoveRows();
    void __public_endRemoveColumns();
    void __public_endRemoveRows();
    void __public_endResetModel();
    QList<QModelIndex >  __public_persistentIndexList() const;
    void __public_reset();
    QObject*  __public_sender() const;
    void __public_dataChanged(const QModelIndex&  topLeft0, const QModelIndex&  bottomRight1);
    void __public_headerDataChanged(int  orientation0, int  first1, int  last2);
    void __public_layoutAboutToBeChanged();
    void __public_layoutChanged();
    QModelIndex  __override_buddy(const QModelIndex&  index0, bool static_call) const;
    bool  __override_canFetchMore(const QModelIndex&  parent0, bool static_call) const;
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    QVariant  __override_data(const QModelIndex&  index0, int  role1, bool static_call) const;
    bool  __override_dropMimeData(const QMimeData*  data0, int  action1, int  row2, int  column3, const QModelIndex&  parent4, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_fetchMore(const QModelIndex&  parent0, bool static_call);
    int  __override_flags(const QModelIndex&  index0, bool static_call) const;
    QVariant  __override_headerData(int  section0, int  orientation1, int  role2, bool static_call) const;
    QModelIndex  __override_index(int  row0, int  column1, const QModelIndex&  parent2, bool static_call) const;
    bool  __override_insertColumns(int  column0, int  count1, const QModelIndex&  parent2, bool static_call);
    bool  __override_insertRows(int  row0, int  count1, const QModelIndex&  parent2, bool static_call);
    QList<QModelIndex >  __override_match(const QModelIndex&  start0, int  role1, const QVariant&  value2, int  hits3, int  flags4, bool static_call) const;
    QMimeData*  __override_mimeData(const QList<QModelIndex >&  indexes0, bool static_call) const;
    QStringList  __override_mimeTypes(bool static_call) const;
    bool  __override_removeColumns(int  column0, int  count1, const QModelIndex&  parent2, bool static_call);
    bool  __override_removeRows(int  row0, int  count1, const QModelIndex&  parent2, bool static_call);
    void __override_revert(bool static_call);
    int  __override_rowCount(const QModelIndex&  parent0, bool static_call) const;
    bool  __override_setData(const QModelIndex&  index0, const QVariant&  value1, int  role2, bool static_call);
    bool  __override_setHeaderData(int  section0, int  orientation1, const QVariant&  value2, int  role3, bool static_call);
    void __override_sort(int  column0, int  order1, bool static_call);
    QSize  __override_span(const QModelIndex&  index0, bool static_call) const;
    bool  __override_submit(bool static_call);
    int  __override_supportedDropActions(bool static_call) const;
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
};

#endif // QSTRINGLISTMODEL_SHELL_H
