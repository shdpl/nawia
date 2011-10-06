#include <QVariant>
#include <qobject.h>

#include "QChildEvent_shell.h"
#include <iostream>
#include <qcoreevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QChildEvent_QtDShell::QChildEvent_QtDShell(void *d_ptr, QEvent::Type  type0, QObject*  child1)
    : QChildEvent(type0, child1),
      QtdObjectLink(d_ptr)
{
}

QChildEvent_QtDShell::~QChildEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QChildEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QChildEvent::QChildEvent(QEvent::Type type, QObject * child)
QTD_EXTERN QTD_EXPORT void* qtd_QChildEvent_QChildEvent_Type_QObject
(void *d_ptr,
 int type0,
 void* child1)
{
    QEvent::Type __qt_type0 = (QEvent::Type) type0;
    QObject*  __qt_child1 = (QObject* ) child1;
    QChildEvent_QtDShell *__qt_this = new QChildEvent_QtDShell(d_ptr, (QEvent::Type )__qt_type0, (QObject* )__qt_child1);
    return (void *) __qt_this;

}

// QChildEvent::added() const
QTD_EXTERN QTD_EXPORT bool qtd_QChildEvent_added_const
(void* __this_nativeId)
{
    QChildEvent_QtDShell *__qt_this = (QChildEvent_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->added();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QChildEvent::child() const
QTD_EXTERN QTD_EXPORT void* qtd_QChildEvent_child_const
(void* __this_nativeId)
{
    QChildEvent_QtDShell *__qt_this = (QChildEvent_QtDShell *) __this_nativeId;
    QObject*  __qt_return_value = __qt_this->child();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QChildEvent::polished() const
QTD_EXTERN QTD_EXPORT bool qtd_QChildEvent_polished_const
(void* __this_nativeId)
{
    QChildEvent_QtDShell *__qt_this = (QChildEvent_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->polished();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QChildEvent::removed() const
QTD_EXTERN QTD_EXPORT bool qtd_QChildEvent_removed_const
(void* __this_nativeId)
{
    QChildEvent_QtDShell *__qt_this = (QChildEvent_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->removed();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


