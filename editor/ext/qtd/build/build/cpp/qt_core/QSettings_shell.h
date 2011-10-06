#ifndef QSETTINGS_SHELL_H
#define QSETTINGS_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qsettings.h>

#include <QStringList>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qsettings.h>
#include <qstringlist.h>
#include <qtextcodec.h>
#include <qvariant.h>

class QSettings_QtDShell : public QSettings, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QSettings_QtDShell(void *d_ptr, QObject*  parent0);
    QSettings_QtDShell(void *d_ptr, QSettings::Format  format0, QSettings::Scope  scope1, const QString&  organization2, const QString&  application3, QObject*  parent4);
    QSettings_QtDShell(void *d_ptr, QSettings::Scope  scope0, const QString&  organization1, const QString&  application2, QObject*  parent3);
    QSettings_QtDShell(void *d_ptr, const QString&  fileName0, QSettings::Format  format1, QObject*  parent2);
    QSettings_QtDShell(void *d_ptr, const QString&  organization0, const QString&  application1, QObject*  parent2);
    ~QSettings_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  event0);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void timerEvent(QTimerEvent*  arg__1);
    QObject*  __public_sender() const;
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  event0, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
};

#endif // QSETTINGS_SHELL_H
