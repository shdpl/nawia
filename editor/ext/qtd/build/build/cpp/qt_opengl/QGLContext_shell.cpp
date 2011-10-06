#include <QVariant>
#include <qcolor.h>
#include <qgl.h>
#include <qimage.h>
#include <qpaintdevice.h>
#include <qpixmap.h>

#include "QGLContext_shell.h"
#include <iostream>
#include <qgl.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_opengl.h"

QTD_EXTERN QTD_EXPORT void qtd_QGLContext_delete(void* nativeId)
{
    delete (QGLContext_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QGLContext_destroy(void* nativeId)
{
    call_destructor((QGLContext_QtDShell*)nativeId);
}

QGLContext_QtDShell::QGLContext_QtDShell(void *d_ptr, const QGLFormat&  format0)
    : QGLContext(format0),
      QtdObjectLink(d_ptr)
{
}

QGLContext_QtDShell::QGLContext_QtDShell(void *d_ptr, const QGLFormat&  format0, QPaintDevice*  device1)
    : QGLContext(format0, device1),
      QtdObjectLink(d_ptr)
{
}

QGLContext_QtDShell::~QGLContext_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QGLContext_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QGLContext*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(OPENGL, bool, QGLContext_chooseContext_QGLContext_dispatch, (void *dId, void* shareContext0))
QTD_FUNC(OPENGL, QGLContext_chooseContext_QGLContext_dispatch)
bool  QGLContext_QtDShell::chooseContext(const QGLContext*  shareContext0)
{
    return qtd_QGLContext_chooseContext_QGLContext_dispatch(this->dId, (QGLContext* )shareContext0);
}

QTD_FUNC_DECL(OPENGL, bool, QGLContext_create_QGLContext_dispatch, (void *dId, void* shareContext0))
QTD_FUNC(OPENGL, QGLContext_create_QGLContext_dispatch)
bool  QGLContext_QtDShell::create(const QGLContext*  shareContext0)
{
    return qtd_QGLContext_create_QGLContext_dispatch(this->dId, (QGLContext* )shareContext0);
}

QTD_FUNC_DECL(OPENGL, void, QGLContext_doneCurrent_dispatch, (void *dId))
QTD_FUNC(OPENGL, QGLContext_doneCurrent_dispatch)
void QGLContext_QtDShell::doneCurrent()
{
    qtd_QGLContext_doneCurrent_dispatch(this->dId);
}

QTD_FUNC_DECL(OPENGL, void, QGLContext_makeCurrent_dispatch, (void *dId))
QTD_FUNC(OPENGL, QGLContext_makeCurrent_dispatch)
void QGLContext_QtDShell::makeCurrent()
{
    qtd_QGLContext_makeCurrent_dispatch(this->dId);
}

QTD_FUNC_DECL(OPENGL, void, QGLContext_swapBuffers_const_dispatch, (void *dId))
QTD_FUNC(OPENGL, QGLContext_swapBuffers_const_dispatch)
void QGLContext_QtDShell::swapBuffers() const
{
    qtd_QGLContext_swapBuffers_const_dispatch(this->dId);
}

QTD_EXTERN QTD_EXPORT void qtd_QGLContext_initCallBacks(VoidFunc *virts) {
    qtd_QGLContext_chooseContext_QGLContext_dispatch = (qtd_QGLContext_chooseContext_QGLContext_dispatch_t) virts[0];
    qtd_QGLContext_create_QGLContext_dispatch = (qtd_QGLContext_create_QGLContext_dispatch_t) virts[1];
    qtd_QGLContext_doneCurrent_dispatch = (qtd_QGLContext_doneCurrent_dispatch_t) virts[2];
    qtd_QGLContext_makeCurrent_dispatch = (qtd_QGLContext_makeCurrent_dispatch_t) virts[3];
    qtd_QGLContext_swapBuffers_const_dispatch = (qtd_QGLContext_swapBuffers_const_dispatch_t) virts[4];
}
// Functions in shell class
// public overrides for functions that are protected in the base class
uint  QGLContext_QtDShell::__public_colorIndex(const QColor&  c0) const
{
    return QGLContext::colorIndex((const QColor& )c0);
}

bool  QGLContext_QtDShell::__public_deviceIsPixmap() const
{
    return QGLContext::deviceIsPixmap();
}

bool  QGLContext_QtDShell::__public_initialized() const
{
    return QGLContext::initialized();
}

void QGLContext_QtDShell::__public_setInitialized(bool  on0)
{
    QGLContext::setInitialized((bool )on0);
}

void QGLContext_QtDShell::__public_setValid(bool  valid0)
{
    QGLContext::setValid((bool )valid0);
}

void QGLContext_QtDShell::__public_setWindowCreated(bool  on0)
{
    QGLContext::setWindowCreated((bool )on0);
}

bool  QGLContext_QtDShell::__public_windowCreated() const
{
    return QGLContext::windowCreated();
}

// Write virtual function overries used to decide on static/virtual calls
bool  QGLContext_QtDShell::__override_chooseContext(const QGLContext*  shareContext0, bool static_call)
{
    if (static_call) {
        return QGLContext::chooseContext((const QGLContext* )shareContext0);
    } else {
        return chooseContext((const QGLContext* )shareContext0);
    }
}

bool  QGLContext_QtDShell::__override_create(const QGLContext*  shareContext0, bool static_call)
{
    if (static_call) {
        return QGLContext::create((const QGLContext* )shareContext0);
    } else {
        return create((const QGLContext* )shareContext0);
    }
}

void QGLContext_QtDShell::__override_doneCurrent(bool static_call)
{
    if (static_call) {
        QGLContext::doneCurrent();
    } else {
        doneCurrent();
    }
}

void QGLContext_QtDShell::__override_makeCurrent(bool static_call)
{
    if (static_call) {
        QGLContext::makeCurrent();
    } else {
        makeCurrent();
    }
}

void QGLContext_QtDShell::__override_swapBuffers(bool static_call) const
{
    if (static_call) {
        QGLContext::swapBuffers();
    } else {
        swapBuffers();
    }
}

// ---externC---
// QGLContext::QGLContext(const QGLFormat & format)
QTD_EXTERN QTD_EXPORT void* qtd_QGLContext_QGLContext_QGLFormat
(void *d_ptr,
 void* format0)
{
    const QGLFormat&  __qt_format0 = (const QGLFormat& ) *(QGLFormat *)format0;
    QGLContext_QtDShell *__qt_this = new QGLContext_QtDShell(d_ptr, (const QGLFormat& )__qt_format0);
    return (void *) __qt_this;

}

// QGLContext::QGLContext(const QGLFormat & format, QPaintDevice * device)
QTD_EXTERN QTD_EXPORT void* qtd_QGLContext_QGLContext_QGLFormat_QPaintDevice
(void *d_ptr,
 void* format0,
 void* device1)
{
    const QGLFormat&  __qt_format0 = (const QGLFormat& ) *(QGLFormat *)format0;
    QPaintDevice*  __qt_device1 = (QPaintDevice* ) device1;
    QGLContext_QtDShell *__qt_this = new QGLContext_QtDShell(d_ptr, (const QGLFormat& )__qt_format0, (QPaintDevice* )__qt_device1);
    return (void *) __qt_this;

}

// QGLContext::bindTexture(const QImage & image, GLenum target, GLint format)
QTD_EXTERN QTD_EXPORT GLuint qtd_QGLContext_bindTexture_QImage_int_int
(void* __this_nativeId,
 void* image0,
 GLenum target1,
 GLint format2)
{
    const QImage&  __qt_image0 = (const QImage& ) *(QImage *)image0;
    QGLContext_QtDShell *__qt_this = (QGLContext_QtDShell *) __this_nativeId;
    GLuint  __qt_return_value = __qt_this->bindTexture((const QImage& )__qt_image0, (GLenum )target1, (GLint )format2);

    GLuint __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLContext::bindTexture(const QPixmap & pixmap, GLenum target, GLint format)
QTD_EXTERN QTD_EXPORT GLuint qtd_QGLContext_bindTexture_QPixmap_int_int
(void* __this_nativeId,
 void* pixmap0,
 GLenum target1,
 GLint format2)
{
    const QPixmap&  __qt_pixmap0 = (const QPixmap& ) *(QPixmap *)pixmap0;
    QGLContext_QtDShell *__qt_this = (QGLContext_QtDShell *) __this_nativeId;
    GLuint  __qt_return_value = __qt_this->bindTexture((const QPixmap& )__qt_pixmap0, (GLenum )target1, (GLint )format2);

    GLuint __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLContext::bindTexture(const QString & fileName)
QTD_EXTERN QTD_EXPORT GLuint qtd_QGLContext_bindTexture_string
(void* __this_nativeId,
 DArray fileName0)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    QGLContext_QtDShell *__qt_this = (QGLContext_QtDShell *) __this_nativeId;
    GLuint  __qt_return_value = __qt_this->bindTexture((const QString& )__qt_fileName0);

    GLuint __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLContext::colorIndex(const QColor & c) const
QTD_EXTERN QTD_EXPORT uint qtd_QGLContext_colorIndex_QColor_const
(void* __this_nativeId,
 void* c0)
{
    const QColor&  __qt_c0 = (const QColor& ) *(QColor *)c0;
    QGLContext_QtDShell *__qt_this = (QGLContext_QtDShell *) __this_nativeId;
    uint  __qt_return_value = __qt_this->__public_colorIndex((const QColor& )__qt_c0);

    uint __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLContext::deleteTexture(GLuint tx_id)
QTD_EXTERN QTD_EXPORT void qtd_QGLContext_deleteTexture_int
(void* __this_nativeId,
 GLuint tx_id0)
{
    QGLContext_QtDShell *__qt_this = (QGLContext_QtDShell *) __this_nativeId;
    __qt_this->deleteTexture((GLuint )tx_id0);

}

// QGLContext::device() const
QTD_EXTERN QTD_EXPORT void* qtd_QGLContext_device_const
(void* __this_nativeId)
{
    QGLContext_QtDShell *__qt_this = (QGLContext_QtDShell *) __this_nativeId;
    QPaintDevice*  __qt_return_value = __qt_this->device();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGLContext::deviceIsPixmap() const
QTD_EXTERN QTD_EXPORT bool qtd_QGLContext_deviceIsPixmap_const
(void* __this_nativeId)
{
    QGLContext_QtDShell *__qt_this = (QGLContext_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->__public_deviceIsPixmap();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLContext::drawTexture(const QPointF & point, GLuint textureId, GLenum textureTarget)
QTD_EXTERN QTD_EXPORT void qtd_QGLContext_drawTexture_QPointF_int_int
(void* __this_nativeId,
 QPointF point0,
 GLuint textureId1,
 GLenum textureTarget2)
{
    QGLContext_QtDShell *__qt_this = (QGLContext_QtDShell *) __this_nativeId;
    __qt_this->drawTexture((const QPointF& )point0, (GLuint )textureId1, (GLenum )textureTarget2);

}

// QGLContext::drawTexture(const QRectF & target, GLuint textureId, GLenum textureTarget)
QTD_EXTERN QTD_EXPORT void qtd_QGLContext_drawTexture_QRectF_int_int
(void* __this_nativeId,
 QRectF target0,
 GLuint textureId1,
 GLenum textureTarget2)
{
    QGLContext_QtDShell *__qt_this = (QGLContext_QtDShell *) __this_nativeId;
    __qt_this->drawTexture((const QRectF& )target0, (GLuint )textureId1, (GLenum )textureTarget2);

}

// QGLContext::format() const
QTD_EXTERN QTD_EXPORT void* qtd_QGLContext_format_const
(void* __this_nativeId)
{
    QGLContext_QtDShell *__qt_this = (QGLContext_QtDShell *) __this_nativeId;
    QGLFormat  __qt_return_value = __qt_this->format();

    void* __d_return_value = (void*) new QGLFormat(__qt_return_value);

    return __d_return_value;
}

// QGLContext::initialized() const
QTD_EXTERN QTD_EXPORT bool qtd_QGLContext_initialized_const
(void* __this_nativeId)
{
    QGLContext_QtDShell *__qt_this = (QGLContext_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->__public_initialized();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLContext::isSharing() const
QTD_EXTERN QTD_EXPORT bool qtd_QGLContext_isSharing_const
(void* __this_nativeId)
{
    QGLContext_QtDShell *__qt_this = (QGLContext_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isSharing();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLContext::isValid() const
QTD_EXTERN QTD_EXPORT bool qtd_QGLContext_isValid_const
(void* __this_nativeId)
{
    QGLContext_QtDShell *__qt_this = (QGLContext_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isValid();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLContext::overlayTransparentColor() const
QTD_EXTERN QTD_EXPORT void* qtd_QGLContext_overlayTransparentColor_const
(void* __this_nativeId)
{
    QGLContext_QtDShell *__qt_this = (QGLContext_QtDShell *) __this_nativeId;
    QColor  __qt_return_value = __qt_this->overlayTransparentColor();

    void* __d_return_value = (void*) new QColor(__qt_return_value);

    return __d_return_value;
}

// QGLContext::requestedFormat() const
QTD_EXTERN QTD_EXPORT void* qtd_QGLContext_requestedFormat_const
(void* __this_nativeId)
{
    QGLContext_QtDShell *__qt_this = (QGLContext_QtDShell *) __this_nativeId;
    QGLFormat  __qt_return_value = __qt_this->requestedFormat();

    void* __d_return_value = (void*) new QGLFormat(__qt_return_value);

    return __d_return_value;
}

// QGLContext::reset()
QTD_EXTERN QTD_EXPORT void qtd_QGLContext_reset
(void* __this_nativeId)
{
    QGLContext_QtDShell *__qt_this = (QGLContext_QtDShell *) __this_nativeId;
    __qt_this->reset();

}

// QGLContext::setFormat(const QGLFormat & format)
QTD_EXTERN QTD_EXPORT void qtd_QGLContext_setFormat_QGLFormat
(void* __this_nativeId,
 void* format0)
{
    const QGLFormat&  __qt_format0 = (const QGLFormat& ) *(QGLFormat *)format0;
    QGLContext_QtDShell *__qt_this = (QGLContext_QtDShell *) __this_nativeId;
    __qt_this->setFormat((const QGLFormat& )__qt_format0);

}

// QGLContext::setInitialized(bool on)
QTD_EXTERN QTD_EXPORT void qtd_QGLContext_setInitialized_bool
(void* __this_nativeId,
 bool on0)
{
    QGLContext_QtDShell *__qt_this = (QGLContext_QtDShell *) __this_nativeId;
    __qt_this->__public_setInitialized((bool )on0);

}

// QGLContext::setValid(bool valid)
QTD_EXTERN QTD_EXPORT void qtd_QGLContext_setValid_bool
(void* __this_nativeId,
 bool valid0)
{
    QGLContext_QtDShell *__qt_this = (QGLContext_QtDShell *) __this_nativeId;
    __qt_this->__public_setValid((bool )valid0);

}

// QGLContext::setWindowCreated(bool on)
QTD_EXTERN QTD_EXPORT void qtd_QGLContext_setWindowCreated_bool
(void* __this_nativeId,
 bool on0)
{
    QGLContext_QtDShell *__qt_this = (QGLContext_QtDShell *) __this_nativeId;
    __qt_this->__public_setWindowCreated((bool )on0);

}

// QGLContext::windowCreated() const
QTD_EXTERN QTD_EXPORT bool qtd_QGLContext_windowCreated_const
(void* __this_nativeId)
{
    QGLContext_QtDShell *__qt_this = (QGLContext_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->__public_windowCreated();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLContext::chooseContext(const QGLContext * shareContext)
QTD_EXTERN QTD_EXPORT bool qtd_QGLContext_chooseContext_QGLContext
(void* __this_nativeId,
 void* shareContext0)
{
    const QGLContext*  __qt_shareContext0 = (const QGLContext* ) shareContext0;
    QGLContext_QtDShell *__qt_this = (QGLContext_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGLContext*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_chooseContext((const QGLContext* )__qt_shareContext0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLContext::create(const QGLContext * shareContext)
QTD_EXTERN QTD_EXPORT bool qtd_QGLContext_create_QGLContext
(void* __this_nativeId,
 void* shareContext0)
{
    const QGLContext*  __qt_shareContext0 = (const QGLContext* ) shareContext0;
    QGLContext_QtDShell *__qt_this = (QGLContext_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGLContext*)__this_nativeId) != NULL;
    bool  __qt_return_value = __qt_this->__override_create((const QGLContext* )__qt_shareContext0, __do_static_call);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLContext::doneCurrent()
QTD_EXTERN QTD_EXPORT void qtd_QGLContext_doneCurrent
(void* __this_nativeId)
{
    QGLContext_QtDShell *__qt_this = (QGLContext_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGLContext*)__this_nativeId) != NULL;
    __qt_this->__override_doneCurrent(__do_static_call);

}

// QGLContext::makeCurrent()
QTD_EXTERN QTD_EXPORT void qtd_QGLContext_makeCurrent
(void* __this_nativeId)
{
    QGLContext_QtDShell *__qt_this = (QGLContext_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGLContext*)__this_nativeId) != NULL;
    __qt_this->__override_makeCurrent(__do_static_call);

}

// QGLContext::swapBuffers() const
QTD_EXTERN QTD_EXPORT void qtd_QGLContext_swapBuffers_const
(void* __this_nativeId)
{
    QGLContext_QtDShell *__qt_this = (QGLContext_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QGLContext*)__this_nativeId) != NULL;
    __qt_this->__override_swapBuffers(__do_static_call);

}

// QGLContext::areSharing(const QGLContext * context1, const QGLContext * context2)
QTD_EXTERN QTD_EXPORT bool qtd_QGLContext_areSharing_QGLContext_QGLContext
(void* context10,
 void* context21)
{
    const QGLContext*  __qt_context10 = (const QGLContext* ) context10;
    const QGLContext*  __qt_context21 = (const QGLContext* ) context21;
    bool  __qt_return_value = QGLContext_QtDShell::areSharing((const QGLContext* )__qt_context10, (const QGLContext* )__qt_context21);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLContext::currentContext()
QTD_EXTERN QTD_EXPORT void* qtd_QGLContext_currentContext
()
{
    const QGLContext*  __qt_return_value = QGLContext_QtDShell::currentContext();

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QGLContext::setTextureCacheLimit(int size)
QTD_EXTERN QTD_EXPORT void qtd_QGLContext_setTextureCacheLimit_int
(int size0)
{
    QGLContext_QtDShell::setTextureCacheLimit((int )size0);

}

// QGLContext::textureCacheLimit()
QTD_EXTERN QTD_EXPORT int qtd_QGLContext_textureCacheLimit
()
{
    int  __qt_return_value = QGLContext_QtDShell::textureCacheLimit();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// ---externC---end
// Field accessors


