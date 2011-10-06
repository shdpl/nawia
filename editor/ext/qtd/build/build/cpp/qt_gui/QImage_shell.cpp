#include <QMatrix>
#include <QStringList>
#include <QVariant>
#include <qbytearray.h>
#include <qdatastream.h>
#include <qimage.h>
#include <qiodevice.h>
#include <qmatrix.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qstringlist.h>
#include <qtransform.h>
#include <qvariant.h>
#include <qvector.h>

#include "QImage_shell.h"
#include <iostream>
#include <qimage.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT QPaintDevice* qtd_QImage_cast_to_QPaintDevice(QImage *ptr)
{
    return dynamic_cast<QPaintDevice*>(ptr);
}

QTD_EXTERN QTD_EXPORT void qtd_QImage_delete(void* nativeId)
{
    delete (QImage_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QImage_destroy(void* nativeId)
{
    call_destructor((QImage_QtDShell*)nativeId);
}

QImage_QtDShell::QImage_QtDShell(void *d_ptr)
    : QImage(),
      QtdObjectLink(d_ptr)
{
}

QImage_QtDShell::QImage_QtDShell(void *d_ptr, const QImage&  arg__1)
    : QImage(arg__1),
      QtdObjectLink(d_ptr)
{
}

QImage_QtDShell::QImage_QtDShell(void *d_ptr, const QSize&  size0, QImage::Format  format1)
    : QImage(size0, format1),
      QtdObjectLink(d_ptr)
{
}

QImage_QtDShell::QImage_QtDShell(void *d_ptr, const QString&  fileName0, const char*  format1)
    : QImage(fileName0, format1),
      QtdObjectLink(d_ptr)
{
}

QImage_QtDShell::QImage_QtDShell(void *d_ptr, const char**  xpm0)
    : QImage(xpm0),
      QtdObjectLink(d_ptr)
{
}

QImage_QtDShell::QImage_QtDShell(void *d_ptr, int  width0, int  height1, QImage::Format  format2)
    : QImage(width0, height1, format2),
      QtdObjectLink(d_ptr)
{
}

QImage_QtDShell::QImage_QtDShell(void *d_ptr, unsigned char*  data0, int  width1, int  height2, QImage::Format  format3)
    : QImage(data0, width1, height2, format3),
      QtdObjectLink(d_ptr)
{
}

QImage_QtDShell::QImage_QtDShell(void *d_ptr, unsigned char*  data0, int  width1, int  height2, int  bytesPerLine3, QImage::Format  format4)
    : QImage(data0, width1, height2, bytesPerLine3, format4),
      QtdObjectLink(d_ptr)
{
}

QImage_QtDShell::~QImage_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QImage_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QImage*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QImage_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int metric0))
int  QImage_QtDShell::metric(QPaintDevice::PaintDeviceMetric  metric0) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(this->dId, (QPaintDevice::PaintDeviceMetric )metric0);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QImage_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(this->dId);
}

QTD_EXTERN QTD_EXPORT void qtd_QImage_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
int  QImage_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QImage::devType();
    } else {
        return devType();
    }
}

int  QImage_QtDShell::__override_metric(int  metric0, bool static_call) const
{
    if (static_call) {
        return QImage::metric((QPaintDevice::PaintDeviceMetric )metric0);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )metric0);
    }
}

QPaintEngine*  QImage_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QImage::paintEngine();
    } else {
        return paintEngine();
    }
}

