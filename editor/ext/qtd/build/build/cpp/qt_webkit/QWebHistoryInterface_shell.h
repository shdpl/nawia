#ifndef QWEBHISTORYINTERFACE_SHELL_H
#define QWEBHISTORYINTERFACE_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qwebhistoryinterface.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qvariant.h>
#include <qwebhistoryinterface.h>

class QWebHistoryInterface_QtDShell : public QWebHistoryInterface, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QWebHistoryInterface_QtDShell(void *d_ptr, QObject*  parent0);
    ~QWebHistoryInterface_QtDShell();

    void addHistoryEntry(const QString&  url0);
    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    bool  historyContains(const QString&  url0) const;
    void timerEvent(QTimerEvent*  arg__1);
    QObject*  __public_sender() const;
    void __override_addHistoryEntry(const QString&  url0, bool static_call);
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    bool  __override_historyContains(const QString&  url0, bool static_call) const;
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
};

#endif // QWEBHISTORYINTERFACE_SHELL_H
