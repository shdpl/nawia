#ifndef QFTP_SHELL_H
#define QFTP_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qftp.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qftp.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qobject.h>
#include <qurlinfo.h>
#include <qvariant.h>

class QFtp_QtDShell : public QFtp, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QFtp_QtDShell(void *d_ptr, QObject*  parent0);
    ~QFtp_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void timerEvent(QTimerEvent*  arg__1);
    QObject*  __public_sender() const;
    void __public_commandFinished(int  arg__1, bool  arg__2);
    void __public_commandStarted(int  arg__1);
    void __public_dataTransferProgress(qint64  arg__1, qint64  arg__2);
    void __public_done(bool  arg__1);
    void __public_listInfo(const QUrlInfo&  arg__1);
    void __public_rawCommandReply(int  arg__1, const QString&  arg__2);
    void __public_readyRead();
    void __public_stateChanged(int  arg__1);
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
};

#endif // QFTP_SHELL_H
