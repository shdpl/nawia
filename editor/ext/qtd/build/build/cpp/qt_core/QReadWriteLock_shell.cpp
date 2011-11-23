#include <QVariant>
#include <qreadwritelock.h>

#include "QReadWriteLock_shell.h"
#include <iostream>
#include <qreadwritelock.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QReadWriteLock_delete(void* nativeId)
{
    delete (QReadWriteLock_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QReadWriteLock_destroy(void* nativeId)
{
    call_destructor((QReadWriteLock_QtDShell*)nativeId);
}

QReadWriteLock_QtDShell::QReadWriteLock_QtDShell()
    : QReadWriteLock()
{
}

QReadWriteLock_QtDShell::QReadWriteLock_QtDShell(QReadWriteLock::RecursionMode  recursionMode0)
    : QReadWriteLock(recursionMode0)
{
}

QReadWriteLock_QtDShell::~QReadWriteLock_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QReadWriteLock_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QReadWriteLock::QReadWriteLock()
QTD_EXTERN QTD_EXPORT void* qtd_QReadWriteLock_QReadWriteLock
(void *d_ptr)
{
    QReadWriteLock_QtDShell *__qt_this = new QReadWriteLock_QtDShell();
    return (void *) __qt_this;

}

// QReadWriteLock::QReadWriteLock(QReadWriteLock::RecursionMode recursionMode)
QTD_EXTERN QTD_EXPORT void* qtd_QReadWriteLock_QReadWriteLock_RecursionMode
(void *d_ptr,
 int recursionMode0)
{
    QReadWriteLock::RecursionMode __qt_recursionMode0 = (QReadWriteLock::RecursionMode) recursionMode0;
    QReadWriteLock_QtDShell *__qt_this = new QReadWriteLock_QtDShell((QReadWriteLock::RecursionMode )__qt_recursionMode0);
    return (void *) __qt_this;

}

// QReadWriteLock::lockForRead()
QTD_EXTERN QTD_EXPORT void qtd_QReadWriteLock_lockForRead
(void* __this_nativeId)
{
    QReadWriteLock_QtDShell *__qt_this = (QReadWriteLock_QtDShell *) __this_nativeId;
    __qt_this->lockForRead();

}

// QReadWriteLock::lockForWrite()
QTD_EXTERN QTD_EXPORT void qtd_QReadWriteLock_lockForWrite
(void* __this_nativeId)
{
    QReadWriteLock_QtDShell *__qt_this = (QReadWriteLock_QtDShell *) __this_nativeId;
    __qt_this->lockForWrite();

}

// QReadWriteLock::tryLockForRead()
QTD_EXTERN QTD_EXPORT bool qtd_QReadWriteLock_tryLockForRead
(void* __this_nativeId)
{
    QReadWriteLock_QtDShell *__qt_this = (QReadWriteLock_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->tryLockForRead();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QReadWriteLock::tryLockForRead(int timeout)
QTD_EXTERN QTD_EXPORT bool qtd_QReadWriteLock_tryLockForRead_int
(void* __this_nativeId,
 int timeout0)
{
    QReadWriteLock_QtDShell *__qt_this = (QReadWriteLock_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->tryLockForRead((int )timeout0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QReadWriteLock::tryLockForWrite()
QTD_EXTERN QTD_EXPORT bool qtd_QReadWriteLock_tryLockForWrite
(void* __this_nativeId)
{
    QReadWriteLock_QtDShell *__qt_this = (QReadWriteLock_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->tryLockForWrite();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QReadWriteLock::tryLockForWrite(int timeout)
QTD_EXTERN QTD_EXPORT bool qtd_QReadWriteLock_tryLockForWrite_int
(void* __this_nativeId,
 int timeout0)
{
    QReadWriteLock_QtDShell *__qt_this = (QReadWriteLock_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->tryLockForWrite((int )timeout0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QReadWriteLock::unlock()
QTD_EXTERN QTD_EXPORT void qtd_QReadWriteLock_unlock
(void* __this_nativeId)
{
    QReadWriteLock_QtDShell *__qt_this = (QReadWriteLock_QtDShell *) __this_nativeId;
    __qt_this->unlock();

}

// ---externC---end
// Field accessors


