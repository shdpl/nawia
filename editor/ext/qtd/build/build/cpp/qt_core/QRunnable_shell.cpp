#include <QVariant>

#include "QRunnable_shell.h"
#include <iostream>
#include <qrunnable.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QRunnable_delete(void* nativeId)
{
    delete (QRunnable_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QRunnable_destroy(void* nativeId)
{
    call_destructor((QRunnable_QtDShell*)nativeId);
}

QRunnable_QtDShell::QRunnable_QtDShell(void *d_ptr)
    : QRunnable(),
      QtdObjectLink(d_ptr)
{
}

QRunnable_QtDShell::~QRunnable_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QRunnable_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QRunnable*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(CORE, void, QRunnable_run_dispatch, (void *dId))
QTD_FUNC(CORE, QRunnable_run_dispatch)
void QRunnable_QtDShell::run()
{
    qtd_QRunnable_run_dispatch(this->dId);
}

QTD_EXTERN QTD_EXPORT void qtd_QRunnable_initCallBacks(VoidFunc *virts) {
    qtd_QRunnable_run_dispatch = (qtd_QRunnable_run_dispatch_t) virts[0];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
void QRunnable_QtDShell::__override_run(bool static_call)
{
    if (static_call) {
        return;
    } else {
        run();
    }
}

// ---externC---
// QRunnable::QRunnable()
QTD_EXTERN QTD_EXPORT void* qtd_QRunnable_QRunnable
(void *d_ptr)
{
    QRunnable_QtDShell *__qt_this = new QRunnable_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QRunnable::autoDelete() const
QTD_EXTERN QTD_EXPORT bool qtd_QRunnable_autoDelete_const
(void* __this_nativeId)
{
    QRunnable_QtDShell *__qt_this = (QRunnable_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->autoDelete();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QRunnable::setAutoDelete(bool _autoDelete)
QTD_EXTERN QTD_EXPORT void qtd_QRunnable_setAutoDelete_bool
(void* __this_nativeId,
 bool _autoDelete0)
{
    QRunnable_QtDShell *__qt_this = (QRunnable_QtDShell *) __this_nativeId;
    __qt_this->setAutoDelete((bool )_autoDelete0);

}

// QRunnable::run()
QTD_EXTERN QTD_EXPORT void qtd_QRunnable_run
(void* __this_nativeId)
{
    QRunnable_QtDShell *__qt_this = (QRunnable_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QRunnable*)__this_nativeId) != NULL;
    __qt_this->__override_run(__do_static_call);

}

// ---externC---end
// Field accessors