// ---externC---
// QImage::QImage()
QTD_EXTERN QTD_EXPORT void* qtd_QImage_QImage
(void *d_ptr)
{
    QImage_QtDShell *__qt_this = new QImage_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QImage::QImage(const QImage & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QImage_QImage_QImage
(void *d_ptr,
 void* arg__1)
{
    const QImage&  __qt_arg__1 = (const QImage& ) *(QImage *)arg__1;
    QImage_QtDShell *__qt_this = new QImage_QtDShell(d_ptr, (const QImage& )__qt_arg__1);
    return (void *) __qt_this;

}

// QImage::QImage(const QSize & size, QImage::Format format)
QTD_EXTERN QTD_EXPORT void* qtd_QImage_QImage_QSize_Format
(void *d_ptr,
 QSize size0,
 int format1)
{
    QImage::Format __qt_format1 = (QImage::Format) format1;
    QImage_QtDShell *__qt_this = new QImage_QtDShell(d_ptr, (const QSize& )size0, (QImage::Format )__qt_format1);
    return (void *) __qt_this;

}

// QImage::QImage(const QString & fileName, const char * format)
QTD_EXTERN QTD_EXPORT void* qtd_QImage_QImage_string_nativepointerchar
(void *d_ptr,
 DArray fileName0,
 char* format1)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    const char*  __qt_format1 = (const char* ) format1;
    QImage_QtDShell *__qt_this = new QImage_QtDShell(d_ptr, (const QString& )__qt_fileName0, (const char* )__qt_format1);
    return (void *) __qt_this;

}

// QImage::QImage(const char ** xpm)
QTD_EXTERN QTD_EXPORT void* qtd_QImage_QImage_nativepointerchar
(void *d_ptr,
 char** xpm0)
{
    const char**  __qt_xpm0 = (const char** ) xpm0;
    QImage_QtDShell *__qt_this = new QImage_QtDShell(d_ptr, (const char** )__qt_xpm0);
    return (void *) __qt_this;

}

// QImage::QImage(int width, int height, QImage::Format format)
QTD_EXTERN QTD_EXPORT void* qtd_QImage_QImage_int_int_Format
(void *d_ptr,
 int width0,
 int height1,
 int format2)
{
    QImage::Format __qt_format2 = (QImage::Format) format2;
    QImage_QtDShell *__qt_this = new QImage_QtDShell(d_ptr, (int )width0, (int )height1, (QImage::Format )__qt_format2);
    return (void *) __qt_this;

}

// QImage::QImage(unsigned char * data, int width, int height, QImage::Format format)
QTD_EXTERN QTD_EXPORT void* qtd_QImage_QImage_nativepointerubyte_int_int_Format
(void *d_ptr,
 unsigned char* data0,
 int width1,
 int height2,
 int format3)
{
    unsigned char*  __qt_data0 = (unsigned char* ) data0;
    QImage::Format __qt_format3 = (QImage::Format) format3;
    QImage_QtDShell *__qt_this = new QImage_QtDShell(d_ptr, (unsigned char* )__qt_data0, (int )width1, (int )height2, (QImage::Format )__qt_format3);
    return (void *) __qt_this;

}

// QImage::QImage(unsigned char * data, int width, int height, int bytesPerLine, QImage::Format format)
QTD_EXTERN QTD_EXPORT void* qtd_QImage_QImage_nativepointerubyte_int_int_int_Format
(void *d_ptr,
 unsigned char* data0,
 int width1,
 int height2,
 int bytesPerLine3,
 int format4)
{
    unsigned char*  __qt_data0 = (unsigned char* ) data0;
    QImage::Format __qt_format4 = (QImage::Format) format4;
    QImage_QtDShell *__qt_this = new QImage_QtDShell(d_ptr, (unsigned char* )__qt_data0, (int )width1, (int )height2, (int )bytesPerLine3, (QImage::Format )__qt_format4);
    return (void *) __qt_this;

}

// QImage::allGray() const
QTD_EXTERN QTD_EXPORT bool qtd_QImage_allGray_const
(void* __this_nativeId)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->allGray();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::alphaChannel() const
QTD_EXTERN QTD_EXPORT void* qtd_QImage_alphaChannel_const
(void* __this_nativeId)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    QImage  __qt_return_value = __qt_this->alphaChannel();

    void* __d_return_value = (void*) new QImage(__qt_return_value);

    return __d_return_value;
}

// QImage::bitPlaneCount() const
QTD_EXTERN QTD_EXPORT int qtd_QImage_bitPlaneCount_const
(void* __this_nativeId)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->bitPlaneCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::bits()
QTD_EXTERN QTD_EXPORT unsigned char* qtd_QImage_bits
(void* __this_nativeId)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    unsigned char*  __qt_return_value = __qt_this->bits();

    unsigned char* __d_return_value = (unsigned char*) __qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QImage::byteCount() const
QTD_EXTERN QTD_EXPORT int qtd_QImage_byteCount_const
(void* __this_nativeId)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->byteCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::bytesPerLine() const
QTD_EXTERN QTD_EXPORT int qtd_QImage_bytesPerLine_const
(void* __this_nativeId)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->bytesPerLine();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::cacheKey() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QImage_cacheKey_const
(void* __this_nativeId)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->cacheKey();

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::color(int i) const
QTD_EXTERN QTD_EXPORT unsigned int qtd_QImage_color_int_const
(void* __this_nativeId,
 int i0)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    unsigned int  __qt_return_value = __qt_this->color((int )i0);

    unsigned int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::colorCount() const
QTD_EXTERN QTD_EXPORT int qtd_QImage_colorCount_const
(void* __this_nativeId)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::colorCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::colorTable() const
QTD_EXTERN QTD_EXPORT void qtd_QImage_colorTable_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    QVector<unsigned int >  __qt_return_value = __qt_this->colorTable();


    qtd_allocate_uint_array(__d_return_value, __qt_return_value.size());
    QVector<unsigned int > ::const_iterator __qt_return_value_end_it = __qt_return_value.constEnd();
    int i___qt_return_value = 0;
    for (QVector<unsigned int > ::const_iterator __qt_return_value_it = __qt_return_value.constBegin(); __qt_return_value_it != __qt_return_value_end_it; ++__qt_return_value_it) {
        unsigned int  __qt_tmp = *__qt_return_value_it;
        unsigned int __java_tmp = __qt_tmp;
        qtd_assign_uint_array_element(__d_return_value, i___qt_return_value, __java_tmp);
        ++i___qt_return_value;
    }

}

