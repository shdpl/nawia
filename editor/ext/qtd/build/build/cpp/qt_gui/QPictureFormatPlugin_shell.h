#ifndef QPICTUREFORMATPLUGIN_SHELL_H
#define QPICTUREFORMATPLUGIN_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qpictureformatplugin.h>

#include <QVariant>
#include <qbytearray.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qpicture.h>
#include <qstringlist.h>
#include <qvariant.h>

class QPictureFormatPlugin_QtDShell : public QPictureFormatPlugin, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QPictureFormatPlugin_QtDShell(void *d_ptr, QObject*  parent0);
    ~QPictureFormatPlugin_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    bool  installIOHandler(const QString&  format0);
    QStringList  keys() const;
    bool  loadPicture(const QString&  format0, const QString&  filename1, QPicture*  pic2);
    bool  savePicture(const QString&  format0, const QString&  filename1, const QPicture&  pic2);
    void timerEvent(QTimerEvent*  arg__1);
    QObject*  __public_sender() const;
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    bool  __override_installIOHandler(const QString&  format0, bool static_call);
    QStringList  __override_keys(bool static_call) const;
    bool  __override_loadPicture(const QString&  format0, const QString&  filename1, QPicture*  pic2, bool static_call);
    bool  __override_savePicture(const QString&  format0, const QString&  filename1, const QPicture&  pic2, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
};

#endif // QPICTUREFORMATPLUGIN_SHELL_H
