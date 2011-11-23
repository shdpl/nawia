#include <QVariant>
#include <qgl.h>

#include <iostream>
#include <qgl.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_opengl.h"

QTD_EXTERN QTD_EXPORT void qtd_QGLFormat_delete(void* nativeId)
{
    delete (QGLFormat*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QGLFormat_destroy(void* nativeId)
{
    call_destructor((QGLFormat*)nativeId);
}

// ---externC---
// QGLFormat::QGLFormat()
QTD_EXTERN QTD_EXPORT void* qtd_QGLFormat_QGLFormat
()
{
    QGLFormat *__qt_this = new QGLFormat();
    return (void *) __qt_this;

}

// QGLFormat::QGLFormat(QFlags<QGL::FormatOption> options, int plane)
QTD_EXTERN QTD_EXPORT void* qtd_QGLFormat_QGLFormat_FormatOptions_int
(int options0,
 int plane1)
{
    QFlags<QGL::FormatOption> __qt_options0 = (QFlags<QGL::FormatOption>) options0;
    QGLFormat *__qt_this = new QGLFormat((QGL::FormatOptions )__qt_options0, (int )plane1);
    return (void *) __qt_this;

}

// QGLFormat::QGLFormat(const QGLFormat & other)
QTD_EXTERN QTD_EXPORT void* qtd_QGLFormat_QGLFormat_QGLFormat
(void* other0)
{
    const QGLFormat&  __qt_other0 = (const QGLFormat& ) *(QGLFormat *)other0;
    QGLFormat *__qt_this = new QGLFormat((const QGLFormat& )__qt_other0);
    return (void *) __qt_this;

}

// QGLFormat::accum() const
QTD_EXTERN QTD_EXPORT bool qtd_QGLFormat_accum_const
(void* __this_nativeId)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    bool  __qt_return_value = __qt_this->accum();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFormat::accumBufferSize() const
QTD_EXTERN QTD_EXPORT int qtd_QGLFormat_accumBufferSize_const
(void* __this_nativeId)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    int  __qt_return_value = __qt_this->accumBufferSize();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFormat::alpha() const
QTD_EXTERN QTD_EXPORT bool qtd_QGLFormat_alpha_const
(void* __this_nativeId)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    bool  __qt_return_value = __qt_this->alpha();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFormat::alphaBufferSize() const
QTD_EXTERN QTD_EXPORT int qtd_QGLFormat_alphaBufferSize_const
(void* __this_nativeId)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    int  __qt_return_value = __qt_this->alphaBufferSize();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFormat::blueBufferSize() const
QTD_EXTERN QTD_EXPORT int qtd_QGLFormat_blueBufferSize_const
(void* __this_nativeId)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    int  __qt_return_value = __qt_this->blueBufferSize();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFormat::depth() const
QTD_EXTERN QTD_EXPORT bool qtd_QGLFormat_depth_const
(void* __this_nativeId)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    bool  __qt_return_value = __qt_this->depth();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFormat::depthBufferSize() const
QTD_EXTERN QTD_EXPORT int qtd_QGLFormat_depthBufferSize_const
(void* __this_nativeId)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    int  __qt_return_value = __qt_this->depthBufferSize();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFormat::directRendering() const
QTD_EXTERN QTD_EXPORT bool qtd_QGLFormat_directRendering_const
(void* __this_nativeId)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    bool  __qt_return_value = __qt_this->directRendering();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFormat::doubleBuffer() const
QTD_EXTERN QTD_EXPORT bool qtd_QGLFormat_doubleBuffer_const
(void* __this_nativeId)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    bool  __qt_return_value = __qt_this->doubleBuffer();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFormat::greenBufferSize() const
QTD_EXTERN QTD_EXPORT int qtd_QGLFormat_greenBufferSize_const
(void* __this_nativeId)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    int  __qt_return_value = __qt_this->greenBufferSize();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFormat::hasOverlay() const
QTD_EXTERN QTD_EXPORT bool qtd_QGLFormat_hasOverlay_const
(void* __this_nativeId)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasOverlay();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFormat::majorVersion() const
QTD_EXTERN QTD_EXPORT int qtd_QGLFormat_majorVersion_const
(void* __this_nativeId)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    int  __qt_return_value = __qt_this->majorVersion();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFormat::minorVersion() const
QTD_EXTERN QTD_EXPORT int qtd_QGLFormat_minorVersion_const
(void* __this_nativeId)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    int  __qt_return_value = __qt_this->minorVersion();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFormat::operator==(const QGLFormat & arg__2)
QTD_EXTERN QTD_EXPORT bool qtd_QGLFormat_operator_equal_QGLFormat
(void* __this_nativeId,
 void* arg__2)
{
    const QGLFormat&  __qt_arg__2 = (const QGLFormat& ) *(QGLFormat *)arg__2;
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    bool  __qt_return_value = (__qt_this != 0) ? ::operator==(*__qt_this, (const QGLFormat& )__qt_arg__2) :  false;

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFormat::plane() const
QTD_EXTERN QTD_EXPORT int qtd_QGLFormat_plane_const
(void* __this_nativeId)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    int  __qt_return_value = __qt_this->plane();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFormat::redBufferSize() const
QTD_EXTERN QTD_EXPORT int qtd_QGLFormat_redBufferSize_const
(void* __this_nativeId)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    int  __qt_return_value = __qt_this->redBufferSize();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFormat::rgba() const
QTD_EXTERN QTD_EXPORT bool qtd_QGLFormat_rgba_const
(void* __this_nativeId)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    bool  __qt_return_value = __qt_this->rgba();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFormat::sampleBuffers() const
QTD_EXTERN QTD_EXPORT bool qtd_QGLFormat_sampleBuffers_const
(void* __this_nativeId)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    bool  __qt_return_value = __qt_this->sampleBuffers();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFormat::samples() const
QTD_EXTERN QTD_EXPORT int qtd_QGLFormat_samples_const
(void* __this_nativeId)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    int  __qt_return_value = __qt_this->samples();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFormat::setAccum(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QGLFormat_setAccum_bool
(void* __this_nativeId,
 bool enable0)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    __qt_this->setAccum((bool )enable0);

}

// QGLFormat::setAccumBufferSize(int size)
QTD_EXTERN QTD_EXPORT void qtd_QGLFormat_setAccumBufferSize_int
(void* __this_nativeId,
 int size0)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    __qt_this->setAccumBufferSize((int )size0);

}

// QGLFormat::setAlpha(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QGLFormat_setAlpha_bool
(void* __this_nativeId,
 bool enable0)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    __qt_this->setAlpha((bool )enable0);

}

// QGLFormat::setAlphaBufferSize(int size)
QTD_EXTERN QTD_EXPORT void qtd_QGLFormat_setAlphaBufferSize_int
(void* __this_nativeId,
 int size0)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    __qt_this->setAlphaBufferSize((int )size0);

}

