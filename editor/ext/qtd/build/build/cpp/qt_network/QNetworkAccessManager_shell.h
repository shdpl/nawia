#ifndef QNETWORKACCESSMANAGER_SHELL_H
#define QNETWORKACCESSMANAGER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qnetworkaccessmanager.h>

#include <QVariant>
#include <qabstractnetworkcache.h>
#include <qauthenticator.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qnetworkcookiejar.h>
#include <qnetworkproxy.h>
#include <qnetworkreply.h>
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qsslerror.h>
#include <qvariant.h>

class QNetworkAccessManager_QtDShell : public QNetworkAccessManager, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QNetworkAccessManager_QtDShell(void *d_ptr, QObject*  parent0);
    ~QNetworkAccessManager_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    QNetworkReply*  createRequest(QNetworkAccessManager::Operation  op0, const QNetworkRequest&  request1, QIODevice*  outgoingData2);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void timerEvent(QTimerEvent*  arg__1);
    QObject*  __public_sender() const;
    void __public_authenticationRequired(QNetworkReply*  reply0, QAuthenticator*  authenticator1);
    void __public_finished(QNetworkReply*  reply0);
    void __public_networkSessionConnected();
    void __public_proxyAuthenticationRequired(const QNetworkProxy&  proxy0, QAuthenticator*  authenticator1);
    void __public_sslErrors(QNetworkReply*  reply0, const QList<QSslError >&  errors1);
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    QNetworkReply*  __override_createRequest(int  op0, const QNetworkRequest&  request1, QIODevice*  outgoingData2, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
};

#endif // QNETWORKACCESSMANAGER_SHELL_H
