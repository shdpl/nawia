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

#include "QApplication_shell.h"
#include <iostream>
#include <qapplication.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

class QApplicationEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QApplicationEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QApplication_createEntity(void *nativeId, void* dId)
{
    new QApplicationEntity((QObject*)nativeId, dId);
}

QApplication_QtDShell::QApplication_QtDShell(void *d_ptr, int&  argc0, char**  argv1, int  arg__3)
    : QApplication(argc0, argv1, arg__3),
      QObjectLink(this, d_ptr)
{
}

QApplication_QtDShell::~QApplication_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(GUI, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(GUI, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QApplication_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QApplication::metaObject();
}

int QApplication_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QApplication::qt_metacall(_c, _id, _a);
}

int QApplication_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QApplication::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QApplication_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QApplication_QtDShell *__qt_this = (QApplication_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QApplication_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, void, QApplication_commitData_QSessionManager_dispatch, (void *dId, void* sm0))
QTD_FUNC(GUI, QApplication_commitData_QSessionManager_dispatch)
void QApplication_QtDShell::commitData(QSessionManager&  sm0)
{
    qtd_QApplication_commitData_QSessionManager_dispatch(QObjectLink::getLink(this)->dId, &(QSessionManager& )sm0);
}

QTD_FUNC_DECL(GUI, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QApplication_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QApplication_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QApplication_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, bool, QCoreApplication_notify_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QApplication_QtDShell::notify(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QCoreApplication_notify_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(GUI, void, QApplication_saveState_QSessionManager_dispatch, (void *dId, void* sm0))
QTD_FUNC(GUI, QApplication_saveState_QSessionManager_dispatch)
void QApplication_QtDShell::saveState(QSessionManager&  sm0)
{
    qtd_QApplication_saveState_QSessionManager_dispatch(QObjectLink::getLink(this)->dId, &(QSessionManager& )sm0);
}

QTD_FUNC_DECL(GUI, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QApplication_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QApplication_initCallBacks(VoidFunc *virts) {
    qtd_QApplication_commitData_QSessionManager_dispatch = (qtd_QApplication_commitData_QSessionManager_dispatch_t) virts[0];
    qtd_QApplication_saveState_QSessionManager_dispatch = (qtd_QApplication_saveState_QSessionManager_dispatch_t) virts[1];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QApplication_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QApplication_QtDShell::__public_aboutToQuit()
{
    QCoreApplication::aboutToQuit();
}

void QApplication_QtDShell::__public_commitDataRequest(QSessionManager&  sessionManager0)
{
    QApplication::commitDataRequest((QSessionManager& )sessionManager0);
}

void QApplication_QtDShell::__public_focusChanged(QWidget*  old0, QWidget*  now1)
{
    QApplication::focusChanged((QWidget* )old0, (QWidget* )now1);
}

void QApplication_QtDShell::__public_fontDatabaseChanged()
{
    QApplication::fontDatabaseChanged();
}

void QApplication_QtDShell::__public_lastWindowClosed()
{
    QApplication::lastWindowClosed();
}

void QApplication_QtDShell::__public_saveStateRequest(QSessionManager&  sessionManager0)
{
    QApplication::saveStateRequest((QSessionManager& )sessionManager0);
}

void QApplication_QtDShell::__public_unixSignal(int  arg__1)
{
    QCoreApplication::unixSignal((int )arg__1);
}

// Write virtual function overries used to decide on static/virtual calls
void QApplication_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QApplication_QtDShell::__override_commitData(QSessionManager&  sm0, bool static_call)
{
    if (static_call) {
        QApplication::commitData((QSessionManager& )sm0);
    } else {
        commitData((QSessionManager& )sm0);
    }
}

void QApplication_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QApplication_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QApplication::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QApplication_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

bool  QApplication_QtDShell::__override_notify(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QApplication::notify((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return notify((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QApplication_QtDShell::__override_saveState(QSessionManager&  sm0, bool static_call)
{
    if (static_call) {
        QApplication::saveState((QSessionManager& )sm0);
    } else {
        saveState((QSessionManager& )sm0);
    }
}

void QApplication_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// QApplication::commitDataRequest(QSessionManager & sessionManager)
QTD_EXTERN QTD_EXPORT void qtd_QApplication_commitDataRequest_QSessionManager
(void* __this_nativeId,
 void* sessionManager0)
{
    QSessionManager&  __qt_sessionManager0 = (QSessionManager& ) * (QSessionManager *) sessionManager0;
    QApplication_QtDShell *__qt_this = (QApplication_QtDShell *) __this_nativeId;
    __qt_this->__public_commitDataRequest((QSessionManager& )__qt_sessionManager0);

}

// QApplication::focusChanged(QWidget * old, QWidget * now)
QTD_EXTERN QTD_EXPORT void qtd_QApplication_focusChanged_QWidget_QWidget
(void* __this_nativeId,
 void* old0,
 void* now1)
{
    QWidget*  __qt_old0 = (QWidget* ) old0;
    QWidget*  __qt_now1 = (QWidget* ) now1;
    QApplication_QtDShell *__qt_this = (QApplication_QtDShell *) __this_nativeId;
    __qt_this->__public_focusChanged((QWidget* )__qt_old0, (QWidget* )__qt_now1);

}

// QApplication::fontDatabaseChanged()
QTD_EXTERN QTD_EXPORT void qtd_QApplication_fontDatabaseChanged
(void* __this_nativeId)
{
    QApplication_QtDShell *__qt_this = (QApplication_QtDShell *) __this_nativeId;
    __qt_this->__public_fontDatabaseChanged();

}

// QApplication::lastWindowClosed()
QTD_EXTERN QTD_EXPORT void qtd_QApplication_lastWindowClosed
(void* __this_nativeId)
{
    QApplication_QtDShell *__qt_this = (QApplication_QtDShell *) __this_nativeId;
    __qt_this->__public_lastWindowClosed();

}

// QApplication::saveStateRequest(QSessionManager & sessionManager)
QTD_EXTERN QTD_EXPORT void qtd_QApplication_saveStateRequest_QSessionManager
(void* __this_nativeId,
 void* sessionManager0)
{
    QSessionManager&  __qt_sessionManager0 = (QSessionManager& ) * (QSessionManager *) sessionManager0;
    QApplication_QtDShell *__qt_this = (QApplication_QtDShell *) __this_nativeId;
    __qt_this->__public_saveStateRequest((QSessionManager& )__qt_sessionManager0);

}

// ---externC---
// QApplication::QApplication(int & argc, char ** argv, int arg__3)
QTD_EXTERN QTD_EXPORT void* qtd_QApplication_QApplication_nativepointerint_nativepointerchar_int
(void *d_ptr,
 int * argc0,
 char** argv1,
 int arg__3)
{
    int&  __qt_argc0 = (int& ) * (int *) argc0;
    char**  __qt_argv1 = (char** ) argv1;
    QApplication_QtDShell *__qt_this = new QApplication_QtDShell(d_ptr, (int& )__qt_argc0, (char** )__qt_argv1, (int )arg__3);
    return (void *) __qt_this;

}

// QApplication::autoSipEnabled() const
QTD_EXTERN QTD_EXPORT bool qtd_QApplication_autoSipEnabled_const
(void* __this_nativeId)
{
    QApplication_QtDShell *__qt_this = (QApplication_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->autoSipEnabled();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QApplication::inputContext() const
QTD_EXTERN QTD_EXPORT void* qtd_QApplication_inputContext_const
(void* __this_nativeId)
{
    QApplication_QtDShell *__qt_this = (QApplication_QtDShell *) __this_nativeId;
    QInputContext*  __qt_return_value = __qt_this->inputContext();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QApplication::isSessionRestored() const
QTD_EXTERN QTD_EXPORT bool qtd_QApplication_isSessionRestored_const
(void* __this_nativeId)
{
    QApplication_QtDShell *__qt_this = (QApplication_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isSessionRestored();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QApplication::sessionId() const
QTD_EXTERN QTD_EXPORT void qtd_QApplication_sessionId_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QApplication_QtDShell *__qt_this = (QApplication_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->sessionId();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QApplication::sessionKey() const
QTD_EXTERN QTD_EXPORT void qtd_QApplication_sessionKey_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QApplication_QtDShell *__qt_this = (QApplication_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->sessionKey();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QApplication::setAutoSipEnabled(const bool enabled)
QTD_EXTERN QTD_EXPORT void qtd_QApplication_setAutoSipEnabled_bool
(void* __this_nativeId,
 bool enabled0)
{
    QApplication_QtDShell *__qt_this = (QApplication_QtDShell *) __this_nativeId;
    __qt_this->setAutoSipEnabled((const bool )enabled0);

}

// QApplication::setInputContext(QInputContext * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QApplication_setInputContext_QInputContext
(void* __this_nativeId,
 void* arg__1)
{
    QInputContext*  __qt_arg__1 = (QInputContext* ) arg__1;
    QApplication_QtDShell *__qt_this = (QApplication_QtDShell *) __this_nativeId;
    __qt_this->setInputContext((QInputContext* )__qt_arg__1);

}

// QApplication::setStyleSheet(const QString & sheet)
QTD_EXTERN QTD_EXPORT void qtd_QApplication_setStyleSheet_string
(void* __this_nativeId,
 DArray sheet0)
{
    QString __qt_sheet0 = QString::fromUtf8((const char *)sheet0.ptr, sheet0.length);
    QApplication_QtDShell *__qt_this = (QApplication_QtDShell *) __this_nativeId;
    __qt_this->setStyleSheet((const QString& )__qt_sheet0);

}

// QApplication::styleSheet() const
QTD_EXTERN QTD_EXPORT void qtd_QApplication_styleSheet_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QApplication_QtDShell *__qt_this = (QApplication_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->styleSheet();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QApplication::commitData(QSessionManager & sm)
QTD_EXTERN QTD_EXPORT void qtd_QApplication_commitData_QSessionManager
(void* __this_nativeId,
 void* sm0)
{
    QSessionManager&  __qt_sm0 = (QSessionManager& ) * (QSessionManager *) sm0;
    QApplication_QtDShell *__qt_this = (QApplication_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_commitData((QSessionManager& )__qt_sm0, __do_static_call);

}

// QApplication::event(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT bool qtd_QApplication_event_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QApplication_QtDShell *__qt_this = (QApplication_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_arg__1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QApplication::notify(QObject * arg__1, QEvent * arg__2)
QTD_EXTERN QTD_EXPORT bool qtd_QApplication_notify_QObject_QEvent
(void* __this_nativeId,
 void* arg__1,
 void* arg__2)
{
    QObject*  __qt_arg__1 = (QObject* ) arg__1;
    QEvent*  __qt_arg__2 = (QEvent* ) arg__2;
    QApplication_QtDShell *__qt_this = (QApplication_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_notify((QObject* )__qt_arg__1, (QEvent* )__qt_arg__2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QApplication::saveState(QSessionManager & sm)
QTD_EXTERN QTD_EXPORT void qtd_QApplication_saveState_QSessionManager
(void* __this_nativeId,
 void* sm0)
{
    QSessionManager&  __qt_sm0 = (QSessionManager& ) * (QSessionManager *) sm0;
    QApplication_QtDShell *__qt_this = (QApplication_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    __qt_this->__override_saveState((QSessionManager& )__qt_sm0, __do_static_call);

}

// QApplication::aboutQt()
QTD_EXTERN QTD_EXPORT void qtd_QApplication_aboutQt
()
{
    QApplication_QtDShell::aboutQt();

}

// QApplication::activeModalWidget()
QTD_EXTERN QTD_EXPORT void* qtd_QApplication_activeModalWidget
()
{
    QWidget*  __qt_return_value = QApplication_QtDShell::activeModalWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QApplication::activePopupWidget()
QTD_EXTERN QTD_EXPORT void* qtd_QApplication_activePopupWidget
()
{
    QWidget*  __qt_return_value = QApplication_QtDShell::activePopupWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QApplication::activeWindow()
QTD_EXTERN QTD_EXPORT void* qtd_QApplication_activeWindow
()
{
    QWidget*  __qt_return_value = QApplication_QtDShell::activeWindow();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QApplication::alert(QWidget * widget, int duration)
QTD_EXTERN QTD_EXPORT void qtd_QApplication_alert_QWidget_int
(void* widget0,
 int duration1)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QApplication_QtDShell::alert((QWidget* )__qt_widget0, (int )duration1);

}

// QApplication::allWidgets()
QTD_EXTERN QTD_EXPORT void qtd_QApplication_allWidgets
(void* __d_return_value)
{
    QList<QWidget* >  __qt_return_value = QApplication_QtDShell::allWidgets();

QList<QWidget* > &__d_return_value_tmp = (*(QList<QWidget* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QApplication::beep()
QTD_EXTERN QTD_EXPORT void qtd_QApplication_beep
()
{
    QApplication_QtDShell::beep();

}

// QApplication::changeOverrideCursor(const QCursor & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QApplication_changeOverrideCursor_QCursor
(void* arg__1)
{
    const QCursor&  __qt_arg__1 = (const QCursor& ) *(QCursor *)arg__1;
    QApplication_QtDShell::changeOverrideCursor((const QCursor& )__qt_arg__1);

}

// QApplication::clipboard()
QTD_EXTERN QTD_EXPORT void* qtd_QApplication_clipboard
()
{
    QClipboard*  __qt_return_value = QApplication_QtDShell::clipboard();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QApplication::closeAllWindows()
QTD_EXTERN QTD_EXPORT void qtd_QApplication_closeAllWindows
()
{
    QApplication_QtDShell::closeAllWindows();

}

// QApplication::colorSpec()
QTD_EXTERN QTD_EXPORT int qtd_QApplication_colorSpec
()
{
    int  __qt_return_value = QApplication_QtDShell::colorSpec();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QApplication::cursorFlashTime()
QTD_EXTERN QTD_EXPORT int qtd_QApplication_cursorFlashTime
()
{
    int  __qt_return_value = QApplication_QtDShell::cursorFlashTime();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QApplication::desktop()
QTD_EXTERN QTD_EXPORT void* qtd_QApplication_desktop
()
{
    QDesktopWidget*  __qt_return_value = QApplication_QtDShell::desktop();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QApplication::desktopSettingsAware()
QTD_EXTERN QTD_EXPORT bool qtd_QApplication_desktopSettingsAware
()
{
    bool  __qt_return_value = QApplication_QtDShell::desktopSettingsAware();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QApplication::doubleClickInterval()
QTD_EXTERN QTD_EXPORT int qtd_QApplication_doubleClickInterval
()
{
    int  __qt_return_value = QApplication_QtDShell::doubleClickInterval();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QApplication::exec()
QTD_EXTERN QTD_EXPORT int qtd_QApplication_exec
()
{
    int  __qt_return_value = QApplication_QtDShell::exec();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QApplication::focusWidget()
QTD_EXTERN QTD_EXPORT void* qtd_QApplication_focusWidget
()
{
    QWidget*  __qt_return_value = QApplication_QtDShell::focusWidget();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QApplication::font()
QTD_EXTERN QTD_EXPORT void* qtd_QApplication_font
()
{
    QFont  __qt_return_value = QApplication_QtDShell::font();

    void* __d_return_value = (void*) new QFont(__qt_return_value);

    return __d_return_value;
}

// QApplication::font(const QWidget * arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QApplication_font_QWidget
(void* arg__1)
{
    const QWidget*  __qt_arg__1 = (const QWidget* ) arg__1;
    QFont  __qt_return_value = QApplication_QtDShell::font((const QWidget* )__qt_arg__1);

    void* __d_return_value = (void*) new QFont(__qt_return_value);

    return __d_return_value;
}

// QApplication::fontMetrics()
QTD_EXTERN QTD_EXPORT void* qtd_QApplication_fontMetrics
()
{
    QFontMetrics  __qt_return_value = QApplication_QtDShell::fontMetrics();

    void* __d_return_value = (void*) new QFontMetrics(__qt_return_value);

    return __d_return_value;
}

// QApplication::globalStrut()
QTD_EXTERN QTD_EXPORT void qtd_QApplication_globalStrut
(QSize * __d_return_value)
{
    QSize  __qt_return_value = QApplication_QtDShell::globalStrut();

    *__d_return_value = __qt_return_value;

}

// QApplication::isEffectEnabled(Qt::UIEffect arg__1)
QTD_EXTERN QTD_EXPORT bool qtd_QApplication_isEffectEnabled_UIEffect
(int arg__1)
{
    Qt::UIEffect __qt_arg__1 = (Qt::UIEffect) arg__1;
    bool  __qt_return_value = QApplication_QtDShell::isEffectEnabled((Qt::UIEffect )__qt_arg__1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QApplication::isLeftToRight()
QTD_EXTERN QTD_EXPORT bool qtd_QApplication_isLeftToRight
()
{
    bool  __qt_return_value = QApplication_QtDShell::isLeftToRight();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QApplication::isRightToLeft()
QTD_EXTERN QTD_EXPORT bool qtd_QApplication_isRightToLeft
()
{
    bool  __qt_return_value = QApplication_QtDShell::isRightToLeft();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QApplication::keyboardInputDirection()
QTD_EXTERN QTD_EXPORT int qtd_QApplication_keyboardInputDirection
()
{
    int  __qt_return_value = QApplication_QtDShell::keyboardInputDirection();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QApplication::keyboardInputInterval()
QTD_EXTERN QTD_EXPORT int qtd_QApplication_keyboardInputInterval
()
{
    int  __qt_return_value = QApplication_QtDShell::keyboardInputInterval();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QApplication::keyboardInputLocale()
QTD_EXTERN QTD_EXPORT void* qtd_QApplication_keyboardInputLocale
()
{
    QLocale  __qt_return_value = QApplication_QtDShell::keyboardInputLocale();

    void* __d_return_value = (void*) new QLocale(__qt_return_value);

    return __d_return_value;
}

// QApplication::keyboardModifiers()
QTD_EXTERN QTD_EXPORT int qtd_QApplication_keyboardModifiers
()
{
    int  __qt_return_value = QApplication_QtDShell::keyboardModifiers();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QApplication::layoutDirection()
QTD_EXTERN QTD_EXPORT int qtd_QApplication_layoutDirection
()
{
    int  __qt_return_value = QApplication_QtDShell::layoutDirection();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QApplication::mouseButtons()
QTD_EXTERN QTD_EXPORT int qtd_QApplication_mouseButtons
()
{
    int  __qt_return_value = QApplication_QtDShell::mouseButtons();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QApplication::overrideCursor()
QTD_EXTERN QTD_EXPORT void* qtd_QApplication_overrideCursor
()
{
    QCursor*  __qt_return_value = QApplication_QtDShell::overrideCursor();

    void* __d_return_value = (void*) __qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QApplication::palette()
QTD_EXTERN QTD_EXPORT void* qtd_QApplication_palette
()
{
    QPalette  __qt_return_value = QApplication_QtDShell::palette();

    void* __d_return_value = (void*) new QPalette(__qt_return_value);

    return __d_return_value;
}

// QApplication::palette(const QWidget * arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QApplication_palette_QWidget
(void* arg__1)
{
    const QWidget*  __qt_arg__1 = (const QWidget* ) arg__1;
    QPalette  __qt_return_value = QApplication_QtDShell::palette((const QWidget* )__qt_arg__1);

    void* __d_return_value = (void*) new QPalette(__qt_return_value);

    return __d_return_value;
}

// QApplication::quitOnLastWindowClosed()
QTD_EXTERN QTD_EXPORT bool qtd_QApplication_quitOnLastWindowClosed
()
{
    bool  __qt_return_value = QApplication_QtDShell::quitOnLastWindowClosed();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QApplication::restoreOverrideCursor()
QTD_EXTERN QTD_EXPORT void qtd_QApplication_restoreOverrideCursor
()
{
    QApplication_QtDShell::restoreOverrideCursor();

}

// QApplication::setActiveWindow(QWidget * act)
QTD_EXTERN QTD_EXPORT void qtd_QApplication_setActiveWindow_QWidget
(void* act0)
{
    QWidget*  __qt_act0 = (QWidget* ) act0;
    QApplication_QtDShell::setActiveWindow((QWidget* )__qt_act0);

}

// QApplication::setColorSpec(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QApplication_setColorSpec_int
(int arg__1)
{
    QApplication_QtDShell::setColorSpec((int )arg__1);

}

// QApplication::setCursorFlashTime(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QApplication_setCursorFlashTime_int
(int arg__1)
{
    QApplication_QtDShell::setCursorFlashTime((int )arg__1);

}

// QApplication::setDesktopSettingsAware(bool arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QApplication_setDesktopSettingsAware_bool
(bool arg__1)
{
    QApplication_QtDShell::setDesktopSettingsAware((bool )arg__1);

}

// QApplication::setDoubleClickInterval(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QApplication_setDoubleClickInterval_int
(int arg__1)
{
    QApplication_QtDShell::setDoubleClickInterval((int )arg__1);

}

// QApplication::setEffectEnabled(Qt::UIEffect arg__1, bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QApplication_setEffectEnabled_UIEffect_bool
(int arg__1,
 bool enable1)
{
    Qt::UIEffect __qt_arg__1 = (Qt::UIEffect) arg__1;
    QApplication_QtDShell::setEffectEnabled((Qt::UIEffect )__qt_arg__1, (bool )enable1);

}

// QApplication::setFont(const QFont & arg__1, const char * className)
QTD_EXTERN QTD_EXPORT void qtd_QApplication_setFont_private_QFont_nativepointerchar
(void* arg__1,
 char* className1)
{
    const QFont&  __qt_arg__1 = (const QFont& ) *(QFont *)arg__1;
    const char*  __qt_className1 = (const char* ) className1;
    QApplication_QtDShell::setFont((const QFont& )__qt_arg__1, (const char* )__qt_className1);

}

// QApplication::setGlobalStrut(const QSize & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QApplication_setGlobalStrut_QSize
(QSize arg__1)
{
    QApplication_QtDShell::setGlobalStrut((const QSize& )arg__1);

}

// QApplication::setGraphicsSystem(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QApplication_setGraphicsSystem_string
(DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QApplication_QtDShell::setGraphicsSystem((const QString& )__qt_arg__1);

}

// QApplication::setKeyboardInputInterval(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QApplication_setKeyboardInputInterval_int
(int arg__1)
{
    QApplication_QtDShell::setKeyboardInputInterval((int )arg__1);

}

// QApplication::setLayoutDirection(Qt::LayoutDirection direction)
QTD_EXTERN QTD_EXPORT void qtd_QApplication_setLayoutDirection_LayoutDirection
(int direction0)
{
    Qt::LayoutDirection __qt_direction0 = (Qt::LayoutDirection) direction0;
    QApplication_QtDShell::setLayoutDirection((Qt::LayoutDirection )__qt_direction0);

}

// QApplication::setOverrideCursor(const QCursor & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QApplication_setOverrideCursor_QCursor
(void* arg__1)
{
    const QCursor&  __qt_arg__1 = (const QCursor& ) *(QCursor *)arg__1;
    QApplication_QtDShell::setOverrideCursor((const QCursor& )__qt_arg__1);

}

// QApplication::setPalette(const QPalette & arg__1, const char * className)
QTD_EXTERN QTD_EXPORT void qtd_QApplication_setPalette_private_QPalette_nativepointerchar
(void* arg__1,
 char* className1)
{
    const QPalette&  __qt_arg__1 = (const QPalette& ) *(QPalette *)arg__1;
    const char*  __qt_className1 = (const char* ) className1;
    QApplication_QtDShell::setPalette((const QPalette& )__qt_arg__1, (const char* )__qt_className1);

}

// QApplication::setQuitOnLastWindowClosed(bool quit)
QTD_EXTERN QTD_EXPORT void qtd_QApplication_setQuitOnLastWindowClosed_bool
(bool quit0)
{
    QApplication_QtDShell::setQuitOnLastWindowClosed((bool )quit0);

}

// QApplication::setStartDragDistance(int l)
QTD_EXTERN QTD_EXPORT void qtd_QApplication_setStartDragDistance_int
(int l0)
{
    QApplication_QtDShell::setStartDragDistance((int )l0);

}

// QApplication::setStartDragTime(int ms)
QTD_EXTERN QTD_EXPORT void qtd_QApplication_setStartDragTime_int
(int ms0)
{
    QApplication_QtDShell::setStartDragTime((int )ms0);

}

// QApplication::setStyle(QStyle * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QApplication_setStyle_QStyle
(void* arg__1)
{
    QStyle*  __qt_arg__1 = (QStyle* ) arg__1;
    QApplication_QtDShell::setStyle((QStyle* )__qt_arg__1);

}

// QApplication::setStyle(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QApplication_setStyle_string
(DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QStyle*  __qt_return_value = QApplication_QtDShell::setStyle((const QString& )__qt_arg__1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QApplication::setWheelScrollLines(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QApplication_setWheelScrollLines_int
(int arg__1)
{
    QApplication_QtDShell::setWheelScrollLines((int )arg__1);

}

// QApplication::setWindowIcon(const QIcon & icon)
QTD_EXTERN QTD_EXPORT void qtd_QApplication_setWindowIcon_QIcon
(void* icon0)
{
    const QIcon&  __qt_icon0 = (const QIcon& ) *(QIcon *)icon0;
    QApplication_QtDShell::setWindowIcon((const QIcon& )__qt_icon0);

}

// QApplication::startDragDistance()
QTD_EXTERN QTD_EXPORT int qtd_QApplication_startDragDistance
()
{
    int  __qt_return_value = QApplication_QtDShell::startDragDistance();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QApplication::startDragTime()
QTD_EXTERN QTD_EXPORT int qtd_QApplication_startDragTime
()
{
    int  __qt_return_value = QApplication_QtDShell::startDragTime();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QApplication::style()
QTD_EXTERN QTD_EXPORT void* qtd_QApplication_style
()
{
    QStyle*  __qt_return_value = QApplication_QtDShell::style();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QApplication::syncX()
QTD_EXTERN QTD_EXPORT void qtd_QApplication_syncX
()
{
    QApplication_QtDShell::syncX();

}

// QApplication::topLevelAt(const QPoint & p)
QTD_EXTERN QTD_EXPORT void* qtd_QApplication_topLevelAt_QPoint
(QPoint p0)
{
    QWidget*  __qt_return_value = QApplication_QtDShell::topLevelAt((const QPoint& )p0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QApplication::topLevelAt(int x, int y)
QTD_EXTERN QTD_EXPORT void* qtd_QApplication_topLevelAt_int_int
(int x0,
 int y1)
{
    QWidget*  __qt_return_value = QApplication_QtDShell::topLevelAt((int )x0, (int )y1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QApplication::topLevelWidgets()
QTD_EXTERN QTD_EXPORT void qtd_QApplication_topLevelWidgets
(void* __d_return_value)
{
    QList<QWidget* >  __qt_return_value = QApplication_QtDShell::topLevelWidgets();

QList<QWidget* > &__d_return_value_tmp = (*(QList<QWidget* > *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QApplication::type()
QTD_EXTERN QTD_EXPORT int qtd_QApplication_type
()
{
    int  __qt_return_value = QApplication_QtDShell::type();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QApplication::wheelScrollLines()
QTD_EXTERN QTD_EXPORT int qtd_QApplication_wheelScrollLines
()
{
    int  __qt_return_value = QApplication_QtDShell::wheelScrollLines();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QApplication::widgetAt(const QPoint & p)
QTD_EXTERN QTD_EXPORT void* qtd_QApplication_widgetAt_QPoint
(QPoint p0)
{
    QWidget*  __qt_return_value = QApplication_QtDShell::widgetAt((const QPoint& )p0);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QApplication::widgetAt(int x, int y)
QTD_EXTERN QTD_EXPORT void* qtd_QApplication_widgetAt_int_int
(int x0,
 int y1)
{
    QWidget*  __qt_return_value = QApplication_QtDShell::widgetAt((int )x0, (int )y1);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QApplication::windowIcon()
QTD_EXTERN QTD_EXPORT void* qtd_QApplication_windowIcon
()
{
    QIcon  __qt_return_value = QApplication_QtDShell::windowIcon();

    void* __d_return_value = (void*) new QIcon(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QApplication_staticMetaObject() {
    return (void*)&QApplication::staticMetaObject;
}


