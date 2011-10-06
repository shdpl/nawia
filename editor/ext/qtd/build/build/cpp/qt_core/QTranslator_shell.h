#ifndef QTRANSLATOR_SHELL_H
#define QTRANSLATOR_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qtranslator.h>

#include <QTextCodec>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qtranslator.h>
#include <qvariant.h>

class QTranslator_QtDShell : public QTranslator, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QTranslator_QtDShell(void *d_ptr, QObject*  parent0);
    ~QTranslator_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    bool  isEmpty() const;
    void timerEvent(QTimerEvent*  arg__1);
    QString  translate(const char*  context0, const char*  sourceText1, const char*  disambiguation2) const;
    QObject*  __public_sender() const;
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    bool  __override_isEmpty(bool static_call) const;
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
    QString  __override_translate(const char*  context0, const char*  sourceText1, const char*  disambiguation2, bool static_call) const;
};

#endif // QTRANSLATOR_SHELL_H
