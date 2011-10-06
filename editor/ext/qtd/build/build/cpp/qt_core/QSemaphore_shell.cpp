#include <QVariant>
#include <qsemaphore.h>

#include "QSemaphore_shell.h"
#include <iostream>
#include <qsemaphore.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QSemaphore_delete(void* nativeId)
{
    delete (QSemaphore_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QSemaphore_destroy(void* nativeId)
{
    call_destructor((QSemaphore_QtDShell*)nativeId);
}

QSemaphore_QtDShell::QSemaphore_QtDShell(int  n0)
    : QSemaphore(n0)
{
}

QSemaphore_QtDShell::~QSemaphore_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QSemaphore_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QSemaphore::QSemaphore(int n)
QTD_EXTERN QTD_EXPORT void* qtd_QSemaphore_QSemaphore_int
(void *d_ptr,
 int n0)
{
    QSemaphore_QtDShell *__qt_this = new QSemaphore_QtDShell((int )n0);
    return (void *) __qt_this;

}

// QSemaphore::acquire(int n)
QTD_EXTERN QTD_EXPORT void qtd_QSemaphore_acquire_int
(void* __this_nativeId,
 int n0)
{
    QSemaphore_QtDShell *__qt_this = (QSemaphore_QtDShell *) __this_nativeId;
    __qt_this->acquire((int )n0);

}

// QSemaphore::available() const
QTD_EXTERN QTD_EXPORT int qtd_QSemaphore_available_const
(void* __this_nativeId)
{
    QSemaphore_QtDShell *__qt_this = (QSemaphore_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->available();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSemaphore::release(int n)
QTD_EXTERN QTD_EXPORT void qtd_QSemaphore_release_int
(void* __this_nativeId,
 int n0)
{
    QSemaphore_QtDShell *__qt_this = (QSemaphore_QtDShell *) __this_nativeId;
    __qt_this->release((int )n0);

}

// QSemaphore::tryAcquire(int n)
QTD_EXTERN QTD_EXPORT bool qtd_QSemaphore_tryAcquire_int
(void* __this_nativeId,
 int n0)
{
    QSemaphore_QtDShell *__qt_this = (QSemaphore_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->tryAcquire((int )n0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSemaphore::tryAcquire(int n, int timeout)
QTD_EXTERN QTD_EXPORT bool qtd_QSemaphore_tryAcquire_int_int
(void* __this_nativeId,
 int n0,
 int timeout1)
{
    QSemaphore_QtDShell *__qt_this = (QSemaphore_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->tryAcquire((int )n0, (int )timeout1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


