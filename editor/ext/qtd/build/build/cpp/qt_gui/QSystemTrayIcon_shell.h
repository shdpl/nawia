#ifndef QSYSTEMTRAYICON_SHELL_H
#define QSYSTEMTRAYICON_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qsystemtrayicon.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qicon.h>
#include <qlist.h>
#include <qmenu.h>
#include <qobject.h>
#include <qsystemtrayicon.h>
#include <qvariant.h>

class QSystemTrayIcon_QtDShell : public QSystemTrayIcon, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QSystemTrayIcon_QtDShell(void *d_ptr, QObject*  parent0);
    QSystemTrayIcon_QtDShell(void *d_ptr, const QIcon&  icon0, QObject*  parent1);
    ~QSystemTrayIcon_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  event0);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void timerEvent(QTimerEvent*  arg__1);
    QObject*  __public_sender() const;
    void __public_activated(int  reason0);
    void __public_messageClicked();
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  event0, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
};

#endif // QSYSTEMTRAYICON_SHELL_H
