#ifndef QSTYLEDITEMDELEGATE_SHELL_H
#define QSTYLEDITEMDELEGATE_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qstyleditemdelegate.h>

#include <QVariant>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qitemeditorfactory.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qpainter.h>
#include <qstyleditemdelegate.h>
#include <qstyleoption.h>
#include <qvariant.h>
#include <qwidget.h>

class QStyledItemDelegate_QtDShell : public QStyledItemDelegate, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QStyledItemDelegate_QtDShell(void *d_ptr, QObject*  parent0);
    ~QStyledItemDelegate_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    QWidget*  createEditor(QWidget*  parent0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2) const;
    void customEvent(QEvent*  arg__1);
    QString  displayText(const QVariant&  value0, const QLocale&  locale1) const;
    bool  editorEvent(QEvent*  event0, QAbstractItemModel*  model1, const QStyleOptionViewItem&  option2, const QModelIndex&  index3);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  object0, QEvent*  event1);
    void initStyleOption(QStyleOptionViewItem*  option0, const QModelIndex&  index1) const;
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
    QString  __override_displayText(const QVariant&  value0, const QLocale&  locale1, bool static_call) const;
    bool  __override_editorEvent(QEvent*  event0, QAbstractItemModel*  model1, const QStyleOptionViewItem&  option2, const QModelIndex&  index3, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  object0, QEvent*  event1, bool static_call);
    void __override_initStyleOption(QStyleOptionViewItem*  option0, const QModelIndex&  index1, bool static_call) const;
    void __override_paint(QPainter*  painter0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2, bool static_call) const;
    void __override_setEditorData(QWidget*  editor0, const QModelIndex&  index1, bool static_call) const;
    void __override_setModelData(QWidget*  editor0, QAbstractItemModel*  model1, const QModelIndex&  index2, bool static_call) const;
    QSize  __override_sizeHint(const QStyleOptionViewItem&  option0, const QModelIndex&  index1, bool static_call) const;
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
    void __override_updateEditorGeometry(QWidget*  editor0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2, bool static_call) const;
};

#endif // QSTYLEDITEMDELEGATE_SHELL_H
