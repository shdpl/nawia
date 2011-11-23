#ifndef QUNDOSTACK_SHELL_H
#define QUNDOSTACK_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qundostack.h>

#include <QVariant>
#include <qaction.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qundostack.h>
#include <qvariant.h>

class QUndoStack_QtDShell : public QUndoStack, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QUndoStack_QtDShell(void *d_ptr, QObject*  parent0);
    ~QUndoStack_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void timerEvent(QTimerEvent*  arg__1);
    QObject*  __public_sender() const;
    void __public_canRedoChanged(bool  canRedo0);
    void __public_canUndoChanged(bool  canUndo0);
    void __public_cleanChanged(bool  clean0);
    void __public_indexChanged(int  idx0);
    void __public_redoTextChanged(const QString&  redoText0);
    void __public_undoTextChanged(const QString&  undoText0);
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
};

#endif // QUNDOSTACK_SHELL_H