// QImage::constBits() const
QTD_EXTERN QTD_EXPORT unsigned char* qtd_QImage_constBits_const
(void* __this_nativeId)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    const unsigned char*  __qt_return_value = __qt_this->constBits();

    unsigned char* __d_return_value = (unsigned char*) __qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QImage::constScanLine(int arg__1) const
QTD_EXTERN QTD_EXPORT unsigned char* qtd_QImage_constScanLine_int_const
(void* __this_nativeId,
 int arg__1)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    const unsigned char*  __qt_return_value = __qt_this->constScanLine((int )arg__1);

    unsigned char* __d_return_value = (unsigned char*) __qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QImage::convertToFormat(QImage::Format f, QFlags<Qt::ImageConversionFlag> flags) const
QTD_EXTERN QTD_EXPORT void* qtd_QImage_convertToFormat_Format_ImageConversionFlags_const
(void* __this_nativeId,
 int f0,
 int flags1)
{
    QImage::Format __qt_f0 = (QImage::Format) f0;
    QFlags<Qt::ImageConversionFlag> __qt_flags1 = (QFlags<Qt::ImageConversionFlag>) flags1;
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    QImage  __qt_return_value = __qt_this->convertToFormat((QImage::Format )__qt_f0, (Qt::ImageConversionFlags )__qt_flags1);

    void* __d_return_value = (void*) new QImage(__qt_return_value);

    return __d_return_value;
}

// QImage::convertToFormat(QImage::Format f, const QVector<unsigned int > & colorTable, QFlags<Qt::ImageConversionFlag> flags) const
QTD_EXTERN QTD_EXPORT void* qtd_QImage_convertToFormat_Format_QVector_ImageConversionFlags_const
(void* __this_nativeId,
 int f0,
 DArray* colorTable1,
 int flags2)
{
    QImage::Format __qt_f0 = (QImage::Format) f0;
    QVector<unsigned int > __qt_colorTable1;
    __qt_colorTable1.reserve(colorTable1->length);
    for (int i=0; i<colorTable1->length; ++i) {
        unsigned int __d_element;
        qtd_get_uint_from_array(colorTable1, i, &__d_element);
        unsigned int  __qt_element = (unsigned int ) __d_element;
        __qt_colorTable1 << __qt_element;
    }
    QFlags<Qt::ImageConversionFlag> __qt_flags2 = (QFlags<Qt::ImageConversionFlag>) flags2;
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    QImage  __qt_return_value = __qt_this->convertToFormat((QImage::Format )__qt_f0, (const QVector<unsigned int >& )__qt_colorTable1, (Qt::ImageConversionFlags )__qt_flags2);

    void* __d_return_value = (void*) new QImage(__qt_return_value);

    return __d_return_value;
}

// QImage::copy(const QRect & rect) const
QTD_EXTERN QTD_EXPORT void* qtd_QImage_copy_QRect_const
(void* __this_nativeId,
 QRect rect0)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    QImage  __qt_return_value = __qt_this->copy((const QRect& )rect0);

    void* __d_return_value = (void*) new QImage(__qt_return_value);

    return __d_return_value;
}

// QImage::copy(int x, int y, int w, int h) const
QTD_EXTERN QTD_EXPORT void* qtd_QImage_copy_int_int_int_int_const
(void* __this_nativeId,
 int x0,
 int y1,
 int w2,
 int h3)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    QImage  __qt_return_value = __qt_this->copy((int )x0, (int )y1, (int )w2, (int )h3);

    void* __d_return_value = (void*) new QImage(__qt_return_value);

    return __d_return_value;
}

// QImage::createAlphaMask(QFlags<Qt::ImageConversionFlag> flags) const
QTD_EXTERN QTD_EXPORT void* qtd_QImage_createAlphaMask_ImageConversionFlags_const
(void* __this_nativeId,
 int flags0)
{
    QFlags<Qt::ImageConversionFlag> __qt_flags0 = (QFlags<Qt::ImageConversionFlag>) flags0;
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    QImage  __qt_return_value = __qt_this->createAlphaMask((Qt::ImageConversionFlags )__qt_flags0);

    void* __d_return_value = (void*) new QImage(__qt_return_value);

    return __d_return_value;
}

