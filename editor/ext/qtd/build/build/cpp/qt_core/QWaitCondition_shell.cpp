#include <QVariant>
#include <qmutex.h>
#include <qreadwritelock.h>
#include <qwaitcondition.h>

#include "QWaitCondition_shell.h"
#include <iostream>
#include <qwaitcondition.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QWaitCondition_delete(void* nativeId)
{
    delete (QWaitCondition_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QWaitCondition_destroy(void* nativeId)
{
    call_destructor((QWaitCondition_QtDShell*)nativeId);
}

QWaitCondition_QtDShell::QWaitCondition_QtDShell()
    : QWaitCondition()
{
}

QWaitCondition_QtDShell::~QWaitCondition_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QWaitCondition_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QWaitCondition::QWaitCondition()
QTD_EXTERN QTD_EXPORT void* qtd_QWaitCondition_QWaitCondition
(void *d_ptr)
{
    QWaitCondition_QtDShell *__qt_this = new QWaitCondition_QtDShell();
    return (void *) __qt_this;

}

// QWaitCondition::wait(QMutex * mutex, unsigned long time)
QTD_EXTERN QTD_EXPORT bool qtd_QWaitCondition_wait_QMutex_uint
(void* __this_nativeId,
 void* mutex0,
 unsigned long time1)
{
    QMutex*  __qt_mutex0 = (QMutex* ) mutex0;
    QWaitCondition_QtDShell *__qt_this = (QWaitCondition_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->wait((QMutex* )__qt_mutex0, (unsigned long )time1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWaitCondition::wait(QReadWriteLock * readWriteLock, unsigned long time)
QTD_EXTERN QTD_EXPORT bool qtd_QWaitCondition_wait_QReadWriteLock_uint
(void* __this_nativeId,
 void* readWriteLock0,
 unsigned long time1)
{
    QReadWriteLock*  __qt_readWriteLock0 = (QReadWriteLock* ) readWriteLock0;
    QWaitCondition_QtDShell *__qt_this = (QWaitCondition_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->wait((QReadWriteLock* )__qt_readWriteLock0, (unsigned long )time1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QWaitCondition::wakeAll()
QTD_EXTERN QTD_EXPORT void qtd_QWaitCondition_wakeAll
(void* __this_nativeId)
{
    QWaitCondition_QtDShell *__qt_this = (QWaitCondition_QtDShell *) __this_nativeId;
    __qt_this->wakeAll();

}

// QWaitCondition::wakeOne()
QTD_EXTERN QTD_EXPORT void qtd_QWaitCondition_wakeOne
(void* __this_nativeId)
{
    QWaitCondition_QtDShell *__qt_this = (QWaitCondition_QtDShell *) __this_nativeId;
    __qt_this->wakeOne();

}

// ---externC---end
// Field accessors


