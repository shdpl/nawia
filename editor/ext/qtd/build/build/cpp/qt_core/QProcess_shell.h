#ifndef QPROCESS_SHELL_H
#define QPROCESS_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qprocess.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qprocess.h>
#include <qstringlist.h>
#include <qvariant.h>

class QProcess_QtDShell : public QProcess, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QProcess_QtDShell(void *d_ptr, QObject*  parent0);
    ~QProcess_QtDShell();

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
    void setupChildProcess();
    qint64  size() const;
    void timerEvent(QTimerEvent*  arg__1);
    bool  waitForBytesWritten(int  msecs0);
    bool  waitForReadyRead(int  msecs0);
    qint64  writeData(const char*  data0, qint64  len1);
    QObject*  __public_sender() const;
    void __public_setErrorString(const QString&  errorString0);
    void __public_setOpenMode(int  openMode0);
    void __public_setProcessState(int  state0);
    void __public_aboutToClose();
    void __public_bytesWritten(qint64  bytes0);
    void __public_error(int  error0);
    void __public_finished(int  exitCode0);
    void __public_finished(int  exitCode0, int  exitStatus1);
    void __public_readChannelFinished();
    void __public_readyRead();
    void __public_readyReadStandardError();
    void __public_readyReadStandardOutput();
    void __public_started();
    void __public_stateChanged(int  state0);
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
    void __override_setupChildProcess(bool static_call);
    qint64  __override_size(bool static_call) const;
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
    bool  __override_waitForBytesWritten(int  msecs0, bool static_call);
    bool  __override_waitForReadyRead(int  msecs0, bool static_call);
    qint64  __override_writeData(const char*  data0, qint64  len1, bool static_call);
};

#endif // QPROCESS_SHELL_H
