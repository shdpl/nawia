#include <QVariant>

#include "QEvent_shell.h"
#include <iostream>
#include <qcoreevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QTD_EXTERN QTD_EXPORT void qtd_QEvent_delete(void* nativeId)
{
    delete (QEvent_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QEvent_destroy(void* nativeId)
{
    call_destructor((QEvent_QtDShell*)nativeId);
}

QEvent_QtDShell::QEvent_QtDShell(void *d_ptr, QEvent::Type  type0)
    : QEvent(type0),
      QtdObjectLink(d_ptr)
{
}

QEvent_QtDShell::~QEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QEvent::QEvent(QEvent::Type type)
QTD_EXTERN QTD_EXPORT void* qtd_QEvent_QEvent_Type
(void *d_ptr,
 int type0)
{
    QEvent::Type __qt_type0 = (QEvent::Type) type0;
    QEvent_QtDShell *__qt_this = new QEvent_QtDShell(d_ptr, (QEvent::Type )__qt_type0);
    return (void *) __qt_this;

}

// QEvent::accept()
QTD_EXTERN QTD_EXPORT void qtd_QEvent_accept
(void* __this_nativeId)
{
    QEvent_QtDShell *__qt_this = (QEvent_QtDShell *) __this_nativeId;
    __qt_this->accept();

}

// QEvent::ignore()
QTD_EXTERN QTD_EXPORT void qtd_QEvent_ignore
(void* __this_nativeId)
{
    QEvent_QtDShell *__qt_this = (QEvent_QtDShell *) __this_nativeId;
    __qt_this->ignore();

}

// QEvent::isAccepted() const
QTD_EXTERN QTD_EXPORT bool qtd_QEvent_isAccepted_const
(void* __this_nativeId)
{
    QEvent_QtDShell *__qt_this = (QEvent_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isAccepted();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QEvent::setAccepted(bool accepted)
QTD_EXTERN QTD_EXPORT void qtd_QEvent_setAccepted_bool
(void* __this_nativeId,
 bool accepted0)
{
    QEvent_QtDShell *__qt_this = (QEvent_QtDShell *) __this_nativeId;
    __qt_this->setAccepted((bool )accepted0);

}

// QEvent::spontaneous() const
QTD_EXTERN QTD_EXPORT bool qtd_QEvent_spontaneous_const
(void* __this_nativeId)
{
    QEvent_QtDShell *__qt_this = (QEvent_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->spontaneous();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QEvent::type() const
QTD_EXTERN QTD_EXPORT int qtd_QEvent_type_const
(void* __this_nativeId)
{
    QEvent_QtDShell *__qt_this = (QEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->type();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QEvent::registerEventType(int hint)
QTD_EXTERN QTD_EXPORT int qtd_QEvent_registerEventType_int
(int hint0)
{
    int  __qt_return_value = QEvent_QtDShell::registerEventType((int )hint0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


