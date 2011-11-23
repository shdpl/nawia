#include <QVariant>
#include <qmutex.h>

#include "QMutex_shell.h"
#include <iostream>
#include <qmutex.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QMutex_delete(void* nativeId)
{
    delete (QMutex_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QMutex_destroy(void* nativeId)
{
    call_destructor((QMutex_QtDShell*)nativeId);
}

QMutex_QtDShell::QMutex_QtDShell(QMutex::RecursionMode  mode0)
    : QMutex(mode0)
{
}

QMutex_QtDShell::~QMutex_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QMutex_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QMutex::QMutex(QMutex::RecursionMode mode)
QTD_EXTERN QTD_EXPORT void* qtd_QMutex_QMutex_RecursionMode
(void *d_ptr,
 int mode0)
{
    QMutex::RecursionMode __qt_mode0 = (QMutex::RecursionMode) mode0;
    QMutex_QtDShell *__qt_this = new QMutex_QtDShell((QMutex::RecursionMode )__qt_mode0);
    return (void *) __qt_this;

}

// QMutex::lock()
QTD_EXTERN QTD_EXPORT void qtd_QMutex_lock
(void* __this_nativeId)
{
    QMutex_QtDShell *__qt_this = (QMutex_QtDShell *) __this_nativeId;
    __qt_this->lock();

}

// QMutex::tryLock()
QTD_EXTERN QTD_EXPORT bool qtd_QMutex_tryLock
(void* __this_nativeId)
{
    QMutex_QtDShell *__qt_this = (QMutex_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->tryLock();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMutex::tryLock(int timeout)
QTD_EXTERN QTD_EXPORT bool qtd_QMutex_tryLock_int
(void* __this_nativeId,
 int timeout0)
{
    QMutex_QtDShell *__qt_this = (QMutex_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->tryLock((int )timeout0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QMutex::unlock()
QTD_EXTERN QTD_EXPORT void qtd_QMutex_unlock
(void* __this_nativeId)
{
    QMutex_QtDShell *__qt_this = (QMutex_QtDShell *) __this_nativeId;
    __qt_this->unlock();

}

// ---externC---end
// Field accessors


