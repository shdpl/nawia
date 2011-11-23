#ifndef QTEXTBLOCKGROUP_SHELL_H
#define QTEXTBLOCKGROUP_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qtextobject.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qtextdocument.h>
#include <qtextformat.h>
#include <qtextobject.h>
#include <qvariant.h>

class QTextBlockGroup_QtDShell : public QTextBlockGroup, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QTextBlockGroup_QtDShell(void *d_ptr, QTextDocument*  doc0);
    ~QTextBlockGroup_QtDShell();

    void blockFormatChanged(const QTextBlock&  block0);
    void blockInserted(const QTextBlock&  block0);
    void blockRemoved(const QTextBlock&  block0);
    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void timerEvent(QTimerEvent*  arg__1);
    QList<QTextBlock >  __public_blockList() const;
    QObject*  __public_sender() const;
    void __public_setFormat(const QTextFormat&  format0);
    void __override_blockFormatChanged(const QTextBlock&  block0, bool static_call);
    void __override_blockInserted(const QTextBlock&  block0, bool static_call);
    void __override_blockRemoved(const QTextBlock&  block0, bool static_call);
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
};

#endif // QTEXTBLOCKGROUP_SHELL_H
