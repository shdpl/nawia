#ifndef QCOMPLETER_SHELL_H
#define QCOMPLETER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qcompleter.h>

#include <QVariant>
#include <qabstractitemmodel.h>
#include <qabstractitemview.h>
#include <qbytearray.h>
#include <qcompleter.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qvariant.h>
#include <qwidget.h>

class QCompleter_QtDShell : public QCompleter, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QCompleter_QtDShell(void *d_ptr, QAbstractItemModel*  model0, QObject*  parent1);
    QCompleter_QtDShell(void *d_ptr, QObject*  parent0);
    QCompleter_QtDShell(void *d_ptr, const QStringList&  completions0, QObject*  parent1);
    ~QCompleter_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  o0, QEvent*  e1);
    QString  pathFromIndex(const QModelIndex&  index0) const;
    QStringList  splitPath(const QString&  path0) const;
    void timerEvent(QTimerEvent*  arg__1);
    QObject*  __public_sender() const;
    void __public_activated(const QModelIndex&  index0);
    void __public_activated(const QString&  text0);
    void __public_highlighted(const QModelIndex&  index0);
    void __public_highlighted(const QString&  text0);
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  o0, QEvent*  e1, bool static_call);
    QString  __override_pathFromIndex(const QModelIndex&  index0, bool static_call) const;
    QStringList  __override_splitPath(const QString&  path0, bool static_call) const;
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
};

#endif // QCOMPLETER_SHELL_H
