#include <QVariant>
#include <qvariant.h>

#include "QPrintEngine_shell.h"
#include <iostream>
#include <qprintengine.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT void qtd_QPrintEngine_delete(void* nativeId)
{
    delete (QPrintEngine_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QPrintEngine_destroy(void* nativeId)
{
    call_destructor((QPrintEngine_QtDShell*)nativeId);
}

QPrintEngine_QtDShell::QPrintEngine_QtDShell(void *d_ptr)
    : QPrintEngine(),
      QtdObjectLink(d_ptr)
{
}

QPrintEngine_QtDShell::~QPrintEngine_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QPrintEngine_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QPrintEngine*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, bool, QPrintEngine_abort_dispatch, (void *dId))
QTD_FUNC(GUI, QPrintEngine_abort_dispatch)
bool  QPrintEngine_QtDShell::abort()
{
    return qtd_QPrintEngine_abort_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, int, QPrintEngine_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
QTD_FUNC(GUI, QPrintEngine_metric_PaintDeviceMetric_const_dispatch)
int  QPrintEngine_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPrintEngine_metric_PaintDeviceMetric_const_dispatch(this->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, bool, QPrintEngine_newPage_dispatch, (void *dId))
QTD_FUNC(GUI, QPrintEngine_newPage_dispatch)
bool  QPrintEngine_QtDShell::newPage()
{
    return qtd_QPrintEngine_newPage_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, int, QPrintEngine_printerState_const_dispatch, (void *dId))
QTD_FUNC(GUI, QPrintEngine_printerState_const_dispatch)
QPrinter::PrinterState  QPrintEngine_QtDShell::printerState() const
{
    return (QPrinter::PrinterState) qtd_QPrintEngine_printerState_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, void*, QPrintEngine_property_PrintEnginePropertyKey_const_dispatch, (void *dId, int key0))
QTD_FUNC(GUI, QPrintEngine_property_PrintEnginePropertyKey_const_dispatch)
QVariant  QPrintEngine_QtDShell::property(QPrintEngine::PrintEnginePropertyKey  key0) const
{
    QVariant *__qt_return_value = (QVariant*) qtd_QPrintEngine_property_PrintEnginePropertyKey_const_dispatch(this->dId, (QPrintEngine::PrintEnginePropertyKey )key0);
    return QVariant(*__qt_return_value);
}

QTD_FUNC_DECL(GUI, void, QPrintEngine_setProperty_PrintEnginePropertyKey_QVariant_dispatch, (void *dId, int key0, void* value1))
QTD_FUNC(GUI, QPrintEngine_setProperty_PrintEnginePropertyKey_QVariant_dispatch)
void QPrintEngine_QtDShell::setProperty(QPrintEngine::PrintEnginePropertyKey  key0, const QVariant&  value1)
{
    qtd_QPrintEngine_setProperty_PrintEnginePropertyKey_QVariant_dispatch(this->dId, (QPrintEngine::PrintEnginePropertyKey )key0, &(QVariant& )value1);
}

QTD_EXTERN QTD_EXPORT void qtd_QPrintEngine_initCallBacks(VoidFunc *virts) {
    qtd_QPrintEngine_abort_dispatch = (qtd_QPrintEngine_abort_dispatch_t) virts[0];
    qtd_QPrintEngine_metric_PaintDeviceMetric_const_dispatch = (qtd_QPrintEngine_metric_PaintDeviceMetric_const_dispatch_t) virts[1];
    qtd_QPrintEngine_newPage_dispatch = (qtd_QPrintEngine_newPage_dispatch_t) virts[2];
    qtd_QPrintEngine_printerState_const_dispatch = (qtd_QPrintEngine_printerState_const_dispatch_t) virts[3];
    qtd_QPrintEngine_property_PrintEnginePropertyKey_const_dispatch = (qtd_QPrintEngine_property_PrintEnginePropertyKey_const_dispatch_t) virts[4];
    qtd_QPrintEngine_setProperty_PrintEnginePropertyKey_QVariant_dispatch = (qtd_QPrintEngine_setProperty_PrintEnginePropertyKey_QVariant_dispatch_t) virts[5];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
bool  QPrintEngine_QtDShell::__override_abort(bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return abort();
    }
}

int  QPrintEngine_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

bool  QPrintEngine_QtDShell::__override_newPage(bool static_call)
{
    if (static_call) {
        return false;
    } else {
        return newPage();
    }
}

int  QPrintEngine_QtDShell::__override_printerState(bool static_call) const
{
    if (static_call) {
        return QPrinter::PrinterState(0);
    } else {
        return printerState();
    }
}

QVariant  QPrintEngine_QtDShell::__override_property(int  key0, bool static_call) const
{
    if (static_call) {
        return QVariant();
    } else {
        return property((QPrintEngine::PrintEnginePropertyKey )key0);
    }
}

void QPrintEngine_QtDShell::__override_setProperty(int  key0, const QVariant&  value1, bool static_call)
{
    if (static_call) {
        return;
    } else {
        setProperty((QPrintEngine::PrintEnginePropertyKey )key0, (const QVariant& )value1);
    }
}

// ---externC---
// QPrintEngine::()
QTD_EXTERN QTD_EXPORT void* qtd_QPrintEngine_QPrintEngine
(void *d_ptr)
{
    QPrintEngine_QtDShell *__qt_this = new QPrintEngine_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QPrintEngine::abort()
QTD_EXTERN QTD_EXPORT bool qtd_QPrintEngine_abort
(void* __this_nativeId)
{
    QPrintEngine_QtDShell *__qt_this = (QPrintEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPrintEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_abort(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrintEngine::metric(QPaintDevice::PaintDeviceMetric arg__1) const
QTD_EXTERN QTD_EXPORT int qtd_QPrintEngine_metric_PaintDeviceMetric_const
(void* __this_nativeId,
 int arg__1)
{
    QPaintDevice::PaintDeviceMetric __qt_arg__1 = (QPaintDevice::PaintDeviceMetric) arg__1;
    QPrintEngine_QtDShell *__qt_this = (QPrintEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPrintEngine*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_metric((QPaintDevice::PaintDeviceMetric )__qt_arg__1, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrintEngine::newPage()
QTD_EXTERN QTD_EXPORT bool qtd_QPrintEngine_newPage
(void* __this_nativeId)
{
    QPrintEngine_QtDShell *__qt_this = (QPrintEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPrintEngine*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_newPage(__do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrintEngine::printerState() const
QTD_EXTERN QTD_EXPORT int qtd_QPrintEngine_printerState_const
(void* __this_nativeId)
{
    QPrintEngine_QtDShell *__qt_this = (QPrintEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPrintEngine*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_printerState(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPrintEngine::property(QPrintEngine::PrintEnginePropertyKey key) const
QTD_EXTERN QTD_EXPORT void* qtd_QPrintEngine_property_PrintEnginePropertyKey_const
(void* __this_nativeId,
 int key0)
{
    QPrintEngine::PrintEnginePropertyKey __qt_key0 = (QPrintEngine::PrintEnginePropertyKey) key0;
    QPrintEngine_QtDShell *__qt_this = (QPrintEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPrintEngine*)__this_nativeId) != NULL;
    QVariant  __qt_return_value = __qt_this->__override_property((QPrintEngine::PrintEnginePropertyKey )__qt_key0, __do_static_call);

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QPrintEngine::setProperty(QPrintEngine::PrintEnginePropertyKey key, const QVariant & value)
QTD_EXTERN QTD_EXPORT void qtd_QPrintEngine_setProperty_PrintEnginePropertyKey_QVariant
(void* __this_nativeId,
 int key0,
 QVariant* value1)
{
    QPrintEngine::PrintEnginePropertyKey __qt_key0 = (QPrintEngine::PrintEnginePropertyKey) key0;
    QVariant __qt_value1 = value1 == NULL ? QVariant() : QVariant(*value1);
    QPrintEngine_QtDShell *__qt_this = (QPrintEngine_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPrintEngine*)__this_nativeId) != NULL;
    __qt_this->__override_setProperty((QPrintEngine::PrintEnginePropertyKey )__qt_key0, (const QVariant& )__qt_value1, __do_static_call);

}

// ---externC---end
// Field accessors


