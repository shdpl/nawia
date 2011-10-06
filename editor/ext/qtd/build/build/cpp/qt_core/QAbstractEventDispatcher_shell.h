#ifndef QABSTRACTEVENTDISPATCHER_SHELL_H
#define QABSTRACTEVENTDISPATCHER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qabstracteventdispatcher.h>

#include <QVariant>
#include <qabstracteventdispatcher.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qpair.h>
#include <qsocketnotifier.h>
#include <qvariant.h>

class QAbstractEventDispatcher_QtDShell : public QAbstractEventDispatcher, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QAbstractEventDispatcher_QtDShell(void *d_ptr, QObject*  parent0);
    ~QAbstractEventDispatcher_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    void closingDown();
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void flush();
    bool  hasPendingEvents();
    void interrupt();
    bool  processEvents(QEventLoop::ProcessEventsFlags  flags0);
    void registerSocketNotifier(QSocketNotifier*  notifier0);
    void registerTimer(int  timerId0, int  interval1, QObject*  object2);
    void startingUp();
    void timerEvent(QTimerEvent*  arg__1);
    void unregisterSocketNotifier(QSocketNotifier*  notifier0);
    bool  unregisterTimer(int  timerId0);
    bool  unregisterTimers(QObject*  object0);
    void wakeUp();
    int  registerTimer(int  interval0, QObject*  object1);
    QObject*  __public_sender() const;
    void __public_aboutToBlock();
    void __public_awake();
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_closingDown(bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_flush(bool static_call);
    bool  __override_hasPendingEvents(bool static_call);
    void __override_interrupt(bool static_call);
    bool  __override_processEvents(int  flags0, bool static_call);
    void __override_registerSocketNotifier(QSocketNotifier*  notifier0, bool static_call);
    void __override_registerTimer(int  timerId0, int  interval1, QObject*  object2, bool static_call);
    void __override_startingUp(bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
    void __override_unregisterSocketNotifier(QSocketNotifier*  notifier0, bool static_call);
    bool  __override_unregisterTimer(int  timerId0, bool static_call);
    bool  __override_unregisterTimers(QObject*  object0, bool static_call);
    void __override_wakeUp(bool static_call);
};

#endif // QABSTRACTEVENTDISPATCHER_SHELL_H
