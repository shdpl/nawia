#include <QVariant>

#include "QAccessibleEvent_shell.h"
#include <iostream>
#include <qaccessible.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QAccessibleEvent_QtDShell::QAccessibleEvent_QtDShell(void *d_ptr, QEvent::Type  type0, int  child1)
    : QAccessibleEvent(type0, child1),
      QtdObjectLink(d_ptr)
{
}

QAccessibleEvent_QtDShell::~QAccessibleEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QAccessibleEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QAccessibleEvent::QAccessibleEvent(QEvent::Type type, int child)
QTD_EXTERN QTD_EXPORT void* qtd_QAccessibleEvent_QAccessibleEvent_Type_int
(void *d_ptr,
 int type0,
 int child1)
{
    QEvent::Type __qt_type0 = (QEvent::Type) type0;
    QAccessibleEvent_QtDShell *__qt_this = new QAccessibleEvent_QtDShell(d_ptr, (QEvent::Type )__qt_type0, (int )child1);
    return (void *) __qt_this;

}

// QAccessibleEvent::child() const
QTD_EXTERN QTD_EXPORT int qtd_QAccessibleEvent_child_const
(void* __this_nativeId)
{
    QAccessibleEvent_QtDShell *__qt_this = (QAccessibleEvent_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->child();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QAccessibleEvent::setValue(const QString & aText)
QTD_EXTERN QTD_EXPORT void qtd_QAccessibleEvent_setValue_string
(void* __this_nativeId,
 DArray aText0)
{
    QString __qt_aText0 = QString::fromUtf8((const char *)aText0.ptr, aText0.length);
    QAccessibleEvent_QtDShell *__qt_this = (QAccessibleEvent_QtDShell *) __this_nativeId;
    __qt_this->setValue((const QString& )__qt_aText0);

}

// QAccessibleEvent::value() const
QTD_EXTERN QTD_EXPORT void qtd_QAccessibleEvent_value_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QAccessibleEvent_QtDShell *__qt_this = (QAccessibleEvent_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->value();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors


