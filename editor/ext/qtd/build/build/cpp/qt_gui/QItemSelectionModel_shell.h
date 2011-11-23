#ifndef QITEMSELECTIONMODEL_SHELL_H
#define QITEMSELECTIONMODEL_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qitemselectionmodel.h>

#include <QVariant>
#include <qabstractitemmodel.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qitemselectionmodel.h>
#include <qlist.h>
#include <qobject.h>
#include <qvariant.h>

class QItemSelectionModel_QtDShell : public QItemSelectionModel, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QItemSelectionModel_QtDShell(void *d_ptr, QAbstractItemModel*  model0);
    QItemSelectionModel_QtDShell(void *d_ptr, QAbstractItemModel*  model0, QObject*  parent1);
    ~QItemSelectionModel_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    void clear();
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void reset();
    void select(const QItemSelection&  selection0, QItemSelectionModel::SelectionFlags  command1);
    void select(const QModelIndex&  index0, QItemSelectionModel::SelectionFlags  command1);
    void timerEvent(QTimerEvent*  arg__1);
    void __public_emitSelectionChanged(const QItemSelection&  newSelection0, const QItemSelection&  oldSelection1);
    QObject*  __public_sender() const;
    void __public_currentChanged(const QModelIndex&  current0, const QModelIndex&  previous1);
    void __public_currentColumnChanged(const QModelIndex&  current0, const QModelIndex&  previous1);
    void __public_currentRowChanged(const QModelIndex&  current0, const QModelIndex&  previous1);
    void __public_selectionChanged(const QItemSelection&  selected0, const QItemSelection&  deselected1);
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_clear(bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_reset(bool static_call);
    void __override_select(const QItemSelection&  selection0, int  command1, bool static_call);
    void __override_select(const QModelIndex&  index0, int  command1, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
};

#endif // QITEMSELECTIONMODEL_SHELL_H
