#ifndef QREGEXPVALIDATOR_SHELL_H
#define QREGEXPVALIDATOR_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qvalidator.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qregexp.h>
#include <qvalidator.h>
#include <qvariant.h>

class QRegExpValidator_QtDShell : public QRegExpValidator, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QRegExpValidator_QtDShell(void *d_ptr, QObject*  parent0);
    QRegExpValidator_QtDShell(void *d_ptr, const QRegExp&  rx0, QObject*  parent1);
    ~QRegExpValidator_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void fixup(QString&  arg__1) const;
    void timerEvent(QTimerEvent*  arg__1);
    QValidator::State  validate(QString&  input0, int&  pos1) const;
    QObject*  __public_sender() const;
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_fixup(QString&  arg__1, bool static_call) const;
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
    int  __override_validate(QString&  input0, int&  pos1, bool static_call) const;
};

#endif // QREGEXPVALIDATOR_SHELL_H
