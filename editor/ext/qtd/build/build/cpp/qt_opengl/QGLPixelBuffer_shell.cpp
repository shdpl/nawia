#include <QImage>
#include <QVariant>
#include <qgl.h>
#include <qglpixelbuffer.h>
#include <qimage.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpixmap.h>

#include "QGLPixelBuffer_shell.h"
#include <iostream>
#include <qglpixelbuffer.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_opengl.h"

QTD_EXTERN QTD_EXPORT QPaintDevice* qtd_QGLPixelBuffer_cast_to_QPaintDevice(QGLPixelBuffer *ptr)
{
    return dynamic_cast<QPaintDevice*>(ptr);
}

QTD_EXTERN QTD_EXPORT void qtd_QGLPixelBuffer_delete(void* nativeId)
{
    delete (QGLPixelBuffer_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QGLPixelBuffer_destroy(void* nativeId)
{
    call_destructor((QGLPixelBuffer_QtDShell*)nativeId);
}

QGLPixelBuffer_QtDShell::QGLPixelBuffer_QtDShell(void *d_ptr, const QSize&  size0, const QGLFormat&  format1, QGLWidget*  shareWidget2)
    : QGLPixelBuffer(size0, format1, shareWidget2),
      QtdObjectLink(d_ptr)
{
}

QGLPixelBuffer_QtDShell::QGLPixelBuffer_QtDShell(void *d_ptr, int  width0, int  height1, const QGLFormat&  format2, QGLWidget*  shareWidget3)
    : QGLPixelBuffer(width0, height1, format2, shareWidget3),
      QtdObjectLink(d_ptr)
{
}

QGLPixelBuffer_QtDShell::~QGLPixelBuffer_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QGLPixelBuffer_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QGLPixelBuffer*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(OPENGL, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QGLPixelBuffer_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(this->dId);
}

QTD_FUNC_DECL(OPENGL, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int metric0))
int  QGLPixelBuffer_QtDShell::metric(QPaintDevice::PaintDeviceMetric  metric0) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(this->dId, (QPaintDevice::PaintDeviceMetric )metric0);
}

QTD_FUNC_DECL(OPENGL, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QGLPixelBuffer_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(this->dId);
}

QTD_EXTERN QTD_EXPORT void qtd_QGLPixelBuffer_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
int  QGLPixelBuffer_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QGLPixelBuffer::devType();
    } else {
        return devType();
    }
}

int  QGLPixelBuffer_QtDShell::__override_metric(int  metric0, bool static_call) const
{
    if (static_call) {
        return QGLPixelBuffer::metric((QPaintDevice::PaintDeviceMetric )metric0);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )metric0);
    }
}

QPaintEngine*  QGLPixelBuffer_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QGLPixelBuffer::paintEngine();
    } else {
        return paintEngine();
    }
}

// ---externC---
// QGLPixelBuffer::QGLPixelBuffer(const QSize & size, const QGLFormat & format, QGLWidget * shareWidget)
QTD_EXTERN QTD_EXPORT void* qtd_QGLPixelBuffer_QGLPixelBuffer_QSize_QGLFormat_QGLWidget
(void *d_ptr,
 QSize size0,
 void* format1,
 void* shareWidget2)
{
    const QGLFormat&  __qt_format1 = (const QGLFormat& ) *(QGLFormat *)format1;
    QGLWidget*  __qt_shareWidget2 = (QGLWidget* ) shareWidget2;
    QGLPixelBuffer_QtDShell *__qt_this = new QGLPixelBuffer_QtDShell(d_ptr, (const QSize& )size0, (const QGLFormat& )__qt_format1, (QGLWidget* )__qt_shareWidget2);
    return (void *) __qt_this;

}

// QGLPixelBuffer::QGLPixelBuffer(int width, int height, const QGLFormat & format, QGLWidget * shareWidget)
QTD_EXTERN QTD_EXPORT void* qtd_QGLPixelBuffer_QGLPixelBuffer_int_int_QGLFormat_QGLWidget
(void *d_ptr,
 int width0,
 int height1,
 void* format2,
 void* shareWidget3)
{
    const QGLFormat&  __qt_format2 = (const QGLFormat& ) *(QGLFormat *)format2;
    QGLWidget*  __qt_shareWidget3 = (QGLWidget* ) shareWidget3;
    QGLPixelBuffer_QtDShell *__qt_this = new QGLPixelBuffer_QtDShell(d_ptr, (int )width0, (int )height1, (const QGLFormat& )__qt_format2, (QGLWidget* )__qt_shareWidget3);
    return (void *) __qt_this;

}