// QGLFormat::setBlueBufferSize(int size)
QTD_EXTERN QTD_EXPORT void qtd_QGLFormat_setBlueBufferSize_int
(void* __this_nativeId,
 int size0)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    __qt_this->setBlueBufferSize((int )size0);

}

// QGLFormat::setDepth(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QGLFormat_setDepth_bool
(void* __this_nativeId,
 bool enable0)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    __qt_this->setDepth((bool )enable0);

}

// QGLFormat::setDepthBufferSize(int size)
QTD_EXTERN QTD_EXPORT void qtd_QGLFormat_setDepthBufferSize_int
(void* __this_nativeId,
 int size0)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    __qt_this->setDepthBufferSize((int )size0);

}

// QGLFormat::setDirectRendering(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QGLFormat_setDirectRendering_bool
(void* __this_nativeId,
 bool enable0)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    __qt_this->setDirectRendering((bool )enable0);

}

// QGLFormat::setDoubleBuffer(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QGLFormat_setDoubleBuffer_bool
(void* __this_nativeId,
 bool enable0)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    __qt_this->setDoubleBuffer((bool )enable0);

}

// QGLFormat::setGreenBufferSize(int size)
QTD_EXTERN QTD_EXPORT void qtd_QGLFormat_setGreenBufferSize_int
(void* __this_nativeId,
 int size0)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    __qt_this->setGreenBufferSize((int )size0);

}

