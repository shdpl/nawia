#ifndef QGRAPHICSITEMANIMATION_SHELL_H
#define QGRAPHICSITEMANIMATION_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qgraphicsitemanimation.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qgraphicsitem.h>
#include <qgraphicsitemanimation.h>
#include <qlist.h>
#include <qmatrix.h>
#include <qobject.h>
#include <qpair.h>
#include <qtimeline.h>
#include <qvariant.h>

class QGraphicsItemAnimation_QtDShell : public QGraphicsItemAnimation, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QGraphicsItemAnimation_QtDShell(void *d_ptr, QObject*  parent0);
    ~QGraphicsItemAnimation_QtDShell();

    void afterAnimationStep(double  step0);
    void beforeAnimationStep(double  step0);
    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void timerEvent(QTimerEvent*  arg__1);
    QObject*  __public_sender() const;
    void __override_afterAnimationStep(double  step0, bool static_call);
    void __override_beforeAnimationStep(double  step0, bool static_call);
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
};

#endif // QGRAPHICSITEMANIMATION_SHELL_H