// QGLPixelBuffer::bindTexture(const QImage & image, GLenum target)
QTD_EXTERN QTD_EXPORT GLuint qtd_QGLPixelBuffer_bindTexture_QImage_int
(void* __this_nativeId,
 void* image0,
 GLenum target1)
{
    const QImage&  __qt_image0 = (const QImage& ) *(QImage *)image0;
    QGLPixelBuffer_QtDShell *__qt_this = (QGLPixelBuffer_QtDShell *) __this_nativeId;
    GLuint  __qt_return_value = __qt_this->bindTexture((const QImage& )__qt_image0, (GLenum )target1);

    GLuint __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLPixelBuffer::bindTexture(const QPixmap & pixmap, GLenum target)
QTD_EXTERN QTD_EXPORT GLuint qtd_QGLPixelBuffer_bindTexture_QPixmap_int
(void* __this_nativeId,
 void* pixmap0,
 GLenum target1)
{
    const QPixmap&  __qt_pixmap0 = (const QPixmap& ) *(QPixmap *)pixmap0;
    QGLPixelBuffer_QtDShell *__qt_this = (QGLPixelBuffer_QtDShell *) __this_nativeId;
    GLuint  __qt_return_value = __qt_this->bindTexture((const QPixmap& )__qt_pixmap0, (GLenum )target1);

    GLuint __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLPixelBuffer::bindTexture(const QString & fileName)
QTD_EXTERN QTD_EXPORT GLuint qtd_QGLPixelBuffer_bindTexture_string
(void* __this_nativeId,
 DArray fileName0)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    QGLPixelBuffer_QtDShell *__qt_this = (QGLPixelBuffer_QtDShell *) __this_nativeId;
    GLuint  __qt_return_value = __qt_this->bindTexture((const QString& )__qt_fileName0);

    GLuint __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLPixelBuffer::bindToDynamicTexture(GLuint texture)
QTD_EXTERN QTD_EXPORT bool qtd_QGLPixelBuffer_bindToDynamicTexture_int
(void* __this_nativeId,
 GLuint texture0)
{
    QGLPixelBuffer_QtDShell *__qt_this = (QGLPixelBuffer_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->bindToDynamicTexture((GLuint )texture0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLPixelBuffer::colorCount() const
QTD_EXTERN QTD_EXPORT int qtd_QGLPixelBuffer_colorCount_const
(void* __this_nativeId)
{
    QGLPixelBuffer_QtDShell *__qt_this = (QGLPixelBuffer_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::colorCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLPixelBuffer::deleteTexture(GLuint texture_id)
QTD_EXTERN QTD_EXPORT void qtd_QGLPixelBuffer_deleteTexture_int
(void* __this_nativeId,
 GLuint texture_id0)
{
    QGLPixelBuffer_QtDShell *__qt_this = (QGLPixelBuffer_QtDShell *) __this_nativeId;
    __qt_this->deleteTexture((GLuint )texture_id0);

}

// QGLPixelBuffer::depth() const
QTD_EXTERN QTD_EXPORT int qtd_QGLPixelBuffer_depth_const
(void* __this_nativeId)
{
    QGLPixelBuffer_QtDShell *__qt_this = (QGLPixelBuffer_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::depth();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLPixelBuffer::doneCurrent()
QTD_EXTERN QTD_EXPORT bool qtd_QGLPixelBuffer_doneCurrent
(void* __this_nativeId)
{
    QGLPixelBuffer_QtDShell *__qt_this = (QGLPixelBuffer_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->doneCurrent();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLPixelBuffer::drawTexture(const QPointF & point, GLuint textureId, GLenum textureTarget)
QTD_EXTERN QTD_EXPORT void qtd_QGLPixelBuffer_drawTexture_QPointF_int_int
(void* __this_nativeId,
 QPointF point0,
 GLuint textureId1,
 GLenum textureTarget2)
{
    QGLPixelBuffer_QtDShell *__qt_this = (QGLPixelBuffer_QtDShell *) __this_nativeId;
    __qt_this->drawTexture((const QPointF& )point0, (GLuint )textureId1, (GLenum )textureTarget2);

}

// QGLPixelBuffer::drawTexture(const QRectF & target, GLuint textureId, GLenum textureTarget)
QTD_EXTERN QTD_EXPORT void qtd_QGLPixelBuffer_drawTexture_QRectF_int_int
(void* __this_nativeId,
 QRectF target0,
 GLuint textureId1,
 GLenum textureTarget2)
{
    QGLPixelBuffer_QtDShell *__qt_this = (QGLPixelBuffer_QtDShell *) __this_nativeId;
    __qt_this->drawTexture((const QRectF& )target0, (GLuint )textureId1, (GLenum )textureTarget2);

}

// QGLPixelBuffer::format() const
QTD_EXTERN QTD_EXPORT void* qtd_QGLPixelBuffer_format_const
(void* __this_nativeId)
{
    QGLPixelBuffer_QtDShell *__qt_this = (QGLPixelBuffer_QtDShell *) __this_nativeId;
    QGLFormat  __qt_return_value = __qt_this->format();

    void* __d_return_value = (void*) new QGLFormat(__qt_return_value);

    return __d_return_value;
}

// QGLPixelBuffer::generateDynamicTexture() const
QTD_EXTERN QTD_EXPORT GLuint qtd_QGLPixelBuffer_generateDynamicTexture_const
(void* __this_nativeId)
{
    QGLPixelBuffer_QtDShell *__qt_this = (QGLPixelBuffer_QtDShell *) __this_nativeId;
    GLuint  __qt_return_value = __qt_this->generateDynamicTexture();

    GLuint __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLPixelBuffer::handle() const
QTD_EXTERN QTD_EXPORT Qt::HANDLE qtd_QGLPixelBuffer_handle_const
(void* __this_nativeId)
{
    QGLPixelBuffer_QtDShell *__qt_this = (QGLPixelBuffer_QtDShell *) __this_nativeId;
    Qt::HANDLE  __qt_return_value = __qt_this->handle();

    Qt::HANDLE __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLPixelBuffer::height() const
QTD_EXTERN QTD_EXPORT int qtd_QGLPixelBuffer_height_const
(void* __this_nativeId)
{
    QGLPixelBuffer_QtDShell *__qt_this = (QGLPixelBuffer_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::height();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLPixelBuffer::heightMM() const
QTD_EXTERN QTD_EXPORT int qtd_QGLPixelBuffer_heightMM_const
(void* __this_nativeId)
{
    QGLPixelBuffer_QtDShell *__qt_this = (QGLPixelBuffer_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::heightMM();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLPixelBuffer::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QGLPixelBuffer_isValid_const
(void* __this_nativeId)
{
    QGLPixelBuffer_QtDShell *__qt_this = (QGLPixelBuffer_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLPixelBuffer::logicalDpiX() const
QTD_EXTERN QTD_EXPORT int qtd_QGLPixelBuffer_logicalDpiX_const
(void* __this_nativeId)
{
    QGLPixelBuffer_QtDShell *__qt_this = (QGLPixelBuffer_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::logicalDpiX();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLPixelBuffer::logicalDpiY() const
QTD_EXTERN QTD_EXPORT int qtd_QGLPixelBuffer_logicalDpiY_const
(void* __this_nativeId)
{
    QGLPixelBuffer_QtDShell *__qt_this = (QGLPixelBuffer_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::logicalDpiY();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLPixelBuffer::makeCurrent()
QTD_EXTERN QTD_EXPORT bool qtd_QGLPixelBuffer_makeCurrent
(void* __this_nativeId)
{
    QGLPixelBuffer_QtDShell *__qt_this = (QGLPixelBuffer_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->makeCurrent();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLPixelBuffer::numColors() const
QTD_EXTERN QTD_EXPORT int qtd_QGLPixelBuffer_numColors_const
(void* __this_nativeId)
{
    QGLPixelBuffer_QtDShell *__qt_this = (QGLPixelBuffer_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::numColors();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLPixelBuffer::paintingActive() const
QTD_EXTERN QTD_EXPORT bool qtd_QGLPixelBuffer_paintingActive_const
(void* __this_nativeId)
{
    QGLPixelBuffer_QtDShell *__qt_this = (QGLPixelBuffer_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QPaintDevice::paintingActive();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLPixelBuffer::physicalDpiX() const
QTD_EXTERN QTD_EXPORT int qtd_QGLPixelBuffer_physicalDpiX_const
(void* __this_nativeId)
{
    QGLPixelBuffer_QtDShell *__qt_this = (QGLPixelBuffer_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::physicalDpiX();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLPixelBuffer::physicalDpiY() const
QTD_EXTERN QTD_EXPORT int qtd_QGLPixelBuffer_physicalDpiY_const
(void* __this_nativeId)
{
    QGLPixelBuffer_QtDShell *__qt_this = (QGLPixelBuffer_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::physicalDpiY();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLPixelBuffer::releaseFromDynamicTexture()
QTD_EXTERN QTD_EXPORT void qtd_QGLPixelBuffer_releaseFromDynamicTexture
(void* __this_nativeId)
{
    QGLPixelBuffer_QtDShell *__qt_this = (QGLPixelBuffer_QtDShell *) __this_nativeId;
    __qt_this->releaseFromDynamicTexture();

}

// QGLPixelBuffer::size() const
QTD_EXTERN QTD_EXPORT void qtd_QGLPixelBuffer_size_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QGLPixelBuffer_QtDShell *__qt_this = (QGLPixelBuffer_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->size();

    *__d_return_value = __qt_return_value;

}

// QGLPixelBuffer::toImage() const
QTD_EXTERN QTD_EXPORT void* qtd_QGLPixelBuffer_toImage_const
(void* __this_nativeId)
{
    QGLPixelBuffer_QtDShell *__qt_this = (QGLPixelBuffer_QtDShell *) __this_nativeId;
    QImage  __qt_return_value = __qt_this->toImage();

    void* __d_return_value = (void*) new QImage(__qt_return_value);

    return __d_return_value;
}

// QGLPixelBuffer::updateDynamicTexture(GLuint texture_id) const
QTD_EXTERN QTD_EXPORT void qtd_QGLPixelBuffer_updateDynamicTexture_int_const
(void* __this_nativeId,
 GLuint texture_id0)
{
    QGLPixelBuffer_QtDShell *__qt_this = (QGLPixelBuffer_QtDShell *) __this_nativeId;
    __qt_this->updateDynamicTexture((GLuint )texture_id0);

}

// QGLPixelBuffer::width() const
QTD_EXTERN QTD_EXPORT int qtd_QGLPixelBuffer_width_const
(void* __this_nativeId)
{
    QGLPixelBuffer_QtDShell *__qt_this = (QGLPixelBuffer_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::width();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLPixelBuffer::widthMM() const
QTD_EXTERN QTD_EXPORT int qtd_QGLPixelBuffer_widthMM_const
(void* __this_nativeId)
{
    QGLPixelBuffer_QtDShell *__qt_this = (QGLPixelBuffer_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::widthMM();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLPixelBuffer::devType() const
QTD_EXTERN QTD_EXPORT int qtd_QGLPixelBuffer_devType_const
(void* __this_nativeId)
{
    QGLPixelBuffer_QtDShell *__qt_this = (QGLPixelBuffer_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGLPixelBuffer*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_devType(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLPixelBuffer::metric(QPaintDevice::PaintDeviceMetric metric) const
QTD_EXTERN QTD_EXPORT int qtd_QGLPixelBuffer_metric_PaintDeviceMetric_const
(void* __this_nativeId,
 int metric0)
{
    QPaintDevice::PaintDeviceMetric __qt_metric0 = (QPaintDevice::PaintDeviceMetric) metric0;
    QGLPixelBuffer_QtDShell *__qt_this = (QGLPixelBuffer_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGLPixelBuffer*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_metric((QPaintDevice::PaintDeviceMetric )__qt_metric0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLPixelBuffer::paintEngine() const
QTD_EXTERN QTD_EXPORT void* qtd_QGLPixelBuffer_paintEngine_const
(void* __this_nativeId)
{
    QGLPixelBuffer_QtDShell *__qt_this = (QGLPixelBuffer_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGLPixelBuffer*)__this_nativeId) != NULL;
    QPaintEngine*  __qt_return_value = __qt_this->__override_paintEngine(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGLPixelBuffer::hasOpenGLPbuffers()
QTD_EXTERN QTD_EXPORT bool qtd_QGLPixelBuffer_hasOpenGLPbuffers
()
{
    bool  __qt_return_value = QGLPixelBuffer_QtDShell::hasOpenGLPbuffers();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


