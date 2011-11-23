#include <QBitmap>
#include <QMatrix>
#include <QVariant>
#include <qbitmap.h>
#include <qbytearray.h>
#include <qcolor.h>
#include <qdatastream.h>
#include <qimage.h>
#include <qimagereader.h>
#include <qimagewriter.h>
#include <qiodevice.h>
#include <qmatrix.h>
#include <qpaintdevice.h>
#include <qpaintengine.h>
#include <qpixmap.h>
#include <qregion.h>
#include <qtransform.h>
#include <qvariant.h>
#include <qwidget.h>

#include "QPixmap_shell.h"
#include <iostream>
#include <qpixmap.h>

#include "qtd_core.h"
#include "ArrayOpsPrimitive.h"
#include "ArrayOps_qt_core.h"
#include "ArrayOps_qt_gui.h"

QTD_EXTERN QTD_EXPORT QPaintDevice* qtd_QPixmap_cast_to_QPaintDevice(QPixmap *ptr)
{
    return dynamic_cast<QPaintDevice*>(ptr);
}

QTD_EXTERN QTD_EXPORT void qtd_QPixmap_delete(void* nativeId)
{
    delete (QPixmap_QtDShell*)nativeId;
}

QTD_EXTERN QTD_EXPORT void qtd_QPixmap_destroy(void* nativeId)
{
    call_destructor((QPixmap_QtDShell*)nativeId);
}

QPixmap_QtDShell::QPixmap_QtDShell(void *d_ptr)
    : QPixmap(),
      QtdObjectLink(d_ptr)
{
}

QPixmap_QtDShell::QPixmap_QtDShell(void *d_ptr, const QPixmap&  arg__1)
    : QPixmap(arg__1),
      QtdObjectLink(d_ptr)
{
}

QPixmap_QtDShell::QPixmap_QtDShell(void *d_ptr, const QSize&  arg__1)
    : QPixmap(arg__1),
      QtdObjectLink(d_ptr)
{
}

QPixmap_QtDShell::QPixmap_QtDShell(void *d_ptr, const QString&  fileName0, const char*  format1, Qt::ImageConversionFlags  flags2)
    : QPixmap(fileName0, format1, flags2),
      QtdObjectLink(d_ptr)
{
}

QPixmap_QtDShell::QPixmap_QtDShell(void *d_ptr, const char**  xpm0)
    : QPixmap(xpm0),
      QtdObjectLink(d_ptr)
{
}

QPixmap_QtDShell::QPixmap_QtDShell(void *d_ptr, int  w0, int  h1)
    : QPixmap(w0, h1),
      QtdObjectLink(d_ptr)
{
}

QPixmap_QtDShell::~QPixmap_QtDShell() {
}

QTD_EXTERN QTD_EXPORT void *__QPixmap_entity(void *q_ptr)
{
    QtdObjectLink* a = dynamic_cast<QtdObjectLink*>((QPixmap*)q_ptr);
    if (a != NULL)
        return a->dId;
    else
        return NULL;
}

// Virtual overrides
QTD_FUNC_DECL(GUI, int, QPaintDevice_devType_const_dispatch, (void *dId))
int  QPixmap_QtDShell::devType() const
{
    return qtd_QPaintDevice_devType_const_dispatch(this->dId);
}

QTD_FUNC_DECL(GUI, int, QPaintDevice_metric_PaintDeviceMetric_const_dispatch, (void *dId, int arg__1))
int  QPixmap_QtDShell::metric(QPaintDevice::PaintDeviceMetric  arg__1) const
{
    return qtd_QPaintDevice_metric_PaintDeviceMetric_const_dispatch(this->dId, (QPaintDevice::PaintDeviceMetric )arg__1);
}

QTD_FUNC_DECL(GUI, void*, QPaintDevice_paintEngine_const_dispatch, (void *dId))
QPaintEngine*  QPixmap_QtDShell::paintEngine() const
{
    return (QPaintEngine*) qtd_QPaintDevice_paintEngine_const_dispatch(this->dId);
}

QTD_EXTERN QTD_EXPORT void qtd_QPixmap_initCallBacks(VoidFunc *virts) {
}
// Functions in shell class
// public overrides for functions that are protected in the base class
// Write virtual function overries used to decide on static/virtual calls
int  QPixmap_QtDShell::__override_devType(bool static_call) const
{
    if (static_call) {
        return QPixmap::devType();
    } else {
        return devType();
    }
}

