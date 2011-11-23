#ifndef QFUTUREWATCHERBASE_SHELL_H
#define QFUTUREWATCHERBASE_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qfuturewatcher.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qvariant.h>

class QFutureWatcherBase_QtDShell : public QFutureWatcherBase, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QFutureWatcherBase_QtDShell(void *d_ptr, QObject*  parent0);
    ~QFutureWatcherBase_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  event0);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void timerEvent(QTimerEvent*  arg__1);
    void __public_connectOutputInterface();
    void __public_disconnectOutputInterface(bool  pendingAssignment0);
    QObject*  __public_sender() const;
    void __public_canceled();
    void __public_finished();
    void __public_paused();
    void __public_progressRangeChanged(int  minimum0, int  maximum1);
    void __public_progressTextChanged(const QString&  progressText0);
    void __public_progressValueChanged(int  progressValue0);
    void __public_resultReadyAt(int  resultIndex0);
    void __public_resultsReadyAt(int  beginIndex0, int  endIndex1);
    void __public_resumed();
    void __public_started();
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  event0, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);


        // private, pure virtual and considered internal
        // we need to reimplement them so it will compile
        QFutureInterfaceBase dummyBase;
        virtual const QFutureInterfaceBase &futureInterface() const { return dummyBase; }
        virtual QFutureInterfaceBase &futureInterface() { return dummyBase; }
    
};

#endif // QFUTUREWATCHERBASE_SHELL_H
