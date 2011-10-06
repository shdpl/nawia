#include <QVariant>
#include <qobject.h>

#include <iostream>
#include <qbasictimer.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QBasicTimer_delete(void* nativeId)
{
    delete (QBasicTimer*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QBasicTimer_destroy(void* nativeId)
{
    call_destructor((QBasicTimer*)nativeId);
}

// ---externC---
// QBasicTimer::QBasicTimer()
QTD_EXTERN QTD_EXPORT void* qtd_QBasicTimer_QBasicTimer
()
{
    QBasicTimer *__qt_this = new QBasicTimer();
    return (void *) __qt_this;

}

// QBasicTimer::isActive() const
QTD_EXTERN QTD_EXPORT bool qtd_QBasicTimer_isActive_const
(void* __this_nativeId)
{
    QBasicTimer *__qt_this = (QBasicTimer *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isActive();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QBasicTimer::start(int msec, QObject * obj)
QTD_EXTERN QTD_EXPORT void qtd_QBasicTimer_start_int_QObject
(void* __this_nativeId,
 int msec0,
 void* obj1)
{
    QObject*  __qt_obj1 = (QObject* ) obj1;
    QBasicTimer *__qt_this = (QBasicTimer *) __this_nativeId;
    __qt_this->start((int )msec0, (QObject* )__qt_obj1);

}

// QBasicTimer::stop()
QTD_EXTERN QTD_EXPORT void qtd_QBasicTimer_stop
(void* __this_nativeId)
{
    QBasicTimer *__qt_this = (QBasicTimer *) __this_nativeId;
    __qt_this->stop();

}

// QBasicTimer::timerId() const
QTD_EXTERN QTD_EXPORT int qtd_QBasicTimer_timerId_const
(void* __this_nativeId)
{
    QBasicTimer *__qt_this = (QBasicTimer *) __this_nativeId;
    int  __qt_return_value = __qt_this->timerId();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QBasicTimer_QTypeInfo_isComplex() { return (bool) QTypeInfo<QBasicTimer>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QBasicTimer_QTypeInfo_isStatic() { return (bool) QTypeInfo<QBasicTimer>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QBasicTimer_QTypeInfo_isLarge() { return (bool) QTypeInfo<QBasicTimer>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QBasicTimer_QTypeInfo_isPointer() { return (bool) QTypeInfo<QBasicTimer>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QBasicTimer_QTypeInfo_isDummy() { return (bool) QTypeInfo<QBasicTimer>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QBasicTimer_placed_copy(void* orig, void* place) {
    const QBasicTimer&  __qt_orig = (const QBasicTimer& ) *(QBasicTimer *)orig;
    QBasicTimer *result = new (place) QBasicTimer (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QBasicTimer_native_copy(void* orig) {
    const QBasicTimer&  __qt_orig = (const QBasicTimer& ) *(QBasicTimer *)orig;
    QBasicTimer *result = new QBasicTimer (__qt_orig);
    return result;
}

