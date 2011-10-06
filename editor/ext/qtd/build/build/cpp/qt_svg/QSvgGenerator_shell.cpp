#include <QVariant>
#include <qiodevice.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>

#include "QSvgGenerator_shell.h"
#include <iostream>
#include <qsvggenerator.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"
#include "ArrayOps_qt_svg.h"

QTD_EXTERN QTD_EXPORT QPaintDevice* qtd_QSvgGenerator_cast_to_QPaintDevice(QSvgGenerator *ptr)
{
    return dynamic_cast<QPaintDevice*>(ptr);
}

QTD_EXTERN QTD_EXPORT void qtd_QSvgGenerator_delete(void* nativeId)
{
    delete (QSvgGenerator_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QSvgGenerator_destroy(void* nativeId)
{
    call_destructor((QSvgGenerator_QtDShell*)nativeId);
}

QSvgGenerator_QtDShell::QSvgGenerator_QtDShell(void *d_ptr)
    : QSvgGenerator(),
      QtdObjectLink(d_ptr)
{
}

QSvgGenerator_QtDShell::~QSvgGenerator_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QSvgGenerator_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QSvgGenerator*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(SVG, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QSvgGenerator_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(this->dId);
}

QTD_FUNC_DECL(SVG, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int metric0))
int  QSvgGenerator_QtDShell::metric(QPaintDevice::PaintDeviceMetric  metric0) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(this->dId, (QPaintDevice::PaintDeviceMetric )metric0);
}

QTD_FUNC_DECL(SVG, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QSvgGenerator_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(this->dId);
}

QTD_EXTERN QTD_EXPORT void qtd_QSvgGenerator_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
int  QSvgGenerator_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QPaintDevice::devType();
    } else {
        return devType();
    }
}

int  QSvgGenerator_QtDShell::__override_metric(int  metric0, bool static_call) const
{
    if (static_call) {
        return QSvgGenerator::metric((QPaintDevice::PaintDeviceMetric )metric0);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )metric0);
    }
}

QPaintEngine*  QSvgGenerator_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QSvgGenerator::paintEngine();
    } else {
        return paintEngine();
    }
}

