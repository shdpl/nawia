#ifndef QTIMELINE_SHELL_H
#define QTIMELINE_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qtimeline.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qtimeline.h>
#include <qvariant.h>

class QTimeLine_QtDShell : public QTimeLine, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QTimeLine_QtDShell(void *d_ptr, int  duration0, QObject*  parent1);
    ~QTimeLine_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void timerEvent(QTimerEvent*  event0);
    double  valueForTime(int  msec0) const;
    QObject*  __public_sender() const;
    void __public_finished();
    void __public_frameChanged(int  arg__1);
    void __public_stateChanged(int  newState0);
    void __public_valueChanged(double  x0);
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_timerEvent(QTimerEvent*  event0, bool static_call);
    double  __override_valueForTime(int  msec0, bool static_call) const;
};

#endif // QTIMELINE_SHELL_H
