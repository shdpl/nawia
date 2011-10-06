#include <QVariant>
#include <qpaintdevice.h>
#include <qpaintengine.h>

#include "QPaintDevice_shell.h"
#include <iostream>
#include <qpaintdevice.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT QPaintDevice* qtd_QPaintDevice_cast_to_QPaintDevice(QPaintDevice *ptr)
{
    return dynamic_cast<QPaintDevice*>(ptr);
}

QTD_EXTERN QTD_EXPORT void qtd_QPaintDevice_delete(void* nativeId)
{
    delete (QPaintDevice_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QPaintDevice_destroy(void* nativeId)
{
    call_destructor((QPaintDevice_QtDShell*)nativeId);
}

QPaintDevice_QtDShell::QPaintDevice_QtDShell(void *d_ptr)
    : QPaintDevice(),
      QtdObjectLink(d_ptr)
{
}

QPaintDevice_QtDShell::~QPaintDevice_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QPaintDevice_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QPaintDevice*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
QTD_FUNC(GUI, QPaintDevice_devType_const_dispatch)
int  QPaintDevice_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int metric0))
QTD_FUNC(GUI, QPaintDevice_metric_PaintDeviceMetric_const_dispatch)
int  QPaintDevice_QtDShell::metric(QPaintDevice::PaintDeviceMetric  metric0) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(this->dId, (QPaintDevice::PaintDeviceMetric )metric0);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QTD_FUNC(GUI, QPaintDevice_paintEngine_const_dispatch)
QPaintEngine*  QPaintDevice_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(this->dId);
}

QTD_EXTERN QTD_EXPORT void qtd_QPaintDevice_initCallBacks(VoidFunc *virts) {
    qtd_QPaintDevice_devType_const_dispatch = (qtd_QPaintDevice_devType_const_dispatch_t) virts[0];
    qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch = (qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch_t) virts[1];
    qtd_QPaintDevice_paintEngine_const_dispatch = (qtd_QPaintDevice_paintEngine_const_dispatch_t) virts[2];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
int  QPaintDevice_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QPaintDevice::devType();
    } else {
        return devType();
    }
}

int  QPaintDevice_QtDShell::__override_metric(int  metric0, bool static_call) const
{
    if (static_call) {
        return QPaintDevice::metric((QPaintDevice::PaintDeviceMetric )metric0);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )metric0);
    }
}

QPaintEngine*  QPaintDevice_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return 0;
    } else {
        return paintEngine();
    }
}

// ---externC---
// QPaintDevice::QPaintDevice()
QTD_EXTERN QTD_EXPORT void* qtd_QPaintDevice_QPaintDevice
(void *d_ptr)
{
    QPaintDevice_QtDShell *__qt_this = new QPaintDevice_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QPaintDevice::colorCount() const
QTD_EXTERN QTD_EXPORT int qtd_QPaintDevice_colorCount_const
(void* __this_nativeId)
{
    QPaintDevice_QtDShell *__qt_this = (QPaintDevice_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->colorCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPaintDevice::depth() const
QTD_EXTERN QTD_EXPORT int qtd_QPaintDevice_depth_const
(void* __this_nativeId)
{
    QPaintDevice_QtDShell *__qt_this = (QPaintDevice_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->depth();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPaintDevice::height() const
QTD_EXTERN QTD_EXPORT int qtd_QPaintDevice_height_const
(void* __this_nativeId)
{
    QPaintDevice_QtDShell *__qt_this = (QPaintDevice_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->height();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPaintDevice::heightMM() const
QTD_EXTERN QTD_EXPORT int qtd_QPaintDevice_heightMM_const
(void* __this_nativeId)
{
    QPaintDevice_QtDShell *__qt_this = (QPaintDevice_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->heightMM();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPaintDevice::logicalDpiX() const
QTD_EXTERN QTD_EXPORT int qtd_QPaintDevice_logicalDpiX_const
(void* __this_nativeId)
{
    QPaintDevice_QtDShell *__qt_this = (QPaintDevice_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->logicalDpiX();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPaintDevice::logicalDpiY() const
QTD_EXTERN QTD_EXPORT int qtd_QPaintDevice_logicalDpiY_const
(void* __this_nativeId)
{
    QPaintDevice_QtDShell *__qt_this = (QPaintDevice_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->logicalDpiY();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPaintDevice::numColors() const
QTD_EXTERN QTD_EXPORT int qtd_QPaintDevice_numColors_const
(void* __this_nativeId)
{
    QPaintDevice_QtDShell *__qt_this = (QPaintDevice_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->numColors();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPaintDevice::paintingActive() const
QTD_EXTERN QTD_EXPORT bool qtd_QPaintDevice_paintingActive_const
(void* __this_nativeId)
{
    QPaintDevice_QtDShell *__qt_this = (QPaintDevice_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->paintingActive();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPaintDevice::physicalDpiX() const
QTD_EXTERN QTD_EXPORT int qtd_QPaintDevice_physicalDpiX_const
(void* __this_nativeId)
{
    QPaintDevice_QtDShell *__qt_this = (QPaintDevice_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->physicalDpiX();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPaintDevice::physicalDpiY() const
QTD_EXTERN QTD_EXPORT int qtd_QPaintDevice_physicalDpiY_const
(void* __this_nativeId)
{
    QPaintDevice_QtDShell *__qt_this = (QPaintDevice_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->physicalDpiY();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPaintDevice::width() const
QTD_EXTERN QTD_EXPORT int qtd_QPaintDevice_width_const
(void* __this_nativeId)
{
    QPaintDevice_QtDShell *__qt_this = (QPaintDevice_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->width();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPaintDevice::widthMM() const
QTD_EXTERN QTD_EXPORT int qtd_QPaintDevice_widthMM_const
(void* __this_nativeId)
{
    QPaintDevice_QtDShell *__qt_this = (QPaintDevice_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->widthMM();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPaintDevice::devType() const
QTD_EXTERN QTD_EXPORT int qtd_QPaintDevice_devType_const
(void* __this_nativeId)
{
    QPaintDevice_QtDShell *__qt_this = (QPaintDevice_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPaintDevice*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_devType(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPaintDevice::metric(QPaintDevice::PaintDeviceMetric metric) const
QTD_EXTERN QTD_EXPORT int qtd_QPaintDevice_metric_PaintDeviceMetric_const
(void* __this_nativeId,
 int metric0)
{
    QPaintDevice::PaintDeviceMetric __qt_metric0 = (QPaintDevice::PaintDeviceMetric) metric0;
    QPaintDevice_QtDShell *__qt_this = (QPaintDevice_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPaintDevice*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_metric((QPaintDevice::PaintDeviceMetric )__qt_metric0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPaintDevice::paintEngine() const
QTD_EXTERN QTD_EXPORT void* qtd_QPaintDevice_paintEngine_const
(void* __this_nativeId)
{
    QPaintDevice_QtDShell *__qt_this = (QPaintDevice_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPaintDevice*)__this_nativeId) != NULL;
    QPaintEngine*  __qt_return_value = __qt_this->__override_paintEngine(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


