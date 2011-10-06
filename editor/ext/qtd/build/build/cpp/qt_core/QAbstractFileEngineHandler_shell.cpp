#include <QVariant>
#include <qabstractfileengine.h>

#include "QAbstractFileEngineHandler_shell.h"
#include <iostream>
#include <qabstractfileengine.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QAbstractFileEngineHandler_delete(void* nativeId)
{
    delete (QAbstractFileEngineHandler_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractFileEngineHandler_destroy(void* nativeId)
{
    call_destructor((QAbstractFileEngineHandler_QtDShell*)nativeId);
}

QAbstractFileEngineHandler_QtDShell::QAbstractFileEngineHandler_QtDShell(void *d_ptr)
    : QAbstractFileEngineHandler(),
      QtdObjectLink(d_ptr)
{
}

QAbstractFileEngineHandler_QtDShell::~QAbstractFileEngineHandler_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QAbstractFileEngineHandler_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QAbstractFileEngineHandler*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(CORE, void*, QAbstractFileEngineHandler_create_string_const_dispatch, (void *dId, const unsigned short* fileName0, int fileName0_size))
QTD_FUNC(CORE, QAbstractFileEngineHandler_create_string_const_dispatch)
QAbstractFileEngine*  QAbstractFileEngineHandler_QtDShell::create(const QString&  fileName0) const
{
    return (QAbstractFileEngine*) qtd_QAbstractFileEngineHandler_create_string_const_dispatch(this->dId, fileName0.utf16(), fileName0.size());
}

QTD_EXTERN QTD_EXPORT void qtd_QAbstractFileEngineHandler_initCallBacks(VoidFunc *virts) {
    qtd_QAbstractFileEngineHandler_create_string_const_dispatch = (qtd_QAbstractFileEngineHandler_create_string_const_dispatch_t) virts[0];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
QAbstractFileEngine*  QAbstractFileEngineHandler_QtDShell::__override_create(const QString&  fileName0, bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return create((const QString& )fileName0);
    }
}

// ---externC---
// QAbstractFileEngineHandler::QAbstractFileEngineHandler()
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractFileEngineHandler_QAbstractFileEngineHandler
(void *d_ptr)
{
    QAbstractFileEngineHandler_QtDShell *__qt_this = new QAbstractFileEngineHandler_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QAbstractFileEngineHandler::create(const QString & fileName) const
QTD_EXTERN QTD_EXPORT void* qtd_QAbstractFileEngineHandler_create_string_const
(void* __this_nativeId,
 DArray fileName0)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    QAbstractFileEngineHandler_QtDShell *__qt_this = (QAbstractFileEngineHandler_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QAbstractFileEngineHandler*)__this_nativeId) != NULL;
    QAbstractFileEngine*  __qt_return_value = __qt_this->__override_create((const QString& )__qt_fileName0, __do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


