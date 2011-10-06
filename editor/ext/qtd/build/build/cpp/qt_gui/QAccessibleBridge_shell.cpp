#include <QVariant>
#include <qaccessible.h>

#include "QAccessibleBridge_shell.h"
#include <iostream>
#include <qaccessiblebridge.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QAccessibleBridge_delete(void* nativeId)
{
    delete (QAccessibleBridge_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QAccessibleBridge_destroy(void* nativeId)
{
    call_destructor((QAccessibleBridge_QtDShell*)nativeId);
}

QAccessibleBridge_QtDShell::QAccessibleBridge_QtDShell(void *d_ptr)
    : QAccessibleBridge(),
      QtdObjectLink(d_ptr)
{
}

QAccessibleBridge_QtDShell::~QAccessibleBridge_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QAccessibleBridge_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QAccessibleBridge*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, void, QAccessibleBridge_notifyAccessibilityUpdate_int_QAccessibleInterface_int_dispatch, (void *dId, int arg__1, void* arg__2, int arg__3))
QTD_FUNC(GUI, QAccessibleBridge_notifyAccessibilityUpdate_int_QAccessibleInterface_int_dispatch)
void QAccessibleBridge_QtDShell::notifyAccessibilityUpdate(int  arg__1, QAccessibleInterface*  arg__2, int  arg__3)
{
    qtd_QAccessibleBridge_notifyAccessibilityUpdate_int_QAccessibleInterface_int_dispatch(this->dId, (int )arg__1, (QAccessibleInterface* )arg__2, (int )arg__3);
}

QTD_FUNC_DECL(GUI, void, QAccessibleBridge_setRootObject_QAccessibleInterface_dispatch, (void *dId, void* arg__1))
QTD_FUNC(GUI, QAccessibleBridge_setRootObject_QAccessibleInterface_dispatch)
void QAccessibleBridge_QtDShell::setRootObject(QAccessibleInterface*  arg__1)
{
    qtd_QAccessibleBridge_setRootObject_QAccessibleInterface_dispatch(this->dId, (QAccessibleInterface* )arg__1);
}

QTD_EXTERN QTD_EXPORT void qtd_QAccessibleBridge_initCallBacks(VoidFunc *virts) {
    qtd_QAccessibleBridge_notifyAccessibilityUpdate_int_QAccessibleInterface_int_dispatch = (qtd_QAccessibleBridge_notifyAccessibilityUpdate_int_QAccessibleInterface_int_dispatch_t) virts[0];
    qtd_QAccessibleBridge_setRootObject_QAccessibleInterface_dispatch = (qtd_QAccessibleBridge_setRootObject_QAccessibleInterface_dispatch_t) virts[1];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
void QAccessibleBridge_QtDShell::__override_notifyAccessibilityUpdate(int  arg__1, QAccessibleInterface*  arg__2, int  arg__3, bool static_call)
{
    if (static_call) {
        return;
    } else {
        notifyAccessibilityUpdate((int )arg__1, (QAccessibleInterface* )arg__2, (int )arg__3);
    }
}

void QAccessibleBridge_QtDShell::__override_setRootObject(QAccessibleInterface*  arg__1, bool static_call)
{
    if (static_call) {
        return;
    } else {
        setRootObject((QAccessibleInterface* )arg__1);
    }
}

// ---externC---
// QAccessibleBridge::()
QTD_EXTERN QTD_EXPORT void* qtd_QAccessibleBridge_QAccessibleBridge
(void *d_ptr)
{
    QAccessibleBridge_QtDShell *__qt_this = new QAccessibleBridge_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QAccessibleBridge::notifyAccessibilityUpdate(int arg__1, QAccessibleInterface * arg__2, int arg__3)
QTD_EXTERN QTD_EXPORT void qtd_QAccessibleBridge_notifyAccessibilityUpdate_int_QAccessibleInterface_int
(void* __this_nativeId,
 int arg__1,
 void* arg__2,
 int arg__3)
{
    QAccessibleInterface*  __qt_arg__2 = (QAccessibleInterface* ) arg__2;
    QAccessibleBridge_QtDShell *__qt_this = (QAccessibleBridge_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleBridge*)__this_nativeId) != NULL;
    __qt_this->__override_notifyAccessibilityUpdate((int )arg__1, (QAccessibleInterface* )__qt_arg__2, (int )arg__3, __do_static_call);

}

// QAccessibleBridge::setRootObject(QAccessibleInterface * arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QAccessibleBridge_setRootObject_QAccessibleInterface
(void* __this_nativeId,
 void* arg__1)
{
    QAccessibleInterface*  __qt_arg__1 = (QAccessibleInterface* ) arg__1;
    QAccessibleBridge_QtDShell *__qt_this = (QAccessibleBridge_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAccessibleBridge*)__this_nativeId) != NULL;
    __qt_this->__override_setRootObject((QAccessibleInterface* )__qt_arg__1, __do_static_call);

}

// ---externC---end
// Field accessors