// QGLFormat::setOption(QFlags<QGL::FormatOption> opt)
QTD_EXTERN QTD_EXPORT void qtd_QGLFormat_setOption_FormatOptions
(void* __this_nativeId,
 int opt0)
{
    QFlags<QGL::FormatOption> __qt_opt0 = (QFlags<QGL::FormatOption>) opt0;
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    __qt_this->setOption((QGL::FormatOptions )__qt_opt0);

}

// QGLFormat::setOverlay(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QGLFormat_setOverlay_bool
(void* __this_nativeId,
 bool enable0)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    __qt_this->setOverlay((bool )enable0);

}

// QGLFormat::setPlane(int plane)
QTD_EXTERN QTD_EXPORT void qtd_QGLFormat_setPlane_int
(void* __this_nativeId,
 int plane0)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    __qt_this->setPlane((int )plane0);

}

// QGLFormat::setRedBufferSize(int size)
QTD_EXTERN QTD_EXPORT void qtd_QGLFormat_setRedBufferSize_int
(void* __this_nativeId,
 int size0)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    __qt_this->setRedBufferSize((int )size0);

}

// QGLFormat::setRgba(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QGLFormat_setRgba_bool
(void* __this_nativeId,
 bool enable0)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    __qt_this->setRgba((bool )enable0);

}

// QGLFormat::setSampleBuffers(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QGLFormat_setSampleBuffers_bool
(void* __this_nativeId,
 bool enable0)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    __qt_this->setSampleBuffers((bool )enable0);

}

// QGLFormat::setSamples(int numSamples)
QTD_EXTERN QTD_EXPORT void qtd_QGLFormat_setSamples_int
(void* __this_nativeId,
 int numSamples0)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    __qt_this->setSamples((int )numSamples0);

}

// QGLFormat::setStencil(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QGLFormat_setStencil_bool
(void* __this_nativeId,
 bool enable0)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    __qt_this->setStencil((bool )enable0);

}

// QGLFormat::setStencilBufferSize(int size)
QTD_EXTERN QTD_EXPORT void qtd_QGLFormat_setStencilBufferSize_int
(void* __this_nativeId,
 int size0)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    __qt_this->setStencilBufferSize((int )size0);

}

// QGLFormat::setStereo(bool enable)
QTD_EXTERN QTD_EXPORT void qtd_QGLFormat_setStereo_bool
(void* __this_nativeId,
 bool enable0)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    __qt_this->setStereo((bool )enable0);

}

// QGLFormat::setSwapInterval(int interval)
QTD_EXTERN QTD_EXPORT void qtd_QGLFormat_setSwapInterval_int
(void* __this_nativeId,
 int interval0)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    __qt_this->setSwapInterval((int )interval0);

}

// QGLFormat::setVersion(int major, int minor)
QTD_EXTERN QTD_EXPORT void qtd_QGLFormat_setVersion_int_int
(void* __this_nativeId,
 int major0,
 int minor1)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    __qt_this->setVersion((int )major0, (int )minor1);

}

