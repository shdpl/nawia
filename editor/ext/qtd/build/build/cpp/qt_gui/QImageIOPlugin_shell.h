#ifndef QIMAGEIOPLUGIN_SHELL_H
#define QIMAGEIOPLUGIN_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qimageiohandler.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qimageiohandler.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qvariant.h>

class QImageIOPlugin_QtDShell : public QImageIOPlugin, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QImageIOPlugin_QtDShell(void *d_ptr, QObject*  parent0);
    ~QImageIOPlugin_QtDShell();

    QImageIOPlugin::Capabilities  capabilities(QIODevice*  device0, const QByteArray&  format1) const;
    void childEvent(QChildEvent*  arg__1);
    QImageIOHandler*  create(QIODevice*  device0, const QByteArray&  format1) const;
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    QStringList  keys() const;
    void timerEvent(QTimerEvent*  arg__1);
    QObject*  __public_sender() const;
    int  __override_capabilities(QIODevice*  device0, const QByteArray&  format1, bool static_call) const;
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    QImageIOHandler*  __override_create(QIODevice*  device0, const QByteArray&  format1, bool static_call) const;
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    QStringList  __override_keys(bool static_call) const;
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
};

#endif // QIMAGEIOPLUGIN_SHELL_H
