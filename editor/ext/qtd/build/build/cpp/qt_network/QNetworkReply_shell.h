#ifndef QNETWORKREPLY_SHELL_H
#define QNETWORKREPLY_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qnetworkreply.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qnetworkaccessmanager.h>
#include <qnetworkrequest.h>
#include <qobject.h>
#include <qpair.h>
#include <qsslconfiguration.h>
#include <qsslerror.h>
#include <qurl.h>
#include <qvariant.h>

class QNetworkReply_QtDShell : public QNetworkReply, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QNetworkReply_QtDShell(void *d_ptr, QObject*  parent0);
    ~QNetworkReply_QtDShell();

    void abort();
    bool  atEnd() const;
    qint64  bytesAvailable() const;
    qint64  bytesToWrite() const;
    bool  canReadLine() const;
    void childEvent(QChildEvent*  arg__1);
    void close();
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void ignoreSslErrors();
    bool  isSequential() const;
    bool  open(QIODevice::OpenMode  mode0);
    qint64  pos() const;
    qint64  readData(char*  data0, qint64  maxlen1);
    qint64  readLineData(char*  data0, qint64  maxlen1);
    bool  reset();
    bool  seek(qint64  pos0);
    void setReadBufferSize(qint64  size0);
    qint64  size() const;
    void timerEvent(QTimerEvent*  arg__1);
    bool  waitForBytesWritten(int  msecs0);
    bool  waitForReadyRead(int  msecs0);
    qint64  writeData(const char*  data0, qint64  len1);
    void ignoreSslErrors(const QList<QSslError >&  errors0);
    QObject*  __public_sender() const;
    void __public_setAttribute(int  code0, const QVariant&  value1);
    void __public_setError(int  errorCode0, const QString&  errorString1);
    void __public_setErrorString(const QString&  errorString0);
    void __public_setHeader(int  header0, const QVariant&  value1);
    void __public_setOpenMode(int  openMode0);
    void __public_setOperation(int  operation0);
    void __public_setRawHeader(const QByteArray&  headerName0, const QByteArray&  value1);
    void __public_setRequest(const QNetworkRequest&  request0);
    void __public_setUrl(const QUrl&  url0);
    void __public_aboutToClose();
    void __public_bytesWritten(qint64  bytes0);
    void __public_downloadProgress(qint64  bytesReceived0, qint64  bytesTotal1);
    void __public_error(int  arg__1);
    void __public_finished();
    void __public_metaDataChanged();
    void __public_readChannelFinished();
    void __public_readyRead();
    void __public_sslErrors(const QList<QSslError >&  errors0);
    void __public_uploadProgress(qint64  bytesSent0, qint64  bytesTotal1);
    void __override_abort(bool static_call);
    bool  __override_atEnd(bool static_call) const;
    qint64  __override_bytesAvailable(bool static_call) const;
    qint64  __override_bytesToWrite(bool static_call) const;
    bool  __override_canReadLine(bool static_call) const;
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_close(bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_ignoreSslErrors(bool static_call);
    bool  __override_isSequential(bool static_call) const;
    bool  __override_open(int  mode0, bool static_call);
    qint64  __override_pos(bool static_call) const;
    qint64  __override_readData(char*  data0, qint64  maxlen1, bool static_call);
    qint64  __override_readLineData(char*  data0, qint64  maxlen1, bool static_call);
    bool  __override_reset(bool static_call);
    bool  __override_seek(qint64  pos0, bool static_call);
    void __override_setReadBufferSize(qint64  size0, bool static_call);
    qint64  __override_size(bool static_call) const;
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
    bool  __override_waitForBytesWritten(int  msecs0, bool static_call);
    bool  __override_waitForReadyRead(int  msecs0, bool static_call);
    qint64  __override_writeData(const char*  data0, qint64  len1, bool static_call);
};

#endif // QNETWORKREPLY_SHELL_H
