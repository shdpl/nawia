#ifndef QFILESYSTEMWATCHER_SHELL_H
#define QFILESYSTEMWATCHER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qfilesystemwatcher.h>

#include <QStringList>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qvariant.h>

class QFileSystemWatcher_QtDShell : public QFileSystemWatcher, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QFileSystemWatcher_QtDShell(void *d_ptr, QObject*  parent0);
    QFileSystemWatcher_QtDShell(void *d_ptr, const QStringList&  paths0, QObject*  parent1);
    ~QFileSystemWatcher_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void timerEvent(QTimerEvent*  arg__1);
    QObject*  __public_sender() const;
    void __public_directoryChanged(const QString&  path0);
    void __public_fileChanged(const QString&  path0);
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
};

#endif // QFILESYSTEMWATCHER_SHELL_H
