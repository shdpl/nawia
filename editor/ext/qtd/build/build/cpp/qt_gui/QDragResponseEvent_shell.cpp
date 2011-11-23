#include <QVariant>

#include "QDragResponseEvent_shell.h"
#include <iostream>
#include <qevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QDragResponseEvent_QtDShell::QDragResponseEvent_QtDShell(void *d_ptr, bool  accepted0)
    : QDragResponseEvent(accepted0),
      QtdObjectLink(d_ptr)
{
}

QDragResponseEvent_QtDShell::~QDragResponseEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QDragResponseEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QDragResponseEvent::QDragResponseEvent(bool accepted)
QTD_EXTERN QTD_EXPORT void* qtd_QDragResponseEvent_QDragResponseEvent_bool
(void *d_ptr,
 bool accepted0)
{
    QDragResponseEvent_QtDShell *__qt_this = new QDragResponseEvent_QtDShell(d_ptr, (bool )accepted0);
    return (void *) __qt_this;

}

// QDragResponseEvent::dragAccepted() const
QTD_EXTERN QTD_EXPORT bool qtd_QDragResponseEvent_dragAccepted_const
(void* __this_nativeId)
{
    QDragResponseEvent_QtDShell *__qt_this = (QDragResponseEvent_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->dragAccepted();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors
bool  QDragResponseEvent_QtDShell::a_getter()
{
    return a;
}

QTD_EXTERN QTD_EXPORT bool qtd_QDragResponseEvent_a
(void* __this_nativeId){
    QDragResponseEvent_QtDShell *__qt_object = (QDragResponseEvent_QtDShell *) __this_nativeId;
    bool __tmp_a = __qt_object->a_getter();
    bool __d_return_value = __tmp_a;
    return __d_return_value;
}

void QDragResponseEvent_QtDShell::setA_setter(bool  a0)
{
    this->a = a0;
}

QTD_EXTERN QTD_EXPORT void qtd_QDragResponseEvent_setA_bool
(void* __this_nativeId,
 bool a0){
    QDragResponseEvent_QtDShell *__qt_object = (QDragResponseEvent_QtDShell *) __this_nativeId;
    __qt_object->setA_setter(a0);
}