int  QPixmap_QtDShell::__override_metric(int  arg__1, bool static_call) const
{
    if (static_call) {
        return QPixmap::metric((QPaintDevice::PaintDeviceMetric )arg__1);
    } else {
        return metric((QPaintDevice::PaintDeviceMetric )arg__1);
    }
}

QPaintEngine*  QPixmap_QtDShell::__override_paintEngine(bool static_call) const
{
    if (static_call) {
        return QPixmap::paintEngine();
    } else {
        return paintEngine();
    }
}

// TEMPLATE - gui.class_from_variant_native_shell - START
// QPixmap from QVariant
QTD_EXTERN QTD_EXPORT void* qtd_QPixmap_QPixmap_QVariant
    (void *d_ptr,
    void* arg__1)
{
    const QVariant&  __qt_arg__1 = (const QVariant& ) *(QVariant *)arg__1;
    QPixmap __qt_casted = qvariant_cast<QPixmap>(__qt_arg__1);
    QPixmap_QtDShell *__qt_this = new QPixmap_QtDShell(d_ptr, (const QPixmap& )__qt_casted);
    return (void *) __qt_this;
}
// TEMPLATE - gui.class_from_variant_native_shell - END


// ---externC---
// QPixmap::QPixmap()
QTD_EXTERN QTD_EXPORT void* qtd_QPixmap_QPixmap
(void *d_ptr)
{
    QPixmap_QtDShell *__qt_this = new QPixmap_QtDShell(d_ptr);
    return (void *) __qt_this;

}

// QPixmap::QPixmap(const QPixmap & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QPixmap_QPixmap_QPixmap
(void *d_ptr,
 void* arg__1)
{
    const QPixmap&  __qt_arg__1 = (const QPixmap& ) *(QPixmap *)arg__1;
    QPixmap_QtDShell *__qt_this = new QPixmap_QtDShell(d_ptr, (const QPixmap& )__qt_arg__1);
    return (void *) __qt_this;

}

// QPixmap::QPixmap(const QSize & arg__1)
QTD_EXTERN QTD_EXPORT void* qtd_QPixmap_QPixmap_QSize
(void *d_ptr,
 QSize arg__1)
{
    QPixmap_QtDShell *__qt_this = new QPixmap_QtDShell(d_ptr, (const QSize& )arg__1);
    return (void *) __qt_this;

}

// QPixmap::QPixmap(const QString & fileName, const char * format, QFlags<Qt::ImageConversionFlag> flags)
QTD_EXTERN QTD_EXPORT void* qtd_QPixmap_QPixmap_string_nativepointerchar_ImageConversionFlags
(void *d_ptr,
 DArray fileName0,
 char* format1,
 int flags2)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    const char*  __qt_format1 = (const char* ) format1;
    QFlags<Qt::ImageConversionFlag> __qt_flags2 = (QFlags<Qt::ImageConversionFlag>) flags2;
    QPixmap_QtDShell *__qt_this = new QPixmap_QtDShell(d_ptr, (const QString& )__qt_fileName0, (const char* )__qt_format1, (Qt::ImageConversionFlags )__qt_flags2);
    return (void *) __qt_this;

}

// QPixmap::QPixmap(const char ** xpm)
QTD_EXTERN QTD_EXPORT void* qtd_QPixmap_QPixmap_nativepointerchar
(void *d_ptr,
 char** xpm0)
{
    const char**  __qt_xpm0 = (const char** ) xpm0;
    QPixmap_QtDShell *__qt_this = new QPixmap_QtDShell(d_ptr, (const char** )__qt_xpm0);
    return (void *) __qt_this;

}

// QPixmap::QPixmap(int w, int h)
QTD_EXTERN QTD_EXPORT void* qtd_QPixmap_QPixmap_int_int
(void *d_ptr,
 int w0,
 int h1)
{
    QPixmap_QtDShell *__qt_this = new QPixmap_QtDShell(d_ptr, (int )w0, (int )h1);
    return (void *) __qt_this;

}

// QPixmap::alphaChannel() const
QTD_EXTERN QTD_EXPORT void* qtd_QPixmap_alphaChannel_const
(void* __this_nativeId)
{
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    QPixmap  __qt_return_value = __qt_this->alphaChannel();

    void* __d_return_value = (void*) new QPixmap(__qt_return_value);

    return __d_return_value;
}