// QImage::createHeuristicMask(bool clipTight) const
QTD_EXTERN QTD_EXPORT void* qtd_QImage_createHeuristicMask_bool_const
(void* __this_nativeId,
 bool clipTight0)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    QImage  __qt_return_value = __qt_this->createHeuristicMask((bool )clipTight0);

    void* __d_return_value = (void*) new QImage(__qt_return_value);

    return __d_return_value;
}

// QImage::createMaskFromColor(unsigned int color, Qt::MaskMode mode) const
QTD_EXTERN QTD_EXPORT void* qtd_QImage_createMaskFromColor_uint_MaskMode_const
(void* __this_nativeId,
 unsigned int color0,
 int mode1)
{
    Qt::MaskMode __qt_mode1 = (Qt::MaskMode) mode1;
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    QImage  __qt_return_value = __qt_this->createMaskFromColor((unsigned int )color0, (Qt::MaskMode )__qt_mode1);

    void* __d_return_value = (void*) new QImage(__qt_return_value);

    return __d_return_value;
}

// QImage::depth() const
QTD_EXTERN QTD_EXPORT int qtd_QImage_depth_const
(void* __this_nativeId)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::depth();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::dotsPerMeterX() const
QTD_EXTERN QTD_EXPORT int qtd_QImage_dotsPerMeterX_const
(void* __this_nativeId)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->dotsPerMeterX();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::dotsPerMeterY() const
QTD_EXTERN QTD_EXPORT int qtd_QImage_dotsPerMeterY_const
(void* __this_nativeId)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->dotsPerMeterY();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::fill(uint pixel)
QTD_EXTERN QTD_EXPORT void qtd_QImage_fill_uint
(void* __this_nativeId,
 uint pixel0)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    __qt_this->fill((uint )pixel0);

}

