#ifndef QINTVALIDATOR_SHELL_H
#define QINTVALIDATOR_SHELL_H

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

class QIntValidator_QtDShell : public QIntValidator, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QIntValidator_QtDShell(void *d_ptr, QObject*  parent0);
    QIntValidator_QtDShell(void *d_ptr, int  bottom0, int  top1, QObject*  parent2);
    ~QIntValidator_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void fixup(QString&  input0) const;
    void setRange(int  bottom0, int  top1);
    void timerEvent(QTimerEvent*  arg__1);
    QValidator::State  validate(QString&  arg__1, int&  arg__2) const;
    QObject*  __public_sender() const;
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_fixup(QString&  input0, bool static_call) const;
    void __override_setRange(int  bottom0, int  top1, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
    int  __override_validate(QString&  arg__1, int&  arg__2, bool static_call) const;
};

#endif // QINTVALIDATOR_SHELL_H
