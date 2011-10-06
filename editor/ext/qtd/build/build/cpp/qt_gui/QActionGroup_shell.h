#ifndef QACTIONGROUP_SHELL_H
#define QACTIONGROUP_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qactiongroup.h>

#include <QVariant>
#include <qaction.h>
#include <qactiongroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qicon.h>
#include <qlist.h>
#include <qobject.h>
#include <qvariant.h>

class QActionGroup_QtDShell : public QActionGroup, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QActionGroup_QtDShell(void *d_ptr, QObject*  parent0);
    ~QActionGroup_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void timerEvent(QTimerEvent*  arg__1);
    QObject*  __public_sender() const;
    void __public_hovered(QAction*  arg__1);
    void __public_triggered(QAction*  arg__1);
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
};

#endif // QACTIONGROUP_SHELL_H