// QImage::format() const
QTD_EXTERN QTD_EXPORT int qtd_QImage_format_const
(void* __this_nativeId)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->format();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::hasAlphaChannel() const
QTD_EXTERN QTD_EXPORT bool qtd_QImage_hasAlphaChannel_const
(void* __this_nativeId)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasAlphaChannel();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::height() const
QTD_EXTERN QTD_EXPORT int qtd_QImage_height_const
(void* __this_nativeId)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::height();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::heightMM() const
QTD_EXTERN QTD_EXPORT int qtd_QImage_heightMM_const
(void* __this_nativeId)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::heightMM();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::invertPixels(QImage::InvertMode arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QImage_invertPixels_InvertMode
(void* __this_nativeId,
 int arg__1)
{
    QImage::InvertMode __qt_arg__1 = (QImage::InvertMode) arg__1;
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    __qt_this->invertPixels((QImage::InvertMode )__qt_arg__1);

}

// QImage::isGrayscale() const
QTD_EXTERN QTD_EXPORT bool qtd_QImage_isGrayscale_const
(void* __this_nativeId)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isGrayscale();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::isNull() const
QTD_EXTERN QTD_EXPORT bool qtd_QImage_isNull_const
(void* __this_nativeId)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isNull();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::load(QIODevice * device, const char * format)
QTD_EXTERN QTD_EXPORT bool qtd_QImage_load_QIODevice_nativepointerchar
(void* __this_nativeId,
 void* device0,
 char* format1)
{
    QIODevice*  __qt_device0 = (QIODevice* ) device0;
    const char*  __qt_format1 = (const char* ) format1;
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->load((QIODevice* )__qt_device0, (const char* )__qt_format1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::load(const QString & fileName, const char * format)
QTD_EXTERN QTD_EXPORT bool qtd_QImage_load_string_nativepointerchar
(void* __this_nativeId,
 DArray fileName0,
 char* format1)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    const char*  __qt_format1 = (const char* ) format1;
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->load((const QString& )__qt_fileName0, (const char* )__qt_format1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::loadFromData(const QByteArray & data, const char * aformat)
QTD_EXTERN QTD_EXPORT bool qtd_QImage_loadFromData_QByteArray_nativepointerchar
(void* __this_nativeId,
 void* data0,
 char* aformat1)
{
    const QByteArray&  __qt_data0 = (const QByteArray& ) *(QByteArray *)data0;
    const char*  __qt_aformat1 = (const char* ) aformat1;
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->loadFromData((const QByteArray& )__qt_data0, (const char* )__qt_aformat1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::loadFromData(const unsigned char * buf, int len, const char * format)
QTD_EXTERN QTD_EXPORT bool qtd_QImage_loadFromData_nativepointerubyte_int_nativepointerchar
(void* __this_nativeId,
 unsigned char* buf0,
 int len1,
 char* format2)
{
    const unsigned char*  __qt_buf0 = (const unsigned char* ) buf0;
    const char*  __qt_format2 = (const char* ) format2;
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->loadFromData((const unsigned char* )__qt_buf0, (int )len1, (const char* )__qt_format2);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::logicalDpiX() const
QTD_EXTERN QTD_EXPORT int qtd_QImage_logicalDpiX_const
(void* __this_nativeId)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::logicalDpiX();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::logicalDpiY() const
QTD_EXTERN QTD_EXPORT int qtd_QImage_logicalDpiY_const
(void* __this_nativeId)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::logicalDpiY();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::mirrored(bool horizontally, bool vertically) const
QTD_EXTERN QTD_EXPORT void* qtd_QImage_mirrored_bool_bool_const
(void* __this_nativeId,
 bool horizontally0,
 bool vertically1)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    QImage  __qt_return_value = __qt_this->mirrored((bool )horizontally0, (bool )vertically1);

    void* __d_return_value = (void*) new QImage(__qt_return_value);

    return __d_return_value;
}

// QImage::numBytes() const
QTD_EXTERN QTD_EXPORT int qtd_QImage_numBytes_const
(void* __this_nativeId)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->numBytes();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::numColors() const
QTD_EXTERN QTD_EXPORT int qtd_QImage_numColors_const
(void* __this_nativeId)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::numColors();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::offset() const
QTD_EXTERN QTD_EXPORT void qtd_QImage_offset_const
(void* __this_nativeId,
 QPoint * __d_return_value)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    QPoint  __qt_return_value = __qt_this->offset();

    *__d_return_value = __qt_return_value;

}

// QImage::operator QVariant() const
QTD_EXTERN QTD_EXPORT void* qtd_QImage_operator_cast_QVariant_const
(void* __this_nativeId)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->operator QVariant();

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QImage::operator<<(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QImage_writeTo_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_arg__1, *__qt_this);

}

// QImage::operator==(const QImage & arg__1) const
QTD_EXTERN QTD_EXPORT bool qtd_QImage_operator_equal_QImage_const
(void* __this_nativeId,
 void* arg__1)
{
    const QImage&  __qt_arg__1 = (const QImage& ) *(QImage *)arg__1;
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->operator==((const QImage& )__qt_arg__1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::operator>>(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QImage_readFrom_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_arg__1, *__qt_this);

}

// QImage::paintingActive() const
QTD_EXTERN QTD_EXPORT bool qtd_QImage_paintingActive_const
(void* __this_nativeId)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QPaintDevice::paintingActive();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::physicalDpiX() const
QTD_EXTERN QTD_EXPORT int qtd_QImage_physicalDpiX_const
(void* __this_nativeId)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::physicalDpiX();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::physicalDpiY() const
QTD_EXTERN QTD_EXPORT int qtd_QImage_physicalDpiY_const
(void* __this_nativeId)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::physicalDpiY();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::pixel(const QPoint & pt) const
QTD_EXTERN QTD_EXPORT unsigned int qtd_QImage_pixel_QPoint_const
(void* __this_nativeId,
 QPoint pt0)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    unsigned int  __qt_return_value = __qt_this->pixel((const QPoint& )pt0);

    unsigned int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::pixel(int x, int y) const
QTD_EXTERN QTD_EXPORT unsigned int qtd_QImage_pixel_int_int_const
(void* __this_nativeId,
 int x0,
 int y1)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    unsigned int  __qt_return_value = __qt_this->pixel((int )x0, (int )y1);

    unsigned int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::pixelIndex(const QPoint & pt) const
QTD_EXTERN QTD_EXPORT int qtd_QImage_pixelIndex_QPoint_const
(void* __this_nativeId,
 QPoint pt0)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->pixelIndex((const QPoint& )pt0);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::pixelIndex(int x, int y) const
QTD_EXTERN QTD_EXPORT int qtd_QImage_pixelIndex_int_int_const
(void* __this_nativeId,
 int x0,
 int y1)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->pixelIndex((int )x0, (int )y1);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::rect() const
QTD_EXTERN QTD_EXPORT void qtd_QImage_rect_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->rect();

    *__d_return_value = __qt_return_value;

}

// QImage::rgbSwapped() const
QTD_EXTERN QTD_EXPORT void* qtd_QImage_rgbSwapped_const
(void* __this_nativeId)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    QImage  __qt_return_value = __qt_this->rgbSwapped();

    void* __d_return_value = (void*) new QImage(__qt_return_value);

    return __d_return_value;
}

// QImage::save(QIODevice * device, const char * format, int quality) const
QTD_EXTERN QTD_EXPORT bool qtd_QImage_private_save_QIODevice_nativepointerchar_int_const
(void* __this_nativeId,
 void* device0,
 char* format1,
 int quality2)
{
    QIODevice*  __qt_device0 = (QIODevice* ) device0;
    const char*  __qt_format1 = (const char* ) format1;
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->save((QIODevice* )__qt_device0, (const char* )__qt_format1, (int )quality2);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::save(const QString & fileName, const char * format, int quality) const
QTD_EXTERN QTD_EXPORT bool qtd_QImage_private_save_string_nativepointerchar_int_const
(void* __this_nativeId,
 DArray fileName0,
 char* format1,
 int quality2)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    const char*  __qt_format1 = (const char* ) format1;
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->save((const QString& )__qt_fileName0, (const char* )__qt_format1, (int )quality2);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::scaled(const QSize & s, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode) const
QTD_EXTERN QTD_EXPORT void* qtd_QImage_scaled_QSize_AspectRatioMode_TransformationMode_const
(void* __this_nativeId,
 QSize s0,
 int aspectMode1,
 int mode2)
{
    Qt::AspectRatioMode __qt_aspectMode1 = (Qt::AspectRatioMode) aspectMode1;
    Qt::TransformationMode __qt_mode2 = (Qt::TransformationMode) mode2;
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    QImage  __qt_return_value = __qt_this->scaled((const QSize& )s0, (Qt::AspectRatioMode )__qt_aspectMode1, (Qt::TransformationMode )__qt_mode2);

    void* __d_return_value = (void*) new QImage(__qt_return_value);

    return __d_return_value;
}

// QImage::scaled(int w, int h, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode) const
QTD_EXTERN QTD_EXPORT void* qtd_QImage_scaled_int_int_AspectRatioMode_TransformationMode_const
(void* __this_nativeId,
 int w0,
 int h1,
 int aspectMode2,
 int mode3)
{
    Qt::AspectRatioMode __qt_aspectMode2 = (Qt::AspectRatioMode) aspectMode2;
    Qt::TransformationMode __qt_mode3 = (Qt::TransformationMode) mode3;
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    QImage  __qt_return_value = __qt_this->scaled((int )w0, (int )h1, (Qt::AspectRatioMode )__qt_aspectMode2, (Qt::TransformationMode )__qt_mode3);

    void* __d_return_value = (void*) new QImage(__qt_return_value);

    return __d_return_value;
}

// QImage::scaledToHeight(int h, Qt::TransformationMode mode) const
QTD_EXTERN QTD_EXPORT void* qtd_QImage_scaledToHeight_int_TransformationMode_const
(void* __this_nativeId,
 int h0,
 int mode1)
{
    Qt::TransformationMode __qt_mode1 = (Qt::TransformationMode) mode1;
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    QImage  __qt_return_value = __qt_this->scaledToHeight((int )h0, (Qt::TransformationMode )__qt_mode1);

    void* __d_return_value = (void*) new QImage(__qt_return_value);

    return __d_return_value;
}

// QImage::scaledToWidth(int w, Qt::TransformationMode mode) const
QTD_EXTERN QTD_EXPORT void* qtd_QImage_scaledToWidth_int_TransformationMode_const
(void* __this_nativeId,
 int w0,
 int mode1)
{
    Qt::TransformationMode __qt_mode1 = (Qt::TransformationMode) mode1;
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    QImage  __qt_return_value = __qt_this->scaledToWidth((int )w0, (Qt::TransformationMode )__qt_mode1);

    void* __d_return_value = (void*) new QImage(__qt_return_value);

    return __d_return_value;
}

// QImage::scanLine(int arg__1)
QTD_EXTERN QTD_EXPORT unsigned char* qtd_QImage_scanLine_int
(void* __this_nativeId,
 int arg__1)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    unsigned char*  __qt_return_value = __qt_this->scanLine((int )arg__1);

    unsigned char* __d_return_value = (unsigned char*) __qt_return_value;// qtjambi_from_cpointer

    return __d_return_value;
}

// QImage::setAlphaChannel(const QImage & alphaChannel)
QTD_EXTERN QTD_EXPORT void qtd_QImage_setAlphaChannel_QImage
(void* __this_nativeId,
 void* alphaChannel0)
{
    const QImage&  __qt_alphaChannel0 = (const QImage& ) *(QImage *)alphaChannel0;
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    __qt_this->setAlphaChannel((const QImage& )__qt_alphaChannel0);

}

// QImage::setColor(int i, unsigned int c)
QTD_EXTERN QTD_EXPORT void qtd_QImage_setColor_int_uint
(void* __this_nativeId,
 int i0,
 unsigned int c1)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    __qt_this->setColor((int )i0, (unsigned int )c1);

}

// QImage::setColorCount(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QImage_setColorCount_int
(void* __this_nativeId,
 int arg__1)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    __qt_this->setColorCount((int )arg__1);

}

// QImage::setColorTable(const QVector<unsigned int > colors)
QTD_EXTERN QTD_EXPORT void qtd_QImage_setColorTable_QVector
(void* __this_nativeId,
 DArray* colors0)
{
    QVector<unsigned int > __qt_colors0;
    __qt_colors0.reserve(colors0->length);
    for (int i=0; i<colors0->length; ++i) {
        unsigned int __d_element;
        qtd_get_uint_from_array(colors0, i, &__d_element);
        unsigned int  __qt_element = (unsigned int ) __d_element;
        __qt_colors0 << __qt_element;
    }
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    __qt_this->setColorTable((const QVector<unsigned int > )__qt_colors0);

}

// QImage::setDotsPerMeterX(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QImage_setDotsPerMeterX_int
(void* __this_nativeId,
 int arg__1)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    __qt_this->setDotsPerMeterX((int )arg__1);

}

