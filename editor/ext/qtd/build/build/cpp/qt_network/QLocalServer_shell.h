#ifndef QLOCALSERVER_SHELL_H
#define QLOCALSERVER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qlocalserver.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qlocalserver.h>
#include <qlocalsocket.h>
#include <qobject.h>
#include <qvariant.h>

class QLocalServer_QtDShell : public QLocalServer, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QLocalServer_QtDShell(void *d_ptr, QObject*  parent0);
    ~QLocalServer_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    bool  hasPendingConnections() const;
    void incomingConnection(quintptr  socketDescriptor0);
    QLocalSocket*  nextPendingConnection();
    void timerEvent(QTimerEvent*  arg__1);
    QObject*  __public_sender() const;
    void __public_newConnection();
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    bool  __override_hasPendingConnections(bool static_call) const;
    void __override_incomingConnection(quintptr  socketDescriptor0, bool static_call);
    QLocalSocket*  __override_nextPendingConnection(bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
};

#endif // QLOCALSERVER_SHELL_H
