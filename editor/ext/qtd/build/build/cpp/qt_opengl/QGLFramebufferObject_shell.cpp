#include <QVariant>
#include <qglframebufferobject.h>
#include <qimage.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>

#include "QGLFramebufferObject_shell.h"
#include <iostream>
#include <qglframebufferobject.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_opengl.h"

QTD_EXTERN QTD_EXPORT QPaintDevice* qtd_QGLFramebufferObject_cast_to_QPaintDevice(QGLFramebufferObject *ptr)
{
    return dynamic_cast<QPaintDevice*>(ptr);
}

QTD_EXTERN QTD_EXPORT void qtd_QGLFramebufferObject_delete(void* nativeId)
{
    delete (QGLFramebufferObject_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QGLFramebufferObject_destroy(void* nativeId)
{
    call_destructor((QGLFramebufferObject_QtDShell*)nativeId);
}

QGLFramebufferObject_QtDShell::QGLFramebufferObject_QtDShell(void *d_ptr, const QSize&  size0, GLenum  target1)
    : QGLFramebufferObject(size0, target1),
      QtdObjectLink(d_ptr)
{
}

QGLFramebufferObject_QtDShell::QGLFramebufferObject_QtDShell(void *d_ptr, const QSize&  size0, QGLFramebufferObject::Attachment  attachment1, GLenum  target2, GLenum  internal_format3)
    : QGLFramebufferObject(size0, attachment1, target2, internal_format3),
      QtdObjectLink(d_ptr)
{
}

QGLFramebufferObject_QtDShell::QGLFramebufferObject_QtDShell(void *d_ptr, int  width0, int  height1, GLenum  target2)
    : QGLFramebufferObject(width0, height1, target2),
      QtdObjectLink(d_ptr)
{
}

QGLFramebufferObject_QtDShell::QGLFramebufferObject_QtDShell(void *d_ptr, int  width0, int  height1, QGLFramebufferObject::Attachment  attachment2, GLenum  target3, GLenum  internal_format4)
    : QGLFramebufferObject(width0, height1, attachment2, target3, internal_format4),
      QtdObjectLink(d_ptr)
{
}

QGLFramebufferObject_QtDShell::~QGLFramebufferObject_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QGLFramebufferObject_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QGLFramebufferObject*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(OPENGL, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QGLFramebufferObject_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(this->dId);
}

QTD_FUNC_DECL(OPENGL, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int metric0))
int  QGLFramebufferObject_QtDShell::metric(QPaintDevice::PaintDeviceMetric  metric0) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(this->dId, (QPaintDevice::PaintDeviceMetric )metric0);
}

QTD_FUNC_DECL(OPENGL, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QGLFramebufferObject_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(this->dId);
}

QTD_EXTERN QTD_EXPORT void qtd_QGLFramebufferObject_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
int  QGLFramebufferObject_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QGLFramebufferObject::devType();
    } else {
        return devType();
    }
}

int  QGLFramebufferObject_QtDShell::__override_metric(int  metric0, bool static_call) const
{
    if (static_call) {
        return QGLFramebufferObject::metric((QPaintDevice::PaintDeviceMetric )metric0);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )metric0);
    }
}

QPaintEngine*  QGLFramebufferObject_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QGLFramebufferObject::paintEngine();
    } else {
        return paintEngine();
    }
}

// ---externC---
// QGLFramebufferObject::QGLFramebufferObject(const QSize & size, GLenum target)
QTD_EXTERN QTD_EXPORT void* qtd_QGLFramebufferObject_QGLFramebufferObject_QSize_int
(void *d_ptr,
 QSize size0,
 GLenum target1)
{
    QGLFramebufferObject_QtDShell *__qt_this = new QGLFramebufferObject_QtDShell(d_ptr, (const QSize& )size0, (GLenum )target1);
    return (void *) __qt_this;

}