// QPixmap::cacheKey() const
QTD_EXTERN QTD_EXPORT qint64 qtd_QPixmap_cacheKey_const
(void* __this_nativeId)
{
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    qint64  __qt_return_value = __qt_this->cacheKey();

    qint64 __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPixmap::colorCount() const
QTD_EXTERN QTD_EXPORT int qtd_QPixmap_colorCount_const
(void* __this_nativeId)
{
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::colorCount();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPixmap::convertFromImage(const QImage & img, QFlags<Qt::ImageConversionFlag> flags)
QTD_EXTERN QTD_EXPORT bool qtd_QPixmap_convertFromImage_QImage_ImageConversionFlags
(void* __this_nativeId,
 void* img0,
 int flags1)
{
    const QImage&  __qt_img0 = (const QImage& ) *(QImage *)img0;
    QFlags<Qt::ImageConversionFlag> __qt_flags1 = (QFlags<Qt::ImageConversionFlag>) flags1;
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->convertFromImage((const QImage& )__qt_img0, (Qt::ImageConversionFlags )__qt_flags1);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPixmap::copy(const QRect & rect) const
QTD_EXTERN QTD_EXPORT void* qtd_QPixmap_copy_QRect_const
(void* __this_nativeId,
 QRect rect0)
{
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    QPixmap  __qt_return_value = __qt_this->copy((const QRect& )rect0);

    void* __d_return_value = (void*) new QPixmap(__qt_return_value);

    return __d_return_value;
}

// QPixmap::copy(int x, int y, int width, int height) const
QTD_EXTERN QTD_EXPORT void* qtd_QPixmap_copy_int_int_int_int_const
(void* __this_nativeId,
 int x0,
 int y1,
 int width2,
 int height3)
{
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    QPixmap  __qt_return_value = __qt_this->copy((int )x0, (int )y1, (int )width2, (int )height3);

    void* __d_return_value = (void*) new QPixmap(__qt_return_value);

    return __d_return_value;
}

// QPixmap::createHeuristicMask(bool clipTight) const
QTD_EXTERN QTD_EXPORT void* qtd_QPixmap_createHeuristicMask_bool_const
(void* __this_nativeId,
 bool clipTight0)
{
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    QBitmap  __qt_return_value = __qt_this->createHeuristicMask((bool )clipTight0);

    void* __d_return_value = (void*) new QBitmap(__qt_return_value);

    return __d_return_value;
}

// QPixmap::createMaskFromColor(const QColor & maskColor) const
QTD_EXTERN QTD_EXPORT void* qtd_QPixmap_createMaskFromColor_QColor_const
(void* __this_nativeId,
 void* maskColor0)
{
    const QColor&  __qt_maskColor0 = (const QColor& ) *(QColor *)maskColor0;
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    QBitmap  __qt_return_value = __qt_this->createMaskFromColor((const QColor& )__qt_maskColor0);

    void* __d_return_value = (void*) new QBitmap(__qt_return_value);

    return __d_return_value;
}

// QPixmap::createMaskFromColor(const QColor & maskColor, Qt::MaskMode mode) const
QTD_EXTERN QTD_EXPORT void* qtd_QPixmap_createMaskFromColor_QColor_MaskMode_const
(void* __this_nativeId,
 void* maskColor0,
 int mode1)
{
    const QColor&  __qt_maskColor0 = (const QColor& ) *(QColor *)maskColor0;
    Qt::MaskMode __qt_mode1 = (Qt::MaskMode) mode1;
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    QBitmap  __qt_return_value = __qt_this->createMaskFromColor((const QColor& )__qt_maskColor0, (Qt::MaskMode )__qt_mode1);

    void* __d_return_value = (void*) new QBitmap(__qt_return_value);

    return __d_return_value;
}

// QPixmap::depth() const
QTD_EXTERN QTD_EXPORT int qtd_QPixmap_depth_const
(void* __this_nativeId)
{
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::depth();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPixmap::fill(const QColor & fillColor)
QTD_EXTERN QTD_EXPORT void qtd_QPixmap_fill_QColor
(void* __this_nativeId,
 void* fillColor0)
{
    const QColor&  __qt_fillColor0 = (const QColor& ) *(QColor *)fillColor0;
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    __qt_this->fill((const QColor& )__qt_fillColor0);

}

// QPixmap::fill(const QWidget * widget, const QPoint & ofs)
QTD_EXTERN QTD_EXPORT void qtd_QPixmap_fill_QWidget_QPoint
(void* __this_nativeId,
 void* widget0,
 QPoint ofs1)
{
    const QWidget*  __qt_widget0 = (const QWidget* ) widget0;
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    __qt_this->fill((const QWidget* )__qt_widget0, (const QPoint& )ofs1);

}

// QPixmap::fill(const QWidget * widget, int xofs, int yofs)
QTD_EXTERN QTD_EXPORT void qtd_QPixmap_fill_QWidget_int_int
(void* __this_nativeId,
 void* widget0,
 int xofs1,
 int yofs2)
{
    const QWidget*  __qt_widget0 = (const QWidget* ) widget0;
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    __qt_this->fill((const QWidget* )__qt_widget0, (int )xofs1, (int )yofs2);

}

// QPixmap::hasAlpha() const
QTD_EXTERN QTD_EXPORT bool qtd_QPixmap_hasAlpha_const
(void* __this_nativeId)
{
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasAlpha();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPixmap::hasAlphaChannel() const
QTD_EXTERN QTD_EXPORT bool qtd_QPixmap_hasAlphaChannel_const
(void* __this_nativeId)
{
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->hasAlphaChannel();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPixmap::height() const
QTD_EXTERN QTD_EXPORT int qtd_QPixmap_height_const
(void* __this_nativeId)
{
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::height();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPixmap::heightMM() const
QTD_EXTERN QTD_EXPORT int qtd_QPixmap_heightMM_const
(void* __this_nativeId)
{
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::heightMM();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPixmap::isNull() const
QTD_EXTERN QTD_EXPORT bool qtd_QPixmap_isNull_const
(void* __this_nativeId)
{
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isNull();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPixmap::isQBitmap() const
QTD_EXTERN QTD_EXPORT bool qtd_QPixmap_isQBitmap_const
(void* __this_nativeId)
{
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->isQBitmap();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPixmap::load(const QString & fileName, const char * format, QFlags<Qt::ImageConversionFlag> flags)
QTD_EXTERN QTD_EXPORT bool qtd_QPixmap_load_string_nativepointerchar_ImageConversionFlags
(void* __this_nativeId,
 DArray fileName0,
 char* format1,
 int flags2)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    const char*  __qt_format1 = (const char* ) format1;
    QFlags<Qt::ImageConversionFlag> __qt_flags2 = (QFlags<Qt::ImageConversionFlag>) flags2;
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->load((const QString& )__qt_fileName0, (const char* )__qt_format1, (Qt::ImageConversionFlags )__qt_flags2);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPixmap::loadFromData(const QByteArray & data, const char * format, QFlags<Qt::ImageConversionFlag> flags)
QTD_EXTERN QTD_EXPORT bool qtd_QPixmap_loadFromData_QByteArray_nativepointerchar_ImageConversionFlags
(void* __this_nativeId,
 void* data0,
 char* format1,
 int flags2)
{
    const QByteArray&  __qt_data0 = (const QByteArray& ) *(QByteArray *)data0;
    const char*  __qt_format1 = (const char* ) format1;
    QFlags<Qt::ImageConversionFlag> __qt_flags2 = (QFlags<Qt::ImageConversionFlag>) flags2;
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->loadFromData((const QByteArray& )__qt_data0, (const char* )__qt_format1, (Qt::ImageConversionFlags )__qt_flags2);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPixmap::loadFromData(const unsigned char * buf, uint len, const char * format, QFlags<Qt::ImageConversionFlag> flags)
QTD_EXTERN QTD_EXPORT bool qtd_QPixmap_loadFromData_nativepointerubyte_uint_nativepointerchar_ImageConversionFlags
(void* __this_nativeId,
 unsigned char* buf0,
 uint len1,
 char* format2,
 int flags3)
{
    const unsigned char*  __qt_buf0 = (const unsigned char* ) buf0;
    const char*  __qt_format2 = (const char* ) format2;
    QFlags<Qt::ImageConversionFlag> __qt_flags3 = (QFlags<Qt::ImageConversionFlag>) flags3;
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->loadFromData((const unsigned char* )__qt_buf0, (uint )len1, (const char* )__qt_format2, (Qt::ImageConversionFlags )__qt_flags3);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPixmap::logicalDpiX() const
QTD_EXTERN QTD_EXPORT int qtd_QPixmap_logicalDpiX_const
(void* __this_nativeId)
{
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::logicalDpiX();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPixmap::logicalDpiY() const
QTD_EXTERN QTD_EXPORT int qtd_QPixmap_logicalDpiY_const
(void* __this_nativeId)
{
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::logicalDpiY();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPixmap::mask() const
QTD_EXTERN QTD_EXPORT void* qtd_QPixmap_mask_const
(void* __this_nativeId)
{
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    QBitmap  __qt_return_value = __qt_this->mask();

    void* __d_return_value = (void*) new QBitmap(__qt_return_value);

    return __d_return_value;
}

// QPixmap::numColors() const
QTD_EXTERN QTD_EXPORT int qtd_QPixmap_numColors_const
(void* __this_nativeId)
{
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::numColors();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPixmap::operator QVariant() const
QTD_EXTERN QTD_EXPORT void* qtd_QPixmap_operator_cast_QVariant_const
(void* __this_nativeId)
{
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    QVariant  __qt_return_value = __qt_this->operator QVariant();

    QVariant *__d_return_value = new QVariant(__qt_return_value);

    return __d_return_value;
}

// QPixmap::operator<<(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPixmap_writeTo_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    if (__qt_this != 0) ::operator<<((QDataStream& )__qt_arg__1, *__qt_this);

}

// QPixmap::operator>>(QDataStream & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPixmap_readFrom_QDataStream
(void* __this_nativeId,
 void* arg__1)
{
    QDataStream&  __qt_arg__1 = (QDataStream& ) * (QDataStream *) arg__1;
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    if (__qt_this != 0) ::operator>>((QDataStream& )__qt_arg__1, *__qt_this);

}

// QPixmap::paintingActive() const
QTD_EXTERN QTD_EXPORT bool qtd_QPixmap_paintingActive_const
(void* __this_nativeId)
{
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->QPaintDevice::paintingActive();

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPixmap::physicalDpiX() const
QTD_EXTERN QTD_EXPORT int qtd_QPixmap_physicalDpiX_const
(void* __this_nativeId)
{
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::physicalDpiX();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPixmap::physicalDpiY() const
QTD_EXTERN QTD_EXPORT int qtd_QPixmap_physicalDpiY_const
(void* __this_nativeId)
{
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::physicalDpiY();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPixmap::rect() const
QTD_EXTERN QTD_EXPORT void qtd_QPixmap_rect_const
(void* __this_nativeId,
 QRect * __d_return_value)
{
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    QRect  __qt_return_value = __qt_this->rect();

    *__d_return_value = __qt_return_value;

}

// QPixmap::save(QIODevice * device, const char * format, int quality) const
QTD_EXTERN QTD_EXPORT bool qtd_QPixmap_private_save_QIODevice_nativepointerchar_int_const
(void* __this_nativeId,
 void* device0,
 char* format1,
 int quality2)
{
    QIODevice*  __qt_device0 = (QIODevice* ) device0;
    const char*  __qt_format1 = (const char* ) format1;
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->save((QIODevice* )__qt_device0, (const char* )__qt_format1, (int )quality2);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPixmap::save(const QString & fileName, const char * format, int quality) const
QTD_EXTERN QTD_EXPORT bool qtd_QPixmap_private_save_string_nativepointerchar_int_const
(void* __this_nativeId,
 DArray fileName0,
 char* format1,
 int quality2)
{
    QString __qt_fileName0 = QString::fromUtf8((const char *)fileName0.ptr, fileName0.length);
    const char*  __qt_format1 = (const char* ) format1;
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    bool  __qt_return_value = __qt_this->save((const QString& )__qt_fileName0, (const char* )__qt_format1, (int )quality2);

    bool __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPixmap::scaled(const QSize & s, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode) const
QTD_EXTERN QTD_EXPORT void* qtd_QPixmap_scaled_QSize_AspectRatioMode_TransformationMode_const
(void* __this_nativeId,
 QSize s0,
 int aspectMode1,
 int mode2)
{
    Qt::AspectRatioMode __qt_aspectMode1 = (Qt::AspectRatioMode) aspectMode1;
    Qt::TransformationMode __qt_mode2 = (Qt::TransformationMode) mode2;
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    QPixmap  __qt_return_value = __qt_this->scaled((const QSize& )s0, (Qt::AspectRatioMode )__qt_aspectMode1, (Qt::TransformationMode )__qt_mode2);

    void* __d_return_value = (void*) new QPixmap(__qt_return_value);

    return __d_return_value;
}

// QPixmap::scaled(int w, int h, Qt::AspectRatioMode aspectMode, Qt::TransformationMode mode) const
QTD_EXTERN QTD_EXPORT void* qtd_QPixmap_scaled_int_int_AspectRatioMode_TransformationMode_const
(void* __this_nativeId,
 int w0,
 int h1,
 int aspectMode2,
 int mode3)
{
    Qt::AspectRatioMode __qt_aspectMode2 = (Qt::AspectRatioMode) aspectMode2;
    Qt::TransformationMode __qt_mode3 = (Qt::TransformationMode) mode3;
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    QPixmap  __qt_return_value = __qt_this->scaled((int )w0, (int )h1, (Qt::AspectRatioMode )__qt_aspectMode2, (Qt::TransformationMode )__qt_mode3);

    void* __d_return_value = (void*) new QPixmap(__qt_return_value);

    return __d_return_value;
}

// QPixmap::scaledToHeight(int h, Qt::TransformationMode mode) const
QTD_EXTERN QTD_EXPORT void* qtd_QPixmap_scaledToHeight_int_TransformationMode_const
(void* __this_nativeId,
 int h0,
 int mode1)
{
    Qt::TransformationMode __qt_mode1 = (Qt::TransformationMode) mode1;
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    QPixmap  __qt_return_value = __qt_this->scaledToHeight((int )h0, (Qt::TransformationMode )__qt_mode1);

    void* __d_return_value = (void*) new QPixmap(__qt_return_value);

    return __d_return_value;
}

// QPixmap::scaledToWidth(int w, Qt::TransformationMode mode) const
QTD_EXTERN QTD_EXPORT void* qtd_QPixmap_scaledToWidth_int_TransformationMode_const
(void* __this_nativeId,
 int w0,
 int mode1)
{
    Qt::TransformationMode __qt_mode1 = (Qt::TransformationMode) mode1;
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    QPixmap  __qt_return_value = __qt_this->scaledToWidth((int )w0, (Qt::TransformationMode )__qt_mode1);

    void* __d_return_value = (void*) new QPixmap(__qt_return_value);

    return __d_return_value;
}

// QPixmap::scroll(int dx, int dy, const QRect & rect, QRegion * exposed)
QTD_EXTERN QTD_EXPORT void qtd_QPixmap_scroll_int_int_QRect_nativepointerQRegion
(void* __this_nativeId,
 int dx0,
 int dy1,
 QRect rect2,
 void* exposed3)
{
    QRegion*  __qt_exposed3 = (QRegion* ) exposed3;
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    __qt_this->scroll((int )dx0, (int )dy1, (const QRect& )rect2, (QRegion* )__qt_exposed3);

}

// QPixmap::scroll(int dx, int dy, int x, int y, int width, int height, QRegion * exposed)
QTD_EXTERN QTD_EXPORT void qtd_QPixmap_scroll_int_int_int_int_int_int_nativepointerQRegion
(void* __this_nativeId,
 int dx0,
 int dy1,
 int x2,
 int y3,
 int width4,
 int height5,
 void* exposed6)
{
    QRegion*  __qt_exposed6 = (QRegion* ) exposed6;
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    __qt_this->scroll((int )dx0, (int )dy1, (int )x2, (int )y3, (int )width4, (int )height5, (QRegion* )__qt_exposed6);

}

// QPixmap::setAlphaChannel(const QPixmap & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPixmap_setAlphaChannel_QPixmap
(void* __this_nativeId,
 void* arg__1)
{
    const QPixmap&  __qt_arg__1 = (const QPixmap& ) *(QPixmap *)arg__1;
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    __qt_this->setAlphaChannel((const QPixmap& )__qt_arg__1);

}

// QPixmap::setMask(const QBitmap & arg__1)
QTD_EXTERN QTD_EXPORT void qtd_QPixmap_setMask_QBitmap
(void* __this_nativeId,
 void* arg__1)
{
    const QBitmap&  __qt_arg__1 = (const QBitmap& ) *(QBitmap *)arg__1;
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    __qt_this->setMask((const QBitmap& )__qt_arg__1);

}

// QPixmap::size() const
QTD_EXTERN QTD_EXPORT void qtd_QPixmap_size_const
(void* __this_nativeId,
 QSize * __d_return_value)
{
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    QSize  __qt_return_value = __qt_this->size();

    *__d_return_value = __qt_return_value;

}

// QPixmap::toImage() const
QTD_EXTERN QTD_EXPORT void* qtd_QPixmap_toImage_const
(void* __this_nativeId)
{
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    QImage  __qt_return_value = __qt_this->toImage();

    void* __d_return_value = (void*) new QImage(__qt_return_value);

    return __d_return_value;
}

// QPixmap::transformed(const QMatrix & arg__1, Qt::TransformationMode mode) const
QTD_EXTERN QTD_EXPORT void* qtd_QPixmap_transformed_QMatrix_TransformationMode_const
(void* __this_nativeId,
 void* arg__1,
 int mode1)
{
    const QMatrix&  __qt_arg__1 = (const QMatrix& ) *(QMatrix *)arg__1;
    Qt::TransformationMode __qt_mode1 = (Qt::TransformationMode) mode1;
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    QPixmap  __qt_return_value = __qt_this->transformed((const QMatrix& )__qt_arg__1, (Qt::TransformationMode )__qt_mode1);

    void* __d_return_value = (void*) new QPixmap(__qt_return_value);

    return __d_return_value;
}

// QPixmap::transformed(const QTransform & arg__1, Qt::TransformationMode mode) const
QTD_EXTERN QTD_EXPORT void* qtd_QPixmap_transformed_QTransform_TransformationMode_const
(void* __this_nativeId,
 void* arg__1,
 int mode1)
{
    const QTransform&  __qt_arg__1 = (const QTransform& ) *(QTransform *)arg__1;
    Qt::TransformationMode __qt_mode1 = (Qt::TransformationMode) mode1;
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    QPixmap  __qt_return_value = __qt_this->transformed((const QTransform& )__qt_arg__1, (Qt::TransformationMode )__qt_mode1);

    void* __d_return_value = (void*) new QPixmap(__qt_return_value);

    return __d_return_value;
}

// QPixmap::width() const
QTD_EXTERN QTD_EXPORT int qtd_QPixmap_width_const
(void* __this_nativeId)
{
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::width();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPixmap::widthMM() const
QTD_EXTERN QTD_EXPORT int qtd_QPixmap_widthMM_const
(void* __this_nativeId)
{
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    int  __qt_return_value = __qt_this->QPaintDevice::widthMM();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPixmap::devType() const
QTD_EXTERN QTD_EXPORT int qtd_QPixmap_devType_const
(void* __this_nativeId)
{
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPixmap*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_devType(__do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPixmap::metric(QPaintDevice::PaintDeviceMetric arg__1) const
QTD_EXTERN QTD_EXPORT int qtd_QPixmap_metric_PaintDeviceMetric_const
(void* __this_nativeId,
 int arg__1)
{
    QPaintDevice::PaintDeviceMetric __qt_arg__1 = (QPaintDevice::PaintDeviceMetric) arg__1;
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPixmap*)__this_nativeId) != NULL;
    int  __qt_return_value = __qt_this->__override_metric((QPaintDevice::PaintDeviceMetric )__qt_arg__1, __do_static_call);

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPixmap::paintEngine() const
QTD_EXTERN QTD_EXPORT void* qtd_QPixmap_paintEngine_const
(void* __this_nativeId)
{
    QPixmap_QtDShell *__qt_this = (QPixmap_QtDShell *) __this_nativeId;
    bool __do_static_call = dynamic_cast<QtdObjectLink*>((QPixmap*)__this_nativeId) != NULL;
    QPaintEngine*  __qt_return_value = __qt_this->__override_paintEngine(__do_static_call);

    void* __d_return_value = (void*) __qt_return_value;

    return __d_return_value;
}

// QPixmap::defaultDepth()
QTD_EXTERN QTD_EXPORT int qtd_QPixmap_defaultDepth
()
{
    int  __qt_return_value = QPixmap_QtDShell::defaultDepth();

    int __d_return_value = __qt_return_value;

    return __d_return_value;
}

// QPixmap::fromImage(const QImage & image, QFlags<Qt::ImageConversionFlag> flags)
QTD_EXTERN QTD_EXPORT void* qtd_QPixmap_fromImage_QImage_ImageConversionFlags
(void* image0,
 int flags1)
{
    const QImage&  __qt_image0 = (const QImage& ) *(QImage *)image0;
    QFlags<Qt::ImageConversionFlag> __qt_flags1 = (QFlags<Qt::ImageConversionFlag>) flags1;
    QPixmap  __qt_return_value = QPixmap_QtDShell::fromImage((const QImage& )__qt_image0, (Qt::ImageConversionFlags )__qt_flags1);

    void* __d_return_value = (void*) new QPixmap(__qt_return_value);

    return __d_return_value;
}

// QPixmap::fromImageReader(QImageReader * imageReader, QFlags<Qt::ImageConversionFlag> flags)
QTD_EXTERN QTD_EXPORT void* qtd_QPixmap_fromImageReader_QImageReader_ImageConversionFlags
(void* imageReader0,
 int flags1)
{
    QImageReader*  __qt_imageReader0 = (QImageReader* ) imageReader0;
    QFlags<Qt::ImageConversionFlag> __qt_flags1 = (QFlags<Qt::ImageConversionFlag>) flags1;
    QPixmap  __qt_return_value = QPixmap_QtDShell::fromImageReader((QImageReader* )__qt_imageReader0, (Qt::ImageConversionFlags )__qt_flags1);

    void* __d_return_value = (void*) new QPixmap(__qt_return_value);

    return __d_return_value;
}

// QPixmap::grabWidget(QWidget * widget, const QRect & rect)
QTD_EXTERN QTD_EXPORT void* qtd_QPixmap_grabWidget_QWidget_QRect
(void* widget0,
 QRect rect1)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QPixmap  __qt_return_value = QPixmap_QtDShell::grabWidget((QWidget* )__qt_widget0, (const QRect& )rect1);

    void* __d_return_value = (void*) new QPixmap(__qt_return_value);

    return __d_return_value;
}

// QPixmap::grabWidget(QWidget * widget, int x, int y, int w, int h)
QTD_EXTERN QTD_EXPORT void* qtd_QPixmap_grabWidget_QWidget_int_int_int_int
(void* widget0,
 int x1,
 int y2,
 int w3,
 int h4)
{
    QWidget*  __qt_widget0 = (QWidget* ) widget0;
    QPixmap  __qt_return_value = QPixmap_QtDShell::grabWidget((QWidget* )__qt_widget0, (int )x1, (int )y2, (int )w3, (int )h4);

    void* __d_return_value = (void*) new QPixmap(__qt_return_value);

    return __d_return_value;
}

// QPixmap::grabWindow(WId arg__1, int x, int y, int w, int h)
QTD_EXTERN QTD_EXPORT void* qtd_QPixmap_grabWindow_long_int_int_int_int
(WId arg__1,
 int x1,
 int y2,
 int w3,
 int h4)
{
    QPixmap  __qt_return_value = QPixmap_QtDShell::grabWindow((WId )arg__1, (int )x1, (int )y2, (int )w3, (int )h4);

    void* __d_return_value = (void*) new QPixmap(__qt_return_value);

    return __d_return_value;
}

// QPixmap::trueMatrix(const QMatrix & m, int w, int h)
QTD_EXTERN QTD_EXPORT void* qtd_QPixmap_trueMatrix_QMatrix_int_int
(void* m0,
 int w1,
 int h2)
{
    const QMatrix&  __qt_m0 = (const QMatrix& ) *(QMatrix *)m0;
    QMatrix  __qt_return_value = QPixmap_QtDShell::trueMatrix((const QMatrix& )__qt_m0, (int )w1, (int )h2);

    void* __d_return_value = (void*) new QMatrix(__qt_return_value);

    return __d_return_value;
}

// QPixmap::trueMatrix(const QTransform & m, int w, int h)
QTD_EXTERN QTD_EXPORT void* qtd_QPixmap_trueMatrix_QTransform_int_int
(void* m0,
 int w1,
 int h2)
{
    const QTransform&  __qt_m0 = (const QTransform& ) *(QTransform *)m0;
    QTransform  __qt_return_value = QPixmap_QtDShell::trueMatrix((const QTransform& )__qt_m0, (int )w1, (int )h2);

    void* __d_return_value = (void*) new QTransform(__qt_return_value);

    return __d_return_value;
}

// ---externC---end
// Field accessors
QTD_EXTERN QTD_EXPORT bool qtd_QPixmap_QTypeInfo_isComplex() { return (bool) QTypeInfo<QPixmap>::isComplex; }
QTD_EXTERN QTD_EXPORT bool qtd_QPixmap_QTypeInfo_isStatic() { return (bool) QTypeInfo<QPixmap>::isStatic; }
QTD_EXTERN QTD_EXPORT bool qtd_QPixmap_QTypeInfo_isLarge() { return (bool) QTypeInfo<QPixmap>::isLarge; }
QTD_EXTERN QTD_EXPORT bool qtd_QPixmap_QTypeInfo_isPointer() { return (bool) QTypeInfo<QPixmap>::isPointer; }
QTD_EXTERN QTD_EXPORT bool qtd_QPixmap_QTypeInfo_isDummy() { return (bool) QTypeInfo<QPixmap>::isDummy; }


QTD_EXTERN QTD_EXPORT void qtd_QPixmap_placed_copy(void* orig, void* place) {
    const QPixmap_QtDShell&  __qt_orig = (const QPixmap_QtDShell& ) *(QPixmap_QtDShell *)orig;
    QPixmap *result = new (place) QPixmap (__qt_orig);
}

QTD_EXTERN QTD_EXPORT void* qtd_QPixmap_native_copy(void* orig) {
    const QPixmap_QtDShell&  __qt_orig = (const QPixmap_QtDShell& ) *(QPixmap_QtDShell *)orig;
    QPixmap *result = new QPixmap (__qt_orig);
    return result;
}

