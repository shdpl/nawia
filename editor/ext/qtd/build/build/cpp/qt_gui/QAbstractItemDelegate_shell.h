#ifndef QABSTRACTITEMDELEGATE_SHELL_H
#define QABSTRACTITEMDELEGATE_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qabstractitemdelegate.h>

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

class QAbstractItemDelegate_QtDShell : public QAbstractItemDelegate, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QAbstractItemDelegate_QtDShell(void *d_ptr, QObject*  parent0);
    ~QAbstractItemDelegate_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    QWidget*  createEditor(QWidget*  parent0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2) const;
    void customEvent(QEvent*  arg__1);
    bool  editorEvent(QEvent*  event0, QAbstractItemModel*  model1, const QStyleOptionViewItem&  option2, const QModelIndex&  index3);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void paint(QPainter*  painter0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2) const;
    void setEditorData(QWidget*  editor0, const QModelIndex&  index1) const;
    void setModelData(QWidget*  editor0, QAbstractItemModel*  model1, const QModelIndex&  index2) const;
    QSize  sizeHint(const QStyleOptionViewItem&  option0, const QModelIndex&  index1) const;
    void timerEvent(QTimerEvent*  arg__1);
    void updateEditorGeometry(QWidget*  editor0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2) const;
    QObject*  __public_sender() const;
    void __public_closeEditor(QWidget*  editor0, int  hint1);
    void __public_commitData(QWidget*  editor0);
    void __public_sizeHintChanged(const QModelIndex&  arg__1);
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    QWidget*  __override_createEditor(QWidget*  parent0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2, bool static_call) const;
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_editorEvent(QEvent*  event0, QAbstractItemModel*  model1, const QStyleOptionViewItem&  option2, const QModelIndex&  index3, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_paint(QPainter*  painter0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2, bool static_call) const;
    void __override_setEditorData(QWidget*  editor0, const QModelIndex&  index1, bool static_call) const;
    void __override_setModelData(QWidget*  editor0, QAbstractItemModel*  model1, const QModelIndex&  index2, bool static_call) const;
    QSize  __override_sizeHint(const QStyleOptionViewItem&  option0, const QModelIndex&  index1, bool static_call) const;
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
    void __override_updateEditorGeometry(QWidget*  editor0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2, bool static_call) const;
};

#endif // QABSTRACTITEMDELEGATE_SHELL_H