// QImage::setDotsPerMeterY(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QImage_setDotsPerMeterY_int
(void* __this_nativeId,
 int arg__1)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    __qt_this->setDotsPerMeterY((int )arg__1);

}

// QImage::setNumColors(int arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QImage_setNumColors_int
(void* __this_nativeId,
 int arg__1)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    __qt_this->setNumColors((int )arg__1);

}

// QImage::setOffset(const QPoint & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QImage_setOffset_QPoint
(void* __this_nativeId,
 QPoint arg__1)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    __qt_this->setOffset((const QPoint& )arg__1);

}

// QImage::setPixel(const QPoint & pt, uint index_or_rgb)
QTD_EXTERN QTD_EXPORT void qtd_QImage_setPixel_QPoint_uint
(void* __this_nativeId,
 QPoint pt0,
 uint index_or_rgb1)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    __qt_this->setPixel((const QPoint& )pt0, (uint )index_or_rgb1);

}

// QImage::setPixel(int x, int y, uint index_or_rgb)
QTD_EXTERN QTD_EXPORT void qtd_QImage_setPixel_int_int_uint
(void* __this_nativeId,
 int x0,
 int y1,
 uint index_or_rgb2)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    __qt_this->setPixel((int )x0, (int )y1, (uint )index_or_rgb2);

}

