#ifndef QVALIDATOR_SHELL_H
#define QVALIDATOR_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qvalidator.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qvalidator.h>
#include <qvariant.h>

class QValidator_QtDShell : public QValidator, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QValidator_QtDShell(void *d_ptr, QObject*  parent0);
    ~QValidator_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void fixup(QString&  arg__1) const;
    void timerEvent(QTimerEvent*  arg__1);
    QValidator::State  validate(QString&  arg__1, int&  arg__2) const;
    QObject*  __public_sender() const;
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_fixup(QString&  arg__1, bool static_call) const;
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
    int  __override_validate(QString&  arg__1, int&  arg__2, bool static_call) const;
};

#endif // QVALIDATOR_SHELL_H
