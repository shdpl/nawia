#ifndef QAPPLICATION_SHELL_H
#define QAPPLICATION_SHELL_H

#include <QtCore/QHash>
#include <qtd_core.h>
#include <qapplication.h>

#include <QBasicTimer>
#include <QFont>
#include <QFontMetrics>
#include <QIcon>
#include <QLocale>
#include <QPalette>
#include <QVariant>
#include <qapplication.h>
#include <qbytearray.h>
#include <qclipboard.h>
#include <qcoreapplication.h>
#include <qcoreevent.h>
#include <qcursor.h>
#include <qdesktopwidget.h>
#include <qfont.h>
#include <qfontmetrics.h>
#include <qicon.h>
#include <qinputcontext.h>
#include <qlist.h>
#include <qlocale.h>
#include <qobject.h>
#include <qpalette.h>
#include <qsessionmanager.h>
#include <qstringlist.h>
#include <qstyle.h>
#include <qtranslator.h>
#include <qvariant.h>
#include <qwidget.h>

class QApplication_QtDShell : public QApplication, public QObjectLink
{
public:
  Q_OBJECT_CHECK
  virtual int qt_metacall(QMetaObject::Call, int, void **);
  int __override_qt_metacall(QMetaObject::Call _c, int _id, void **_a);
  virtual const QMetaObject *metaObject() const;
private:
public:
    QApplication_QtDShell(void *d_ptr, int&  argc0, char**  argv1, int  arg__3);
    ~QApplication_QtDShell();

    void childEvent(QChildEvent*  arg__1);
    void commitData(QSessionManager&  sm0);
    void customEvent(QEvent*  arg__1);
    bool  event(QEvent*  arg__1);
    bool  eventFilter(QObject*  arg__1, QEvent*  arg__2);
    bool  notify(QObject*  arg__1, QEvent*  arg__2);
    void saveState(QSessionManager&  sm0);
    void timerEvent(QTimerEvent*  arg__1);
    QObject*  __public_sender() const;
    void __public_aboutToQuit();
    void __public_commitDataRequest(QSessionManager&  sessionManager0);
    void __public_focusChanged(QWidget*  old0, QWidget*  now1);
    void __public_fontDatabaseChanged();
    void __public_lastWindowClosed();
    void __public_saveStateRequest(QSessionManager&  sessionManager0);
    void __public_unixSignal(int  arg__1);
    void __override_childEvent(QChildEvent*  arg__1, bool static_call);
    void __override_commitData(QSessionManager&  sm0, bool static_call);
    void __override_customEvent(QEvent*  arg__1, bool static_call);
    bool  __override_event(QEvent*  arg__1, bool static_call);
    bool  __override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    bool  __override_notify(QObject*  arg__1, QEvent*  arg__2, bool static_call);
    void __override_saveState(QSessionManager&  sm0, bool static_call);
    void __override_timerEvent(QTimerEvent*  arg__1, bool static_call);
};

#endif // QAPPLICATION_SHELL_H