// ---externC---
// QSvgGenerator::QSvgGenerator()
QTD_EXTERN QTD_EXPORT void* qtd_QSvgGenerator_QSvgGenerator
(void *d_ptr)
{
    QSvgGenerator_QtDShell *__qt_this = new QSvgGenerator_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QSvgGenerator::colorCount() const
QTD_EXTERN QTD_EXPORT int qtd_QSvgGenerator_colorCount_const
(void* __this_nativeId)
{
    QSvgGenerator_QtDShell *__qt_this = (QSvgGenerator_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::colorCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSvgGenerator::depth() const
QTD_EXTERN QTD_EXPORT int qtd_QSvgGenerator_depth_const
(void* __this_nativeId)
{
    QSvgGenerator_QtDShell *__qt_this = (QSvgGenerator_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::depth();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSvgGenerator::description() const
QTD_EXTERN QTD_EXPORT void qtd_QSvgGenerator_description_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSvgGenerator_QtDShell *__qt_this = (QSvgGenerator_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->description();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QSvgGenerator::fileName() const
QTD_EXTERN QTD_EXPORT void qtd_QSvgGenerator_fileName_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSvgGenerator_QtDShell *__qt_this = (QSvgGenerator_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->fileName();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QSvgGenerator::height() const
QTD_EXTERN QTD_EXPORT int qtd_QSvgGenerator_height_const
(void* __this_nativeId)
{
    QSvgGenerator_QtDShell *__qt_this = (QSvgGenerator_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::height();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSvgGenerator::heightMM() const
QTD_EXTERN QTD_EXPORT int qtd_QSvgGenerator_heightMM_const
(void* __this_nativeId)
{
    QSvgGenerator_QtDShell *__qt_this = (QSvgGenerator_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::heightMM();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSvgGenerator::logicalDpiX() const
QTD_EXTERN QTD_EXPORT int qtd_QSvgGenerator_logicalDpiX_const
(void* __this_nativeId)
{
    QSvgGenerator_QtDShell *__qt_this = (QSvgGenerator_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::logicalDpiX();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSvgGenerator::logicalDpiY() const
QTD_EXTERN QTD_EXPORT int qtd_QSvgGenerator_logicalDpiY_const
(void* __this_nativeId)
{
    QSvgGenerator_QtDShell *__qt_this = (QSvgGenerator_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::logicalDpiY();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSvgGenerator::numColors() const
QTD_EXTERN QTD_EXPORT int qtd_QSvgGenerator_numColors_const
(void* __this_nativeId)
{
    QSvgGenerator_QtDShell *__qt_this = (QSvgGenerator_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::numColors();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSvgGenerator::outputDevice() const
QTD_EXTERN QTD_EXPORT void* qtd_QSvgGenerator_outputDevice_const
(void* __this_nativeId)
{
    QSvgGenerator_QtDShell *__qt_this = (QSvgGenerator_QtDShell *) __this_nativeId;
    QIODevice*  __qt_return_value = __qt_this->outputDevice();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QSvgGenerator::paintingActive() const
QTD_EXTERN QTD_EXPORT bool qtd_QSvgGenerator_paintingActive_const
(void* __this_nativeId)
{
    QSvgGenerator_QtDShell *__qt_this = (QSvgGenerator_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QPaintDevice::paintingActive();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSvgGenerator::physicalDpiX() const
QTD_EXTERN QTD_EXPORT int qtd_QSvgGenerator_physicalDpiX_const
(void* __this_nativeId)
{
    QSvgGenerator_QtDShell *__qt_this = (QSvgGenerator_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::physicalDpiX();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSvgGenerator::physicalDpiY() const
QTD_EXTERN QTD_EXPORT int qtd_QSvgGenerator_physicalDpiY_const
(void* __this_nativeId)
{
    QSvgGenerator_QtDShell *__qt_this = (QSvgGenerator_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::physicalDpiY();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSvgGenerator::resolution() const
QTD_EXTERN QTD_EXPORT int qtd_QSvgGenerator_resolution_const
(void* __this_nativeId)
{
    QSvgGenerator_QtDShell *__qt_this = (QSvgGenerator_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->resolution();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSvgGenerator::setDescription(const QString & description)
QTD_EXTERN QTD_EXPORT void qtd_QSvgGenerator_setDescription_string
(void* __this_nativeId,
 DArray description0)
{
    QString __qt_description0 = QString::fromUtf8((const char *)description0.ptr, description0.length);
    QSvgGenerator_QtDShell *__qt_this = (QSvgGenerator_QtDShell *) __this_nativeId;
    __qt_this->setDescription((const QString& )__qt_description0);

}

// QSvgGenerator::setFileName(const QString & fileName)
QTD_EXTERN QTD_EXPORT void qtd_QSvgGenerator_setFileName_string
(void* __this_nativeId,
 DArray fileName0)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    QSvgGenerator_QtDShell *__qt_this = (QSvgGenerator_QtDShell *) __this_nativeId;
    __qt_this->setFileName((const QString& )__qt_fileName0);

}

// QSvgGenerator::setOutputDevice(QIODevice * outputDevice)
QTD_EXTERN QTD_EXPORT void qtd_QSvgGenerator_setOutputDevice_QIODevice
(void* __this_nativeId,
 void* outputDevice0)
{
    QIODevice*  __qt_outputDevice0 = (QIODevice* ) outputDevice0;
    QSvgGenerator_QtDShell *__qt_this = (QSvgGenerator_QtDShell *) __this_nativeId;
    __qt_this->setOutputDevice((QIODevice* )__qt_outputDevice0);

}

// QSvgGenerator::setResolution(int dpi)
QTD_EXTERN QTD_EXPORT void qtd_QSvgGenerator_setResolution_int
(void* __this_nativeId,
 int dpi0)
{
    QSvgGenerator_QtDShell *__qt_this = (QSvgGenerator_QtDShell *) __this_nativeId;
    __qt_this->setResolution((int )dpi0);

}

// QSvgGenerator::setSize(const QSize & size)
QTD_EXTERN QTD_EXPORT void qtd_QSvgGenerator_setSize_QSize
(void* __this_nativeId,
 QSize size0)
{
    QSvgGenerator_QtDShell *__qt_this = (QSvgGenerator_QtDShell *) __this_nativeId;
    __qt_this->setSize((const QSize& )size0);

}

// QSvgGenerator::setTitle(const QString & title)
QTD_EXTERN QTD_EXPORT void qtd_QSvgGenerator_setTitle_string
(void* __this_nativeId,
 DArray title0)
{
    QString __qt_title0 = QString::fromUtf8((const char *)title0.ptr, title0.length);
    QSvgGenerator_QtDShell *__qt_this = (QSvgGenerator_QtDShell *) __this_nativeId;
    __qt_this->setTitle((const QString& )__qt_title0);

}

// QSvgGenerator::setViewBox(const QRect & viewBox)
QTD_EXTERN QTD_EXPORT void qtd_QSvgGenerator_setViewBox_QRect
(void* __this_nativeId,
 QRect viewBox0)
{
    QSvgGenerator_QtDShell *__qt_this = (QSvgGenerator_QtDShell *) __this_nativeId;
    __qt_this->setViewBox((const QRect& )viewBox0);

}

// QSvgGenerator::setViewBox(const QRectF & viewBox)
QTD_EXTERN QTD_EXPORT void qtd_QSvgGenerator_setViewBox_QRectF
(void* __this_nativeId,
 QRectF viewBox0)
{
    QSvgGenerator_QtDShell *__qt_this = (QSvgGenerator_QtDShell *) __this_nativeId;
    __qt_this->setViewBox((const QRectF& )viewBox0);

}

// QSvgGenerator::size() const
QTD_EXTERN QTD_EXPORT void qtd_QSvgGenerator_size_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QSvgGenerator_QtDShell *__qt_this = (QSvgGenerator_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->size();

    *__d_return_value = __qt_return_value;

}

// QSvgGenerator::title() const
QTD_EXTERN QTD_EXPORT void qtd_QSvgGenerator_title_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QSvgGenerator_QtDShell *__qt_this = (QSvgGenerator_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->title();

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QSvgGenerator::viewBox() const
QTD_EXTERN QTD_EXPORT void qtd_QSvgGenerator_viewBox_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QSvgGenerator_QtDShell *__qt_this = (QSvgGenerator_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->viewBox();

    *__d_return_value = __qt_return_value;

}

// QSvgGenerator::viewBoxF() const
QTD_EXTERN QTD_EXPORT void qtd_QSvgGenerator_viewBoxF_const
(void* __this_nativeId,
 QRectF * __d_return_value)
{
    QSvgGenerator_QtDShell *__qt_this = (QSvgGenerator_QtDShell *) __this_nativeId;
    QRectF  __qt_return_value = __qt_this->viewBoxF();

    *__d_return_value = __qt_return_value;

}

// QSvgGenerator::width() const
QTD_EXTERN QTD_EXPORT int qtd_QSvgGenerator_width_const
(void* __this_nativeId)
{
    QSvgGenerator_QtDShell *__qt_this = (QSvgGenerator_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::width();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSvgGenerator::widthMM() const
QTD_EXTERN QTD_EXPORT int qtd_QSvgGenerator_widthMM_const
(void* __this_nativeId)
{
    QSvgGenerator_QtDShell *__qt_this = (QSvgGenerator_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::widthMM();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSvgGenerator::devType() const
QTD_EXTERN QTD_EXPORT int qtd_QSvgGenerator_devType_const
(void* __this_nativeId)
{
    QSvgGenerator_QtDShell *__qt_this = (QSvgGenerator_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QSvgGenerator*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_devType(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSvgGenerator::metric(QPaintDevice::PaintDeviceMetric metric) const
QTD_EXTERN QTD_EXPORT int qtd_QSvgGenerator_metric_PaintDeviceMetric_const
(void* __this_nativeId,
 int metric0)
{
    QPaintDevice::PaintDeviceMetric __qt_metric0 = (QPaintDevice::PaintDeviceMetric) metric0;
    QSvgGenerator_QtDShell *__qt_this = (QSvgGenerator_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QSvgGenerator*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_metric((QPaintDevice::PaintDeviceMetric )__qt_metric0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QSvgGenerator::paintEngine() const
QTD_EXTERN QTD_EXPORT void* qtd_QSvgGenerator_paintEngine_const
(void* __this_nativeId)
{
    QSvgGenerator_QtDShell *__qt_this = (QSvgGenerator_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QSvgGenerator*)__this_nativeId) != NULL;
    QPaintEngine*  __qt_return_value = __qt_this->__override_paintEngine(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