// QGLFormat::stencil() const
QTD_EXTERN QTD_EXPORT bool qtd_QGLFormat_stencil_const
(void* __this_nativeId)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    bool  __qt_return_value = __qt_this->stencil();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFormat::stencilBufferSize() const
QTD_EXTERN QTD_EXPORT int qtd_QGLFormat_stencilBufferSize_const
(void* __this_nativeId)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    int  __qt_return_value = __qt_this->stencilBufferSize();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFormat::stereo() const
QTD_EXTERN QTD_EXPORT bool qtd_QGLFormat_stereo_const
(void* __this_nativeId)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    bool  __qt_return_value = __qt_this->stereo();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFormat::swapInterval() const
QTD_EXTERN QTD_EXPORT int qtd_QGLFormat_swapInterval_const
(void* __this_nativeId)
{
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    int  __qt_return_value = __qt_this->swapInterval();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFormat::testOption(QFlags<QGL::FormatOption> opt) const
QTD_EXTERN QTD_EXPORT bool qtd_QGLFormat_testOption_FormatOptions_const
(void* __this_nativeId,
 int opt0)
{
    QFlags<QGL::FormatOption> __qt_opt0 = (QFlags<QGL::FormatOption>) opt0;
    QGLFormat *__qt_this = (QGLFormat *) __this_nativeId;
    bool  __qt_return_value = __qt_this->testOption((QGL::FormatOptions )__qt_opt0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFormat::defaultFormat()
QTD_EXTERN QTD_EXPORT void* qtd_QGLFormat_defaultFormat
()
{
    QGLFormat  __qt_return_value = QGLFormat::defaultFormat();

    void* __d_return_value = (void*) new QGLFormat(__qt_return_value);

    return __d_return_value;
}

// QGLFormat::defaultOverlayFormat()
QTD_EXTERN QTD_EXPORT void* qtd_QGLFormat_defaultOverlayFormat
()
{
    QGLFormat  __qt_return_value = QGLFormat::defaultOverlayFormat();

    void* __d_return_value = (void*) new QGLFormat(__qt_return_value);

    return __d_return_value;
}

// QGLFormat::hasOpenGL()
QTD_EXTERN QTD_EXPORT bool qtd_QGLFormat_hasOpenGL
()
{
    bool  __qt_return_value = QGLFormat::hasOpenGL();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFormat::hasOpenGLOverlays()
QTD_EXTERN QTD_EXPORT bool qtd_QGLFormat_hasOpenGLOverlays
()
{
    bool  __qt_return_value = QGLFormat::hasOpenGLOverlays();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFormat::openGLVersionFlags()
QTD_EXTERN QTD_EXPORT int qtd_QGLFormat_openGLVersionFlags
()
{
    int  __qt_return_value = QGLFormat::openGLVersionFlags();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QGLFormat::setDefaultFormat(const QGLFormat & f)
QTD_EXTERN QTD_EXPORT void qtd_QGLFormat_setDefaultFormat_QGLFormat
(void* f0)
{
    const QGLFormat&  __qt_f0 = (const QGLFormat& ) *(QGLFormat *)f0;
    QGLFormat::setDefaultFormat((const QGLFormat& )__qt_f0);

}

// QGLFormat::setDefaultOverlayFormat(const QGLFormat & f)
QTD_EXTERN QTD_EXPORT void qtd_QGLFormat_setDefaultOverlayFormat_QGLFormat
(void* f0)
{
    const QGLFormat&  __qt_f0 = (const QGLFormat& ) *(QGLFormat *)f0;
    QGLFormat::setDefaultOverlayFormat((const QGLFormat& )__qt_f0);

}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QGLFormat_QTypeInfo_isComplex() { return (bool) QTypeInfo<QGLFormat>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QGLFormat_QTypeInfo_isStatic() { return (bool) QTypeInfo<QGLFormat>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QGLFormat_QTypeInfo_isLarge() { return (bool) QTypeInfo<QGLFormat>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QGLFormat_QTypeInfo_isPointer() { return (bool) QTypeInfo<QGLFormat>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QGLFormat_QTypeInfo_isDummy() { return (bool) QTypeInfo<QGLFormat>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QGLFormat_placed_copy(void* orig, void* place) {
    const QGLFormat&  __qt_orig = (const QGLFormat& ) *(QGLFormat *)orig;
    QGLFormat *result = new (place) QGLFormat (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QGLFormat_native_copy(void* orig) {
    const QGLFormat&  __qt_orig = (const QGLFormat& ) *(QGLFormat *)orig;
    QGLFormat *result = new QGLFormat (__qt_orig);
    return result;
}

