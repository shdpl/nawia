#ifndef QSSLSOCKET_SHELL_H
#define QSSLSOCKET_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qsslsocket.h>

#include <QVariant>
#include <qauthenticator.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qhostaddress.h>
#include <qlist.h>
#include <qnetworkproxy.h>
#include <qobject.h>
#include <qsslcertificate.h>
#include <qsslcipher.h>
#include <qsslconfiguration.h>
#include <qsslerror.h>
#include <qsslkey.h>
#include <qsslsocket.h>
#include <qvariant.h>

class QSslSocket_QtDShell : public QSslSocket, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QSslSocket_QtDShell(void *d_ptr, QObject*  parent0);
    ~QSslSocket_QtDShell();

    bool  atEnd() const;
    qint64  bytesAvailable() const;
    qint64  bytesToWrite() const;
    bool  canReadLine() const;
    void childEvent(QChildEvent*  arg__1);
    void close();
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    bool  isSequential() const;
    bool  open(QIODevice::OpenMode  mode0);
    qint64  pos() const;
    qint64  readData(char*  data0, qint64  maxlen1);
    qint64  readLineData(char*  data0, qint64  maxlen1);
    bool  reset();
    bool  seek(qint64  pos0);
    qint64  size() const;
    void timerEvent(QTimerEvent*  arg__1);
    bool  waitForBytesWritten(int  msecs0);
    bool  waitForReadyRead(int  msecs0);
    qint64  writeData(const char*  data0, qint64  len1);
    void connectToHostImplementation(const QString&  hostName0, unsigned short  port1, QIODevice::OpenMode  openMode2);
    void __public_connectToHostImplementation(const QString&  hostName0, unsigned short  port1, int  openMode2);
    void __public_disconnectFromHostImplementation();
    QObject*  __public_sender() const;
    void __public_setErrorString(const QString&  errorString0);
    void __public_setLocalAddress(const QHostAddress&  address0);
    void __public_setLocalPort(unsigned short  port0);
    void __public_setOpenMode(int  openMode0);
    void __public_setPeerAddress(const QHostAddress&  address0);
    void __public_setPeerName(const QString&  name0);
    void __public_setPeerPort(unsigned short  port0);
    void __public_setSocketError(int  socketError0);
    void __public_setSocketState(int  state0);
    void __public_aboutToClose();
    void __public_bytesWritten(qint64  bytes0);
    void __public_connected();
    void __public_disconnected();
    void __public_encrypted();
    void __public_encryptedBytesWritten(qint64  totalBytes0);
    void __public_error(int  arg__1);
    void __public_hostFound();
    void __public_modeChanged(int  newMode0);
    void __public_peerVerifyError(const QSslError&  error0);
    void __public_proxyAuthenticationRequired(const QNetworkProxy&  proxy0, QAuthenticator*  authenticator1);
    void __public_readChannelFinished();
    void __public_readyRead();
    void __public_sslErrors(const QList<QSslError >&  errors0);
    void __public_stateChanged(int  arg__1);
    bool  __override_atEnd(bool static_call) const;
    qint64  __override_bytesAvailable(bool static_call) const;
    qint64  __override_bytesToWrite(bool static_call) const;
    bool  __override_canReadLine(bool static_call) const;
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_close(bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    bool  __override_isSequential(bool static_call) const;
    bool  __override_open(int  mode0, bool static_call);
    qint64  __override_pos(bool static_call) const;
    qint64  __override_readData(char*  data0, qint64  maxlen1, bool static_call);
    qint64  __override_readLineData(char*  data0, qint64  maxlen1, bool static_call);
    bool  __override_reset(bool static_call);
    bool  __override_seek(qint64  pos0, bool static_call);
    qint64  __override_size(bool static_call) const;
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
    bool  __override_waitForBytesWritten(int  msecs0, bool static_call);
    bool  __override_waitForReadyRead(int  msecs0, bool static_call);
    qint64  __override_writeData(const char*  data0, qint64  len1, bool static_call);
};

#endif // QSSLSOCKET_SHELL_H