// QImage::setText(const QString & key, const QString & value)
QTD_EXTERN QTD_EXPORT void qtd_QImage_setText_string_string
(void* __this_nativeId,
 DArray key0,
 DArray value1)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QString __qt_value1 = QString::fromUtf8((const char *)value1.ptr, value1.length);
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    __qt_this->setText((const QString& )__qt_key0, (const QString& )__qt_value1);

}

// QImage::size() const
QTD_EXTERN QTD_EXPORT void qtd_QImage_size_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->size();

    *__d_return_value = __qt_return_value;

}

// QImage::text(const QString & key) const
QTD_EXTERN QTD_EXPORT void qtd_QImage_text_string_const
(void* __this_nativeId,
 void* __d_return_value,
 DArray key0)
{
    QString __qt_key0 = QString::fromUtf8((const char *)key0.ptr, key0.length);
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    QString  __qt_return_value = __qt_this->text((const QString& )__qt_key0);

    qtd_toUtf8(__qt_return_value.utf16(), __qt_return_value.size(), __d_return_value);

}

// QImage::textKeys() const
QTD_EXTERN QTD_EXPORT void qtd_QImage_textKeys_const
(void* __this_nativeId,
 void* __d_return_value)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    QStringList  __qt_return_value = __qt_this->textKeys();

QStringList &__d_return_value_tmp = (*(QStringList *)__d_return_value);
    __d_return_value_tmp = __qt_return_value;

}

// QImage::transformed(const QMatrix & matrix, Qt::TransformationMode mode) const
QTD_EXTERN QTD_EXPORT void* qtd_QImage_transformed_QMatrix_TransformationMode_const
(void* __this_nativeId,
 void* matrix0,
 int mode1)
{
    const QMatrix&  __qt_matrix0 = (const QMatrix& ) *(QMatrix *)matrix0;
    Qt::TransformationMode __qt_mode1 = (Qt::TransformationMode) mode1;
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    QImage  __qt_return_value = __qt_this->transformed((const QMatrix& )__qt_matrix0, (Qt::TransformationMode )__qt_mode1);

    void* __d_return_value = (void*) new QImage(__qt_return_value);

    return __d_return_value;
}

// QImage::transformed(const QTransform & matrix, Qt::TransformationMode mode) const
QTD_EXTERN QTD_EXPORT void* qtd_QImage_transformed_QTransform_TransformationMode_const
(void* __this_nativeId,
 void* matrix0,
 int mode1)
{
    const QTransform&  __qt_matrix0 = (const QTransform& ) *(QTransform *)matrix0;
    Qt::TransformationMode __qt_mode1 = (Qt::TransformationMode) mode1;
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    QImage  __qt_return_value = __qt_this->transformed((const QTransform& )__qt_matrix0, (Qt::TransformationMode )__qt_mode1);

    void* __d_return_value = (void*) new QImage(__qt_return_value);

    return __d_return_value;
}

