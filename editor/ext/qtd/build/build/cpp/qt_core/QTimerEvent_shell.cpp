#include <QVariant>

#include "QTimerEvent_shell.h"
#include <iostream>
#include <qcoreevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTimerEvent_QtDShell::QTimerEvent_QtDShell(void *d_ptr, int  timerId0)
    : QTimerEvent(timerId0),
      QtdObjectLink(d_ptr)
{
}

QTimerEvent_QtDShell::~QTimerEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QTimerEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QTimerEvent::QTimerEvent(int timerId)
QTD_EXTERN QTD_EXPORT void* qtd_QTimerEvent_QTimerEvent_int
(void *d_ptr,
 int timerId0)
{
    QTimerEvent_QtDShell *__qt_this = new QTimerEvent_QtDShell(d_ptr, (int )timerId0);
    return (void *) __qt_this;

}

// QTimerEvent::timerId() const
QTD_EXTERN QTD_EXPORT int qtd_QTimerEvent_timerId_const
(void* __this_nativeId)
{
    QTimerEvent_QtDShell *__qt_this = (QTimerEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->timerId();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
int  QTimerEvent_QtDShell::id_getter()
{
    return id;
}

QTD_EXTERN QTD_EXPORT int qtd_QTimerEvent_id
(void* __this_nativeId){
    QTimerEvent_QtDShell *__qt_object = (QTimerEvent_QtDShell *) __this_nativeId;
    int __tmp_id = __qt_object->id_getter();
    int __d_return_value = __tmp_id;
    return __d_return_value;
}

void QTimerEvent_QtDShell::setId_setter(int  id0)
{
    this->id = id0;
}

QTD_EXTERN QTD_EXPORT void qtd_QTimerEvent_setId_int
(void* __this_nativeId,
 int id0){
    QTimerEvent_QtDShell *__qt_object = (QTimerEvent_QtDShell *) __this_nativeId;
    __qt_object->setId_setter(id0);
}



