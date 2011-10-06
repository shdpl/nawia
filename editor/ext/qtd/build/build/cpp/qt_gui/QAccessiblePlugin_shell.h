#ifndef QACCESSIBLEPLUGIN_SHELL_H
#define QACCESSIBLEPLUGIN_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qaccessibleplugin.h>

#include <QVariant>
#include <qaccessible.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qvariant.h>

class QAccessiblePlugin_QtDShell : public QAccessiblePlugin, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QAccessiblePlugin_QtDShell(void *d_ptr, QObject*  parent0);
    ~QAccessiblePlugin_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    QAccessibleInterface*  create(const QString&  key0, QObject*  object1);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    QStringList  keys() const;
    void timerEvent(QTimerEvent*  arg__1);
    QObject*  __public_sender() const;
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    QAccessibleInterface*  __override_create(const QString&  key0, QObject*  object1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    QStringList  __override_keys(bool static_call) const;
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
};

#endif // QACCESSIBLEPLUGIN_SHELL_H