// QImage::valid(const QPoint & pt) const
QTD_EXTERN QTD_EXPORT bool qtd_QImage_valid_QPoint_const
(void* __this_nativeId,
 QPoint pt0)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->valid((const QPoint& )pt0);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::valid(int x, int y) const
QTD_EXTERN QTD_EXPORT bool qtd_QImage_valid_int_int_const
(void* __this_nativeId,
 int x0,
 int y1)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->valid((int )x0, (int )y1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::width() const
QTD_EXTERN QTD_EXPORT int qtd_QImage_width_const
(void* __this_nativeId)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::width();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::widthMM() const
QTD_EXTERN QTD_EXPORT int qtd_QImage_widthMM_const
(void* __this_nativeId)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::widthMM();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::devType() const
QTD_EXTERN QTD_EXPORT int qtd_QImage_devType_const
(void* __this_nativeId)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QImage*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_devType(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::metric(QPaintDevice::PaintDeviceMetric metric) const
QTD_EXTERN QTD_EXPORT int qtd_QImage_metric_PaintDeviceMetric_const
(void* __this_nativeId,
 int metric0)
{
    QPaintDevice::PaintDeviceMetric __qt_metric0 = (QPaintDevice::PaintDeviceMetric) metric0;
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QImage*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_metric((QPaintDevice::PaintDeviceMetric )__qt_metric0, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QImage::paintEngine() const
QTD_EXTERN QTD_EXPORT void* qtd_QImage_paintEngine_const
(void* __this_nativeId)
{
    QImage_QtDShell *__qt_this = (QImage_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QImage*)__this_nativeId) != NULL;
    QPaintEngine*  __qt_return_value = __qt_this->__override_paintEngine(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QImage::fromData(const QByteArray & data, const char * format)
QTD_EXTERN QTD_EXPORT void* qtd_QImage_fromData_QByteArray_nativepointerchar
(void* data0,
 char* format1)
{
    const QByteArray&  __qt_data0 = (const QByteArray& ) *(QByteArray *)data0;
    const char*  __qt_format1 = (const char* ) format1;
    QImage  __qt_return_value = QImage_QtDShell::fromData((const QByteArray& )__qt_data0, (const char* )__qt_format1);

    void* __d_return_value = (void*) new QImage(__qt_return_value);

    return __d_return_value;
}

// QImage::trueMatrix(const QMatrix & arg__1, int w, int h)
QTD_EXTERN QTD_EXPORT void* qtd_QImage_trueMatrix_QMatrix_int_int
(void* arg__1,
 int w1,
 int h2)
{
    const QMatrix&  __qt_arg__1 = (const QMatrix& ) *(QMatrix *)arg__1;
    QMatrix  __qt_return_value = QImage_QtDShell::trueMatrix((const QMatrix& )__qt_arg__1, (int )w1, (int )h2);

    void* __d_return_value = (void*) new QMatrix(__qt_return_value);

    return __d_return_value;
}

// QImage::trueMatrix(const QTransform & arg__1, int w, int h)
QTD_EXTERN QTD_EXPORT void* qtd_QImage_trueMatrix_QTransform_int_int
(void* arg__1,
 int w1,
 int h2)
{
    const QTransform&  __qt_arg__1 = (const QTransform& ) *(QTransform *)arg__1;
    QTransform  __qt_return_value = QImage_QtDShell::trueMatrix((const QTransform& )__qt_arg__1, (int )w1, (int )h2);

    void* __d_return_value = (void*) new QTransform(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QImage_QTypeInfo_isComplex() { return (bool) QTypeInfo<QImage>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QImage_QTypeInfo_isStatic() { return (bool) QTypeInfo<QImage>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QImage_QTypeInfo_isLarge() { return (bool) QTypeInfo<QImage>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QImage_QTypeInfo_isPointer() { return (bool) QTypeInfo<QImage>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QImage_QTypeInfo_isDummy() { return (bool) QTypeInfo<QImage>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QImage_placed_copy(void* orig, void* place) {
    const QImage_QtDShell&  __qt_orig = (const QImage_QtDShell& ) *(QImage_QtDShell *)orig;
    QImage *result = new (place) QImage (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QImage_native_copy(void* orig) {
    const QImage_QtDShell&  __qt_orig = (const QImage_QtDShell& ) *(QImage_QtDShell *)orig;
    QImage *result = new QImage (__qt_orig);
    return result;
}

