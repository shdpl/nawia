#ifndef QHTTP_SHELL_H
#define QHTTP_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qhttp.h>

#include <QVariant>
#include <qauthenticator.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qhttp.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qnetworkproxy.h>
#include <qobject.h>
#include <qsslerror.h>
#include <qtcpsocket.h>
#include <qvariant.h>

class QHttp_QtDShell : public QHttp, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QHttp_QtDShell(void *d_ptr, QObject*  parent0);
    QHttp_QtDShell(void *d_ptr, const QString&  hostname0, QHttp::ConnectionMode  mode1, unsigned short  port2, QObject*  parent3);
    QHttp_QtDShell(void *d_ptr, const QString&  hostname0, unsigned short  port1, QObject*  parent2);
    ~QHttp_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void timerEvent(QTimerEvent*  arg__1);
    QObject*  __public_sender() const;
    void __public_authenticationRequired(const QString&  hostname0, unsigned short  port1, QAuthenticator*  arg__3);
    void __public_dataReadProgress(int  arg__1, int  arg__2);
    void __public_dataSendProgress(int  arg__1, int  arg__2);
    void __public_done(bool  arg__1);
    void __public_proxyAuthenticationRequired(const QNetworkProxy&  proxy0, QAuthenticator*  arg__2);
    void __public_readyRead(const QHttpResponseHeader&  resp0);
    void __public_requestFinished(int  arg__1, bool  arg__2);
    void __public_requestStarted(int  arg__1);
    void __public_responseHeaderReceived(const QHttpResponseHeader&  resp0);
    void __public_sslErrors(const QList<QSslError >&  errors0);
    void __public_stateChanged(int  arg__1);
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
};

#endif // QHTTP_SHELL_H
