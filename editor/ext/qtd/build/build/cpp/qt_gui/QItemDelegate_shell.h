#ifndef QITEMDELEGATE_SHELL_H
#define QITEMDELEGATE_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qitemdelegate.h>

#include <QVariant>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qfont.h>
#include <qitemdelegate.h>
#include <qitemeditorfactory.h>
#include <qlist.h>
#include <qobject.h>
#include <qpainter.h>
#include <qpixmap.h>
#include <qstyleoption.h>
#include <qvariant.h>
#include <qwidget.h>

class QItemDelegate_QtDShell : public QItemDelegate, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QItemDelegate_QtDShell(void *d_ptr, QObject*  parent0);
    ~QItemDelegate_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    QWidget*  createEditor(QWidget*  parent0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2) const;
    void customEvent(QEvent*  arg__1);
    void drawCheck(QPainter*  painter0, const QStyleOptionViewItem&  option1, const QRect&  rect2, Qt::CheckState  state3) const;
    void drawDecoration(QPainter*  painter0, const QStyleOptionViewItem&  option1, const QRect&  rect2, const QPixmap&  pixmap3) const;
    void drawDisplay(QPainter*  painter0, const QStyleOptionViewItem&  option1, const QRect&  rect2, const QString&  text3) const;
    void drawFocus(QPainter*  painter0, const QStyleOptionViewItem&  option1, const QRect&  rect2) const;
    bool  editorEvent(QEvent*  event0, QAbstractItemModel*  model1, const QStyleOptionViewItem&  option2, const QModelIndex&  index3);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  object0, QEvent*  event1);
    void paint(QPainter*  painter0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2) const;
    void setEditorData(QWidget*  editor0, const QModelIndex&  index1) const;
    void setModelData(QWidget*  editor0, QAbstractItemModel*  model1, const QModelIndex&  index2) const;
    QSize  sizeHint(const QStyleOptionViewItem&  option0, const QModelIndex&  index1) const;
    void timerEvent(QTimerEvent*  arg__1);
    void updateEditorGeometry(QWidget*  editor0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2) const;
    QRect  __public_check(const QStyleOptionViewItem&  option0, const QRect&  bounding1, const QVariant&  variant2) const;
    QPixmap  __public_decoration(const QStyleOptionViewItem&  option0, const QVariant&  variant1) const;
    void __public_drawBackground(QPainter*  painter0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2) const;
    QRect  __public_rect(const QStyleOptionViewItem&  option0, const QModelIndex&  index1, int  role2) const;
    QObject*  __public_sender() const;
    QStyleOptionViewItem  __public_setOptions(const QModelIndex&  index0, const QStyleOptionViewItem&  option1) const;
    QRect  __public_textRectangle(QPainter*  painter0, const QRect&  rect1, const QFont&  font2, const QString&  text3) const;
    void __public_closeEditor(QWidget*  editor0, int  hint1);
    void __public_commitData(QWidget*  editor0);
    void __public_sizeHintChanged(const QModelIndex&  arg__1);
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    QWidget*  __override_createEditor(QWidget*  parent0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2, bool static_call) const;
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    void __override_drawCheck(QPainter*  painter0, const QStyleOptionViewItem&  option1, const QRect&  rect2, int  state3, bool static_call) const;
    void __override_drawDecoration(QPainter*  painter0, const QStyleOptionViewItem&  option1, const QRect&  rect2, const QPixmap&  pixmap3, bool static_call) const;
    void __override_drawDisplay(QPainter*  painter0, const QStyleOptionViewItem&  option1, const QRect&  rect2, const QString&  text3, bool static_call) const;
    void __override_drawFocus(QPainter*  painter0, const QStyleOptionViewItem&  option1, const QRect&  rect2, bool static_call) const;
    bool  __override_editorEvent(QEvent*  event0, QAbstractItemModel*  model1, const QStyleOptionViewItem&  option2, const QModelIndex&  index3, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  object0, QEvent*  event1, bool static_call);
    void __override_paint(QPainter*  painter0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2, bool static_call) const;
    void __override_setEditorData(QWidget*  editor0, const QModelIndex&  index1, bool static_call) const;
    void __override_setModelData(QWidget*  editor0, QAbstractItemModel*  model1, const QModelIndex&  index2, bool static_call) const;
    QSize  __override_sizeHint(const QStyleOptionViewItem&  option0, const QModelIndex&  index1, bool static_call) const;
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
    void __override_updateEditorGeometry(QWidget*  editor0, const QStyleOptionViewItem&  option1, const QModelIndex&  index2, bool static_call) const;
};

#endif // QITEMDELEGATE_SHELL_H
