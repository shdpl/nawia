#include <QVariant>

#include "QWhatsThisClickedEvent_shell.h"
#include <iostream>
#include <qevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QWhatsThisClickedEvent_QtDShell::QWhatsThisClickedEvent_QtDShell(void *d_ptr, const QString&  href0)
    : QWhatsThisClickedEvent(href0),
      QtdObjectLink(d_ptr)
{
}

QWhatsThisClickedEvent_QtDShell::~QWhatsThisClickedEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QWhatsThisClickedEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QWhatsThisClickedEvent::QWhatsThisClickedEvent(const QString & href)
QTD_EXTERN QTD_EXPORT void* qtd_QWhatsThisClickedEvent_QWhatsThisClickedEvent_string
(void *d_ptr,
 DArray href0)
{
    QString __qt_href0 = QString::fromUtf8((const char *)href0.ptr, href0.length);
    QWhatsThisClickedEvent_QtDShell *__qt_this = new QWhatsThisClickedEvent_QtDShell(d_ptr, (const QString& )__qt_href0);
    return (void *) __qt_this;

}

// QWhatsThisClickedEvent::href() const
QTD_EXTERN QTD_EXPORT void qtd_QWhatsThisClickedEvent_href_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QWhatsThisClickedEvent_QtDShell *__qt_this = (QWhatsThisClickedEvent_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->href();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// ---externC---end
// Field accessors


