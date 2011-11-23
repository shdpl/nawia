#include <QVariant>
#include <qsystemsemaphore.h>

#include "QSystemSemaphore_shell.h"
#include <iostream>
#include <qsystemsemaphore.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QSystemSemaphore_delete(void* nativeId)
{
    delete (QSystemSemaphore_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QSystemSemaphore_destroy(void* nativeId)
{
    call_destructor((QSystemSemaphore_QtDShell*)nativeId);
}

QSystemSemaphore_QtDShell::QSystemSemaphore_QtDShell(const QString&  key0, int  initialValue1, QSystemSemaphore::AccessMode  mode2)
    : QSystemSemaphore(key0, initialValue1, mode2)
{
}

QSystemSemaphore_QtDShell::~QSystemSemaphore_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QSystemSemaphore_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QSystemSemaphore::QSystemSemaphore(const QString & key, int initialValue, QSystemSemaphore::AccessMode mode)
QTD_EXTERN QTD_EXPORT void* qtd_QSystemSemaphore_QSystemSemaphore_string_int_AccessMode
(void *d_ptr,
 DArray key0,
 int initialValue1,
 int mode2)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QSystemSemaphore::AccessMode __qt_mode2 = (QSystemSemaphore::AccessMode) mode2;
    QSystemSemaphore_QtDShell *__qt_this = new QSystemSemaphore_QtDShell((const QString& )__qt_key0, (int )initialValue1, (QSystemSemaphore::AccessMode )__qt_mode2);
    return (void *) __qt_this;

}

// QSystemSemaphore::acquire()
QTD_EXTERN QTD_EXPORT bool qtd_QSystemSemaphore_acquire
(void* __this_nativeId)
{
    QSystemSemaphore_QtDShell *__qt_this = (QSystemSemaphore_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->acquire();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSystemSemaphore::error() const
QTD_EXTERN QTD_EXPORT int qtd_QSystemSemaphore_error_const
(void* __this_nativeId)
{
    QSystemSemaphore_QtDShell *__qt_this = (QSystemSemaphore_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->error();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSystemSemaphore::errorString() const
QTD_EXTERN QTD_EXPORT void qtd_QSystemSemaphore_errorString_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSystemSemaphore_QtDShell *__qt_this = (QSystemSemaphore_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->errorString();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QSystemSemaphore::key() const
QTD_EXTERN QTD_EXPORT void qtd_QSystemSemaphore_key_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSystemSemaphore_QtDShell *__qt_this = (QSystemSemaphore_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->key();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QSystemSemaphore::release(int n)
QTD_EXTERN QTD_EXPORT bool qtd_QSystemSemaphore_release_int
(void* __this_nativeId,
 int n0)
{
    QSystemSemaphore_QtDShell *__qt_this = (QSystemSemaphore_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->release((int )n0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSystemSemaphore::setKey(const QString & key, int initialValue, QSystemSemaphore::AccessMode mode)
QTD_EXTERN QTD_EXPORT void qtd_QSystemSemaphore_setKey_string_int_AccessMode
(void* __this_nativeId,
 DArray key0,
 int initialValue1,
 int mode2)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QSystemSemaphore::AccessMode __qt_mode2 = (QSystemSemaphore::AccessMode) mode2;
    QSystemSemaphore_QtDShell *__qt_this = (QSystemSemaphore_QtDShell *) __this_nativeId;
    __qt_this->setKey((const QString& )__qt_key0, (int )initialValue1, (QSystemSemaphore::AccessMode )__qt_mode2);

}

// ---externC---end
// Field accessors


