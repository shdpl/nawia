#ifndef QINPUTCONTEXTPLUGIN_SHELL_H
#define QINPUTCONTEXTPLUGIN_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qinputcontextplugin.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qinputcontext.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qvariant.h>

class QInputContextPlugin_QtDShell : public QInputContextPlugin, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QInputContextPlugin_QtDShell(void *d_ptr, QObject*  parent0);
    ~QInputContextPlugin_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    QInputContext*  create(const QString&  key0);
    void customEvent(QEvent*  arg__1);
    QString  description(const QString&  key0);
    QString  displayName(const QString&  key0);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    QStringList  keys() const;
    QStringList  languages(const QString&  key0);
    void timerEvent(QTimerEvent*  arg__1);
    QObject*  __public_sender() const;
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    QInputContext*  __override_create(const QString&  key0, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    QString  __override_description(const QString&  key0, bool static_call);
    QString  __override_displayName(const QString&  key0, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    QStringList  __override_keys(bool static_call) const;
    QStringList  __override_languages(const QString&  key0, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
};

#endif // QINPUTCONTEXTPLUGIN_SHELL_H
