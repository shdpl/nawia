#ifndef QSVGRENDERER_SHELL_H
#define QSVGRENDERER_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qsvgrenderer.h>

#include <QByteArray>
#include <QMatrix>
#include <QRectF>
#include <QSize>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qmatrix.h>
#include <qobject.h>
#include <qpainter.h>
#include <qvariant.h>
#include <qxmlstream.h>

class QSvgRenderer_QtDShell : public QSvgRenderer, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QSvgRenderer_QtDShell(void *d_ptr, QObject*  parent0);
    QSvgRenderer_QtDShell(void *d_ptr, QXmlStreamReader*  contents0, QObject*  parent1);
    QSvgRenderer_QtDShell(void *d_ptr, const QByteArray&  contents0, QObject*  parent1);
    QSvgRenderer_QtDShell(void *d_ptr, const QString&  filename0, QObject*  parent1);
    ~QSvgRenderer_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    void timerEvent(QTimerEvent*  arg__1);
    QObject*  __public_sender() const;
    void __public_repaintNeeded();
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
};

#endif // QSVGRENDERER_SHELL_H
