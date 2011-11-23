#include <QVariant>

#include "QStatusTipEvent_shell.h"
#include <iostream>
#include <qevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QStatusTipEvent_QtDShell::QStatusTipEvent_QtDShell(void *d_ptr, const QString&  tip0)
    : QStatusTipEvent(tip0),
      QtdObjectLink(d_ptr)
{
}

QStatusTipEvent_QtDShell::~QStatusTipEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QStatusTipEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QStatusTipEvent::QStatusTipEvent(const QString & tip)
QTD_EXTERN QTD_EXPORT void* qtd_QStatusTipEvent_QStatusTipEvent_string
(void *d_ptr,
 DArray tip0)
{
    QString __qt_tip0 = QString::fromUtf8((const char *)tip0.ptr, tip0.length);
    QStatusTipEvent_QtDShell *__qt_this = new QStatusTipEvent_QtDShell(d_ptr, (const QString& )__qt_tip0);
    return (void *) __qt_this;

}

// QStatusTipEvent::tip() const
QTD_EXTERN QTD_EXPORT void qtd_QStatusTipEvent_tip_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QStatusTipEvent_QtDShell *__qt_this = (QStatusTipEvent_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->tip();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors


