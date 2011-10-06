#ifndef QBUTTONGROUP_SHELL_H
#define QBUTTONGROUP_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qbuttongroup.h>

#include <QVariant>
#include <qabstractbutton.h>
#include <qbuttongroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qvariant.h>

class QButtonGroup_QtDShell : public QButtonGroup, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QButtonGroup_QtDShell(void *d_ptr, QObject*  parent0);
    ~QButtonGroup_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void timerEvent(QTimerEvent*  arg__1);
    QObject*  __public_sender() const;
    void __public_buttonClicked(QAbstractButton*  arg__1);
    void __public_buttonClicked(int  arg__1);
    void __public_buttonPressed(QAbstractButton*  arg__1);
    void __public_buttonPressed(int  arg__1);
    void __public_buttonReleased(QAbstractButton*  arg__1);
    void __public_buttonReleased(int  arg__1);
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
};

#endif // QBUTTONGROUP_SHELL_H
