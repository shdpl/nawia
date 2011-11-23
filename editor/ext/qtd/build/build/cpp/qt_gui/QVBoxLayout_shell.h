#ifndef QVBOXLAYOUT_SHELL_H
#define QVBOXLAYOUT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qboxlayout.h>

#include <QVariant>
#include <qboxlayout.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlayout.h>
#include <qlayoutitem.h>
#include <qlist.h>
#include <qobject.h>
#include <qvariant.h>
#include <qwidget.h>

class QVBoxLayout_QtDShell : public QVBoxLayout, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QVBoxLayout_QtDShell(void *d_ptr);
    QVBoxLayout_QtDShell(void *d_ptr, QWidget*  parent0);
    ~QVBoxLayout_QtDShell();

    void addItem(QLayoutItem*  arg__1);
    void childEvent(QChildEvent*  e0);
    int  count() const;
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    Qt::Orientations  expandingDirections() const;
    QRect  geometry() const;
    bool  hasHeightForWidth() const;
    int  heightForWidth(int  arg__1) const;
    int  indexOf(QWidget*  arg__1) const;
    void invalidate();
    bool  isEmpty() const;
    QLayoutItem*  itemAt(int  arg__1) const;
    QLayout*  layout();
    QSize  maximumSize() const;
    int  minimumHeightForWidth(int  arg__1) const;
    QSize  minimumSize() const;
    void setGeometry(const QRect&  arg__1);
    QSize  sizeHint() const;
    QSpacerItem*  spacerItem();
    QLayoutItem*  takeAt(int  arg__1);
    void timerEvent(QTimerEvent*  arg__1);
    QWidget*  widget();
    void __public_addChildLayout(QLayout*  l0);
    void __public_addChildWidget(QWidget*  w0);
    QRect  __public_alignmentRect(const QRect&  arg__1) const;
    void __public_insertItem(int  index0, QLayoutItem*  arg__2);
    QObject*  __public_sender() const;
    void __public_widgetEvent(QEvent*  arg__1);
    void __override_addItem(QLayoutItem*  arg__1, bool static_call);
    void __override_childEvent(QChildEvent*  e0, bool static_call);
    int  __override_count(bool static_call) const;
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    int  __override_expandingDirections(bool static_call) const;
    QRect  __override_geometry(bool static_call) const;
    bool  __override_hasHeightForWidth(bool static_call) const;
    int  __override_heightForWidth(int  arg__1, bool static_call) const;
    int  __override_indexOf(QWidget*  arg__1, bool static_call) const;
    void __override_invalidate(bool static_call);
    bool  __override_isEmpty(bool static_call) const;
    QLayoutItem*  __override_itemAt(int  arg__1, bool static_call) const;
    QLayout*  __override_layout(bool static_call);
    QSize  __override_maximumSize(bool static_call) const;
    int  __override_minimumHeightForWidth(int  arg__1, bool static_call) const;
    QSize  __override_minimumSize(bool static_call) const;
    void __override_setGeometry(const QRect&  arg__1, bool static_call);
    QSize  __override_sizeHint(bool static_call) const;
    QSpacerItem*  __override_spacerItem(bool static_call);
    QLayoutItem*  __override_takeAt(int  arg__1, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
    QWidget*  __override_widget(bool static_call);
};

#endif // QVBOXLAYOUT_SHELL_H
