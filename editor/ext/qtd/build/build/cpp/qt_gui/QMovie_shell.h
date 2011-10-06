#ifndef QMOVIE_SHELL_H
#define QMOVIE_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qmovie.h>

#include <QColor>
#include <QImage>
#include <QPixmap>
#include <QRect>
#include <QSize>
#include <QVariant>
#include <qbytearray.h>
#include <qcolor.h>
#include <qcoreevent.h>
#include <qimage.h>
#include <qiodevice.h>
#include <qlist.h>
#include <qmovie.h>
#include <qobject.h>
#include <qpixmap.h>
#include <qvariant.h>

class QMovie_QtDShell : public QMovie, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QMovie_QtDShell(void *d_ptr, QIODevice*  device0, const QByteArray&  format1, QObject*  parent2);
    QMovie_QtDShell(void *d_ptr, QObject*  parent0);
    QMovie_QtDShell(void *d_ptr, const QString&  fileName0, const QByteArray&  format1, QObject*  parent2);
    ~QMovie_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void timerEvent(QTimerEvent*  arg__1);
    QObject*  __public_sender() const;
    void __public_error(int  error0);
    void __public_finished();
    void __public_frameChanged(int  frameNumber0);
    void __public_resized(const QSize&  size0);
    void __public_started();
    void __public_stateChanged(int  state0);
    void __public_updated(const QRect&  rect0);
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
};

#endif // QMOVIE_SHELL_H
