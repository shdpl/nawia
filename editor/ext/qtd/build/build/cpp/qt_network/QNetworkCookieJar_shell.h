#ifndef QNETWORKCOOKIEJAR_SHELL_H
#define QNETWORKCOOKIEJAR_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qnetworkcookiejar.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qnetworkcookie.h>
#include <qnetworkcookiejar.h>
#include <qobject.h>
#include <qurl.h>
#include <qvariant.h>

class QNetworkCookieJar_QtDShell : public QNetworkCookieJar, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QNetworkCookieJar_QtDShell(void *d_ptr, QObject*  parent0);
    ~QNetworkCookieJar_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    QList<QNetworkCookie >  cookiesForUrl(const QUrl&  url0) const;
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    bool  setCookiesFromUrl(const QList<QNetworkCookie >&  cookieList0, const QUrl&  url1);
    void timerEvent(QTimerEvent*  arg__1);
    QList<QNetworkCookie >  __public_allCookies() const;
    QObject*  __public_sender() const;
    void __public_setAllCookies(const QList<QNetworkCookie >&  cookieList0);
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    QList<QNetworkCookie >  __override_cookiesForUrl(const QUrl&  url0, bool static_call) const;
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    bool  __override_setCookiesFromUrl(const QList<QNetworkCookie >&  cookieList0, const QUrl&  url1, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
};

#endif // QNETWORKCOOKIEJAR_SHELL_H