// QGLFramebufferObject::QGLFramebufferObject(const QSize & size, QGLFramebufferObject::Attachment attachment, GLenum target, GLenum internal_format)
QTD_EXTERN QTD_EXPORT void* qtd_QGLFramebufferObject_QGLFramebufferObject_QSize_Attachment_int_int
(void *d_ptr,
 QSize size0,
 int attachment1,
 GLenum target2,
 GLenum internal_format3)
{
    QGLFramebufferObject::Attachment __qt_attachment1 = (QGLFramebufferObject::Attachment) attachment1;
    QGLFramebufferObject_QtDShell *__qt_this = new QGLFramebufferObject_QtDShell(d_ptr, (const QSize& )size0, (QGLFramebufferObject::Attachment )__qt_attachment1, (GLenum )target2, (GLenum )internal_format3);
    return (void *) __qt_this;

}

// QGLFramebufferObject::QGLFramebufferObject(int width, int height, GLenum target)
QTD_EXTERN QTD_EXPORT void* qtd_QGLFramebufferObject_QGLFramebufferObject_int_int_int
(void *d_ptr,
 int width0,
 int height1,
 GLenum target2)
{
    QGLFramebufferObject_QtDShell *__qt_this = new QGLFramebufferObject_QtDShell(d_ptr, (int )width0, (int )height1, (GLenum )target2);
    return (void *) __qt_this;

}

// QGLFramebufferObject::QGLFramebufferObject(int width, int height, QGLFramebufferObject::Attachment attachment, GLenum target, GLenum internal_format)
QTD_EXTERN QTD_EXPORT void* qtd_QGLFramebufferObject_QGLFramebufferObject_int_int_Attachment_int_int
(void *d_ptr,
 int width0,
 int height1,
 int attachment2,
 GLenum target3,
 GLenum internal_format4)
{
    QGLFramebufferObject::Attachment __qt_attachment2 = (QGLFramebufferObject::Attachment) attachment2;
    QGLFramebufferObject_QtDShell *__qt_this = new QGLFramebufferObject_QtDShell(d_ptr, (int )width0, (int )height1, (QGLFramebufferObject::Attachment )__qt_attachment2, (GLenum )target3, (GLenum )internal_format4);
    return (void *) __qt_this;

}

