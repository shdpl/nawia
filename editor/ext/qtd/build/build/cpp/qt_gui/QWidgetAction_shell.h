#ifndef QWIDGETACTION_SHELL_H
#define QWIDGETACTION_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qwidgetaction.h>

#include <QVariant>
#include <qactiongroup.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qfont.h>
#include <qgraphicswidget.h>
#include <qicon.h>
#include <qkeysequence.h>
#include <qlist.h>
#include <qmenu.h>
#include <qobject.h>
#include <qvariant.h>
#include <qwidget.h>
#include <qwidgetaction.h>

class QWidgetAction_QtDShell : public QWidgetAction, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QWidgetAction_QtDShell(void *d_ptr, QObject*  parent0);
    ~QWidgetAction_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    QWidget*  createWidget(QWidget*  parent0);
    void customEvent(QEvent*  arg__1);
    void deleteWidget(QWidget*  widget0);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void timerEvent(QTimerEvent*  arg__1);
    QList<QWidget* >  __public_createdWidgets() const;
    QObject*  __public_sender() const;
    void __public_changed();
    void __public_hovered();
    void __public_toggled(bool  arg__1);
    void __public_triggered(bool  checked0);
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    QWidget*  __override_createWidget(QWidget*  parent0, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    void __override_deleteWidget(QWidget*  widget0, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
};

#endif // QWIDGETACTION_SHELL_H
