#ifndef QTEXTCODECPLUGIN_SHELL_H
#define QTEXTCODECPLUGIN_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qtextcodecplugin.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qtextcodec.h>
#include <qvariant.h>

class QTextCodecPlugin_QtDShell : public QTextCodecPlugin, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QTextCodecPlugin_QtDShell(void *d_ptr, QObject*  parent0);
    ~QTextCodecPlugin_QtDShell();

    QList<QByteArray >  aliases() const;
    void childEvent(QChildEvent*  arg__1);
    QTextCodec*  createForMib(int  mib0);
    QTextCodec*  createForName(const QByteArray&  name0);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    QList<int >  mibEnums() const;
    QList<QByteArray >  names() const;
    void timerEvent(QTimerEvent*  arg__1);
    QObject*  __public_sender() const;
    QList<QByteArray >  __override_aliases(bool static_call) const;
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    QTextCodec*  __override_createForMib(int  mib0, bool static_call);
    QTextCodec*  __override_createForName(const QByteArray&  name0, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    QList<int >  __override_mibEnums(bool static_call) const;
    QList<QByteArray >  __override_names(bool static_call) const;
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
};

#endif // QTEXTCODECPLUGIN_SHELL_H
