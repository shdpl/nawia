#include <QVariant>
#include <qbytearray.h>

#include "QDynamicPropertyChangeEvent_shell.h"
#include <iostream>
#include <qcoreevent.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_core.h"

QDynamicPropertyChangeEvent_QtDShell::QDynamicPropertyChangeEvent_QtDShell(void *d_ptr, const QByteArray&  name0)
    : QDynamicPropertyChangeEvent(name0),
      QtdObjectLink(d_ptr)
{
}

QDynamicPropertyChangeEvent_QtDShell::~QDynamicPropertyChangeEvent_QtDShell() {
}

// Virtual overrides
QTD_EXTERN QTD_EXPORT void qtd_QDynamicPropertyChangeEvent_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
// ---externC---
// QDynamicPropertyChangeEvent::QDynamicPropertyChangeEvent(const QByteArray & name)
QTD_EXTERN QTD_EXPORT void* qtd_QDynamicPropertyChangeEvent_QDynamicPropertyChangeEvent_QByteArray
(void *d_ptr,
 void* name0)
{
    const QByteArray&  __qt_name0 = (const QByteArray& ) *(QByteArray *)name0;
    QDynamicPropertyChangeEvent_QtDShell *__qt_this = new QDynamicPropertyChangeEvent_QtDShell(d_ptr, (const QByteArray& )__qt_name0);
    return (void *) __qt_this;

}

// QDynamicPropertyChangeEvent::propertyName() const
QTD_EXTERN QTD_EXPORT void* qtd_QDynamicPropertyChangeEvent_propertyName_const
(void* __this_nativeId)
{
    QDynamicPropertyChangeEvent_QtDShell *__qt_this = (QDynamicPropertyChangeEvent_QtDShell *) __this_nativeId;
    QByteArray  __qt_return_value = __qt_this->propertyName();

    void* __d_return_value = (void*) new QByteArray(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors


