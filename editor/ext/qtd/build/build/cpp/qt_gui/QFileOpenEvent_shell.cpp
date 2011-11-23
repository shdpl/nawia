#include <QVariant>
#include <qurl.h>

#include "QFileOpenEvent_shell.h"
#include <iostream>
#include <qevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QFileOpenEvent_QtDShell::QFileOpenEvent_QtDShell(void *d_ptr, const QString&  file0)
    : QFileOpenEvent(file0),
      QtdObjectLink(d_ptr)
{
}

QFileOpenEvent_QtDShell::QFileOpenEvent_QtDShell(void *d_ptr, const QUrl&  url0)
    : QFileOpenEvent(url0),
      QtdObjectLink(d_ptr)
{
}

QFileOpenEvent_QtDShell::~QFileOpenEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QFileOpenEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QFileOpenEvent::QFileOpenEvent(const QString & file)
QTD_EXTERN QTD_EXPORT void* qtd_QFileOpenEvent_QFileOpenEvent_string
(void *d_ptr,
 DArray file0)
{
    QString __qt_file0 = QString::fromUtf8((const char *)file0.ptr, file0.length);
    QFileOpenEvent_QtDShell *__qt_this = new QFileOpenEvent_QtDShell(d_ptr, (const QString& )__qt_file0);
    return (void *) __qt_this;

}

// QFileOpenEvent::QFileOpenEvent(const QUrl & url)
QTD_EXTERN QTD_EXPORT void* qtd_QFileOpenEvent_QFileOpenEvent_QUrl
(void *d_ptr,
 void* url0)
{
    const QUrl&  __qt_url0 = (const QUrl& ) *(QUrl *)url0;
    QFileOpenEvent_QtDShell *__qt_this = new QFileOpenEvent_QtDShell(d_ptr, (const QUrl& )__qt_url0);
    return (void *) __qt_this;

}

// QFileOpenEvent::file() const
QTD_EXTERN QTD_EXPORT void qtd_QFileOpenEvent_file_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QFileOpenEvent_QtDShell *__qt_this = (QFileOpenEvent_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->file();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QFileOpenEvent::url() const
QTD_EXTERN QTD_EXPORT void* qtd_QFileOpenEvent_url_const
(void* __this_nativeId)
{
    QFileOpenEvent_QtDShell *__qt_this = (QFileOpenEvent_QtDShell *) __this_nativeId;
    QUrl  __qt_return_value = __qt_this->url();

    void* __d_return_value = (void*) new QUrl(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors


