#ifndef QTCPSERVER_SHELL_H
#define QTCPSERVER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qtcpserver.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qhostaddress.h>
#include <qlist.h>
#include <qnetworkproxy.h>
#include <qobject.h>
#include <qtcpserver.h>
#include <qtcpsocket.h>
#include <qvariant.h>

class QTcpServer_QtDShell : public QTcpServer, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QTcpServer_QtDShell(void *d_ptr, QObject*  parent0);
    ~QTcpServer_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    bool  hasPendingConnections() const;
    void incomingConnection(int  handle0);
    QTcpSocket*  nextPendingConnection();
    void timerEvent(QTimerEvent*  arg__1);
    void __public_addPendingConnection(QTcpSocket*  socket0);
    QObject*  __public_sender() const;
    void __public_newConnection();
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    bool  __override_hasPendingConnections(bool static_call) const;
    void __override_incomingConnection(int  handle0, bool static_call);
    QTcpSocket*  __override_nextPendingConnection(bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
};

#endif // QTCPSERVER_SHELL_H
