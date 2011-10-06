#include <QStringList>
#include <QVariant>
#include <qbytearray.h>
#include <qcoreapplication.h>
#include <qcoreevent.h>
#include <qlist.h>
#include <qobject.h>
#include <qstringlist.h>
#include <qtranslator.h>
#include <qvariant.h>

#include "QCoreApplication_shell.h"
#include <iostream>
#include <qcoreapplication.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

class QCoreApplicationEntity : public QObject, public QObjectLink
{
public:
    Q_OBJECT_CHECK
//    virtual int qt_metacall(QMetaObject::Call, int, void **);

    QCoreApplicationEntity(QObject *qObject, void *dId) : QObject(), QObjectLink(qObject, dId) {}
};

QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_createEntity(void *nativeId, void* dId)
{
    new QCoreApplicationEntity((QObject*)nativeId, dId);
}

QCoreApplication_QtDShell::QCoreApplication_QtDShell(void *d_ptr, int&  argc0, char**  argv1)
    : QCoreApplication(argc0, argv1),
      QObjectLink(this, d_ptr)
{
    // qtjambi_register_variant_handler();


}

QCoreApplication_QtDShell::~QCoreApplication_QtDShell() {
    destroyLink(this);
}

QTD_FUNC_DECL(CORE, const QMetaObject*, QObject_metaObject_dispatch, (void *dId))
QTD_FUNC_DECL(CORE, int, QObject_qt_metacall_dispatch, (void *dId, QMetaObject::Call _c, int _id, void **_a))

const QMetaObject * QCoreApplication_QtDShell::metaObject() const
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_metaObject_dispatch(dId);
    else
        return QCoreApplication::metaObject();
}

int QCoreApplication_QtDShell::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    void* dId = QObjectLink::getDId(this);
    if (dId)
        return qtd_QObject_qt_metacall_dispatch(dId, _c, _id, _a);
    else
        return QCoreApplication::qt_metacall(_c, _id, _a);
}

int QCoreApplication_QtDShell::__override_qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    return QCoreApplication::qt_metacall(_c, _id, _a);}

QTD_EXTERN QTD_EXPORT int qtd_QCoreApplication_qt_metacall(void* __this_nativeId, QMetaObject::Call _c, int _id, void **_a){
    QCoreApplication_QtDShell *__qt_this = (QCoreApplication_QtDShell *) __this_nativeId;
    return __qt_this->__override_qt_metacall(_c, _id, _a);
}

// Virtual overrides
QTD_FUNC_DECL(CORE, void, QObject_childEvent_QChildEvent_dispatch, (void *dId, void* arg__1))
void QCoreApplication_QtDShell::childEvent(QChildEvent*  arg__1)
{
    qtd_QObject_childEvent_QChildEvent_dispatch(QObjectLink::getLink(this)->dId, (QChildEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, void, QObject_customEvent_QEvent_dispatch, (void *dId, void* arg__1))
void QCoreApplication_QtDShell::customEvent(QEvent*  arg__1)
{
    qtd_QObject_customEvent_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_event_QEvent_dispatch, (void *dId, void* arg__1))
bool  QCoreApplication_QtDShell::event(QEvent*  arg__1)
{
    return qtd_QObject_event_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QEvent* )arg__1);
}

