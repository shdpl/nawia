#include <QVariant>

#include "QFocusEvent_shell.h"
#include <iostream>
#include <qevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QFocusEvent_QtDShell::QFocusEvent_QtDShell(void *d_ptr, QEvent::Type  type0, Qt::FocusReason  reason1)
    : QFocusEvent(type0, reason1),
      QtdObjectLink(d_ptr)
{
}

QFocusEvent_QtDShell::~QFocusEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QFocusEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QFocusEvent::QFocusEvent(QEvent::Type type, Qt::FocusReason reason)
QTD_EXTERN QTD_EXPORT void* qtd_QFocusEvent_QFocusEvent_Type_FocusReason
(void *d_ptr,
 int type0,
 int reason1)
{
    QEvent::Type __qt_type0 = (QEvent::Type) type0;
    Qt::FocusReason __qt_reason1 = (Qt::FocusReason) reason1;
    QFocusEvent_QtDShell *__qt_this = new QFocusEvent_QtDShell(d_ptr, (QEvent::Type )__qt_type0, (Qt::FocusReason )__qt_reason1);
    return (void *) __qt_this;

}

// QFocusEvent::gotFocus() const
QTD_EXTERN QTD_EXPORT bool qtd_QFocusEvent_gotFocus_const
(void* __this_nativeId)
{
    QFocusEvent_QtDShell *__qt_this = (QFocusEvent_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->gotFocus();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFocusEvent::lostFocus() const
QTD_EXTERN QTD_EXPORT bool qtd_QFocusEvent_lostFocus_const
(void* __this_nativeId)
{
    QFocusEvent_QtDShell *__qt_this = (QFocusEvent_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->lostFocus();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QFocusEvent::reason()
QTD_EXTERN QTD_EXPORT int qtd_QFocusEvent_reason
(void* __this_nativeId)
{
    QFocusEvent_QtDShell *__qt_this = (QFocusEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->reason();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


