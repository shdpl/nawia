#ifndef QDATAWIDGETMAPPER_SHELL_H
#define QDATAWIDGETMAPPER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qdatawidgetmapper.h>

#include <QVariant>
#include <qabstractitemdelegate.h>
#include <qabstractitemmodel.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdatawidgetmapper.h>
#include <qlist.h>
#include <qobject.h>
#include <qvariant.h>
#include <qwidget.h>

class QDataWidgetMapper_QtDShell : public QDataWidgetMapper, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QDataWidgetMapper_QtDShell(void *d_ptr, QObject*  parent0);
    ~QDataWidgetMapper_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void setCurrentIndex(int  index0);
    void timerEvent(QTimerEvent*  arg__1);
    QObject*  __public_sender() const;
    void __public_currentIndexChanged(int  index0);
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_setCurrentIndex(int  index0, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
};

#endif // QDATAWIDGETMAPPER_SHELL_H