// QGLFramebufferObject::attachment() const
QTD_EXTERN QTD_EXPORT int qtd_QGLFramebufferObject_attachment_const
(void* __this_nativeId)
{
    QGLFramebufferObject_QtDShell *__qt_this = (QGLFramebufferObject_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->attachment();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFramebufferObject::bind()
QTD_EXTERN QTD_EXPORT bool qtd_QGLFramebufferObject_bind
(void* __this_nativeId)
{
    QGLFramebufferObject_QtDShell *__qt_this = (QGLFramebufferObject_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->bind();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFramebufferObject::colorCount() const
QTD_EXTERN QTD_EXPORT int qtd_QGLFramebufferObject_colorCount_const
(void* __this_nativeId)
{
    QGLFramebufferObject_QtDShell *__qt_this = (QGLFramebufferObject_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::colorCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFramebufferObject::depth() const
QTD_EXTERN QTD_EXPORT int qtd_QGLFramebufferObject_depth_const
(void* __this_nativeId)
{
    QGLFramebufferObject_QtDShell *__qt_this = (QGLFramebufferObject_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::depth();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFramebufferObject::drawTexture(const QPointF & point, GLuint textureId, GLenum textureTarget)
QTD_EXTERN QTD_EXPORT void qtd_QGLFramebufferObject_drawTexture_QPointF_int_int
(void* __this_nativeId,
 QPointF point0,
 GLuint textureId1,
 GLenum textureTarget2)
{
    QGLFramebufferObject_QtDShell *__qt_this = (QGLFramebufferObject_QtDShell *) __this_nativeId;
    __qt_this->drawTexture((const QPointF& )point0, (GLuint )textureId1, (GLenum )textureTarget2);

}

// QGLFramebufferObject::drawTexture(const QRectF & target, GLuint textureId, GLenum textureTarget)
QTD_EXTERN QTD_EXPORT void qtd_QGLFramebufferObject_drawTexture_QRectF_int_int
(void* __this_nativeId,
 QRectF target0,
 GLuint textureId1,
 GLenum textureTarget2)
{
    QGLFramebufferObject_QtDShell *__qt_this = (QGLFramebufferObject_QtDShell *) __this_nativeId;
    __qt_this->drawTexture((const QRectF& )target0, (GLuint )textureId1, (GLenum )textureTarget2);

}

// QGLFramebufferObject::handle() const
QTD_EXTERN QTD_EXPORT GLuint qtd_QGLFramebufferObject_handle_const
(void* __this_nativeId)
{
    QGLFramebufferObject_QtDShell *__qt_this = (QGLFramebufferObject_QtDShell *) __this_nativeId;
    GLuint  __qt_return_value = __qt_this->handle();

    GLuint __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFramebufferObject::height() const
QTD_EXTERN QTD_EXPORT int qtd_QGLFramebufferObject_height_const
(void* __this_nativeId)
{
    QGLFramebufferObject_QtDShell *__qt_this = (QGLFramebufferObject_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::height();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFramebufferObject::heightMM() const
QTD_EXTERN QTD_EXPORT int qtd_QGLFramebufferObject_heightMM_const
(void* __this_nativeId)
{
    QGLFramebufferObject_QtDShell *__qt_this = (QGLFramebufferObject_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::heightMM();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFramebufferObject::isBound() const
QTD_EXTERN QTD_EXPORT bool qtd_QGLFramebufferObject_isBound_const
(void* __this_nativeId)
{
    QGLFramebufferObject_QtDShell *__qt_this = (QGLFramebufferObject_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isBound();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFramebufferObject::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QGLFramebufferObject_isValid_const
(void* __this_nativeId)
{
    QGLFramebufferObject_QtDShell *__qt_this = (QGLFramebufferObject_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFramebufferObject::logicalDpiX() const
QTD_EXTERN QTD_EXPORT int qtd_QGLFramebufferObject_logicalDpiX_const
(void* __this_nativeId)
{
    QGLFramebufferObject_QtDShell *__qt_this = (QGLFramebufferObject_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::logicalDpiX();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFramebufferObject::logicalDpiY() const
QTD_EXTERN QTD_EXPORT int qtd_QGLFramebufferObject_logicalDpiY_const
(void* __this_nativeId)
{
    QGLFramebufferObject_QtDShell *__qt_this = (QGLFramebufferObject_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::logicalDpiY();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFramebufferObject::numColors() const
QTD_EXTERN QTD_EXPORT int qtd_QGLFramebufferObject_numColors_const
(void* __this_nativeId)
{
    QGLFramebufferObject_QtDShell *__qt_this = (QGLFramebufferObject_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::numColors();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFramebufferObject::paintingActive() const
QTD_EXTERN QTD_EXPORT bool qtd_QGLFramebufferObject_paintingActive_const
(void* __this_nativeId)
{
    QGLFramebufferObject_QtDShell *__qt_this = (QGLFramebufferObject_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QPaintDevice::paintingActive();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFramebufferObject::physicalDpiX() const
QTD_EXTERN QTD_EXPORT int qtd_QGLFramebufferObject_physicalDpiX_const
(void* __this_nativeId)
{
    QGLFramebufferObject_QtDShell *__qt_this = (QGLFramebufferObject_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::physicalDpiX();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFramebufferObject::physicalDpiY() const
QTD_EXTERN QTD_EXPORT int qtd_QGLFramebufferObject_physicalDpiY_const
(void* __this_nativeId)
{
    QGLFramebufferObject_QtDShell *__qt_this = (QGLFramebufferObject_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::physicalDpiY();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFramebufferObject::release()
QTD_EXTERN QTD_EXPORT bool qtd_QGLFramebufferObject_release
(void* __this_nativeId)
{
    QGLFramebufferObject_QtDShell *__qt_this = (QGLFramebufferObject_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->release();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFramebufferObject::size() const
QTD_EXTERN QTD_EXPORT void qtd_QGLFramebufferObject_size_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QGLFramebufferObject_QtDShell *__qt_this = (QGLFramebufferObject_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->size();

    *__d_return_value = __qt_return_value;

}

// QGLFramebufferObject::texture() const
QTD_EXTERN QTD_EXPORT GLuint qtd_QGLFramebufferObject_texture_const
(void* __this_nativeId)
{
    QGLFramebufferObject_QtDShell *__qt_this = (QGLFramebufferObject_QtDShell *) __this_nativeId;
    GLuint  __qt_return_value = __qt_this->texture();

    GLuint __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFramebufferObject::toImage() const
QTD_EXTERN QTD_EXPORT void* qtd_QGLFramebufferObject_toImage_const
(void* __this_nativeId)
{
    QGLFramebufferObject_QtDShell *__qt_this = (QGLFramebufferObject_QtDShell *) __this_nativeId;
    QImage  __qt_return_value = __qt_this->toImage();

    void* __d_return_value = (void*) new QImage(__qt_return_value);

    return __d_return_value;
}

// QGLFramebufferObject::width() const
QTD_EXTERN QTD_EXPORT int qtd_QGLFramebufferObject_width_const
(void* __this_nativeId)
{
    QGLFramebufferObject_QtDShell *__qt_this = (QGLFramebufferObject_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::width();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFramebufferObject::widthMM() const
QTD_EXTERN QTD_EXPORT int qtd_QGLFramebufferObject_widthMM_const
(void* __this_nativeId)
{
    QGLFramebufferObject_QtDShell *__qt_this = (QGLFramebufferObject_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::widthMM();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFramebufferObject::devType() const
QTD_EXTERN QTD_EXPORT int qtd_QGLFramebufferObject_devType_const
(void* __this_nativeId)
{
    QGLFramebufferObject_QtDShell *__qt_this = (QGLFramebufferObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGLFramebufferObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_devType(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFramebufferObject::metric(QPaintDevice::PaintDeviceMetric metric) const
QTD_EXTERN QTD_EXPORT int qtd_QGLFramebufferObject_metric_PaintDeviceMetric_const
(void* __this_nativeId,
 int metric0)
{
    QPaintDevice::PaintDeviceMetric __qt_metric0 = (QPaintDevice::PaintDeviceMetric) metric0;
    QGLFramebufferObject_QtDShell *__qt_this = (QGLFramebufferObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGLFramebufferObject*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_metric((QPaintDevice::PaintDeviceMetric )__qt_metric0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFramebufferObject::paintEngine() const
QTD_EXTERN QTD_EXPORT void* qtd_QGLFramebufferObject_paintEngine_const
(void* __this_nativeId)
{
    QGLFramebufferObject_QtDShell *__qt_this = (QGLFramebufferObject_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGLFramebufferObject*)__this_nativeId) != NULL;
    QPaintEngine*  __qt_return_value = __qt_this->__override_paintEngine(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGLFramebufferObject::bindDefault()
QTD_EXTERN QTD_EXPORT bool qtd_QGLFramebufferObject_bindDefault
()
{
    bool  __qt_return_value = QGLFramebufferObject_QtDShell::bindDefault();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFramebufferObject::blitFramebuffer(QGLFramebufferObject * target, const QRect & targetRect, QGLFramebufferObject * source, const QRect & sourceRect, unsigned int buffers, GLenum filter)
QTD_EXTERN QTD_EXPORT void qtd_QGLFramebufferObject_blitFramebuffer_QGLFramebufferObject_QRect_QGLFramebufferObject_QRect_uint_int
(void* target0,
 QRect targetRect1,
 void* source2,
 QRect sourceRect3,
 unsigned int buffers4,
 GLenum filter5)
{
    QGLFramebufferObject*  __qt_target0 = (QGLFramebufferObject* ) target0;
    QGLFramebufferObject*  __qt_source2 = (QGLFramebufferObject* ) source2;
    QGLFramebufferObject_QtDShell::blitFramebuffer((QGLFramebufferObject* )__qt_target0, (const QRect& )targetRect1, (QGLFramebufferObject* )__qt_source2, (const QRect& )sourceRect3, (unsigned int )buffers4, (GLenum )filter5);

}

// QGLFramebufferObject::hasOpenGLFramebufferBlit()
QTD_EXTERN QTD_EXPORT bool qtd_QGLFramebufferObject_hasOpenGLFramebufferBlit
()
{
    bool  __qt_return_value = QGLFramebufferObject_QtDShell::hasOpenGLFramebufferBlit();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFramebufferObject::hasOpenGLFramebufferObjects()
QTD_EXTERN QTD_EXPORT bool qtd_QGLFramebufferObject_hasOpenGLFramebufferObjects
()
{
    bool  __qt_return_value = QGLFramebufferObject_QtDShell::hasOpenGLFramebufferObjects();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


