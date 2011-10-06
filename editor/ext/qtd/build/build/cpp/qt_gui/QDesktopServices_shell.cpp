#include <QVariant>
#include <qobject.h>
#include <qurl.h>

#include "QDesktopServices_shell.h"
#include <iostream>
#include <qdesktopservices.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QDesktopServices_delete(void* nativeId)
{
    delete (QDesktopServices_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QDesktopServices_destroy(void* nativeId)
{
    call_destructor((QDesktopServices_QtDShell*)nativeId);
}

QDesktopServices_QtDShell::QDesktopServices_QtDShell()
    : QDesktopServices()
{
}

QDesktopServices_QtDShell::~QDesktopServices_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QDesktopServices_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QDesktopServices::()
QTD_EXTERN QTD_EXPORT void* qtd_QDesktopServices_QDesktopServices
(void *d_ptr)
{
    QDesktopServices_QtDShell *__qt_this = new QDesktopServices_QtDShell();
    return (void *) __qt_this;

}

// QDesktopServices::displayName(QDesktopServices::StandardLocation type)
QTD_EXTERN QTD_EXPORT void qtd_QDesktopServices_displayName_StandardLocation
(void* __d_return_value,
 int type0)
{
    QDesktopServices::StandardLocation __qt_type0 = (QDesktopServices::StandardLocation) type0;
    QString  __qt_return_value = QDesktopServices_QtDShell::displayName((QDesktopServices::StandardLocation )__qt_type0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDesktopServices::openUrl(const QUrl & url)
QTD_EXTERN QTD_EXPORT bool qtd_QDesktopServices_openUrl_QUrl
(void* url0)
{
    const QUrl&  __qt_url0 = (const QUrl& ) *(QUrl *)url0;
    bool  __qt_return_value = QDesktopServices_QtDShell::openUrl((const QUrl& )__qt_url0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QDesktopServices::setUrlHandler(const QString & scheme, QObject * receiver, const char * method)
QTD_EXTERN QTD_EXPORT void qtd_QDesktopServices_setUrlHandler_string_QObject_nativepointerchar
(DArray scheme0,
 void* receiver1,
 char* method2)
{
    QString __qt_scheme0 = QString::fromUtf8((const char *)scheme0.ptr, scheme0.length);
    QObject*  __qt_receiver1 = (QObject* ) receiver1;
    const char*  __qt_method2 = (const char* ) method2;
    QDesktopServices_QtDShell::setUrlHandler((const QString& )__qt_scheme0, (QObject* )__qt_receiver1, (const char* )__qt_method2);

}

// QDesktopServices::storageLocation(QDesktopServices::StandardLocation type)
QTD_EXTERN QTD_EXPORT void qtd_QDesktopServices_storageLocation_StandardLocation
(void* __d_return_value,
 int type0)
{
    QDesktopServices::StandardLocation __qt_type0 = (QDesktopServices::StandardLocation) type0;
    QString  __qt_return_value = QDesktopServices_QtDShell::storageLocation((QDesktopServices::StandardLocation )__qt_type0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QDesktopServices::unsetUrlHandler(const QString & scheme)
QTD_EXTERN QTD_EXPORT void qtd_QDesktopServices_unsetUrlHandler_string
(DArray scheme0)
{
    QString __qt_scheme0 = QString::fromUtf8((const char *)scheme0.ptr, scheme0.length);
    QDesktopServices_QtDShell::unsetUrlHandler((const QString& )__qt_scheme0);

}

// ---externC---end
// Field accessors


