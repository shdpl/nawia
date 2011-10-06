#ifndef QMIMEDATA_SHELL_H
#define QMIMEDATA_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qmimedata.h>

#include <QStringList>
#include <QUrl>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qmimedata.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qurl.h>
#include <qvariant.h>

class QMimeData_QtDShell : public QMimeData, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QMimeData_QtDShell(void *d_ptr);
    ~QMimeData_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    QStringList  formats() const;
    bool  hasFormat(const QString&  mimetype0) const;
    void timerEvent(QTimerEvent*  arg__1);
    QObject*  __public_sender() const;
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    QStringList  __override_formats(bool static_call) const;
    bool  __override_hasFormat(const QString&  mimetype0, bool static_call) const;
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
};

#endif // QMIMEDATA_SHELL_H
