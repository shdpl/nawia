#ifndef QINPUTCONTEXT_SHELL_H
#define QINPUTCONTEXT_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qinputcontext.h>

#include <QTextFormat>
#include <QVariant>
#include <qaction.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qevent.h>
#include <qfont.h>
#include <qinputcontext.h>
#include <qlist.h>
#include <qobject.h>
#include <qtextformat.h>
#include <qvariant.h>
#include <qwidget.h>

class QInputContext_QtDShell : public QInputContext, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QInputContext_QtDShell(void *d_ptr, QObject*  parent0);
    ~QInputContext_QtDShell();

    QList<QAction* >  actions();
    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    bool  filterEvent(const QEvent*  event0);
    QFont  font() const;
    QString  identifierName();
    bool  isComposing() const;
    QString  language();
    void mouseHandler(int  x0, QMouseEvent*  event1);
    void reset();
    void timerEvent(QTimerEvent*  arg__1);
    void update();
    void widgetDestroyed(QWidget*  w0);
    QObject*  __public_sender() const;
    QList<QAction* >  __override_actions(bool static_call);
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    bool  __override_filterEvent(const QEvent*  event0, bool static_call);
    QFont  __override_font(bool static_call) const;
    QString  __override_identifierName(bool static_call);
    bool  __override_isComposing(bool static_call) const;
    QString  __override_language(bool static_call);
    void __override_mouseHandler(int  x0, QMouseEvent*  event1, bool static_call);
    void __override_reset(bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
    void __override_update(bool static_call);
    void __override_widgetDestroyed(QWidget*  w0, bool static_call);
};

#endif // QINPUTCONTEXT_SHELL_H
