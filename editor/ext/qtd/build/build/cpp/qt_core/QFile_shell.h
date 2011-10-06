#ifndef QFILE_SHELL_H
#define QFILE_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qfile.h>

#include <QVariant>
#include <qabstractfileengine.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qfile.h>
#include <qlist.h>
#include <qobject.h>
#include <qvariant.h>

class QFile_QtDShell : public QFile, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QFile_QtDShell(void *d_ptr);
    QFile_QtDShell(void *d_ptr, QObject*  parent0);
    QFile_QtDShell(void *d_ptr, const QString&  name0);
    QFile_QtDShell(void *d_ptr, const QString&  name0, QObject*  parent1);
    ~QFile_QtDShell();

    bool  atEnd() const;
    qint64  bytesAvailable() const;
    qint64  bytesToWrite() const;
    bool  canReadLine() const;
    void childEvent(QChildEvent*  arg__1);
    void close();
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    QAbstractFileEngine*  fileEngine() const;
    bool  isSequential() const;
    bool  open(QIODevice::OpenMode  flags0);
    qint64  pos() const;
    qint64  readData(char*  data0, qint64  maxlen1);
    qint64  readLineData(char*  data0, qint64  maxlen1);
    bool  reset();
    bool  seek(qint64  offset0);
    qint64  size() const;
    void timerEvent(QTimerEvent*  arg__1);
    bool  waitForBytesWritten(int  msecs0);
    bool  waitForReadyRead(int  msecs0);
    qint64  writeData(const char*  data0, qint64  len1);
    bool  open(int  fd0, QIODevice::OpenMode  flags1);
    QObject*  __public_sender() const;
    void __public_setErrorString(const QString&  errorString0);
    void __public_setOpenMode(int  openMode0);
    void __public_aboutToClose();
    void __public_bytesWritten(qint64  bytes0);
    void __public_readChannelFinished();
    void __public_readyRead();
    bool  __override_atEnd(bool static_call) const;
    qint64  __override_bytesAvailable(bool static_call) const;
    qint64  __override_bytesToWrite(bool static_call) const;
    bool  __override_canReadLine(bool static_call) const;
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_close(bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    QAbstractFileEngine*  __override_fileEngine(bool static_call) const;
    bool  __override_isSequential(bool static_call) const;
    bool  __override_open(int  flags0, bool static_call);
    qint64  __override_pos(bool static_call) const;
    qint64  __override_readData(char*  data0, qint64  maxlen1, bool static_call);
    qint64  __override_readLineData(char*  data0, qint64  maxlen1, bool static_call);
    bool  __override_reset(bool static_call);
    bool  __override_seek(qint64  offset0, bool static_call);
    qint64  __override_size(bool static_call) const;
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
    bool  __override_waitForBytesWritten(int  msecs0, bool static_call);
    bool  __override_waitForReadyRead(int  msecs0, bool static_call);
    qint64  __override_writeData(const char*  data0, qint64  len1, bool static_call);
};

#endif // QFILE_SHELL_H
