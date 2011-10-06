#ifndef QDRAG_SHELL_H
#define QDRAG_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qdrag.h>

#include <QPixmap>
#include <QPoint>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qdrag.h>
#include <qlist.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qpixmap.h>
#include <qvariant.h>
#include <qwidget.h>

class QDrag_QtDShell : public QDrag, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QDrag_QtDShell(void *d_ptr, QWidget*  dragSource0);
    ~QDrag_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void timerEvent(QTimerEvent*  arg__1);
    QObject*  __public_sender() const;
    void __public_actionChanged(int  action0);
    void __public_targetChanged(QWidget*  newTarget0);
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
};

#endif // QDRAG_SHELL_H
