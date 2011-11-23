#ifndef QNETWORKDISKCACHE_SHELL_H
#define QNETWORKDISKCACHE_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qnetworkdiskcache.h>

#include <QVariant>
#include <qabstractnetworkcache.h>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qnetworkdiskcache.h>
#include <qobject.h>
#include <qurl.h>
#include <qvariant.h>

class QNetworkDiskCache_QtDShell : public QNetworkDiskCache, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QNetworkDiskCache_QtDShell(void *d_ptr, QObject*  parent0);
    ~QNetworkDiskCache_QtDShell();

    qint64  cacheSize() const;
    void childEvent(QChildEvent*  arg__1);
    void clear();
    void customEvent(QEvent*  arg__1);
    QIODevice*  data(const QUrl&  url0);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    qint64  expire();
    void insert(QIODevice*  device0);
    QNetworkCacheMetaData  metaData(const QUrl&  url0);
    QIODevice*  prepare(const QNetworkCacheMetaData&  metaData0);
    bool  remove(const QUrl&  url0);
    void timerEvent(QTimerEvent*  arg__1);
    void updateMetaData(const QNetworkCacheMetaData&  metaData0);
    QObject*  __public_sender() const;
    qint64  __override_cacheSize(bool static_call) const;
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_clear(bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    QIODevice*  __override_data(const QUrl&  url0, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    qint64  __override_expire(bool static_call);
    void __override_insert(QIODevice*  device0, bool static_call);
    QNetworkCacheMetaData  __override_metaData(const QUrl&  url0, bool static_call);
    QIODevice*  __override_prepare(const QNetworkCacheMetaData&  metaData0, bool static_call);
    bool  __override_remove(const QUrl&  url0, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
    void __override_updateMetaData(const QNetworkCacheMetaData&  metaData0, bool static_call);
};

#endif // QNETWORKDISKCACHE_SHELL_H