QTD_FUNC_DECL(CORE, bool, QObject_eventFilter_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
bool  QCoreApplication_QtDShell::eventFilter(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QObject_eventFilter_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(CORE, bool, QCoreApplication_notify_QObject_QEvent_dispatch, (void *dId, void* arg__1, void* arg__2))
QTD_FUNC(CORE, QCoreApplication_notify_QObject_QEvent_dispatch)
bool  QCoreApplication_QtDShell::notify(QObject*  arg__1, QEvent*  arg__2)
{
    return qtd_QCoreApplication_notify_QObject_QEvent_dispatch(QObjectLink::getLink(this)->dId, (QObject* )arg__1, (QEvent* )arg__2);
}

QTD_FUNC_DECL(CORE, void, QObject_timerEvent_QTimerEvent_dispatch, (void *dId, void* arg__1))
void QCoreApplication_QtDShell::timerEvent(QTimerEvent*  arg__1)
{
    qtd_QObject_timerEvent_QTimerEvent_dispatch(QObjectLink::getLink(this)->dId, (QTimerEvent* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_initCallBacks(VoidFunc *virts) {
    qtd_QCoreApplication_notify_QObject_QEvent_dispatch = (qtd_QCoreApplication_notify_QObject_QEvent_dispatch_t) virts[0];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
QObject*  QCoreApplication_QtDShell::__public_sender() const
{
    return QObject::sender();
}

void QCoreApplication_QtDShell::__public_aboutToQuit()
{
    QCoreApplication::aboutToQuit();
}

void QCoreApplication_QtDShell::__public_unixSignal(int  arg__1)
{
    QCoreApplication::unixSignal((int )arg__1);
}

// Write virtual function overries used to decide on static/virtual calls
void QCoreApplication_QtDShell::__override_childEvent(QChildEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::childEvent((QChildEvent* )arg__1);
    } else {
        childEvent((QChildEvent* )arg__1);
    }
}

void QCoreApplication_QtDShell::__override_customEvent(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::customEvent((QEvent* )arg__1);
    } else {
        customEvent((QEvent* )arg__1);
    }
}

bool  QCoreApplication_QtDShell::__override_event(QEvent*  arg__1, bool static_call)
{
    if (static_call) {
        return QCoreApplication::event((QEvent* )arg__1);
    } else {
        return event((QEvent* )arg__1);
    }
}

bool  QCoreApplication_QtDShell::__override_eventFilter(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QObject::eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return eventFilter((QObject* )arg__1, (QEvent* )arg__2);
    }
}

bool  QCoreApplication_QtDShell::__override_notify(QObject*  arg__1, QEvent*  arg__2, bool static_call)
{
    if (static_call) {
        return QCoreApplication::notify((QObject* )arg__1, (QEvent* )arg__2);
    } else {
        return notify((QObject* )arg__1, (QEvent* )arg__2);
    }
}

void QCoreApplication_QtDShell::__override_timerEvent(QTimerEvent*  arg__1, bool static_call)
{
    if (static_call) {
        QObject::timerEvent((QTimerEvent* )arg__1);
    } else {
        timerEvent((QTimerEvent* )arg__1);
    }
}

// QCoreApplication::aboutToQuit()
QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_aboutToQuit
(void* __this_nativeId)
{
    QCoreApplication_QtDShell *__qt_this = (QCoreApplication_QtDShell *) __this_nativeId;
    __qt_this->__public_aboutToQuit();

}

// QCoreApplication::unixSignal(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_unixSignal_int
(void* __this_nativeId,
 int arg__1)
{
    QCoreApplication_QtDShell *__qt_this = (QCoreApplication_QtDShell *) __this_nativeId;
    __qt_this->__public_unixSignal((int )arg__1);

}

// ---externC---
// QCoreApplication::QCoreApplication(int & argc, char ** argv)
QTD_EXTERN QTD_EXPORT void* qtd_QCoreApplication_QCoreApplication_nativepointerint_nativepointerchar
(void *d_ptr,
 int * argc0,
 char** argv1)
{
    int&  __qt_argc0 = (int& ) * (int *) argc0;
    char**  __qt_argv1 = (char** ) argv1;
    QCoreApplication_QtDShell *__qt_this = new QCoreApplication_QtDShell(d_ptr, (int& )__qt_argc0, (char** )__qt_argv1);
    return (void *) __qt_this;

}

// QCoreApplication::event(QEvent * arg__1)
QTD_EXTERN QTD_EXPORT bool qtd_QCoreApplication_event_QEvent
(void* __this_nativeId,
 void* arg__1)
{
    QEvent*  __qt_arg__1 = (QEvent* ) arg__1;
    QCoreApplication_QtDShell *__qt_this = (QCoreApplication_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_event((QEvent* )__qt_arg__1, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCoreApplication::notify(QObject * arg__1, QEvent * arg__2)
QTD_EXTERN QTD_EXPORT bool qtd_QCoreApplication_notify_QObject_QEvent
(void* __this_nativeId,
 void* arg__1,
 void* arg__2)
{
    QObject*  __qt_arg__1 = (QObject* ) arg__1;
    QEvent*  __qt_arg__2 = (QEvent* ) arg__2;
    QCoreApplication_QtDShell *__qt_this = (QCoreApplication_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QObject*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_notify((QObject* )__qt_arg__1, (QEvent* )__qt_arg__2, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCoreApplication::addLibraryPath(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_addLibraryPath_string
(DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QCoreApplication_QtDShell::addLibraryPath((const QString& )__qt_arg__1);

}

// QCoreApplication::applicationDirPath()
QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_applicationDirPath
(void* __d_return_value)
{
    QString  __qt_return_value = QCoreApplication_QtDShell::applicationDirPath();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QCoreApplication::applicationFilePath()
QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_applicationFilePath
(void* __d_return_value)
{
    QString  __qt_return_value = QCoreApplication_QtDShell::applicationFilePath();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QCoreApplication::applicationName()
QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_applicationName
(void* __d_return_value)
{
    QString  __qt_return_value = QCoreApplication_QtDShell::applicationName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QCoreApplication::applicationPid()
QTD_EXTERN QTD_EXPORT qint64 qtd_QCoreApplication_applicationPid
()
{
    qint64  __qt_return_value = QCoreApplication_QtDShell::applicationPid();

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCoreApplication::applicationVersion()
QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_applicationVersion
(void* __d_return_value)
{
    QString  __qt_return_value = QCoreApplication_QtDShell::applicationVersion();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QCoreApplication::arguments()
QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_arguments
(void* __d_return_value)
{
    QStringList  __qt_return_value = QCoreApplication_QtDShell::arguments();

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QCoreApplication::closingDown()
QTD_EXTERN QTD_EXPORT bool qtd_QCoreApplication_closingDown
()
{
    bool  __qt_return_value = QCoreApplication_QtDShell::closingDown();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCoreApplication::exec()
QTD_EXTERN QTD_EXPORT int qtd_QCoreApplication_exec
()
{
    int  __qt_return_value = QCoreApplication_QtDShell::exec();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCoreApplication::exit(int retcode)
QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_exit_int
(int retcode0)
{
    QCoreApplication_QtDShell::exit((int )retcode0);

}

// QCoreApplication::flush()
QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_flush
()
{
    QCoreApplication_QtDShell::flush();

}

// QCoreApplication::hasPendingEvents()
QTD_EXTERN QTD_EXPORT bool qtd_QCoreApplication_hasPendingEvents
()
{
    bool  __qt_return_value = QCoreApplication_QtDShell::hasPendingEvents();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCoreApplication::installTranslator(QTranslator * messageFile)
QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_installTranslator_QTranslator
(void* messageFile0)
{
    QTranslator*  __qt_messageFile0 = (QTranslator* ) messageFile0;
    QCoreApplication_QtDShell::installTranslator((QTranslator* )__qt_messageFile0);

}

// QCoreApplication::instance()
QTD_EXTERN QTD_EXPORT void* qtd_QCoreApplication_instance
()
{
    QCoreApplication*  __qt_return_value = QCoreApplication_QtDShell::instance();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QCoreApplication::libraryPaths()
QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_libraryPaths
(void* __d_return_value)
{
    QStringList  __qt_return_value = QCoreApplication_QtDShell::libraryPaths();

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QCoreApplication::organizationDomain()
QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_organizationDomain
(void* __d_return_value)
{
    QString  __qt_return_value = QCoreApplication_QtDShell::organizationDomain();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QCoreApplication::organizationName()
QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_organizationName
(void* __d_return_value)
{
    QString  __qt_return_value = QCoreApplication_QtDShell::organizationName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QCoreApplication::postEvent(QObject * receiver, QEvent * event)
QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_postEvent_QObject_QEvent
(void* receiver0,
 void* event1)
{
    QObject*  __qt_receiver0 = (QObject* ) receiver0;
    QEvent*  __qt_event1 = (QEvent* ) event1;
    QCoreApplication_QtDShell::postEvent((QObject* )__qt_receiver0, (QEvent* )__qt_event1);

}

// QCoreApplication::postEvent(QObject * receiver, QEvent * event, int priority)
QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_postEvent_QObject_QEvent_int
(void* receiver0,
 void* event1,
 int priority2)
{
    QObject*  __qt_receiver0 = (QObject* ) receiver0;
    QEvent*  __qt_event1 = (QEvent* ) event1;
    QCoreApplication_QtDShell::postEvent((QObject* )__qt_receiver0, (QEvent* )__qt_event1, (int )priority2);

}

// QCoreApplication::processEvents(QFlags<QEventLoop::ProcessEventsFlag> flags)
QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_processEvents_ProcessEventsFlags
(int flags0)
{
    QFlags<QEventLoop::ProcessEventsFlag> __qt_flags0 = (QFlags<QEventLoop::ProcessEventsFlag>) flags0;
    QCoreApplication_QtDShell::processEvents((QEventLoop::ProcessEventsFlags )__qt_flags0);

}

// QCoreApplication::processEvents(QFlags<QEventLoop::ProcessEventsFlag> flags, int maxtime)
QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_processEvents_ProcessEventsFlags_int
(int flags0,
 int maxtime1)
{
    QFlags<QEventLoop::ProcessEventsFlag> __qt_flags0 = (QFlags<QEventLoop::ProcessEventsFlag>) flags0;
    QCoreApplication_QtDShell::processEvents((QEventLoop::ProcessEventsFlags )__qt_flags0, (int )maxtime1);

}

// QCoreApplication::quit()
QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_quit
()
{
    QCoreApplication_QtDShell::quit();

}

// QCoreApplication::removeLibraryPath(const QString & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_removeLibraryPath_string
(DArray arg__1)
{
    QString __qt_arg__1 = QString::fromUtf8((const char *)arg__1.ptr, arg__1.length);
    QCoreApplication_QtDShell::removeLibraryPath((const QString& )__qt_arg__1);

}

// QCoreApplication::removePostedEvents(QObject * receiver)
QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_removePostedEvents_QObject
(void* receiver0)
{
    QObject*  __qt_receiver0 = (QObject* ) receiver0;
    QCoreApplication_QtDShell::removePostedEvents((QObject* )__qt_receiver0);

}

// QCoreApplication::removePostedEvents(QObject * receiver, int eventType)
QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_removePostedEvents_QObject_int
(void* receiver0,
 int eventType1)
{
    QObject*  __qt_receiver0 = (QObject* ) receiver0;
    QCoreApplication_QtDShell::removePostedEvents((QObject* )__qt_receiver0, (int )eventType1);

}

// QCoreApplication::removeTranslator(QTranslator * messageFile)
QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_removeTranslator_QTranslator
(void* messageFile0)
{
    QTranslator*  __qt_messageFile0 = (QTranslator* ) messageFile0;
    QCoreApplication_QtDShell::removeTranslator((QTranslator* )__qt_messageFile0);

}

// QCoreApplication::sendEvent(QObject * receiver, QEvent * event)
QTD_EXTERN QTD_EXPORT bool qtd_QCoreApplication_sendEvent_QObject_QEvent
(void* receiver0,
 void* event1)
{
    QObject*  __qt_receiver0 = (QObject* ) receiver0;
    QEvent*  __qt_event1 = (QEvent* ) event1;
    bool  __qt_return_value = QCoreApplication_QtDShell::sendEvent((QObject* )__qt_receiver0, (QEvent* )__qt_event1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCoreApplication::sendPostedEvents()
QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_sendPostedEvents
()
{
    QCoreApplication_QtDShell::sendPostedEvents();

}

// QCoreApplication::sendPostedEvents(QObject * receiver, int event_type)
QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_sendPostedEvents_QObject_int
(void* receiver0,
 int event_type1)
{
    QObject*  __qt_receiver0 = (QObject* ) receiver0;
    QCoreApplication_QtDShell::sendPostedEvents((QObject* )__qt_receiver0, (int )event_type1);

}

// QCoreApplication::setApplicationName(const QString & application)
QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_setApplicationName_string
(DArray application0)
{
    QString __qt_application0 = QString::fromUtf8((const char *)application0.ptr, application0.length);
    QCoreApplication_QtDShell::setApplicationName((const QString& )__qt_application0);

}

// QCoreApplication::setApplicationVersion(const QString & version_)
QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_setApplicationVersion_string
(DArray version0)
{
    QString __qt_version0 = QString::fromUtf8((const char *)version0.ptr, version0.length);
    QCoreApplication_QtDShell::setApplicationVersion((const QString& )__qt_version0);

}

// QCoreApplication::setAttribute(Qt::ApplicationAttribute attribute, bool on)
QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_setAttribute_ApplicationAttribute_bool
(int attribute0,
 bool on1)
{
    Qt::ApplicationAttribute __qt_attribute0 = (Qt::ApplicationAttribute) attribute0;
    QCoreApplication_QtDShell::setAttribute((Qt::ApplicationAttribute )__qt_attribute0, (bool )on1);

}

// QCoreApplication::setLibraryPaths(const QStringList & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_setLibraryPaths_QList
(void* arg__1)
{
QStringList __qt_arg__1 = (*(QStringList *)arg__1);
    QCoreApplication_QtDShell::setLibraryPaths((const QStringList& )__qt_arg__1);

}

// QCoreApplication::setOrganizationDomain(const QString & orgDomain)
QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_setOrganizationDomain_string
(DArray orgDomain0)
{
    QString __qt_orgDomain0 = QString::fromUtf8((const char *)orgDomain0.ptr, orgDomain0.length);
    QCoreApplication_QtDShell::setOrganizationDomain((const QString& )__qt_orgDomain0);

}

// QCoreApplication::setOrganizationName(const QString & orgName)
QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_setOrganizationName_string
(DArray orgName0)
{
    QString __qt_orgName0 = QString::fromUtf8((const char *)orgName0.ptr, orgName0.length);
    QCoreApplication_QtDShell::setOrganizationName((const QString& )__qt_orgName0);

}

// QCoreApplication::startingUp()
QTD_EXTERN QTD_EXPORT bool qtd_QCoreApplication_startingUp
()
{
    bool  __qt_return_value = QCoreApplication_QtDShell::startingUp();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCoreApplication::testAttribute(Qt::ApplicationAttribute attribute)
QTD_EXTERN QTD_EXPORT bool qtd_QCoreApplication_testAttribute_ApplicationAttribute
(int attribute0)
{
    Qt::ApplicationAttribute __qt_attribute0 = (Qt::ApplicationAttribute) attribute0;
    bool  __qt_return_value = QCoreApplication_QtDShell::testAttribute((Qt::ApplicationAttribute )__qt_attribute0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QCoreApplication::translate(const char * context, const char * key, const char * disambiguation, QCoreApplication::Encoding encoding)
QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_translate_nativepointerchar_nativepointerchar_nativepointerchar_Encoding
(void* __d_return_value,
 char* context0,
 char* key1,
 char* disambiguation2,
 int encoding3)
{
    const char*  __qt_context0 = (const char* ) context0;
    const char*  __qt_key1 = (const char* ) key1;
    const char*  __qt_disambiguation2 = (const char* ) disambiguation2;
    QCoreApplication::Encoding __qt_encoding3 = (QCoreApplication::Encoding) encoding3;
    QString  __qt_return_value = QCoreApplication_QtDShell::translate((const char* )__qt_context0, (const char* )__qt_key1, (const char* )__qt_disambiguation2, (QCoreApplication::Encoding )__qt_encoding3);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QCoreApplication::translate(const char * context, const char * key, const char * disambiguation, QCoreApplication::Encoding encoding, int n)
QTD_EXTERN QTD_EXPORT void qtd_QCoreApplication_translate_nativepointerchar_nativepointerchar_nativepointerchar_Encoding_int
(void* __d_return_value,
 char* context0,
 char* key1,
 char* disambiguation2,
 int encoding3,
 int n4)
{
    const char*  __qt_context0 = (const char* ) context0;
    const char*  __qt_key1 = (const char* ) key1;
    const char*  __qt_disambiguation2 = (const char* ) disambiguation2;
    QCoreApplication::Encoding __qt_encoding3 = (QCoreApplication::Encoding) encoding3;
    QString  __qt_return_value = QCoreApplication_QtDShell::translate((const char* )__qt_context0, (const char* )__qt_key1, (const char* )__qt_disambiguation2, (QCoreApplication::Encoding )__qt_encoding3, (int )n4);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors


QTD_EXTERN QTD_EXPORT void* qtd_QCoreApplication_staticMetaObject() {
    return (void*)&QCoreApplication::staticMetaObject;
}


